package com.mbridge.msdk.thrid.okhttp.internal.ws;

public final class RealWebSocket implements com.mbridge.msdk.thrid.okhttp.WebSocket, com.mbridge.msdk.thrid.okhttp.internal.ws.WebSocketReader.FrameCallback {
    static final boolean $assertionsDisabled = false;
    private static final long CANCEL_AFTER_CLOSE_MILLIS = 60000;
    private static final long MAX_QUEUE_SIZE = 16777216;
    private static final java.util.List<com.mbridge.msdk.thrid.okhttp.Protocol> ONLY_HTTP1 = null;
    private boolean awaitingPong;
    private com.mbridge.msdk.thrid.okhttp.Call call;
    private java.util.concurrent.ScheduledFuture<?> cancelFuture;
    private boolean enqueuedClose;
    private java.util.concurrent.ScheduledExecutorService executor;
    private boolean failed;
    private final java.lang.String key;
    final com.mbridge.msdk.thrid.okhttp.WebSocketListener listener;
    private final java.util.ArrayDeque<java.lang.Object> messageAndCloseQueue;
    private final com.mbridge.msdk.thrid.okhttp.Request originalRequest;
    private final long pingIntervalMillis;
    private final java.util.ArrayDeque<com.mbridge.msdk.thrid.okio.ByteString> pongQueue;
    private long queueSize;
    private final java.util.Random random;
    private com.mbridge.msdk.thrid.okhttp.internal.ws.WebSocketReader reader;
    private int receivedCloseCode;
    private java.lang.String receivedCloseReason;
    private int receivedPingCount;
    private int receivedPongCount;
    private int sentPingCount;
    private com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket.Streams streams;
    private com.mbridge.msdk.thrid.okhttp.internal.ws.WebSocketWriter writer;
    private final java.lang.Runnable writerRunnable;



    final class CancelRunnable implements java.lang.Runnable {
        final com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket this$0;

        CancelRunnable(com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r1 = this;
                com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket r0 = r1.this$0
                r0.cancel()
                return
        }
    }

    static final class Close {
        final long cancelAfterCloseMillis;
        final int code;
        final com.mbridge.msdk.thrid.okio.ByteString reason;

        Close(int r1, com.mbridge.msdk.thrid.okio.ByteString r2, long r3) {
                r0 = this;
                r0.<init>()
                r0.code = r1
                r0.reason = r2
                r0.cancelAfterCloseMillis = r3
                return
        }
    }

    static final class Message {
        final com.mbridge.msdk.thrid.okio.ByteString data;
        final int formatOpcode;

        Message(int r1, com.mbridge.msdk.thrid.okio.ByteString r2) {
                r0 = this;
                r0.<init>()
                r0.formatOpcode = r1
                r0.data = r2
                return
        }
    }

    private final class PingRunnable implements java.lang.Runnable {
        final com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket this$0;

        PingRunnable(com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r1 = this;
                com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket r0 = r1.this$0
                r0.writePingFrame()
                return
        }
    }

    public static abstract class Streams implements java.io.Closeable {
        public final boolean client;
        public final com.mbridge.msdk.thrid.okio.BufferedSink sink;
        public final com.mbridge.msdk.thrid.okio.BufferedSource source;

        public Streams(boolean r1, com.mbridge.msdk.thrid.okio.BufferedSource r2, com.mbridge.msdk.thrid.okio.BufferedSink r3) {
                r0 = this;
                r0.<init>()
                r0.client = r1
                r0.source = r2
                r0.sink = r3
                return
        }
    }

    static {
            com.mbridge.msdk.thrid.okhttp.Protocol r0 = com.mbridge.msdk.thrid.okhttp.Protocol.HTTP_1_1
            java.util.List r0 = java.util.Collections.singletonList(r0)
            com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket.ONLY_HTTP1 = r0
            return
    }

    public RealWebSocket(com.mbridge.msdk.thrid.okhttp.Request r3, com.mbridge.msdk.thrid.okhttp.WebSocketListener r4, java.util.Random r5, long r6) {
            r2 = this;
            r2.<init>()
            java.util.ArrayDeque r0 = new java.util.ArrayDeque
            r0.<init>()
            r2.pongQueue = r0
            java.util.ArrayDeque r0 = new java.util.ArrayDeque
            r0.<init>()
            r2.messageAndCloseQueue = r0
            r0 = -1
            r2.receivedCloseCode = r0
            java.lang.String r0 = r3.method()
            java.lang.String r1 = "GET"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L41
            r2.originalRequest = r3
            r2.listener = r4
            r2.random = r5
            r2.pingIntervalMillis = r6
            r3 = 16
            byte[] r3 = new byte[r3]
            r5.nextBytes(r3)
            com.mbridge.msdk.thrid.okio.ByteString r3 = com.mbridge.msdk.thrid.okio.ByteString.of(r3)
            java.lang.String r3 = r3.base64()
            r2.key = r3
            com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket$1 r3 = new com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket$1
            r3.<init>(r2)
            r2.writerRunnable = r3
            return
        L41:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Request must be GET: "
            r5.append(r6)
            java.lang.String r3 = r3.method()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.<init>(r3)
            throw r4
    }

