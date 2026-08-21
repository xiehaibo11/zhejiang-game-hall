package okhttp3.internal.http;

public final class RealInterceptorChain implements okhttp3.Interceptor.Chain {
    private final okhttp3.Call call;
    private int calls;
    private final int connectTimeout;
    private final okhttp3.internal.connection.RealConnection connection;
    private final okhttp3.EventListener eventListener;
    private final okhttp3.internal.http.HttpCodec httpCodec;
    private final int index;
    private final java.util.List<okhttp3.Interceptor> interceptors;
    private final int readTimeout;
    private final okhttp3.Request request;
    private final okhttp3.internal.connection.StreamAllocation streamAllocation;
    private final int writeTimeout;

    public RealInterceptorChain(java.util.List<okhttp3.Interceptor> r1, okhttp3.internal.connection.StreamAllocation r2, okhttp3.internal.http.HttpCodec r3, okhttp3.internal.connection.RealConnection r4, int r5, okhttp3.Request r6, okhttp3.Call r7, okhttp3.EventListener r8, int r9, int r10, int r11) {
            r0 = this;
            r0.<init>()
            r0.interceptors = r1
            r0.connection = r4
            r0.streamAllocation = r2
            r0.httpCodec = r3
            r0.index = r5
            r0.request = r6
            r0.call = r7
            r0.eventListener = r8
            r0.connectTimeout = r9
            r0.readTimeout = r10
            r0.writeTimeout = r11
            return
    }

    @Override
    public okhttp3.Call call() {
            r1 = this;
            okhttp3.Call r0 = r1.call
            return r0
    }

    @Override
    public int connectTimeoutMillis() {
            r1 = this;
            int r0 = r1.connectTimeout
            return r0
    }

    @Override
    public okhttp3.Connection connection() {
            r1 = this;
            okhttp3.internal.connection.RealConnection r0 = r1.connection
            return r0
    }

    public okhttp3.EventListener eventListener() {
            r1 = this;
            okhttp3.EventListener r0 = r1.eventListener
            return r0
    }

    public okhttp3.internal.http.HttpCodec httpStream() {
            r1 = this;
            okhttp3.internal.http.HttpCodec r0 = r1.httpCodec
            return r0
    }

    @Override
    public okhttp3.Response proceed(okhttp3.Request r4) throws java.io.IOException {
            r3 = this;
            okhttp3.internal.connection.StreamAllocation r0 = r3.streamAllocation
            okhttp3.internal.http.HttpCodec r1 = r3.httpCodec
            okhttp3.internal.connection.RealConnection r2 = r3.connection
            okhttp3.Response r4 = r3.proceed(r4, r0, r1, r2)
            return r4
    }

