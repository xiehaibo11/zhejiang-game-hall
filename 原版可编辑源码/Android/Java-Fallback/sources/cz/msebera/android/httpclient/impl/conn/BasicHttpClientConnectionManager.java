package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class BasicHttpClientConnectionManager implements cz.msebera.android.httpclient.conn.HttpClientConnectionManager, java.io.Closeable {

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private cz.msebera.android.httpclient.conn.ManagedHttpClientConnection conn;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private cz.msebera.android.httpclient.config.ConnectionConfig connConfig;
    private final cz.msebera.android.httpclient.conn.HttpConnectionFactory<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.conn.ManagedHttpClientConnection> connFactory;
    private final cz.msebera.android.httpclient.conn.HttpClientConnectionOperator connectionOperator;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private long expiry;
    private final java.util.concurrent.atomic.AtomicBoolean isShutdown;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private boolean leased;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private cz.msebera.android.httpclient.conn.routing.HttpRoute route;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private cz.msebera.android.httpclient.config.SocketConfig socketConfig;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private java.lang.Object state;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private long updated;


    public BasicHttpClientConnectionManager() {
            r2 = this;
            cz.msebera.android.httpclient.config.Registry r0 = getDefaultRegistry()
            r1 = 0
            r2.<init>(r0, r1, r1, r1)
            return
    }

    public BasicHttpClientConnectionManager(cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.conn.socket.ConnectionSocketFactory> r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0, r0, r0)
            return
    }

    public BasicHttpClientConnectionManager(cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.conn.socket.ConnectionSocketFactory> r2, cz.msebera.android.httpclient.conn.HttpConnectionFactory<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.conn.ManagedHttpClientConnection> r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0, r0)
            return
    }

    public BasicHttpClientConnectionManager(cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.conn.socket.ConnectionSocketFactory> r2, cz.msebera.android.httpclient.conn.HttpConnectionFactory<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.conn.ManagedHttpClientConnection> r3, cz.msebera.android.httpclient.conn.SchemePortResolver r4, cz.msebera.android.httpclient.conn.DnsResolver r5) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.DefaultHttpClientConnectionOperator r0 = new cz.msebera.android.httpclient.impl.conn.DefaultHttpClientConnectionOperator
            r0.<init>(r2, r4, r5)
            r1.<init>(r0, r3)
            return
    }

    public BasicHttpClientConnectionManager(cz.msebera.android.httpclient.conn.HttpClientConnectionOperator r3, cz.msebera.android.httpclient.conn.HttpConnectionFactory<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.conn.ManagedHttpClientConnection> r4) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            java.lang.String r0 = "Connection operator"
            java.lang.Object r3 = cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            cz.msebera.android.httpclient.conn.HttpClientConnectionOperator r3 = (cz.msebera.android.httpclient.conn.HttpClientConnectionOperator) r3
            r2.connectionOperator = r3
            if (r4 == 0) goto L1b
            goto L1d
        L1b:
            cz.msebera.android.httpclient.impl.conn.ManagedHttpClientConnectionFactory r4 = cz.msebera.android.httpclient.impl.conn.ManagedHttpClientConnectionFactory.INSTANCE
        L1d:
            r2.connFactory = r4
            r3 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r2.expiry = r3
            cz.msebera.android.httpclient.config.SocketConfig r3 = cz.msebera.android.httpclient.config.SocketConfig.DEFAULT
            r2.socketConfig = r3
            cz.msebera.android.httpclient.config.ConnectionConfig r3 = cz.msebera.android.httpclient.config.ConnectionConfig.DEFAULT
            r2.connConfig = r3
            java.util.concurrent.atomic.AtomicBoolean r3 = new java.util.concurrent.atomic.AtomicBoolean
            r4 = 0
            r3.<init>(r4)
            r2.isShutdown = r3
            return
    }

    private void checkExpiry() {
            r5 = this;
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r5.conn
            if (r0 == 0) goto L36
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r5.expiry
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 < 0) goto L36
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r5.log
            boolean r0 = r0.isDebugEnabled()
            if (r0 == 0) goto L33
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r5.log
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Connection expired @ "
            r1.append(r2)
            java.util.Date r2 = new java.util.Date
            long r3 = r5.expiry
            r2.<init>(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.debug(r1)
        L33:
            r5.closeConnection()
        L36:
            return
    }

    private void closeConnection() {
            r3 = this;
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r3.conn
            if (r0 == 0) goto L24
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            java.lang.String r1 = "Closing connection"
            r0.debug(r1)
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r3.conn     // Catch: java.io.IOException -> L11
            r0.close()     // Catch: java.io.IOException -> L11
            goto L21
        L11:
            r0 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r3.log
            boolean r1 = r1.isDebugEnabled()
            if (r1 == 0) goto L21
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r3.log
            java.lang.String r2 = "I/O exception closing connection"
            r1.debug(r2, r0)
        L21:
            r0 = 0
            r3.conn = r0
        L24:
            return
    }

    private static cz.msebera.android.httpclient.config.Registry<cz.msebera.android.httpclient.conn.socket.ConnectionSocketFactory> getDefaultRegistry() {
            cz.msebera.android.httpclient.config.RegistryBuilder r0 = cz.msebera.android.httpclient.config.RegistryBuilder.create()
            cz.msebera.android.httpclient.conn.socket.PlainConnectionSocketFactory r1 = cz.msebera.android.httpclient.conn.socket.PlainConnectionSocketFactory.getSocketFactory()
            java.lang.String r2 = "http"
            cz.msebera.android.httpclient.config.RegistryBuilder r0 = r0.register(r2, r1)
            cz.msebera.android.httpclient.conn.ssl.SSLConnectionSocketFactory r1 = cz.msebera.android.httpclient.conn.ssl.SSLConnectionSocketFactory.getSocketFactory()
            java.lang.String r2 = "https"
            cz.msebera.android.httpclient.config.RegistryBuilder r0 = r0.register(r2, r1)
            cz.msebera.android.httpclient.config.Registry r0 = r0.build()
            return r0
    }

    private void shutdownConnection() {
            r3 = this;
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r3.conn
            if (r0 == 0) goto L24
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            java.lang.String r1 = "Shutting down connection"
            r0.debug(r1)
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r3.conn     // Catch: java.io.IOException -> L11
            r0.shutdown()     // Catch: java.io.IOException -> L11
            goto L21
        L11:
            r0 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r3.log
            boolean r1 = r1.isDebugEnabled()
            if (r1 == 0) goto L21
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r3.log
            java.lang.String r2 = "I/O exception shutting down connection"
            r1.debug(r2, r0)
        L21:
            r0 = 0
            r3.conn = r0
        L24:
            return
    }

    @Override
    public void close() {
            r0 = this;
            r0.shutdown()
            return
    }

    @Override
    public synchronized void closeExpiredConnections() {
            r1 = this;
            monitor-enter(r1)
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.isShutdown     // Catch: java.lang.Throwable -> L14
            boolean r0 = r0.get()     // Catch: java.lang.Throwable -> L14
            if (r0 == 0) goto Lb
            monitor-exit(r1)
            return
        Lb:
            boolean r0 = r1.leased     // Catch: java.lang.Throwable -> L14
            if (r0 != 0) goto L12
            r1.checkExpiry()     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r1)
            return
        L14:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    public synchronized void closeIdleConnections(long r3, java.util.concurrent.TimeUnit r5) {
            r2 = this;
            monitor-enter(r2)
            java.lang.String r0 = "Time unit"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)     // Catch: java.lang.Throwable -> L2f
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.isShutdown     // Catch: java.lang.Throwable -> L2f
            boolean r0 = r0.get()     // Catch: java.lang.Throwable -> L2f
            if (r0 == 0) goto L10
            monitor-exit(r2)
            return
        L10:
            boolean r0 = r2.leased     // Catch: java.lang.Throwable -> L2f
            if (r0 != 0) goto L2d
            long r3 = r5.toMillis(r3)     // Catch: java.lang.Throwable -> L2f
            r0 = 0
            int r5 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r5 >= 0) goto L1f
            r3 = r0
        L1f:
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L2f
            long r0 = r0 - r3
            long r3 = r2.updated     // Catch: java.lang.Throwable -> L2f
            int r5 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r5 > 0) goto L2d
            r2.closeConnection()     // Catch: java.lang.Throwable -> L2f
        L2d:
            monitor-exit(r2)
            return
        L2f:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    @Override
    public void connect(cz.msebera.android.httpclient.HttpClientConnection r8, cz.msebera.android.httpclient.conn.routing.HttpRoute r9, int r10, cz.msebera.android.httpclient.protocol.HttpContext r11) throws java.io.IOException {
            r7 = this;
            java.lang.String r0 = "Connection"
            cz.msebera.android.httpclient.util.Args.notNull(r8, r0)
            java.lang.String r0 = "HTTP route"
            cz.msebera.android.httpclient.util.Args.notNull(r9, r0)
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r7.conn
            if (r8 != r0) goto L10
            r8 = 1
            goto L11
        L10:
            r8 = 0
        L11:
            java.lang.String r0 = "Connection not obtained from this manager"
            cz.msebera.android.httpclient.util.Asserts.check(r8, r0)
            cz.msebera.android.httpclient.HttpHost r8 = r9.getProxyHost()
            if (r8 == 0) goto L21
            cz.msebera.android.httpclient.HttpHost r8 = r9.getProxyHost()
            goto L25
        L21:
            cz.msebera.android.httpclient.HttpHost r8 = r9.getTargetHost()
        L25:
            r2 = r8
            java.net.InetSocketAddress r3 = r9.getLocalSocketAddress()
            cz.msebera.android.httpclient.conn.HttpClientConnectionOperator r0 = r7.connectionOperator
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r1 = r7.conn
            cz.msebera.android.httpclient.config.SocketConfig r5 = r7.socketConfig
            r4 = r10
            r6 = r11
            r0.connect(r1, r2, r3, r4, r5, r6)
            return
    }

    protected void finalize() throws java.lang.Throwable {
            r1 = this;
            r1.shutdown()     // Catch: java.lang.Throwable -> L7
            super.finalize()
            return
        L7:
            r0 = move-exception
            super.finalize()
            throw r0
    }

    synchronized cz.msebera.android.httpclient.HttpClientConnection getConnection(cz.msebera.android.httpclient.conn.routing.HttpRoute r6, java.lang.Object r7) {
            r5 = this;
            monitor-enter(r5)
            java.util.concurrent.atomic.AtomicBoolean r0 = r5.isShutdown     // Catch: java.lang.Throwable -> L6b
            boolean r0 = r0.get()     // Catch: java.lang.Throwable -> L6b
            r1 = 0
            r2 = 1
            if (r0 != 0) goto Ld
            r0 = 1
            goto Le
        Ld:
            r0 = 0
        Le:
            java.lang.String r3 = "Connection manager has been shut down"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r3)     // Catch: java.lang.Throwable -> L6b
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r5.log     // Catch: java.lang.Throwable -> L6b
            boolean r0 = r0.isDebugEnabled()     // Catch: java.lang.Throwable -> L6b
            if (r0 == 0) goto L31
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r5.log     // Catch: java.lang.Throwable -> L6b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6b
            r3.<init>()     // Catch: java.lang.Throwable -> L6b
            java.lang.String r4 = "Get connection for route "
            r3.append(r4)     // Catch: java.lang.Throwable -> L6b
            r3.append(r6)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L6b
            r0.debug(r3)     // Catch: java.lang.Throwable -> L6b
        L31:
            boolean r0 = r5.leased     // Catch: java.lang.Throwable -> L6b
            if (r0 != 0) goto L36
            r1 = 1
        L36:
            java.lang.String r0 = "Connection is still allocated"
            cz.msebera.android.httpclient.util.Asserts.check(r1, r0)     // Catch: java.lang.Throwable -> L6b
            cz.msebera.android.httpclient.conn.routing.HttpRoute r0 = r5.route     // Catch: java.lang.Throwable -> L6b
            boolean r0 = cz.msebera.android.httpclient.util.LangUtils.equals(r0, r6)     // Catch: java.lang.Throwable -> L6b
            if (r0 == 0) goto L4b
            java.lang.Object r0 = r5.state     // Catch: java.lang.Throwable -> L6b
            boolean r0 = cz.msebera.android.httpclient.util.LangUtils.equals(r0, r7)     // Catch: java.lang.Throwable -> L6b
            if (r0 != 0) goto L4e
        L4b:
            r5.closeConnection()     // Catch: java.lang.Throwable -> L6b
        L4e:
            r5.route = r6     // Catch: java.lang.Throwable -> L6b
            r5.state = r7     // Catch: java.lang.Throwable -> L6b
            r5.checkExpiry()     // Catch: java.lang.Throwable -> L6b
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r7 = r5.conn     // Catch: java.lang.Throwable -> L6b
            if (r7 != 0) goto L65
            cz.msebera.android.httpclient.conn.HttpConnectionFactory<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.conn.ManagedHttpClientConnection> r7 = r5.connFactory     // Catch: java.lang.Throwable -> L6b
            cz.msebera.android.httpclient.config.ConnectionConfig r0 = r5.connConfig     // Catch: java.lang.Throwable -> L6b
            cz.msebera.android.httpclient.HttpConnection r6 = r7.create(r6, r0)     // Catch: java.lang.Throwable -> L6b
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r6 = (cz.msebera.android.httpclient.conn.ManagedHttpClientConnection) r6     // Catch: java.lang.Throwable -> L6b
            r5.conn = r6     // Catch: java.lang.Throwable -> L6b
        L65:
            r5.leased = r2     // Catch: java.lang.Throwable -> L6b
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r6 = r5.conn     // Catch: java.lang.Throwable -> L6b
            monitor-exit(r5)
            return r6
        L6b:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public synchronized cz.msebera.android.httpclient.config.ConnectionConfig getConnectionConfig() {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.config.ConnectionConfig r0 = r1.connConfig     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    cz.msebera.android.httpclient.conn.routing.HttpRoute getRoute() {
            r1 = this;
            cz.msebera.android.httpclient.conn.routing.HttpRoute r0 = r1.route
            return r0
    }

    public synchronized cz.msebera.android.httpclient.config.SocketConfig getSocketConfig() {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.config.SocketConfig r0 = r1.socketConfig     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    java.lang.Object getState() {
            r1 = this;
            java.lang.Object r0 = r1.state
            return r0
    }

    @Override
    public synchronized void releaseConnection(cz.msebera.android.httpclient.HttpClientConnection r8, java.lang.Object r9, long r10, java.util.concurrent.TimeUnit r12) {
            r7 = this;
            monitor-enter(r7)
            java.lang.String r0 = "Connection"
            cz.msebera.android.httpclient.util.Args.notNull(r8, r0)     // Catch: java.lang.Throwable -> Lb2
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r7.conn     // Catch: java.lang.Throwable -> Lb2
            r1 = 0
            if (r8 != r0) goto Ld
            r0 = 1
            goto Le
        Ld:
            r0 = 0
        Le:
            java.lang.String r2 = "Connection not obtained from this manager"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r2)     // Catch: java.lang.Throwable -> Lb2
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r7.log     // Catch: java.lang.Throwable -> Lb2
            boolean r0 = r0.isDebugEnabled()     // Catch: java.lang.Throwable -> Lb2
            if (r0 == 0) goto L31
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r7.log     // Catch: java.lang.Throwable -> Lb2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb2
            r2.<init>()     // Catch: java.lang.Throwable -> Lb2
            java.lang.String r3 = "Releasing connection "
            r2.append(r3)     // Catch: java.lang.Throwable -> Lb2
            r2.append(r8)     // Catch: java.lang.Throwable -> Lb2
            java.lang.String r8 = r2.toString()     // Catch: java.lang.Throwable -> Lb2
            r0.debug(r8)     // Catch: java.lang.Throwable -> Lb2
        L31:
            java.util.concurrent.atomic.AtomicBoolean r8 = r7.isShutdown     // Catch: java.lang.Throwable -> Lb2
            boolean r8 = r8.get()     // Catch: java.lang.Throwable -> Lb2
            if (r8 == 0) goto L3b
            monitor-exit(r7)
            return
        L3b:
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lae
            r7.updated = r2     // Catch: java.lang.Throwable -> Lae
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r8 = r7.conn     // Catch: java.lang.Throwable -> Lae
            boolean r8 = r8.isOpen()     // Catch: java.lang.Throwable -> Lae
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            if (r8 != 0) goto L58
            r8 = 0
            r7.conn = r8     // Catch: java.lang.Throwable -> Lae
            r7.route = r8     // Catch: java.lang.Throwable -> Lae
            r7.conn = r8     // Catch: java.lang.Throwable -> Lae
            r7.expiry = r2     // Catch: java.lang.Throwable -> Lae
            goto Laa
        L58:
            r7.state = r9     // Catch: java.lang.Throwable -> Lae
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r8 = r7.log     // Catch: java.lang.Throwable -> Lae
            boolean r8 = r8.isDebugEnabled()     // Catch: java.lang.Throwable -> Lae
            r4 = 0
            if (r8 == 0) goto L9a
            int r8 = (r10 > r4 ? 1 : (r10 == r4 ? 0 : -1))
            if (r8 <= 0) goto L82
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lae
            r8.<init>()     // Catch: java.lang.Throwable -> Lae
            java.lang.String r9 = "for "
            r8.append(r9)     // Catch: java.lang.Throwable -> Lae
            r8.append(r10)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r9 = " "
            r8.append(r9)     // Catch: java.lang.Throwable -> Lae
            r8.append(r12)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lae
            goto L84
        L82:
            java.lang.String r8 = "indefinitely"
        L84:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r9 = r7.log     // Catch: java.lang.Throwable -> Lae
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lae
            r0.<init>()     // Catch: java.lang.Throwable -> Lae
            java.lang.String r6 = "Connection can be kept alive "
            r0.append(r6)     // Catch: java.lang.Throwable -> Lae
            r0.append(r8)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r8 = r0.toString()     // Catch: java.lang.Throwable -> Lae
            r9.debug(r8)     // Catch: java.lang.Throwable -> Lae
        L9a:
            int r8 = (r10 > r4 ? 1 : (r10 == r4 ? 0 : -1))
            if (r8 <= 0) goto La8
            long r8 = r7.updated     // Catch: java.lang.Throwable -> Lae
            long r10 = r12.toMillis(r10)     // Catch: java.lang.Throwable -> Lae
            long r8 = r8 + r10
            r7.expiry = r8     // Catch: java.lang.Throwable -> Lae
            goto Laa
        La8:
            r7.expiry = r2     // Catch: java.lang.Throwable -> Lae
        Laa:
            r7.leased = r1     // Catch: java.lang.Throwable -> Lb2
            monitor-exit(r7)
            return
        Lae:
            r8 = move-exception
            r7.leased = r1     // Catch: java.lang.Throwable -> Lb2
            throw r8     // Catch: java.lang.Throwable -> Lb2
        Lb2:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
    }

    @Override
    public final cz.msebera.android.httpclient.conn.ConnectionRequest requestConnection(cz.msebera.android.httpclient.conn.routing.HttpRoute r2, java.lang.Object r3) {
            r1 = this;
            java.lang.String r0 = "Route"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.impl.conn.BasicHttpClientConnectionManager$1 r0 = new cz.msebera.android.httpclient.impl.conn.BasicHttpClientConnectionManager$1
            r0.<init>(r1, r2, r3)
            return r0
    }

    @Override
    public void routeComplete(cz.msebera.android.httpclient.HttpClientConnection r1, cz.msebera.android.httpclient.conn.routing.HttpRoute r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws java.io.IOException {
            r0 = this;
            return
    }

    public synchronized void setConnectionConfig(cz.msebera.android.httpclient.config.ConnectionConfig r1) {
            r0 = this;
            monitor-enter(r0)
            if (r1 == 0) goto L4
            goto L6
        L4:
            cz.msebera.android.httpclient.config.ConnectionConfig r1 = cz.msebera.android.httpclient.config.ConnectionConfig.DEFAULT     // Catch: java.lang.Throwable -> La
        L6:
            r0.connConfig = r1     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)
            return
        La:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized void setSocketConfig(cz.msebera.android.httpclient.config.SocketConfig r1) {
            r0 = this;
            monitor-enter(r0)
            if (r1 == 0) goto L4
            goto L6
        L4:
            cz.msebera.android.httpclient.config.SocketConfig r1 = cz.msebera.android.httpclient.config.SocketConfig.DEFAULT     // Catch: java.lang.Throwable -> La
        L6:
            r0.socketConfig = r1     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)
            return
        La:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @Override
    public synchronized void shutdown() {
            r3 = this;
            monitor-enter(r3)
            java.util.concurrent.atomic.AtomicBoolean r0 = r3.isShutdown     // Catch: java.lang.Throwable -> L10
            r1 = 0
            r2 = 1
            boolean r0 = r0.compareAndSet(r1, r2)     // Catch: java.lang.Throwable -> L10
            if (r0 == 0) goto Le
            r3.shutdownConnection()     // Catch: java.lang.Throwable -> L10
        Le:
            monitor-exit(r3)
            return
        L10:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    @Override
    public void upgrade(cz.msebera.android.httpclient.HttpClientConnection r2, cz.msebera.android.httpclient.conn.routing.HttpRoute r3, cz.msebera.android.httpclient.protocol.HttpContext r4) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "Connection"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "HTTP route"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r1.conn
            if (r2 != r0) goto L10
            r2 = 1
            goto L11
        L10:
            r2 = 0
        L11:
            java.lang.String r0 = "Connection not obtained from this manager"
            cz.msebera.android.httpclient.util.Asserts.check(r2, r0)
            cz.msebera.android.httpclient.conn.HttpClientConnectionOperator r2 = r1.connectionOperator
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r1.conn
            cz.msebera.android.httpclient.HttpHost r3 = r3.getTargetHost()
            r2.upgrade(r0, r3, r4)
            return
    }
}
