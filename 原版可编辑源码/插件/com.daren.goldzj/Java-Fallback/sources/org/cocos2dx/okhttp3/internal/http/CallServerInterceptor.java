package org.cocos2dx.okhttp3.internal.http;

import java.io.IOException;
import java.net.ProtocolException;
import org.cocos2dx.okhttp3.Interceptor;
import org.cocos2dx.okhttp3.Request;
import org.cocos2dx.okhttp3.Response;
import org.cocos2dx.okhttp3.internal.Util;
import org.cocos2dx.okhttp3.internal.connection.RealConnection;
import org.cocos2dx.okhttp3.internal.connection.StreamAllocation;
import org.cocos2dx.okio.Buffer;
import org.cocos2dx.okio.BufferedSink;
import org.cocos2dx.okio.ForwardingSink;
import org.cocos2dx.okio.Okio;
import org.cocos2dx.okio.Sink;

public final class CallServerInterceptor implements Interceptor {
    private final boolean forWebSocket;

    static final class CountingSink extends ForwardingSink {
        long successfulCount;

        CountingSink(Sink r1) {
            super(r1);
        }

        @Override
        public void write(Buffer r3, long r4) throws IOException {
            super.write(r3, r4);
            this.successfulCount += r4;
        }
    }

    public CallServerInterceptor(boolean r1) {
        this.forWebSocket = r1;
    }

    @Override
    public Response intercept(Interceptor.Chain r12) throws IOException {
        RealInterceptorChain r122 = (RealInterceptorChain) r12;
        HttpCodec r0 = r122.httpStream();
        StreamAllocation r1 = r122.streamAllocation();
        RealConnection r2 = (RealConnection) r122.connection();
        Request r3 = r122.request();
        long r4 = System.currentTimeMillis();
        r122.eventListener().requestHeadersStart(r122.call());
        r0.writeRequestHeaders(r3);
        r122.eventListener().requestHeadersEnd(r122.call(), r3);
        Response.Builder r7 = null;
        if (HttpMethod.permitsRequestBody(r3.method()) == true) goto L5;
    L14:
        r0.finishRequest();
        if (r7 != null) goto L17;
        r122.eventListener().responseHeadersStart(r122.call());
        r7 = r0.readResponseHeaders(false);
    L17:
        Response r6 = r7.request(r3).handshake(r1.connection().handshake()).sentRequestAtMillis(r4).receivedResponseAtMillis(System.currentTimeMillis()).build();
        int r72 = r6.code();
        if (r72 != 100) goto L20;
        r6 = r0.readResponseHeaders(false).request(r3).handshake(r1.connection().handshake()).sentRequestAtMillis(r4).receivedResponseAtMillis(System.currentTimeMillis()).build();
        r72 = r6.code();
    L20:
        r122.eventListener().responseHeadersEnd(r122.call(), r6);
        if (this.forWebSocket == true) goto L23;
    L25:
        Response r123 = r6.newBuilder().body(r0.openResponseBody(r6)).build();
    L27:
        if ("close".equalsIgnoreCase(r123.request().header("Connection")) == false) goto L29;
    L30:
        r1.noNewStreams();
    L32:
        if (r72 == 204) goto L36;
        if (r72 == 205) goto L36;
    L37:
        return r123;
    L36:
        if (r123.body().contentLength() <= 0) goto L37;
        throw new ProtocolException("HTTP " + r72 + " had non-zero Content-Length: " + r123.body().contentLength());
    L29:
        if ("close".equalsIgnoreCase(r123.header("Connection")) == false) goto L32;
    L23:
        if (r72 != 101) goto L25;
        r123 = r6.newBuilder().body(Util.EMPTY_RESPONSE).build();
        goto L27
    L5:
        if (r3.body() == null) goto L14;
        if ("100-continue".equalsIgnoreCase(r3.header("Expect")) == false) goto L9;
        r0.flushRequest();
        r122.eventListener().responseHeadersStart(r122.call());
        r7 = r0.readResponseHeaders(true);
    L9:
        if (r7 != null) goto L12;
        r122.eventListener().requestBodyStart(r122.call());
        CountingSink r22 = new CountingSink(r0.createRequestBody(r3, r3.body().contentLength()));
        BufferedSink r62 = Okio.buffer(r22);
        r3.body().writeTo(r62);
        r62.close();
        r122.eventListener().requestBodyEnd(r122.call(), r22.successfulCount);
        goto L14
    L12:
        if (r2.isMultiplexed() == true) goto L14;
        r1.noNewStreams();
        goto L14
    }
}
