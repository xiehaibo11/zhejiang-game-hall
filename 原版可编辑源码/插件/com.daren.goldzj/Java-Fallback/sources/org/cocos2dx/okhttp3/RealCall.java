package org.cocos2dx.okhttp3;

import android.support.v4.app.NotificationCompat;
import java.io.IOException;
import java.io.InterruptedIOException;
import java.util.ArrayList;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.RejectedExecutionException;
import java.util.concurrent.TimeUnit;
import javax.annotation.Nullable;
import org.cocos2dx.okhttp3.internal.NamedRunnable;
import org.cocos2dx.okhttp3.internal.Util;
import org.cocos2dx.okhttp3.internal.cache.CacheInterceptor;
import org.cocos2dx.okhttp3.internal.connection.ConnectInterceptor;
import org.cocos2dx.okhttp3.internal.connection.StreamAllocation;
import org.cocos2dx.okhttp3.internal.http.BridgeInterceptor;
import org.cocos2dx.okhttp3.internal.http.CallServerInterceptor;
import org.cocos2dx.okhttp3.internal.http.RealInterceptorChain;
import org.cocos2dx.okhttp3.internal.http.RetryAndFollowUpInterceptor;
import org.cocos2dx.okhttp3.internal.platform.Platform;
import org.cocos2dx.okio.AsyncTimeout;
import org.cocos2dx.okio.Timeout;

final class RealCall implements Call {
    final OkHttpClient client;

    @Nullable
    private EventListener eventListener;
    private boolean executed;
    final boolean forWebSocket;
    final Request originalRequest;
    final RetryAndFollowUpInterceptor retryAndFollowUpInterceptor;
    final AsyncTimeout timeout;

    final class AsyncCall extends NamedRunnable {
        static final boolean $assertionsDisabled = false;
        private final Callback responseCallback;
        final RealCall this$0;

        static {
        }

        AsyncCall(RealCall r3, Callback r4) {
            this.this$0 = r3;
            super("OkHttp %s", new Object[]{r3.redactedUrl()});
            this.responseCallback = r4;
        }

        String host() {
            return this.this$0.originalRequest.url().host();
        }

        Request request() {
            return this.this$0.originalRequest;
        }

        RealCall get() {
            return this.this$0;
        }

        void executeOn(ExecutorService r3) {
            r3.execute(this);     // Catch: Throwable -> L4 RejectedExecutionException -> L6
        L12:
            return;
        L4:
            th = move-exception;
            this.this$0.client.dispatcher().finished(this);
            throw th;
        L6:
            e = move-exception;
            InterruptedIOException r0 = new InterruptedIOException("executor rejected");     // Catch: Throwable -> L4
            r0.initCause(e);     // Catch: Throwable -> L4
            RealCall.access$000(this.this$0).callFailed(this.this$0, r0);     // Catch: Throwable -> L4
            this.responseCallback.onFailure(this.this$0, r0);     // Catch: Throwable -> L4
            this.this$0.client.dispatcher().finished(this);
            goto L12
        }

        @Override
        protected void execute() {
            this.this$0.timeout.enter();
            boolean r1 = true;
            this.responseCallback.onResponse(this.this$0, this.this$0.getResponseWithInterceptorChain());     // Catch: Throwable -> L7 IOException -> L9 Throwable -> L11
        L6:
            this.this$0.client.dispatcher().finished(this);
            return;
        L9:
            IOException e = e;
        L21:
            IOException r0 = this.this$0.timeoutExit(e);     // Catch: Throwable -> L11
            if (r1 == false) goto L24;
            Platform.get().log(4, "Callback failure for " + this.this$0.toLoggableString(), r0);     // Catch: Throwable -> L11
            goto L6
        L24:
            RealCall.access$000(this.this$0).callFailed(this.this$0, r0);     // Catch: Throwable -> L11
            this.responseCallback.onFailure(this.this$0, r0);     // Catch: Throwable -> L11
        L7:
            Throwable th = th;
        L15:
            this.this$0.cancel();     // Catch: Throwable -> L11
            if (r1 == true) goto L18;
            this.responseCallback.onFailure(this.this$0, new IOException("canceled due to " + th));     // Catch: Throwable -> L11
        L18:
            throw th;     // Catch: Throwable -> L11
        L11:
            th = move-exception;
            this.this$0.client.dispatcher().finished(this);
            throw th;
        L19:
            e = move-exception;
            e = e;
            r1 = false;
        L13:
            th = move-exception;
            th = th;
            r1 = false;
            goto L15
        }
    }

    static EventListener access$000(RealCall r0) {
        return r0.eventListener;
    }

    public Object clone() throws CloneNotSupportedException {
        return clone();
    }

    @Override
    public Call clone() {
        return clone();
    }

    private RealCall(OkHttpClient r3, Request r4, boolean r5) {
        this.client = r3;
        this.originalRequest = r4;
        this.forWebSocket = r5;
        this.retryAndFollowUpInterceptor = new RetryAndFollowUpInterceptor(r3, r5);
        this.timeout = new 1(this);
        this.timeout.timeout(r3.callTimeoutMillis(), TimeUnit.MILLISECONDS);
    }