    private void runWriter() {
            r2 = this;
            java.util.concurrent.ScheduledExecutorService r0 = r2.executor
            if (r0 == 0) goto L9
            java.lang.Runnable r1 = r2.writerRunnable
            r0.execute(r1)
        L9:
            return
    }

    private synchronized boolean send(com.mbridge.msdk.thrid.okio.ByteString r7, int r8) {
            r6 = this;
            monitor-enter(r6)
            boolean r0 = r6.failed     // Catch: java.lang.Throwable -> L3e
            r1 = 0
            if (r0 != 0) goto L3c
            boolean r0 = r6.enqueuedClose     // Catch: java.lang.Throwable -> L3e
            if (r0 == 0) goto Lb
            goto L3c
        Lb:
            long r2 = r6.queueSize     // Catch: java.lang.Throwable -> L3e
            int r0 = r7.size()     // Catch: java.lang.Throwable -> L3e
            long r4 = (long) r0     // Catch: java.lang.Throwable -> L3e
            long r2 = r2 + r4
            r4 = 16777216(0x1000000, double:8.289046E-317)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 <= 0) goto L22
            r7 = 1001(0x3e9, float:1.403E-42)
            r8 = 0
            r6.close(r7, r8)     // Catch: java.lang.Throwable -> L3e
            monitor-exit(r6)
            return r1
        L22:
            long r0 = r6.queueSize     // Catch: java.lang.Throwable -> L3e
            int r2 = r7.size()     // Catch: java.lang.Throwable -> L3e
            long r2 = (long) r2     // Catch: java.lang.Throwable -> L3e
            long r0 = r0 + r2
            r6.queueSize = r0     // Catch: java.lang.Throwable -> L3e
            java.util.ArrayDeque<java.lang.Object> r0 = r6.messageAndCloseQueue     // Catch: java.lang.Throwable -> L3e
            com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket$Message r1 = new com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket$Message     // Catch: java.lang.Throwable -> L3e
            r1.<init>(r8, r7)     // Catch: java.lang.Throwable -> L3e
            r0.add(r1)     // Catch: java.lang.Throwable -> L3e
            r6.runWriter()     // Catch: java.lang.Throwable -> L3e
            r7 = 1
            monitor-exit(r6)
            return r7
        L3c:
            monitor-exit(r6)
            return r1
        L3e:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    void awaitTermination(int r4, java.util.concurrent.TimeUnit r5) throws java.lang.InterruptedException {
            r3 = this;
            java.util.concurrent.ScheduledExecutorService r0 = r3.executor
            long r1 = (long) r4
            r0.awaitTermination(r1, r5)
            return
    }

    @Override
    public void cancel() {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.Call r0 = r1.call
            r0.cancel()
            return
    }

