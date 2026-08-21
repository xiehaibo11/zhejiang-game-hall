package okhttp3.internal.connection;

@kotlin.Metadata(d1 = {"\u0000§\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\u0000\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0006*\u0001.\u0018\u00002\u00020\u0001:\u0002deB\u001d\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0002\u0010\bJ\u000e\u00101\u001a\u0002022\u0006\u0010\u0010\u001a\u00020\u000fJ!\u00103\u001a\u0002H4\"\n\b\u0000\u00104*\u0004\u0018\u0001052\u0006\u00106\u001a\u0002H4H\u0002¢\u0006\u0002\u00107J\b\u00108\u001a\u000202H\u0002J\b\u00109\u001a\u000202H\u0016J\b\u0010:\u001a\u00020\u0000H\u0016J\u0010\u0010;\u001a\u00020<2\u0006\u0010=\u001a\u00020>H\u0002J\u0010\u0010?\u001a\u0002022\u0006\u0010@\u001a\u00020AH\u0016J\u0016\u0010B\u001a\u0002022\u0006\u0010C\u001a\u00020\u00052\u0006\u0010D\u001a\u00020\u0007J\b\u0010E\u001a\u00020FH\u0016J\u0015\u0010G\u001a\u0002022\u0006\u0010H\u001a\u00020\u0007H\u0000¢\u0006\u0002\bIJ\r\u0010J\u001a\u00020FH\u0000¢\u0006\u0002\bKJ\u0015\u0010L\u001a\u00020\u001e2\u0006\u0010M\u001a\u00020NH\u0000¢\u0006\u0002\bOJ\b\u0010P\u001a\u00020\u0007H\u0016J\b\u0010Q\u001a\u00020\u0007H\u0016J;\u0010R\u001a\u0002H4\"\n\b\u0000\u00104*\u0004\u0018\u0001052\u0006\u0010\u001d\u001a\u00020\u001e2\u0006\u0010S\u001a\u00020\u00072\u0006\u0010T\u001a\u00020\u00072\u0006\u00106\u001a\u0002H4H\u0000¢\u0006\u0004\bU\u0010VJ\u0019\u0010W\u001a\u0004\u0018\u0001052\b\u00106\u001a\u0004\u0018\u000105H\u0000¢\u0006\u0002\bXJ\r\u0010Y\u001a\u00020ZH\u0000¢\u0006\u0002\b[J\u000f\u0010\\\u001a\u0004\u0018\u00010]H\u0000¢\u0006\u0002\b^J\b\u0010C\u001a\u00020\u0005H\u0016J\u0006\u0010_\u001a\u00020\u0007J\b\u0010-\u001a\u00020`H\u0016J\u0006\u00100\u001a\u000202J!\u0010a\u001a\u0002H4\"\n\b\u0000\u00104*\u0004\u0018\u0001052\u0006\u0010b\u001a\u0002H4H\u0002¢\u0006\u0002\u00107J\b\u0010c\u001a\u00020ZH\u0002R\u0010\u0010\t\u001a\u0004\u0018\u00010\nX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\rR\"\u0010\u0010\u001a\u0004\u0018\u00010\u000f2\b\u0010\u000e\u001a\u0004\u0018\u00010\u000f@BX\u0086\u000e¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u000e\u0010\u0013\u001a\u00020\u0014X\u0082\u0004¢\u0006\u0002\n\u0000R\u001c\u0010\u0015\u001a\u0004\u0018\u00010\u000fX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0016\u0010\u0012\"\u0004\b\u0017\u0010\u0018R\u0014\u0010\u0019\u001a\u00020\u001aX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u001b\u0010\u001cR\u0010\u0010\u001d\u001a\u0004\u0018\u00010\u001eX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u001f\u001a\u0004\u0018\u00010 X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010!\u001a\u00020\"X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010#\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b$\u0010%R\"\u0010&\u001a\u0004\u0018\u00010\u001e2\b\u0010\u000e\u001a\u0004\u0018\u00010\u001e@BX\u0080\u000e¢\u0006\b\n\u0000\u001a\u0004\b'\u0010(R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b)\u0010*R\u000e\u0010+\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010,\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010-\u001a\u00020.X\u0082\u0004¢\u0006\u0004\n\u0002\u0010/R\u000e\u00100\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006f"}, d2 = {"Lokhttp3/internal/connection/RealCall;", "Lokhttp3/Call;", "client", "Lokhttp3/OkHttpClient;", "originalRequest", "Lokhttp3/Request;", "forWebSocket", "", "(Lokhttp3/OkHttpClient;Lokhttp3/Request;Z)V", "callStackTrace", "", "canceled", "getClient", "()Lokhttp3/OkHttpClient;", "<set-?>", "Lokhttp3/internal/connection/RealConnection;", "connection", "getConnection", "()Lokhttp3/internal/connection/RealConnection;", "connectionPool", "Lokhttp3/internal/connection/RealConnectionPool;", "connectionToCancel", "getConnectionToCancel", "setConnectionToCancel", "(Lokhttp3/internal/connection/RealConnection;)V", "eventListener", "Lokhttp3/EventListener;", "getEventListener$okhttp", "()Lokhttp3/EventListener;", "exchange", "Lokhttp3/internal/connection/Exchange;", "exchangeFinder", "Lokhttp3/internal/connection/ExchangeFinder;", "executed", "Ljava/util/concurrent/atomic/AtomicBoolean;", "expectMoreExchanges", "getForWebSocket", "()Z", "interceptorScopedExchange", "getInterceptorScopedExchange$okhttp", "()Lokhttp3/internal/connection/Exchange;", "getOriginalRequest", "()Lokhttp3/Request;", "requestBodyOpen", "responseBodyOpen", "timeout", "okhttp3/internal/connection/RealCall$timeout$1", "Lokhttp3/internal/connection/RealCall$timeout$1;", "timeoutEarlyExit", "acquireConnectionNoEvents", "", "callDone", "E", "Ljava/io/IOException;", "e", "(Ljava/io/IOException;)Ljava/io/IOException;", "callStart", "cancel", "clone", "createAddress", "Lokhttp3/Address;", "url", "Lokhttp3/HttpUrl;", "enqueue", "responseCallback", "Lokhttp3/Callback;", "enterNetworkInterceptorExchange", "request", "newExchangeFinder", "execute", "Lokhttp3/Response;", "exitNetworkInterceptorExchange", "closeExchange", "exitNetworkInterceptorExchange$okhttp", "getResponseWithInterceptorChain", "getResponseWithInterceptorChain$okhttp", "initExchange", "chain", "Lokhttp3/internal/http/RealInterceptorChain;", "initExchange$okhttp", "isCanceled", "isExecuted", "messageDone", "requestDone", "responseDone", "messageDone$okhttp", "(Lokhttp3/internal/connection/Exchange;ZZLjava/io/IOException;)Ljava/io/IOException;", "noMoreExchanges", "noMoreExchanges$okhttp", "redactedUrl", "", "redactedUrl$okhttp", "releaseConnectionNoEvents", "Ljava/net/Socket;", "releaseConnectionNoEvents$okhttp", "retryAfterFailure", "Lokio/AsyncTimeout;", "timeoutExit", "cause", "toLoggableString", "AsyncCall", "CallReference", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class RealCall implements okhttp3.Call {
    private java.lang.Object callStackTrace;
    private volatile boolean canceled;
    private final okhttp3.OkHttpClient client;
    private okhttp3.internal.connection.RealConnection connection;
    private final okhttp3.internal.connection.RealConnectionPool connectionPool;
    private volatile okhttp3.internal.connection.RealConnection connectionToCancel;
    private final okhttp3.EventListener eventListener;
    private volatile okhttp3.internal.connection.Exchange exchange;
    private okhttp3.internal.connection.ExchangeFinder exchangeFinder;
    private final java.util.concurrent.atomic.AtomicBoolean executed;
    private boolean expectMoreExchanges;
    private final boolean forWebSocket;
    private okhttp3.internal.connection.Exchange interceptorScopedExchange;
    private final okhttp3.Request originalRequest;
    private boolean requestBodyOpen;
    private boolean responseBodyOpen;
    private final okhttp3.internal.connection.RealCall.timeout.1 timeout;
    private boolean timeoutEarlyExit;

    @kotlin.Metadata(d1 = {"\u0000@\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0080\u0004\u0018\u00002\u00020\u0001B\r\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004J\u000e\u0010\u0016\u001a\u00020\u00172\u0006\u0010\u0018\u001a\u00020\u0019J\u0012\u0010\u001a\u001a\u00020\u00172\n\u0010\u001b\u001a\u00060\u0000R\u00020\u0006J\b\u0010\u001c\u001a\u00020\u0017H\u0016R\u0011\u0010\u0005\u001a\u00020\u00068F¢\u0006\u0006\u001a\u0004\b\u0007\u0010\bR\u001e\u0010\u000b\u001a\u00020\n2\u0006\u0010\t\u001a\u00020\n@BX\u0086\u000e¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\rR\u0011\u0010\u000e\u001a\u00020\u000f8F¢\u0006\u0006\u001a\u0004\b\u0010\u0010\u0011R\u0011\u0010\u0012\u001a\u00020\u00138F¢\u0006\u0006\u001a\u0004\b\u0014\u0010\u0015R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001d"}, d2 = {"Lokhttp3/internal/connection/RealCall$AsyncCall;", "Ljava/lang/Runnable;", "responseCallback", "Lokhttp3/Callback;", "(Lokhttp3/internal/connection/RealCall;Lokhttp3/Callback;)V", "call", "Lokhttp3/internal/connection/RealCall;", "getCall", "()Lokhttp3/internal/connection/RealCall;", "<set-?>", "Ljava/util/concurrent/atomic/AtomicInteger;", "callsPerHost", "getCallsPerHost", "()Ljava/util/concurrent/atomic/AtomicInteger;", "host", "", "getHost", "()Ljava/lang/String;", "request", "Lokhttp3/Request;", "getRequest", "()Lokhttp3/Request;", "executeOn", "", "executorService", "Ljava/util/concurrent/ExecutorService;", "reuseCallsPerHostFrom", "other", "run", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public final class AsyncCall implements java.lang.Runnable {
        private volatile java.util.concurrent.atomic.AtomicInteger callsPerHost;
        private final okhttp3.Callback responseCallback;
        final okhttp3.internal.connection.RealCall this$0;

        public AsyncCall(okhttp3.internal.connection.RealCall r2, okhttp3.Callback r3) {
                r1 = this;
                java.lang.String r0 = "this$0"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                java.lang.String r0 = "responseCallback"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                r1.this$0 = r2
                r1.<init>()
                r1.responseCallback = r3
                java.util.concurrent.atomic.AtomicInteger r2 = new java.util.concurrent.atomic.AtomicInteger
                r3 = 0
                r2.<init>(r3)
                r1.callsPerHost = r2
                return
        }

        public final void executeOn(java.util.concurrent.ExecutorService r4) {
                r3 = this;
                java.lang.String r0 = "executorService"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
                okhttp3.internal.connection.RealCall r0 = r3.this$0
                okhttp3.OkHttpClient r0 = r0.getClient()
                okhttp3.Dispatcher r0 = r0.dispatcher()
                boolean r1 = okhttp3.internal.Util.assertionsEnabled
                if (r1 == 0) goto L41
                boolean r1 = java.lang.Thread.holdsLock(r0)
                if (r1 != 0) goto L1a
                goto L41
            L1a:
                java.lang.AssertionError r4 = new java.lang.AssertionError
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Thread "
                r1.append(r2)
                java.lang.Thread r2 = java.lang.Thread.currentThread()
                java.lang.String r2 = r2.getName()
                r1.append(r2)
                java.lang.String r2 = " MUST NOT hold lock on "
                r1.append(r2)
                r1.append(r0)
                java.lang.String r0 = r1.toString()
                r4.<init>(r0)
                throw r4
            L41:
                r0 = r3
                java.lang.Runnable r0 = (java.lang.Runnable) r0     // Catch: java.lang.Throwable -> L48 java.util.concurrent.RejectedExecutionException -> L4a
                r4.execute(r0)     // Catch: java.lang.Throwable -> L48 java.util.concurrent.RejectedExecutionException -> L4a
                goto L77
            L48:
                r4 = move-exception
                goto L78
            L4a:
                r4 = move-exception
                java.io.InterruptedIOException r0 = new java.io.InterruptedIOException     // Catch: java.lang.Throwable -> L48
                java.lang.String r1 = "executor rejected"
                r0.<init>(r1)     // Catch: java.lang.Throwable -> L48
                java.lang.Throwable r4 = (java.lang.Throwable) r4     // Catch: java.lang.Throwable -> L48
                r0.initCause(r4)     // Catch: java.lang.Throwable -> L48
                okhttp3.internal.connection.RealCall r4 = r3.this$0     // Catch: java.lang.Throwable -> L48
                r1 = r0
                java.io.IOException r1 = (java.io.IOException) r1     // Catch: java.lang.Throwable -> L48
                r4.noMoreExchanges$okhttp(r1)     // Catch: java.lang.Throwable -> L48
                okhttp3.Callback r4 = r3.responseCallback     // Catch: java.lang.Throwable -> L48
                okhttp3.internal.connection.RealCall r1 = r3.this$0     // Catch: java.lang.Throwable -> L48
                okhttp3.Call r1 = (okhttp3.Call) r1     // Catch: java.lang.Throwable -> L48
                java.io.IOException r0 = (java.io.IOException) r0     // Catch: java.lang.Throwable -> L48
                r4.onFailure(r1, r0)     // Catch: java.lang.Throwable -> L48
                okhttp3.internal.connection.RealCall r4 = r3.this$0
                okhttp3.OkHttpClient r4 = r4.getClient()
                okhttp3.Dispatcher r4 = r4.dispatcher()
                r4.finished$okhttp(r3)
            L77:
                return
            L78:
                okhttp3.internal.connection.RealCall r0 = r3.this$0
                okhttp3.OkHttpClient r0 = r0.getClient()
                okhttp3.Dispatcher r0 = r0.dispatcher()
                r0.finished$okhttp(r3)
                throw r4
        }

        public final okhttp3.internal.connection.RealCall getCall() {
                r1 = this;
                okhttp3.internal.connection.RealCall r0 = r1.this$0
                return r0
        }

        public final java.util.concurrent.atomic.AtomicInteger getCallsPerHost() {
                r1 = this;
                java.util.concurrent.atomic.AtomicInteger r0 = r1.callsPerHost
                return r0
        }

        public final java.lang.String getHost() {
                r1 = this;
                okhttp3.internal.connection.RealCall r0 = r1.this$0
                okhttp3.Request r0 = r0.getOriginalRequest()
                okhttp3.HttpUrl r0 = r0.url()
                java.lang.String r0 = r0.host()
                return r0
        }

        public final okhttp3.Request getRequest() {
                r1 = this;
                okhttp3.internal.connection.RealCall r0 = r1.this$0
                okhttp3.Request r0 = r0.getOriginalRequest()
                return r0
        }

        public final void reuseCallsPerHostFrom(okhttp3.internal.connection.RealCall.AsyncCall r2) {
                r1 = this;
                java.lang.String r0 = "other"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                java.util.concurrent.atomic.AtomicInteger r2 = r2.callsPerHost
                r1.callsPerHost = r2
                return
        }

        @Override
        public void run() {
                r8 = this;
                okhttp3.internal.connection.RealCall r0 = r8.this$0
                java.lang.String r0 = r0.redactedUrl$okhttp()
                java.lang.String r1 = "OkHttp "
                java.lang.String r0 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r0)
                okhttp3.internal.connection.RealCall r1 = r8.this$0
                java.lang.Thread r2 = java.lang.Thread.currentThread()
                java.lang.String r3 = r2.getName()
                r2.setName(r0)
                r0 = 0
                okhttp3.internal.connection.RealCall$timeout$1 r4 = okhttp3.internal.connection.RealCall.access$getTimeout$p(r1)     // Catch: java.lang.Throwable -> La1
                r4.enter()     // Catch: java.lang.Throwable -> La1
                okhttp3.Response r0 = r1.getResponseWithInterceptorChain$okhttp()     // Catch: java.lang.Throwable -> L3e java.io.IOException -> L63
                r4 = 1
                okhttp3.Callback r5 = r8.responseCallback     // Catch: java.lang.Throwable -> L3a java.io.IOException -> L3c
                r6 = r1
                okhttp3.Call r6 = (okhttp3.Call) r6     // Catch: java.lang.Throwable -> L3a java.io.IOException -> L3c
                r5.onResponse(r6, r0)     // Catch: java.lang.Throwable -> L3a java.io.IOException -> L3c
                okhttp3.OkHttpClient r0 = r1.getClient()     // Catch: java.lang.Throwable -> La1
                okhttp3.Dispatcher r0 = r0.dispatcher()     // Catch: java.lang.Throwable -> La1
            L36:
                r0.finished$okhttp(r8)     // Catch: java.lang.Throwable -> La1
                goto L91
            L3a:
                r0 = move-exception
                goto L42
            L3c:
                r0 = move-exception
                goto L67
            L3e:
                r4 = move-exception
                r7 = r4
                r4 = r0
                r0 = r7
            L42:
                r1.cancel()     // Catch: java.lang.Throwable -> L61
                if (r4 != 0) goto L60
                java.io.IOException r4 = new java.io.IOException     // Catch: java.lang.Throwable -> L61
                java.lang.String r5 = "canceled due to "
                java.lang.String r5 = kotlin.jvm.internal.Intrinsics.stringPlus(r5, r0)     // Catch: java.lang.Throwable -> L61
                r4.<init>(r5)     // Catch: java.lang.Throwable -> L61
                r5 = r4
                java.lang.Throwable r5 = (java.lang.Throwable) r5     // Catch: java.lang.Throwable -> L61
                kotlin.ExceptionsKt.addSuppressed(r5, r0)     // Catch: java.lang.Throwable -> L61
                okhttp3.Callback r5 = r8.responseCallback     // Catch: java.lang.Throwable -> L61
                r6 = r1
                okhttp3.Call r6 = (okhttp3.Call) r6     // Catch: java.lang.Throwable -> L61
                r5.onFailure(r6, r4)     // Catch: java.lang.Throwable -> L61
            L60:
                throw r0     // Catch: java.lang.Throwable -> L61
            L61:
                r0 = move-exception
                goto L95
            L63:
                r4 = move-exception
                r7 = r4
                r4 = r0
                r0 = r7
            L67:
                if (r4 == 0) goto L80
                okhttp3.internal.platform.Platform$Companion r4 = okhttp3.internal.platform.Platform.Companion     // Catch: java.lang.Throwable -> L61
                okhttp3.internal.platform.Platform r4 = r4.get()     // Catch: java.lang.Throwable -> L61
                java.lang.String r5 = "Callback failure for "
                java.lang.String r6 = okhttp3.internal.connection.RealCall.access$toLoggableString(r1)     // Catch: java.lang.Throwable -> L61
                java.lang.String r5 = kotlin.jvm.internal.Intrinsics.stringPlus(r5, r6)     // Catch: java.lang.Throwable -> L61
                r6 = 4
                java.lang.Throwable r0 = (java.lang.Throwable) r0     // Catch: java.lang.Throwable -> L61
                r4.log(r5, r6, r0)     // Catch: java.lang.Throwable -> L61
                goto L88
            L80:
                okhttp3.Callback r4 = r8.responseCallback     // Catch: java.lang.Throwable -> L61
                r5 = r1
                okhttp3.Call r5 = (okhttp3.Call) r5     // Catch: java.lang.Throwable -> L61
                r4.onFailure(r5, r0)     // Catch: java.lang.Throwable -> L61
            L88:
                okhttp3.OkHttpClient r0 = r1.getClient()     // Catch: java.lang.Throwable -> La1
                okhttp3.Dispatcher r0 = r0.dispatcher()     // Catch: java.lang.Throwable -> La1
                goto L36
            L91:
                r2.setName(r3)
                return
            L95:
                okhttp3.OkHttpClient r1 = r1.getClient()     // Catch: java.lang.Throwable -> La1
                okhttp3.Dispatcher r1 = r1.dispatcher()     // Catch: java.lang.Throwable -> La1
                r1.finished$okhttp(r8)     // Catch: java.lang.Throwable -> La1
                throw r0     // Catch: java.lang.Throwable -> La1
            La1:
                r0 = move-exception
                r2.setName(r3)
                throw r0
        }
    }

    @kotlin.Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0000\n\u0002\b\u0004\b\u0000\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\u0017\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\u0002\u0010\u0006R\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\b¨\u0006\t"}, d2 = {"Lokhttp3/internal/connection/RealCall$CallReference;", "Ljava/lang/ref/WeakReference;", "Lokhttp3/internal/connection/RealCall;", "referent", "callStackTrace", "", "(Lokhttp3/internal/connection/RealCall;Ljava/lang/Object;)V", "getCallStackTrace", "()Ljava/lang/Object;", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class CallReference extends java.lang.ref.WeakReference<okhttp3.internal.connection.RealCall> {
        private final java.lang.Object callStackTrace;

        public CallReference(okhttp3.internal.connection.RealCall r2, java.lang.Object r3) {
                r1 = this;
                java.lang.String r0 = "referent"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.<init>(r2)
                r1.callStackTrace = r3
                return
        }

        public final java.lang.Object getCallStackTrace() {
                r1 = this;
                java.lang.Object r0 = r1.callStackTrace
                return r0
        }
    }


    public RealCall(okhttp3.OkHttpClient r2, okhttp3.Request r3, boolean r4) {
            r1 = this;
            java.lang.String r0 = "client"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "originalRequest"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r1.<init>()
            r1.client = r2
            r1.originalRequest = r3
            r1.forWebSocket = r4
            okhttp3.ConnectionPool r2 = r2.connectionPool()
            okhttp3.internal.connection.RealConnectionPool r2 = r2.getDelegate$okhttp()
            r1.connectionPool = r2
            okhttp3.OkHttpClient r2 = r1.client
            okhttp3.EventListener$Factory r2 = r2.eventListenerFactory()
            r3 = r1
            okhttp3.Call r3 = (okhttp3.Call) r3
            okhttp3.EventListener r2 = r2.create(r3)
            r1.eventListener = r2
            okhttp3.internal.connection.RealCall$timeout$1 r2 = new okhttp3.internal.connection.RealCall$timeout$1
            r2.<init>(r1)
            okhttp3.OkHttpClient r3 = r1.getClient()
            int r3 = r3.callTimeoutMillis()
            long r3 = (long) r3
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.MILLISECONDS
            r2.timeout(r3, r0)
            r1.timeout = r2
            java.util.concurrent.atomic.AtomicBoolean r2 = new java.util.concurrent.atomic.AtomicBoolean
            r2.<init>()
            r1.executed = r2
            r2 = 1
            r1.expectMoreExchanges = r2
            return
    }

    public static final okhttp3.internal.connection.RealCall.timeout.1 access$getTimeout$p(okhttp3.internal.connection.RealCall r0) {
            okhttp3.internal.connection.RealCall$timeout$1 r0 = r0.timeout
            return r0
    }

    public static final java.lang.String access$toLoggableString(okhttp3.internal.connection.RealCall r0) {
            java.lang.String r0 = r0.toLoggableString()
            return r0
    }

    private final <E extends java.io.IOException> E callDone(E r4) {
            r3 = this;
            boolean r0 = okhttp3.internal.Util.assertionsEnabled
            if (r0 == 0) goto L32
            boolean r0 = java.lang.Thread.holdsLock(r3)
            if (r0 != 0) goto Lb
            goto L32
        Lb:
            java.lang.AssertionError r4 = new java.lang.AssertionError
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Thread "
            r0.append(r1)
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = " MUST NOT hold lock on "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r4.<init>(r0)
            throw r4
        L32:
            okhttp3.internal.connection.RealConnection r0 = r3.connection
            if (r0 == 0) goto L9a
            boolean r1 = okhttp3.internal.Util.assertionsEnabled
            if (r1 == 0) goto L68
            boolean r1 = java.lang.Thread.holdsLock(r0)
            if (r1 != 0) goto L41
            goto L68
        L41:
            java.lang.AssertionError r4 = new java.lang.AssertionError
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Thread "
            r1.append(r2)
            java.lang.Thread r2 = java.lang.Thread.currentThread()
            java.lang.String r2 = r2.getName()
            r1.append(r2)
            java.lang.String r2 = " MUST NOT hold lock on "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r4.<init>(r0)
            throw r4
        L68:
            monitor-enter(r0)
            java.net.Socket r1 = r3.releaseConnectionNoEvents$okhttp()     // Catch: java.lang.Throwable -> L97
            monitor-exit(r0)
            okhttp3.internal.connection.RealConnection r2 = r3.connection
            if (r2 != 0) goto L83
            if (r1 != 0) goto L75
            goto L78
        L75:
            okhttp3.internal.Util.closeQuietly(r1)
        L78:
            okhttp3.EventListener r1 = r3.eventListener
            r2 = r3
            okhttp3.Call r2 = (okhttp3.Call) r2
            okhttp3.Connection r0 = (okhttp3.Connection) r0
            r1.connectionReleased(r2, r0)
            goto L9a
        L83:
            if (r1 != 0) goto L87
            r0 = 1
            goto L88
        L87:
            r0 = 0
        L88:
            if (r0 == 0) goto L8b
            goto L9a
        L8b:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r0 = "Check failed."
            java.lang.String r0 = r0.toString()
            r4.<init>(r0)
            throw r4
        L97:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
        L9a:
            java.io.IOException r0 = r3.timeoutExit(r4)
            if (r4 == 0) goto Lac
            okhttp3.EventListener r4 = r3.eventListener
            r1 = r3
            okhttp3.Call r1 = (okhttp3.Call) r1
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            r4.callFailed(r1, r0)
            goto Lb4
        Lac:
            okhttp3.EventListener r4 = r3.eventListener
            r1 = r3
            okhttp3.Call r1 = (okhttp3.Call) r1
            r4.callEnd(r1)
        Lb4:
            return r0
    }

    private final void callStart() {
            r2 = this;
            okhttp3.internal.platform.Platform$Companion r0 = okhttp3.internal.platform.Platform.Companion
            okhttp3.internal.platform.Platform r0 = r0.get()
            java.lang.String r1 = "response.body().close()"
            java.lang.Object r0 = r0.getStackTraceForCloseable(r1)
            r2.callStackTrace = r0
            okhttp3.EventListener r0 = r2.eventListener
            r1 = r2
            okhttp3.Call r1 = (okhttp3.Call) r1
            r0.callStart(r1)
            return
    }

    private final okhttp3.Address createAddress(okhttp3.HttpUrl r18) {
            r17 = this;
            r0 = r17
            boolean r1 = r18.isHttps()
            r2 = 0
            if (r1 == 0) goto L1f
            okhttp3.OkHttpClient r1 = r0.client
            javax.net.ssl.SSLSocketFactory r2 = r1.sslSocketFactory()
            okhttp3.OkHttpClient r1 = r0.client
            javax.net.ssl.HostnameVerifier r1 = r1.hostnameVerifier()
            okhttp3.OkHttpClient r3 = r0.client
            okhttp3.CertificatePinner r3 = r3.certificatePinner()
            r10 = r1
            r9 = r2
            r11 = r3
            goto L22
        L1f:
            r9 = r2
            r10 = r9
            r11 = r10
        L22:
            okhttp3.Address r1 = new okhttp3.Address
            java.lang.String r5 = r18.host()
            int r6 = r18.port()
            okhttp3.OkHttpClient r2 = r0.client
            okhttp3.Dns r7 = r2.dns()
            okhttp3.OkHttpClient r2 = r0.client
            javax.net.SocketFactory r8 = r2.socketFactory()
            okhttp3.OkHttpClient r2 = r0.client
            okhttp3.Authenticator r12 = r2.proxyAuthenticator()
            okhttp3.OkHttpClient r2 = r0.client
            java.net.Proxy r13 = r2.proxy()
            okhttp3.OkHttpClient r2 = r0.client
            java.util.List r14 = r2.protocols()
            okhttp3.OkHttpClient r2 = r0.client
            java.util.List r15 = r2.connectionSpecs()
            okhttp3.OkHttpClient r2 = r0.client
            java.net.ProxySelector r16 = r2.proxySelector()
            r4 = r1
            r4.<init>(r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16)
            return r1
    }

    private final <E extends java.io.IOException> E timeoutExit(E r3) {
            r2 = this;
            boolean r0 = r2.timeoutEarlyExit
            if (r0 == 0) goto L5
            return r3
        L5:
            okhttp3.internal.connection.RealCall$timeout$1 r0 = r2.timeout
            boolean r0 = r0.exit()
            if (r0 != 0) goto Le
            return r3
        Le:
            java.io.InterruptedIOException r0 = new java.io.InterruptedIOException
            java.lang.String r1 = "timeout"
            r0.<init>(r1)
            if (r3 == 0) goto L1c
            java.lang.Throwable r3 = (java.lang.Throwable) r3
            r0.initCause(r3)
        L1c:
            java.io.IOException r0 = (java.io.IOException) r0
            return r0
    }

    private final java.lang.String toLoggableString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            boolean r1 = r2.isCanceled()
            if (r1 == 0) goto Le
            java.lang.String r1 = "canceled "
            goto L10
        Le:
            java.lang.String r1 = ""
        L10:
            r0.append(r1)
            boolean r1 = r2.forWebSocket
            if (r1 == 0) goto L1a
            java.lang.String r1 = "web socket"
            goto L1c
        L1a:
            java.lang.String r1 = "call"
        L1c:
            r0.append(r1)
            java.lang.String r1 = " to "
            r0.append(r1)
            java.lang.String r1 = r2.redactedUrl$okhttp()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public final void acquireConnectionNoEvents(okhttp3.internal.connection.RealConnection r4) {
            r3 = this;
            java.lang.String r0 = "connection"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            boolean r0 = okhttp3.internal.Util.assertionsEnabled
            if (r0 == 0) goto L37
            boolean r0 = java.lang.Thread.holdsLock(r4)
            if (r0 == 0) goto L10
            goto L37
        L10:
            java.lang.AssertionError r0 = new java.lang.AssertionError
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Thread "
            r1.append(r2)
            java.lang.Thread r2 = java.lang.Thread.currentThread()
            java.lang.String r2 = r2.getName()
            r1.append(r2)
            java.lang.String r2 = " MUST hold lock on "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L37:
            okhttp3.internal.connection.RealConnection r0 = r3.connection
            if (r0 != 0) goto L3d
            r0 = 1
            goto L3e
        L3d:
            r0 = 0
        L3e:
            if (r0 == 0) goto L51
            r3.connection = r4
            java.util.List r4 = r4.getCalls()
            okhttp3.internal.connection.RealCall$CallReference r0 = new okhttp3.internal.connection.RealCall$CallReference
            java.lang.Object r1 = r3.callStackTrace
            r0.<init>(r3, r1)
            r4.add(r0)
            return
        L51:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r0 = "Check failed."
            java.lang.String r0 = r0.toString()
            r4.<init>(r0)
            throw r4
    }

    @Override
    public void cancel() {
            r2 = this;
            boolean r0 = r2.canceled
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r2.canceled = r0
            okhttp3.internal.connection.Exchange r0 = r2.exchange
            if (r0 != 0) goto Ld
            goto L10
        Ld:
            r0.cancel()
        L10:
            okhttp3.internal.connection.RealConnection r0 = r2.connectionToCancel
            if (r0 != 0) goto L15
            goto L18
        L15:
            r0.cancel()
        L18:
            okhttp3.EventListener r0 = r2.eventListener
            r1 = r2
            okhttp3.Call r1 = (okhttp3.Call) r1
            r0.canceled(r1)
            return
    }

    public java.lang.Object clone() {
            r1 = this;
            okhttp3.internal.connection.RealCall r0 = r1.clone()
            return r0
    }

    @Override
    public okhttp3.Call clone() {
            r1 = this;
            okhttp3.internal.connection.RealCall r0 = r1.clone()
            okhttp3.Call r0 = (okhttp3.Call) r0
            return r0
    }

    @Override
    public okhttp3.internal.connection.RealCall clone() {
            r4 = this;
            okhttp3.internal.connection.RealCall r0 = new okhttp3.internal.connection.RealCall
            okhttp3.OkHttpClient r1 = r4.client
            okhttp3.Request r2 = r4.originalRequest
            boolean r3 = r4.forWebSocket
            r0.<init>(r1, r2, r3)
            return r0
    }

    @Override
    public void enqueue(okhttp3.Callback r4) {
            r3 = this;
            java.lang.String r0 = "responseCallback"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.util.concurrent.atomic.AtomicBoolean r0 = r3.executed
            r1 = 0
            r2 = 1
            boolean r0 = r0.compareAndSet(r1, r2)
            if (r0 == 0) goto L21
            r3.callStart()
            okhttp3.OkHttpClient r0 = r3.client
            okhttp3.Dispatcher r0 = r0.dispatcher()
            okhttp3.internal.connection.RealCall$AsyncCall r1 = new okhttp3.internal.connection.RealCall$AsyncCall
            r1.<init>(r3, r4)
            r0.enqueue$okhttp(r1)
            return
        L21:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r0 = "Already Executed"
            java.lang.String r0 = r0.toString()
            r4.<init>(r0)
            throw r4
    }

    public final void enterNetworkInterceptorExchange(okhttp3.Request r3, boolean r4) {
            r2 = this;
            java.lang.String r0 = "request"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            okhttp3.internal.connection.Exchange r0 = r2.interceptorScopedExchange
            r1 = 1
            if (r0 != 0) goto Lc
            r0 = r1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            if (r0 == 0) goto L4e
            monitor-enter(r2)
            boolean r0 = r2.responseBodyOpen     // Catch: java.lang.Throwable -> L4b
            r0 = r0 ^ r1
            if (r0 == 0) goto L3f
            boolean r0 = r2.requestBodyOpen     // Catch: java.lang.Throwable -> L4b
            r0 = r0 ^ r1
            if (r0 == 0) goto L33
            kotlin.Unit r0 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L4b
            monitor-exit(r2)
            if (r4 == 0) goto L32
            okhttp3.internal.connection.ExchangeFinder r4 = new okhttp3.internal.connection.ExchangeFinder
            okhttp3.internal.connection.RealConnectionPool r0 = r2.connectionPool
            okhttp3.HttpUrl r3 = r3.url()
            okhttp3.Address r3 = r2.createAddress(r3)
            okhttp3.EventListener r1 = r2.eventListener
            r4.<init>(r0, r3, r2, r1)
            r2.exchangeFinder = r4
        L32:
            return
        L33:
            java.lang.String r3 = "Check failed."
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L4b
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L4b
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L4b
            throw r4     // Catch: java.lang.Throwable -> L4b
        L3f:
            java.lang.String r3 = "cannot make a new request because the previous response is still open: please call response.close()"
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L4b
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L4b
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L4b
            throw r4     // Catch: java.lang.Throwable -> L4b
        L4b:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
        L4e:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r4 = "Check failed."
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            throw r3
    }

    @Override
    public okhttp3.Response execute() {
            r3 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r3.executed
            r1 = 0
            r2 = 1
            boolean r0 = r0.compareAndSet(r1, r2)
            if (r0 == 0) goto L34
            okhttp3.internal.connection.RealCall$timeout$1 r0 = r3.timeout
            r0.enter()
            r3.callStart()
            okhttp3.OkHttpClient r0 = r3.client     // Catch: java.lang.Throwable -> L29
            okhttp3.Dispatcher r0 = r0.dispatcher()     // Catch: java.lang.Throwable -> L29
            r0.executed$okhttp(r3)     // Catch: java.lang.Throwable -> L29
            okhttp3.Response r0 = r3.getResponseWithInterceptorChain$okhttp()     // Catch: java.lang.Throwable -> L29
            okhttp3.OkHttpClient r1 = r3.client
            okhttp3.Dispatcher r1 = r1.dispatcher()
            r1.finished$okhttp(r3)
            return r0
        L29:
            r0 = move-exception
            okhttp3.OkHttpClient r1 = r3.client
            okhttp3.Dispatcher r1 = r1.dispatcher()
            r1.finished$okhttp(r3)
            throw r0
        L34:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Already Executed"
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    public final void exitNetworkInterceptorExchange$okhttp(boolean r2) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.expectMoreExchanges     // Catch: java.lang.Throwable -> L22
            if (r0 == 0) goto L16
            kotlin.Unit r0 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L22
            monitor-exit(r1)
            if (r2 == 0) goto L12
            okhttp3.internal.connection.Exchange r2 = r1.exchange
            if (r2 != 0) goto Lf
            goto L12
        Lf:
            r2.detachWithViolence()
        L12:
            r2 = 0
            r1.interceptorScopedExchange = r2
            return
        L16:
            java.lang.String r2 = "released"
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L22
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L22
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L22
            throw r0     // Catch: java.lang.Throwable -> L22
        L22:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final okhttp3.OkHttpClient getClient() {
            r1 = this;
            okhttp3.OkHttpClient r0 = r1.client
            return r0
    }

    public final okhttp3.internal.connection.RealConnection getConnection() {
            r1 = this;
            okhttp3.internal.connection.RealConnection r0 = r1.connection
            return r0
    }

    public final okhttp3.internal.connection.RealConnection getConnectionToCancel() {
            r1 = this;
            okhttp3.internal.connection.RealConnection r0 = r1.connectionToCancel
            return r0
    }

    public final okhttp3.EventListener getEventListener$okhttp() {
            r1 = this;
            okhttp3.EventListener r0 = r1.eventListener
            return r0
    }

    public final boolean getForWebSocket() {
            r1 = this;
            boolean r0 = r1.forWebSocket
            return r0
    }

    public final okhttp3.internal.connection.Exchange getInterceptorScopedExchange$okhttp() {
            r1 = this;
            okhttp3.internal.connection.Exchange r0 = r1.interceptorScopedExchange
            return r0
    }

    public final okhttp3.Request getOriginalRequest() {
            r1 = this;
            okhttp3.Request r0 = r1.originalRequest
            return r0
    }

    public final okhttp3.Response getResponseWithInterceptorChain$okhttp() throws java.io.IOException {
            r10 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r3 = r0
            java.util.List r3 = (java.util.List) r3
            r0 = r3
            java.util.Collection r0 = (java.util.Collection) r0
            okhttp3.OkHttpClient r1 = r10.client
            java.util.List r1 = r1.interceptors()
            java.lang.Iterable r1 = (java.lang.Iterable) r1
            kotlin.collections.CollectionsKt.addAll(r0, r1)
            okhttp3.internal.http.RetryAndFollowUpInterceptor r1 = new okhttp3.internal.http.RetryAndFollowUpInterceptor
            okhttp3.OkHttpClient r2 = r10.client
            r1.<init>(r2)
            r0.add(r1)
            okhttp3.internal.http.BridgeInterceptor r1 = new okhttp3.internal.http.BridgeInterceptor
            okhttp3.OkHttpClient r2 = r10.client
            okhttp3.CookieJar r2 = r2.cookieJar()
            r1.<init>(r2)
            r0.add(r1)
            okhttp3.internal.cache.CacheInterceptor r1 = new okhttp3.internal.cache.CacheInterceptor
            okhttp3.OkHttpClient r2 = r10.client
            okhttp3.Cache r2 = r2.cache()
            r1.<init>(r2)
            r0.add(r1)
            okhttp3.internal.connection.ConnectInterceptor r1 = okhttp3.internal.connection.ConnectInterceptor.INSTANCE
            r0.add(r1)
            boolean r1 = r10.forWebSocket
            if (r1 != 0) goto L50
            okhttp3.OkHttpClient r1 = r10.client
            java.util.List r1 = r1.networkInterceptors()
            java.lang.Iterable r1 = (java.lang.Iterable) r1
            kotlin.collections.CollectionsKt.addAll(r0, r1)
        L50:
            okhttp3.internal.http.CallServerInterceptor r1 = new okhttp3.internal.http.CallServerInterceptor
            boolean r2 = r10.forWebSocket
            r1.<init>(r2)
            r0.add(r1)
            okhttp3.internal.http.RealInterceptorChain r0 = new okhttp3.internal.http.RealInterceptorChain
            r4 = 0
            r5 = 0
            okhttp3.Request r6 = r10.originalRequest
            okhttp3.OkHttpClient r1 = r10.client
            int r7 = r1.connectTimeoutMillis()
            okhttp3.OkHttpClient r1 = r10.client
            int r8 = r1.readTimeoutMillis()
            okhttp3.OkHttpClient r1 = r10.client
            int r9 = r1.writeTimeoutMillis()
            r1 = r0
            r2 = r10
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
            r1 = 0
            r2 = 0
            okhttp3.Request r3 = r10.originalRequest     // Catch: java.lang.Throwable -> L96 java.io.IOException -> L98
            okhttp3.Response r0 = r0.proceed(r3)     // Catch: java.lang.Throwable -> L96 java.io.IOException -> L98
            boolean r3 = r10.isCanceled()     // Catch: java.lang.Throwable -> L96 java.io.IOException -> L98
            if (r3 != 0) goto L89
            r10.noMoreExchanges$okhttp(r2)
            return r0
        L89:
            java.io.Closeable r0 = (java.io.Closeable) r0     // Catch: java.lang.Throwable -> L96 java.io.IOException -> L98
            okhttp3.internal.Util.closeQuietly(r0)     // Catch: java.lang.Throwable -> L96 java.io.IOException -> L98
            java.io.IOException r0 = new java.io.IOException     // Catch: java.lang.Throwable -> L96 java.io.IOException -> L98
            java.lang.String r3 = "Canceled"
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L96 java.io.IOException -> L98
            throw r0     // Catch: java.lang.Throwable -> L96 java.io.IOException -> L98
        L96:
            r0 = move-exception
            goto Lab
        L98:
            r0 = move-exception
            r1 = 1
            java.io.IOException r0 = r10.noMoreExchanges$okhttp(r0)     // Catch: java.lang.Throwable -> L96
            if (r0 != 0) goto La8
            java.lang.NullPointerException r0 = new java.lang.NullPointerException     // Catch: java.lang.Throwable -> L96
            java.lang.String r3 = "null cannot be cast to non-null type kotlin.Throwable"
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L96
            throw r0     // Catch: java.lang.Throwable -> L96
        La8:
            java.lang.Throwable r0 = (java.lang.Throwable) r0     // Catch: java.lang.Throwable -> L96
            throw r0     // Catch: java.lang.Throwable -> L96
        Lab:
            if (r1 != 0) goto Lb0
            r10.noMoreExchanges$okhttp(r2)
        Lb0:
            throw r0
    }

    public final okhttp3.internal.connection.Exchange initExchange$okhttp(okhttp3.internal.http.RealInterceptorChain r5) {
            r4 = this;
            java.lang.String r0 = "chain"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            monitor-enter(r4)
            boolean r0 = r4.expectMoreExchanges     // Catch: java.lang.Throwable -> L6a
            if (r0 == 0) goto L5e
            boolean r0 = r4.responseBodyOpen     // Catch: java.lang.Throwable -> L6a
            r1 = 1
            r0 = r0 ^ r1
            if (r0 == 0) goto L52
            boolean r0 = r4.requestBodyOpen     // Catch: java.lang.Throwable -> L6a
            r0 = r0 ^ r1
            if (r0 == 0) goto L46
            kotlin.Unit r0 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L6a
            monitor-exit(r4)
            okhttp3.internal.connection.ExchangeFinder r0 = r4.exchangeFinder
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            okhttp3.OkHttpClient r2 = r4.client
            okhttp3.internal.http.ExchangeCodec r5 = r0.find(r2, r5)
            okhttp3.internal.connection.Exchange r2 = new okhttp3.internal.connection.Exchange
            okhttp3.EventListener r3 = r4.eventListener
            r2.<init>(r4, r3, r0, r5)
            r4.interceptorScopedExchange = r2
            r4.exchange = r2
            monitor-enter(r4)
            r4.requestBodyOpen = r1     // Catch: java.lang.Throwable -> L43
            r4.responseBodyOpen = r1     // Catch: java.lang.Throwable -> L43
            kotlin.Unit r5 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L43
            monitor-exit(r4)
            boolean r5 = r4.canceled
            if (r5 != 0) goto L3b
            return r2
        L3b:
            java.io.IOException r5 = new java.io.IOException
            java.lang.String r0 = "Canceled"
            r5.<init>(r0)
            throw r5
        L43:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
        L46:
            java.lang.String r5 = "Check failed."
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L6a
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L6a
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L6a
            throw r0     // Catch: java.lang.Throwable -> L6a
        L52:
            java.lang.String r5 = "Check failed."
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L6a
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L6a
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L6a
            throw r0     // Catch: java.lang.Throwable -> L6a
        L5e:
            java.lang.String r5 = "released"
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L6a
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L6a
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L6a
            throw r0     // Catch: java.lang.Throwable -> L6a
        L6a:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    @Override
    public boolean isCanceled() {
            r1 = this;
            boolean r0 = r1.canceled
            return r0
    }

    @Override
    public boolean isExecuted() {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.executed
            boolean r0 = r0.get()
            return r0
    }

    public final <E extends java.io.IOException> E messageDone$okhttp(okhttp3.internal.connection.Exchange r3, boolean r4, boolean r5, E r6) {
            r2 = this;
            java.lang.String r0 = "exchange"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            okhttp3.internal.connection.Exchange r0 = r2.exchange
            boolean r3 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r0)
            if (r3 != 0) goto Le
            return r6
        Le:
            monitor-enter(r2)
            r3 = 0
            if (r4 == 0) goto L19
            boolean r0 = r2.requestBodyOpen     // Catch: java.lang.Throwable -> L17
            if (r0 != 0) goto L1f
            goto L19
        L17:
            r3 = move-exception
            goto L5d
        L19:
            if (r5 == 0) goto L44
            boolean r0 = r2.responseBodyOpen     // Catch: java.lang.Throwable -> L17
            if (r0 == 0) goto L44
        L1f:
            if (r4 == 0) goto L23
            r2.requestBodyOpen = r3     // Catch: java.lang.Throwable -> L17
        L23:
            if (r5 == 0) goto L27
            r2.responseBodyOpen = r3     // Catch: java.lang.Throwable -> L17
        L27:
            boolean r4 = r2.requestBodyOpen     // Catch: java.lang.Throwable -> L17
            r5 = 1
            if (r4 != 0) goto L32
            boolean r4 = r2.responseBodyOpen     // Catch: java.lang.Throwable -> L17
            if (r4 != 0) goto L32
            r4 = r5
            goto L33
        L32:
            r4 = r3
        L33:
            boolean r0 = r2.requestBodyOpen     // Catch: java.lang.Throwable -> L17
            if (r0 != 0) goto L40
            boolean r0 = r2.responseBodyOpen     // Catch: java.lang.Throwable -> L17
            if (r0 != 0) goto L40
            boolean r0 = r2.expectMoreExchanges     // Catch: java.lang.Throwable -> L17
            if (r0 != 0) goto L40
            r3 = r5
        L40:
            r1 = r4
            r4 = r3
            r3 = r1
            goto L45
        L44:
            r4 = r3
        L45:
            kotlin.Unit r5 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L17
            monitor-exit(r2)
            if (r3 == 0) goto L55
            r3 = 0
            r2.exchange = r3
            okhttp3.internal.connection.RealConnection r3 = r2.connection
            if (r3 != 0) goto L52
            goto L55
        L52:
            r3.incrementSuccessCount$okhttp()
        L55:
            if (r4 == 0) goto L5c
            java.io.IOException r3 = r2.callDone(r6)
            return r3
        L5c:
            return r6
        L5d:
            monitor-exit(r2)
            throw r3
    }

    public final java.io.IOException noMoreExchanges$okhttp(java.io.IOException r3) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.expectMoreExchanges     // Catch: java.lang.Throwable -> L1c
            r1 = 0
            if (r0 == 0) goto L12
            r2.expectMoreExchanges = r1     // Catch: java.lang.Throwable -> L1c
            boolean r0 = r2.requestBodyOpen     // Catch: java.lang.Throwable -> L1c
            if (r0 != 0) goto L12
            boolean r0 = r2.responseBodyOpen     // Catch: java.lang.Throwable -> L1c
            if (r0 != 0) goto L12
            r0 = 1
            r1 = r0
        L12:
            kotlin.Unit r0 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L1c
            monitor-exit(r2)
            if (r1 == 0) goto L1b
            java.io.IOException r3 = r2.callDone(r3)
        L1b:
            return r3
        L1c:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final java.lang.String redactedUrl$okhttp() {
            r1 = this;
            okhttp3.Request r0 = r1.originalRequest
            okhttp3.HttpUrl r0 = r0.url()
            java.lang.String r0 = r0.redact()
            return r0
    }

    public final java.net.Socket releaseConnectionNoEvents$okhttp() {
            r7 = this;
            okhttp3.internal.connection.RealConnection r0 = r7.connection
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            boolean r1 = okhttp3.internal.Util.assertionsEnabled
            if (r1 == 0) goto L37
            boolean r1 = java.lang.Thread.holdsLock(r0)
            if (r1 == 0) goto L10
            goto L37
        L10:
            java.lang.AssertionError r1 = new java.lang.AssertionError
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Thread "
            r2.append(r3)
            java.lang.Thread r3 = java.lang.Thread.currentThread()
            java.lang.String r3 = r3.getName()
            r2.append(r3)
            java.lang.String r3 = " MUST hold lock on "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
        L37:
            java.util.List r1 = r0.getCalls()
            java.util.Iterator r2 = r1.iterator()
            r3 = 0
            r4 = r3
        L41:
            boolean r5 = r2.hasNext()
            r6 = -1
            if (r5 == 0) goto L5c
            java.lang.Object r5 = r2.next()
            java.lang.ref.Reference r5 = (java.lang.ref.Reference) r5
            java.lang.Object r5 = r5.get()
            boolean r5 = kotlin.jvm.internal.Intrinsics.areEqual(r5, r7)
            if (r5 == 0) goto L59
            goto L5d
        L59:
            int r4 = r4 + 1
            goto L41
        L5c:
            r4 = r6
        L5d:
            if (r4 == r6) goto L60
            r3 = 1
        L60:
            if (r3 == 0) goto L83
            r1.remove(r4)
            r2 = 0
            r7.connection = r2
            boolean r1 = r1.isEmpty()
            if (r1 == 0) goto L82
            long r3 = java.lang.System.nanoTime()
            r0.setIdleAtNs$okhttp(r3)
            okhttp3.internal.connection.RealConnectionPool r1 = r7.connectionPool
            boolean r1 = r1.connectionBecameIdle(r0)
            if (r1 == 0) goto L82
            java.net.Socket r0 = r0.socket()
            return r0
        L82:
            return r2
        L83:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Check failed."
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    @Override
    public okhttp3.Request request() {
            r1 = this;
            okhttp3.Request r0 = r1.originalRequest
            return r0
    }

    public final boolean retryAfterFailure() {
            r1 = this;
            okhttp3.internal.connection.ExchangeFinder r0 = r1.exchangeFinder
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            boolean r0 = r0.retryAfterFailure()
            return r0
    }

    public final void setConnectionToCancel(okhttp3.internal.connection.RealConnection r1) {
            r0 = this;
            r0.connectionToCancel = r1
            return
    }

    @Override
    public okio.AsyncTimeout timeout() {
            r1 = this;
            okhttp3.internal.connection.RealCall$timeout$1 r0 = r1.timeout
            okio.AsyncTimeout r0 = (okio.AsyncTimeout) r0
            return r0
    }

    @Override
    public okio.Timeout timeout() {
            r1 = this;
            okio.AsyncTimeout r0 = r1.timeout()
            okio.Timeout r0 = (okio.Timeout) r0
            return r0
    }

    public final void timeoutEarlyExit() {
            r2 = this;
            boolean r0 = r2.timeoutEarlyExit
            r1 = 1
            r0 = r0 ^ r1
            if (r0 == 0) goto Le
            r2.timeoutEarlyExit = r1
            okhttp3.internal.connection.RealCall$timeout$1 r0 = r2.timeout
            r0.exit()
            return
        Le:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Check failed."
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }
}
