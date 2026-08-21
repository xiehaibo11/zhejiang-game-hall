package cz.msebera.android.httpclient.impl.bootstrap;

public class ServerBootstrap {
    private cz.msebera.android.httpclient.ConnectionReuseStrategy connStrategy;
    private cz.msebera.android.httpclient.config.ConnectionConfig connectionConfig;
    private cz.msebera.android.httpclient.HttpConnectionFactory<? extends cz.msebera.android.httpclient.impl.DefaultBHttpServerConnection> connectionFactory;
    private cz.msebera.android.httpclient.ExceptionLogger exceptionLogger;
    private cz.msebera.android.httpclient.protocol.HttpExpectationVerifier expectationVerifier;
    private java.util.Map<java.lang.String, cz.msebera.android.httpclient.protocol.HttpRequestHandler> handlerMap;
    private cz.msebera.android.httpclient.protocol.HttpRequestHandlerMapper handlerMapper;
    private cz.msebera.android.httpclient.protocol.HttpProcessor httpProcessor;
    private int listenerPort;
    private java.net.InetAddress localAddress;
    private java.util.LinkedList<cz.msebera.android.httpclient.HttpRequestInterceptor> requestFirst;
    private java.util.LinkedList<cz.msebera.android.httpclient.HttpRequestInterceptor> requestLast;
    private cz.msebera.android.httpclient.HttpResponseFactory responseFactory;
    private java.util.LinkedList<cz.msebera.android.httpclient.HttpResponseInterceptor> responseFirst;
    private java.util.LinkedList<cz.msebera.android.httpclient.HttpResponseInterceptor> responseLast;
    private java.lang.String serverInfo;
    private javax.net.ServerSocketFactory serverSocketFactory;
    private cz.msebera.android.httpclient.config.SocketConfig socketConfig;
    private javax.net.ssl.SSLContext sslContext;
    private cz.msebera.android.httpclient.impl.bootstrap.SSLServerSetupHandler sslSetupHandler;

    private ServerBootstrap() {
            r0 = this;
            r0.<init>()
            return
    }

    public static cz.msebera.android.httpclient.impl.bootstrap.ServerBootstrap bootstrap() {
            cz.msebera.android.httpclient.impl.bootstrap.ServerBootstrap r0 = new cz.msebera.android.httpclient.impl.bootstrap.ServerBootstrap
            r0.<init>()
            return r0
    }

    public final cz.msebera.android.httpclient.impl.bootstrap.ServerBootstrap addInterceptorFirst(cz.msebera.android.httpclient.HttpRequestInterceptor r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return r1
        L3:
            java.util.LinkedList<cz.msebera.android.httpclient.HttpRequestInterceptor> r0 = r1.requestFirst
            if (r0 != 0) goto Le
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r1.requestFirst = r0
        Le:
            java.util.LinkedList<cz.msebera.android.httpclient.HttpRequestInterceptor> r0 = r1.requestFirst
            r0.addFirst(r2)
            return r1
    }

    public final cz.msebera.android.httpclient.impl.bootstrap.ServerBootstrap addInterceptorFirst(cz.msebera.android.httpclient.HttpResponseInterceptor r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return r1
        L3:
            java.util.LinkedList<cz.msebera.android.httpclient.HttpResponseInterceptor> r0 = r1.responseFirst
            if (r0 != 0) goto Le
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r1.responseFirst = r0
        Le:
            java.util.LinkedList<cz.msebera.android.httpclient.HttpResponseInterceptor> r0 = r1.responseFirst
            r0.addFirst(r2)
            return r1
    }

    public final cz.msebera.android.httpclient.impl.bootstrap.ServerBootstrap addInterceptorLast(cz.msebera.android.httpclient.HttpRequestInterceptor r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return r1
        L3:
            java.util.LinkedList<cz.msebera.android.httpclient.HttpRequestInterceptor> r0 = r1.requestLast
            if (r0 != 0) goto Le
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r1.requestLast = r0
        Le:
            java.util.LinkedList<cz.msebera.android.httpclient.HttpRequestInterceptor> r0 = r1.requestLast
            r0.addLast(r2)
            return r1
    }

