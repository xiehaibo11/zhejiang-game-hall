package cz.msebera.android.httpclient.impl.bootstrap;

public class HttpServer {
    private final cz.msebera.android.httpclient.HttpConnectionFactory<? extends cz.msebera.android.httpclient.impl.DefaultBHttpServerConnection> connectionFactory;
    private final cz.msebera.android.httpclient.ExceptionLogger exceptionLogger;
    private final cz.msebera.android.httpclient.protocol.HttpService httpService;
    private final java.net.InetAddress ifAddress;
    private final java.util.concurrent.ExecutorService listenerExecutorService;
    private final int port;
    private volatile cz.msebera.android.httpclient.impl.bootstrap.RequestListener requestListener;
    private volatile java.net.ServerSocket serverSocket;
    private final javax.net.ServerSocketFactory serverSocketFactory;
    private final cz.msebera.android.httpclient.config.SocketConfig socketConfig;
    private final cz.msebera.android.httpclient.impl.bootstrap.SSLServerSetupHandler sslSetupHandler;
    private final java.util.concurrent.atomic.AtomicReference<cz.msebera.android.httpclient.impl.bootstrap.HttpServer.Status> status;
    private final java.util.concurrent.ExecutorService workerExecutorService;
    private final java.lang.ThreadGroup workerThreads;

    enum Status extends java.lang.Enum<cz.msebera.android.httpclient.impl.bootstrap.HttpServer.Status> {
        private static final cz.msebera.android.httpclient.impl.bootstrap.HttpServer.Status[] $VALUES = null;
        public static final cz.msebera.android.httpclient.impl.bootstrap.HttpServer.Status ACTIVE = null;
        public static final cz.msebera.android.httpclient.impl.bootstrap.HttpServer.Status READY = null;
        public static final cz.msebera.android.httpclient.impl.bootstrap.HttpServer.Status STOPPING = null;

        static {
                cz.msebera.android.httpclient.impl.bootstrap.HttpServer$Status r0 = new cz.msebera.android.httpclient.impl.bootstrap.HttpServer$Status
                r1 = 0
                java.lang.String r2 = "READY"
                r0.<init>(r2, r1)
                cz.msebera.android.httpclient.impl.bootstrap.HttpServer.Status.READY = r0
                cz.msebera.android.httpclient.impl.bootstrap.HttpServer$Status r0 = new cz.msebera.android.httpclient.impl.bootstrap.HttpServer$Status
                r2 = 1
                java.lang.String r3 = "ACTIVE"
                r0.<init>(r3, r2)
                cz.msebera.android.httpclient.impl.bootstrap.HttpServer.Status.ACTIVE = r0
                cz.msebera.android.httpclient.impl.bootstrap.HttpServer$Status r0 = new cz.msebera.android.httpclient.impl.bootstrap.HttpServer$Status
                r3 = 2
                java.lang.String r4 = "STOPPING"
                r0.<init>(r4, r3)
                cz.msebera.android.httpclient.impl.bootstrap.HttpServer.Status.STOPPING = r0
                r0 = 3
                cz.msebera.android.httpclient.impl.bootstrap.HttpServer$Status[] r0 = new cz.msebera.android.httpclient.impl.bootstrap.HttpServer.Status[r0]
                cz.msebera.android.httpclient.impl.bootstrap.HttpServer$Status r4 = cz.msebera.android.httpclient.impl.bootstrap.HttpServer.Status.READY
                r0[r1] = r4
                cz.msebera.android.httpclient.impl.bootstrap.HttpServer$Status r1 = cz.msebera.android.httpclient.impl.bootstrap.HttpServer.Status.ACTIVE
                r0[r2] = r1
                cz.msebera.android.httpclient.impl.bootstrap.HttpServer$Status r1 = cz.msebera.android.httpclient.impl.bootstrap.HttpServer.Status.STOPPING
                r0[r3] = r1
                cz.msebera.android.httpclient.impl.bootstrap.HttpServer.Status.$VALUES = r0
                return
        }

        Status(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static cz.msebera.android.httpclient.impl.bootstrap.HttpServer.Status valueOf(java.lang.String r1) {
                java.lang.Class<cz.msebera.android.httpclient.impl.bootstrap.HttpServer$Status> r0 = cz.msebera.android.httpclient.impl.bootstrap.HttpServer.Status.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                cz.msebera.android.httpclient.impl.bootstrap.HttpServer$Status r1 = (cz.msebera.android.httpclient.impl.bootstrap.HttpServer.Status) r1
                return r1
        }

        public static cz.msebera.android.httpclient.impl.bootstrap.HttpServer.Status[] values() {
                cz.msebera.android.httpclient.impl.bootstrap.HttpServer$Status[] r0 = cz.msebera.android.httpclient.impl.bootstrap.HttpServer.Status.$VALUES
                java.lang.Object r0 = r0.clone()
                cz.msebera.android.httpclient.impl.bootstrap.HttpServer$Status[] r0 = (cz.msebera.android.httpclient.impl.bootstrap.HttpServer.Status[]) r0
                return r0
        }
    }

