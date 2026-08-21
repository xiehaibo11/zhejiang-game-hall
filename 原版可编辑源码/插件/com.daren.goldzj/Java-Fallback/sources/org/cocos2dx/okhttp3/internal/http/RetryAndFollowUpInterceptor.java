package org.cocos2dx.okhttp3.internal.http;

import android.support.v7.widget.ActivityChooserView;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InterruptedIOException;
import java.net.HttpRetryException;
import java.net.ProtocolException;
import java.net.Proxy;
import java.net.SocketTimeoutException;
import java.security.cert.CertificateException;
import javax.net.ssl.HostnameVerifier;
import javax.net.ssl.SSLHandshakeException;
import javax.net.ssl.SSLPeerUnverifiedException;
import javax.net.ssl.SSLSocketFactory;
import org.cocos2dx.okhttp3.Address;
import org.cocos2dx.okhttp3.Call;
import org.cocos2dx.okhttp3.CertificatePinner;
import org.cocos2dx.okhttp3.EventListener;
import org.cocos2dx.okhttp3.HttpUrl;
import org.cocos2dx.okhttp3.Interceptor;
import org.cocos2dx.okhttp3.OkHttpClient;
import org.cocos2dx.okhttp3.Request;
import org.cocos2dx.okhttp3.RequestBody;
import org.cocos2dx.okhttp3.Response;
import org.cocos2dx.okhttp3.Route;
import org.cocos2dx.okhttp3.internal.Util;
import org.cocos2dx.okhttp3.internal.connection.RouteException;
import org.cocos2dx.okhttp3.internal.connection.StreamAllocation;
import org.cocos2dx.okhttp3.internal.http2.ConnectionShutdownException;

public final class RetryAndFollowUpInterceptor implements Interceptor {
    private static final int MAX_FOLLOW_UPS = 20;
    private Object callStackTrace;
    private volatile boolean canceled;
    private final OkHttpClient client;
    private final boolean forWebSocket;
    private volatile StreamAllocation streamAllocation;

    public RetryAndFollowUpInterceptor(OkHttpClient r1, boolean r2) {
        this.client = r1;
        this.forWebSocket = r2;
    }

    public void cancel() {
        this.canceled = true;
        StreamAllocation r0 = this.streamAllocation;
        if (r0 == null) goto L6;
        r0.cancel();
        return;
    }

    public boolean isCanceled() {
        return this.canceled;
    }

    public void setCallStackTrace(Object r1) {
        this.callStackTrace = r1;
    }

    public StreamAllocation streamAllocation() {
        return this.streamAllocation;
    }

