package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class PoolingHttpClientConnectionManager implements cz.msebera.android.httpclient.conn.HttpClientConnectionManager, cz.msebera.android.httpclient.pool.ConnPoolControl<cz.msebera.android.httpclient.conn.routing.HttpRoute>, java.io.Closeable {
    private final cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager.ConfigData configData;
    private final cz.msebera.android.httpclient.conn.HttpClientConnectionOperator connectionOperator;
    private final java.util.concurrent.atomic.AtomicBoolean isShutDown;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private final cz.msebera.android.httpclient.impl.conn.CPool pool;


    static class ConfigData {
        private final java.util.Map<cz.msebera.android.httpclient.HttpHost, cz.msebera.android.httpclient.config.ConnectionConfig> connectionConfigMap;
        private volatile cz.msebera.android.httpclient.config.ConnectionConfig defaultConnectionConfig;
        private volatile cz.msebera.android.httpclient.config.SocketConfig defaultSocketConfig;
        private final java.util.Map<cz.msebera.android.httpclient.HttpHost, cz.msebera.android.httpclient.config.SocketConfig> socketConfigMap;

        ConfigData() {
                r1 = this;
                r1.<init>()
                java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
                r0.<init>()
                r1.socketConfigMap = r0
                java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
                r0.<init>()
                r1.connectionConfigMap = r0
                return
        }

        public cz.msebera.android.httpclient.config.ConnectionConfig getConnectionConfig(cz.msebera.android.httpclient.HttpHost r2) {
                r1 = this;
                java.util.Map<cz.msebera.android.httpclient.HttpHost, cz.msebera.android.httpclient.config.ConnectionConfig> r0 = r1.connectionConfigMap
                java.lang.Object r2 = r0.get(r2)
                cz.msebera.android.httpclient.config.ConnectionConfig r2 = (cz.msebera.android.httpclient.config.ConnectionConfig) r2
                return r2
        }

        public cz.msebera.android.httpclient.config.ConnectionConfig getDefaultConnectionConfig() {
                r1 = this;
                cz.msebera.android.httpclient.config.ConnectionConfig r0 = r1.defaultConnectionConfig
                return r0
        }

        public cz.msebera.android.httpclient.config.SocketConfig getDefaultSocketConfig() {
                r1 = this;
                cz.msebera.android.httpclient.config.SocketConfig r0 = r1.defaultSocketConfig
                return r0
        }

        public cz.msebera.android.httpclient.config.SocketConfig getSocketConfig(cz.msebera.android.httpclient.HttpHost r2) {
                r1 = this;
                java.util.Map<cz.msebera.android.httpclient.HttpHost, cz.msebera.android.httpclient.config.SocketConfig> r0 = r1.socketConfigMap
                java.lang.Object r2 = r0.get(r2)
                cz.msebera.android.httpclient.config.SocketConfig r2 = (cz.msebera.android.httpclient.config.SocketConfig) r2
                return r2
        }

        public void setConnectionConfig(cz.msebera.android.httpclient.HttpHost r2, cz.msebera.android.httpclient.config.ConnectionConfig r3) {
                r1 = this;
                java.util.Map<cz.msebera.android.httpclient.HttpHost, cz.msebera.android.httpclient.config.ConnectionConfig> r0 = r1.connectionConfigMap
                r0.put(r2, r3)
                return
        }

        public void setDefaultConnectionConfig(cz.msebera.android.httpclient.config.ConnectionConfig r1) {
                r0 = this;
                r0.defaultConnectionConfig = r1
                return
        }

        public void setDefaultSocketConfig(cz.msebera.android.httpclient.config.SocketConfig r1) {
                r0 = this;
                r0.defaultSocketConfig = r1
                return
        }

        public void setSocketConfig(cz.msebera.android.httpclient.HttpHost r2, cz.msebera.android.httpclient.config.SocketConfig r3) {
                r1 = this;
                java.util.Map<cz.msebera.android.httpclient.HttpHost, cz.msebera.android.httpclient.config.SocketConfig> r0 = r1.socketConfigMap
                r0.put(r2, r3)
                return
        }
    }

    static class InternalConnectionFactory implements cz.msebera.android.httpclient.pool.ConnFactory<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.conn.ManagedHttpClientConnection> {
        private final cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager.ConfigData configData;
        private final cz.msebera.android.httpclient.conn.HttpConnectionFactory<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.conn.ManagedHttpClientConnection> connFactory;

        InternalConnectionFactory(cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager.ConfigData r1, cz.msebera.android.httpclient.conn.HttpConnectionFactory<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.conn.ManagedHttpClientConnection> r2) {
                r0 = this;
                r0.<init>()
                if (r1 == 0) goto L6
                goto Lb
            L6:
                cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager$ConfigData r1 = new cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager$ConfigData
                r1.<init>()
            Lb:
                r0.configData = r1
                if (r2 == 0) goto L10
                goto L12
            L10:
                cz.msebera.android.httpclient.impl.conn.ManagedHttpClientConnectionFactory r2 = cz.msebera.android.httpclient.impl.conn.ManagedHttpClientConnectionFactory.INSTANCE
            L12:
                r0.connFactory = r2
                return
        }

        public cz.msebera.android.httpclient.conn.ManagedHttpClientConnection create(cz.msebera.android.httpclient.conn.routing.HttpRoute r3) throws java.io.IOException {
                r2 = this;
                cz.msebera.android.httpclient.HttpHost r0 = r3.getProxyHost()
                if (r0 == 0) goto L11
                cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager$ConfigData r0 = r2.configData
                cz.msebera.android.httpclient.HttpHost r1 = r3.getProxyHost()
                cz.msebera.android.httpclient.config.ConnectionConfig r0 = r0.getConnectionConfig(r1)
                goto L12
            L11:
                r0 = 0
            L12:
                if (r0 != 0) goto L1e
                cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager$ConfigData r0 = r2.configData
                cz.msebera.android.httpclient.HttpHost r1 = r3.getTargetHost()
                cz.msebera.android.httpclient.config.ConnectionConfig r0 = r0.getConnectionConfig(r1)
            L1e:
                if (r0 != 0) goto L26
                cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager$ConfigData r0 = r2.configData
                cz.msebera.android.httpclient.config.ConnectionConfig r0 = r0.getDefaultConnectionConfig()
            L26:
                if (r0 != 0) goto L2a
                cz.msebera.android.httpclient.config.ConnectionConfig r0 = cz.msebera.android.httpclient.config.ConnectionConfig.DEFAULT
            L2a:
                cz.msebera.android.httpclient.conn.HttpConnectionFactory<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.conn.ManagedHttpClientConnection> r1 = r2.connFactory
                cz.msebera.android.httpclient.HttpConnection r3 = r1.create(r3, r0)
                cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r3 = (cz.msebera.android.httpclient.conn.ManagedHttpClientConnection) r3
                return r3
        }

        @Override
        public cz.msebera.android.httpclient.conn.ManagedHttpClientConnection create(cz.msebera.android.httpclient.conn.routing.HttpRoute r1) throws java.io.IOException {
                r0 = this;
                cz.msebera.android.httpclient.conn.routing.HttpRoute r1 = (cz.msebera.android.httpclient.conn.routing.HttpRoute) r1
                cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r1 = r0.create(r1)
                return r1
        }
    }

    public PoolingHttpClientConnectionManager() {
            r1 = this;
            cz.msebera.android.httpclient.config.Registry r0 = getDefaultRegistry()
            r1.<init>(r0)
            return
    }

    public PoolingHttpClientConnectionManager(long r9, java.util.concurrent.TimeUnit r11) {
            r8 = this;
            cz.msebera.android.httpclient.config.Registry r1 = getDefaultRegistry()
            r2 = 0
            r3 = 0
            r4 = 0
            r0 = r8
            r5 = r9
            r7 = r11
            r0.<init>(r1, r2, r3, r4, r5, r7)
            return
    }

    public PoolingHttpClientConnectionManager(cz.msebera.android.httpclient.config.Registry<cz.msebera.android.httpclient.conn.socket.ConnectionSocketFactory> r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0, r0)
            return
    }

    public PoolingHttpClientConnectionManager(cz.msebera.android.httpclient.config.Registry<cz.msebera.android.httpclient.conn.socket.ConnectionSocketFactory> r2, cz.msebera.android.httpclient.conn.DnsResolver r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0, r3)
            return
    }

    public PoolingHttpClientConnectionManager(cz.msebera.android.httpclient.config.Registry<cz.msebera.android.httpclient.conn.socket.ConnectionSocketFactory> r2, cz.msebera.android.httpclient.conn.HttpConnectionFactory<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.conn.ManagedHttpClientConnection> r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public PoolingHttpClientConnectionManager(cz.msebera.android.httpclient.config.Registry<cz.msebera.android.httpclient.conn.socket.ConnectionSocketFactory> r9, cz.msebera.android.httpclient.conn.HttpConnectionFactory<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.conn.ManagedHttpClientConnection> r10, cz.msebera.android.httpclient.conn.DnsResolver r11) {
            r8 = this;
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.MILLISECONDS
            r3 = 0
            r5 = -1
            r0 = r8
            r1 = r9
            r2 = r10
            r4 = r11
            r0.<init>(r1, r2, r3, r4, r5, r7)
            return
    }

    public PoolingHttpClientConnectionManager(cz.msebera.android.httpclient.config.Registry<cz.msebera.android.httpclient.conn.socket.ConnectionSocketFactory> r7, cz.msebera.android.httpclient.conn.HttpConnectionFactory<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.conn.ManagedHttpClientConnection> r8, cz.msebera.android.httpclient.conn.SchemePortResolver r9, cz.msebera.android.httpclient.conn.DnsResolver r10, long r11, java.util.concurrent.TimeUnit r13) {
            r6 = this;
            cz.msebera.android.httpclient.impl.conn.DefaultHttpClientConnectionOperator r1 = new cz.msebera.android.httpclient.impl.conn.DefaultHttpClientConnectionOperator
            r1.<init>(r7, r9, r10)
            r0 = r6
            r2 = r8
            r3 = r11
            r5 = r13
            r0.<init>(r1, r2, r3, r5)
            return
    }

    public PoolingHttpClientConnectionManager(cz.msebera.android.httpclient.conn.HttpClientConnectionOperator r9, cz.msebera.android.httpclient.conn.HttpConnectionFactory<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.conn.ManagedHttpClientConnection> r10, long r11, java.util.concurrent.TimeUnit r13) {
            r8 = this;
            r8.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r8.getClass()
            r0.<init>(r1)
            r8.log = r0
            cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager$ConfigData r0 = new cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager$ConfigData
            r0.<init>()
            r8.configData = r0
            cz.msebera.android.httpclient.impl.conn.CPool r0 = new cz.msebera.android.httpclient.impl.conn.CPool
            cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager$InternalConnectionFactory r2 = new cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager$InternalConnectionFactory
            cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager$ConfigData r1 = r8.configData
            r2.<init>(r1, r10)
            r3 = 2
            r4 = 20
            r1 = r0
            r5 = r11
            r7 = r13
            r1.<init>(r2, r3, r4, r5, r7)
            r8.pool = r0
            cz.msebera.android.httpclient.impl.conn.CPool r10 = r8.pool
            r11 = 5000(0x1388, float:7.006E-42)
            r10.setValidateAfterInactivity(r11)
            java.lang.String r10 = "HttpClientConnectionOperator"
            java.lang.Object r9 = cz.msebera.android.httpclient.util.Args.notNull(r9, r10)
            cz.msebera.android.httpclient.conn.HttpClientConnectionOperator r9 = (cz.msebera.android.httpclient.conn.HttpClientConnectionOperator) r9
            r8.connectionOperator = r9
            java.util.concurrent.atomic.AtomicBoolean r9 = new java.util.concurrent.atomic.AtomicBoolean
            r10 = 0
            r9.<init>(r10)
            r8.isShutDown = r9
            return
    }

    public PoolingHttpClientConnectionManager(cz.msebera.android.httpclient.conn.HttpConnectionFactory<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.conn.ManagedHttpClientConnection> r3) {
            r2 = this;
            cz.msebera.android.httpclient.config.Registry r0 = getDefaultRegistry()
            r1 = 0
            r2.<init>(r0, r3, r1)
            return
    }

    PoolingHttpClientConnectionManager(cz.msebera.android.httpclient.impl.conn.CPool r3, cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.conn.socket.ConnectionSocketFactory> r4, cz.msebera.android.httpclient.conn.SchemePortResolver r5, cz.msebera.android.httpclient.conn.DnsResolver r6) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager$ConfigData r0 = new cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager$ConfigData
            r0.<init>()
            r2.configData = r0
            r2.pool = r3
            cz.msebera.android.httpclient.impl.conn.DefaultHttpClientConnectionOperator r3 = new cz.msebera.android.httpclient.impl.conn.DefaultHttpClientConnectionOperator
            r3.<init>(r4, r5, r6)
            r2.connectionOperator = r3
            java.util.concurrent.atomic.AtomicBoolean r3 = new java.util.concurrent.atomic.AtomicBoolean
            r4 = 0
            r3.<init>(r4)
            r2.isShutDown = r3
            return
    }

    private java.lang.String format(cz.msebera.android.httpclient.conn.routing.HttpRoute r3, java.lang.Object r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[route: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "]"
            r0.append(r3)
            if (r4 == 0) goto L1f
            java.lang.String r1 = "[state: "
            r0.append(r1)
            r0.append(r4)
            r0.append(r3)
        L1f:
            java.lang.String r3 = r0.toString()
            return r3
    }

    private java.lang.String format(cz.msebera.android.httpclient.impl.conn.CPoolEntry r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[id: "
            r0.append(r1)
            java.lang.String r1 = r4.getId()
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r2 = "[route: "
            r0.append(r2)
            java.lang.Object r2 = r4.getRoute()
            r0.append(r2)
            r0.append(r1)
            java.lang.Object r4 = r4.getState()
            if (r4 == 0) goto L36
            java.lang.String r2 = "[state: "
            r0.append(r2)
            r0.append(r4)
            r0.append(r1)
        L36:
            java.lang.String r4 = r0.toString()
            return r4
    }

    private java.lang.String formatStats(cz.msebera.android.httpclient.conn.routing.HttpRoute r6) {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            cz.msebera.android.httpclient.impl.conn.CPool r1 = r5.pool
            cz.msebera.android.httpclient.pool.PoolStats r1 = r1.getTotalStats()
            cz.msebera.android.httpclient.impl.conn.CPool r2 = r5.pool
            cz.msebera.android.httpclient.pool.PoolStats r6 = r2.getStats(r6)
            java.lang.String r2 = "[total kept alive: "
            r0.append(r2)
            int r2 = r1.getAvailable()
            r0.append(r2)
            java.lang.String r2 = "; "
            r0.append(r2)
            java.lang.String r3 = "route allocated: "
            r0.append(r3)
            int r3 = r6.getLeased()
            int r4 = r6.getAvailable()
            int r3 = r3 + r4
            r0.append(r3)
            java.lang.String r3 = " of "
            r0.append(r3)
            int r6 = r6.getMax()
            r0.append(r6)
            r0.append(r2)
            java.lang.String r6 = "total allocated: "
            r0.append(r6)
            int r6 = r1.getLeased()
            int r2 = r1.getAvailable()
            int r6 = r6 + r2
            r0.append(r6)
            r0.append(r3)
            int r6 = r1.getMax()
            r0.append(r6)
            java.lang.String r6 = "]"
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            return r6
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

    @Override
    public void close() {
            r0 = this;
            r0.shutdown()
            return
    }

    @Override
    public void closeExpiredConnections() {
            r2 = this;
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r2.log
            java.lang.String r1 = "Closing expired connections"
            r0.debug(r1)
            cz.msebera.android.httpclient.impl.conn.CPool r0 = r2.pool
            r0.closeExpired()
            return
    }

    @Override
    public void closeIdleConnections(long r4, java.util.concurrent.TimeUnit r6) {
            r3 = this;
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            boolean r0 = r0.isDebugEnabled()
            if (r0 == 0) goto L26
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Closing connections idle longer than "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r2 = " "
            r1.append(r2)
            r1.append(r6)
            java.lang.String r1 = r1.toString()
            r0.debug(r1)
        L26:
            cz.msebera.android.httpclient.impl.conn.CPool r0 = r3.pool
            r0.closeIdle(r4, r6)
            return
    }

    @Override
    public void connect(cz.msebera.android.httpclient.HttpClientConnection r9, cz.msebera.android.httpclient.conn.routing.HttpRoute r10, int r11, cz.msebera.android.httpclient.protocol.HttpContext r12) throws java.io.IOException {
            r8 = this;
            java.lang.String r0 = "Managed Connection"
            cz.msebera.android.httpclient.util.Args.notNull(r9, r0)
            java.lang.String r0 = "HTTP route"
            cz.msebera.android.httpclient.util.Args.notNull(r10, r0)
            monitor-enter(r9)
            cz.msebera.android.httpclient.impl.conn.CPoolEntry r0 = cz.msebera.android.httpclient.impl.conn.CPoolProxy.getPoolEntry(r9)     // Catch: java.lang.Throwable -> L46
            java.lang.Object r0 = r0.getConnection()     // Catch: java.lang.Throwable -> L46
            r2 = r0
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r2 = (cz.msebera.android.httpclient.conn.ManagedHttpClientConnection) r2     // Catch: java.lang.Throwable -> L46
            monitor-exit(r9)     // Catch: java.lang.Throwable -> L46
            cz.msebera.android.httpclient.HttpHost r9 = r10.getProxyHost()
            if (r9 == 0) goto L22
            cz.msebera.android.httpclient.HttpHost r9 = r10.getProxyHost()
            goto L26
        L22:
            cz.msebera.android.httpclient.HttpHost r9 = r10.getTargetHost()
        L26:
            r3 = r9
            java.net.InetSocketAddress r4 = r10.getLocalSocketAddress()
            cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager$ConfigData r9 = r8.configData
            cz.msebera.android.httpclient.config.SocketConfig r9 = r9.getSocketConfig(r3)
            if (r9 != 0) goto L39
            cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager$ConfigData r9 = r8.configData
            cz.msebera.android.httpclient.config.SocketConfig r9 = r9.getDefaultSocketConfig()
        L39:
            if (r9 != 0) goto L3d
            cz.msebera.android.httpclient.config.SocketConfig r9 = cz.msebera.android.httpclient.config.SocketConfig.DEFAULT
        L3d:
            r6 = r9
            cz.msebera.android.httpclient.conn.HttpClientConnectionOperator r1 = r8.connectionOperator
            r5 = r11
            r7 = r12
            r1.connect(r2, r3, r4, r5, r6, r7)
            return
        L46:
            r10 = move-exception
            monitor-exit(r9)     // Catch: java.lang.Throwable -> L46
            throw r10
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

    public cz.msebera.android.httpclient.config.ConnectionConfig getConnectionConfig(cz.msebera.android.httpclient.HttpHost r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager$ConfigData r0 = r1.configData
            cz.msebera.android.httpclient.config.ConnectionConfig r2 = r0.getConnectionConfig(r2)
            return r2
    }

    public cz.msebera.android.httpclient.config.ConnectionConfig getDefaultConnectionConfig() {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager$ConfigData r0 = r1.configData
            cz.msebera.android.httpclient.config.ConnectionConfig r0 = r0.getDefaultConnectionConfig()
            return r0
    }

    @Override
    public int getDefaultMaxPerRoute() {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.CPool r0 = r1.pool
            int r0 = r0.getDefaultMaxPerRoute()
            return r0
    }

    public cz.msebera.android.httpclient.config.SocketConfig getDefaultSocketConfig() {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager$ConfigData r0 = r1.configData
            cz.msebera.android.httpclient.config.SocketConfig r0 = r0.getDefaultSocketConfig()
            return r0
    }

    public int getMaxPerRoute(cz.msebera.android.httpclient.conn.routing.HttpRoute r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.CPool r0 = r1.pool
            int r2 = r0.getMaxPerRoute(r2)
            return r2
    }

    @Override
    public int getMaxPerRoute(cz.msebera.android.httpclient.conn.routing.HttpRoute r1) {
            r0 = this;
            cz.msebera.android.httpclient.conn.routing.HttpRoute r1 = (cz.msebera.android.httpclient.conn.routing.HttpRoute) r1
            int r1 = r0.getMaxPerRoute(r1)
            return r1
    }

    @Override
    public int getMaxTotal() {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.CPool r0 = r1.pool
            int r0 = r0.getMaxTotal()
            return r0
    }

    public java.util.Set<cz.msebera.android.httpclient.conn.routing.HttpRoute> getRoutes() {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.CPool r0 = r1.pool
            java.util.Set r0 = r0.getRoutes()
            return r0
    }

    public cz.msebera.android.httpclient.config.SocketConfig getSocketConfig(cz.msebera.android.httpclient.HttpHost r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager$ConfigData r0 = r1.configData
            cz.msebera.android.httpclient.config.SocketConfig r2 = r0.getSocketConfig(r2)
            return r2
    }

    public cz.msebera.android.httpclient.pool.PoolStats getStats(cz.msebera.android.httpclient.conn.routing.HttpRoute r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.CPool r0 = r1.pool
            cz.msebera.android.httpclient.pool.PoolStats r2 = r0.getStats(r2)
            return r2
    }

    @Override
    public cz.msebera.android.httpclient.pool.PoolStats getStats(cz.msebera.android.httpclient.conn.routing.HttpRoute r1) {
            r0 = this;
            cz.msebera.android.httpclient.conn.routing.HttpRoute r1 = (cz.msebera.android.httpclient.conn.routing.HttpRoute) r1
            cz.msebera.android.httpclient.pool.PoolStats r1 = r0.getStats(r1)
            return r1
    }

    @Override
    public cz.msebera.android.httpclient.pool.PoolStats getTotalStats() {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.CPool r0 = r1.pool
            cz.msebera.android.httpclient.pool.PoolStats r0 = r0.getTotalStats()
            return r0
    }

    public int getValidateAfterInactivity() {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.CPool r0 = r1.pool
            int r0 = r0.getValidateAfterInactivity()
            return r0
    }

    protected cz.msebera.android.httpclient.HttpClientConnection leaseConnection(java.util.concurrent.Future<cz.msebera.android.httpclient.impl.conn.CPoolEntry> r1, long r2, java.util.concurrent.TimeUnit r4) throws java.lang.InterruptedException, java.util.concurrent.ExecutionException, cz.msebera.android.httpclient.conn.ConnectionPoolTimeoutException {
            r0 = this;
            java.lang.Object r2 = r1.get(r2, r4)     // Catch: java.util.concurrent.TimeoutException -> L56
            cz.msebera.android.httpclient.impl.conn.CPoolEntry r2 = (cz.msebera.android.httpclient.impl.conn.CPoolEntry) r2     // Catch: java.util.concurrent.TimeoutException -> L56
            if (r2 == 0) goto L50
            boolean r1 = r1.isCancelled()     // Catch: java.util.concurrent.TimeoutException -> L56
            if (r1 != 0) goto L50
            java.lang.Object r1 = r2.getConnection()     // Catch: java.util.concurrent.TimeoutException -> L56
            if (r1 == 0) goto L16
            r1 = 1
            goto L17
        L16:
            r1 = 0
        L17:
            java.lang.String r3 = "Pool entry with no connection"
            cz.msebera.android.httpclient.util.Asserts.check(r1, r3)     // Catch: java.util.concurrent.TimeoutException -> L56
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r0.log     // Catch: java.util.concurrent.TimeoutException -> L56
            boolean r1 = r1.isDebugEnabled()     // Catch: java.util.concurrent.TimeoutException -> L56
            if (r1 == 0) goto L4b
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r0.log     // Catch: java.util.concurrent.TimeoutException -> L56
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.util.concurrent.TimeoutException -> L56
            r3.<init>()     // Catch: java.util.concurrent.TimeoutException -> L56
            java.lang.String r4 = "Connection leased: "
            r3.append(r4)     // Catch: java.util.concurrent.TimeoutException -> L56
            java.lang.String r4 = r0.format(r2)     // Catch: java.util.concurrent.TimeoutException -> L56
            r3.append(r4)     // Catch: java.util.concurrent.TimeoutException -> L56
            java.lang.Object r4 = r2.getRoute()     // Catch: java.util.concurrent.TimeoutException -> L56
            cz.msebera.android.httpclient.conn.routing.HttpRoute r4 = (cz.msebera.android.httpclient.conn.routing.HttpRoute) r4     // Catch: java.util.concurrent.TimeoutException -> L56
            java.lang.String r4 = r0.formatStats(r4)     // Catch: java.util.concurrent.TimeoutException -> L56
            r3.append(r4)     // Catch: java.util.concurrent.TimeoutException -> L56
            java.lang.String r3 = r3.toString()     // Catch: java.util.concurrent.TimeoutException -> L56
            r1.debug(r3)     // Catch: java.util.concurrent.TimeoutException -> L56
        L4b:
            cz.msebera.android.httpclient.HttpClientConnection r1 = cz.msebera.android.httpclient.impl.conn.CPoolProxy.newProxy(r2)     // Catch: java.util.concurrent.TimeoutException -> L56
            return r1
        L50:
            java.lang.InterruptedException r1 = new java.lang.InterruptedException     // Catch: java.util.concurrent.TimeoutException -> L56
            r1.<init>()     // Catch: java.util.concurrent.TimeoutException -> L56
            throw r1     // Catch: java.util.concurrent.TimeoutException -> L56
        L56:
            cz.msebera.android.httpclient.conn.ConnectionPoolTimeoutException r1 = new cz.msebera.android.httpclient.conn.ConnectionPoolTimeoutException
            java.lang.String r2 = "Timeout waiting for connection from pool"
            r1.<init>(r2)
            throw r1
    }

    @Override
    public void releaseConnection(cz.msebera.android.httpclient.HttpClientConnection r7, java.lang.Object r8, long r9, java.util.concurrent.TimeUnit r11) {
            r6 = this;
            java.lang.String r0 = "Managed connection"
            cz.msebera.android.httpclient.util.Args.notNull(r7, r0)
            monitor-enter(r7)
            cz.msebera.android.httpclient.impl.conn.CPoolEntry r0 = cz.msebera.android.httpclient.impl.conn.CPoolProxy.detach(r7)     // Catch: java.lang.Throwable -> L103
            if (r0 != 0) goto Le
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L103
            return
        Le:
            java.lang.Object r1 = r0.getConnection()     // Catch: java.lang.Throwable -> L103
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r1 = (cz.msebera.android.httpclient.conn.ManagedHttpClientConnection) r1     // Catch: java.lang.Throwable -> L103
            r2 = 1
            r3 = 0
            boolean r4 = r1.isOpen()     // Catch: java.lang.Throwable -> Lbf
            if (r4 == 0) goto L7b
            if (r11 == 0) goto L1f
            goto L21
        L1f:
            java.util.concurrent.TimeUnit r11 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.Throwable -> Lbf
        L21:
            r0.setState(r8)     // Catch: java.lang.Throwable -> Lbf
            r0.updateExpiry(r9, r11)     // Catch: java.lang.Throwable -> Lbf
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r8 = r6.log     // Catch: java.lang.Throwable -> Lbf
            boolean r8 = r8.isDebugEnabled()     // Catch: java.lang.Throwable -> Lbf
            if (r8 == 0) goto L7b
            r4 = 0
            int r8 = (r9 > r4 ? 1 : (r9 == r4 ? 0 : -1))
            if (r8 <= 0) goto L57
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbf
            r8.<init>()     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r4 = "for "
            r8.append(r4)     // Catch: java.lang.Throwable -> Lbf
            long r9 = r11.toMillis(r9)     // Catch: java.lang.Throwable -> Lbf
            double r9 = (double) r9     // Catch: java.lang.Throwable -> Lbf
            r4 = 4652007308841189376(0x408f400000000000, double:1000.0)
            double r9 = r9 / r4
            r8.append(r9)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r9 = " seconds"
            r8.append(r9)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lbf
            goto L59
        L57:
            java.lang.String r8 = "indefinitely"
        L59:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r9 = r6.log     // Catch: java.lang.Throwable -> Lbf
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbf
            r10.<init>()     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r11 = "Connection "
            r10.append(r11)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r11 = r6.format(r0)     // Catch: java.lang.Throwable -> Lbf
            r10.append(r11)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r11 = " can be kept alive "
            r10.append(r11)     // Catch: java.lang.Throwable -> Lbf
            r10.append(r8)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r8 = r10.toString()     // Catch: java.lang.Throwable -> Lbf
            r9.debug(r8)     // Catch: java.lang.Throwable -> Lbf
        L7b:
            cz.msebera.android.httpclient.impl.conn.CPool r8 = r6.pool     // Catch: java.lang.Throwable -> L103
            boolean r9 = r1.isOpen()     // Catch: java.lang.Throwable -> L103
            if (r9 == 0) goto L8a
            boolean r9 = r0.isRouteComplete()     // Catch: java.lang.Throwable -> L103
            if (r9 == 0) goto L8a
            goto L8b
        L8a:
            r2 = 0
        L8b:
            r8.release(r0, r2)     // Catch: java.lang.Throwable -> L103
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r8 = r6.log     // Catch: java.lang.Throwable -> L103
            boolean r8 = r8.isDebugEnabled()     // Catch: java.lang.Throwable -> L103
            if (r8 == 0) goto Lbd
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r8 = r6.log     // Catch: java.lang.Throwable -> L103
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L103
            r9.<init>()     // Catch: java.lang.Throwable -> L103
            java.lang.String r10 = "Connection released: "
            r9.append(r10)     // Catch: java.lang.Throwable -> L103
            java.lang.String r10 = r6.format(r0)     // Catch: java.lang.Throwable -> L103
            r9.append(r10)     // Catch: java.lang.Throwable -> L103
            java.lang.Object r10 = r0.getRoute()     // Catch: java.lang.Throwable -> L103
            cz.msebera.android.httpclient.conn.routing.HttpRoute r10 = (cz.msebera.android.httpclient.conn.routing.HttpRoute) r10     // Catch: java.lang.Throwable -> L103
            java.lang.String r10 = r6.formatStats(r10)     // Catch: java.lang.Throwable -> L103
            r9.append(r10)     // Catch: java.lang.Throwable -> L103
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L103
            r8.debug(r9)     // Catch: java.lang.Throwable -> L103
        Lbd:
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L103
            return
        Lbf:
            r8 = move-exception
            cz.msebera.android.httpclient.impl.conn.CPool r9 = r6.pool     // Catch: java.lang.Throwable -> L103
            boolean r10 = r1.isOpen()     // Catch: java.lang.Throwable -> L103
            if (r10 == 0) goto Lcf
            boolean r10 = r0.isRouteComplete()     // Catch: java.lang.Throwable -> L103
            if (r10 == 0) goto Lcf
            goto Ld0
        Lcf:
            r2 = 0
        Ld0:
            r9.release(r0, r2)     // Catch: java.lang.Throwable -> L103
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r9 = r6.log     // Catch: java.lang.Throwable -> L103
            boolean r9 = r9.isDebugEnabled()     // Catch: java.lang.Throwable -> L103
            if (r9 == 0) goto L102
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r9 = r6.log     // Catch: java.lang.Throwable -> L103
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L103
            r10.<init>()     // Catch: java.lang.Throwable -> L103
            java.lang.String r11 = "Connection released: "
            r10.append(r11)     // Catch: java.lang.Throwable -> L103
            java.lang.String r11 = r6.format(r0)     // Catch: java.lang.Throwable -> L103
            r10.append(r11)     // Catch: java.lang.Throwable -> L103
            java.lang.Object r11 = r0.getRoute()     // Catch: java.lang.Throwable -> L103
            cz.msebera.android.httpclient.conn.routing.HttpRoute r11 = (cz.msebera.android.httpclient.conn.routing.HttpRoute) r11     // Catch: java.lang.Throwable -> L103
            java.lang.String r11 = r6.formatStats(r11)     // Catch: java.lang.Throwable -> L103
            r10.append(r11)     // Catch: java.lang.Throwable -> L103
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L103
            r9.debug(r10)     // Catch: java.lang.Throwable -> L103
        L102:
            throw r8     // Catch: java.lang.Throwable -> L103
        L103:
            r8 = move-exception
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L103
            throw r8
    }

    @Override
    public cz.msebera.android.httpclient.conn.ConnectionRequest requestConnection(cz.msebera.android.httpclient.conn.routing.HttpRoute r4, java.lang.Object r5) {
            r3 = this;
            java.lang.String r0 = "HTTP route"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            boolean r0 = r0.isDebugEnabled()
            if (r0 == 0) goto L2e
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Connection request: "
            r1.append(r2)
            java.lang.String r2 = r3.format(r4, r5)
            r1.append(r2)
            java.lang.String r2 = r3.formatStats(r4)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.debug(r1)
        L2e:
            cz.msebera.android.httpclient.impl.conn.CPool r0 = r3.pool
            r1 = 0
            java.util.concurrent.Future r4 = r0.lease(r4, r5, r1)
            cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager$1 r5 = new cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager$1
            r5.<init>(r3, r4)
            return r5
    }

    @Override
    public void routeComplete(cz.msebera.android.httpclient.HttpClientConnection r1, cz.msebera.android.httpclient.conn.routing.HttpRoute r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws java.io.IOException {
            r0 = this;
            java.lang.String r3 = "Managed Connection"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r3)
            java.lang.String r3 = "HTTP route"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r3)
            monitor-enter(r1)
            cz.msebera.android.httpclient.impl.conn.CPoolEntry r2 = cz.msebera.android.httpclient.impl.conn.CPoolProxy.getPoolEntry(r1)     // Catch: java.lang.Throwable -> L14
            r2.markRouteComplete()     // Catch: java.lang.Throwable -> L14
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L14
            return
        L14:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L14
            throw r2
    }

    public void setConnectionConfig(cz.msebera.android.httpclient.HttpHost r2, cz.msebera.android.httpclient.config.ConnectionConfig r3) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager$ConfigData r0 = r1.configData
            r0.setConnectionConfig(r2, r3)
            return
    }

    public void setDefaultConnectionConfig(cz.msebera.android.httpclient.config.ConnectionConfig r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager$ConfigData r0 = r1.configData
            r0.setDefaultConnectionConfig(r2)
            return
    }

    @Override
    public void setDefaultMaxPerRoute(int r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.CPool r0 = r1.pool
            r0.setDefaultMaxPerRoute(r2)
            return
    }

    public void setDefaultSocketConfig(cz.msebera.android.httpclient.config.SocketConfig r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager$ConfigData r0 = r1.configData
            r0.setDefaultSocketConfig(r2)
            return
    }

    public void setMaxPerRoute(cz.msebera.android.httpclient.conn.routing.HttpRoute r2, int r3) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.CPool r0 = r1.pool
            r0.setMaxPerRoute(r2, r3)
            return
    }

    @Override
    public void setMaxPerRoute(cz.msebera.android.httpclient.conn.routing.HttpRoute r1, int r2) {
            r0 = this;
            cz.msebera.android.httpclient.conn.routing.HttpRoute r1 = (cz.msebera.android.httpclient.conn.routing.HttpRoute) r1
            r0.setMaxPerRoute(r1, r2)
            return
    }

    @Override
    public void setMaxTotal(int r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.CPool r0 = r1.pool
            r0.setMaxTotal(r2)
            return
    }

    public void setSocketConfig(cz.msebera.android.httpclient.HttpHost r2, cz.msebera.android.httpclient.config.SocketConfig r3) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager$ConfigData r0 = r1.configData
            r0.setSocketConfig(r2, r3)
            return
    }

    public void setValidateAfterInactivity(int r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.CPool r0 = r1.pool
            r0.setValidateAfterInactivity(r2)
            return
    }

    @Override
    public void shutdown() {
            r3 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r3.isShutDown
            r1 = 0
            r2 = 1
            boolean r0 = r0.compareAndSet(r1, r2)
            if (r0 == 0) goto L26
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            java.lang.String r1 = "Connection manager is shutting down"
            r0.debug(r1)
            cz.msebera.android.httpclient.impl.conn.CPool r0 = r3.pool     // Catch: java.io.IOException -> L17
            r0.shutdown()     // Catch: java.io.IOException -> L17
            goto L1f
        L17:
            r0 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r3.log
            java.lang.String r2 = "I/O exception shutting down connection manager"
            r1.debug(r2, r0)
        L1f:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            java.lang.String r1 = "Connection manager shut down"
            r0.debug(r1)
        L26:
            return
    }

    @Override
    public void upgrade(cz.msebera.android.httpclient.HttpClientConnection r2, cz.msebera.android.httpclient.conn.routing.HttpRoute r3, cz.msebera.android.httpclient.protocol.HttpContext r4) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "Managed Connection"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "HTTP route"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            monitor-enter(r2)
            cz.msebera.android.httpclient.impl.conn.CPoolEntry r0 = cz.msebera.android.httpclient.impl.conn.CPoolProxy.getPoolEntry(r2)     // Catch: java.lang.Throwable -> L20
            java.lang.Object r0 = r0.getConnection()     // Catch: java.lang.Throwable -> L20
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = (cz.msebera.android.httpclient.conn.ManagedHttpClientConnection) r0     // Catch: java.lang.Throwable -> L20
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L20
            cz.msebera.android.httpclient.conn.HttpClientConnectionOperator r2 = r1.connectionOperator
            cz.msebera.android.httpclient.HttpHost r3 = r3.getTargetHost()
            r2.upgrade(r0, r3, r4)
            return
        L20:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L20
            throw r3
    }
}