    public final cz.msebera.android.httpclient.impl.bootstrap.ServerBootstrap addInterceptorLast(cz.msebera.android.httpclient.HttpResponseInterceptor r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return r1
        L3:
            java.util.LinkedList<cz.msebera.android.httpclient.HttpResponseInterceptor> r0 = r1.responseLast
            if (r0 != 0) goto Le
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r1.responseLast = r0
        Le:
            java.util.LinkedList<cz.msebera.android.httpclient.HttpResponseInterceptor> r0 = r1.responseLast
            r0.addLast(r2)
            return r1
    }

    public cz.msebera.android.httpclient.impl.bootstrap.HttpServer create() {
            r17 = this;
            r0 = r17
            cz.msebera.android.httpclient.protocol.HttpProcessor r1 = r0.httpProcessor
            r2 = 0
            if (r1 != 0) goto L9a
            cz.msebera.android.httpclient.protocol.HttpProcessorBuilder r1 = cz.msebera.android.httpclient.protocol.HttpProcessorBuilder.create()
            java.util.LinkedList<cz.msebera.android.httpclient.HttpRequestInterceptor> r3 = r0.requestFirst
            if (r3 == 0) goto L23
            java.util.Iterator r3 = r3.iterator()
        L13:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L23
            java.lang.Object r4 = r3.next()
            cz.msebera.android.httpclient.HttpRequestInterceptor r4 = (cz.msebera.android.httpclient.HttpRequestInterceptor) r4
            r1.addFirst(r4)
            goto L13
        L23:
            java.util.LinkedList<cz.msebera.android.httpclient.HttpResponseInterceptor> r3 = r0.responseFirst
            if (r3 == 0) goto L3b
            java.util.Iterator r3 = r3.iterator()
        L2b:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L3b
            java.lang.Object r4 = r3.next()
            cz.msebera.android.httpclient.HttpResponseInterceptor r4 = (cz.msebera.android.httpclient.HttpResponseInterceptor) r4
            r1.addFirst(r4)
            goto L2b
        L3b:
            java.lang.String r3 = r0.serverInfo
            if (r3 != 0) goto L41
            java.lang.String r3 = "Apache-HttpCore/1.1"
        L41:
            r4 = 4
            cz.msebera.android.httpclient.HttpResponseInterceptor[] r4 = new cz.msebera.android.httpclient.HttpResponseInterceptor[r4]
            cz.msebera.android.httpclient.protocol.ResponseDate r5 = new cz.msebera.android.httpclient.protocol.ResponseDate
            r5.<init>()
            r4[r2] = r5
            r5 = 1
            cz.msebera.android.httpclient.protocol.ResponseServer r6 = new cz.msebera.android.httpclient.protocol.ResponseServer
            r6.<init>(r3)
            r4[r5] = r6
            r3 = 2
            cz.msebera.android.httpclient.protocol.ResponseContent r5 = new cz.msebera.android.httpclient.protocol.ResponseContent
            r5.<init>()
            r4[r3] = r5
            r3 = 3
            cz.msebera.android.httpclient.protocol.ResponseConnControl r5 = new cz.msebera.android.httpclient.protocol.ResponseConnControl
            r5.<init>()
            r4[r3] = r5
            r1.addAll(r4)
            java.util.LinkedList<cz.msebera.android.httpclient.HttpRequestInterceptor> r3 = r0.requestLast
            if (r3 == 0) goto L7e
            java.util.Iterator r3 = r3.iterator()
        L6e:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L7e
            java.lang.Object r4 = r3.next()
            cz.msebera.android.httpclient.HttpRequestInterceptor r4 = (cz.msebera.android.httpclient.HttpRequestInterceptor) r4
            r1.addLast(r4)
            goto L6e
        L7e:
            java.util.LinkedList<cz.msebera.android.httpclient.HttpResponseInterceptor> r3 = r0.responseLast
            if (r3 == 0) goto L96
            java.util.Iterator r3 = r3.iterator()
        L86:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L96
            java.lang.Object r4 = r3.next()
            cz.msebera.android.httpclient.HttpResponseInterceptor r4 = (cz.msebera.android.httpclient.HttpResponseInterceptor) r4
            r1.addLast(r4)
            goto L86
        L96:
            cz.msebera.android.httpclient.protocol.HttpProcessor r1 = r1.build()
        L9a:
            r4 = r1
            cz.msebera.android.httpclient.protocol.HttpRequestHandlerMapper r1 = r0.handlerMapper
            if (r1 != 0) goto Lcc
            cz.msebera.android.httpclient.protocol.UriHttpRequestHandlerMapper r1 = new cz.msebera.android.httpclient.protocol.UriHttpRequestHandlerMapper
            r1.<init>()
            java.util.Map<java.lang.String, cz.msebera.android.httpclient.protocol.HttpRequestHandler> r3 = r0.handlerMap
            if (r3 == 0) goto Lcc
            java.util.Set r3 = r3.entrySet()
            java.util.Iterator r3 = r3.iterator()
        Lb0:
            boolean r5 = r3.hasNext()
            if (r5 == 0) goto Lcc
            java.lang.Object r5 = r3.next()
            java.util.Map$Entry r5 = (java.util.Map.Entry) r5
            java.lang.Object r6 = r5.getKey()
            java.lang.String r6 = (java.lang.String) r6
            java.lang.Object r5 = r5.getValue()
            cz.msebera.android.httpclient.protocol.HttpRequestHandler r5 = (cz.msebera.android.httpclient.protocol.HttpRequestHandler) r5
            r1.register(r6, r5)
            goto Lb0
        Lcc:
            r7 = r1
            cz.msebera.android.httpclient.ConnectionReuseStrategy r1 = r0.connStrategy
            if (r1 != 0) goto Ld3
            cz.msebera.android.httpclient.impl.DefaultConnectionReuseStrategy r1 = cz.msebera.android.httpclient.impl.DefaultConnectionReuseStrategy.INSTANCE
        Ld3:
            r5 = r1
            cz.msebera.android.httpclient.HttpResponseFactory r1 = r0.responseFactory
            if (r1 != 0) goto Lda
            cz.msebera.android.httpclient.impl.DefaultHttpResponseFactory r1 = cz.msebera.android.httpclient.impl.DefaultHttpResponseFactory.INSTANCE
        Lda:
            r6 = r1
            cz.msebera.android.httpclient.protocol.HttpService r13 = new cz.msebera.android.httpclient.protocol.HttpService
            cz.msebera.android.httpclient.protocol.HttpExpectationVerifier r8 = r0.expectationVerifier
            r3 = r13
            r3.<init>(r4, r5, r6, r7, r8)
            javax.net.ServerSocketFactory r1 = r0.serverSocketFactory
            if (r1 != 0) goto Lf4
            javax.net.ssl.SSLContext r1 = r0.sslContext
            if (r1 == 0) goto Lf0
            javax.net.ssl.SSLServerSocketFactory r1 = r1.getServerSocketFactory()
            goto Lf4
        Lf0:
            javax.net.ServerSocketFactory r1 = javax.net.ServerSocketFactory.getDefault()
        Lf4:
            r12 = r1
            cz.msebera.android.httpclient.HttpConnectionFactory<? extends cz.msebera.android.httpclient.impl.DefaultBHttpServerConnection> r1 = r0.connectionFactory
            if (r1 != 0) goto L106
            cz.msebera.android.httpclient.config.ConnectionConfig r1 = r0.connectionConfig
            if (r1 == 0) goto L104
            cz.msebera.android.httpclient.impl.DefaultBHttpServerConnectionFactory r3 = new cz.msebera.android.httpclient.impl.DefaultBHttpServerConnectionFactory
            r3.<init>(r1)
            r14 = r3
            goto L107
        L104:
            cz.msebera.android.httpclient.impl.DefaultBHttpServerConnectionFactory r1 = cz.msebera.android.httpclient.impl.DefaultBHttpServerConnectionFactory.INSTANCE
        L106:
            r14 = r1
        L107:
            cz.msebera.android.httpclient.ExceptionLogger r1 = r0.exceptionLogger
            if (r1 != 0) goto L10d
            cz.msebera.android.httpclient.ExceptionLogger r1 = cz.msebera.android.httpclient.ExceptionLogger.NO_OP
        L10d:
            r16 = r1
            cz.msebera.android.httpclient.impl.bootstrap.HttpServer r1 = new cz.msebera.android.httpclient.impl.bootstrap.HttpServer
            int r3 = r0.listenerPort
            if (r3 <= 0) goto L117
            r9 = r3
            goto L118
        L117:
            r9 = 0
        L118:
            java.net.InetAddress r10 = r0.localAddress
            cz.msebera.android.httpclient.config.SocketConfig r2 = r0.socketConfig
            if (r2 == 0) goto L11f
            goto L121
        L11f:
            cz.msebera.android.httpclient.config.SocketConfig r2 = cz.msebera.android.httpclient.config.SocketConfig.DEFAULT
        L121:
            r11 = r2
            cz.msebera.android.httpclient.impl.bootstrap.SSLServerSetupHandler r15 = r0.sslSetupHandler
            r8 = r1
            r8.<init>(r9, r10, r11, r12, r13, r14, r15, r16)
            return r1
    }