    void checkResponse(com.mbridge.msdk.thrid.okhttp.Response r6) throws java.net.ProtocolException {
            r5 = this;
            int r0 = r6.code()
            java.lang.String r1 = "'"
            r2 = 101(0x65, float:1.42E-43)
            if (r0 != r2) goto La6
            java.lang.String r0 = "Connection"
            java.lang.String r0 = r6.header(r0)
            java.lang.String r2 = "Upgrade"
            boolean r3 = r2.equalsIgnoreCase(r0)
            if (r3 == 0) goto L8c
            java.lang.String r0 = r6.header(r2)
            java.lang.String r2 = "websocket"
            boolean r2 = r2.equalsIgnoreCase(r0)
            if (r2 == 0) goto L72
            java.lang.String r0 = "Sec-WebSocket-Accept"
            java.lang.String r6 = r6.header(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r5.key
            r0.append(r2)
            java.lang.String r2 = "258EAFA5-E914-47DA-95CA-C5AB0DC85B11"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.thrid.okio.ByteString r0 = com.mbridge.msdk.thrid.okio.ByteString.encodeUtf8(r0)
            com.mbridge.msdk.thrid.okio.ByteString r0 = r0.sha1()
            java.lang.String r0 = r0.base64()
            boolean r2 = r0.equals(r6)
            if (r2 == 0) goto L50
            return
        L50:
            java.net.ProtocolException r2 = new java.net.ProtocolException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Expected 'Sec-WebSocket-Accept' header value '"
            r3.append(r4)
            r3.append(r0)
            java.lang.String r0 = "' but was '"
            r3.append(r0)
            r3.append(r6)
            r3.append(r1)
            java.lang.String r6 = r3.toString()
            r2.<init>(r6)
            throw r2
        L72:
            java.net.ProtocolException r6 = new java.net.ProtocolException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Expected 'Upgrade' header value 'websocket' but was '"
            r2.append(r3)
            r2.append(r0)
            r2.append(r1)
            java.lang.String r0 = r2.toString()
            r6.<init>(r0)
            throw r6
        L8c:
            java.net.ProtocolException r6 = new java.net.ProtocolException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Expected 'Connection' header value 'Upgrade' but was '"
            r2.append(r3)
            r2.append(r0)
            r2.append(r1)
            java.lang.String r0 = r2.toString()
            r6.<init>(r0)
            throw r6
        La6:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Expected HTTP 101 response but was '"
            r2.append(r3)
            int r3 = r6.code()
            r2.append(r3)
            java.lang.String r3 = " "
            r2.append(r3)
            java.lang.String r6 = r6.message()
            r2.append(r6)
            r2.append(r1)
            java.lang.String r6 = r2.toString()
            r0.<init>(r6)
            throw r0
    }

    @Override
    public boolean close(int r3, java.lang.String r4) {
            r2 = this;
            r0 = 60000(0xea60, double:2.9644E-319)
            boolean r3 = r2.close(r3, r4, r0)
            return r3
    }

    synchronized boolean close(int r6, java.lang.String r7, long r8) {
            r5 = this;
            monitor-enter(r5)
            com.mbridge.msdk.thrid.okhttp.internal.ws.WebSocketProtocol.validateCloseCode(r6)     // Catch: java.lang.Throwable -> L4c
            r0 = 0
            if (r7 == 0) goto L2e
            com.mbridge.msdk.thrid.okio.ByteString r0 = com.mbridge.msdk.thrid.okio.ByteString.encodeUtf8(r7)     // Catch: java.lang.Throwable -> L4c
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L4c
            long r1 = (long) r1     // Catch: java.lang.Throwable -> L4c
            r3 = 123(0x7b, double:6.1E-322)
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 > 0) goto L17
            goto L2e
        L17:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L4c
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4c
            r8.<init>()     // Catch: java.lang.Throwable -> L4c
            java.lang.String r9 = "reason.size() > 123: "
            r8.append(r9)     // Catch: java.lang.Throwable -> L4c
            r8.append(r7)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r7 = r8.toString()     // Catch: java.lang.Throwable -> L4c
            r6.<init>(r7)     // Catch: java.lang.Throwable -> L4c
            throw r6     // Catch: java.lang.Throwable -> L4c
        L2e:
            boolean r7 = r5.failed     // Catch: java.lang.Throwable -> L4c
            if (r7 != 0) goto L49
            boolean r7 = r5.enqueuedClose     // Catch: java.lang.Throwable -> L4c
            if (r7 == 0) goto L37
            goto L49
        L37:
            r7 = 1
            r5.enqueuedClose = r7     // Catch: java.lang.Throwable -> L4c
            java.util.ArrayDeque<java.lang.Object> r1 = r5.messageAndCloseQueue     // Catch: java.lang.Throwable -> L4c
            com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket$Close r2 = new com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket$Close     // Catch: java.lang.Throwable -> L4c
            r2.<init>(r6, r0, r8)     // Catch: java.lang.Throwable -> L4c
            r1.add(r2)     // Catch: java.lang.Throwable -> L4c
            r5.runWriter()     // Catch: java.lang.Throwable -> L4c
            monitor-exit(r5)
            return r7
        L49:
            r6 = 0
            monitor-exit(r5)
            return r6
        L4c:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public void connect(com.mbridge.msdk.thrid.okhttp.OkHttpClient r4) {
            r3 = this;
            com.mbridge.msdk.thrid.okhttp.OkHttpClient$Builder r4 = r4.newBuilder()
            com.mbridge.msdk.thrid.okhttp.EventListener r0 = com.mbridge.msdk.thrid.okhttp.EventListener.NONE
            com.mbridge.msdk.thrid.okhttp.OkHttpClient$Builder r4 = r4.eventListener(r0)
            java.util.List<com.mbridge.msdk.thrid.okhttp.Protocol> r0 = com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket.ONLY_HTTP1
            com.mbridge.msdk.thrid.okhttp.OkHttpClient$Builder r4 = r4.protocols(r0)
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r4 = r4.build()
            com.mbridge.msdk.thrid.okhttp.Request r0 = r3.originalRequest
            com.mbridge.msdk.thrid.okhttp.Request$Builder r0 = r0.newBuilder()
            java.lang.String r1 = "Upgrade"
            java.lang.String r2 = "websocket"
            com.mbridge.msdk.thrid.okhttp.Request$Builder r0 = r0.header(r1, r2)
            java.lang.String r2 = "Connection"
            com.mbridge.msdk.thrid.okhttp.Request$Builder r0 = r0.header(r2, r1)
            java.lang.String r1 = r3.key
            java.lang.String r2 = "Sec-WebSocket-Key"
            com.mbridge.msdk.thrid.okhttp.Request$Builder r0 = r0.header(r2, r1)
            java.lang.String r1 = "Sec-WebSocket-Version"
            java.lang.String r2 = "13"
            com.mbridge.msdk.thrid.okhttp.Request$Builder r0 = r0.header(r1, r2)
            com.mbridge.msdk.thrid.okhttp.Request r0 = r0.build()
            com.mbridge.msdk.thrid.okhttp.internal.Internal r1 = com.mbridge.msdk.thrid.okhttp.internal.Internal.instance
            com.mbridge.msdk.thrid.okhttp.Call r4 = r1.newWebSocketCall(r4, r0)
            r3.call = r4
            com.mbridge.msdk.thrid.okio.Timeout r4 = r4.timeout()
            r4.clearTimeout()
            com.mbridge.msdk.thrid.okhttp.Call r4 = r3.call
            com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket$2 r1 = new com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket$2
            r1.<init>(r3, r0)
            r4.enqueue(r1)
            return
    }

    public void failWebSocket(java.lang.Exception r4, @javax.annotation.Nullable com.mbridge.msdk.thrid.okhttp.Response r5) {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = r3.failed     // Catch: java.lang.Throwable -> L31
            if (r0 == 0) goto L7
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L31
            return
        L7:
            r0 = 1
            r3.failed = r0     // Catch: java.lang.Throwable -> L31
            com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket$Streams r0 = r3.streams     // Catch: java.lang.Throwable -> L31
            r1 = 0
            r3.streams = r1     // Catch: java.lang.Throwable -> L31
            java.util.concurrent.ScheduledFuture<?> r1 = r3.cancelFuture     // Catch: java.lang.Throwable -> L31
            if (r1 == 0) goto L19
            java.util.concurrent.ScheduledFuture<?> r1 = r3.cancelFuture     // Catch: java.lang.Throwable -> L31
            r2 = 0
            r1.cancel(r2)     // Catch: java.lang.Throwable -> L31
        L19:
            java.util.concurrent.ScheduledExecutorService r1 = r3.executor     // Catch: java.lang.Throwable -> L31
            if (r1 == 0) goto L22
            java.util.concurrent.ScheduledExecutorService r1 = r3.executor     // Catch: java.lang.Throwable -> L31
            r1.shutdown()     // Catch: java.lang.Throwable -> L31
        L22:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L31
            com.mbridge.msdk.thrid.okhttp.WebSocketListener r1 = r3.listener     // Catch: java.lang.Throwable -> L2c
            r1.onFailure(r3, r4, r5)     // Catch: java.lang.Throwable -> L2c
            com.mbridge.msdk.thrid.okhttp.internal.Util.closeQuietly(r0)
            return
        L2c:
            r4 = move-exception
            com.mbridge.msdk.thrid.okhttp.internal.Util.closeQuietly(r0)
            throw r4
        L31:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L31
            throw r4
    }

    public void initReaderAndWriter(java.lang.String r12, com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket.Streams r13) throws java.io.IOException {
            r11 = this;
            monitor-enter(r11)
            r11.streams = r13     // Catch: java.lang.Throwable -> L4b
            com.mbridge.msdk.thrid.okhttp.internal.ws.WebSocketWriter r0 = new com.mbridge.msdk.thrid.okhttp.internal.ws.WebSocketWriter     // Catch: java.lang.Throwable -> L4b
            boolean r1 = r13.client     // Catch: java.lang.Throwable -> L4b
            com.mbridge.msdk.thrid.okio.BufferedSink r2 = r13.sink     // Catch: java.lang.Throwable -> L4b
            java.util.Random r3 = r11.random     // Catch: java.lang.Throwable -> L4b
            r0.<init>(r1, r2, r3)     // Catch: java.lang.Throwable -> L4b
            r11.writer = r0     // Catch: java.lang.Throwable -> L4b
            java.util.concurrent.ScheduledThreadPoolExecutor r4 = new java.util.concurrent.ScheduledThreadPoolExecutor     // Catch: java.lang.Throwable -> L4b
            r0 = 1
            r1 = 0
            java.util.concurrent.ThreadFactory r12 = com.mbridge.msdk.thrid.okhttp.internal.Util.threadFactory(r12, r1)     // Catch: java.lang.Throwable -> L4b
            r4.<init>(r0, r12)     // Catch: java.lang.Throwable -> L4b
            r11.executor = r4     // Catch: java.lang.Throwable -> L4b
            long r0 = r11.pingIntervalMillis     // Catch: java.lang.Throwable -> L4b
            r2 = 0
            int r12 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r12 == 0) goto L33
            com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket$PingRunnable r5 = new com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket$PingRunnable     // Catch: java.lang.Throwable -> L4b
            r5.<init>(r11)     // Catch: java.lang.Throwable -> L4b
            long r6 = r11.pingIntervalMillis     // Catch: java.lang.Throwable -> L4b
            long r8 = r11.pingIntervalMillis     // Catch: java.lang.Throwable -> L4b
            java.util.concurrent.TimeUnit r10 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.Throwable -> L4b
            r4.scheduleAtFixedRate(r5, r6, r8, r10)     // Catch: java.lang.Throwable -> L4b
        L33:
            java.util.ArrayDeque<java.lang.Object> r12 = r11.messageAndCloseQueue     // Catch: java.lang.Throwable -> L4b
            boolean r12 = r12.isEmpty()     // Catch: java.lang.Throwable -> L4b
            if (r12 != 0) goto L3e
            r11.runWriter()     // Catch: java.lang.Throwable -> L4b
        L3e:
            monitor-exit(r11)     // Catch: java.lang.Throwable -> L4b
            com.mbridge.msdk.thrid.okhttp.internal.ws.WebSocketReader r12 = new com.mbridge.msdk.thrid.okhttp.internal.ws.WebSocketReader
            boolean r0 = r13.client
            com.mbridge.msdk.thrid.okio.BufferedSource r13 = r13.source
            r12.<init>(r0, r13, r11)
            r11.reader = r12
            return
        L4b:
            r12 = move-exception
            monitor-exit(r11)     // Catch: java.lang.Throwable -> L4b
            throw r12
    }

