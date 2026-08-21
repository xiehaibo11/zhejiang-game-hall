package cz.msebera.android.httpclient.impl.bootstrap;

class RequestListener implements java.lang.Runnable {
    private final cz.msebera.android.httpclient.HttpConnectionFactory<? extends cz.msebera.android.httpclient.HttpServerConnection> connectionFactory;
    private final cz.msebera.android.httpclient.ExceptionLogger exceptionLogger;
    private final java.util.concurrent.ExecutorService executorService;
    private final cz.msebera.android.httpclient.protocol.HttpService httpService;
    private final java.net.ServerSocket serversocket;
    private final cz.msebera.android.httpclient.config.SocketConfig socketConfig;
    private final java.util.concurrent.atomic.AtomicBoolean terminated;

    public RequestListener(cz.msebera.android.httpclient.config.SocketConfig r1, java.net.ServerSocket r2, cz.msebera.android.httpclient.protocol.HttpService r3, cz.msebera.android.httpclient.HttpConnectionFactory<? extends cz.msebera.android.httpclient.HttpServerConnection> r4, cz.msebera.android.httpclient.ExceptionLogger r5, java.util.concurrent.ExecutorService r6) {
            r0 = this;
            r0.<init>()
            r0.socketConfig = r1
            r0.serversocket = r2
            r0.connectionFactory = r4
            r0.httpService = r3
            r0.exceptionLogger = r5
            r0.executorService = r6
            java.util.concurrent.atomic.AtomicBoolean r1 = new java.util.concurrent.atomic.AtomicBoolean
            r2 = 0
            r1.<init>(r2)
            r0.terminated = r1
            return
    }

    public boolean isTerminated() {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.terminated
            boolean r0 = r0.get()
            return r0
    }

    @Override
    public void run() {
            r4 = this;
        L0:
            boolean r0 = r4.isTerminated()     // Catch: java.lang.Exception -> L78
            if (r0 != 0) goto L7e
            boolean r0 = java.lang.Thread.interrupted()     // Catch: java.lang.Exception -> L78
            if (r0 != 0) goto L7e
            java.net.ServerSocket r0 = r4.serversocket     // Catch: java.lang.Exception -> L78
            java.net.Socket r0 = r0.accept()     // Catch: java.lang.Exception -> L78
            cz.msebera.android.httpclient.config.SocketConfig r1 = r4.socketConfig     // Catch: java.lang.Exception -> L78
            int r1 = r1.getSoTimeout()     // Catch: java.lang.Exception -> L78
            r0.setSoTimeout(r1)     // Catch: java.lang.Exception -> L78
            cz.msebera.android.httpclient.config.SocketConfig r1 = r4.socketConfig     // Catch: java.lang.Exception -> L78
            boolean r1 = r1.isSoKeepAlive()     // Catch: java.lang.Exception -> L78
            r0.setKeepAlive(r1)     // Catch: java.lang.Exception -> L78
            cz.msebera.android.httpclient.config.SocketConfig r1 = r4.socketConfig     // Catch: java.lang.Exception -> L78
            boolean r1 = r1.isTcpNoDelay()     // Catch: java.lang.Exception -> L78
            r0.setTcpNoDelay(r1)     // Catch: java.lang.Exception -> L78
            cz.msebera.android.httpclient.config.SocketConfig r1 = r4.socketConfig     // Catch: java.lang.Exception -> L78
            int r1 = r1.getRcvBufSize()     // Catch: java.lang.Exception -> L78
            if (r1 <= 0) goto L3e
            cz.msebera.android.httpclient.config.SocketConfig r1 = r4.socketConfig     // Catch: java.lang.Exception -> L78
            int r1 = r1.getRcvBufSize()     // Catch: java.lang.Exception -> L78
            r0.setReceiveBufferSize(r1)     // Catch: java.lang.Exception -> L78
        L3e:
            cz.msebera.android.httpclient.config.SocketConfig r1 = r4.socketConfig     // Catch: java.lang.Exception -> L78
            int r1 = r1.getSndBufSize()     // Catch: java.lang.Exception -> L78
            if (r1 <= 0) goto L4f
            cz.msebera.android.httpclient.config.SocketConfig r1 = r4.socketConfig     // Catch: java.lang.Exception -> L78
            int r1 = r1.getSndBufSize()     // Catch: java.lang.Exception -> L78
            r0.setSendBufferSize(r1)     // Catch: java.lang.Exception -> L78
        L4f:
            cz.msebera.android.httpclient.config.SocketConfig r1 = r4.socketConfig     // Catch: java.lang.Exception -> L78
            int r1 = r1.getSoLinger()     // Catch: java.lang.Exception -> L78
            if (r1 < 0) goto L61
            r1 = 1
            cz.msebera.android.httpclient.config.SocketConfig r2 = r4.socketConfig     // Catch: java.lang.Exception -> L78
            int r2 = r2.getSoLinger()     // Catch: java.lang.Exception -> L78
            r0.setSoLinger(r1, r2)     // Catch: java.lang.Exception -> L78
        L61:
            cz.msebera.android.httpclient.HttpConnectionFactory<? extends cz.msebera.android.httpclient.HttpServerConnection> r1 = r4.connectionFactory     // Catch: java.lang.Exception -> L78
            cz.msebera.android.httpclient.HttpConnection r0 = r1.createConnection(r0)     // Catch: java.lang.Exception -> L78
            cz.msebera.android.httpclient.HttpServerConnection r0 = (cz.msebera.android.httpclient.HttpServerConnection) r0     // Catch: java.lang.Exception -> L78
            cz.msebera.android.httpclient.impl.bootstrap.Worker r1 = new cz.msebera.android.httpclient.impl.bootstrap.Worker     // Catch: java.lang.Exception -> L78
            cz.msebera.android.httpclient.protocol.HttpService r2 = r4.httpService     // Catch: java.lang.Exception -> L78
            cz.msebera.android.httpclient.ExceptionLogger r3 = r4.exceptionLogger     // Catch: java.lang.Exception -> L78
            r1.<init>(r2, r0, r3)     // Catch: java.lang.Exception -> L78
            java.util.concurrent.ExecutorService r0 = r4.executorService     // Catch: java.lang.Exception -> L78
            r0.execute(r1)     // Catch: java.lang.Exception -> L78
            goto L0
        L78:
            r0 = move-exception
            cz.msebera.android.httpclient.ExceptionLogger r1 = r4.exceptionLogger
            r1.log(r0)
        L7e:
            return
    }

    public void terminate() throws java.io.IOException {
            r3 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r3.terminated
            r1 = 0
            r2 = 1
            boolean r0 = r0.compareAndSet(r1, r2)
            if (r0 == 0) goto Lf
            java.net.ServerSocket r0 = r3.serversocket
            r0.close()
        Lf:
            return
    }
}