    public final cz.msebera.android.httpclient.impl.bootstrap.ServerBootstrap registerHandler(java.lang.String r2, cz.msebera.android.httpclient.protocol.HttpRequestHandler r3) {
            r1 = this;
            if (r2 == 0) goto L15
            if (r3 != 0) goto L5
            goto L15
        L5:
            java.util.Map<java.lang.String, cz.msebera.android.httpclient.protocol.HttpRequestHandler> r0 = r1.handlerMap
            if (r0 != 0) goto L10
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.handlerMap = r0
        L10:
            java.util.Map<java.lang.String, cz.msebera.android.httpclient.protocol.HttpRequestHandler> r0 = r1.handlerMap
            r0.put(r2, r3)
        L15:
            return r1
    }

    public final cz.msebera.android.httpclient.impl.bootstrap.ServerBootstrap setConnectionConfig(cz.msebera.android.httpclient.config.ConnectionConfig r1) {
            r0 = this;
            r0.connectionConfig = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.bootstrap.ServerBootstrap setConnectionFactory(cz.msebera.android.httpclient.HttpConnectionFactory<? extends cz.msebera.android.httpclient.impl.DefaultBHttpServerConnection> r1) {
            r0 = this;
            r0.connectionFactory = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.bootstrap.ServerBootstrap setConnectionReuseStrategy(cz.msebera.android.httpclient.ConnectionReuseStrategy r1) {
            r0 = this;
            r0.connStrategy = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.bootstrap.ServerBootstrap setExceptionLogger(cz.msebera.android.httpclient.ExceptionLogger r1) {
            r0 = this;
            r0.exceptionLogger = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.bootstrap.ServerBootstrap setExpectationVerifier(cz.msebera.android.httpclient.protocol.HttpExpectationVerifier r1) {
            r0 = this;
            r0.expectationVerifier = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.bootstrap.ServerBootstrap setHandlerMapper(cz.msebera.android.httpclient.protocol.HttpRequestHandlerMapper r1) {
            r0 = this;
            r0.handlerMapper = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.bootstrap.ServerBootstrap setHttpProcessor(cz.msebera.android.httpclient.protocol.HttpProcessor r1) {
            r0 = this;
            r0.httpProcessor = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.bootstrap.ServerBootstrap setListenerPort(int r1) {
            r0 = this;
            r0.listenerPort = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.bootstrap.ServerBootstrap setLocalAddress(java.net.InetAddress r1) {
            r0 = this;
            r0.localAddress = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.bootstrap.ServerBootstrap setResponseFactory(cz.msebera.android.httpclient.HttpResponseFactory r1) {
            r0 = this;
            r0.responseFactory = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.bootstrap.ServerBootstrap setServerInfo(java.lang.String r1) {
            r0 = this;
            r0.serverInfo = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.bootstrap.ServerBootstrap setServerSocketFactory(javax.net.ServerSocketFactory r1) {
            r0 = this;
            r0.serverSocketFactory = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.bootstrap.ServerBootstrap setSocketConfig(cz.msebera.android.httpclient.config.SocketConfig r1) {
            r0 = this;
            r0.socketConfig = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.bootstrap.ServerBootstrap setSslContext(javax.net.ssl.SSLContext r1) {
            r0 = this;
            r0.sslContext = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.bootstrap.ServerBootstrap setSslSetupHandler(cz.msebera.android.httpclient.impl.bootstrap.SSLServerSetupHandler r1) {
            r0 = this;
            r0.sslSetupHandler = r1
            return r0
    }
}