    public void loopReader() throws java.io.IOException {
            r2 = this;
        L0:
            int r0 = r2.receivedCloseCode
            r1 = -1
            if (r0 != r1) goto Lb
            com.mbridge.msdk.thrid.okhttp.internal.ws.WebSocketReader r0 = r2.reader
            r0.processNextFrame()
            goto L0
        Lb:
            return
    }

    @Override
    public void onReadClose(int r4, java.lang.String r5) {
            r3 = this;
            r0 = -1
            if (r4 == r0) goto L4e
            monitor-enter(r3)
            int r1 = r3.receivedCloseCode     // Catch: java.lang.Throwable -> L4b
            if (r1 != r0) goto L43
            r3.receivedCloseCode = r4     // Catch: java.lang.Throwable -> L4b
            r3.receivedCloseReason = r5     // Catch: java.lang.Throwable -> L4b
            boolean r0 = r3.enqueuedClose     // Catch: java.lang.Throwable -> L4b
            r1 = 0
            if (r0 == 0) goto L2d
            java.util.ArrayDeque<java.lang.Object> r0 = r3.messageAndCloseQueue     // Catch: java.lang.Throwable -> L4b
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L4b
            if (r0 == 0) goto L2d
            com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket$Streams r0 = r3.streams     // Catch: java.lang.Throwable -> L4b
            r3.streams = r1     // Catch: java.lang.Throwable -> L4b
            java.util.concurrent.ScheduledFuture<?> r1 = r3.cancelFuture     // Catch: java.lang.Throwable -> L4b
            if (r1 == 0) goto L27
            java.util.concurrent.ScheduledFuture<?> r1 = r3.cancelFuture     // Catch: java.lang.Throwable -> L4b
            r2 = 0
            r1.cancel(r2)     // Catch: java.lang.Throwable -> L4b
        L27:
            java.util.concurrent.ScheduledExecutorService r1 = r3.executor     // Catch: java.lang.Throwable -> L4b
            r1.shutdown()     // Catch: java.lang.Throwable -> L4b
            r1 = r0
        L2d:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L4b
            com.mbridge.msdk.thrid.okhttp.WebSocketListener r0 = r3.listener     // Catch: java.lang.Throwable -> L3e
            r0.onClosing(r3, r4, r5)     // Catch: java.lang.Throwable -> L3e
            if (r1 == 0) goto L3a
            com.mbridge.msdk.thrid.okhttp.WebSocketListener r0 = r3.listener     // Catch: java.lang.Throwable -> L3e
            r0.onClosed(r3, r4, r5)     // Catch: java.lang.Throwable -> L3e
        L3a:
            com.mbridge.msdk.thrid.okhttp.internal.Util.closeQuietly(r1)
            return
        L3e:
            r4 = move-exception
            com.mbridge.msdk.thrid.okhttp.internal.Util.closeQuietly(r1)
            throw r4
        L43:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L4b
            java.lang.String r5 = "already closed"
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L4b
            throw r4     // Catch: java.lang.Throwable -> L4b
        L4b:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L4b
            throw r4
        L4e:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            r4.<init>()
            throw r4
    }