    @Override
    public Response intercept(Interceptor.Chain r15) throws IOException {
        Request r0 = r15.request();
        RealInterceptorChain r152 = (RealInterceptorChain) r15;
        Call r7 = r152.call();
        EventListener r8 = r152.eventListener();
        StreamAllocation r9 = new StreamAllocation(this.client.connectionPool(), createAddress(r0.url()), r7, r8, this.callStackTrace);
        this.streamAllocation = r9;
        Response r1 = null;
        int r2 = 0;
    L4:
        if (this.canceled == true) goto L50;
        Response r02 = r152.proceed(r0, r9, null, null);     // Catch: Throwable -> L31 IOException -> L33 RouteException -> L42
    L6:
        if (r1 == null) goto L52;
        r02 = r02.newBuilder().priorResponse(r1.newBuilder().body(null).build()).build();
    L52:
        Request r12 = followUpRequest(r02, r9.route());     // Catch: IOException -> L28
        if (r12 == null) goto L10;
        Util.closeQuietly(r02.body());
        int r13 = r2 + 1;
        if (r13 > 20) goto L26;
        if ((r12.body() instanceof UnrepeatableRequestBody) == true) goto L24;
        if (sameConnection(r02, r12.url()) == true) goto L20;
        r9.release();
        r9 = new StreamAllocation(this.client.connectionPool(), createAddress(r12.url()), r7, r8, this.callStackTrace);
        this.streamAllocation = r9;
    L21:
        r1 = r02;
        r0 = r12;
        r2 = r13;
        goto L4
    L20:
        if (r9.codec() == null) goto L21;
        throw new IllegalStateException("Closing the body of " + r02 + " didn't close its backing stream. Bad interceptor?");
    L24:
        r9.release();
        throw new HttpRetryException("Cannot retry streamed HTTP body", r02.code());
    L26:
        r9.release();
        throw new ProtocolException("Too many follow-up requests: " + r13);
    L10:
        r9.release();
        return r02;
    L28:
        e = move-exception;
        r9.release();
        throw e;
    L31:
        th = move-exception;
        r9.streamFailed(null);
        r9.release();
        throw th;
    L33:
        e = move-exception;
        if ((e instanceof ConnectionShutdownException) == true) goto L37;
        boolean r4 = true;
    L39:
        if (recover(e, r9, r4, r0) == true) goto L4;
        throw e;     // Catch: Throwable -> L31
    L37:
        r4 = false;
    L42:
        e = move-exception;
        if (recover(e.getLastConnectException(), r9, false, r0) == true) goto L4;
        throw e.getFirstConnectException();     // Catch: Throwable -> L31
    L50:
        r9.release();
        throw new IOException("Canceled");
    }

    private Address createAddress(HttpUrl r18) {
        if (r18.isHttps() == false) goto L5;
        SSLSocketFactory r2 = this.client.sslSocketFactory();
        HostnameVerifier r10 = this.client.hostnameVerifier();
        SSLSocketFactory r9 = r2;
        CertificatePinner r11 = this.client.certificatePinner();
    L7:
        return new Address(r18.host(), r18.port(), this.client.dns(), this.client.socketFactory(), r9, r10, r11, this.client.proxyAuthenticator(), this.client.proxy(), this.client.protocols(), this.client.connectionSpecs(), this.client.proxySelector());
    L5:
        r9 = null;
        r10 = null;
        r11 = null;
        goto L7
    }

    private boolean recover(IOException r3, StreamAllocation r4, boolean r5, Request r6) {
        r4.streamFailed(r3);
        if (this.client.retryOnConnectionFailure() == true) goto L5;
        return false;
    L5:
        if (r5 == false) goto L10;
        if (requestIsUnrepeatable(r3, r6) == false) goto L10;
        return false;
    L10:
        if (isRecoverable(r3, r5) == true) goto L13;
        return false;
    L13:
        if (r4.hasMoreRoutes() == true) goto L15;
        return false;
    L15:
        return true;
    }

    private boolean requestIsUnrepeatable(IOException r1, Request r2) {
        if ((r2.body() instanceof UnrepeatableRequestBody) == false) goto L5;
    L8:
        return true;
    L5:
        if ((r1 instanceof FileNotFoundException) == true) goto L8;
        return false;
    }

    private boolean isRecoverable(IOException r4, boolean r5) {
        if ((r4 instanceof ProtocolException) == false) goto L6;
        return false;
    L6:
        if ((r4 instanceof InterruptedIOException) == false) goto L13;
        if ((r4 instanceof SocketTimeoutException) == false) goto L21;
        if (r5 == true) goto L22;
        return true;
    L22:
        return false;
    L21:
        return false;
    L13:
        if ((r4 instanceof SSLHandshakeException) == false) goto L18;
        if ((r4.getCause() instanceof CertificateException) == false) goto L18;
        return false;
    L18:
        if ((r4 instanceof SSLPeerUnverifiedException) == false) goto L20;
        return false;
    L20:
        return true;
    }