    public okhttp3.Response proceed(okhttp3.Request r18, okhttp3.internal.connection.StreamAllocation r19, okhttp3.internal.http.HttpCodec r20, okhttp3.internal.connection.RealConnection r21) throws java.io.IOException {
            r17 = this;
            r0 = r17
            int r1 = r0.index
            java.util.List<okhttp3.Interceptor> r2 = r0.interceptors
            int r2 = r2.size()
            if (r1 >= r2) goto L10b
            int r1 = r0.calls
            r2 = 1
            int r1 = r1 + r2
            r0.calls = r1
            okhttp3.internal.http.HttpCodec r1 = r0.httpCodec
            java.lang.String r3 = "network interceptor "
            if (r1 == 0) goto L48
            okhttp3.internal.connection.RealConnection r1 = r0.connection
            okhttp3.HttpUrl r4 = r18.url()
            boolean r1 = r1.supportsUrl(r4)
            if (r1 == 0) goto L25
            goto L48
        L25:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r3)
            java.util.List<okhttp3.Interceptor> r3 = r0.interceptors
            int r5 = r0.index
            int r5 = r5 - r2
            java.lang.Object r2 = r3.get(r5)
            r4.append(r2)
            java.lang.String r2 = " must retain the same host and port"
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r1.<init>(r2)
            throw r1
        L48:
            okhttp3.internal.http.HttpCodec r1 = r0.httpCodec
            java.lang.String r4 = " must call proceed() exactly once"
            if (r1 == 0) goto L74
            int r1 = r0.calls
            if (r1 > r2) goto L53
            goto L74
        L53:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r3)
            java.util.List<okhttp3.Interceptor> r3 = r0.interceptors
            int r6 = r0.index
            int r6 = r6 - r2
            java.lang.Object r2 = r3.get(r6)
            r5.append(r2)
            r5.append(r4)
            java.lang.String r2 = r5.toString()
            r1.<init>(r2)
            throw r1
        L74:
            okhttp3.internal.http.RealInterceptorChain r1 = new okhttp3.internal.http.RealInterceptorChain
            java.util.List<okhttp3.Interceptor> r6 = r0.interceptors
            int r5 = r0.index
            int r10 = r5 + 1
            okhttp3.Call r12 = r0.call
            okhttp3.EventListener r13 = r0.eventListener
            int r14 = r0.connectTimeout
            int r15 = r0.readTimeout
            int r11 = r0.writeTimeout
            r5 = r1
            r7 = r19
            r8 = r20
            r9 = r21
            r16 = r11
            r11 = r18
            r5.<init>(r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16)
            java.util.List<okhttp3.Interceptor> r5 = r0.interceptors
            int r6 = r0.index
            java.lang.Object r5 = r5.get(r6)
            okhttp3.Interceptor r5 = (okhttp3.Interceptor) r5
            okhttp3.Response r6 = r5.intercept(r1)
            if (r20 == 0) goto Lcc
            int r7 = r0.index
            int r7 = r7 + r2
            java.util.List<okhttp3.Interceptor> r8 = r0.interceptors
            int r8 = r8.size()
            if (r7 >= r8) goto Lcc
            int r1 = r1.calls
            if (r1 != r2) goto Lb4
            goto Lcc
        Lb4:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r3)
            r2.append(r5)
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
        Lcc:
            java.lang.String r1 = "interceptor "
            if (r6 == 0) goto Lf1
            okhttp3.ResponseBody r2 = r6.body()
            if (r2 == 0) goto Ld7
            return r6
        Ld7:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            r3.append(r5)
            java.lang.String r1 = " returned a response with no body"
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            r2.<init>(r1)
            throw r2
        Lf1:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            r3.append(r5)
            java.lang.String r1 = " returned null"
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            r2.<init>(r1)
            throw r2
        L10b:
            java.lang.AssertionError r1 = new java.lang.AssertionError
            r1.<init>()
            throw r1
    }

    @Override
    public int readTimeoutMillis() {
            r1 = this;
            int r0 = r1.readTimeout
            return r0
    }

    @Override
    public okhttp3.Request request() {
            r1 = this;
            okhttp3.Request r0 = r1.request
            return r0
    }

    public okhttp3.internal.connection.StreamAllocation streamAllocation() {
            r1 = this;
            okhttp3.internal.connection.StreamAllocation r0 = r1.streamAllocation
            return r0
    }

    @Override
    public okhttp3.Interceptor.Chain withConnectTimeout(int r17, java.util.concurrent.TimeUnit r18) {
            r16 = this;
            r0 = r16
            r1 = r17
            long r1 = (long) r1
            java.lang.String r3 = "timeout"
            r4 = r18
            int r13 = okhttp3.internal.Util.checkDuration(r3, r1, r4)
            okhttp3.internal.http.RealInterceptorChain r1 = new okhttp3.internal.http.RealInterceptorChain
            java.util.List<okhttp3.Interceptor> r5 = r0.interceptors
            okhttp3.internal.connection.StreamAllocation r6 = r0.streamAllocation
            okhttp3.internal.http.HttpCodec r7 = r0.httpCodec
            okhttp3.internal.connection.RealConnection r8 = r0.connection
            int r9 = r0.index
            okhttp3.Request r10 = r0.request
            okhttp3.Call r11 = r0.call
            okhttp3.EventListener r12 = r0.eventListener
            int r14 = r0.readTimeout
            int r15 = r0.writeTimeout
            r4 = r1
            r4.<init>(r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15)
            return r1
    }

    @Override
    public okhttp3.Interceptor.Chain withReadTimeout(int r17, java.util.concurrent.TimeUnit r18) {
            r16 = this;
            r0 = r16
            r1 = r17
            long r1 = (long) r1
            java.lang.String r3 = "timeout"
            r4 = r18
            int r14 = okhttp3.internal.Util.checkDuration(r3, r1, r4)
            okhttp3.internal.http.RealInterceptorChain r1 = new okhttp3.internal.http.RealInterceptorChain
            java.util.List<okhttp3.Interceptor> r5 = r0.interceptors
            okhttp3.internal.connection.StreamAllocation r6 = r0.streamAllocation
            okhttp3.internal.http.HttpCodec r7 = r0.httpCodec
            okhttp3.internal.connection.RealConnection r8 = r0.connection
            int r9 = r0.index
            okhttp3.Request r10 = r0.request
            okhttp3.Call r11 = r0.call
            okhttp3.EventListener r12 = r0.eventListener
            int r13 = r0.connectTimeout
            int r15 = r0.writeTimeout
            r4 = r1
            r4.<init>(r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15)
            return r1
    }

    @Override
    public okhttp3.Interceptor.Chain withWriteTimeout(int r17, java.util.concurrent.TimeUnit r18) {
            r16 = this;
            r0 = r16
            r1 = r17
            long r1 = (long) r1
            java.lang.String r3 = "timeout"
            r4 = r18
            int r15 = okhttp3.internal.Util.checkDuration(r3, r1, r4)
            okhttp3.internal.http.RealInterceptorChain r1 = new okhttp3.internal.http.RealInterceptorChain
            java.util.List<okhttp3.Interceptor> r5 = r0.interceptors
            okhttp3.internal.connection.StreamAllocation r6 = r0.streamAllocation
            okhttp3.internal.http.HttpCodec r7 = r0.httpCodec
            okhttp3.internal.connection.RealConnection r8 = r0.connection
            int r9 = r0.index
            okhttp3.Request r10 = r0.request
            okhttp3.Call r11 = r0.call
            okhttp3.EventListener r12 = r0.eventListener
            int r13 = r0.connectTimeout
            int r14 = r0.readTimeout
            r4 = r1
            r4.<init>(r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15)
            return r1
    }

    @Override
    public int writeTimeoutMillis() {
            r1 = this;
            int r0 = r1.writeTimeout
            return r0
    }
}