    static RealCall newRealCall(OkHttpClient r1, Request r2, boolean r3) {
        RealCall r0 = new RealCall(r1, r2, r3);
        r0.eventListener = r1.eventListenerFactory().create(r0);
        return r0;
    }

    @Override
    public Request request() {
        return this.originalRequest;
    }

    @Override
    public Response execute() throws IOException {
        monitor-enter(this);
    L23:
        th = move-exception;
        throw th;
    L4:
        if (this.executed == true) goto L22;
        this.executed = true;     // Catch: Throwable -> L23
        monitor-exit(this);     // Catch: Throwable -> L23
        captureCallStackTrace();
        this.timeout.enter();
        this.eventListener.callStart(this);
        this.client.dispatcher().executed(this);     // Catch: Throwable -> L14 IOException -> L16
        Response r0 = getResponseWithInterceptorChain();     // Catch: Throwable -> L14 IOException -> L16
        if (r0 == null) goto L13;
        this.client.dispatcher().finished(this);
        return r0;
    L13:
        throw new IOException("Canceled");     // Catch: Throwable -> L14 IOException -> L16
    L16:
        e = move-exception;
        IOException r02 = timeoutExit(e);     // Catch: Throwable -> L14
        this.eventListener.callFailed(this, r02);     // Catch: Throwable -> L14
        throw r02;     // Catch: Throwable -> L14
    L14:
        th = move-exception;
        this.client.dispatcher().finished(this);
        throw th;
    L22:
        throw new IllegalStateException("Already Executed");     // Catch: Throwable -> L23
    }

    @Nullable
    IOException timeoutExit(@Nullable IOException r3) {
        if (this.timeout.exit() == true) goto L5;
        return r3;
    L5:
        InterruptedIOException r0 = new InterruptedIOException("timeout");
        if (r3 == null) goto L8;
        r0.initCause(r3);
    L8:
        return r0;
    }

    private void captureCallStackTrace() {
        Object r0 = Platform.get().getStackTraceForCloseable("response.body().close()");
        this.retryAndFollowUpInterceptor.setCallStackTrace(r0);
    }

    @Override
    public void enqueue(Callback r3) {
        monitor-enter(this);
    L11:
        th = move-exception;
        throw th;
    L4:
        if (this.executed == true) goto L10;
        this.executed = true;     // Catch: Throwable -> L11
        monitor-exit(this);     // Catch: Throwable -> L11
        captureCallStackTrace();
        this.eventListener.callStart(this);
        this.client.dispatcher().enqueue(new AsyncCall(this, r3));
        return;
    L10:
        throw new IllegalStateException("Already Executed");     // Catch: Throwable -> L11
    }

    @Override
    public void cancel() {
        this.retryAndFollowUpInterceptor.cancel();
    }

    @Override
    public Timeout timeout() {
        return this.timeout;
    }

    @Override
    public synchronized boolean isExecuted() {
        monitor-enter(this);
        boolean r0 = this.executed;     // Catch: Throwable -> L6
        monitor-exit(this);
        return r0;
    L6:
        th = move-exception;
        throw th;
    }

    @Override
    public boolean isCanceled() {
        return this.retryAndFollowUpInterceptor.isCanceled();
    }

    @Override
    public RealCall clone() {
        return newRealCall(this.client, this.originalRequest, this.forWebSocket);
    }

    StreamAllocation streamAllocation() {
        return this.retryAndFollowUpInterceptor.streamAllocation();
    }

    String toLoggableString() {
        StringBuilder r0 = new StringBuilder();
        if (isCanceled() == false) goto L5;
        String r1 = "canceled ";
    L6:
        r0.append(r1);
        if (this.forWebSocket == false) goto L9;
        String r12 = "web socket";
    L10:
        r0.append(r12);
        r0.append(" to ");
        r0.append(redactedUrl());
        return r0.toString();
    L9:
        r12 = NotificationCompat.CATEGORY_CALL;
        goto L10
    L5:
        r1 = "";
        goto L6
    }

    String redactedUrl() {
        return this.originalRequest.url().redact();
    }

    Response getResponseWithInterceptorChain() throws IOException {
        ArrayList r1 = new ArrayList();
        r1.addAll(this.client.interceptors());
        r1.add(this.retryAndFollowUpInterceptor);
        r1.add(new BridgeInterceptor(this.client.cookieJar()));
        r1.add(new CacheInterceptor(this.client.internalCache()));
        r1.add(new ConnectInterceptor(this.client));
        if (this.forWebSocket == true) goto L5;
        r1.addAll(this.client.networkInterceptors());
    L5:
        r1.add(new CallServerInterceptor(this.forWebSocket));
        Response r0 = new RealInterceptorChain(r1, null, null, null, 0, this.originalRequest, this, this.eventListener, this.client.connectTimeoutMillis(), this.client.readTimeoutMillis(), this.client.writeTimeoutMillis()).proceed(this.originalRequest);
        if (this.retryAndFollowUpInterceptor.isCanceled() == true) goto L8;
        return r0;
    L8:
        Util.closeQuietly(r0);
        throw new IOException("Canceled");
    }
}