    private Request followUpRequest(Response r7, Route r8) throws IOException {
        if (r7 == null) goto L86;
        int r0 = r7.code();
        String r1 = r7.request().method();
        RequestBody r4 = null;
        if (r0 == 307) goto L52;
        if (r0 == 308) goto L52;
        if (r0 == 401) goto L50;
        if (r0 == 503) goto L40;
        if (r0 == 407) goto L34;
        if (r0 == 408) goto L18;
        switch(r0) {
            case 300: goto L57;
            case 301: goto L57;
            case 302: goto L57;
            case 303: goto L57;
            default: goto L16;
        };
    L16:
        return null;
    L57:
        if (this.client.followRedirects() == true) goto L59;
        return null;
    L59:
        String r82 = r7.header("Location");
        if (r82 != null) goto L62;
        return null;
    L62:
        HttpUrl r83 = r7.request().url().resolve(r82);
        if (r83 != null) goto L66;
        return null;
    L66:
        if (r83.scheme().equals(r7.request().url().scheme()) == false) goto L68;
    L70:
        Request.Builder r02 = r7.request().newBuilder();
        if (HttpMethod.permitsRequestBody(r1) == false) goto L81;
        boolean r2 = HttpMethod.redirectsWithBody(r1);
        if (HttpMethod.redirectsToGet(r1) == false) goto L75;
        r02.method("GET", null);
    L78:
        if (r2 == true) goto L81;
        r02.removeHeader("Transfer-Encoding");
        r02.removeHeader("Content-Length");
        r02.removeHeader("Content-Type");
        goto L81
    L75:
        if (r2 == false) goto L77;
        r4 = r7.request().body();
    L77:
        r02.method(r1, r4);
    L81:
        if (sameConnection(r7, r83) == true) goto L84;
        r02.removeHeader("Authorization");
    L84:
        return r02.url(r83).build();
    L68:
        if (this.client.followSslRedirects() == true) goto L70;
        return null;
    L18:
        if (this.client.retryOnConnectionFailure() == true) goto L21;
        return null;
    L21:
        if ((r7.request().body() instanceof UnrepeatableRequestBody) == false) goto L24;
        return null;
    L24:
        if (r7.priorResponse() == null) goto L29;
        if (r7.priorResponse().code() != 408) goto L29;
        return null;
    L29:
        if (retryAfter(r7, 0) <= 0) goto L32;
        return null;
    L32:
        return r7.request();
    L34:
        if (r8.proxy().type() != Proxy.Type.HTTP) goto L38;
        return this.client.proxyAuthenticator().authenticate(r8, r7);
    L38:
        throw new ProtocolException("Received HTTP_PROXY_AUTH (407) code while not using proxy");
    L40:
        if (r7.priorResponse() == null) goto L45;
        if (r7.priorResponse().code() != 503) goto L45;
        return null;
    L45:
        if (retryAfter(r7, ActivityChooserView.ActivityChooserViewAdapter.MAX_ACTIVITY_COUNT_UNLIMITED) == 0) goto L47;
        return null;
    L47:
        return r7.request();
    L50:
        return this.client.authenticator().authenticate(r8, r7);
    L52:
        if (r1.equals("GET") == true) goto L57;
        if (r1.equals("HEAD") == true) goto L57;
        return null;
    L86:
        throw new IllegalStateException();
    }

    private int retryAfter(Response r2, int r3) {
        String r22 = r2.header("Retry-After");
        if (r22 != null) goto L6;
        return r3;
    L6:
        if (r22.matches("\\d+") == true) goto L8;
        return ActivityChooserView.ActivityChooserViewAdapter.MAX_ACTIVITY_COUNT_UNLIMITED;
    L8:
        return Integer.valueOf(r22).intValue();
    }

    private boolean sameConnection(Response r3, HttpUrl r4) {
        HttpUrl r32 = r3.request().url();
        if (r32.host().equals(r4.host()) == true) goto L5;
    L9:
        return false;
    L5:
        if (r32.port() != r4.port()) goto L9;
        if (r32.scheme().equals(r4.scheme()) == false) goto L9;
        return true;
    }
}