    HttpServer(int r1, java.net.InetAddress r2, cz.msebera.android.httpclient.config.SocketConfig r3, javax.net.ServerSocketFactory r4, cz.msebera.android.httpclient.protocol.HttpService r5, cz.msebera.android.httpclient.HttpConnectionFactory<? extends cz.msebera.android.httpclient.impl.DefaultBHttpServerConnection> r6, cz.msebera.android.httpclient.impl.bootstrap.SSLServerSetupHandler r7, cz.msebera.android.httpclient.ExceptionLogger r8) {
            r0 = this;
            r0.<init>()
            r0.port = r1
            r0.ifAddress = r2
            r0.socketConfig = r3
            r0.serverSocketFactory = r4
            r0.httpService = r5
            r0.connectionFactory = r6
            r0.sslSetupHandler = r7
            r0.exceptionLogger = r8
            cz.msebera.android.httpclient.impl.bootstrap.ThreadFactoryImpl r1 = new cz.msebera.android.httpclient.impl.bootstrap.ThreadFactoryImpl
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "HTTP-listener-"
            r2.append(r3)
            int r3 = r0.port
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            java.util.concurrent.ExecutorService r1 = java.util.concurrent.Executors.newSingleThreadExecutor(r1)
            r0.listenerExecutorService = r1
            java.lang.ThreadGroup r1 = new java.lang.ThreadGroup
            java.lang.String r2 = "HTTP-workers"
            r1.<init>(r2)
            r0.workerThreads = r1
            cz.msebera.android.httpclient.impl.bootstrap.ThreadFactoryImpl r1 = new cz.msebera.android.httpclient.impl.bootstrap.ThreadFactoryImpl
            java.lang.ThreadGroup r2 = r0.workerThreads
            java.lang.String r3 = "HTTP-worker"
            r1.<init>(r3, r2)
            java.util.concurrent.ExecutorService r1 = java.util.concurrent.Executors.newCachedThreadPool(r1)
            r0.workerExecutorService = r1
            java.util.concurrent.atomic.AtomicReference r1 = new java.util.concurrent.atomic.AtomicReference
            cz.msebera.android.httpclient.impl.bootstrap.HttpServer$Status r2 = cz.msebera.android.httpclient.impl.bootstrap.HttpServer.Status.READY
            r1.<init>(r2)
            r0.status = r1
            return
    }

    public void awaitTermination(long r2, java.util.concurrent.TimeUnit r4) throws java.lang.InterruptedException {
            r1 = this;
            java.util.concurrent.ExecutorService r0 = r1.workerExecutorService
            r0.awaitTermination(r2, r4)
            return
    }

    public java.net.InetAddress getInetAddress() {
            r1 = this;
            java.net.ServerSocket r0 = r1.serverSocket
            if (r0 == 0) goto L9
            java.net.InetAddress r0 = r0.getInetAddress()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public int getLocalPort() {
            r1 = this;
            java.net.ServerSocket r0 = r1.serverSocket
            if (r0 == 0) goto L9
            int r0 = r0.getLocalPort()
            return r0
        L9:
            r0 = -1
            return r0
    }

    public void shutdown(long r4, java.util.concurrent.TimeUnit r6) {
            r3 = this;
            r3.stop()
            r0 = 0
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 <= 0) goto L14
            r3.awaitTermination(r4, r6)     // Catch: java.lang.InterruptedException -> Ld
            goto L14
        Ld:
            java.lang.Thread r4 = java.lang.Thread.currentThread()
            r4.interrupt()
        L14:
            java.util.concurrent.ExecutorService r4 = r3.workerExecutorService
            java.util.List r4 = r4.shutdownNow()
            java.util.Iterator r4 = r4.iterator()
        L1e:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L3f
            java.lang.Object r5 = r4.next()
            java.lang.Runnable r5 = (java.lang.Runnable) r5
            boolean r6 = r5 instanceof cz.msebera.android.httpclient.impl.bootstrap.Worker
            if (r6 == 0) goto L1e
            cz.msebera.android.httpclient.impl.bootstrap.Worker r5 = (cz.msebera.android.httpclient.impl.bootstrap.Worker) r5
            cz.msebera.android.httpclient.HttpServerConnection r5 = r5.getConnection()
            r5.shutdown()     // Catch: java.io.IOException -> L38
            goto L1e
        L38:
            r5 = move-exception
            cz.msebera.android.httpclient.ExceptionLogger r6 = r3.exceptionLogger
            r6.log(r5)
            goto L1e
        L3f:
            return
    }