    @Override
    public void onReadMessage(com.mbridge.msdk.thrid.okio.ByteString r2) throws java.io.IOException {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.WebSocketListener r0 = r1.listener
            r0.onMessage(r1, r2)
            return
    }

    @Override
    public void onReadMessage(java.lang.String r2) throws java.io.IOException {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.WebSocketListener r0 = r1.listener
            r0.onMessage(r1, r2)
            return
    }

    @Override
    public synchronized void onReadPing(com.mbridge.msdk.thrid.okio.ByteString r2) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.failed     // Catch: java.lang.Throwable -> L24
            if (r0 != 0) goto L22
            boolean r0 = r1.enqueuedClose     // Catch: java.lang.Throwable -> L24
            if (r0 == 0) goto L12
            java.util.ArrayDeque<java.lang.Object> r0 = r1.messageAndCloseQueue     // Catch: java.lang.Throwable -> L24
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L24
            if (r0 == 0) goto L12
            goto L22
        L12:
            java.util.ArrayDeque<com.mbridge.msdk.thrid.okio.ByteString> r0 = r1.pongQueue     // Catch: java.lang.Throwable -> L24
            r0.add(r2)     // Catch: java.lang.Throwable -> L24
            r1.runWriter()     // Catch: java.lang.Throwable -> L24
            int r2 = r1.receivedPingCount     // Catch: java.lang.Throwable -> L24
            int r2 = r2 + 1
            r1.receivedPingCount = r2     // Catch: java.lang.Throwable -> L24
            monitor-exit(r1)
            return
        L22:
            monitor-exit(r1)
            return
        L24:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public synchronized void onReadPong(com.mbridge.msdk.thrid.okio.ByteString r1) {
            r0 = this;
            monitor-enter(r0)
            int r1 = r0.receivedPongCount     // Catch: java.lang.Throwable -> Lc
            int r1 = r1 + 1
            r0.receivedPongCount = r1     // Catch: java.lang.Throwable -> Lc
            r1 = 0
            r0.awaitingPong = r1     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r0)
            return
        Lc:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    synchronized boolean pong(com.mbridge.msdk.thrid.okio.ByteString r2) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.failed     // Catch: java.lang.Throwable -> L20
            if (r0 != 0) goto L1d
            boolean r0 = r1.enqueuedClose     // Catch: java.lang.Throwable -> L20
            if (r0 == 0) goto L12
            java.util.ArrayDeque<java.lang.Object> r0 = r1.messageAndCloseQueue     // Catch: java.lang.Throwable -> L20
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L20
            if (r0 == 0) goto L12
            goto L1d
        L12:
            java.util.ArrayDeque<com.mbridge.msdk.thrid.okio.ByteString> r0 = r1.pongQueue     // Catch: java.lang.Throwable -> L20
            r0.add(r2)     // Catch: java.lang.Throwable -> L20
            r1.runWriter()     // Catch: java.lang.Throwable -> L20
            r2 = 1
            monitor-exit(r1)
            return r2
        L1d:
            r2 = 0
            monitor-exit(r1)
            return r2
        L20:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    boolean processNextFrame() throws java.io.IOException {
            r3 = this;
            r0 = 0
            com.mbridge.msdk.thrid.okhttp.internal.ws.WebSocketReader r1 = r3.reader     // Catch: java.lang.Exception -> Ld
            r1.processNextFrame()     // Catch: java.lang.Exception -> Ld
            int r1 = r3.receivedCloseCode     // Catch: java.lang.Exception -> Ld
            r2 = -1
            if (r1 != r2) goto Lc
            r0 = 1
        Lc:
            return r0
        Ld:
            r1 = move-exception
            r2 = 0
            r3.failWebSocket(r1, r2)
            return r0
    }

