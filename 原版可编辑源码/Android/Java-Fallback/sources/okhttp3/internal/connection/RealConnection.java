package okhttp3.internal.connection;

@kotlin.Metadata(d1 = {"\u0000ì\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010!\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\b\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000e\n\u0002\b\u0005\u0018\u0000 {2\u00020\u00012\u00020\u0002:\u0001{B\u0015\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\u0006\u0010\u0005\u001a\u00020\u0006¢\u0006\u0002\u0010\u0007J\u0006\u00105\u001a\u000206J\u0018\u00107\u001a\u00020\u001d2\u0006\u00108\u001a\u0002092\u0006\u0010\u0012\u001a\u00020\u0013H\u0002J>\u0010:\u001a\u0002062\u0006\u0010;\u001a\u00020\t2\u0006\u0010<\u001a\u00020\t2\u0006\u0010=\u001a\u00020\t2\u0006\u0010>\u001a\u00020\t2\u0006\u0010?\u001a\u00020\u001d2\u0006\u0010@\u001a\u00020A2\u0006\u0010B\u001a\u00020CJ%\u0010D\u001a\u0002062\u0006\u0010E\u001a\u00020F2\u0006\u0010G\u001a\u00020\u00062\u0006\u0010H\u001a\u00020IH\u0000¢\u0006\u0002\bJJ(\u0010K\u001a\u0002062\u0006\u0010;\u001a\u00020\t2\u0006\u0010<\u001a\u00020\t2\u0006\u0010@\u001a\u00020A2\u0006\u0010B\u001a\u00020CH\u0002J\u0010\u0010L\u001a\u0002062\u0006\u0010M\u001a\u00020NH\u0002J0\u0010O\u001a\u0002062\u0006\u0010;\u001a\u00020\t2\u0006\u0010<\u001a\u00020\t2\u0006\u0010=\u001a\u00020\t2\u0006\u0010@\u001a\u00020A2\u0006\u0010B\u001a\u00020CH\u0002J*\u0010P\u001a\u0004\u0018\u00010Q2\u0006\u0010<\u001a\u00020\t2\u0006\u0010=\u001a\u00020\t2\u0006\u0010R\u001a\u00020Q2\u0006\u00108\u001a\u000209H\u0002J\b\u0010S\u001a\u00020QH\u0002J(\u0010T\u001a\u0002062\u0006\u0010M\u001a\u00020N2\u0006\u0010>\u001a\u00020\t2\u0006\u0010@\u001a\u00020A2\u0006\u0010B\u001a\u00020CH\u0002J\n\u0010\u0012\u001a\u0004\u0018\u00010\u0013H\u0016J\r\u0010U\u001a\u000206H\u0000¢\u0006\u0002\bVJ%\u0010W\u001a\u00020\u001d2\u0006\u0010X\u001a\u00020Y2\u000e\u0010Z\u001a\n\u0012\u0004\u0012\u00020\u0006\u0018\u00010[H\u0000¢\u0006\u0002\b\\J\u000e\u0010]\u001a\u00020\u001d2\u0006\u0010^\u001a\u00020\u001dJ\u001d\u0010_\u001a\u00020`2\u0006\u0010E\u001a\u00020F2\u0006\u0010a\u001a\u00020bH\u0000¢\u0006\u0002\bcJ\u0015\u0010d\u001a\u00020e2\u0006\u0010f\u001a\u00020gH\u0000¢\u0006\u0002\bhJ\r\u0010 \u001a\u000206H\u0000¢\u0006\u0002\biJ\r\u0010!\u001a\u000206H\u0000¢\u0006\u0002\bjJ\u0018\u0010k\u001a\u0002062\u0006\u0010l\u001a\u00020\u00152\u0006\u0010m\u001a\u00020nH\u0016J\u0010\u0010o\u001a\u0002062\u0006\u0010p\u001a\u00020qH\u0016J\b\u0010%\u001a\u00020&H\u0016J\b\u0010\u0005\u001a\u00020\u0006H\u0016J\u0016\u0010r\u001a\u00020\u001d2\f\u0010s\u001a\b\u0012\u0004\u0012\u00020\u00060[H\u0002J\b\u00101\u001a\u00020(H\u0016J\u0010\u0010t\u001a\u0002062\u0006\u0010>\u001a\u00020\tH\u0002J\u0010\u0010u\u001a\u00020\u001d2\u0006\u00108\u001a\u000209H\u0002J\b\u0010v\u001a\u00020wH\u0016J\u001f\u0010x\u001a\u0002062\u0006\u0010@\u001a\u00020\r2\b\u0010y\u001a\u0004\u0018\u00010IH\u0000¢\u0006\u0002\bzR\u000e\u0010\b\u001a\u00020\tX\u0082\u000e¢\u0006\u0002\n\u0000R\u001d\u0010\n\u001a\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\r0\f0\u000b¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0003\u001a\u00020\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0010\u0010\u0012\u001a\u0004\u0018\u00010\u0013X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0014\u001a\u0004\u0018\u00010\u0015X\u0082\u000e¢\u0006\u0002\n\u0000R\u001a\u0010\u0016\u001a\u00020\u0017X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0018\u0010\u0019\"\u0004\b\u001a\u0010\u001bR\u0014\u0010\u001c\u001a\u00020\u001d8@X\u0080\u0004¢\u0006\u0006\u001a\u0004\b\u001e\u0010\u001fR\u000e\u0010 \u001a\u00020\u001dX\u0082\u000e¢\u0006\u0002\n\u0000R\u001a\u0010!\u001a\u00020\u001dX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\"\u0010\u001f\"\u0004\b#\u0010$R\u0010\u0010%\u001a\u0004\u0018\u00010&X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010'\u001a\u0004\u0018\u00010(X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010)\u001a\u00020\tX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010*\u001a\u00020\tX\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b+\u0010,\"\u0004\b-\u0010.R\u0010\u0010/\u001a\u0004\u0018\u000100X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u00101\u001a\u0004\u0018\u00010(X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u00102\u001a\u0004\u0018\u000103X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u00104\u001a\u00020\tX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006|"}, d2 = {"Lokhttp3/internal/connection/RealConnection;", "Lokhttp3/internal/http2/Http2Connection$Listener;", "Lokhttp3/Connection;", "connectionPool", "Lokhttp3/internal/connection/RealConnectionPool;", "route", "Lokhttp3/Route;", "(Lokhttp3/internal/connection/RealConnectionPool;Lokhttp3/Route;)V", "allocationLimit", "", "calls", "", "Ljava/lang/ref/Reference;", "Lokhttp3/internal/connection/RealCall;", "getCalls", "()Ljava/util/List;", "getConnectionPool", "()Lokhttp3/internal/connection/RealConnectionPool;", "handshake", "Lokhttp3/Handshake;", "http2Connection", "Lokhttp3/internal/http2/Http2Connection;", "idleAtNs", "", "getIdleAtNs$okhttp", "()J", "setIdleAtNs$okhttp", "(J)V", "isMultiplexed", "", "isMultiplexed$okhttp", "()Z", "noCoalescedConnections", "noNewExchanges", "getNoNewExchanges", "setNoNewExchanges", "(Z)V", "protocol", "Lokhttp3/Protocol;", "rawSocket", "Ljava/net/Socket;", "refusedStreamCount", "routeFailureCount", "getRouteFailureCount$okhttp", "()I", "setRouteFailureCount$okhttp", "(I)V", "sink", "Lokio/BufferedSink;", "socket", "source", "Lokio/BufferedSource;", "successCount", "cancel", "", "certificateSupportHost", "url", "Lokhttp3/HttpUrl;", "connect", "connectTimeout", "readTimeout", "writeTimeout", "pingIntervalMillis", "connectionRetryEnabled", "call", "Lokhttp3/Call;", "eventListener", "Lokhttp3/EventListener;", "connectFailed", "client", "Lokhttp3/OkHttpClient;", "failedRoute", "failure", "Ljava/io/IOException;", "connectFailed$okhttp", "connectSocket", "connectTls", "connectionSpecSelector", "Lokhttp3/internal/connection/ConnectionSpecSelector;", "connectTunnel", "createTunnel", "Lokhttp3/Request;", "tunnelRequest", "createTunnelRequest", "establishProtocol", "incrementSuccessCount", "incrementSuccessCount$okhttp", "isEligible", "address", "Lokhttp3/Address;", "routes", "", "isEligible$okhttp", "isHealthy", "doExtensiveChecks", "newCodec", "Lokhttp3/internal/http/ExchangeCodec;", "chain", "Lokhttp3/internal/http/RealInterceptorChain;", "newCodec$okhttp", "newWebSocketStreams", "Lokhttp3/internal/ws/RealWebSocket$Streams;", "exchange", "Lokhttp3/internal/connection/Exchange;", "newWebSocketStreams$okhttp", "noCoalescedConnections$okhttp", "noNewExchanges$okhttp", "onSettings", "connection", "settings", "Lokhttp3/internal/http2/Settings;", "onStream", "stream", "Lokhttp3/internal/http2/Http2Stream;", "routeMatchesAny", "candidates", "startHttp2", "supportsUrl", "toString", "", "trackFailure", "e", "trackFailure$okhttp", "Companion", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class RealConnection extends okhttp3.internal.http2.Http2Connection.Listener implements okhttp3.Connection {
    public static final okhttp3.internal.connection.RealConnection.Companion Companion = null;
    public static final long IDLE_CONNECTION_HEALTHY_NS = 10000000000L;
    private static final int MAX_TUNNEL_ATTEMPTS = 21;
    private static final java.lang.String NPE_THROW_WITH_NULL = "throw with null exception";
    private int allocationLimit;
    private final java.util.List<java.lang.ref.Reference<okhttp3.internal.connection.RealCall>> calls;
    private final okhttp3.internal.connection.RealConnectionPool connectionPool;
    private okhttp3.Handshake handshake;
    private okhttp3.internal.http2.Http2Connection http2Connection;
    private long idleAtNs;
    private boolean noCoalescedConnections;
    private boolean noNewExchanges;
    private okhttp3.Protocol protocol;
    private java.net.Socket rawSocket;
    private int refusedStreamCount;
    private final okhttp3.Route route;
    private int routeFailureCount;
    private okio.BufferedSink sink;
    private java.net.Socket socket;
    private okio.BufferedSource source;
    private int successCount;

    class 1 extends okhttp3.internal.ws.RealWebSocket.Streams {
        final okhttp3.internal.connection.RealConnection this$0;
        final okhttp3.internal.connection.StreamAllocation val$streamAllocation;

        1(okhttp3.internal.connection.RealConnection r1, boolean r2, okio.BufferedSource r3, okio.BufferedSink r4, okhttp3.internal.connection.StreamAllocation r5) {
                r0 = this;
                r0.this$0 = r1
                r0.val$streamAllocation = r5
                r0.<init>(r2, r3, r4)
                return
        }

        @Override
        public void close() throws java.io.IOException {
                r6 = this;
                okhttp3.internal.connection.StreamAllocation r0 = r6.val$streamAllocation
                okhttp3.internal.http.HttpCodec r2 = r0.codec()
                r1 = 1
                r3 = -1
                r5 = 0
                r0.streamFinished(r1, r2, r3, r5)
                return
        }
    }

    @kotlin.Metadata(d1 = {"\u00008\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\t\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J&\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u0004R\u000e\u0010\u0003\u001a\u00020\u0004X\u0080T¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\bX\u0082T¢\u0006\u0002\n\u0000¨\u0006\u0012"}, d2 = {"Lokhttp3/internal/connection/RealConnection$Companion;", "", "()V", "IDLE_CONNECTION_HEALTHY_NS", "", "MAX_TUNNEL_ATTEMPTS", "", "NPE_THROW_WITH_NULL", "", "newTestConnection", "Lokhttp3/internal/connection/RealConnection;", "connectionPool", "Lokhttp3/internal/connection/RealConnectionPool;", "route", "Lokhttp3/Route;", "socket", "Ljava/net/Socket;", "idleAtNs", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
                r0 = this;
                r0.<init>()
                return
        }

        public Companion(kotlin.jvm.internal.DefaultConstructorMarker r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public final okhttp3.internal.connection.RealConnection newTestConnection(okhttp3.internal.connection.RealConnectionPool r2, okhttp3.Route r3, java.net.Socket r4, long r5) {
                r1 = this;
                java.lang.String r0 = "connectionPool"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                java.lang.String r0 = "route"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                java.lang.String r0 = "socket"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
                okhttp3.internal.connection.RealConnection r0 = new okhttp3.internal.connection.RealConnection
                r0.<init>(r2, r3)
                okhttp3.internal.connection.RealConnection.access$setSocket$p(r0, r4)
                r0.setIdleAtNs$okhttp(r5)
                return r0
        }
    }

    @kotlin.Metadata(k = 3, mv = {1, 6, 0}, xi = 48)
    public class WhenMappings {
        public static final int[] $EnumSwitchMapping$0 = null;

        static {
                java.net.Proxy$Type[] r0 = java.net.Proxy.Type.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                java.net.Proxy$Type r1 = java.net.Proxy.Type.DIRECT
                int r1 = r1.ordinal()
                r2 = 1
                r0[r1] = r2
                java.net.Proxy$Type r1 = java.net.Proxy.Type.HTTP
                int r1 = r1.ordinal()
                r2 = 2
                r0[r1] = r2
                okhttp3.internal.connection.RealConnection.WhenMappings.$EnumSwitchMapping$0 = r0
                return
        }
    }



    static {
            okhttp3.internal.connection.RealConnection$Companion r0 = new okhttp3.internal.connection.RealConnection$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.internal.connection.RealConnection.Companion = r0
            return
    }

    public RealConnection(okhttp3.internal.connection.RealConnectionPool r2, okhttp3.Route r3) {
            r1 = this;
            java.lang.String r0 = "connectionPool"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "route"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r1.<init>()
            r1.connectionPool = r2
            r1.route = r3
            r2 = 1
            r1.allocationLimit = r2
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.util.List r2 = (java.util.List) r2
            r1.calls = r2
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r1.idleAtNs = r2
            return
    }

    public static final okhttp3.Handshake access$getHandshake$p(okhttp3.internal.connection.RealConnection r0) {
            okhttp3.Handshake r0 = r0.handshake
            return r0
    }

    public static final void access$setSocket$p(okhttp3.internal.connection.RealConnection r0, java.net.Socket r1) {
            r0.socket = r1
            return
    }

    private final boolean certificateSupportHost(okhttp3.HttpUrl r4, okhttp3.Handshake r5) {
            r3 = this;
            java.util.List r5 = r5.peerCertificates()
            r0 = r5
            java.util.Collection r0 = (java.util.Collection) r0
            boolean r0 = r0.isEmpty()
            r1 = 1
            r0 = r0 ^ r1
            r2 = 0
            if (r0 == 0) goto L23
            okhttp3.internal.tls.OkHostnameVerifier r0 = okhttp3.internal.tls.OkHostnameVerifier.INSTANCE
            java.lang.String r4 = r4.host()
            java.lang.Object r5 = r5.get(r2)
            java.security.cert.X509Certificate r5 = (java.security.cert.X509Certificate) r5
            boolean r4 = r0.verify(r4, r5)
            if (r4 == 0) goto L23
            goto L24
        L23:
            r1 = r2
        L24:
            return r1
    }

    private final void connectSocket(int r5, int r6, okhttp3.Call r7, okhttp3.EventListener r8) throws java.io.IOException {
            r4 = this;
            okhttp3.Route r0 = r4.route
            java.net.Proxy r0 = r0.proxy()
            okhttp3.Route r1 = r4.route
            okhttp3.Address r1 = r1.address()
            java.net.Proxy$Type r2 = r0.type()
            if (r2 != 0) goto L14
            r2 = -1
            goto L1c
        L14:
            int[] r3 = okhttp3.internal.connection.RealConnection.WhenMappings.$EnumSwitchMapping$0
            int r2 = r2.ordinal()
            r2 = r3[r2]
        L1c:
            r3 = 1
            if (r2 == r3) goto L28
            r3 = 2
            if (r2 == r3) goto L28
            java.net.Socket r1 = new java.net.Socket
            r1.<init>(r0)
            goto L33
        L28:
            javax.net.SocketFactory r1 = r1.socketFactory()
            java.net.Socket r1 = r1.createSocket()
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
        L33:
            r4.rawSocket = r1
            okhttp3.Route r2 = r4.route
            java.net.InetSocketAddress r2 = r2.socketAddress()
            r8.connectStart(r7, r2, r0)
            r1.setSoTimeout(r6)
            okhttp3.internal.platform.Platform$Companion r6 = okhttp3.internal.platform.Platform.Companion     // Catch: java.net.ConnectException -> L7b
            okhttp3.internal.platform.Platform r6 = r6.get()     // Catch: java.net.ConnectException -> L7b
            okhttp3.Route r7 = r4.route     // Catch: java.net.ConnectException -> L7b
            java.net.InetSocketAddress r7 = r7.socketAddress()     // Catch: java.net.ConnectException -> L7b
            r6.connectSocket(r1, r7, r5)     // Catch: java.net.ConnectException -> L7b
            okio.Source r5 = okio.Okio.source(r1)     // Catch: java.lang.NullPointerException -> L65
            okio.BufferedSource r5 = okio.Okio.buffer(r5)     // Catch: java.lang.NullPointerException -> L65
            r4.source = r5     // Catch: java.lang.NullPointerException -> L65
            okio.Sink r5 = okio.Okio.sink(r1)     // Catch: java.lang.NullPointerException -> L65
            okio.BufferedSink r5 = okio.Okio.buffer(r5)     // Catch: java.lang.NullPointerException -> L65
            r4.sink = r5     // Catch: java.lang.NullPointerException -> L65
            goto L72
        L65:
            r5 = move-exception
            java.lang.String r6 = r5.getMessage()
            java.lang.String r7 = "throw with null exception"
            boolean r6 = kotlin.jvm.internal.Intrinsics.areEqual(r6, r7)
            if (r6 != 0) goto L73
        L72:
            return
        L73:
            java.io.IOException r6 = new java.io.IOException
            java.lang.Throwable r5 = (java.lang.Throwable) r5
            r6.<init>(r5)
            throw r6
        L7b:
            r5 = move-exception
            java.net.ConnectException r6 = new java.net.ConnectException
            okhttp3.Route r7 = r4.route
            java.net.InetSocketAddress r7 = r7.socketAddress()
            java.lang.String r8 = "Failed to connect to "
            java.lang.String r7 = kotlin.jvm.internal.Intrinsics.stringPlus(r8, r7)
            r6.<init>(r7)
            java.lang.Throwable r5 = (java.lang.Throwable) r5
            r6.initCause(r5)
            java.lang.Throwable r6 = (java.lang.Throwable) r6
            throw r6
    }

    private final void connectTls(okhttp3.internal.connection.ConnectionSpecSelector r11) throws java.io.IOException {
            r10 = this;
            okhttp3.Route r0 = r10.route
            okhttp3.Address r0 = r0.address()
            javax.net.ssl.SSLSocketFactory r1 = r0.sslSocketFactory()
            r2 = 0
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)     // Catch: java.lang.Throwable -> L187
            java.net.Socket r3 = r10.rawSocket     // Catch: java.lang.Throwable -> L187
            okhttp3.HttpUrl r4 = r0.url()     // Catch: java.lang.Throwable -> L187
            java.lang.String r4 = r4.host()     // Catch: java.lang.Throwable -> L187
            okhttp3.HttpUrl r5 = r0.url()     // Catch: java.lang.Throwable -> L187
            int r5 = r5.port()     // Catch: java.lang.Throwable -> L187
            r6 = 1
            java.net.Socket r1 = r1.createSocket(r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L187
            if (r1 == 0) goto L17f
            javax.net.ssl.SSLSocket r1 = (javax.net.ssl.SSLSocket) r1     // Catch: java.lang.Throwable -> L187
            okhttp3.ConnectionSpec r11 = r11.configureSecureSocket(r1)     // Catch: java.lang.Throwable -> L17c
            boolean r3 = r11.supportsTlsExtensions()     // Catch: java.lang.Throwable -> L17c
            if (r3 == 0) goto L48
            okhttp3.internal.platform.Platform$Companion r3 = okhttp3.internal.platform.Platform.Companion     // Catch: java.lang.Throwable -> L17c
            okhttp3.internal.platform.Platform r3 = r3.get()     // Catch: java.lang.Throwable -> L17c
            okhttp3.HttpUrl r4 = r0.url()     // Catch: java.lang.Throwable -> L17c
            java.lang.String r4 = r4.host()     // Catch: java.lang.Throwable -> L17c
            java.util.List r5 = r0.protocols()     // Catch: java.lang.Throwable -> L17c
            r3.configureTlsExtensions(r1, r4, r5)     // Catch: java.lang.Throwable -> L17c
        L48:
            r1.startHandshake()     // Catch: java.lang.Throwable -> L17c
            javax.net.ssl.SSLSession r3 = r1.getSession()     // Catch: java.lang.Throwable -> L17c
            okhttp3.Handshake$Companion r4 = okhttp3.Handshake.Companion     // Catch: java.lang.Throwable -> L17c
            java.lang.String r5 = "sslSocketSession"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r3, r5)     // Catch: java.lang.Throwable -> L17c
            okhttp3.Handshake r4 = r4.get(r3)     // Catch: java.lang.Throwable -> L17c
            javax.net.ssl.HostnameVerifier r5 = r0.hostnameVerifier()     // Catch: java.lang.Throwable -> L17c
            kotlin.jvm.internal.Intrinsics.checkNotNull(r5)     // Catch: java.lang.Throwable -> L17c
            okhttp3.HttpUrl r7 = r0.url()     // Catch: java.lang.Throwable -> L17c
            java.lang.String r7 = r7.host()     // Catch: java.lang.Throwable -> L17c
            boolean r3 = r5.verify(r7, r3)     // Catch: java.lang.Throwable -> L17c
            if (r3 != 0) goto Lff
            java.util.List r11 = r4.peerCertificates()     // Catch: java.lang.Throwable -> L17c
            r3 = r11
            java.util.Collection r3 = (java.util.Collection) r3     // Catch: java.lang.Throwable -> L17c
            boolean r3 = r3.isEmpty()     // Catch: java.lang.Throwable -> L17c
            r3 = r3 ^ r6
            if (r3 == 0) goto Ldb
            r3 = 0
            java.lang.Object r11 = r11.get(r3)     // Catch: java.lang.Throwable -> L17c
            java.security.cert.X509Certificate r11 = (java.security.cert.X509Certificate) r11     // Catch: java.lang.Throwable -> L17c
            javax.net.ssl.SSLPeerUnverifiedException r3 = new javax.net.ssl.SSLPeerUnverifiedException     // Catch: java.lang.Throwable -> L17c
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L17c
            r4.<init>()     // Catch: java.lang.Throwable -> L17c
            java.lang.String r5 = "\n              |Hostname "
            r4.append(r5)     // Catch: java.lang.Throwable -> L17c
            okhttp3.HttpUrl r0 = r0.url()     // Catch: java.lang.Throwable -> L17c
            java.lang.String r0 = r0.host()     // Catch: java.lang.Throwable -> L17c
            r4.append(r0)     // Catch: java.lang.Throwable -> L17c
            java.lang.String r0 = " not verified:\n              |    certificate: "
            r4.append(r0)     // Catch: java.lang.Throwable -> L17c
            okhttp3.CertificatePinner$Companion r0 = okhttp3.CertificatePinner.Companion     // Catch: java.lang.Throwable -> L17c
            r5 = r11
            java.security.cert.Certificate r5 = (java.security.cert.Certificate) r5     // Catch: java.lang.Throwable -> L17c
            java.lang.String r0 = r0.pin(r5)     // Catch: java.lang.Throwable -> L17c
            r4.append(r0)     // Catch: java.lang.Throwable -> L17c
            java.lang.String r0 = "\n              |    DN: "
            r4.append(r0)     // Catch: java.lang.Throwable -> L17c
            java.security.Principal r0 = r11.getSubjectDN()     // Catch: java.lang.Throwable -> L17c
            java.lang.String r0 = r0.getName()     // Catch: java.lang.Throwable -> L17c
            r4.append(r0)     // Catch: java.lang.Throwable -> L17c
            java.lang.String r0 = "\n              |    subjectAltNames: "
            r4.append(r0)     // Catch: java.lang.Throwable -> L17c
            okhttp3.internal.tls.OkHostnameVerifier r0 = okhttp3.internal.tls.OkHostnameVerifier.INSTANCE     // Catch: java.lang.Throwable -> L17c
            java.util.List r11 = r0.allSubjectAltNames(r11)     // Catch: java.lang.Throwable -> L17c
            r4.append(r11)     // Catch: java.lang.Throwable -> L17c
            java.lang.String r11 = "\n              "
            r4.append(r11)     // Catch: java.lang.Throwable -> L17c
            java.lang.String r11 = r4.toString()     // Catch: java.lang.Throwable -> L17c
            java.lang.String r11 = kotlin.text.StringsKt.trimMargin$default(r11, r2, r6, r2)     // Catch: java.lang.Throwable -> L17c
            r3.<init>(r11)     // Catch: java.lang.Throwable -> L17c
            throw r3     // Catch: java.lang.Throwable -> L17c
        Ldb:
            javax.net.ssl.SSLPeerUnverifiedException r11 = new javax.net.ssl.SSLPeerUnverifiedException     // Catch: java.lang.Throwable -> L17c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L17c
            r2.<init>()     // Catch: java.lang.Throwable -> L17c
            java.lang.String r3 = "Hostname "
            r2.append(r3)     // Catch: java.lang.Throwable -> L17c
            okhttp3.HttpUrl r0 = r0.url()     // Catch: java.lang.Throwable -> L17c
            java.lang.String r0 = r0.host()     // Catch: java.lang.Throwable -> L17c
            r2.append(r0)     // Catch: java.lang.Throwable -> L17c
            java.lang.String r0 = " not verified (no certificates)"
            r2.append(r0)     // Catch: java.lang.Throwable -> L17c
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L17c
            r11.<init>(r0)     // Catch: java.lang.Throwable -> L17c
            throw r11     // Catch: java.lang.Throwable -> L17c
        Lff:
            okhttp3.CertificatePinner r3 = r0.certificatePinner()     // Catch: java.lang.Throwable -> L17c
            kotlin.jvm.internal.Intrinsics.checkNotNull(r3)     // Catch: java.lang.Throwable -> L17c
            okhttp3.Handshake r5 = new okhttp3.Handshake     // Catch: java.lang.Throwable -> L17c
            okhttp3.TlsVersion r6 = r4.tlsVersion()     // Catch: java.lang.Throwable -> L17c
            okhttp3.CipherSuite r7 = r4.cipherSuite()     // Catch: java.lang.Throwable -> L17c
            java.util.List r8 = r4.localCertificates()     // Catch: java.lang.Throwable -> L17c
            okhttp3.internal.connection.RealConnection$connectTls$1 r9 = new okhttp3.internal.connection.RealConnection$connectTls$1     // Catch: java.lang.Throwable -> L17c
            r9.<init>(r3, r4, r0)     // Catch: java.lang.Throwable -> L17c
            kotlin.jvm.functions.Function0 r9 = (kotlin.jvm.functions.Function0) r9     // Catch: java.lang.Throwable -> L17c
            r5.<init>(r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L17c
            r10.handshake = r5     // Catch: java.lang.Throwable -> L17c
            okhttp3.HttpUrl r0 = r0.url()     // Catch: java.lang.Throwable -> L17c
            java.lang.String r0 = r0.host()     // Catch: java.lang.Throwable -> L17c
            okhttp3.internal.connection.RealConnection$connectTls$2 r4 = new okhttp3.internal.connection.RealConnection$connectTls$2     // Catch: java.lang.Throwable -> L17c
            r4.<init>(r10)     // Catch: java.lang.Throwable -> L17c
            kotlin.jvm.functions.Function0 r4 = (kotlin.jvm.functions.Function0) r4     // Catch: java.lang.Throwable -> L17c
            r3.check$okhttp(r0, r4)     // Catch: java.lang.Throwable -> L17c
            boolean r11 = r11.supportsTlsExtensions()     // Catch: java.lang.Throwable -> L17c
            if (r11 == 0) goto L143
            okhttp3.internal.platform.Platform$Companion r11 = okhttp3.internal.platform.Platform.Companion     // Catch: java.lang.Throwable -> L17c
            okhttp3.internal.platform.Platform r11 = r11.get()     // Catch: java.lang.Throwable -> L17c
            java.lang.String r11 = r11.getSelectedProtocol(r1)     // Catch: java.lang.Throwable -> L17c
            goto L146
        L143:
            r11 = r2
            java.lang.String r11 = (java.lang.String) r11     // Catch: java.lang.Throwable -> L17c
        L146:
            r0 = r1
            java.net.Socket r0 = (java.net.Socket) r0     // Catch: java.lang.Throwable -> L17c
            r10.socket = r0     // Catch: java.lang.Throwable -> L17c
            r0 = r1
            java.net.Socket r0 = (java.net.Socket) r0     // Catch: java.lang.Throwable -> L17c
            okio.Source r0 = okio.Okio.source(r0)     // Catch: java.lang.Throwable -> L17c
            okio.BufferedSource r0 = okio.Okio.buffer(r0)     // Catch: java.lang.Throwable -> L17c
            r10.source = r0     // Catch: java.lang.Throwable -> L17c
            r0 = r1
            java.net.Socket r0 = (java.net.Socket) r0     // Catch: java.lang.Throwable -> L17c
            okio.Sink r0 = okio.Okio.sink(r0)     // Catch: java.lang.Throwable -> L17c
            okio.BufferedSink r0 = okio.Okio.buffer(r0)     // Catch: java.lang.Throwable -> L17c
            r10.sink = r0     // Catch: java.lang.Throwable -> L17c
            if (r11 == 0) goto L16e
            okhttp3.Protocol$Companion r0 = okhttp3.Protocol.Companion     // Catch: java.lang.Throwable -> L17c
            okhttp3.Protocol r11 = r0.get(r11)     // Catch: java.lang.Throwable -> L17c
            goto L170
        L16e:
            okhttp3.Protocol r11 = okhttp3.Protocol.HTTP_1_1     // Catch: java.lang.Throwable -> L17c
        L170:
            r10.protocol = r11     // Catch: java.lang.Throwable -> L17c
            okhttp3.internal.platform.Platform$Companion r11 = okhttp3.internal.platform.Platform.Companion
            okhttp3.internal.platform.Platform r11 = r11.get()
            r11.afterHandshake(r1)
            return
        L17c:
            r11 = move-exception
            r2 = r1
            goto L188
        L17f:
            java.lang.NullPointerException r11 = new java.lang.NullPointerException     // Catch: java.lang.Throwable -> L187
            java.lang.String r0 = "null cannot be cast to non-null type javax.net.ssl.SSLSocket"
            r11.<init>(r0)     // Catch: java.lang.Throwable -> L187
            throw r11     // Catch: java.lang.Throwable -> L187
        L187:
            r11 = move-exception
        L188:
            if (r2 == 0) goto L193
            okhttp3.internal.platform.Platform$Companion r0 = okhttp3.internal.platform.Platform.Companion
            okhttp3.internal.platform.Platform r0 = r0.get()
            r0.afterHandshake(r2)
        L193:
            if (r2 != 0) goto L196
            goto L19b
        L196:
            java.net.Socket r2 = (java.net.Socket) r2
            okhttp3.internal.Util.closeQuietly(r2)
        L19b:
            throw r11
    }

    private final void connectTunnel(int r7, int r8, int r9, okhttp3.Call r10, okhttp3.EventListener r11) throws java.io.IOException {
            r6 = this;
            okhttp3.Request r0 = r6.createTunnelRequest()
            okhttp3.HttpUrl r1 = r0.url()
            r2 = 0
        L9:
            r3 = 21
            if (r2 >= r3) goto L38
            int r2 = r2 + 1
            r6.connectSocket(r7, r8, r10, r11)
            okhttp3.Request r0 = r6.createTunnel(r8, r9, r0, r1)
            if (r0 != 0) goto L19
            goto L38
        L19:
            java.net.Socket r3 = r6.rawSocket
            if (r3 != 0) goto L1e
            goto L21
        L1e:
            okhttp3.internal.Util.closeQuietly(r3)
        L21:
            r3 = 0
            r6.rawSocket = r3
            r6.sink = r3
            r6.source = r3
            okhttp3.Route r4 = r6.route
            java.net.InetSocketAddress r4 = r4.socketAddress()
            okhttp3.Route r5 = r6.route
            java.net.Proxy r5 = r5.proxy()
            r11.connectEnd(r10, r4, r5, r3)
            goto L9
        L38:
            return
    }

    private final okhttp3.Request createTunnel(int r10, int r11, okhttp3.Request r12, okhttp3.HttpUrl r13) throws java.io.IOException {
            r9 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "CONNECT "
            r0.append(r1)
            r1 = 1
            java.lang.String r13 = okhttp3.internal.Util.toHostHeader(r13, r1)
            r0.append(r13)
            java.lang.String r13 = " HTTP/1.1"
            r0.append(r13)
            java.lang.String r13 = r0.toString()
        L1b:
            okio.BufferedSource r0 = r9.source
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            okio.BufferedSink r2 = r9.sink
            kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
            okhttp3.internal.http1.Http1ExchangeCodec r3 = new okhttp3.internal.http1.Http1ExchangeCodec
            r4 = 0
            r3.<init>(r4, r9, r0, r2)
            okio.Timeout r5 = r0.timeout()
            long r6 = (long) r10
            java.util.concurrent.TimeUnit r8 = java.util.concurrent.TimeUnit.MILLISECONDS
            r5.timeout(r6, r8)
            okio.Timeout r5 = r2.timeout()
            long r6 = (long) r11
            java.util.concurrent.TimeUnit r8 = java.util.concurrent.TimeUnit.MILLISECONDS
            r5.timeout(r6, r8)
            okhttp3.Headers r5 = r12.headers()
            r3.writeRequest(r5, r13)
            r3.finishRequest()
            r5 = 0
            okhttp3.Response$Builder r5 = r3.readResponseHeaders(r5)
            kotlin.jvm.internal.Intrinsics.checkNotNull(r5)
            okhttp3.Response$Builder r12 = r5.request(r12)
            okhttp3.Response r12 = r12.build()
            r3.skipConnectBody(r12)
            int r3 = r12.code()
            r5 = 200(0xc8, float:2.8E-43)
            if (r3 == r5) goto La8
            r0 = 407(0x197, float:5.7E-43)
            if (r3 != r0) goto L94
            okhttp3.Route r0 = r9.route
            okhttp3.Address r0 = r0.address()
            okhttp3.Authenticator r0 = r0.proxyAuthenticator()
            okhttp3.Route r2 = r9.route
            okhttp3.Request r0 = r0.authenticate(r2, r12)
            if (r0 == 0) goto L8c
            r2 = 2
            java.lang.String r3 = "Connection"
            java.lang.String r12 = okhttp3.Response.header$default(r12, r3, r4, r2, r4)
            java.lang.String r2 = "close"
            boolean r12 = kotlin.text.StringsKt.equals(r2, r12, r1)
            if (r12 == 0) goto L8a
            return r0
        L8a:
            r12 = r0
            goto L1b
        L8c:
            java.io.IOException r10 = new java.io.IOException
            java.lang.String r11 = "Failed to authenticate with proxy"
            r10.<init>(r11)
            throw r10
        L94:
            java.io.IOException r10 = new java.io.IOException
            int r11 = r12.code()
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)
            java.lang.String r12 = "Unexpected response code for CONNECT: "
            java.lang.String r11 = kotlin.jvm.internal.Intrinsics.stringPlus(r12, r11)
            r10.<init>(r11)
            throw r10
        La8:
            okio.Buffer r10 = r0.getBuffer()
            boolean r10 = r10.exhausted()
            if (r10 == 0) goto Lbd
            okio.Buffer r10 = r2.getBuffer()
            boolean r10 = r10.exhausted()
            if (r10 == 0) goto Lbd
            return r4
        Lbd:
            java.io.IOException r10 = new java.io.IOException
            java.lang.String r11 = "TLS tunnel buffered too many bytes!"
            r10.<init>(r11)
            throw r10
    }

    private final okhttp3.Request createTunnelRequest() throws java.io.IOException {
            r4 = this;
            okhttp3.Request$Builder r0 = new okhttp3.Request$Builder
            r0.<init>()
            okhttp3.Route r1 = r4.route
            okhttp3.Address r1 = r1.address()
            okhttp3.HttpUrl r1 = r1.url()
            okhttp3.Request$Builder r0 = r0.url(r1)
            java.lang.String r1 = "CONNECT"
            r2 = 0
            okhttp3.Request$Builder r0 = r0.method(r1, r2)
            okhttp3.Route r1 = r4.route
            okhttp3.Address r1 = r1.address()
            okhttp3.HttpUrl r1 = r1.url()
            r2 = 1
            java.lang.String r1 = okhttp3.internal.Util.toHostHeader(r1, r2)
            java.lang.String r2 = "Host"
            okhttp3.Request$Builder r0 = r0.header(r2, r1)
            java.lang.String r1 = "Proxy-Connection"
            java.lang.String r2 = "Keep-Alive"
            okhttp3.Request$Builder r0 = r0.header(r1, r2)
            java.lang.String r1 = "User-Agent"
            java.lang.String r2 = "okhttp/4.10.0"
            okhttp3.Request$Builder r0 = r0.header(r1, r2)
            okhttp3.Request r0 = r0.build()
            okhttp3.Response$Builder r1 = new okhttp3.Response$Builder
            r1.<init>()
            okhttp3.Response$Builder r1 = r1.request(r0)
            okhttp3.Protocol r2 = okhttp3.Protocol.HTTP_1_1
            okhttp3.Response$Builder r1 = r1.protocol(r2)
            r2 = 407(0x197, float:5.7E-43)
            okhttp3.Response$Builder r1 = r1.code(r2)
            java.lang.String r2 = "Preemptive Authenticate"
            okhttp3.Response$Builder r1 = r1.message(r2)
            okhttp3.ResponseBody r2 = okhttp3.internal.Util.EMPTY_RESPONSE
            okhttp3.Response$Builder r1 = r1.body(r2)
            r2 = -1
            okhttp3.Response$Builder r1 = r1.sentRequestAtMillis(r2)
            okhttp3.Response$Builder r1 = r1.receivedResponseAtMillis(r2)
            java.lang.String r2 = "Proxy-Authenticate"
            java.lang.String r3 = "OkHttp-Preemptive"
            okhttp3.Response$Builder r1 = r1.header(r2, r3)
            okhttp3.Response r1 = r1.build()
            okhttp3.Route r2 = r4.route
            okhttp3.Address r2 = r2.address()
            okhttp3.Authenticator r2 = r2.proxyAuthenticator()
            okhttp3.Route r3 = r4.route
            okhttp3.Request r1 = r2.authenticate(r3, r1)
            if (r1 != 0) goto L8d
            goto L8e
        L8d:
            r0 = r1
        L8e:
            return r0
    }

    private final void establishProtocol(okhttp3.internal.connection.ConnectionSpecSelector r2, int r3, okhttp3.Call r4, okhttp3.EventListener r5) throws java.io.IOException {
            r1 = this;
            okhttp3.Route r0 = r1.route
            okhttp3.Address r0 = r0.address()
            javax.net.ssl.SSLSocketFactory r0 = r0.sslSocketFactory()
            if (r0 != 0) goto L33
            okhttp3.Route r2 = r1.route
            okhttp3.Address r2 = r2.address()
            java.util.List r2 = r2.protocols()
            okhttp3.Protocol r4 = okhttp3.Protocol.H2_PRIOR_KNOWLEDGE
            boolean r2 = r2.contains(r4)
            if (r2 == 0) goto L2a
            java.net.Socket r2 = r1.rawSocket
            r1.socket = r2
            okhttp3.Protocol r2 = okhttp3.Protocol.H2_PRIOR_KNOWLEDGE
            r1.protocol = r2
            r1.startHttp2(r3)
            return
        L2a:
            java.net.Socket r2 = r1.rawSocket
            r1.socket = r2
            okhttp3.Protocol r2 = okhttp3.Protocol.HTTP_1_1
            r1.protocol = r2
            return
        L33:
            r5.secureConnectStart(r4)
            r1.connectTls(r2)
            okhttp3.Handshake r2 = r1.handshake
            r5.secureConnectEnd(r4, r2)
            okhttp3.Protocol r2 = r1.protocol
            okhttp3.Protocol r4 = okhttp3.Protocol.HTTP_2
            if (r2 != r4) goto L47
            r1.startHttp2(r3)
        L47:
            return
    }

    private final boolean routeMatchesAny(java.util.List<okhttp3.Route> r6) {
            r5 = this;
            java.lang.Iterable r6 = (java.lang.Iterable) r6
            boolean r0 = r6 instanceof java.util.Collection
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L13
            r0 = r6
            java.util.Collection r0 = (java.util.Collection) r0
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L13
        L11:
            r1 = r2
            goto L52
        L13:
            java.util.Iterator r6 = r6.iterator()
        L17:
            boolean r0 = r6.hasNext()
            if (r0 == 0) goto L11
            java.lang.Object r0 = r6.next()
            okhttp3.Route r0 = (okhttp3.Route) r0
            java.net.Proxy r3 = r0.proxy()
            java.net.Proxy$Type r3 = r3.type()
            java.net.Proxy$Type r4 = java.net.Proxy.Type.DIRECT
            if (r3 != r4) goto L4f
            okhttp3.Route r3 = r5.route
            java.net.Proxy r3 = r3.proxy()
            java.net.Proxy$Type r3 = r3.type()
            java.net.Proxy$Type r4 = java.net.Proxy.Type.DIRECT
            if (r3 != r4) goto L4f
            okhttp3.Route r3 = r5.route
            java.net.InetSocketAddress r3 = r3.socketAddress()
            java.net.InetSocketAddress r0 = r0.socketAddress()
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r0)
            if (r0 == 0) goto L4f
            r0 = r1
            goto L50
        L4f:
            r0 = r2
        L50:
            if (r0 == 0) goto L17
        L52:
            return r1
    }

    private final void startHttp2(int r8) throws java.io.IOException {
            r7 = this;
            java.net.Socket r0 = r7.socket
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            okio.BufferedSource r1 = r7.source
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
            okio.BufferedSink r2 = r7.sink
            kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
            r3 = 0
            r0.setSoTimeout(r3)
            okhttp3.internal.http2.Http2Connection$Builder r4 = new okhttp3.internal.http2.Http2Connection$Builder
            okhttp3.internal.concurrent.TaskRunner r5 = okhttp3.internal.concurrent.TaskRunner.INSTANCE
            r6 = 1
            r4.<init>(r6, r5)
            okhttp3.Route r5 = r7.route
            okhttp3.Address r5 = r5.address()
            okhttp3.HttpUrl r5 = r5.url()
            java.lang.String r5 = r5.host()
            okhttp3.internal.http2.Http2Connection$Builder r0 = r4.socket(r0, r5, r1, r2)
            r1 = r7
            okhttp3.internal.http2.Http2Connection$Listener r1 = (okhttp3.internal.http2.Http2Connection.Listener) r1
            okhttp3.internal.http2.Http2Connection$Builder r0 = r0.listener(r1)
            okhttp3.internal.http2.Http2Connection$Builder r8 = r0.pingIntervalMillis(r8)
            okhttp3.internal.http2.Http2Connection r8 = r8.build()
            r7.http2Connection = r8
            okhttp3.internal.http2.Http2Connection$Companion r0 = okhttp3.internal.http2.Http2Connection.Companion
            okhttp3.internal.http2.Settings r0 = r0.getDEFAULT_SETTINGS()
            int r0 = r0.getMaxConcurrentStreams()
            r7.allocationLimit = r0
            r0 = 0
            r1 = 3
            okhttp3.internal.http2.Http2Connection.start$default(r8, r3, r0, r1, r0)
            return
    }

    private final boolean supportsUrl(okhttp3.HttpUrl r5) {
            r4 = this;
            boolean r0 = okhttp3.internal.Util.assertionsEnabled
            if (r0 == 0) goto L32
            boolean r0 = java.lang.Thread.holdsLock(r4)
            if (r0 == 0) goto Lb
            goto L32
        Lb:
            java.lang.AssertionError r5 = new java.lang.AssertionError
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Thread "
            r0.append(r1)
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = " MUST hold lock on "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            r5.<init>(r0)
            throw r5
        L32:
            okhttp3.Route r0 = r4.route
            okhttp3.Address r0 = r0.address()
            okhttp3.HttpUrl r0 = r0.url()
            int r1 = r5.port()
            int r2 = r0.port()
            r3 = 0
            if (r1 == r2) goto L48
            return r3
        L48:
            java.lang.String r1 = r5.host()
            java.lang.String r0 = r0.host()
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r1, r0)
            r1 = 1
            if (r0 == 0) goto L58
            return r1
        L58:
            boolean r0 = r4.noCoalescedConnections
            if (r0 != 0) goto L6a
            okhttp3.Handshake r0 = r4.handshake
            if (r0 == 0) goto L6a
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            boolean r5 = r4.certificateSupportHost(r5, r0)
            if (r5 == 0) goto L6a
            r3 = r1
        L6a:
            return r3
    }

    public final void cancel() {
            r1 = this;
            java.net.Socket r0 = r1.rawSocket
            if (r0 != 0) goto L5
            goto L8
        L5:
            okhttp3.internal.Util.closeQuietly(r0)
        L8:
            return
    }

    public final void connect(int r17, int r18, int r19, int r20, boolean r21, okhttp3.Call r22, okhttp3.EventListener r23) {
            r16 = this;
            r7 = r16
            r8 = r22
            r9 = r23
            java.lang.String r0 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            java.lang.String r0 = "eventListener"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            okhttp3.Protocol r0 = r7.protocol
            r10 = 1
            if (r0 != 0) goto L17
            r0 = r10
            goto L18
        L17:
            r0 = 0
        L18:
            if (r0 == 0) goto L164
            okhttp3.Route r0 = r7.route
            okhttp3.Address r0 = r0.address()
            java.util.List r0 = r0.connectionSpecs()
            okhttp3.internal.connection.ConnectionSpecSelector r11 = new okhttp3.internal.connection.ConnectionSpecSelector
            r11.<init>(r0)
            okhttp3.Route r1 = r7.route
            okhttp3.Address r1 = r1.address()
            javax.net.ssl.SSLSocketFactory r1 = r1.sslSocketFactory()
            if (r1 != 0) goto L8a
            okhttp3.ConnectionSpec r1 = okhttp3.ConnectionSpec.CLEARTEXT
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L7b
            okhttp3.Route r0 = r7.route
            okhttp3.Address r0 = r0.address()
            okhttp3.HttpUrl r0 = r0.url()
            java.lang.String r0 = r0.host()
            okhttp3.internal.platform.Platform$Companion r1 = okhttp3.internal.platform.Platform.Companion
            okhttp3.internal.platform.Platform r1 = r1.get()
            boolean r1 = r1.isCleartextTrafficPermitted(r0)
            if (r1 == 0) goto L58
            goto L9c
        L58:
            okhttp3.internal.connection.RouteException r1 = new okhttp3.internal.connection.RouteException
            java.net.UnknownServiceException r2 = new java.net.UnknownServiceException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "CLEARTEXT communication to "
            r3.append(r4)
            r3.append(r0)
            java.lang.String r0 = " not permitted by network security policy"
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r2.<init>(r0)
            java.io.IOException r2 = (java.io.IOException) r2
            r1.<init>(r2)
            throw r1
        L7b:
            okhttp3.internal.connection.RouteException r0 = new okhttp3.internal.connection.RouteException
            java.net.UnknownServiceException r1 = new java.net.UnknownServiceException
            java.lang.String r2 = "CLEARTEXT communication not enabled for client"
            r1.<init>(r2)
            java.io.IOException r1 = (java.io.IOException) r1
            r0.<init>(r1)
            throw r0
        L8a:
            okhttp3.Route r0 = r7.route
            okhttp3.Address r0 = r0.address()
            java.util.List r0 = r0.protocols()
            okhttp3.Protocol r1 = okhttp3.Protocol.H2_PRIOR_KNOWLEDGE
            boolean r0 = r0.contains(r1)
            if (r0 != 0) goto L155
        L9c:
            r12 = 0
            r13 = r12
        L9e:
            okhttp3.Route r0 = r7.route     // Catch: java.io.IOException -> L103
            boolean r0 = r0.requiresTunnel()     // Catch: java.io.IOException -> L103
            if (r0 == 0) goto Lbf
            r1 = r16
            r2 = r17
            r3 = r18
            r4 = r19
            r5 = r22
            r6 = r23
            r1.connectTunnel(r2, r3, r4, r5, r6)     // Catch: java.io.IOException -> L103
            java.net.Socket r0 = r7.rawSocket     // Catch: java.io.IOException -> L103
            if (r0 != 0) goto Lba
            goto Ldc
        Lba:
            r14 = r17
            r15 = r18
            goto Lc6
        Lbf:
            r14 = r17
            r15 = r18
            r7.connectSocket(r14, r15, r8, r9)     // Catch: java.io.IOException -> L101
        Lc6:
            r6 = r20
            r7.establishProtocol(r11, r6, r8, r9)     // Catch: java.io.IOException -> Lff
            okhttp3.Route r0 = r7.route     // Catch: java.io.IOException -> Lff
            java.net.InetSocketAddress r0 = r0.socketAddress()     // Catch: java.io.IOException -> Lff
            okhttp3.Route r1 = r7.route     // Catch: java.io.IOException -> Lff
            java.net.Proxy r1 = r1.proxy()     // Catch: java.io.IOException -> Lff
            okhttp3.Protocol r2 = r7.protocol     // Catch: java.io.IOException -> Lff
            r9.connectEnd(r8, r0, r1, r2)     // Catch: java.io.IOException -> Lff
        Ldc:
            okhttp3.Route r0 = r7.route
            boolean r0 = r0.requiresTunnel()
            if (r0 == 0) goto Lf8
            java.net.Socket r0 = r7.rawSocket
            if (r0 == 0) goto Le9
            goto Lf8
        Le9:
            okhttp3.internal.connection.RouteException r0 = new okhttp3.internal.connection.RouteException
            java.net.ProtocolException r1 = new java.net.ProtocolException
            java.lang.String r2 = "Too many tunnel connections attempted: 21"
            r1.<init>(r2)
            java.io.IOException r1 = (java.io.IOException) r1
            r0.<init>(r1)
            throw r0
        Lf8:
            long r0 = java.lang.System.nanoTime()
            r7.idleAtNs = r0
            return
        Lff:
            r0 = move-exception
            goto L10a
        L101:
            r0 = move-exception
            goto L108
        L103:
            r0 = move-exception
            r14 = r17
            r15 = r18
        L108:
            r6 = r20
        L10a:
            java.net.Socket r1 = r7.socket
            if (r1 != 0) goto L10f
            goto L112
        L10f:
            okhttp3.internal.Util.closeQuietly(r1)
        L112:
            java.net.Socket r1 = r7.rawSocket
            if (r1 != 0) goto L117
            goto L11a
        L117:
            okhttp3.internal.Util.closeQuietly(r1)
        L11a:
            r7.socket = r12
            r7.rawSocket = r12
            r7.source = r12
            r7.sink = r12
            r7.handshake = r12
            r7.protocol = r12
            r7.http2Connection = r12
            r7.allocationLimit = r10
            okhttp3.Route r1 = r7.route
            java.net.InetSocketAddress r3 = r1.socketAddress()
            okhttp3.Route r1 = r7.route
            java.net.Proxy r4 = r1.proxy()
            r5 = 0
            r1 = r23
            r2 = r22
            r6 = r0
            r1.connectFailed(r2, r3, r4, r5, r6)
            if (r13 != 0) goto L147
            okhttp3.internal.connection.RouteException r13 = new okhttp3.internal.connection.RouteException
            r13.<init>(r0)
            goto L14a
        L147:
            r13.addConnectException(r0)
        L14a:
            if (r21 == 0) goto L154
            boolean r0 = r11.connectionFailed(r0)
            if (r0 == 0) goto L154
            goto L9e
        L154:
            throw r13
        L155:
            okhttp3.internal.connection.RouteException r0 = new okhttp3.internal.connection.RouteException
            java.net.UnknownServiceException r1 = new java.net.UnknownServiceException
            java.lang.String r2 = "H2_PRIOR_KNOWLEDGE cannot be used with HTTPS"
            r1.<init>(r2)
            java.io.IOException r1 = (java.io.IOException) r1
            r0.<init>(r1)
            throw r0
        L164:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "already connected"
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    public final void connectFailed$okhttp(okhttp3.OkHttpClient r4, okhttp3.Route r5, java.io.IOException r6) {
            r3 = this;
            java.lang.String r0 = "client"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = "failedRoute"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            java.lang.String r0 = "failure"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            java.net.Proxy r0 = r5.proxy()
            java.net.Proxy$Type r0 = r0.type()
            java.net.Proxy$Type r1 = java.net.Proxy.Type.DIRECT
            if (r0 == r1) goto L36
            okhttp3.Address r0 = r5.address()
            java.net.ProxySelector r1 = r0.proxySelector()
            okhttp3.HttpUrl r0 = r0.url()
            java.net.URI r0 = r0.uri()
            java.net.Proxy r2 = r5.proxy()
            java.net.SocketAddress r2 = r2.address()
            r1.connectFailed(r0, r2, r6)
        L36:
            okhttp3.internal.connection.RouteDatabase r4 = r4.getRouteDatabase()
            r4.failed(r5)
            return
    }

    public final java.util.List<java.lang.ref.Reference<okhttp3.internal.connection.RealCall>> getCalls() {
            r1 = this;
            java.util.List<java.lang.ref.Reference<okhttp3.internal.connection.RealCall>> r0 = r1.calls
            return r0
    }

    public final okhttp3.internal.connection.RealConnectionPool getConnectionPool() {
            r1 = this;
            okhttp3.internal.connection.RealConnectionPool r0 = r1.connectionPool
            return r0
    }

    public final long getIdleAtNs$okhttp() {
            r2 = this;
            long r0 = r2.idleAtNs
            return r0
    }

    public final boolean getNoNewExchanges() {
            r1 = this;
            boolean r0 = r1.noNewExchanges
            return r0
    }

    public final int getRouteFailureCount$okhttp() {
            r1 = this;
            int r0 = r1.routeFailureCount
            return r0
    }

    @Override
    public okhttp3.Handshake handshake() {
            r1 = this;
            okhttp3.Handshake r0 = r1.handshake
            return r0
    }

    public final synchronized void incrementSuccessCount$okhttp() {
            r1 = this;
            monitor-enter(r1)
            int r0 = r1.successCount     // Catch: java.lang.Throwable -> L9
            int r0 = r0 + 1
            r1.successCount = r0     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)
            return
        L9:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final boolean isEligible$okhttp(okhttp3.Address r4, java.util.List<okhttp3.Route> r5) {
            r3 = this;
            java.lang.String r0 = "address"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            boolean r0 = okhttp3.internal.Util.assertionsEnabled
            if (r0 == 0) goto L37
            boolean r0 = java.lang.Thread.holdsLock(r3)
            if (r0 == 0) goto L10
            goto L37
        L10:
            java.lang.AssertionError r4 = new java.lang.AssertionError
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "Thread "
            r5.append(r0)
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            java.lang.String r0 = r0.getName()
            r5.append(r0)
            java.lang.String r0 = " MUST hold lock on "
            r5.append(r0)
            r5.append(r3)
            java.lang.String r5 = r5.toString()
            r4.<init>(r5)
            throw r4
        L37:
            java.util.List<java.lang.ref.Reference<okhttp3.internal.connection.RealCall>> r0 = r3.calls
            int r0 = r0.size()
            int r1 = r3.allocationLimit
            r2 = 0
            if (r0 >= r1) goto Lb4
            boolean r0 = r3.noNewExchanges
            if (r0 == 0) goto L47
            goto Lb4
        L47:
            okhttp3.Route r0 = r3.route
            okhttp3.Address r0 = r0.address()
            boolean r0 = r0.equalsNonHost$okhttp(r4)
            if (r0 != 0) goto L54
            return r2
        L54:
            okhttp3.HttpUrl r0 = r4.url()
            java.lang.String r0 = r0.host()
            okhttp3.Route r1 = r3.route()
            okhttp3.Address r1 = r1.address()
            okhttp3.HttpUrl r1 = r1.url()
            java.lang.String r1 = r1.host()
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
            r1 = 1
            if (r0 == 0) goto L74
            return r1
        L74:
            okhttp3.internal.http2.Http2Connection r0 = r3.http2Connection
            if (r0 != 0) goto L79
            return r2
        L79:
            if (r5 == 0) goto Lb4
            boolean r5 = r3.routeMatchesAny(r5)
            if (r5 != 0) goto L82
            goto Lb4
        L82:
            javax.net.ssl.HostnameVerifier r5 = r4.hostnameVerifier()
            okhttp3.internal.tls.OkHostnameVerifier r0 = okhttp3.internal.tls.OkHostnameVerifier.INSTANCE
            if (r5 == r0) goto L8b
            return r2
        L8b:
            okhttp3.HttpUrl r5 = r4.url()
            boolean r5 = r3.supportsUrl(r5)
            if (r5 != 0) goto L96
            return r2
        L96:
            okhttp3.CertificatePinner r5 = r4.certificatePinner()     // Catch: javax.net.ssl.SSLPeerUnverifiedException -> Lb4
            kotlin.jvm.internal.Intrinsics.checkNotNull(r5)     // Catch: javax.net.ssl.SSLPeerUnverifiedException -> Lb4
            okhttp3.HttpUrl r4 = r4.url()     // Catch: javax.net.ssl.SSLPeerUnverifiedException -> Lb4
            java.lang.String r4 = r4.host()     // Catch: javax.net.ssl.SSLPeerUnverifiedException -> Lb4
            okhttp3.Handshake r0 = r3.handshake()     // Catch: javax.net.ssl.SSLPeerUnverifiedException -> Lb4
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)     // Catch: javax.net.ssl.SSLPeerUnverifiedException -> Lb4
            java.util.List r0 = r0.peerCertificates()     // Catch: javax.net.ssl.SSLPeerUnverifiedException -> Lb4
            r5.check(r4, r0)     // Catch: javax.net.ssl.SSLPeerUnverifiedException -> Lb4
            return r1
        Lb4:
            return r2
    }

    public final boolean isHealthy(boolean r8) {
            r7 = this;
            boolean r0 = okhttp3.internal.Util.assertionsEnabled
            if (r0 == 0) goto L32
            boolean r0 = java.lang.Thread.holdsLock(r7)
            if (r0 != 0) goto Lb
            goto L32
        Lb:
            java.lang.AssertionError r8 = new java.lang.AssertionError
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Thread "
            r0.append(r1)
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = " MUST NOT hold lock on "
            r0.append(r1)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            r8.<init>(r0)
            throw r8
        L32:
            long r0 = java.lang.System.nanoTime()
            java.net.Socket r2 = r7.rawSocket
            kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
            java.net.Socket r3 = r7.socket
            kotlin.jvm.internal.Intrinsics.checkNotNull(r3)
            okio.BufferedSource r4 = r7.source
            kotlin.jvm.internal.Intrinsics.checkNotNull(r4)
            boolean r2 = r2.isClosed()
            if (r2 != 0) goto L83
            boolean r2 = r3.isClosed()
            if (r2 != 0) goto L83
            boolean r2 = r3.isInputShutdown()
            if (r2 != 0) goto L83
            boolean r2 = r3.isOutputShutdown()
            if (r2 == 0) goto L5e
            goto L83
        L5e:
            okhttp3.internal.http2.Http2Connection r2 = r7.http2Connection
            if (r2 == 0) goto L67
            boolean r8 = r2.isHealthy(r0)
            return r8
        L67:
            monitor-enter(r7)
            long r5 = r7.getIdleAtNs$okhttp()     // Catch: java.lang.Throwable -> L80
            long r0 = r0 - r5
            monitor-exit(r7)
            r5 = 10000000000(0x2540be400, double:4.9406564584E-314)
            int r0 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r0 < 0) goto L7e
            if (r8 == 0) goto L7e
            boolean r8 = okhttp3.internal.Util.isHealthy(r3, r4)
            return r8
        L7e:
            r8 = 1
            return r8
        L80:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
        L83:
            r8 = 0
            return r8
    }

    public final boolean isMultiplexed$okhttp() {
            r1 = this;
            okhttp3.internal.http2.Http2Connection r0 = r1.http2Connection
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public final okhttp3.internal.http.ExchangeCodec newCodec$okhttp(okhttp3.OkHttpClient r7, okhttp3.internal.http.RealInterceptorChain r8) throws java.net.SocketException {
            r6 = this;
            java.lang.String r0 = "client"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            java.lang.String r0 = "chain"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            java.net.Socket r0 = r6.socket
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            okio.BufferedSource r1 = r6.source
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
            okio.BufferedSink r2 = r6.sink
            kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
            okhttp3.internal.http2.Http2Connection r3 = r6.http2Connection
            if (r3 == 0) goto L25
            okhttp3.internal.http2.Http2ExchangeCodec r0 = new okhttp3.internal.http2.Http2ExchangeCodec
            r0.<init>(r7, r6, r8, r3)
            okhttp3.internal.http.ExchangeCodec r0 = (okhttp3.internal.http.ExchangeCodec) r0
            goto L50
        L25:
            int r3 = r8.readTimeoutMillis()
            r0.setSoTimeout(r3)
            okio.Timeout r0 = r1.timeout()
            int r3 = r8.getReadTimeoutMillis$okhttp()
            long r3 = (long) r3
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.MILLISECONDS
            r0.timeout(r3, r5)
            okio.Timeout r0 = r2.timeout()
            int r8 = r8.getWriteTimeoutMillis$okhttp()
            long r3 = (long) r8
            java.util.concurrent.TimeUnit r8 = java.util.concurrent.TimeUnit.MILLISECONDS
            r0.timeout(r3, r8)
            okhttp3.internal.http1.Http1ExchangeCodec r8 = new okhttp3.internal.http1.Http1ExchangeCodec
            r8.<init>(r7, r6, r1, r2)
            r0 = r8
            okhttp3.internal.http.ExchangeCodec r0 = (okhttp3.internal.http.ExchangeCodec) r0
        L50:
            return r0
    }

    public final okhttp3.internal.ws.RealWebSocket.Streams newWebSocketStreams$okhttp(okhttp3.internal.connection.Exchange r5) throws java.net.SocketException {
            r4 = this;
            java.lang.String r0 = "exchange"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            java.net.Socket r0 = r4.socket
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            okio.BufferedSource r1 = r4.source
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
            okio.BufferedSink r2 = r4.sink
            kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
            r3 = 0
            r0.setSoTimeout(r3)
            r4.noNewExchanges$okhttp()
            okhttp3.internal.connection.RealConnection$newWebSocketStreams$1 r0 = new okhttp3.internal.connection.RealConnection$newWebSocketStreams$1
            r0.<init>(r1, r2, r5)
            okhttp3.internal.ws.RealWebSocket$Streams r0 = (okhttp3.internal.ws.RealWebSocket.Streams) r0
            return r0
    }

    public final synchronized void noCoalescedConnections$okhttp() {
            r1 = this;
            monitor-enter(r1)
            r0 = 1
            r1.noCoalescedConnections = r0     // Catch: java.lang.Throwable -> L6
            monitor-exit(r1)
            return
        L6:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized void noNewExchanges$okhttp() {
            r1 = this;
            monitor-enter(r1)
            r0 = 1
            r1.noNewExchanges = r0     // Catch: java.lang.Throwable -> L6
            monitor-exit(r1)
            return
        L6:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    public synchronized void onSettings(okhttp3.internal.http2.Http2Connection r2, okhttp3.internal.http2.Settings r3) {
            r1 = this;
            monitor-enter(r1)
            java.lang.String r0 = "connection"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)     // Catch: java.lang.Throwable -> L13
            java.lang.String r2 = "settings"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r2)     // Catch: java.lang.Throwable -> L13
            int r2 = r3.getMaxConcurrentStreams()     // Catch: java.lang.Throwable -> L13
            r1.allocationLimit = r2     // Catch: java.lang.Throwable -> L13
            monitor-exit(r1)
            return
        L13:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public void onStream(okhttp3.internal.http2.Http2Stream r3) throws java.io.IOException {
            r2 = this;
            java.lang.String r0 = "stream"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            okhttp3.internal.http2.ErrorCode r0 = okhttp3.internal.http2.ErrorCode.REFUSED_STREAM
            r1 = 0
            r3.close(r0, r1)
            return
    }

    @Override
    public okhttp3.Protocol protocol() {
            r1 = this;
            okhttp3.Protocol r0 = r1.protocol
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            return r0
    }

    @Override
    public okhttp3.Route route() {
            r1 = this;
            okhttp3.Route r0 = r1.route
            return r0
    }

    public final void setIdleAtNs$okhttp(long r1) {
            r0 = this;
            r0.idleAtNs = r1
            return
    }

    public final void setNoNewExchanges(boolean r1) {
            r0 = this;
            r0.noNewExchanges = r1
            return
    }

    public final void setRouteFailureCount$okhttp(int r1) {
            r0 = this;
            r0.routeFailureCount = r1
            return
    }

    @Override
    public java.net.Socket socket() {
            r1 = this;
            java.net.Socket r0 = r1.socket
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Connection{"
            r0.append(r1)
            okhttp3.Route r1 = r3.route
            okhttp3.Address r1 = r1.address()
            okhttp3.HttpUrl r1 = r1.url()
            java.lang.String r1 = r1.host()
            r0.append(r1)
            r1 = 58
            r0.append(r1)
            okhttp3.Route r1 = r3.route
            okhttp3.Address r1 = r1.address()
            okhttp3.HttpUrl r1 = r1.url()
            int r1 = r1.port()
            r0.append(r1)
            java.lang.String r1 = ", proxy="
            r0.append(r1)
            okhttp3.Route r1 = r3.route
            java.net.Proxy r1 = r1.proxy()
            r0.append(r1)
            java.lang.String r1 = " hostAddress="
            r0.append(r1)
            okhttp3.Route r1 = r3.route
            java.net.InetSocketAddress r1 = r1.socketAddress()
            r0.append(r1)
            java.lang.String r1 = " cipherSuite="
            r0.append(r1)
            okhttp3.Handshake r1 = r3.handshake
            java.lang.String r2 = "none"
            if (r1 != 0) goto L59
            goto L61
        L59:
            okhttp3.CipherSuite r1 = r1.cipherSuite()
            if (r1 != 0) goto L60
            goto L61
        L60:
            r2 = r1
        L61:
            r0.append(r2)
            java.lang.String r1 = " protocol="
            r0.append(r1)
            okhttp3.Protocol r1 = r3.protocol
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public final synchronized void trackFailure$okhttp(okhttp3.internal.connection.RealCall r4, java.io.IOException r5) {
            r3 = this;
            monitor-enter(r3)
            java.lang.String r0 = "call"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)     // Catch: java.lang.Throwable -> L5c
            boolean r0 = r5 instanceof okhttp3.internal.http2.StreamResetException     // Catch: java.lang.Throwable -> L5c
            r1 = 1
            if (r0 == 0) goto L3a
            r0 = r5
            okhttp3.internal.http2.StreamResetException r0 = (okhttp3.internal.http2.StreamResetException) r0     // Catch: java.lang.Throwable -> L5c
            okhttp3.internal.http2.ErrorCode r0 = r0.errorCode     // Catch: java.lang.Throwable -> L5c
            okhttp3.internal.http2.ErrorCode r2 = okhttp3.internal.http2.ErrorCode.REFUSED_STREAM     // Catch: java.lang.Throwable -> L5c
            if (r0 != r2) goto L23
            int r4 = r3.refusedStreamCount     // Catch: java.lang.Throwable -> L5c
            int r4 = r4 + r1
            r3.refusedStreamCount = r4     // Catch: java.lang.Throwable -> L5c
            if (r4 <= r1) goto L5a
            r3.noNewExchanges = r1     // Catch: java.lang.Throwable -> L5c
            int r4 = r3.routeFailureCount     // Catch: java.lang.Throwable -> L5c
            int r4 = r4 + r1
            r3.routeFailureCount = r4     // Catch: java.lang.Throwable -> L5c
            goto L5a
        L23:
            okhttp3.internal.http2.StreamResetException r5 = (okhttp3.internal.http2.StreamResetException) r5     // Catch: java.lang.Throwable -> L5c
            okhttp3.internal.http2.ErrorCode r5 = r5.errorCode     // Catch: java.lang.Throwable -> L5c
            okhttp3.internal.http2.ErrorCode r0 = okhttp3.internal.http2.ErrorCode.CANCEL     // Catch: java.lang.Throwable -> L5c
            if (r5 != r0) goto L32
            boolean r4 = r4.isCanceled()     // Catch: java.lang.Throwable -> L5c
            if (r4 == 0) goto L32
            goto L5a
        L32:
            r3.noNewExchanges = r1     // Catch: java.lang.Throwable -> L5c
            int r4 = r3.routeFailureCount     // Catch: java.lang.Throwable -> L5c
            int r4 = r4 + r1
            r3.routeFailureCount = r4     // Catch: java.lang.Throwable -> L5c
            goto L5a
        L3a:
            boolean r0 = r3.isMultiplexed$okhttp()     // Catch: java.lang.Throwable -> L5c
            if (r0 == 0) goto L44
            boolean r0 = r5 instanceof okhttp3.internal.http2.ConnectionShutdownException     // Catch: java.lang.Throwable -> L5c
            if (r0 == 0) goto L5a
        L44:
            r3.noNewExchanges = r1     // Catch: java.lang.Throwable -> L5c
            int r0 = r3.successCount     // Catch: java.lang.Throwable -> L5c
            if (r0 != 0) goto L5a
            if (r5 == 0) goto L55
            okhttp3.OkHttpClient r4 = r4.getClient()     // Catch: java.lang.Throwable -> L5c
            okhttp3.Route r0 = r3.route     // Catch: java.lang.Throwable -> L5c
            r3.connectFailed$okhttp(r4, r0, r5)     // Catch: java.lang.Throwable -> L5c
        L55:
            int r4 = r3.routeFailureCount     // Catch: java.lang.Throwable -> L5c
            int r4 = r4 + r1
            r3.routeFailureCount = r4     // Catch: java.lang.Throwable -> L5c
        L5a:
            monitor-exit(r3)
            return
        L5c:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }
}