    public void start() throws java.io.IOException {
            r9 = this;
            java.util.concurrent.atomic.AtomicReference<cz.msebera.android.httpclient.impl.bootstrap.HttpServer$Status> r0 = r9.status
            cz.msebera.android.httpclient.impl.bootstrap.HttpServer$Status r1 = cz.msebera.android.httpclient.impl.bootstrap.HttpServer.Status.READY
            cz.msebera.android.httpclient.impl.bootstrap.HttpServer$Status r2 = cz.msebera.android.httpclient.impl.bootstrap.HttpServer.Status.ACTIVE
            boolean r0 = r0.compareAndSet(r1, r2)
            if (r0 == 0) goto L6a
            javax.net.ServerSocketFactory r0 = r9.serverSocketFactory
            int r1 = r9.port
            cz.msebera.android.httpclient.config.SocketConfig r2 = r9.socketConfig
            int r2 = r2.getBacklogSize()
            java.net.InetAddress r3 = r9.ifAddress
            java.net.ServerSocket r0 = r0.createServerSocket(r1, r2, r3)
            r9.serverSocket = r0
            java.net.ServerSocket r0 = r9.serverSocket
            cz.msebera.android.httpclient.config.SocketConfig r1 = r9.socketConfig
            boolean r1 = r1.isSoReuseAddress()
            r0.setReuseAddress(r1)
            cz.msebera.android.httpclient.config.SocketConfig r0 = r9.socketConfig
            int r0 = r0.getRcvBufSize()
            if (r0 <= 0) goto L3c
            java.net.ServerSocket r0 = r9.serverSocket
            cz.msebera.android.httpclient.config.SocketConfig r1 = r9.socketConfig
            int r1 = r1.getRcvBufSize()
            r0.setReceiveBufferSize(r1)
        L3c:
            cz.msebera.android.httpclient.impl.bootstrap.SSLServerSetupHandler r0 = r9.sslSetupHandler
            if (r0 == 0) goto L4f
            java.net.ServerSocket r0 = r9.serverSocket
            boolean r0 = r0 instanceof javax.net.ssl.SSLServerSocket
            if (r0 == 0) goto L4f
            cz.msebera.android.httpclient.impl.bootstrap.SSLServerSetupHandler r0 = r9.sslSetupHandler
            java.net.ServerSocket r1 = r9.serverSocket
            javax.net.ssl.SSLServerSocket r1 = (javax.net.ssl.SSLServerSocket) r1
            r0.initialize(r1)
        L4f:
            cz.msebera.android.httpclient.impl.bootstrap.RequestListener r0 = new cz.msebera.android.httpclient.impl.bootstrap.RequestListener
            cz.msebera.android.httpclient.config.SocketConfig r3 = r9.socketConfig
            java.net.ServerSocket r4 = r9.serverSocket
            cz.msebera.android.httpclient.protocol.HttpService r5 = r9.httpService
            cz.msebera.android.httpclient.HttpConnectionFactory<? extends cz.msebera.android.httpclient.impl.DefaultBHttpServerConnection> r6 = r9.connectionFactory
            cz.msebera.android.httpclient.ExceptionLogger r7 = r9.exceptionLogger
            java.util.concurrent.ExecutorService r8 = r9.workerExecutorService
            r2 = r0
            r2.<init>(r3, r4, r5, r6, r7, r8)
            r9.requestListener = r0
            java.util.concurrent.ExecutorService r0 = r9.listenerExecutorService
            cz.msebera.android.httpclient.impl.bootstrap.RequestListener r1 = r9.requestListener
            r0.execute(r1)
        L6a:
            return
    }

    public void stop() {
            r3 = this;
            java.util.concurrent.atomic.AtomicReference<cz.msebera.android.httpclient.impl.bootstrap.HttpServer$Status> r0 = r3.status
            cz.msebera.android.httpclient.impl.bootstrap.HttpServer$Status r1 = cz.msebera.android.httpclient.impl.bootstrap.HttpServer.Status.ACTIVE
            cz.msebera.android.httpclient.impl.bootstrap.HttpServer$Status r2 = cz.msebera.android.httpclient.impl.bootstrap.HttpServer.Status.STOPPING
            boolean r0 = r0.compareAndSet(r1, r2)
            if (r0 == 0) goto L29
            cz.msebera.android.httpclient.impl.bootstrap.RequestListener r0 = r3.requestListener
            if (r0 == 0) goto L1a
            r0.terminate()     // Catch: java.io.IOException -> L14
            goto L1a
        L14:
            r0 = move-exception
            cz.msebera.android.httpclient.ExceptionLogger r1 = r3.exceptionLogger
            r1.log(r0)
        L1a:
            java.lang.ThreadGroup r0 = r3.workerThreads
            r0.interrupt()
            java.util.concurrent.ExecutorService r0 = r3.listenerExecutorService
            r0.shutdown()
            java.util.concurrent.ExecutorService r0 = r3.workerExecutorService
            r0.shutdown()
        L29:
            return
    }
}