    @Override
    public synchronized long queueSize() {
            r2 = this;
            monitor-enter(r2)
            long r0 = r2.queueSize     // Catch: java.lang.Throwable -> L5
            monitor-exit(r2)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    synchronized int receivedPingCount() {
            r1 = this;
            monitor-enter(r1)
            int r0 = r1.receivedPingCount     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    synchronized int receivedPongCount() {
            r1 = this;
            monitor-enter(r1)
            int r0 = r1.receivedPongCount     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    public com.mbridge.msdk.thrid.okhttp.Request request() {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.Request r0 = r1.originalRequest
            return r0
    }

    @Override
    public boolean send(com.mbridge.msdk.thrid.okio.ByteString r2) {
            r1 = this;
            if (r2 == 0) goto L8
            r0 = 2
            boolean r2 = r1.send(r2, r0)
            return r2
        L8:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r0 = "bytes == null"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public boolean send(java.lang.String r2) {
            r1 = this;
            if (r2 == 0) goto Lc
            com.mbridge.msdk.thrid.okio.ByteString r2 = com.mbridge.msdk.thrid.okio.ByteString.encodeUtf8(r2)
            r0 = 1
            boolean r2 = r1.send(r2, r0)
            return r2
        Lc:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r0 = "text == null"
            r2.<init>(r0)
            throw r2
    }

    synchronized int sentPingCount() {
            r1 = this;
            monitor-enter(r1)
            int r0 = r1.sentPingCount     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    void tearDown() throws java.lang.InterruptedException {
            r4 = this;
            java.util.concurrent.ScheduledFuture<?> r0 = r4.cancelFuture
            if (r0 == 0) goto L8
            r1 = 0
            r0.cancel(r1)
        L8:
            java.util.concurrent.ScheduledExecutorService r0 = r4.executor
            r0.shutdown()
            java.util.concurrent.ScheduledExecutorService r0 = r4.executor
            r1 = 10
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.SECONDS
            r0.awaitTermination(r1, r3)
            return
    }

    boolean writeOneFrame() throws java.io.IOException {
            r12 = this;
            monitor-enter(r12)
            boolean r0 = r12.failed     // Catch: java.lang.Throwable -> Lb0
            r1 = 0
            if (r0 == 0) goto L8
            monitor-exit(r12)     // Catch: java.lang.Throwable -> Lb0
            return r1
        L8:
            com.mbridge.msdk.thrid.okhttp.internal.ws.WebSocketWriter r0 = r12.writer     // Catch: java.lang.Throwable -> Lb0
            java.util.ArrayDeque<com.mbridge.msdk.thrid.okio.ByteString> r2 = r12.pongQueue     // Catch: java.lang.Throwable -> Lb0
            java.lang.Object r2 = r2.poll()     // Catch: java.lang.Throwable -> Lb0
            com.mbridge.msdk.thrid.okio.ByteString r2 = (com.mbridge.msdk.thrid.okio.ByteString) r2     // Catch: java.lang.Throwable -> Lb0
            r3 = -1
            r4 = 0
            if (r2 != 0) goto L53
            java.util.ArrayDeque<java.lang.Object> r5 = r12.messageAndCloseQueue     // Catch: java.lang.Throwable -> Lb0
            java.lang.Object r5 = r5.poll()     // Catch: java.lang.Throwable -> Lb0
            boolean r6 = r5 instanceof com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket.Close     // Catch: java.lang.Throwable -> Lb0
            if (r6 == 0) goto L4b
            int r1 = r12.receivedCloseCode     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r6 = r12.receivedCloseReason     // Catch: java.lang.Throwable -> Lb0
            if (r1 == r3) goto L34
            com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket$Streams r3 = r12.streams     // Catch: java.lang.Throwable -> Lb0
            r12.streams = r4     // Catch: java.lang.Throwable -> Lb0
            java.util.concurrent.ScheduledExecutorService r4 = r12.executor     // Catch: java.lang.Throwable -> Lb0
            r4.shutdown()     // Catch: java.lang.Throwable -> Lb0
            r4 = r5
            r11 = r3
            r3 = r1
            r1 = r11
            goto L55
        L34:
            java.util.concurrent.ScheduledExecutorService r3 = r12.executor     // Catch: java.lang.Throwable -> Lb0
            com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket$CancelRunnable r7 = new com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket$CancelRunnable     // Catch: java.lang.Throwable -> Lb0
            r7.<init>(r12)     // Catch: java.lang.Throwable -> Lb0
            r8 = r5
            com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket$Close r8 = (com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket.Close) r8     // Catch: java.lang.Throwable -> Lb0
            long r8 = r8.cancelAfterCloseMillis     // Catch: java.lang.Throwable -> Lb0
            java.util.concurrent.TimeUnit r10 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.Throwable -> Lb0
            java.util.concurrent.ScheduledFuture r3 = r3.schedule(r7, r8, r10)     // Catch: java.lang.Throwable -> Lb0
            r12.cancelFuture = r3     // Catch: java.lang.Throwable -> Lb0
            r3 = r1
            r1 = r4
            goto L51
        L4b:
            if (r5 != 0) goto L4f
            monitor-exit(r12)     // Catch: java.lang.Throwable -> Lb0
            return r1
        L4f:
            r1 = r4
            r6 = r1
        L51:
            r4 = r5
            goto L55
        L53:
            r1 = r4
            r6 = r1
        L55:
            monitor-exit(r12)     // Catch: java.lang.Throwable -> Lb0
            if (r2 == 0) goto L5c
            r0.writePong(r2)     // Catch: java.lang.Throwable -> Lab
            goto La0
        L5c:
            boolean r2 = r4 instanceof com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket.Message     // Catch: java.lang.Throwable -> Lab
            if (r2 == 0) goto L8c
            r2 = r4
            com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket$Message r2 = (com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket.Message) r2     // Catch: java.lang.Throwable -> Lab
            com.mbridge.msdk.thrid.okio.ByteString r2 = r2.data     // Catch: java.lang.Throwable -> Lab
            com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket$Message r4 = (com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket.Message) r4     // Catch: java.lang.Throwable -> Lab
            int r3 = r4.formatOpcode     // Catch: java.lang.Throwable -> Lab
            int r4 = r2.size()     // Catch: java.lang.Throwable -> Lab
            long r4 = (long) r4     // Catch: java.lang.Throwable -> Lab
            com.mbridge.msdk.thrid.okio.Sink r0 = r0.newMessageSink(r3, r4)     // Catch: java.lang.Throwable -> Lab
            com.mbridge.msdk.thrid.okio.BufferedSink r0 = com.mbridge.msdk.thrid.okio.Okio.buffer(r0)     // Catch: java.lang.Throwable -> Lab
            r0.write(r2)     // Catch: java.lang.Throwable -> Lab
            r0.close()     // Catch: java.lang.Throwable -> Lab
            monitor-enter(r12)     // Catch: java.lang.Throwable -> Lab
            long r3 = r12.queueSize     // Catch: java.lang.Throwable -> L89
            int r0 = r2.size()     // Catch: java.lang.Throwable -> L89
            long r5 = (long) r0     // Catch: java.lang.Throwable -> L89
            long r3 = r3 - r5
            r12.queueSize = r3     // Catch: java.lang.Throwable -> L89
            monitor-exit(r12)     // Catch: java.lang.Throwable -> L89
            goto La0
        L89:
            r0 = move-exception
            monitor-exit(r12)     // Catch: java.lang.Throwable -> L89
            throw r0     // Catch: java.lang.Throwable -> Lab
        L8c:
            boolean r2 = r4 instanceof com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket.Close     // Catch: java.lang.Throwable -> Lab
            if (r2 == 0) goto La5
            com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket$Close r4 = (com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket.Close) r4     // Catch: java.lang.Throwable -> Lab
            int r2 = r4.code     // Catch: java.lang.Throwable -> Lab
            com.mbridge.msdk.thrid.okio.ByteString r4 = r4.reason     // Catch: java.lang.Throwable -> Lab
            r0.writeClose(r2, r4)     // Catch: java.lang.Throwable -> Lab
            if (r1 == 0) goto La0
            com.mbridge.msdk.thrid.okhttp.WebSocketListener r0 = r12.listener     // Catch: java.lang.Throwable -> Lab
            r0.onClosed(r12, r3, r6)     // Catch: java.lang.Throwable -> Lab
        La0:
            r0 = 1
            com.mbridge.msdk.thrid.okhttp.internal.Util.closeQuietly(r1)
            return r0
        La5:
            java.lang.AssertionError r0 = new java.lang.AssertionError     // Catch: java.lang.Throwable -> Lab
            r0.<init>()     // Catch: java.lang.Throwable -> Lab
            throw r0     // Catch: java.lang.Throwable -> Lab
        Lab:
            r0 = move-exception
            com.mbridge.msdk.thrid.okhttp.internal.Util.closeQuietly(r1)
            throw r0
        Lb0:
            r0 = move-exception
            monitor-exit(r12)     // Catch: java.lang.Throwable -> Lb0
            throw r0
    }

    void writePingFrame() {
            r7 = this;
            monitor-enter(r7)
            boolean r0 = r7.failed     // Catch: java.lang.Throwable -> L53
            if (r0 == 0) goto L7
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L53
            return
        L7:
            com.mbridge.msdk.thrid.okhttp.internal.ws.WebSocketWriter r0 = r7.writer     // Catch: java.lang.Throwable -> L53
            boolean r1 = r7.awaitingPong     // Catch: java.lang.Throwable -> L53
            r2 = -1
            if (r1 == 0) goto L11
            int r1 = r7.sentPingCount     // Catch: java.lang.Throwable -> L53
            goto L12
        L11:
            r1 = r2
        L12:
            int r3 = r7.sentPingCount     // Catch: java.lang.Throwable -> L53
            r4 = 1
            int r3 = r3 + r4
            r7.sentPingCount = r3     // Catch: java.lang.Throwable -> L53
            r7.awaitingPong = r4     // Catch: java.lang.Throwable -> L53
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L53
            r3 = 0
            if (r1 == r2) goto L48
            java.net.SocketTimeoutException r0 = new java.net.SocketTimeoutException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r5 = "sent ping but didn't receive pong within "
            r2.append(r5)
            long r5 = r7.pingIntervalMillis
            r2.append(r5)
            java.lang.String r5 = "ms (after "
            r2.append(r5)
            int r1 = r1 - r4
            r2.append(r1)
            java.lang.String r1 = " successful ping/pongs)"
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r0.<init>(r1)
            r7.failWebSocket(r0, r3)
            return
        L48:
            com.mbridge.msdk.thrid.okio.ByteString r1 = com.mbridge.msdk.thrid.okio.ByteString.EMPTY     // Catch: java.io.IOException -> L4e
            r0.writePing(r1)     // Catch: java.io.IOException -> L4e
            goto L52
        L4e:
            r0 = move-exception
            r7.failWebSocket(r0, r3)
        L52:
            return
        L53:
            r0 = move-exception
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L53
            throw r0
    }
}
