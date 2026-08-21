package okhttp3;

@kotlin.Metadata(d1 = {"\u0000î\u0001\n\u0002\u0018\u0002\n\u0002\u0010\u001a\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0013\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0010\u0002\n\u0002\b\u0004\b\u0016\u0018\u0000 y2\u00020\u00012\u00020\u00022\u00020\u0003:\u0002xyB\u0007\b\u0016¢\u0006\u0002\u0010\u0004B\u000f\b\u0000\u0012\u0006\u0010\u0005\u001a\u00020\u0006¢\u0006\u0002\u0010\u0007J\r\u0010\b\u001a\u00020\tH\u0007¢\u0006\u0002\bSJ\u000f\u0010\u000b\u001a\u0004\u0018\u00010\fH\u0007¢\u0006\u0002\bTJ\r\u0010\u000e\u001a\u00020\u000fH\u0007¢\u0006\u0002\bUJ\r\u0010\u0014\u001a\u00020\u0015H\u0007¢\u0006\u0002\bVJ\r\u0010\u0017\u001a\u00020\u000fH\u0007¢\u0006\u0002\bWJ\r\u0010\u0018\u001a\u00020\u0019H\u0007¢\u0006\u0002\bXJ\u0013\u0010\u001b\u001a\b\u0012\u0004\u0012\u00020\u001d0\u001cH\u0007¢\u0006\u0002\bYJ\r\u0010\u001f\u001a\u00020 H\u0007¢\u0006\u0002\bZJ\r\u0010\"\u001a\u00020#H\u0007¢\u0006\u0002\b[J\r\u0010%\u001a\u00020&H\u0007¢\u0006\u0002\b\\J\r\u0010(\u001a\u00020)H\u0007¢\u0006\u0002\b]J\r\u0010+\u001a\u00020,H\u0007¢\u0006\u0002\b^J\r\u0010.\u001a\u00020,H\u0007¢\u0006\u0002\b_J\r\u0010/\u001a\u000200H\u0007¢\u0006\u0002\b`J\u0013\u00102\u001a\b\u0012\u0004\u0012\u0002030\u001cH\u0007¢\u0006\u0002\baJ\u0013\u00107\u001a\b\u0012\u0004\u0012\u0002030\u001cH\u0007¢\u0006\u0002\bbJ\b\u0010c\u001a\u00020\u0006H\u0016J\u0010\u0010d\u001a\u00020e2\u0006\u0010f\u001a\u00020gH\u0016J\u0018\u0010h\u001a\u00020i2\u0006\u0010f\u001a\u00020g2\u0006\u0010j\u001a\u00020kH\u0016J\r\u00108\u001a\u00020\u000fH\u0007¢\u0006\u0002\blJ\u0013\u00109\u001a\b\u0012\u0004\u0012\u00020:0\u001cH\u0007¢\u0006\u0002\bmJ\u000f\u0010;\u001a\u0004\u0018\u00010<H\u0007¢\u0006\u0002\bnJ\r\u0010>\u001a\u00020\tH\u0007¢\u0006\u0002\boJ\r\u0010?\u001a\u00020@H\u0007¢\u0006\u0002\bpJ\r\u0010B\u001a\u00020\u000fH\u0007¢\u0006\u0002\bqJ\r\u0010C\u001a\u00020,H\u0007¢\u0006\u0002\brJ\r\u0010H\u001a\u00020IH\u0007¢\u0006\u0002\bsJ\r\u0010K\u001a\u00020LH\u0007¢\u0006\u0002\btJ\b\u0010u\u001a\u00020vH\u0002J\r\u0010O\u001a\u00020\u000fH\u0007¢\u0006\u0002\bwR\u0013\u0010\b\u001a\u00020\t8G¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\nR\u0015\u0010\u000b\u001a\u0004\u0018\u00010\f8G¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\rR\u0013\u0010\u000e\u001a\u00020\u000f8G¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u0010R\u0015\u0010\u0011\u001a\u0004\u0018\u00010\u00128G¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0013R\u0013\u0010\u0014\u001a\u00020\u00158G¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0016R\u0013\u0010\u0017\u001a\u00020\u000f8G¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0010R\u0013\u0010\u0018\u001a\u00020\u00198G¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u001aR\u0019\u0010\u001b\u001a\b\u0012\u0004\u0012\u00020\u001d0\u001c8G¢\u0006\b\n\u0000\u001a\u0004\b\u001b\u0010\u001eR\u0013\u0010\u001f\u001a\u00020 8G¢\u0006\b\n\u0000\u001a\u0004\b\u001f\u0010!R\u0013\u0010\"\u001a\u00020#8G¢\u0006\b\n\u0000\u001a\u0004\b\"\u0010$R\u0013\u0010%\u001a\u00020&8G¢\u0006\b\n\u0000\u001a\u0004\b%\u0010'R\u0013\u0010(\u001a\u00020)8G¢\u0006\b\n\u0000\u001a\u0004\b(\u0010*R\u0013\u0010+\u001a\u00020,8G¢\u0006\b\n\u0000\u001a\u0004\b+\u0010-R\u0013\u0010.\u001a\u00020,8G¢\u0006\b\n\u0000\u001a\u0004\b.\u0010-R\u0013\u0010/\u001a\u0002008G¢\u0006\b\n\u0000\u001a\u0004\b/\u00101R\u0019\u00102\u001a\b\u0012\u0004\u0012\u0002030\u001c8G¢\u0006\b\n\u0000\u001a\u0004\b2\u0010\u001eR\u0013\u00104\u001a\u0002058G¢\u0006\b\n\u0000\u001a\u0004\b4\u00106R\u0019\u00107\u001a\b\u0012\u0004\u0012\u0002030\u001c8G¢\u0006\b\n\u0000\u001a\u0004\b7\u0010\u001eR\u0013\u00108\u001a\u00020\u000f8G¢\u0006\b\n\u0000\u001a\u0004\b8\u0010\u0010R\u0019\u00109\u001a\b\u0012\u0004\u0012\u00020:0\u001c8G¢\u0006\b\n\u0000\u001a\u0004\b9\u0010\u001eR\u0015\u0010;\u001a\u0004\u0018\u00010<8G¢\u0006\b\n\u0000\u001a\u0004\b;\u0010=R\u0013\u0010>\u001a\u00020\t8G¢\u0006\b\n\u0000\u001a\u0004\b>\u0010\nR\u0013\u0010?\u001a\u00020@8G¢\u0006\b\n\u0000\u001a\u0004\b?\u0010AR\u0013\u0010B\u001a\u00020\u000f8G¢\u0006\b\n\u0000\u001a\u0004\bB\u0010\u0010R\u0013\u0010C\u001a\u00020,8G¢\u0006\b\n\u0000\u001a\u0004\bC\u0010-R\u0011\u0010D\u001a\u00020E¢\u0006\b\n\u0000\u001a\u0004\bF\u0010GR\u0013\u0010H\u001a\u00020I8G¢\u0006\b\n\u0000\u001a\u0004\bH\u0010JR\u0011\u0010K\u001a\u00020L8G¢\u0006\u0006\u001a\u0004\bK\u0010MR\u0010\u0010N\u001a\u0004\u0018\u00010LX\u0082\u0004¢\u0006\u0002\n\u0000R\u0013\u0010O\u001a\u00020\u000f8G¢\u0006\b\n\u0000\u001a\u0004\bO\u0010\u0010R\u0015\u0010P\u001a\u0004\u0018\u00010Q8G¢\u0006\b\n\u0000\u001a\u0004\bP\u0010R¨\u0006z"}, d2 = {"Lokhttp3/OkHttpClient;", "", "Lokhttp3/Call$Factory;", "Lokhttp3/WebSocket$Factory;", "()V", "builder", "Lokhttp3/OkHttpClient$Builder;", "(Lokhttp3/OkHttpClient$Builder;)V", "authenticator", "Lokhttp3/Authenticator;", "()Lokhttp3/Authenticator;", "cache", "Lokhttp3/Cache;", "()Lokhttp3/Cache;", "callTimeoutMillis", "", "()I", "certificateChainCleaner", "Lokhttp3/internal/tls/CertificateChainCleaner;", "()Lokhttp3/internal/tls/CertificateChainCleaner;", "certificatePinner", "Lokhttp3/CertificatePinner;", "()Lokhttp3/CertificatePinner;", "connectTimeoutMillis", "connectionPool", "Lokhttp3/ConnectionPool;", "()Lokhttp3/ConnectionPool;", "connectionSpecs", "", "Lokhttp3/ConnectionSpec;", "()Ljava/util/List;", "cookieJar", "Lokhttp3/CookieJar;", "()Lokhttp3/CookieJar;", "dispatcher", "Lokhttp3/Dispatcher;", "()Lokhttp3/Dispatcher;", "dns", "Lokhttp3/Dns;", "()Lokhttp3/Dns;", "eventListenerFactory", "Lokhttp3/EventListener$Factory;", "()Lokhttp3/EventListener$Factory;", "followRedirects", "", "()Z", "followSslRedirects", "hostnameVerifier", "Ljavax/net/ssl/HostnameVerifier;", "()Ljavax/net/ssl/HostnameVerifier;", "interceptors", "Lokhttp3/Interceptor;", "minWebSocketMessageToCompress", "", "()J", "networkInterceptors", "pingIntervalMillis", "protocols", "Lokhttp3/Protocol;", "proxy", "Ljava/net/Proxy;", "()Ljava/net/Proxy;", "proxyAuthenticator", "proxySelector", "Ljava/net/ProxySelector;", "()Ljava/net/ProxySelector;", "readTimeoutMillis", "retryOnConnectionFailure", "routeDatabase", "Lokhttp3/internal/connection/RouteDatabase;", "getRouteDatabase", "()Lokhttp3/internal/connection/RouteDatabase;", "socketFactory", "Ljavax/net/SocketFactory;", "()Ljavax/net/SocketFactory;", "sslSocketFactory", "Ljavax/net/ssl/SSLSocketFactory;", "()Ljavax/net/ssl/SSLSocketFactory;", "sslSocketFactoryOrNull", "writeTimeoutMillis", "x509TrustManager", "Ljavax/net/ssl/X509TrustManager;", "()Ljavax/net/ssl/X509TrustManager;", "-deprecated_authenticator", "-deprecated_cache", "-deprecated_callTimeoutMillis", "-deprecated_certificatePinner", "-deprecated_connectTimeoutMillis", "-deprecated_connectionPool", "-deprecated_connectionSpecs", "-deprecated_cookieJar", "-deprecated_dispatcher", "-deprecated_dns", "-deprecated_eventListenerFactory", "-deprecated_followRedirects", "-deprecated_followSslRedirects", "-deprecated_hostnameVerifier", "-deprecated_interceptors", "-deprecated_networkInterceptors", "newBuilder", "newCall", "Lokhttp3/Call;", "request", "Lokhttp3/Request;", "newWebSocket", "Lokhttp3/WebSocket;", "listener", "Lokhttp3/WebSocketListener;", "-deprecated_pingIntervalMillis", "-deprecated_protocols", "-deprecated_proxy", "-deprecated_proxyAuthenticator", "-deprecated_proxySelector", "-deprecated_readTimeoutMillis", "-deprecated_retryOnConnectionFailure", "-deprecated_socketFactory", "-deprecated_sslSocketFactory", "verifyClientState", "", "-deprecated_writeTimeoutMillis", "Builder", "Companion", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public class OkHttpClient implements java.lang.Cloneable, okhttp3.Call.Factory, okhttp3.WebSocket.Factory {
    public static final okhttp3.OkHttpClient.Companion Companion = null;
    private static final java.util.List<okhttp3.ConnectionSpec> DEFAULT_CONNECTION_SPECS = null;
    private static final java.util.List<okhttp3.Protocol> DEFAULT_PROTOCOLS = null;
    private final okhttp3.Authenticator authenticator;
    private final okhttp3.Cache cache;
    private final int callTimeoutMillis;
    private final okhttp3.internal.tls.CertificateChainCleaner certificateChainCleaner;
    private final okhttp3.CertificatePinner certificatePinner;
    private final int connectTimeoutMillis;
    private final okhttp3.ConnectionPool connectionPool;
    private final java.util.List<okhttp3.ConnectionSpec> connectionSpecs;
    private final okhttp3.CookieJar cookieJar;
    private final okhttp3.Dispatcher dispatcher;
    private final okhttp3.Dns dns;
    private final okhttp3.EventListener.Factory eventListenerFactory;
    private final boolean followRedirects;
    private final boolean followSslRedirects;
    private final javax.net.ssl.HostnameVerifier hostnameVerifier;
    private final java.util.List<okhttp3.Interceptor> interceptors;
    private final long minWebSocketMessageToCompress;
    private final java.util.List<okhttp3.Interceptor> networkInterceptors;
    private final int pingIntervalMillis;
    private final java.util.List<okhttp3.Protocol> protocols;
    private final java.net.Proxy proxy;
    private final okhttp3.Authenticator proxyAuthenticator;
    private final java.net.ProxySelector proxySelector;
    private final int readTimeoutMillis;
    private final boolean retryOnConnectionFailure;
    private final okhttp3.internal.connection.RouteDatabase routeDatabase;
    private final javax.net.SocketFactory socketFactory;
    private final javax.net.ssl.SSLSocketFactory sslSocketFactoryOrNull;
    private final int writeTimeoutMillis;
    private final javax.net.ssl.X509TrustManager x509TrustManager;

    class 1 extends okhttp3.internal.Internal {
        1() {
                r0 = this;
                r0.<init>()
                return
        }

        public void addLenient(okhttp3.Headers.Builder r1, java.lang.String r2) {
                r0 = this;
                r1.addLenient(r2)
                return
        }

        public void addLenient(okhttp3.Headers.Builder r1, java.lang.String r2, java.lang.String r3) {
                r0 = this;
                r1.addLenient(r2, r3)
                return
        }

        public void apply(okhttp3.ConnectionSpec r1, javax.net.ssl.SSLSocket r2, boolean r3) {
                r0 = this;
                r1.apply(r2, r3)
                return
        }

        public int code(okhttp3.Response.Builder r1) {
                r0 = this;
                int r1 = r1.code
                return r1
        }

        public boolean connectionBecameIdle(okhttp3.ConnectionPool r1, okhttp3.internal.connection.RealConnection r2) {
                r0 = this;
                boolean r1 = r1.connectionBecameIdle(r2)
                return r1
        }

        public java.net.Socket deduplicate(okhttp3.ConnectionPool r1, okhttp3.Address r2, okhttp3.internal.connection.StreamAllocation r3) {
                r0 = this;
                java.net.Socket r1 = r1.deduplicate(r2, r3)
                return r1
        }

        public boolean equalsNonHost(okhttp3.Address r1, okhttp3.Address r2) {
                r0 = this;
                boolean r1 = r1.equalsNonHost(r2)
                return r1
        }

        public okhttp3.internal.connection.RealConnection get(okhttp3.ConnectionPool r1, okhttp3.Address r2, okhttp3.internal.connection.StreamAllocation r3, okhttp3.Route r4) {
                r0 = this;
                okhttp3.internal.connection.RealConnection r1 = r1.get(r2, r3, r4)
                return r1
        }

        public boolean isInvalidHttpUrlHost(java.lang.IllegalArgumentException r2) {
                r1 = this;
                java.lang.String r2 = r2.getMessage()
                java.lang.String r0 = "Invalid URL host"
                boolean r2 = r2.startsWith(r0)
                return r2
        }

        public okhttp3.Call newWebSocketCall(okhttp3.OkHttpClient r2, okhttp3.Request r3) {
                r1 = this;
                r0 = 1
                okhttp3.RealCall r2 = okhttp3.RealCall.newRealCall(r2, r3, r0)
                return r2
        }

        public void put(okhttp3.ConnectionPool r1, okhttp3.internal.connection.RealConnection r2) {
                r0 = this;
                r1.put(r2)
                return
        }

        public okhttp3.internal.connection.RouteDatabase routeDatabase(okhttp3.ConnectionPool r1) {
                r0 = this;
                okhttp3.internal.connection.RouteDatabase r1 = r1.routeDatabase
                return r1
        }

        public void setCache(okhttp3.OkHttpClient.Builder r1, okhttp3.internal.cache.InternalCache r2) {
                r0 = this;
                r1.setInternalCache(r2)
                return
        }

        public okhttp3.internal.connection.StreamAllocation streamAllocation(okhttp3.Call r1) {
                r0 = this;
                okhttp3.RealCall r1 = (okhttp3.RealCall) r1
                okhttp3.internal.connection.StreamAllocation r1 = r1.streamAllocation()
                return r1
        }
    }

    @kotlin.Metadata(d1 = {"\u0000ø\u0001\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\b\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010!\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\n\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\u0018\u00002\u00020\u0001B\u000f\b\u0010\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004B\u0005¢\u0006\u0002\u0010\u0005J?\u0010\u009e\u0001\u001a\u00020\u00002*\b\u0004\u0010\u009f\u0001\u001a#\u0012\u0017\u0012\u00150¡\u0001¢\u0006\u000f\b¢\u0001\u0012\n\b£\u0001\u0012\u0005\b\b(¤\u0001\u0012\u0005\u0012\u00030¥\u00010 \u0001H\u0087\bø\u0001\u0000¢\u0006\u0003\b¦\u0001J\u0010\u0010\u009e\u0001\u001a\u00020\u00002\u0007\u0010§\u0001\u001a\u00020]J?\u0010¨\u0001\u001a\u00020\u00002*\b\u0004\u0010\u009f\u0001\u001a#\u0012\u0017\u0012\u00150¡\u0001¢\u0006\u000f\b¢\u0001\u0012\n\b£\u0001\u0012\u0005\b\b(¤\u0001\u0012\u0005\u0012\u00030¥\u00010 \u0001H\u0087\bø\u0001\u0000¢\u0006\u0003\b©\u0001J\u0010\u0010¨\u0001\u001a\u00020\u00002\u0007\u0010§\u0001\u001a\u00020]J\u000e\u0010\u0006\u001a\u00020\u00002\u0006\u0010\u0006\u001a\u00020\u0007J\u0007\u0010ª\u0001\u001a\u00020\u0003J\u0010\u0010\f\u001a\u00020\u00002\b\u0010\f\u001a\u0004\u0018\u00010\rJ\u0012\u0010\u0012\u001a\u00020\u00002\b\u0010«\u0001\u001a\u00030¬\u0001H\u0007J\u0019\u0010\u0012\u001a\u00020\u00002\u0007\u0010\u00ad\u0001\u001a\u00020`2\b\u0010®\u0001\u001a\u00030¯\u0001J\u000e\u0010\u001e\u001a\u00020\u00002\u0006\u0010\u001e\u001a\u00020\u001fJ\u0012\u0010$\u001a\u00020\u00002\b\u0010«\u0001\u001a\u00030¬\u0001H\u0007J\u0019\u0010$\u001a\u00020\u00002\u0007\u0010\u00ad\u0001\u001a\u00020`2\b\u0010®\u0001\u001a\u00030¯\u0001J\u000e\u0010'\u001a\u00020\u00002\u0006\u0010'\u001a\u00020(J\u0014\u0010-\u001a\u00020\u00002\f\u0010-\u001a\b\u0012\u0004\u0012\u00020/0.J\u000e\u00104\u001a\u00020\u00002\u0006\u00104\u001a\u000205J\u000e\u0010:\u001a\u00020\u00002\u0006\u0010:\u001a\u00020;J\u000e\u0010@\u001a\u00020\u00002\u0006\u0010@\u001a\u00020AJ\u0011\u0010°\u0001\u001a\u00020\u00002\b\u0010°\u0001\u001a\u00030±\u0001J\u000e\u0010F\u001a\u00020\u00002\u0006\u0010F\u001a\u00020GJ\u000e\u0010L\u001a\u00020\u00002\u0006\u0010L\u001a\u00020MJ\u000f\u0010R\u001a\u00020\u00002\u0007\u0010²\u0001\u001a\u00020MJ\u000e\u0010U\u001a\u00020\u00002\u0006\u0010U\u001a\u00020VJ\f\u0010[\u001a\b\u0012\u0004\u0012\u00020]0\\J\u000f\u0010_\u001a\u00020\u00002\u0007\u0010³\u0001\u001a\u00020`J\f\u0010e\u001a\b\u0012\u0004\u0012\u00020]0\\J\u0012\u0010g\u001a\u00020\u00002\b\u0010«\u0001\u001a\u00030¬\u0001H\u0007J\u0019\u0010g\u001a\u00020\u00002\u0007\u0010´\u0001\u001a\u00020`2\b\u0010®\u0001\u001a\u00030¯\u0001J\u0014\u0010j\u001a\u00020\u00002\f\u0010j\u001a\b\u0012\u0004\u0012\u00020k0.J\u0010\u0010n\u001a\u00020\u00002\b\u0010n\u001a\u0004\u0018\u00010oJ\u000e\u0010t\u001a\u00020\u00002\u0006\u0010t\u001a\u00020\u0007J\u000e\u0010w\u001a\u00020\u00002\u0006\u0010w\u001a\u00020xJ\u0012\u0010}\u001a\u00020\u00002\b\u0010«\u0001\u001a\u00030¬\u0001H\u0007J\u0019\u0010}\u001a\u00020\u00002\u0007\u0010\u00ad\u0001\u001a\u00020`2\b\u0010®\u0001\u001a\u00030¯\u0001J\u0010\u0010\u0080\u0001\u001a\u00020\u00002\u0007\u0010\u0080\u0001\u001a\u00020MJ\u0011\u0010\u0089\u0001\u001a\u00020\u00002\b\u0010\u0089\u0001\u001a\u00030\u008a\u0001J\u0013\u0010µ\u0001\u001a\u00020\u00002\b\u0010µ\u0001\u001a\u00030\u0090\u0001H\u0007J\u001b\u0010µ\u0001\u001a\u00020\u00002\b\u0010µ\u0001\u001a\u00030\u0090\u00012\b\u0010¶\u0001\u001a\u00030\u0099\u0001J\u0013\u0010\u0095\u0001\u001a\u00020\u00002\b\u0010«\u0001\u001a\u00030¬\u0001H\u0007J\u001a\u0010\u0095\u0001\u001a\u00020\u00002\u0007\u0010\u00ad\u0001\u001a\u00020`2\b\u0010®\u0001\u001a\u00030¯\u0001R\u001a\u0010\u0006\u001a\u00020\u0007X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\b\u0010\t\"\u0004\b\n\u0010\u000bR\u001c\u0010\f\u001a\u0004\u0018\u00010\rX\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000e\u0010\u000f\"\u0004\b\u0010\u0010\u0011R\u001a\u0010\u0012\u001a\u00020\u0013X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0014\u0010\u0015\"\u0004\b\u0016\u0010\u0017R\u001c\u0010\u0018\u001a\u0004\u0018\u00010\u0019X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001a\u0010\u001b\"\u0004\b\u001c\u0010\u001dR\u001a\u0010\u001e\u001a\u00020\u001fX\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b \u0010!\"\u0004\b\"\u0010#R\u001a\u0010$\u001a\u00020\u0013X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b%\u0010\u0015\"\u0004\b&\u0010\u0017R\u001a\u0010'\u001a\u00020(X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b)\u0010*\"\u0004\b+\u0010,R \u0010-\u001a\b\u0012\u0004\u0012\u00020/0.X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b0\u00101\"\u0004\b2\u00103R\u001a\u00104\u001a\u000205X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b6\u00107\"\u0004\b8\u00109R\u001a\u0010:\u001a\u00020;X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b<\u0010=\"\u0004\b>\u0010?R\u001a\u0010@\u001a\u00020AX\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bB\u0010C\"\u0004\bD\u0010ER\u001a\u0010F\u001a\u00020GX\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bH\u0010I\"\u0004\bJ\u0010KR\u001a\u0010L\u001a\u00020MX\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bN\u0010O\"\u0004\bP\u0010QR\u001a\u0010R\u001a\u00020MX\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bS\u0010O\"\u0004\bT\u0010QR\u001a\u0010U\u001a\u00020VX\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bW\u0010X\"\u0004\bY\u0010ZR\u001a\u0010[\u001a\b\u0012\u0004\u0012\u00020]0\\X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b^\u00101R\u001a\u0010_\u001a\u00020`X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\ba\u0010b\"\u0004\bc\u0010dR\u001a\u0010e\u001a\b\u0012\u0004\u0012\u00020]0\\X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\bf\u00101R\u001a\u0010g\u001a\u00020\u0013X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bh\u0010\u0015\"\u0004\bi\u0010\u0017R \u0010j\u001a\b\u0012\u0004\u0012\u00020k0.X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bl\u00101\"\u0004\bm\u00103R\u001c\u0010n\u001a\u0004\u0018\u00010oX\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bp\u0010q\"\u0004\br\u0010sR\u001a\u0010t\u001a\u00020\u0007X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bu\u0010\t\"\u0004\bv\u0010\u000bR\u001c\u0010w\u001a\u0004\u0018\u00010xX\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\by\u0010z\"\u0004\b{\u0010|R\u001a\u0010}\u001a\u00020\u0013X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b~\u0010\u0015\"\u0004\b\u007f\u0010\u0017R\u001d\u0010\u0080\u0001\u001a\u00020MX\u0080\u000e¢\u0006\u0010\n\u0000\u001a\u0005\b\u0081\u0001\u0010O\"\u0005\b\u0082\u0001\u0010QR\"\u0010\u0083\u0001\u001a\u0005\u0018\u00010\u0084\u0001X\u0080\u000e¢\u0006\u0012\n\u0000\u001a\u0006\b\u0085\u0001\u0010\u0086\u0001\"\u0006\b\u0087\u0001\u0010\u0088\u0001R \u0010\u0089\u0001\u001a\u00030\u008a\u0001X\u0080\u000e¢\u0006\u0012\n\u0000\u001a\u0006\b\u008b\u0001\u0010\u008c\u0001\"\u0006\b\u008d\u0001\u0010\u008e\u0001R\"\u0010\u008f\u0001\u001a\u0005\u0018\u00010\u0090\u0001X\u0080\u000e¢\u0006\u0012\n\u0000\u001a\u0006\b\u0091\u0001\u0010\u0092\u0001\"\u0006\b\u0093\u0001\u0010\u0094\u0001R\u001d\u0010\u0095\u0001\u001a\u00020\u0013X\u0080\u000e¢\u0006\u0010\n\u0000\u001a\u0005\b\u0096\u0001\u0010\u0015\"\u0005\b\u0097\u0001\u0010\u0017R\"\u0010\u0098\u0001\u001a\u0005\u0018\u00010\u0099\u0001X\u0080\u000e¢\u0006\u0012\n\u0000\u001a\u0006\b\u009a\u0001\u0010\u009b\u0001\"\u0006\b\u009c\u0001\u0010\u009d\u0001\u0082\u0002\u0007\n\u0005\b\u009920\u0001¨\u0006·\u0001"}, d2 = {"Lokhttp3/OkHttpClient$Builder;", "", "okHttpClient", "Lokhttp3/OkHttpClient;", "(Lokhttp3/OkHttpClient;)V", "()V", "authenticator", "Lokhttp3/Authenticator;", "getAuthenticator$okhttp", "()Lokhttp3/Authenticator;", "setAuthenticator$okhttp", "(Lokhttp3/Authenticator;)V", "cache", "Lokhttp3/Cache;", "getCache$okhttp", "()Lokhttp3/Cache;", "setCache$okhttp", "(Lokhttp3/Cache;)V", "callTimeout", "", "getCallTimeout$okhttp", "()I", "setCallTimeout$okhttp", "(I)V", "certificateChainCleaner", "Lokhttp3/internal/tls/CertificateChainCleaner;", "getCertificateChainCleaner$okhttp", "()Lokhttp3/internal/tls/CertificateChainCleaner;", "setCertificateChainCleaner$okhttp", "(Lokhttp3/internal/tls/CertificateChainCleaner;)V", "certificatePinner", "Lokhttp3/CertificatePinner;", "getCertificatePinner$okhttp", "()Lokhttp3/CertificatePinner;", "setCertificatePinner$okhttp", "(Lokhttp3/CertificatePinner;)V", "connectTimeout", "getConnectTimeout$okhttp", "setConnectTimeout$okhttp", "connectionPool", "Lokhttp3/ConnectionPool;", "getConnectionPool$okhttp", "()Lokhttp3/ConnectionPool;", "setConnectionPool$okhttp", "(Lokhttp3/ConnectionPool;)V", "connectionSpecs", "", "Lokhttp3/ConnectionSpec;", "getConnectionSpecs$okhttp", "()Ljava/util/List;", "setConnectionSpecs$okhttp", "(Ljava/util/List;)V", "cookieJar", "Lokhttp3/CookieJar;", "getCookieJar$okhttp", "()Lokhttp3/CookieJar;", "setCookieJar$okhttp", "(Lokhttp3/CookieJar;)V", "dispatcher", "Lokhttp3/Dispatcher;", "getDispatcher$okhttp", "()Lokhttp3/Dispatcher;", "setDispatcher$okhttp", "(Lokhttp3/Dispatcher;)V", "dns", "Lokhttp3/Dns;", "getDns$okhttp", "()Lokhttp3/Dns;", "setDns$okhttp", "(Lokhttp3/Dns;)V", "eventListenerFactory", "Lokhttp3/EventListener$Factory;", "getEventListenerFactory$okhttp", "()Lokhttp3/EventListener$Factory;", "setEventListenerFactory$okhttp", "(Lokhttp3/EventListener$Factory;)V", "followRedirects", "", "getFollowRedirects$okhttp", "()Z", "setFollowRedirects$okhttp", "(Z)V", "followSslRedirects", "getFollowSslRedirects$okhttp", "setFollowSslRedirects$okhttp", "hostnameVerifier", "Ljavax/net/ssl/HostnameVerifier;", "getHostnameVerifier$okhttp", "()Ljavax/net/ssl/HostnameVerifier;", "setHostnameVerifier$okhttp", "(Ljavax/net/ssl/HostnameVerifier;)V", "interceptors", "", "Lokhttp3/Interceptor;", "getInterceptors$okhttp", "minWebSocketMessageToCompress", "", "getMinWebSocketMessageToCompress$okhttp", "()J", "setMinWebSocketMessageToCompress$okhttp", "(J)V", "networkInterceptors", "getNetworkInterceptors$okhttp", "pingInterval", "getPingInterval$okhttp", "setPingInterval$okhttp", "protocols", "Lokhttp3/Protocol;", "getProtocols$okhttp", "setProtocols$okhttp", "proxy", "Ljava/net/Proxy;", "getProxy$okhttp", "()Ljava/net/Proxy;", "setProxy$okhttp", "(Ljava/net/Proxy;)V", "proxyAuthenticator", "getProxyAuthenticator$okhttp", "setProxyAuthenticator$okhttp", "proxySelector", "Ljava/net/ProxySelector;", "getProxySelector$okhttp", "()Ljava/net/ProxySelector;", "setProxySelector$okhttp", "(Ljava/net/ProxySelector;)V", "readTimeout", "getReadTimeout$okhttp", "setReadTimeout$okhttp", "retryOnConnectionFailure", "getRetryOnConnectionFailure$okhttp", "setRetryOnConnectionFailure$okhttp", "routeDatabase", "Lokhttp3/internal/connection/RouteDatabase;", "getRouteDatabase$okhttp", "()Lokhttp3/internal/connection/RouteDatabase;", "setRouteDatabase$okhttp", "(Lokhttp3/internal/connection/RouteDatabase;)V", "socketFactory", "Ljavax/net/SocketFactory;", "getSocketFactory$okhttp", "()Ljavax/net/SocketFactory;", "setSocketFactory$okhttp", "(Ljavax/net/SocketFactory;)V", "sslSocketFactoryOrNull", "Ljavax/net/ssl/SSLSocketFactory;", "getSslSocketFactoryOrNull$okhttp", "()Ljavax/net/ssl/SSLSocketFactory;", "setSslSocketFactoryOrNull$okhttp", "(Ljavax/net/ssl/SSLSocketFactory;)V", "writeTimeout", "getWriteTimeout$okhttp", "setWriteTimeout$okhttp", "x509TrustManagerOrNull", "Ljavax/net/ssl/X509TrustManager;", "getX509TrustManagerOrNull$okhttp", "()Ljavax/net/ssl/X509TrustManager;", "setX509TrustManagerOrNull$okhttp", "(Ljavax/net/ssl/X509TrustManager;)V", "addInterceptor", "block", "Lkotlin/Function1;", "Lokhttp3/Interceptor$Chain;", "Lkotlin/ParameterName;", "name", "chain", "Lokhttp3/Response;", "-addInterceptor", "interceptor", "addNetworkInterceptor", "-addNetworkInterceptor", "build", "duration", "Ljava/time/Duration;", "timeout", "unit", "Ljava/util/concurrent/TimeUnit;", "eventListener", "Lokhttp3/EventListener;", "followProtocolRedirects", "bytes", "interval", "sslSocketFactory", "trustManager", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Builder {
        private okhttp3.Authenticator authenticator;
        private okhttp3.Cache cache;
        private int callTimeout;
        private okhttp3.internal.tls.CertificateChainCleaner certificateChainCleaner;
        private okhttp3.CertificatePinner certificatePinner;
        private int connectTimeout;
        private okhttp3.ConnectionPool connectionPool;
        private java.util.List<okhttp3.ConnectionSpec> connectionSpecs;
        private okhttp3.CookieJar cookieJar;
        private okhttp3.Dispatcher dispatcher;
        private okhttp3.Dns dns;
        private okhttp3.EventListener.Factory eventListenerFactory;
        private boolean followRedirects;
        private boolean followSslRedirects;
        private javax.net.ssl.HostnameVerifier hostnameVerifier;
        private final java.util.List<okhttp3.Interceptor> interceptors;
        private long minWebSocketMessageToCompress;
        private final java.util.List<okhttp3.Interceptor> networkInterceptors;
        private int pingInterval;
        private java.util.List<? extends okhttp3.Protocol> protocols;
        private java.net.Proxy proxy;
        private okhttp3.Authenticator proxyAuthenticator;
        private java.net.ProxySelector proxySelector;
        private int readTimeout;
        private boolean retryOnConnectionFailure;
        private okhttp3.internal.connection.RouteDatabase routeDatabase;
        private javax.net.SocketFactory socketFactory;
        private javax.net.ssl.SSLSocketFactory sslSocketFactoryOrNull;
        private int writeTimeout;
        private javax.net.ssl.X509TrustManager x509TrustManagerOrNull;

        public Builder() {
                r2 = this;
                r2.<init>()
                okhttp3.Dispatcher r0 = new okhttp3.Dispatcher
                r0.<init>()
                r2.dispatcher = r0
                okhttp3.ConnectionPool r0 = new okhttp3.ConnectionPool
                r0.<init>()
                r2.connectionPool = r0
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                java.util.List r0 = (java.util.List) r0
                r2.interceptors = r0
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                java.util.List r0 = (java.util.List) r0
                r2.networkInterceptors = r0
                okhttp3.EventListener r0 = okhttp3.EventListener.NONE
                okhttp3.EventListener$Factory r0 = okhttp3.internal.Util.asFactory(r0)
                r2.eventListenerFactory = r0
                r0 = 1
                r2.retryOnConnectionFailure = r0
                okhttp3.Authenticator r1 = okhttp3.Authenticator.NONE
                r2.authenticator = r1
                r2.followRedirects = r0
                r2.followSslRedirects = r0
                okhttp3.CookieJar r0 = okhttp3.CookieJar.NO_COOKIES
                r2.cookieJar = r0
                okhttp3.Dns r0 = okhttp3.Dns.SYSTEM
                r2.dns = r0
                okhttp3.Authenticator r0 = okhttp3.Authenticator.NONE
                r2.proxyAuthenticator = r0
                javax.net.SocketFactory r0 = javax.net.SocketFactory.getDefault()
                java.lang.String r1 = "getDefault()"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
                r2.socketFactory = r0
                okhttp3.OkHttpClient$Companion r0 = okhttp3.OkHttpClient.Companion
                java.util.List r0 = r0.getDEFAULT_CONNECTION_SPECS$okhttp()
                r2.connectionSpecs = r0
                okhttp3.OkHttpClient$Companion r0 = okhttp3.OkHttpClient.Companion
                java.util.List r0 = r0.getDEFAULT_PROTOCOLS$okhttp()
                r2.protocols = r0
                okhttp3.internal.tls.OkHostnameVerifier r0 = okhttp3.internal.tls.OkHostnameVerifier.INSTANCE
                javax.net.ssl.HostnameVerifier r0 = (javax.net.ssl.HostnameVerifier) r0
                r2.hostnameVerifier = r0
                okhttp3.CertificatePinner r0 = okhttp3.CertificatePinner.DEFAULT
                r2.certificatePinner = r0
                r0 = 10000(0x2710, float:1.4013E-41)
                r2.connectTimeout = r0
                r2.readTimeout = r0
                r2.writeTimeout = r0
                r0 = 1024(0x400, double:5.06E-321)
                r2.minWebSocketMessageToCompress = r0
                return
        }

        public Builder(okhttp3.OkHttpClient r3) {
                r2 = this;
                java.lang.String r0 = "okHttpClient"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                r2.<init>()
                okhttp3.Dispatcher r0 = r3.dispatcher()
                r2.dispatcher = r0
                okhttp3.ConnectionPool r0 = r3.connectionPool()
                r2.connectionPool = r0
                java.util.List<okhttp3.Interceptor> r0 = r2.interceptors
                java.util.Collection r0 = (java.util.Collection) r0
                java.util.List r1 = r3.interceptors()
                java.lang.Iterable r1 = (java.lang.Iterable) r1
                kotlin.collections.CollectionsKt.addAll(r0, r1)
                java.util.List<okhttp3.Interceptor> r0 = r2.networkInterceptors
                java.util.Collection r0 = (java.util.Collection) r0
                java.util.List r1 = r3.networkInterceptors()
                java.lang.Iterable r1 = (java.lang.Iterable) r1
                kotlin.collections.CollectionsKt.addAll(r0, r1)
                okhttp3.EventListener$Factory r0 = r3.eventListenerFactory()
                r2.eventListenerFactory = r0
                boolean r0 = r3.retryOnConnectionFailure()
                r2.retryOnConnectionFailure = r0
                okhttp3.Authenticator r0 = r3.authenticator()
                r2.authenticator = r0
                boolean r0 = r3.followRedirects()
                r2.followRedirects = r0
                boolean r0 = r3.followSslRedirects()
                r2.followSslRedirects = r0
                okhttp3.CookieJar r0 = r3.cookieJar()
                r2.cookieJar = r0
                okhttp3.Cache r0 = r3.cache()
                r2.cache = r0
                okhttp3.Dns r0 = r3.dns()
                r2.dns = r0
                java.net.Proxy r0 = r3.proxy()
                r2.proxy = r0
                java.net.ProxySelector r0 = r3.proxySelector()
                r2.proxySelector = r0
                okhttp3.Authenticator r0 = r3.proxyAuthenticator()
                r2.proxyAuthenticator = r0
                javax.net.SocketFactory r0 = r3.socketFactory()
                r2.socketFactory = r0
                javax.net.ssl.SSLSocketFactory r0 = okhttp3.OkHttpClient.access$getSslSocketFactoryOrNull$p(r3)
                r2.sslSocketFactoryOrNull = r0
                javax.net.ssl.X509TrustManager r0 = r3.x509TrustManager()
                r2.x509TrustManagerOrNull = r0
                java.util.List r0 = r3.connectionSpecs()
                r2.connectionSpecs = r0
                java.util.List r0 = r3.protocols()
                r2.protocols = r0
                javax.net.ssl.HostnameVerifier r0 = r3.hostnameVerifier()
                r2.hostnameVerifier = r0
                okhttp3.CertificatePinner r0 = r3.certificatePinner()
                r2.certificatePinner = r0
                okhttp3.internal.tls.CertificateChainCleaner r0 = r3.certificateChainCleaner()
                r2.certificateChainCleaner = r0
                int r0 = r3.callTimeoutMillis()
                r2.callTimeout = r0
                int r0 = r3.connectTimeoutMillis()
                r2.connectTimeout = r0
                int r0 = r3.readTimeoutMillis()
                r2.readTimeout = r0
                int r0 = r3.writeTimeoutMillis()
                r2.writeTimeout = r0
                int r0 = r3.pingIntervalMillis()
                r2.pingInterval = r0
                long r0 = r3.minWebSocketMessageToCompress()
                r2.minWebSocketMessageToCompress = r0
                okhttp3.internal.connection.RouteDatabase r3 = r3.getRouteDatabase()
                r2.routeDatabase = r3
                return
        }

        public final okhttp3.OkHttpClient.Builder -addInterceptor(kotlin.jvm.functions.Function1<? super okhttp3.Interceptor.Chain, okhttp3.Response> r2) {
                r1 = this;
                java.lang.String r0 = "block"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                okhttp3.OkHttpClient$Builder$addInterceptor$2 r0 = new okhttp3.OkHttpClient$Builder$addInterceptor$2
                r0.<init>(r2)
                okhttp3.Interceptor r0 = (okhttp3.Interceptor) r0
                okhttp3.OkHttpClient$Builder r2 = r1.addInterceptor(r0)
                return r2
        }

        public final okhttp3.OkHttpClient.Builder -addNetworkInterceptor(kotlin.jvm.functions.Function1<? super okhttp3.Interceptor.Chain, okhttp3.Response> r2) {
                r1 = this;
                java.lang.String r0 = "block"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                okhttp3.OkHttpClient$Builder$addNetworkInterceptor$2 r0 = new okhttp3.OkHttpClient$Builder$addNetworkInterceptor$2
                r0.<init>(r2)
                okhttp3.Interceptor r0 = (okhttp3.Interceptor) r0
                okhttp3.OkHttpClient$Builder r2 = r1.addNetworkInterceptor(r0)
                return r2
        }

        public final okhttp3.OkHttpClient.Builder addInterceptor(okhttp3.Interceptor r3) {
                r2 = this;
                java.lang.String r0 = "interceptor"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                r0 = r2
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                java.util.List r1 = r0.getInterceptors$okhttp()
                java.util.Collection r1 = (java.util.Collection) r1
                r1.add(r3)
                return r0
        }

        public final okhttp3.OkHttpClient.Builder addNetworkInterceptor(okhttp3.Interceptor r3) {
                r2 = this;
                java.lang.String r0 = "interceptor"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                r0 = r2
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                java.util.List r1 = r0.getNetworkInterceptors$okhttp()
                java.util.Collection r1 = (java.util.Collection) r1
                r1.add(r3)
                return r0
        }

        public final okhttp3.OkHttpClient.Builder authenticator(okhttp3.Authenticator r2) {
                r1 = this;
                java.lang.String r0 = "authenticator"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r0 = r1
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                r0.setAuthenticator$okhttp(r2)
                return r0
        }

        public final okhttp3.OkHttpClient build() {
                r1 = this;
                okhttp3.OkHttpClient r0 = new okhttp3.OkHttpClient
                r0.<init>(r1)
                return r0
        }

        public final okhttp3.OkHttpClient.Builder cache(okhttp3.Cache r2) {
                r1 = this;
                r0 = r1
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                r0.setCache$okhttp(r2)
                return r0
        }

        public final okhttp3.OkHttpClient.Builder callTimeout(long r3, java.util.concurrent.TimeUnit r5) {
                r2 = this;
                java.lang.String r0 = "unit"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                r0 = r2
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                java.lang.String r1 = "timeout"
                int r3 = okhttp3.internal.Util.checkDuration(r1, r3, r5)
                r0.setCallTimeout$okhttp(r3)
                return r0
        }

        public final okhttp3.OkHttpClient.Builder callTimeout(java.time.Duration r4) {
                r3 = this;
                java.lang.String r0 = "duration"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
                r0 = r3
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                long r1 = r4.toMillis()
                java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.MILLISECONDS
                r0.callTimeout(r1, r4)
                return r0
        }

        public final okhttp3.OkHttpClient.Builder certificatePinner(okhttp3.CertificatePinner r3) {
                r2 = this;
                java.lang.String r0 = "certificatePinner"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                r0 = r2
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                okhttp3.CertificatePinner r1 = r0.getCertificatePinner$okhttp()
                boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r1)
                if (r1 != 0) goto L16
                r1 = 0
                r0.setRouteDatabase$okhttp(r1)
            L16:
                r0.setCertificatePinner$okhttp(r3)
                return r0
        }

        public final okhttp3.OkHttpClient.Builder connectTimeout(long r3, java.util.concurrent.TimeUnit r5) {
                r2 = this;
                java.lang.String r0 = "unit"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                r0 = r2
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                java.lang.String r1 = "timeout"
                int r3 = okhttp3.internal.Util.checkDuration(r1, r3, r5)
                r0.setConnectTimeout$okhttp(r3)
                return r0
        }

        public final okhttp3.OkHttpClient.Builder connectTimeout(java.time.Duration r4) {
                r3 = this;
                java.lang.String r0 = "duration"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
                r0 = r3
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                long r1 = r4.toMillis()
                java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.MILLISECONDS
                r0.connectTimeout(r1, r4)
                return r0
        }

        public final okhttp3.OkHttpClient.Builder connectionPool(okhttp3.ConnectionPool r2) {
                r1 = this;
                java.lang.String r0 = "connectionPool"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r0 = r1
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                r0.setConnectionPool$okhttp(r2)
                return r0
        }

        public final okhttp3.OkHttpClient.Builder connectionSpecs(java.util.List<okhttp3.ConnectionSpec> r3) {
                r2 = this;
                java.lang.String r0 = "connectionSpecs"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                r0 = r2
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                java.util.List r1 = r0.getConnectionSpecs$okhttp()
                boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r1)
                if (r1 != 0) goto L16
                r1 = 0
                r0.setRouteDatabase$okhttp(r1)
            L16:
                java.util.List r3 = okhttp3.internal.Util.toImmutableList(r3)
                r0.setConnectionSpecs$okhttp(r3)
                return r0
        }

        public final okhttp3.OkHttpClient.Builder cookieJar(okhttp3.CookieJar r2) {
                r1 = this;
                java.lang.String r0 = "cookieJar"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r0 = r1
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                r0.setCookieJar$okhttp(r2)
                return r0
        }

        public final okhttp3.OkHttpClient.Builder dispatcher(okhttp3.Dispatcher r2) {
                r1 = this;
                java.lang.String r0 = "dispatcher"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r0 = r1
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                r0.setDispatcher$okhttp(r2)
                return r0
        }

        public final okhttp3.OkHttpClient.Builder dns(okhttp3.Dns r3) {
                r2 = this;
                java.lang.String r0 = "dns"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                r0 = r2
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                okhttp3.Dns r1 = r0.getDns$okhttp()
                boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r1)
                if (r1 != 0) goto L16
                r1 = 0
                r0.setRouteDatabase$okhttp(r1)
            L16:
                r0.setDns$okhttp(r3)
                return r0
        }

        public final okhttp3.OkHttpClient.Builder eventListener(okhttp3.EventListener r2) {
                r1 = this;
                java.lang.String r0 = "eventListener"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r0 = r1
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                okhttp3.EventListener$Factory r2 = okhttp3.internal.Util.asFactory(r2)
                r0.setEventListenerFactory$okhttp(r2)
                return r0
        }

        public final okhttp3.OkHttpClient.Builder eventListenerFactory(okhttp3.EventListener.Factory r2) {
                r1 = this;
                java.lang.String r0 = "eventListenerFactory"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r0 = r1
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                r0.setEventListenerFactory$okhttp(r2)
                return r0
        }

        public final okhttp3.OkHttpClient.Builder followRedirects(boolean r2) {
                r1 = this;
                r0 = r1
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                r0.setFollowRedirects$okhttp(r2)
                return r0
        }

        public final okhttp3.OkHttpClient.Builder followSslRedirects(boolean r2) {
                r1 = this;
                r0 = r1
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                r0.setFollowSslRedirects$okhttp(r2)
                return r0
        }

        public final okhttp3.Authenticator getAuthenticator$okhttp() {
                r1 = this;
                okhttp3.Authenticator r0 = r1.authenticator
                return r0
        }

        public final okhttp3.Cache getCache$okhttp() {
                r1 = this;
                okhttp3.Cache r0 = r1.cache
                return r0
        }

        public final int getCallTimeout$okhttp() {
                r1 = this;
                int r0 = r1.callTimeout
                return r0
        }

        public final okhttp3.internal.tls.CertificateChainCleaner getCertificateChainCleaner$okhttp() {
                r1 = this;
                okhttp3.internal.tls.CertificateChainCleaner r0 = r1.certificateChainCleaner
                return r0
        }

        public final okhttp3.CertificatePinner getCertificatePinner$okhttp() {
                r1 = this;
                okhttp3.CertificatePinner r0 = r1.certificatePinner
                return r0
        }

        public final int getConnectTimeout$okhttp() {
                r1 = this;
                int r0 = r1.connectTimeout
                return r0
        }

        public final okhttp3.ConnectionPool getConnectionPool$okhttp() {
                r1 = this;
                okhttp3.ConnectionPool r0 = r1.connectionPool
                return r0
        }

        public final java.util.List<okhttp3.ConnectionSpec> getConnectionSpecs$okhttp() {
                r1 = this;
                java.util.List<okhttp3.ConnectionSpec> r0 = r1.connectionSpecs
                return r0
        }

        public final okhttp3.CookieJar getCookieJar$okhttp() {
                r1 = this;
                okhttp3.CookieJar r0 = r1.cookieJar
                return r0
        }

        public final okhttp3.Dispatcher getDispatcher$okhttp() {
                r1 = this;
                okhttp3.Dispatcher r0 = r1.dispatcher
                return r0
        }

        public final okhttp3.Dns getDns$okhttp() {
                r1 = this;
                okhttp3.Dns r0 = r1.dns
                return r0
        }

        public final okhttp3.EventListener.Factory getEventListenerFactory$okhttp() {
                r1 = this;
                okhttp3.EventListener$Factory r0 = r1.eventListenerFactory
                return r0
        }

        public final boolean getFollowRedirects$okhttp() {
                r1 = this;
                boolean r0 = r1.followRedirects
                return r0
        }

        public final boolean getFollowSslRedirects$okhttp() {
                r1 = this;
                boolean r0 = r1.followSslRedirects
                return r0
        }

        public final javax.net.ssl.HostnameVerifier getHostnameVerifier$okhttp() {
                r1 = this;
                javax.net.ssl.HostnameVerifier r0 = r1.hostnameVerifier
                return r0
        }

        public final java.util.List<okhttp3.Interceptor> getInterceptors$okhttp() {
                r1 = this;
                java.util.List<okhttp3.Interceptor> r0 = r1.interceptors
                return r0
        }

        public final long getMinWebSocketMessageToCompress$okhttp() {
                r2 = this;
                long r0 = r2.minWebSocketMessageToCompress
                return r0
        }

        public final java.util.List<okhttp3.Interceptor> getNetworkInterceptors$okhttp() {
                r1 = this;
                java.util.List<okhttp3.Interceptor> r0 = r1.networkInterceptors
                return r0
        }

        public final int getPingInterval$okhttp() {
                r1 = this;
                int r0 = r1.pingInterval
                return r0
        }

        public final java.util.List<okhttp3.Protocol> getProtocols$okhttp() {
                r1 = this;
                java.util.List<? extends okhttp3.Protocol> r0 = r1.protocols
                return r0
        }

        public final java.net.Proxy getProxy$okhttp() {
                r1 = this;
                java.net.Proxy r0 = r1.proxy
                return r0
        }

        public final okhttp3.Authenticator getProxyAuthenticator$okhttp() {
                r1 = this;
                okhttp3.Authenticator r0 = r1.proxyAuthenticator
                return r0
        }

        public final java.net.ProxySelector getProxySelector$okhttp() {
                r1 = this;
                java.net.ProxySelector r0 = r1.proxySelector
                return r0
        }

        public final int getReadTimeout$okhttp() {
                r1 = this;
                int r0 = r1.readTimeout
                return r0
        }

        public final boolean getRetryOnConnectionFailure$okhttp() {
                r1 = this;
                boolean r0 = r1.retryOnConnectionFailure
                return r0
        }

        public final okhttp3.internal.connection.RouteDatabase getRouteDatabase$okhttp() {
                r1 = this;
                okhttp3.internal.connection.RouteDatabase r0 = r1.routeDatabase
                return r0
        }

        public final javax.net.SocketFactory getSocketFactory$okhttp() {
                r1 = this;
                javax.net.SocketFactory r0 = r1.socketFactory
                return r0
        }

        public final javax.net.ssl.SSLSocketFactory getSslSocketFactoryOrNull$okhttp() {
                r1 = this;
                javax.net.ssl.SSLSocketFactory r0 = r1.sslSocketFactoryOrNull
                return r0
        }

        public final int getWriteTimeout$okhttp() {
                r1 = this;
                int r0 = r1.writeTimeout
                return r0
        }

        public final javax.net.ssl.X509TrustManager getX509TrustManagerOrNull$okhttp() {
                r1 = this;
                javax.net.ssl.X509TrustManager r0 = r1.x509TrustManagerOrNull
                return r0
        }

        public final okhttp3.OkHttpClient.Builder hostnameVerifier(javax.net.ssl.HostnameVerifier r3) {
                r2 = this;
                java.lang.String r0 = "hostnameVerifier"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                r0 = r2
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                javax.net.ssl.HostnameVerifier r1 = r0.getHostnameVerifier$okhttp()
                boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r1)
                if (r1 != 0) goto L16
                r1 = 0
                r0.setRouteDatabase$okhttp(r1)
            L16:
                r0.setHostnameVerifier$okhttp(r3)
                return r0
        }

        public final java.util.List<okhttp3.Interceptor> interceptors() {
                r1 = this;
                java.util.List<okhttp3.Interceptor> r0 = r1.interceptors
                return r0
        }

        public final okhttp3.OkHttpClient.Builder minWebSocketMessageToCompress(long r4) {
                r3 = this;
                r0 = r3
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                r1 = 0
                int r1 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
                if (r1 < 0) goto Lb
                r1 = 1
                goto Lc
            Lb:
                r1 = 0
            Lc:
                if (r1 == 0) goto L12
                r0.setMinWebSocketMessageToCompress$okhttp(r4)
                return r0
            L12:
                java.lang.Long r4 = java.lang.Long.valueOf(r4)
                java.lang.String r5 = "minWebSocketMessageToCompress must be positive: "
                java.lang.String r4 = kotlin.jvm.internal.Intrinsics.stringPlus(r5, r4)
                java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
                java.lang.String r4 = r4.toString()
                r5.<init>(r4)
                throw r5
        }

        public final java.util.List<okhttp3.Interceptor> networkInterceptors() {
                r1 = this;
                java.util.List<okhttp3.Interceptor> r0 = r1.networkInterceptors
                return r0
        }

        public final okhttp3.OkHttpClient.Builder pingInterval(long r3, java.util.concurrent.TimeUnit r5) {
                r2 = this;
                java.lang.String r0 = "unit"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                r0 = r2
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                java.lang.String r1 = "interval"
                int r3 = okhttp3.internal.Util.checkDuration(r1, r3, r5)
                r0.setPingInterval$okhttp(r3)
                return r0
        }

        public final okhttp3.OkHttpClient.Builder pingInterval(java.time.Duration r4) {
                r3 = this;
                java.lang.String r0 = "duration"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
                r0 = r3
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                long r1 = r4.toMillis()
                java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.MILLISECONDS
                r0.pingInterval(r1, r4)
                return r0
        }

        public final okhttp3.OkHttpClient.Builder protocols(java.util.List<? extends okhttp3.Protocol> r5) {
                r4 = this;
                java.lang.String r0 = "protocols"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                r0 = r4
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                java.util.Collection r5 = (java.util.Collection) r5
                java.util.List r5 = kotlin.collections.CollectionsKt.toMutableList(r5)
                okhttp3.Protocol r1 = okhttp3.Protocol.H2_PRIOR_KNOWLEDGE
                boolean r1 = r5.contains(r1)
                r2 = 0
                r3 = 1
                if (r1 != 0) goto L23
                okhttp3.Protocol r1 = okhttp3.Protocol.HTTP_1_1
                boolean r1 = r5.contains(r1)
                if (r1 == 0) goto L21
                goto L23
            L21:
                r1 = r2
                goto L24
            L23:
                r1 = r3
            L24:
                if (r1 == 0) goto L93
                okhttp3.Protocol r1 = okhttp3.Protocol.H2_PRIOR_KNOWLEDGE
                boolean r1 = r5.contains(r1)
                if (r1 == 0) goto L34
                int r1 = r5.size()
                if (r1 > r3) goto L35
            L34:
                r2 = r3
            L35:
                if (r2 == 0) goto L83
                okhttp3.Protocol r1 = okhttp3.Protocol.HTTP_1_0
                boolean r1 = r5.contains(r1)
                r1 = r1 ^ r3
                if (r1 == 0) goto L73
                r1 = 0
                boolean r2 = r5.contains(r1)
                r2 = r2 ^ r3
                if (r2 == 0) goto L67
                okhttp3.Protocol r2 = okhttp3.Protocol.SPDY_3
                r5.remove(r2)
                java.util.List r2 = r0.getProtocols$okhttp()
                boolean r2 = kotlin.jvm.internal.Intrinsics.areEqual(r5, r2)
                if (r2 != 0) goto L5a
                r0.setRouteDatabase$okhttp(r1)
            L5a:
                java.util.List r5 = java.util.Collections.unmodifiableList(r5)
                java.lang.String r1 = "unmodifiableList(protocolsCopy)"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r5, r1)
                r0.setProtocols$okhttp(r5)
                return r0
            L67:
                java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "protocols must not contain null"
                java.lang.String r0 = r0.toString()
                r5.<init>(r0)
                throw r5
            L73:
                java.lang.String r0 = "protocols must not contain http/1.0: "
                java.lang.String r5 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r5)
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r5 = r5.toString()
                r0.<init>(r5)
                throw r0
            L83:
                java.lang.String r0 = "protocols containing h2_prior_knowledge cannot use other protocols: "
                java.lang.String r5 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r5)
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r5 = r5.toString()
                r0.<init>(r5)
                throw r0
            L93:
                java.lang.String r0 = "protocols must contain h2_prior_knowledge or http/1.1: "
                java.lang.String r5 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r5)
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r5 = r5.toString()
                r0.<init>(r5)
                throw r0
        }

        public final okhttp3.OkHttpClient.Builder proxy(java.net.Proxy r3) {
                r2 = this;
                r0 = r2
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                java.net.Proxy r1 = r0.getProxy$okhttp()
                boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r1)
                if (r1 != 0) goto L11
                r1 = 0
                r0.setRouteDatabase$okhttp(r1)
            L11:
                r0.setProxy$okhttp(r3)
                return r0
        }

        public final okhttp3.OkHttpClient.Builder proxyAuthenticator(okhttp3.Authenticator r3) {
                r2 = this;
                java.lang.String r0 = "proxyAuthenticator"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                r0 = r2
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                okhttp3.Authenticator r1 = r0.getProxyAuthenticator$okhttp()
                boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r1)
                if (r1 != 0) goto L16
                r1 = 0
                r0.setRouteDatabase$okhttp(r1)
            L16:
                r0.setProxyAuthenticator$okhttp(r3)
                return r0
        }

        public final okhttp3.OkHttpClient.Builder proxySelector(java.net.ProxySelector r3) {
                r2 = this;
                java.lang.String r0 = "proxySelector"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                r0 = r2
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                java.net.ProxySelector r1 = r0.getProxySelector$okhttp()
                boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r1)
                if (r1 != 0) goto L16
                r1 = 0
                r0.setRouteDatabase$okhttp(r1)
            L16:
                r0.setProxySelector$okhttp(r3)
                return r0
        }

        public final okhttp3.OkHttpClient.Builder readTimeout(long r3, java.util.concurrent.TimeUnit r5) {
                r2 = this;
                java.lang.String r0 = "unit"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                r0 = r2
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                java.lang.String r1 = "timeout"
                int r3 = okhttp3.internal.Util.checkDuration(r1, r3, r5)
                r0.setReadTimeout$okhttp(r3)
                return r0
        }

        public final okhttp3.OkHttpClient.Builder readTimeout(java.time.Duration r4) {
                r3 = this;
                java.lang.String r0 = "duration"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
                r0 = r3
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                long r1 = r4.toMillis()
                java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.MILLISECONDS
                r0.readTimeout(r1, r4)
                return r0
        }

        public final okhttp3.OkHttpClient.Builder retryOnConnectionFailure(boolean r2) {
                r1 = this;
                r0 = r1
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                r0.setRetryOnConnectionFailure$okhttp(r2)
                return r0
        }

        public final void setAuthenticator$okhttp(okhttp3.Authenticator r2) {
                r1 = this;
                java.lang.String r0 = "<set-?>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.authenticator = r2
                return
        }

        public final void setCache$okhttp(okhttp3.Cache r1) {
                r0 = this;
                r0.cache = r1
                return
        }

        public final void setCallTimeout$okhttp(int r1) {
                r0 = this;
                r0.callTimeout = r1
                return
        }

        public final void setCertificateChainCleaner$okhttp(okhttp3.internal.tls.CertificateChainCleaner r1) {
                r0 = this;
                r0.certificateChainCleaner = r1
                return
        }

        public final void setCertificatePinner$okhttp(okhttp3.CertificatePinner r2) {
                r1 = this;
                java.lang.String r0 = "<set-?>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.certificatePinner = r2
                return
        }

        public final void setConnectTimeout$okhttp(int r1) {
                r0 = this;
                r0.connectTimeout = r1
                return
        }

        public final void setConnectionPool$okhttp(okhttp3.ConnectionPool r2) {
                r1 = this;
                java.lang.String r0 = "<set-?>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.connectionPool = r2
                return
        }

        public final void setConnectionSpecs$okhttp(java.util.List<okhttp3.ConnectionSpec> r2) {
                r1 = this;
                java.lang.String r0 = "<set-?>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.connectionSpecs = r2
                return
        }

        public final void setCookieJar$okhttp(okhttp3.CookieJar r2) {
                r1 = this;
                java.lang.String r0 = "<set-?>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.cookieJar = r2
                return
        }

        public final void setDispatcher$okhttp(okhttp3.Dispatcher r2) {
                r1 = this;
                java.lang.String r0 = "<set-?>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.dispatcher = r2
                return
        }

        public final void setDns$okhttp(okhttp3.Dns r2) {
                r1 = this;
                java.lang.String r0 = "<set-?>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.dns = r2
                return
        }

        public final void setEventListenerFactory$okhttp(okhttp3.EventListener.Factory r2) {
                r1 = this;
                java.lang.String r0 = "<set-?>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.eventListenerFactory = r2
                return
        }

        public final void setFollowRedirects$okhttp(boolean r1) {
                r0 = this;
                r0.followRedirects = r1
                return
        }

        public final void setFollowSslRedirects$okhttp(boolean r1) {
                r0 = this;
                r0.followSslRedirects = r1
                return
        }

        public final void setHostnameVerifier$okhttp(javax.net.ssl.HostnameVerifier r2) {
                r1 = this;
                java.lang.String r0 = "<set-?>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.hostnameVerifier = r2
                return
        }

        public final void setMinWebSocketMessageToCompress$okhttp(long r1) {
                r0 = this;
                r0.minWebSocketMessageToCompress = r1
                return
        }

        public final void setPingInterval$okhttp(int r1) {
                r0 = this;
                r0.pingInterval = r1
                return
        }

        public final void setProtocols$okhttp(java.util.List<? extends okhttp3.Protocol> r2) {
                r1 = this;
                java.lang.String r0 = "<set-?>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.protocols = r2
                return
        }

        public final void setProxy$okhttp(java.net.Proxy r1) {
                r0 = this;
                r0.proxy = r1
                return
        }

        public final void setProxyAuthenticator$okhttp(okhttp3.Authenticator r2) {
                r1 = this;
                java.lang.String r0 = "<set-?>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.proxyAuthenticator = r2
                return
        }

        public final void setProxySelector$okhttp(java.net.ProxySelector r1) {
                r0 = this;
                r0.proxySelector = r1
                return
        }

        public final void setReadTimeout$okhttp(int r1) {
                r0 = this;
                r0.readTimeout = r1
                return
        }

        public final void setRetryOnConnectionFailure$okhttp(boolean r1) {
                r0 = this;
                r0.retryOnConnectionFailure = r1
                return
        }

        public final void setRouteDatabase$okhttp(okhttp3.internal.connection.RouteDatabase r1) {
                r0 = this;
                r0.routeDatabase = r1
                return
        }

        public final void setSocketFactory$okhttp(javax.net.SocketFactory r2) {
                r1 = this;
                java.lang.String r0 = "<set-?>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.socketFactory = r2
                return
        }

        public final void setSslSocketFactoryOrNull$okhttp(javax.net.ssl.SSLSocketFactory r1) {
                r0 = this;
                r0.sslSocketFactoryOrNull = r1
                return
        }

        public final void setWriteTimeout$okhttp(int r1) {
                r0 = this;
                r0.writeTimeout = r1
                return
        }

        public final void setX509TrustManagerOrNull$okhttp(javax.net.ssl.X509TrustManager r1) {
                r0 = this;
                r0.x509TrustManagerOrNull = r1
                return
        }

        public final okhttp3.OkHttpClient.Builder socketFactory(javax.net.SocketFactory r3) {
                r2 = this;
                java.lang.String r0 = "socketFactory"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                r0 = r2
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                boolean r1 = r3 instanceof javax.net.ssl.SSLSocketFactory
                r1 = r1 ^ 1
                if (r1 == 0) goto L20
                javax.net.SocketFactory r1 = r0.getSocketFactory$okhttp()
                boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r1)
                if (r1 != 0) goto L1c
                r1 = 0
                r0.setRouteDatabase$okhttp(r1)
            L1c:
                r0.setSocketFactory$okhttp(r3)
                return r0
            L20:
                java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "socketFactory instanceof SSLSocketFactory"
                java.lang.String r0 = r0.toString()
                r3.<init>(r0)
                throw r3
        }

        @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "Use the sslSocketFactory overload that accepts a X509TrustManager.")
        public final okhttp3.OkHttpClient.Builder sslSocketFactory(javax.net.ssl.SSLSocketFactory r4) {
                r3 = this;
                java.lang.String r0 = "sslSocketFactory"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
                r0 = r3
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                javax.net.ssl.SSLSocketFactory r1 = r0.getSslSocketFactoryOrNull$okhttp()
                boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r4, r1)
                if (r1 != 0) goto L16
                r1 = 0
                r0.setRouteDatabase$okhttp(r1)
            L16:
                r0.setSslSocketFactoryOrNull$okhttp(r4)
                okhttp3.internal.platform.Platform$Companion r1 = okhttp3.internal.platform.Platform.Companion
                okhttp3.internal.platform.Platform r1 = r1.get()
                javax.net.ssl.X509TrustManager r1 = r1.trustManager(r4)
                if (r1 == 0) goto L3d
                r0.setX509TrustManagerOrNull$okhttp(r1)
                okhttp3.internal.platform.Platform$Companion r4 = okhttp3.internal.platform.Platform.Companion
                okhttp3.internal.platform.Platform r4 = r4.get()
                javax.net.ssl.X509TrustManager r1 = r0.getX509TrustManagerOrNull$okhttp()
                kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
                okhttp3.internal.tls.CertificateChainCleaner r4 = r4.buildCertificateChainCleaner(r1)
                r0.setCertificateChainCleaner$okhttp(r4)
                return r0
            L3d:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Unable to extract the trust manager on "
                r1.append(r2)
                okhttp3.internal.platform.Platform$Companion r2 = okhttp3.internal.platform.Platform.Companion
                okhttp3.internal.platform.Platform r2 = r2.get()
                r1.append(r2)
                java.lang.String r2 = ", sslSocketFactory is "
                r1.append(r2)
                java.lang.Class r4 = r4.getClass()
                r1.append(r4)
                java.lang.String r4 = r1.toString()
                r0.<init>(r4)
                throw r0
        }

        public final okhttp3.OkHttpClient.Builder sslSocketFactory(javax.net.ssl.SSLSocketFactory r3, javax.net.ssl.X509TrustManager r4) {
                r2 = this;
                java.lang.String r0 = "sslSocketFactory"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                java.lang.String r0 = "trustManager"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
                r0 = r2
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                javax.net.ssl.SSLSocketFactory r1 = r0.getSslSocketFactoryOrNull$okhttp()
                boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r1)
                if (r1 == 0) goto L21
                javax.net.ssl.X509TrustManager r1 = r0.getX509TrustManagerOrNull$okhttp()
                boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r4, r1)
                if (r1 != 0) goto L25
            L21:
                r1 = 0
                r0.setRouteDatabase$okhttp(r1)
            L25:
                r0.setSslSocketFactoryOrNull$okhttp(r3)
                okhttp3.internal.tls.CertificateChainCleaner$Companion r3 = okhttp3.internal.tls.CertificateChainCleaner.Companion
                okhttp3.internal.tls.CertificateChainCleaner r3 = r3.get(r4)
                r0.setCertificateChainCleaner$okhttp(r3)
                r0.setX509TrustManagerOrNull$okhttp(r4)
                return r0
        }

        public final okhttp3.OkHttpClient.Builder writeTimeout(long r3, java.util.concurrent.TimeUnit r5) {
                r2 = this;
                java.lang.String r0 = "unit"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                r0 = r2
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                java.lang.String r1 = "timeout"
                int r3 = okhttp3.internal.Util.checkDuration(r1, r3, r5)
                r0.setWriteTimeout$okhttp(r3)
                return r0
        }

        public final okhttp3.OkHttpClient.Builder writeTimeout(java.time.Duration r4) {
                r3 = this;
                java.lang.String r0 = "duration"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
                r0 = r3
                okhttp3.OkHttpClient$Builder r0 = (okhttp3.OkHttpClient.Builder) r0
                long r1 = r4.toMillis()
                java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.MILLISECONDS
                r0.writeTimeout(r1, r4)
                return r0
        }
    }

    @kotlin.Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002R\u001a\u0010\u0003\u001a\b\u0012\u0004\u0012\u00020\u00050\u0004X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007R\u001a\u0010\b\u001a\b\u0012\u0004\u0012\u00020\t0\u0004X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u0007¨\u0006\u000b"}, d2 = {"Lokhttp3/OkHttpClient$Companion;", "", "()V", "DEFAULT_CONNECTION_SPECS", "", "Lokhttp3/ConnectionSpec;", "getDEFAULT_CONNECTION_SPECS$okhttp", "()Ljava/util/List;", "DEFAULT_PROTOCOLS", "Lokhttp3/Protocol;", "getDEFAULT_PROTOCOLS$okhttp", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
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

        public final java.util.List<okhttp3.ConnectionSpec> getDEFAULT_CONNECTION_SPECS$okhttp() {
                r1 = this;
                java.util.List r0 = okhttp3.OkHttpClient.access$getDEFAULT_CONNECTION_SPECS$cp()
                return r0
        }

        public final java.util.List<okhttp3.Protocol> getDEFAULT_PROTOCOLS$okhttp() {
                r1 = this;
                java.util.List r0 = okhttp3.OkHttpClient.access$getDEFAULT_PROTOCOLS$cp()
                return r0
        }
    }

    static {
            okhttp3.OkHttpClient$Companion r0 = new okhttp3.OkHttpClient$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.OkHttpClient.Companion = r0
            r0 = 2
            okhttp3.Protocol[] r1 = new okhttp3.Protocol[r0]
            okhttp3.Protocol r2 = okhttp3.Protocol.HTTP_2
            r3 = 0
            r1[r3] = r2
            okhttp3.Protocol r2 = okhttp3.Protocol.HTTP_1_1
            r4 = 1
            r1[r4] = r2
            java.util.List r1 = okhttp3.internal.Util.immutableListOf(r1)
            okhttp3.OkHttpClient.DEFAULT_PROTOCOLS = r1
            okhttp3.ConnectionSpec[] r0 = new okhttp3.ConnectionSpec[r0]
            okhttp3.ConnectionSpec r1 = okhttp3.ConnectionSpec.MODERN_TLS
            r0[r3] = r1
            okhttp3.ConnectionSpec r1 = okhttp3.ConnectionSpec.CLEARTEXT
            r0[r4] = r1
            java.util.List r0 = okhttp3.internal.Util.immutableListOf(r0)
            okhttp3.OkHttpClient.DEFAULT_CONNECTION_SPECS = r0
            return
    }

    public OkHttpClient() {
            r1 = this;
            okhttp3.OkHttpClient$Builder r0 = new okhttp3.OkHttpClient$Builder
            r0.<init>()
            r1.<init>(r0)
            return
    }

    public OkHttpClient(okhttp3.OkHttpClient.Builder r4) {
            r3 = this;
            java.lang.String r0 = "builder"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            r3.<init>()
            okhttp3.Dispatcher r0 = r4.getDispatcher$okhttp()
            r3.dispatcher = r0
            okhttp3.ConnectionPool r0 = r4.getConnectionPool$okhttp()
            r3.connectionPool = r0
            java.util.List r0 = r4.getInterceptors$okhttp()
            java.util.List r0 = okhttp3.internal.Util.toImmutableList(r0)
            r3.interceptors = r0
            java.util.List r0 = r4.getNetworkInterceptors$okhttp()
            java.util.List r0 = okhttp3.internal.Util.toImmutableList(r0)
            r3.networkInterceptors = r0
            okhttp3.EventListener$Factory r0 = r4.getEventListenerFactory$okhttp()
            r3.eventListenerFactory = r0
            boolean r0 = r4.getRetryOnConnectionFailure$okhttp()
            r3.retryOnConnectionFailure = r0
            okhttp3.Authenticator r0 = r4.getAuthenticator$okhttp()
            r3.authenticator = r0
            boolean r0 = r4.getFollowRedirects$okhttp()
            r3.followRedirects = r0
            boolean r0 = r4.getFollowSslRedirects$okhttp()
            r3.followSslRedirects = r0
            okhttp3.CookieJar r0 = r4.getCookieJar$okhttp()
            r3.cookieJar = r0
            okhttp3.Cache r0 = r4.getCache$okhttp()
            r3.cache = r0
            okhttp3.Dns r0 = r4.getDns$okhttp()
            r3.dns = r0
            java.net.Proxy r0 = r4.getProxy$okhttp()
            r3.proxy = r0
            java.net.Proxy r0 = r4.getProxy$okhttp()
            if (r0 == 0) goto L69
            okhttp3.internal.proxy.NullProxySelector r0 = okhttp3.internal.proxy.NullProxySelector.INSTANCE
            java.net.ProxySelector r0 = (java.net.ProxySelector) r0
            goto L79
        L69:
            java.net.ProxySelector r0 = r4.getProxySelector$okhttp()
            if (r0 != 0) goto L73
            java.net.ProxySelector r0 = java.net.ProxySelector.getDefault()
        L73:
            if (r0 != 0) goto L79
            okhttp3.internal.proxy.NullProxySelector r0 = okhttp3.internal.proxy.NullProxySelector.INSTANCE
            java.net.ProxySelector r0 = (java.net.ProxySelector) r0
        L79:
            r3.proxySelector = r0
            okhttp3.Authenticator r0 = r4.getProxyAuthenticator$okhttp()
            r3.proxyAuthenticator = r0
            javax.net.SocketFactory r0 = r4.getSocketFactory$okhttp()
            r3.socketFactory = r0
            java.util.List r0 = r4.getConnectionSpecs$okhttp()
            r3.connectionSpecs = r0
            java.util.List r0 = r4.getProtocols$okhttp()
            r3.protocols = r0
            javax.net.ssl.HostnameVerifier r0 = r4.getHostnameVerifier$okhttp()
            r3.hostnameVerifier = r0
            int r0 = r4.getCallTimeout$okhttp()
            r3.callTimeoutMillis = r0
            int r0 = r4.getConnectTimeout$okhttp()
            r3.connectTimeoutMillis = r0
            int r0 = r4.getReadTimeout$okhttp()
            r3.readTimeoutMillis = r0
            int r0 = r4.getWriteTimeout$okhttp()
            r3.writeTimeoutMillis = r0
            int r0 = r4.getPingInterval$okhttp()
            r3.pingIntervalMillis = r0
            long r0 = r4.getMinWebSocketMessageToCompress$okhttp()
            r3.minWebSocketMessageToCompress = r0
            okhttp3.internal.connection.RouteDatabase r0 = r4.getRouteDatabase$okhttp()
            if (r0 != 0) goto Lc8
            okhttp3.internal.connection.RouteDatabase r0 = new okhttp3.internal.connection.RouteDatabase
            r0.<init>()
        Lc8:
            r3.routeDatabase = r0
            java.util.List<okhttp3.ConnectionSpec> r0 = r3.connectionSpecs
            java.lang.Iterable r0 = (java.lang.Iterable) r0
            boolean r1 = r0 instanceof java.util.Collection
            r2 = 1
            if (r1 == 0) goto Ldd
            r1 = r0
            java.util.Collection r1 = (java.util.Collection) r1
            boolean r1 = r1.isEmpty()
            if (r1 == 0) goto Ldd
            goto Lf4
        Ldd:
            java.util.Iterator r0 = r0.iterator()
        Le1:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto Lf4
            java.lang.Object r1 = r0.next()
            okhttp3.ConnectionSpec r1 = (okhttp3.ConnectionSpec) r1
            boolean r1 = r1.isTls()
            if (r1 == 0) goto Le1
            r2 = 0
        Lf4:
            if (r2 == 0) goto L102
            r4 = 0
            r3.sslSocketFactoryOrNull = r4
            r3.certificateChainCleaner = r4
            r3.x509TrustManager = r4
            okhttp3.CertificatePinner r4 = okhttp3.CertificatePinner.DEFAULT
            r3.certificatePinner = r4
            goto L169
        L102:
            javax.net.ssl.SSLSocketFactory r0 = r4.getSslSocketFactoryOrNull$okhttp()
            if (r0 == 0) goto L130
            javax.net.ssl.SSLSocketFactory r0 = r4.getSslSocketFactoryOrNull$okhttp()
            r3.sslSocketFactoryOrNull = r0
            okhttp3.internal.tls.CertificateChainCleaner r0 = r4.getCertificateChainCleaner$okhttp()
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            r3.certificateChainCleaner = r0
            javax.net.ssl.X509TrustManager r0 = r4.getX509TrustManagerOrNull$okhttp()
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            r3.x509TrustManager = r0
            okhttp3.CertificatePinner r4 = r4.getCertificatePinner$okhttp()
            okhttp3.internal.tls.CertificateChainCleaner r0 = r3.certificateChainCleaner
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            okhttp3.CertificatePinner r4 = r4.withCertificateChainCleaner$okhttp(r0)
            r3.certificatePinner = r4
            goto L169
        L130:
            okhttp3.internal.platform.Platform$Companion r0 = okhttp3.internal.platform.Platform.Companion
            okhttp3.internal.platform.Platform r0 = r0.get()
            javax.net.ssl.X509TrustManager r0 = r0.platformTrustManager()
            r3.x509TrustManager = r0
            okhttp3.internal.platform.Platform$Companion r0 = okhttp3.internal.platform.Platform.Companion
            okhttp3.internal.platform.Platform r0 = r0.get()
            javax.net.ssl.X509TrustManager r1 = r3.x509TrustManager
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
            javax.net.ssl.SSLSocketFactory r0 = r0.newSslSocketFactory(r1)
            r3.sslSocketFactoryOrNull = r0
            okhttp3.internal.tls.CertificateChainCleaner$Companion r0 = okhttp3.internal.tls.CertificateChainCleaner.Companion
            javax.net.ssl.X509TrustManager r1 = r3.x509TrustManager
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
            okhttp3.internal.tls.CertificateChainCleaner r0 = r0.get(r1)
            r3.certificateChainCleaner = r0
            okhttp3.CertificatePinner r4 = r4.getCertificatePinner$okhttp()
            okhttp3.internal.tls.CertificateChainCleaner r0 = r3.certificateChainCleaner
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            okhttp3.CertificatePinner r4 = r4.withCertificateChainCleaner$okhttp(r0)
            r3.certificatePinner = r4
        L169:
            r3.verifyClientState()
            return
    }

    public static final java.util.List access$getDEFAULT_CONNECTION_SPECS$cp() {
            java.util.List<okhttp3.ConnectionSpec> r0 = okhttp3.OkHttpClient.DEFAULT_CONNECTION_SPECS
            return r0
    }

    public static final java.util.List access$getDEFAULT_PROTOCOLS$cp() {
            java.util.List<okhttp3.Protocol> r0 = okhttp3.OkHttpClient.DEFAULT_PROTOCOLS
            return r0
    }

    public static final javax.net.ssl.SSLSocketFactory access$getSslSocketFactoryOrNull$p(okhttp3.OkHttpClient r0) {
            javax.net.ssl.SSLSocketFactory r0 = r0.sslSocketFactoryOrNull
            return r0
    }

    private final void verifyClientState() {
            r4 = this;
            java.util.List<okhttp3.Interceptor> r0 = r4.interceptors
            r1 = 0
            boolean r0 = r0.contains(r1)
            r2 = 1
            r0 = r0 ^ r2
            if (r0 == 0) goto Ld5
            java.util.List<okhttp3.Interceptor> r0 = r4.networkInterceptors
            boolean r0 = r0.contains(r1)
            r0 = r0 ^ r2
            if (r0 == 0) goto Lc1
            java.util.List<okhttp3.ConnectionSpec> r0 = r4.connectionSpecs
            java.lang.Iterable r0 = (java.lang.Iterable) r0
            boolean r1 = r0 instanceof java.util.Collection
            r3 = 0
            if (r1 == 0) goto L28
            r1 = r0
            java.util.Collection r1 = (java.util.Collection) r1
            boolean r1 = r1.isEmpty()
            if (r1 == 0) goto L28
        L26:
            r0 = r2
            goto L3f
        L28:
            java.util.Iterator r0 = r0.iterator()
        L2c:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L26
            java.lang.Object r1 = r0.next()
            okhttp3.ConnectionSpec r1 = (okhttp3.ConnectionSpec) r1
            boolean r1 = r1.isTls()
            if (r1 == 0) goto L2c
            r0 = r3
        L3f:
            if (r0 == 0) goto L90
            javax.net.ssl.SSLSocketFactory r0 = r4.sslSocketFactoryOrNull
            if (r0 != 0) goto L47
            r0 = r2
            goto L48
        L47:
            r0 = r3
        L48:
            java.lang.String r1 = "Check failed."
            if (r0 == 0) goto L86
            okhttp3.internal.tls.CertificateChainCleaner r0 = r4.certificateChainCleaner
            if (r0 != 0) goto L52
            r0 = r2
            goto L53
        L52:
            r0 = r3
        L53:
            if (r0 == 0) goto L7c
            javax.net.ssl.X509TrustManager r0 = r4.x509TrustManager
            if (r0 != 0) goto L5a
            goto L5b
        L5a:
            r2 = r3
        L5b:
            if (r2 == 0) goto L72
            okhttp3.CertificatePinner r0 = r4.certificatePinner
            okhttp3.CertificatePinner r2 = okhttp3.CertificatePinner.DEFAULT
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r2)
            if (r0 == 0) goto L68
            goto L9c
        L68:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L72:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L7c:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L86:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L90:
            javax.net.ssl.SSLSocketFactory r0 = r4.sslSocketFactoryOrNull
            if (r0 == 0) goto Lb5
            okhttp3.internal.tls.CertificateChainCleaner r0 = r4.certificateChainCleaner
            if (r0 == 0) goto La9
            javax.net.ssl.X509TrustManager r0 = r4.x509TrustManager
            if (r0 == 0) goto L9d
        L9c:
            return
        L9d:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "x509TrustManager == null"
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        La9:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "certificateChainCleaner == null"
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        Lb5:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "sslSocketFactory == null"
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        Lc1:
            java.util.List r0 = r4.networkInterceptors()
            java.lang.String r1 = "Null network interceptor: "
            java.lang.String r0 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r0)
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            throw r1
        Ld5:
            java.util.List r0 = r4.interceptors()
            java.lang.String r1 = "Null interceptor: "
            java.lang.String r0 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r0)
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            throw r1
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "authenticator", imports = {}))
    public final okhttp3.Authenticator -deprecated_authenticator() {
            r1 = this;
            okhttp3.Authenticator r0 = r1.authenticator
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "cache", imports = {}))
    public final okhttp3.Cache -deprecated_cache() {
            r1 = this;
            okhttp3.Cache r0 = r1.cache
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "callTimeoutMillis", imports = {}))
    public final int -deprecated_callTimeoutMillis() {
            r1 = this;
            int r0 = r1.callTimeoutMillis
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "certificatePinner", imports = {}))
    public final okhttp3.CertificatePinner -deprecated_certificatePinner() {
            r1 = this;
            okhttp3.CertificatePinner r0 = r1.certificatePinner
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "connectTimeoutMillis", imports = {}))
    public final int -deprecated_connectTimeoutMillis() {
            r1 = this;
            int r0 = r1.connectTimeoutMillis
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "connectionPool", imports = {}))
    public final okhttp3.ConnectionPool -deprecated_connectionPool() {
            r1 = this;
            okhttp3.ConnectionPool r0 = r1.connectionPool
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "connectionSpecs", imports = {}))
    public final java.util.List<okhttp3.ConnectionSpec> -deprecated_connectionSpecs() {
            r1 = this;
            java.util.List<okhttp3.ConnectionSpec> r0 = r1.connectionSpecs
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "cookieJar", imports = {}))
    public final okhttp3.CookieJar -deprecated_cookieJar() {
            r1 = this;
            okhttp3.CookieJar r0 = r1.cookieJar
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "dispatcher", imports = {}))
    public final okhttp3.Dispatcher -deprecated_dispatcher() {
            r1 = this;
            okhttp3.Dispatcher r0 = r1.dispatcher
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "dns", imports = {}))
    public final okhttp3.Dns -deprecated_dns() {
            r1 = this;
            okhttp3.Dns r0 = r1.dns
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "eventListenerFactory", imports = {}))
    public final okhttp3.EventListener.Factory -deprecated_eventListenerFactory() {
            r1 = this;
            okhttp3.EventListener$Factory r0 = r1.eventListenerFactory
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "followRedirects", imports = {}))
    public final boolean -deprecated_followRedirects() {
            r1 = this;
            boolean r0 = r1.followRedirects
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "followSslRedirects", imports = {}))
    public final boolean -deprecated_followSslRedirects() {
            r1 = this;
            boolean r0 = r1.followSslRedirects
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "hostnameVerifier", imports = {}))
    public final javax.net.ssl.HostnameVerifier -deprecated_hostnameVerifier() {
            r1 = this;
            javax.net.ssl.HostnameVerifier r0 = r1.hostnameVerifier
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "interceptors", imports = {}))
    public final java.util.List<okhttp3.Interceptor> -deprecated_interceptors() {
            r1 = this;
            java.util.List<okhttp3.Interceptor> r0 = r1.interceptors
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "networkInterceptors", imports = {}))
    public final java.util.List<okhttp3.Interceptor> -deprecated_networkInterceptors() {
            r1 = this;
            java.util.List<okhttp3.Interceptor> r0 = r1.networkInterceptors
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "pingIntervalMillis", imports = {}))
    public final int -deprecated_pingIntervalMillis() {
            r1 = this;
            int r0 = r1.pingIntervalMillis
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "protocols", imports = {}))
    public final java.util.List<okhttp3.Protocol> -deprecated_protocols() {
            r1 = this;
            java.util.List<okhttp3.Protocol> r0 = r1.protocols
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "proxy", imports = {}))
    public final java.net.Proxy -deprecated_proxy() {
            r1 = this;
            java.net.Proxy r0 = r1.proxy
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "proxyAuthenticator", imports = {}))
    public final okhttp3.Authenticator -deprecated_proxyAuthenticator() {
            r1 = this;
            okhttp3.Authenticator r0 = r1.proxyAuthenticator
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "proxySelector", imports = {}))
    public final java.net.ProxySelector -deprecated_proxySelector() {
            r1 = this;
            java.net.ProxySelector r0 = r1.proxySelector
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "readTimeoutMillis", imports = {}))
    public final int -deprecated_readTimeoutMillis() {
            r1 = this;
            int r0 = r1.readTimeoutMillis
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "retryOnConnectionFailure", imports = {}))
    public final boolean -deprecated_retryOnConnectionFailure() {
            r1 = this;
            boolean r0 = r1.retryOnConnectionFailure
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "socketFactory", imports = {}))
    public final javax.net.SocketFactory -deprecated_socketFactory() {
            r1 = this;
            javax.net.SocketFactory r0 = r1.socketFactory
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "sslSocketFactory", imports = {}))
    public final javax.net.ssl.SSLSocketFactory -deprecated_sslSocketFactory() {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.sslSocketFactory()
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "writeTimeoutMillis", imports = {}))
    public final int -deprecated_writeTimeoutMillis() {
            r1 = this;
            int r0 = r1.writeTimeoutMillis
            return r0
    }

    public final okhttp3.Authenticator authenticator() {
            r1 = this;
            okhttp3.Authenticator r0 = r1.authenticator
            return r0
    }

    public final okhttp3.Cache cache() {
            r1 = this;
            okhttp3.Cache r0 = r1.cache
            return r0
    }

    public final int callTimeoutMillis() {
            r1 = this;
            int r0 = r1.callTimeoutMillis
            return r0
    }

    public final okhttp3.internal.tls.CertificateChainCleaner certificateChainCleaner() {
            r1 = this;
            okhttp3.internal.tls.CertificateChainCleaner r0 = r1.certificateChainCleaner
            return r0
    }

    public final okhttp3.CertificatePinner certificatePinner() {
            r1 = this;
            okhttp3.CertificatePinner r0 = r1.certificatePinner
            return r0
    }

    public java.lang.Object clone() {
            r1 = this;
            java.lang.Object r0 = super.clone()
            return r0
    }

    public final int connectTimeoutMillis() {
            r1 = this;
            int r0 = r1.connectTimeoutMillis
            return r0
    }

    public final okhttp3.ConnectionPool connectionPool() {
            r1 = this;
            okhttp3.ConnectionPool r0 = r1.connectionPool
            return r0
    }

    public final java.util.List<okhttp3.ConnectionSpec> connectionSpecs() {
            r1 = this;
            java.util.List<okhttp3.ConnectionSpec> r0 = r1.connectionSpecs
            return r0
    }

    public final okhttp3.CookieJar cookieJar() {
            r1 = this;
            okhttp3.CookieJar r0 = r1.cookieJar
            return r0
    }

    public final okhttp3.Dispatcher dispatcher() {
            r1 = this;
            okhttp3.Dispatcher r0 = r1.dispatcher
            return r0
    }

    public final okhttp3.Dns dns() {
            r1 = this;
            okhttp3.Dns r0 = r1.dns
            return r0
    }

    public final okhttp3.EventListener.Factory eventListenerFactory() {
            r1 = this;
            okhttp3.EventListener$Factory r0 = r1.eventListenerFactory
            return r0
    }

    public final boolean followRedirects() {
            r1 = this;
            boolean r0 = r1.followRedirects
            return r0
    }

    public final boolean followSslRedirects() {
            r1 = this;
            boolean r0 = r1.followSslRedirects
            return r0
    }

    public final okhttp3.internal.connection.RouteDatabase getRouteDatabase() {
            r1 = this;
            okhttp3.internal.connection.RouteDatabase r0 = r1.routeDatabase
            return r0
    }

    public final javax.net.ssl.HostnameVerifier hostnameVerifier() {
            r1 = this;
            javax.net.ssl.HostnameVerifier r0 = r1.hostnameVerifier
            return r0
    }

    public final java.util.List<okhttp3.Interceptor> interceptors() {
            r1 = this;
            java.util.List<okhttp3.Interceptor> r0 = r1.interceptors
            return r0
    }

    public final long minWebSocketMessageToCompress() {
            r2 = this;
            long r0 = r2.minWebSocketMessageToCompress
            return r0
    }

    public final java.util.List<okhttp3.Interceptor> networkInterceptors() {
            r1 = this;
            java.util.List<okhttp3.Interceptor> r0 = r1.networkInterceptors
            return r0
    }

    public okhttp3.OkHttpClient.Builder newBuilder() {
            r1 = this;
            okhttp3.OkHttpClient$Builder r0 = new okhttp3.OkHttpClient$Builder
            r0.<init>(r1)
            return r0
    }

    @Override
    public okhttp3.Call newCall(okhttp3.Request r3) {
            r2 = this;
            java.lang.String r0 = "request"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            okhttp3.internal.connection.RealCall r0 = new okhttp3.internal.connection.RealCall
            r1 = 0
            r0.<init>(r2, r3, r1)
            okhttp3.Call r0 = (okhttp3.Call) r0
            return r0
    }

    @Override
    public okhttp3.WebSocket newWebSocket(okhttp3.Request r12, okhttp3.WebSocketListener r13) {
            r11 = this;
            java.lang.String r0 = "request"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r12, r0)
            java.lang.String r0 = "listener"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r13, r0)
            okhttp3.internal.ws.RealWebSocket r0 = new okhttp3.internal.ws.RealWebSocket
            okhttp3.internal.concurrent.TaskRunner r2 = okhttp3.internal.concurrent.TaskRunner.INSTANCE
            java.util.Random r5 = new java.util.Random
            r5.<init>()
            int r1 = r11.pingIntervalMillis
            long r6 = (long) r1
            long r9 = r11.minWebSocketMessageToCompress
            r8 = 0
            r1 = r0
            r3 = r12
            r4 = r13
            r1.<init>(r2, r3, r4, r5, r6, r8, r9)
            r0.connect(r11)
            okhttp3.WebSocket r0 = (okhttp3.WebSocket) r0
            return r0
    }

    public final int pingIntervalMillis() {
            r1 = this;
            int r0 = r1.pingIntervalMillis
            return r0
    }

    public final java.util.List<okhttp3.Protocol> protocols() {
            r1 = this;
            java.util.List<okhttp3.Protocol> r0 = r1.protocols
            return r0
    }

    public final java.net.Proxy proxy() {
            r1 = this;
            java.net.Proxy r0 = r1.proxy
            return r0
    }

    public final okhttp3.Authenticator proxyAuthenticator() {
            r1 = this;
            okhttp3.Authenticator r0 = r1.proxyAuthenticator
            return r0
    }

    public final java.net.ProxySelector proxySelector() {
            r1 = this;
            java.net.ProxySelector r0 = r1.proxySelector
            return r0
    }

    public final int readTimeoutMillis() {
            r1 = this;
            int r0 = r1.readTimeoutMillis
            return r0
    }

    public final boolean retryOnConnectionFailure() {
            r1 = this;
            boolean r0 = r1.retryOnConnectionFailure
            return r0
    }

    public final javax.net.SocketFactory socketFactory() {
            r1 = this;
            javax.net.SocketFactory r0 = r1.socketFactory
            return r0
    }

    public final javax.net.ssl.SSLSocketFactory sslSocketFactory() {
            r2 = this;
            javax.net.ssl.SSLSocketFactory r0 = r2.sslSocketFactoryOrNull
            if (r0 == 0) goto L5
            return r0
        L5:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "CLEARTEXT-only client"
            r0.<init>(r1)
            throw r0
    }

    public final int writeTimeoutMillis() {
            r1 = this;
            int r0 = r1.writeTimeoutMillis
            return r0
    }

    public final javax.net.ssl.X509TrustManager x509TrustManager() {
            r1 = this;
            javax.net.ssl.X509TrustManager r0 = r1.x509TrustManager
            return r0
    }
}
