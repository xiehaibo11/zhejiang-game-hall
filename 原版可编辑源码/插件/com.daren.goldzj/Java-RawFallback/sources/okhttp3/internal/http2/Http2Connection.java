package okhttp3.internal.http2;

public final class Http2Connection implements java.io.Closeable {
    static final boolean $assertionsDisabled = false;
    static final int OKHTTP_CLIENT_WINDOW_SIZE = 16777216;
    private static final java.util.concurrent.ExecutorService listenerExecutor = null;
    private boolean awaitingPong;
    long bytesLeftInWriteWindow;
    final boolean client;
    final java.util.Set<java.lang.Integer> currentPushRequests;
    final java.lang.String hostname;
    int lastGoodStreamId;
    final okhttp3.internal.http2.Http2Connection.Listener listener;
    int nextStreamId;
    okhttp3.internal.http2.Settings okHttpSettings;
    final okhttp3.internal.http2.Settings peerSettings;
    private final java.util.concurrent.ExecutorService pushExecutor;
    final okhttp3.internal.http2.PushObserver pushObserver;
    final okhttp3.internal.http2.Http2Connection.ReaderRunnable readerRunnable;
    boolean receivedInitialPeerSettings;
    boolean shutdown;
    final java.net.Socket socket;
    final java.util.Map<java.lang.Integer, okhttp3.internal.http2.Http2Stream> streams;
    long unacknowledgedBytesRead;
    final okhttp3.internal.http2.Http2Writer writer;
    private final java.util.concurrent.ScheduledExecutorService writerExecutor;







    public static class Builder {
        boolean client;
        java.lang.String hostname;
        okhttp3.internal.http2.Http2Connection.Listener listener;
        int pingIntervalMillis;
        okhttp3.internal.http2.PushObserver pushObserver;
        okio.BufferedSink sink;
        java.net.Socket socket;
        okio.BufferedSource source;

        public Builder(boolean r2) {
                r1 = this;
                r1.<init>()
                okhttp3.internal.http2.Http2Connection$Listener r0 = okhttp3.internal.http2.Http2Connection.Listener.REFUSE_INCOMING_STREAMS
                r1.listener = r0
                okhttp3.internal.http2.PushObserver r0 = okhttp3.internal.http2.PushObserver.CANCEL
                r1.pushObserver = r0
                r1.client = r2
                return
        }

        public okhttp3.internal.http2.Http2Connection build() {
                r1 = this;
                okhttp3.internal.http2.Http2Connection r0 = new okhttp3.internal.http2.Http2Connection
                r0.<init>(r1)
                return r0
        }

        public okhttp3.internal.http2.Http2Connection.Builder listener(okhttp3.internal.http2.Http2Connection.Listener r1) {
                r0 = this;
                r0.listener = r1
                return r0
        }

        public okhttp3.internal.http2.Http2Connection.Builder pingIntervalMillis(int r1) {
                r0 = this;
                r0.pingIntervalMillis = r1
                return r0
        }

        public okhttp3.internal.http2.Http2Connection.Builder pushObserver(okhttp3.internal.http2.PushObserver r1) {
                r0 = this;
                r0.pushObserver = r1
                return r0
        }

        public okhttp3.internal.http2.Http2Connection.Builder socket(java.net.Socket r4) throws java.io.IOException {
                r3 = this;
                java.net.SocketAddress r0 = r4.getRemoteSocketAddress()
                java.net.InetSocketAddress r0 = (java.net.InetSocketAddress) r0
                java.lang.String r0 = r0.getHostName()
                okio.Source r1 = okio.Okio.source(r4)
                okio.BufferedSource r1 = okio.Okio.buffer(r1)
                okio.Sink r2 = okio.Okio.sink(r4)
                okio.BufferedSink r2 = okio.Okio.buffer(r2)
                okhttp3.internal.http2.Http2Connection$Builder r4 = r3.socket(r4, r0, r1, r2)
                return r4
        }

        public okhttp3.internal.http2.Http2Connection.Builder socket(java.net.Socket r1, java.lang.String r2, okio.BufferedSource r3, okio.BufferedSink r4) {
                r0 = this;
                r0.socket = r1
                r0.hostname = r2
                r0.source = r3
                r0.sink = r4
                return r0
        }
    }

    public static abstract class Listener {
        public static final okhttp3.internal.http2.Http2Connection.Listener REFUSE_INCOMING_STREAMS = null;


        static {
                okhttp3.internal.http2.Http2Connection$Listener$1 r0 = new okhttp3.internal.http2.Http2Connection$Listener$1
                r0.<init>()
                okhttp3.internal.http2.Http2Connection.Listener.REFUSE_INCOMING_STREAMS = r0
                return
        }

        public Listener() {
                r0 = this;
                r0.<init>()
                return
        }

        public void onSettings(okhttp3.internal.http2.Http2Connection r1) {
                r0 = this;
                return
        }

        public abstract void onStream(okhttp3.internal.http2.Http2Stream r1) throws java.io.IOException;
    }

    final class PingRunnable extends okhttp3.internal.NamedRunnable {
        final int payload1;
        final int payload2;
        final boolean reply;
        final okhttp3.internal.http2.Http2Connection this$0;

        PingRunnable(okhttp3.internal.http2.Http2Connection r3, boolean r4, int r5, int r6) {
                r2 = this;
                r2.this$0 = r3
                r0 = 3
                java.lang.Object[] r0 = new java.lang.Object[r0]
                java.lang.String r3 = r3.hostname
                r1 = 0
                r0[r1] = r3
                java.lang.Integer r3 = java.lang.Integer.valueOf(r5)
                r1 = 1
                r0[r1] = r3
                java.lang.Integer r3 = java.lang.Integer.valueOf(r6)
                r1 = 2
                r0[r1] = r3
                java.lang.String r3 = "OkHttp %s ping %08x%08x"
                r2.<init>(r3, r0)
                r2.reply = r4
                r2.payload1 = r5
                r2.payload2 = r6
                return
        }

        @Override
        public void execute() {
                r4 = this;
                okhttp3.internal.http2.Http2Connection r0 = r4.this$0
                boolean r1 = r4.reply
                int r2 = r4.payload1
                int r3 = r4.payload2
                r0.writePing(r1, r2, r3)
                return
        }
    }

    class ReaderRunnable extends okhttp3.internal.NamedRunnable implements okhttp3.internal.http2.Http2Reader.Handler {
        final okhttp3.internal.http2.Http2Reader reader;
        final okhttp3.internal.http2.Http2Connection this$0;




        ReaderRunnable(okhttp3.internal.http2.Http2Connection r3, okhttp3.internal.http2.Http2Reader r4) {
                r2 = this;
                r2.this$0 = r3
                r0 = 1
                java.lang.Object[] r0 = new java.lang.Object[r0]
                java.lang.String r3 = r3.hostname
                r1 = 0
                r0[r1] = r3
                java.lang.String r3 = "OkHttp %s"
                r2.<init>(r3, r0)
                r2.reader = r4
                return
        }

        private void applyAndAckSettings(okhttp3.internal.http2.Settings r7) {
                r6 = this;
                okhttp3.internal.http2.Http2Connection r0 = r6.this$0     // Catch: java.util.concurrent.RejectedExecutionException -> L1a
                java.util.concurrent.ScheduledExecutorService r0 = okhttp3.internal.http2.Http2Connection.access$200(r0)     // Catch: java.util.concurrent.RejectedExecutionException -> L1a
                okhttp3.internal.http2.Http2Connection$ReaderRunnable$3 r1 = new okhttp3.internal.http2.Http2Connection$ReaderRunnable$3     // Catch: java.util.concurrent.RejectedExecutionException -> L1a
                java.lang.String r2 = "OkHttp %s ACK Settings"
                r3 = 1
                java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.util.concurrent.RejectedExecutionException -> L1a
                r4 = 0
                okhttp3.internal.http2.Http2Connection r5 = r6.this$0     // Catch: java.util.concurrent.RejectedExecutionException -> L1a
                java.lang.String r5 = r5.hostname     // Catch: java.util.concurrent.RejectedExecutionException -> L1a
                r3[r4] = r5     // Catch: java.util.concurrent.RejectedExecutionException -> L1a
                r1.<init>(r6, r2, r3, r7)     // Catch: java.util.concurrent.RejectedExecutionException -> L1a
                r0.execute(r1)     // Catch: java.util.concurrent.RejectedExecutionException -> L1a
            L1a:
                return
        }

        @Override
        public void ackSettings() {
                r0 = this;
                return
        }

        @Override
        public void alternateService(int r1, java.lang.String r2, okio.ByteString r3, java.lang.String r4, int r5, long r6) {
                r0 = this;
                return
        }

        @Override
        public void data(boolean r3, int r4, okio.BufferedSource r5, int r6) throws java.io.IOException {
                r2 = this;
                okhttp3.internal.http2.Http2Connection r0 = r2.this$0
                boolean r0 = r0.pushedStream(r4)
                if (r0 == 0) goto Le
                okhttp3.internal.http2.Http2Connection r0 = r2.this$0
                r0.pushDataLater(r4, r5, r6, r3)
                return
            Le:
                okhttp3.internal.http2.Http2Connection r0 = r2.this$0
                okhttp3.internal.http2.Http2Stream r0 = r0.getStream(r4)
                if (r0 != 0) goto L27
                okhttp3.internal.http2.Http2Connection r3 = r2.this$0
                okhttp3.internal.http2.ErrorCode r0 = okhttp3.internal.http2.ErrorCode.PROTOCOL_ERROR
                r3.writeSynResetLater(r4, r0)
                okhttp3.internal.http2.Http2Connection r3 = r2.this$0
                long r0 = (long) r6
                r3.updateConnectionFlowControl(r0)
                r5.skip(r0)
                return
            L27:
                r0.receiveData(r5, r6)
                if (r3 == 0) goto L2f
                r0.receiveFin()
            L2f:
                return
        }

        @Override
        protected void execute() {
                r4 = this;
                okhttp3.internal.http2.ErrorCode r0 = okhttp3.internal.http2.ErrorCode.INTERNAL_ERROR
                okhttp3.internal.http2.ErrorCode r1 = okhttp3.internal.http2.ErrorCode.INTERNAL_ERROR
                okhttp3.internal.http2.Http2Reader r2 = r4.reader     // Catch: java.lang.Throwable -> L1a java.io.IOException -> L1c
                r2.readConnectionPreface(r4)     // Catch: java.lang.Throwable -> L1a java.io.IOException -> L1c
            L9:
                okhttp3.internal.http2.Http2Reader r2 = r4.reader     // Catch: java.lang.Throwable -> L1a java.io.IOException -> L1c
                r3 = 0
                boolean r2 = r2.nextFrame(r3, r4)     // Catch: java.lang.Throwable -> L1a java.io.IOException -> L1c
                if (r2 == 0) goto L13
                goto L9
            L13:
                okhttp3.internal.http2.ErrorCode r0 = okhttp3.internal.http2.ErrorCode.NO_ERROR     // Catch: java.lang.Throwable -> L1a java.io.IOException -> L1c
                okhttp3.internal.http2.ErrorCode r1 = okhttp3.internal.http2.ErrorCode.CANCEL     // Catch: java.lang.Throwable -> L1a java.io.IOException -> L1c
                okhttp3.internal.http2.Http2Connection r2 = r4.this$0     // Catch: java.io.IOException -> L25
                goto L22
            L1a:
                r2 = move-exception
                goto L2b
            L1c:
                okhttp3.internal.http2.ErrorCode r0 = okhttp3.internal.http2.ErrorCode.PROTOCOL_ERROR     // Catch: java.lang.Throwable -> L1a
                okhttp3.internal.http2.ErrorCode r1 = okhttp3.internal.http2.ErrorCode.PROTOCOL_ERROR     // Catch: java.lang.Throwable -> L1a
                okhttp3.internal.http2.Http2Connection r2 = r4.this$0     // Catch: java.io.IOException -> L25
            L22:
                r2.close(r0, r1)     // Catch: java.io.IOException -> L25
            L25:
                okhttp3.internal.http2.Http2Reader r0 = r4.reader
                okhttp3.internal.Util.closeQuietly(r0)
                return
            L2b:
                okhttp3.internal.http2.Http2Connection r3 = r4.this$0     // Catch: java.io.IOException -> L30
                r3.close(r0, r1)     // Catch: java.io.IOException -> L30
            L30:
                okhttp3.internal.http2.Http2Reader r0 = r4.reader
                okhttp3.internal.Util.closeQuietly(r0)
                throw r2
        }

        @Override
        public void goAway(int r4, okhttp3.internal.http2.ErrorCode r5, okio.ByteString r6) {
                r3 = this;
                r6.size()
                okhttp3.internal.http2.Http2Connection r5 = r3.this$0
                monitor-enter(r5)
                okhttp3.internal.http2.Http2Connection r6 = r3.this$0     // Catch: java.lang.Throwable -> L48
                java.util.Map<java.lang.Integer, okhttp3.internal.http2.Http2Stream> r6 = r6.streams     // Catch: java.lang.Throwable -> L48
                java.util.Collection r6 = r6.values()     // Catch: java.lang.Throwable -> L48
                okhttp3.internal.http2.Http2Connection r0 = r3.this$0     // Catch: java.lang.Throwable -> L48
                java.util.Map<java.lang.Integer, okhttp3.internal.http2.Http2Stream> r0 = r0.streams     // Catch: java.lang.Throwable -> L48
                int r0 = r0.size()     // Catch: java.lang.Throwable -> L48
                okhttp3.internal.http2.Http2Stream[] r0 = new okhttp3.internal.http2.Http2Stream[r0]     // Catch: java.lang.Throwable -> L48
                java.lang.Object[] r6 = r6.toArray(r0)     // Catch: java.lang.Throwable -> L48
                okhttp3.internal.http2.Http2Stream[] r6 = (okhttp3.internal.http2.Http2Stream[]) r6     // Catch: java.lang.Throwable -> L48
                okhttp3.internal.http2.Http2Connection r0 = r3.this$0     // Catch: java.lang.Throwable -> L48
                r1 = 1
                r0.shutdown = r1     // Catch: java.lang.Throwable -> L48
                monitor-exit(r5)     // Catch: java.lang.Throwable -> L48
                int r5 = r6.length
                r0 = 0
            L26:
                if (r0 >= r5) goto L47
                r1 = r6[r0]
                int r2 = r1.getId()
                if (r2 <= r4) goto L44
                boolean r2 = r1.isLocallyInitiated()
                if (r2 == 0) goto L44
                okhttp3.internal.http2.ErrorCode r2 = okhttp3.internal.http2.ErrorCode.REFUSED_STREAM
                r1.receiveRstStream(r2)
                okhttp3.internal.http2.Http2Connection r2 = r3.this$0
                int r1 = r1.getId()
                r2.removeStream(r1)
            L44:
                int r0 = r0 + 1
                goto L26
            L47:
                return
            L48:
                r4 = move-exception
                monitor-exit(r5)     // Catch: java.lang.Throwable -> L48
                throw r4
        }

        @Override
        public void headers(boolean r10, int r11, int r12, java.util.List<okhttp3.internal.http2.Header> r13) {
                r9 = this;
                okhttp3.internal.http2.Http2Connection r12 = r9.this$0
                boolean r12 = r12.pushedStream(r11)
                if (r12 == 0) goto Le
                okhttp3.internal.http2.Http2Connection r12 = r9.this$0
                r12.pushHeadersLater(r11, r13, r10)
                return
            Le:
                okhttp3.internal.http2.Http2Connection r12 = r9.this$0
                monitor-enter(r12)
                okhttp3.internal.http2.Http2Connection r0 = r9.this$0     // Catch: java.lang.Throwable -> L7d
                okhttp3.internal.http2.Http2Stream r0 = r0.getStream(r11)     // Catch: java.lang.Throwable -> L7d
                if (r0 != 0) goto L73
                okhttp3.internal.http2.Http2Connection r0 = r9.this$0     // Catch: java.lang.Throwable -> L7d
                boolean r0 = r0.shutdown     // Catch: java.lang.Throwable -> L7d
                if (r0 == 0) goto L21
                monitor-exit(r12)     // Catch: java.lang.Throwable -> L7d
                return
            L21:
                okhttp3.internal.http2.Http2Connection r0 = r9.this$0     // Catch: java.lang.Throwable -> L7d
                int r0 = r0.lastGoodStreamId     // Catch: java.lang.Throwable -> L7d
                if (r11 > r0) goto L29
                monitor-exit(r12)     // Catch: java.lang.Throwable -> L7d
                return
            L29:
                int r0 = r11 % 2
                okhttp3.internal.http2.Http2Connection r1 = r9.this$0     // Catch: java.lang.Throwable -> L7d
                int r1 = r1.nextStreamId     // Catch: java.lang.Throwable -> L7d
                r2 = 2
                int r1 = r1 % r2
                if (r0 != r1) goto L35
                monitor-exit(r12)     // Catch: java.lang.Throwable -> L7d
                return
            L35:
                okhttp3.Headers r8 = okhttp3.internal.Util.toHeaders(r13)     // Catch: java.lang.Throwable -> L7d
                okhttp3.internal.http2.Http2Stream r13 = new okhttp3.internal.http2.Http2Stream     // Catch: java.lang.Throwable -> L7d
                okhttp3.internal.http2.Http2Connection r5 = r9.this$0     // Catch: java.lang.Throwable -> L7d
                r6 = 0
                r3 = r13
                r4 = r11
                r7 = r10
                r3.<init>(r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L7d
                okhttp3.internal.http2.Http2Connection r10 = r9.this$0     // Catch: java.lang.Throwable -> L7d
                r10.lastGoodStreamId = r11     // Catch: java.lang.Throwable -> L7d
                okhttp3.internal.http2.Http2Connection r10 = r9.this$0     // Catch: java.lang.Throwable -> L7d
                java.util.Map<java.lang.Integer, okhttp3.internal.http2.Http2Stream> r10 = r10.streams     // Catch: java.lang.Throwable -> L7d
                java.lang.Integer r0 = java.lang.Integer.valueOf(r11)     // Catch: java.lang.Throwable -> L7d
                r10.put(r0, r13)     // Catch: java.lang.Throwable -> L7d
                java.util.concurrent.ExecutorService r10 = okhttp3.internal.http2.Http2Connection.access$100()     // Catch: java.lang.Throwable -> L7d
                okhttp3.internal.http2.Http2Connection$ReaderRunnable$1 r0 = new okhttp3.internal.http2.Http2Connection$ReaderRunnable$1     // Catch: java.lang.Throwable -> L7d
                java.lang.String r1 = "OkHttp %s stream %d"
                java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L7d
                r3 = 0
                okhttp3.internal.http2.Http2Connection r4 = r9.this$0     // Catch: java.lang.Throwable -> L7d
                java.lang.String r4 = r4.hostname     // Catch: java.lang.Throwable -> L7d
                r2[r3] = r4     // Catch: java.lang.Throwable -> L7d
                r3 = 1
                java.lang.Integer r11 = java.lang.Integer.valueOf(r11)     // Catch: java.lang.Throwable -> L7d
                r2[r3] = r11     // Catch: java.lang.Throwable -> L7d
                r0.<init>(r9, r1, r2, r13)     // Catch: java.lang.Throwable -> L7d
                r10.execute(r0)     // Catch: java.lang.Throwable -> L7d
                monitor-exit(r12)     // Catch: java.lang.Throwable -> L7d
                return
            L73:
                monitor-exit(r12)     // Catch: java.lang.Throwable -> L7d
                r0.receiveHeaders(r13)
                if (r10 == 0) goto L7c
                r0.receiveFin()
            L7c:
                return
            L7d:
                r10 = move-exception
                monitor-exit(r12)     // Catch: java.lang.Throwable -> L7d
                throw r10
        }

        @Override
        public void ping(boolean r4, int r5, int r6) {
                r3 = this;
                if (r4 == 0) goto L15
                okhttp3.internal.http2.Http2Connection r4 = r3.this$0
                monitor-enter(r4)
                okhttp3.internal.http2.Http2Connection r5 = r3.this$0     // Catch: java.lang.Throwable -> L12
                r6 = 0
                okhttp3.internal.http2.Http2Connection.access$302(r5, r6)     // Catch: java.lang.Throwable -> L12
                okhttp3.internal.http2.Http2Connection r5 = r3.this$0     // Catch: java.lang.Throwable -> L12
                r5.notifyAll()     // Catch: java.lang.Throwable -> L12
                monitor-exit(r4)     // Catch: java.lang.Throwable -> L12
                goto L26
            L12:
                r5 = move-exception
                monitor-exit(r4)     // Catch: java.lang.Throwable -> L12
                throw r5
            L15:
                okhttp3.internal.http2.Http2Connection r4 = r3.this$0     // Catch: java.util.concurrent.RejectedExecutionException -> L26
                java.util.concurrent.ScheduledExecutorService r4 = okhttp3.internal.http2.Http2Connection.access$200(r4)     // Catch: java.util.concurrent.RejectedExecutionException -> L26
                okhttp3.internal.http2.Http2Connection$PingRunnable r0 = new okhttp3.internal.http2.Http2Connection$PingRunnable     // Catch: java.util.concurrent.RejectedExecutionException -> L26
                okhttp3.internal.http2.Http2Connection r1 = r3.this$0     // Catch: java.util.concurrent.RejectedExecutionException -> L26
                r2 = 1
                r0.<init>(r1, r2, r5, r6)     // Catch: java.util.concurrent.RejectedExecutionException -> L26
                r4.execute(r0)     // Catch: java.util.concurrent.RejectedExecutionException -> L26
            L26:
                return
        }

        @Override
        public void priority(int r1, int r2, int r3, boolean r4) {
                r0 = this;
                return
        }

        @Override
        public void pushPromise(int r1, int r2, java.util.List<okhttp3.internal.http2.Header> r3) {
                r0 = this;
                okhttp3.internal.http2.Http2Connection r1 = r0.this$0
                r1.pushRequestLater(r2, r3)
                return
        }

        @Override
        public void rstStream(int r2, okhttp3.internal.http2.ErrorCode r3) {
                r1 = this;
                okhttp3.internal.http2.Http2Connection r0 = r1.this$0
                boolean r0 = r0.pushedStream(r2)
                if (r0 == 0) goto Le
                okhttp3.internal.http2.Http2Connection r0 = r1.this$0
                r0.pushResetLater(r2, r3)
                return
            Le:
                okhttp3.internal.http2.Http2Connection r0 = r1.this$0
                okhttp3.internal.http2.Http2Stream r2 = r0.removeStream(r2)
                if (r2 == 0) goto L19
                r2.receiveRstStream(r3)
            L19:
                return
        }

        @Override
        public void settings(boolean r11, okhttp3.internal.http2.Settings r12) {
                r10 = this;
                okhttp3.internal.http2.Http2Connection r0 = r10.this$0
                monitor-enter(r0)
                okhttp3.internal.http2.Http2Connection r1 = r10.this$0     // Catch: java.lang.Throwable -> L8f
                okhttp3.internal.http2.Settings r1 = r1.peerSettings     // Catch: java.lang.Throwable -> L8f
                int r1 = r1.getInitialWindowSize()     // Catch: java.lang.Throwable -> L8f
                if (r11 == 0) goto L14
                okhttp3.internal.http2.Http2Connection r11 = r10.this$0     // Catch: java.lang.Throwable -> L8f
                okhttp3.internal.http2.Settings r11 = r11.peerSettings     // Catch: java.lang.Throwable -> L8f
                r11.clear()     // Catch: java.lang.Throwable -> L8f
            L14:
                okhttp3.internal.http2.Http2Connection r11 = r10.this$0     // Catch: java.lang.Throwable -> L8f
                okhttp3.internal.http2.Settings r11 = r11.peerSettings     // Catch: java.lang.Throwable -> L8f
                r11.merge(r12)     // Catch: java.lang.Throwable -> L8f
                r10.applyAndAckSettings(r12)     // Catch: java.lang.Throwable -> L8f
                okhttp3.internal.http2.Http2Connection r11 = r10.this$0     // Catch: java.lang.Throwable -> L8f
                okhttp3.internal.http2.Settings r11 = r11.peerSettings     // Catch: java.lang.Throwable -> L8f
                int r11 = r11.getInitialWindowSize()     // Catch: java.lang.Throwable -> L8f
                r12 = -1
                r2 = 0
                r4 = 1
                r5 = 0
                if (r11 == r12) goto L5f
                if (r11 == r1) goto L5f
                int r11 = r11 - r1
                long r11 = (long) r11     // Catch: java.lang.Throwable -> L8f
                okhttp3.internal.http2.Http2Connection r1 = r10.this$0     // Catch: java.lang.Throwable -> L8f
                boolean r1 = r1.receivedInitialPeerSettings     // Catch: java.lang.Throwable -> L8f
                if (r1 != 0) goto L3b
                okhttp3.internal.http2.Http2Connection r1 = r10.this$0     // Catch: java.lang.Throwable -> L8f
                r1.receivedInitialPeerSettings = r4     // Catch: java.lang.Throwable -> L8f
            L3b:
                okhttp3.internal.http2.Http2Connection r1 = r10.this$0     // Catch: java.lang.Throwable -> L8f
                java.util.Map<java.lang.Integer, okhttp3.internal.http2.Http2Stream> r1 = r1.streams     // Catch: java.lang.Throwable -> L8f
                boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> L8f
                if (r1 != 0) goto L60
                okhttp3.internal.http2.Http2Connection r1 = r10.this$0     // Catch: java.lang.Throwable -> L8f
                java.util.Map<java.lang.Integer, okhttp3.internal.http2.Http2Stream> r1 = r1.streams     // Catch: java.lang.Throwable -> L8f
                java.util.Collection r1 = r1.values()     // Catch: java.lang.Throwable -> L8f
                okhttp3.internal.http2.Http2Connection r5 = r10.this$0     // Catch: java.lang.Throwable -> L8f
                java.util.Map<java.lang.Integer, okhttp3.internal.http2.Http2Stream> r5 = r5.streams     // Catch: java.lang.Throwable -> L8f
                int r5 = r5.size()     // Catch: java.lang.Throwable -> L8f
                okhttp3.internal.http2.Http2Stream[] r5 = new okhttp3.internal.http2.Http2Stream[r5]     // Catch: java.lang.Throwable -> L8f
                java.lang.Object[] r1 = r1.toArray(r5)     // Catch: java.lang.Throwable -> L8f
                r5 = r1
                okhttp3.internal.http2.Http2Stream[] r5 = (okhttp3.internal.http2.Http2Stream[]) r5     // Catch: java.lang.Throwable -> L8f
                goto L60
            L5f:
                r11 = r2
            L60:
                java.util.concurrent.ExecutorService r1 = okhttp3.internal.http2.Http2Connection.access$100()     // Catch: java.lang.Throwable -> L8f
                okhttp3.internal.http2.Http2Connection$ReaderRunnable$2 r6 = new okhttp3.internal.http2.Http2Connection$ReaderRunnable$2     // Catch: java.lang.Throwable -> L8f
                java.lang.String r7 = "OkHttp %s settings"
                java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L8f
                okhttp3.internal.http2.Http2Connection r8 = r10.this$0     // Catch: java.lang.Throwable -> L8f
                java.lang.String r8 = r8.hostname     // Catch: java.lang.Throwable -> L8f
                r9 = 0
                r4[r9] = r8     // Catch: java.lang.Throwable -> L8f
                r6.<init>(r10, r7, r4)     // Catch: java.lang.Throwable -> L8f
                r1.execute(r6)     // Catch: java.lang.Throwable -> L8f
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L8f
                if (r5 == 0) goto L8e
                int r0 = (r11 > r2 ? 1 : (r11 == r2 ? 0 : -1))
                if (r0 == 0) goto L8e
                int r0 = r5.length
            L7f:
                if (r9 >= r0) goto L8e
                r1 = r5[r9]
                monitor-enter(r1)
                r1.addBytesToWriteWindow(r11)     // Catch: java.lang.Throwable -> L8b
                monitor-exit(r1)     // Catch: java.lang.Throwable -> L8b
                int r9 = r9 + 1
                goto L7f
            L8b:
                r11 = move-exception
                monitor-exit(r1)     // Catch: java.lang.Throwable -> L8b
                throw r11
            L8e:
                return
            L8f:
                r11 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L8f
                throw r11
        }

        @Override
        public void windowUpdate(int r4, long r5) {
                r3 = this;
                if (r4 != 0) goto L16
                okhttp3.internal.http2.Http2Connection r0 = r3.this$0
                monitor-enter(r0)
                okhttp3.internal.http2.Http2Connection r4 = r3.this$0     // Catch: java.lang.Throwable -> L13
                long r1 = r4.bytesLeftInWriteWindow     // Catch: java.lang.Throwable -> L13
                long r1 = r1 + r5
                r4.bytesLeftInWriteWindow = r1     // Catch: java.lang.Throwable -> L13
                okhttp3.internal.http2.Http2Connection r4 = r3.this$0     // Catch: java.lang.Throwable -> L13
                r4.notifyAll()     // Catch: java.lang.Throwable -> L13
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
                goto L27
            L13:
                r4 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
                throw r4
            L16:
                okhttp3.internal.http2.Http2Connection r0 = r3.this$0
                okhttp3.internal.http2.Http2Stream r4 = r0.getStream(r4)
                if (r4 == 0) goto L27
                monitor-enter(r4)
                r4.addBytesToWriteWindow(r5)     // Catch: java.lang.Throwable -> L24
                monitor-exit(r4)     // Catch: java.lang.Throwable -> L24
                goto L27
            L24:
                r5 = move-exception
                monitor-exit(r4)     // Catch: java.lang.Throwable -> L24
                throw r5
            L27:
                return
        }
    }

    static {
            java.util.concurrent.ThreadPoolExecutor r8 = new java.util.concurrent.ThreadPoolExecutor
            r1 = 0
            r2 = 2147483647(0x7fffffff, float:NaN)
            r3 = 60
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.SynchronousQueue r6 = new java.util.concurrent.SynchronousQueue
            r6.<init>()
            r0 = 1
            java.lang.String r7 = "OkHttp Http2Connection"
            java.util.concurrent.ThreadFactory r7 = okhttp3.internal.Util.threadFactory(r7, r0)
            r0 = r8
            r0.<init>(r1, r2, r3, r5, r6, r7)
            okhttp3.internal.http2.Http2Connection.listenerExecutor = r8
            return
    }

    Http2Connection(okhttp3.internal.http2.Http2Connection.Builder r22) {
            r21 = this;
            r0 = r21
            r1 = r22
            r21.<init>()
            java.util.LinkedHashMap r2 = new java.util.LinkedHashMap
            r2.<init>()
            r0.streams = r2
            r2 = 0
            r0.unacknowledgedBytesRead = r2
            okhttp3.internal.http2.Settings r2 = new okhttp3.internal.http2.Settings
            r2.<init>()
            r0.okHttpSettings = r2
            okhttp3.internal.http2.Settings r2 = new okhttp3.internal.http2.Settings
            r2.<init>()
            r0.peerSettings = r2
            r2 = 0
            r0.receivedInitialPeerSettings = r2
            java.util.LinkedHashSet r3 = new java.util.LinkedHashSet
            r3.<init>()
            r0.currentPushRequests = r3
            okhttp3.internal.http2.PushObserver r3 = r1.pushObserver
            r0.pushObserver = r3
            boolean r3 = r1.client
            r0.client = r3
            okhttp3.internal.http2.Http2Connection$Listener r3 = r1.listener
            r0.listener = r3
            boolean r3 = r1.client
            r4 = 2
            r5 = 1
            if (r3 == 0) goto L3e
            r3 = 1
            goto L3f
        L3e:
            r3 = 2
        L3f:
            r0.nextStreamId = r3
            boolean r3 = r1.client
            if (r3 == 0) goto L4a
            int r3 = r0.nextStreamId
            int r3 = r3 + r4
            r0.nextStreamId = r3
        L4a:
            boolean r3 = r1.client
            r4 = 7
            if (r3 == 0) goto L56
            okhttp3.internal.http2.Settings r3 = r0.okHttpSettings
            r6 = 16777216(0x1000000, float:2.3509887E-38)
            r3.set(r4, r6)
        L56:
            java.lang.String r3 = r1.hostname
            r0.hostname = r3
            java.util.concurrent.ScheduledThreadPoolExecutor r3 = new java.util.concurrent.ScheduledThreadPoolExecutor
            java.lang.Object[] r6 = new java.lang.Object[r5]
            java.lang.String r7 = r0.hostname
            r6[r2] = r7
            java.lang.String r7 = "OkHttp %s Writer"
            java.lang.String r6 = okhttp3.internal.Util.format(r7, r6)
            java.util.concurrent.ThreadFactory r6 = okhttp3.internal.Util.threadFactory(r6, r2)
            r3.<init>(r5, r6)
            r0.writerExecutor = r3
            int r3 = r1.pingIntervalMillis
            if (r3 == 0) goto L87
            java.util.concurrent.ScheduledExecutorService r6 = r0.writerExecutor
            okhttp3.internal.http2.Http2Connection$PingRunnable r7 = new okhttp3.internal.http2.Http2Connection$PingRunnable
            r7.<init>(r0, r2, r2, r2)
            int r3 = r1.pingIntervalMillis
            long r8 = (long) r3
            int r3 = r1.pingIntervalMillis
            long r10 = (long) r3
            java.util.concurrent.TimeUnit r12 = java.util.concurrent.TimeUnit.MILLISECONDS
            r6.scheduleAtFixedRate(r7, r8, r10, r12)
        L87:
            java.util.concurrent.ThreadPoolExecutor r3 = new java.util.concurrent.ThreadPoolExecutor
            r14 = 0
            r15 = 1
            r16 = 60
            java.util.concurrent.TimeUnit r18 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingQueue r19 = new java.util.concurrent.LinkedBlockingQueue
            r19.<init>()
            java.lang.Object[] r6 = new java.lang.Object[r5]
            java.lang.String r7 = r0.hostname
            r6[r2] = r7
            java.lang.String r2 = "OkHttp %s Push Observer"
            java.lang.String r2 = okhttp3.internal.Util.format(r2, r6)
            java.util.concurrent.ThreadFactory r20 = okhttp3.internal.Util.threadFactory(r2, r5)
            r13 = r3
            r13.<init>(r14, r15, r16, r18, r19, r20)
            r0.pushExecutor = r3
            okhttp3.internal.http2.Settings r2 = r0.peerSettings
            r3 = 65535(0xffff, float:9.1834E-41)
            r2.set(r4, r3)
            okhttp3.internal.http2.Settings r2 = r0.peerSettings
            r3 = 5
            r4 = 16384(0x4000, float:2.2959E-41)
            r2.set(r3, r4)
            okhttp3.internal.http2.Settings r2 = r0.peerSettings
            int r2 = r2.getInitialWindowSize()
            long r2 = (long) r2
            r0.bytesLeftInWriteWindow = r2
            java.net.Socket r2 = r1.socket
            r0.socket = r2
            okhttp3.internal.http2.Http2Writer r2 = new okhttp3.internal.http2.Http2Writer
            okio.BufferedSink r3 = r1.sink
            boolean r4 = r0.client
            r2.<init>(r3, r4)
            r0.writer = r2
            okhttp3.internal.http2.Http2Connection$ReaderRunnable r2 = new okhttp3.internal.http2.Http2Connection$ReaderRunnable
            okhttp3.internal.http2.Http2Reader r3 = new okhttp3.internal.http2.Http2Reader
            okio.BufferedSource r1 = r1.source
            boolean r4 = r0.client
            r3.<init>(r1, r4)
            r2.<init>(r0, r3)
            r0.readerRunnable = r2
            return
    }

    static void access$000(okhttp3.internal.http2.Http2Connection r0) {
            r0.failConnection()
            return
    }

    static java.util.concurrent.ExecutorService access$100() {
            java.util.concurrent.ExecutorService r0 = okhttp3.internal.http2.Http2Connection.listenerExecutor
            return r0
    }

    static java.util.concurrent.ScheduledExecutorService access$200(okhttp3.internal.http2.Http2Connection r0) {
            java.util.concurrent.ScheduledExecutorService r0 = r0.writerExecutor
            return r0
    }

    static boolean access$302(okhttp3.internal.http2.Http2Connection r0, boolean r1) {
            r0.awaitingPong = r1
            return r1
    }

    private void failConnection() {
            r2 = this;
            okhttp3.internal.http2.ErrorCode r0 = okhttp3.internal.http2.ErrorCode.PROTOCOL_ERROR     // Catch: java.io.IOException -> L7
            okhttp3.internal.http2.ErrorCode r1 = okhttp3.internal.http2.ErrorCode.PROTOCOL_ERROR     // Catch: java.io.IOException -> L7
            r2.close(r0, r1)     // Catch: java.io.IOException -> L7
        L7:
            return
    }

    private okhttp3.internal.http2.Http2Stream newStream(int r11, java.util.List<okhttp3.internal.http2.Header> r12, boolean r13) throws java.io.IOException {
            r10 = this;
            r6 = r13 ^ 1
            r4 = 0
            okhttp3.internal.http2.Http2Writer r7 = r10.writer
            monitor-enter(r7)
            monitor-enter(r10)     // Catch: java.lang.Throwable -> L78
            int r0 = r10.nextStreamId     // Catch: java.lang.Throwable -> L75
            r1 = 1073741823(0x3fffffff, float:1.9999999)
            if (r0 <= r1) goto L13
            okhttp3.internal.http2.ErrorCode r0 = okhttp3.internal.http2.ErrorCode.REFUSED_STREAM     // Catch: java.lang.Throwable -> L75
            r10.shutdown(r0)     // Catch: java.lang.Throwable -> L75
        L13:
            boolean r0 = r10.shutdown     // Catch: java.lang.Throwable -> L75
            if (r0 != 0) goto L6f
            int r8 = r10.nextStreamId     // Catch: java.lang.Throwable -> L75
            int r0 = r10.nextStreamId     // Catch: java.lang.Throwable -> L75
            int r0 = r0 + 2
            r10.nextStreamId = r0     // Catch: java.lang.Throwable -> L75
            okhttp3.internal.http2.Http2Stream r9 = new okhttp3.internal.http2.Http2Stream     // Catch: java.lang.Throwable -> L75
            r5 = 0
            r0 = r9
            r1 = r8
            r2 = r10
            r3 = r6
            r0.<init>(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L75
            if (r13 == 0) goto L3c
            long r0 = r10.bytesLeftInWriteWindow     // Catch: java.lang.Throwable -> L75
            r2 = 0
            int r13 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r13 == 0) goto L3c
            long r0 = r9.bytesLeftInWriteWindow     // Catch: java.lang.Throwable -> L75
            int r13 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r13 != 0) goto L3a
            goto L3c
        L3a:
            r13 = 0
            goto L3d
        L3c:
            r13 = 1
        L3d:
            boolean r0 = r9.isOpen()     // Catch: java.lang.Throwable -> L75
            if (r0 == 0) goto L4c
            java.util.Map<java.lang.Integer, okhttp3.internal.http2.Http2Stream> r0 = r10.streams     // Catch: java.lang.Throwable -> L75
            java.lang.Integer r1 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L75
            r0.put(r1, r9)     // Catch: java.lang.Throwable -> L75
        L4c:
            monitor-exit(r10)     // Catch: java.lang.Throwable -> L75
            if (r11 != 0) goto L55
            okhttp3.internal.http2.Http2Writer r0 = r10.writer     // Catch: java.lang.Throwable -> L78
            r0.synStream(r6, r8, r11, r12)     // Catch: java.lang.Throwable -> L78
            goto L5e
        L55:
            boolean r0 = r10.client     // Catch: java.lang.Throwable -> L78
            if (r0 != 0) goto L67
            okhttp3.internal.http2.Http2Writer r0 = r10.writer     // Catch: java.lang.Throwable -> L78
            r0.pushPromise(r11, r8, r12)     // Catch: java.lang.Throwable -> L78
        L5e:
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L78
            if (r13 == 0) goto L66
            okhttp3.internal.http2.Http2Writer r11 = r10.writer
            r11.flush()
        L66:
            return r9
        L67:
            java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L78
            java.lang.String r12 = "client streams shouldn't have associated stream IDs"
            r11.<init>(r12)     // Catch: java.lang.Throwable -> L78
            throw r11     // Catch: java.lang.Throwable -> L78
        L6f:
            okhttp3.internal.http2.ConnectionShutdownException r11 = new okhttp3.internal.http2.ConnectionShutdownException     // Catch: java.lang.Throwable -> L75
            r11.<init>()     // Catch: java.lang.Throwable -> L75
            throw r11     // Catch: java.lang.Throwable -> L75
        L75:
            r11 = move-exception
            monitor-exit(r10)     // Catch: java.lang.Throwable -> L75
            throw r11     // Catch: java.lang.Throwable -> L78
        L78:
            r11 = move-exception
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L78
            throw r11
    }

    private synchronized void pushExecutorExecute(okhttp3.internal.NamedRunnable r2) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.isShutdown()     // Catch: java.lang.Throwable -> Le
            if (r0 != 0) goto Lc
            java.util.concurrent.ExecutorService r0 = r1.pushExecutor     // Catch: java.lang.Throwable -> Le
            r0.execute(r2)     // Catch: java.lang.Throwable -> Le
        Lc:
            monitor-exit(r1)
            return
        Le:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    synchronized void awaitPong() throws java.lang.InterruptedException {
            r1 = this;
            monitor-enter(r1)
        L1:
            boolean r0 = r1.awaitingPong     // Catch: java.lang.Throwable -> Lb
            if (r0 == 0) goto L9
            r1.wait()     // Catch: java.lang.Throwable -> Lb
            goto L1
        L9:
            monitor-exit(r1)
            return
        Lb:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    public void close() throws java.io.IOException {
            r2 = this;
            okhttp3.internal.http2.ErrorCode r0 = okhttp3.internal.http2.ErrorCode.NO_ERROR
            okhttp3.internal.http2.ErrorCode r1 = okhttp3.internal.http2.ErrorCode.CANCEL
            r2.close(r0, r1)
            return
    }

    void close(okhttp3.internal.http2.ErrorCode r5, okhttp3.internal.http2.ErrorCode r6) throws java.io.IOException {
            r4 = this;
            r0 = 0
            r4.shutdown(r5)     // Catch: java.io.IOException -> L6
            r5 = r0
            goto L7
        L6:
            r5 = move-exception
        L7:
            monitor-enter(r4)
            java.util.Map<java.lang.Integer, okhttp3.internal.http2.Http2Stream> r1 = r4.streams     // Catch: java.lang.Throwable -> L5c
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> L5c
            if (r1 != 0) goto L29
            java.util.Map<java.lang.Integer, okhttp3.internal.http2.Http2Stream> r0 = r4.streams     // Catch: java.lang.Throwable -> L5c
            java.util.Collection r0 = r0.values()     // Catch: java.lang.Throwable -> L5c
            java.util.Map<java.lang.Integer, okhttp3.internal.http2.Http2Stream> r1 = r4.streams     // Catch: java.lang.Throwable -> L5c
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L5c
            okhttp3.internal.http2.Http2Stream[] r1 = new okhttp3.internal.http2.Http2Stream[r1]     // Catch: java.lang.Throwable -> L5c
            java.lang.Object[] r0 = r0.toArray(r1)     // Catch: java.lang.Throwable -> L5c
            okhttp3.internal.http2.Http2Stream[] r0 = (okhttp3.internal.http2.Http2Stream[]) r0     // Catch: java.lang.Throwable -> L5c
            java.util.Map<java.lang.Integer, okhttp3.internal.http2.Http2Stream> r1 = r4.streams     // Catch: java.lang.Throwable -> L5c
            r1.clear()     // Catch: java.lang.Throwable -> L5c
        L29:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L5c
            if (r0 == 0) goto L3d
            int r1 = r0.length
            r2 = 0
        L2e:
            if (r2 >= r1) goto L3d
            r3 = r0[r2]
            r3.close(r6)     // Catch: java.io.IOException -> L36
            goto L3a
        L36:
            r3 = move-exception
            if (r5 == 0) goto L3a
            r5 = r3
        L3a:
            int r2 = r2 + 1
            goto L2e
        L3d:
            okhttp3.internal.http2.Http2Writer r6 = r4.writer     // Catch: java.io.IOException -> L43
            r6.close()     // Catch: java.io.IOException -> L43
            goto L47
        L43:
            r6 = move-exception
            if (r5 != 0) goto L47
            r5 = r6
        L47:
            java.net.Socket r6 = r4.socket     // Catch: java.io.IOException -> L4d
            r6.close()     // Catch: java.io.IOException -> L4d
            goto L4e
        L4d:
            r5 = move-exception
        L4e:
            java.util.concurrent.ScheduledExecutorService r6 = r4.writerExecutor
            r6.shutdown()
            java.util.concurrent.ExecutorService r6 = r4.pushExecutor
            r6.shutdown()
            if (r5 != 0) goto L5b
            return
        L5b:
            throw r5
        L5c:
            r5 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L5c
            throw r5
    }

    public void flush() throws java.io.IOException {
            r1 = this;
            okhttp3.internal.http2.Http2Writer r0 = r1.writer
            r0.flush()
            return
    }

    public okhttp3.Protocol getProtocol() {
            r1 = this;
            okhttp3.Protocol r0 = okhttp3.Protocol.HTTP_2
            return r0
    }

    synchronized okhttp3.internal.http2.Http2Stream getStream(int r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.Map<java.lang.Integer, okhttp3.internal.http2.Http2Stream> r0 = r1.streams     // Catch: java.lang.Throwable -> Lf
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> Lf
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> Lf
            okhttp3.internal.http2.Http2Stream r2 = (okhttp3.internal.http2.Http2Stream) r2     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r1)
            return r2
        Lf:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized boolean isShutdown() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.shutdown     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized int maxConcurrentStreams() {
            r2 = this;
            monitor-enter(r2)
            okhttp3.internal.http2.Settings r0 = r2.peerSettings     // Catch: java.lang.Throwable -> Lc
            r1 = 2147483647(0x7fffffff, float:NaN)
            int r0 = r0.getMaxConcurrentStreams(r1)     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r2)
            return r0
        Lc:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public okhttp3.internal.http2.Http2Stream newStream(java.util.List<okhttp3.internal.http2.Header> r2, boolean r3) throws java.io.IOException {
            r1 = this;
            r0 = 0
            okhttp3.internal.http2.Http2Stream r2 = r1.newStream(r0, r2, r3)
            return r2
    }

    public synchronized int openStreamCount() {
            r1 = this;
            monitor-enter(r1)
            java.util.Map<java.lang.Integer, okhttp3.internal.http2.Http2Stream> r0 = r1.streams     // Catch: java.lang.Throwable -> L9
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)
            return r0
        L9:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    void pushDataLater(int r9, okio.BufferedSource r10, int r11, boolean r12) throws java.io.IOException {
            r8 = this;
            okio.Buffer r5 = new okio.Buffer
            r5.<init>()
            long r0 = (long) r11
            r10.require(r0)
            r10.read(r5, r0)
            long r2 = r5.size()
            int r10 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r10 != 0) goto L33
            okhttp3.internal.http2.Http2Connection$5 r10 = new okhttp3.internal.http2.Http2Connection$5
            r0 = 2
            java.lang.Object[] r3 = new java.lang.Object[r0]
            r0 = 0
            java.lang.String r1 = r8.hostname
            r3[r0] = r1
            r0 = 1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r9)
            r3[r0] = r1
            java.lang.String r2 = "OkHttp %s Push Data[%s]"
            r0 = r10
            r1 = r8
            r4 = r9
            r6 = r11
            r7 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            r8.pushExecutorExecute(r10)
            return
        L33:
            java.io.IOException r9 = new java.io.IOException
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            long r0 = r5.size()
            r10.append(r0)
            java.lang.String r12 = " != "
            r10.append(r12)
            r10.append(r11)
            java.lang.String r10 = r10.toString()
            r9.<init>(r10)
            throw r9
    }

    void pushHeadersLater(int r9, java.util.List<okhttp3.internal.http2.Header> r10, boolean r11) {
            r8 = this;
            okhttp3.internal.http2.Http2Connection$4 r7 = new okhttp3.internal.http2.Http2Connection$4     // Catch: java.util.concurrent.RejectedExecutionException -> L1e
            java.lang.String r2 = "OkHttp %s Push Headers[%s]"
            r0 = 2
            java.lang.Object[] r3 = new java.lang.Object[r0]     // Catch: java.util.concurrent.RejectedExecutionException -> L1e
            r0 = 0
            java.lang.String r1 = r8.hostname     // Catch: java.util.concurrent.RejectedExecutionException -> L1e
            r3[r0] = r1     // Catch: java.util.concurrent.RejectedExecutionException -> L1e
            r0 = 1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r9)     // Catch: java.util.concurrent.RejectedExecutionException -> L1e
            r3[r0] = r1     // Catch: java.util.concurrent.RejectedExecutionException -> L1e
            r0 = r7
            r1 = r8
            r4 = r9
            r5 = r10
            r6 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6)     // Catch: java.util.concurrent.RejectedExecutionException -> L1e
            r8.pushExecutorExecute(r7)     // Catch: java.util.concurrent.RejectedExecutionException -> L1e
        L1e:
            return
    }

    void pushRequestLater(int r9, java.util.List<okhttp3.internal.http2.Header> r10) {
            r8 = this;
            monitor-enter(r8)
            java.util.Set<java.lang.Integer> r0 = r8.currentPushRequests     // Catch: java.lang.Throwable -> L3c
            java.lang.Integer r1 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L3c
            boolean r0 = r0.contains(r1)     // Catch: java.lang.Throwable -> L3c
            if (r0 == 0) goto L14
            okhttp3.internal.http2.ErrorCode r10 = okhttp3.internal.http2.ErrorCode.PROTOCOL_ERROR     // Catch: java.lang.Throwable -> L3c
            r8.writeSynResetLater(r9, r10)     // Catch: java.lang.Throwable -> L3c
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L3c
            return
        L14:
            java.util.Set<java.lang.Integer> r0 = r8.currentPushRequests     // Catch: java.lang.Throwable -> L3c
            java.lang.Integer r1 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L3c
            r0.add(r1)     // Catch: java.lang.Throwable -> L3c
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L3c
            okhttp3.internal.http2.Http2Connection$3 r0 = new okhttp3.internal.http2.Http2Connection$3     // Catch: java.util.concurrent.RejectedExecutionException -> L3b
            java.lang.String r4 = "OkHttp %s Push Request[%s]"
            r1 = 2
            java.lang.Object[] r5 = new java.lang.Object[r1]     // Catch: java.util.concurrent.RejectedExecutionException -> L3b
            r1 = 0
            java.lang.String r2 = r8.hostname     // Catch: java.util.concurrent.RejectedExecutionException -> L3b
            r5[r1] = r2     // Catch: java.util.concurrent.RejectedExecutionException -> L3b
            r1 = 1
            java.lang.Integer r2 = java.lang.Integer.valueOf(r9)     // Catch: java.util.concurrent.RejectedExecutionException -> L3b
            r5[r1] = r2     // Catch: java.util.concurrent.RejectedExecutionException -> L3b
            r2 = r0
            r3 = r8
            r6 = r9
            r7 = r10
            r2.<init>(r3, r4, r5, r6, r7)     // Catch: java.util.concurrent.RejectedExecutionException -> L3b
            r8.pushExecutorExecute(r0)     // Catch: java.util.concurrent.RejectedExecutionException -> L3b
        L3b:
            return
        L3c:
            r9 = move-exception
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L3c
            throw r9
    }

    void pushResetLater(int r8, okhttp3.internal.http2.ErrorCode r9) {
            r7 = this;
            okhttp3.internal.http2.Http2Connection$6 r6 = new okhttp3.internal.http2.Http2Connection$6
            r0 = 2
            java.lang.Object[] r3 = new java.lang.Object[r0]
            java.lang.String r0 = r7.hostname
            r1 = 0
            r3[r1] = r0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r8)
            r1 = 1
            r3[r1] = r0
            java.lang.String r2 = "OkHttp %s Push Reset[%s]"
            r0 = r6
            r1 = r7
            r4 = r8
            r5 = r9
            r0.<init>(r1, r2, r3, r4, r5)
            r7.pushExecutorExecute(r6)
            return
    }

    public okhttp3.internal.http2.Http2Stream pushStream(int r2, java.util.List<okhttp3.internal.http2.Header> r3, boolean r4) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.client
            if (r0 != 0) goto L9
            okhttp3.internal.http2.Http2Stream r2 = r1.newStream(r2, r3, r4)
            return r2
        L9:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "Client cannot push requests."
            r2.<init>(r3)
            throw r2
    }

    boolean pushedStream(int r2) {
            r1 = this;
            r0 = 1
            if (r2 == 0) goto L7
            r2 = r2 & r0
            if (r2 != 0) goto L7
            goto L8
        L7:
            r0 = 0
        L8:
            return r0
    }

    synchronized okhttp3.internal.http2.Http2Stream removeStream(int r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.Map<java.lang.Integer, okhttp3.internal.http2.Http2Stream> r0 = r1.streams     // Catch: java.lang.Throwable -> L12
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L12
            java.lang.Object r2 = r0.remove(r2)     // Catch: java.lang.Throwable -> L12
            okhttp3.internal.http2.Http2Stream r2 = (okhttp3.internal.http2.Http2Stream) r2     // Catch: java.lang.Throwable -> L12
            r1.notifyAll()     // Catch: java.lang.Throwable -> L12
            monitor-exit(r1)
            return r2
        L12:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public void setSettings(okhttp3.internal.http2.Settings r3) throws java.io.IOException {
            r2 = this;
            okhttp3.internal.http2.Http2Writer r0 = r2.writer
            monitor-enter(r0)
            monitor-enter(r2)     // Catch: java.lang.Throwable -> L1e
            boolean r1 = r2.shutdown     // Catch: java.lang.Throwable -> L1b
            if (r1 != 0) goto L15
            okhttp3.internal.http2.Settings r1 = r2.okHttpSettings     // Catch: java.lang.Throwable -> L1b
            r1.merge(r3)     // Catch: java.lang.Throwable -> L1b
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1b
            okhttp3.internal.http2.Http2Writer r1 = r2.writer     // Catch: java.lang.Throwable -> L1e
            r1.settings(r3)     // Catch: java.lang.Throwable -> L1e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            return
        L15:
            okhttp3.internal.http2.ConnectionShutdownException r3 = new okhttp3.internal.http2.ConnectionShutdownException     // Catch: java.lang.Throwable -> L1b
            r3.<init>()     // Catch: java.lang.Throwable -> L1b
            throw r3     // Catch: java.lang.Throwable -> L1b
        L1b:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1b
            throw r3     // Catch: java.lang.Throwable -> L1e
        L1e:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            throw r3
    }

    public void shutdown(okhttp3.internal.http2.ErrorCode r5) throws java.io.IOException {
            r4 = this;
            okhttp3.internal.http2.Http2Writer r0 = r4.writer
            monitor-enter(r0)
            monitor-enter(r4)     // Catch: java.lang.Throwable -> L1d
            boolean r1 = r4.shutdown     // Catch: java.lang.Throwable -> L1a
            if (r1 == 0) goto Lb
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1d
            return
        Lb:
            r1 = 1
            r4.shutdown = r1     // Catch: java.lang.Throwable -> L1a
            int r1 = r4.lastGoodStreamId     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L1a
            okhttp3.internal.http2.Http2Writer r2 = r4.writer     // Catch: java.lang.Throwable -> L1d
            byte[] r3 = okhttp3.internal.Util.EMPTY_BYTE_ARRAY     // Catch: java.lang.Throwable -> L1d
            r2.goAway(r1, r5, r3)     // Catch: java.lang.Throwable -> L1d
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1d
            return
        L1a:
            r5 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L1a
            throw r5     // Catch: java.lang.Throwable -> L1d
        L1d:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1d
            throw r5
    }

    public void start() throws java.io.IOException {
            r1 = this;
            r0 = 1
            r1.start(r0)
            return
    }

    void start(boolean r6) throws java.io.IOException {
            r5 = this;
            if (r6 == 0) goto L21
            okhttp3.internal.http2.Http2Writer r6 = r5.writer
            r6.connectionPreface()
            okhttp3.internal.http2.Http2Writer r6 = r5.writer
            okhttp3.internal.http2.Settings r0 = r5.okHttpSettings
            r6.settings(r0)
            okhttp3.internal.http2.Settings r6 = r5.okHttpSettings
            int r6 = r6.getInitialWindowSize()
            r0 = 65535(0xffff, float:9.1834E-41)
            if (r6 == r0) goto L21
            okhttp3.internal.http2.Http2Writer r1 = r5.writer
            r2 = 0
            int r6 = r6 - r0
            long r3 = (long) r6
            r1.windowUpdate(r2, r3)
        L21:
            java.lang.Thread r6 = new java.lang.Thread
            okhttp3.internal.http2.Http2Connection$ReaderRunnable r0 = r5.readerRunnable
            r6.<init>(r0)
            r6.start()
            return
    }

    synchronized void updateConnectionFlowControl(long r4) {
            r3 = this;
            monitor-enter(r3)
            long r0 = r3.unacknowledgedBytesRead     // Catch: java.lang.Throwable -> L21
            long r0 = r0 + r4
            r3.unacknowledgedBytesRead = r0     // Catch: java.lang.Throwable -> L21
            long r4 = r3.unacknowledgedBytesRead     // Catch: java.lang.Throwable -> L21
            okhttp3.internal.http2.Settings r0 = r3.okHttpSettings     // Catch: java.lang.Throwable -> L21
            int r0 = r0.getInitialWindowSize()     // Catch: java.lang.Throwable -> L21
            int r0 = r0 / 2
            long r0 = (long) r0     // Catch: java.lang.Throwable -> L21
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 < 0) goto L1f
            r4 = 0
            long r0 = r3.unacknowledgedBytesRead     // Catch: java.lang.Throwable -> L21
            r3.writeWindowUpdateLater(r4, r0)     // Catch: java.lang.Throwable -> L21
            r4 = 0
            r3.unacknowledgedBytesRead = r4     // Catch: java.lang.Throwable -> L21
        L1f:
            monitor-exit(r3)
            return
        L21:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public void writeData(int r9, boolean r10, okio.Buffer r11, long r12) throws java.io.IOException {
            r8 = this;
            r0 = 0
            r1 = 0
            int r3 = (r12 > r1 ? 1 : (r12 == r1 ? 0 : -1))
            if (r3 != 0) goto Ld
            okhttp3.internal.http2.Http2Writer r12 = r8.writer
            r12.data(r10, r9, r11, r0)
            return
        Ld:
            int r3 = (r12 > r1 ? 1 : (r12 == r1 ? 0 : -1))
            if (r3 <= 0) goto L69
            monitor-enter(r8)
        L12:
            long r3 = r8.bytesLeftInWriteWindow     // Catch: java.lang.Throwable -> L58 java.lang.InterruptedException -> L5a
            int r5 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r5 > 0) goto L30
            java.util.Map<java.lang.Integer, okhttp3.internal.http2.Http2Stream> r3 = r8.streams     // Catch: java.lang.Throwable -> L58 java.lang.InterruptedException -> L5a
            java.lang.Integer r4 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L58 java.lang.InterruptedException -> L5a
            boolean r3 = r3.containsKey(r4)     // Catch: java.lang.Throwable -> L58 java.lang.InterruptedException -> L5a
            if (r3 == 0) goto L28
            r8.wait()     // Catch: java.lang.Throwable -> L58 java.lang.InterruptedException -> L5a
            goto L12
        L28:
            java.io.IOException r9 = new java.io.IOException     // Catch: java.lang.Throwable -> L58 java.lang.InterruptedException -> L5a
            java.lang.String r10 = "stream closed"
            r9.<init>(r10)     // Catch: java.lang.Throwable -> L58 java.lang.InterruptedException -> L5a
            throw r9     // Catch: java.lang.Throwable -> L58 java.lang.InterruptedException -> L5a
        L30:
            long r3 = r8.bytesLeftInWriteWindow     // Catch: java.lang.Throwable -> L58
            long r3 = java.lang.Math.min(r12, r3)     // Catch: java.lang.Throwable -> L58
            int r4 = (int) r3     // Catch: java.lang.Throwable -> L58
            okhttp3.internal.http2.Http2Writer r3 = r8.writer     // Catch: java.lang.Throwable -> L58
            int r3 = r3.maxDataLength()     // Catch: java.lang.Throwable -> L58
            int r3 = java.lang.Math.min(r4, r3)     // Catch: java.lang.Throwable -> L58
            long r4 = r8.bytesLeftInWriteWindow     // Catch: java.lang.Throwable -> L58
            long r6 = (long) r3     // Catch: java.lang.Throwable -> L58
            long r4 = r4 - r6
            r8.bytesLeftInWriteWindow = r4     // Catch: java.lang.Throwable -> L58
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L58
            long r12 = r12 - r6
            okhttp3.internal.http2.Http2Writer r4 = r8.writer
            if (r10 == 0) goto L53
            int r5 = (r12 > r1 ? 1 : (r12 == r1 ? 0 : -1))
            if (r5 != 0) goto L53
            r5 = 1
            goto L54
        L53:
            r5 = 0
        L54:
            r4.data(r5, r9, r11, r3)
            goto Ld
        L58:
            r9 = move-exception
            goto L67
        L5a:
            java.lang.Thread r9 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L58
            r9.interrupt()     // Catch: java.lang.Throwable -> L58
            java.io.InterruptedIOException r9 = new java.io.InterruptedIOException     // Catch: java.lang.Throwable -> L58
            r9.<init>()     // Catch: java.lang.Throwable -> L58
            throw r9     // Catch: java.lang.Throwable -> L58
        L67:
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L58
            throw r9
        L69:
            return
    }

    void writePing(boolean r3, int r4, int r5) {
            r2 = this;
            if (r3 != 0) goto L12
            monitor-enter(r2)
            boolean r0 = r2.awaitingPong     // Catch: java.lang.Throwable -> Lf
            r1 = 1
            r2.awaitingPong = r1     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto L12
            r2.failConnection()
            return
        Lf:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Lf
            throw r3
        L12:
            okhttp3.internal.http2.Http2Writer r0 = r2.writer     // Catch: java.io.IOException -> L18
            r0.ping(r3, r4, r5)     // Catch: java.io.IOException -> L18
            goto L1b
        L18:
            r2.failConnection()
        L1b:
            return
    }

    void writePingAndAwaitPong() throws java.lang.InterruptedException {
            r3 = this;
            r0 = 0
            r1 = 1330343787(0x4f4b6f6b, float:3.4130767E9)
            r2 = -257978967(0xfffffffff09f8da9, float:-3.95035E29)
            r3.writePing(r0, r1, r2)
            r3.awaitPong()
            return
    }

    void writeSynReply(int r2, boolean r3, java.util.List<okhttp3.internal.http2.Header> r4) throws java.io.IOException {
            r1 = this;
            okhttp3.internal.http2.Http2Writer r0 = r1.writer
            r0.synReply(r3, r2, r4)
            return
    }

    void writeSynReset(int r2, okhttp3.internal.http2.ErrorCode r3) throws java.io.IOException {
            r1 = this;
            okhttp3.internal.http2.Http2Writer r0 = r1.writer
            r0.rstStream(r2, r3)
            return
    }

    void writeSynResetLater(int r9, okhttp3.internal.http2.ErrorCode r10) {
            r8 = this;
            java.util.concurrent.ScheduledExecutorService r0 = r8.writerExecutor     // Catch: java.util.concurrent.RejectedExecutionException -> L1f
            okhttp3.internal.http2.Http2Connection$1 r7 = new okhttp3.internal.http2.Http2Connection$1     // Catch: java.util.concurrent.RejectedExecutionException -> L1f
            java.lang.String r3 = "OkHttp %s stream %d"
            r1 = 2
            java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: java.util.concurrent.RejectedExecutionException -> L1f
            r1 = 0
            java.lang.String r2 = r8.hostname     // Catch: java.util.concurrent.RejectedExecutionException -> L1f
            r4[r1] = r2     // Catch: java.util.concurrent.RejectedExecutionException -> L1f
            r1 = 1
            java.lang.Integer r2 = java.lang.Integer.valueOf(r9)     // Catch: java.util.concurrent.RejectedExecutionException -> L1f
            r4[r1] = r2     // Catch: java.util.concurrent.RejectedExecutionException -> L1f
            r1 = r7
            r2 = r8
            r5 = r9
            r6 = r10
            r1.<init>(r2, r3, r4, r5, r6)     // Catch: java.util.concurrent.RejectedExecutionException -> L1f
            r0.execute(r7)     // Catch: java.util.concurrent.RejectedExecutionException -> L1f
        L1f:
            return
    }

    void writeWindowUpdateLater(int r10, long r11) {
            r9 = this;
            java.util.concurrent.ScheduledExecutorService r0 = r9.writerExecutor     // Catch: java.util.concurrent.RejectedExecutionException -> L1f
            okhttp3.internal.http2.Http2Connection$2 r8 = new okhttp3.internal.http2.Http2Connection$2     // Catch: java.util.concurrent.RejectedExecutionException -> L1f
            java.lang.String r3 = "OkHttp Window Update %s stream %d"
            r1 = 2
            java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: java.util.concurrent.RejectedExecutionException -> L1f
            r1 = 0
            java.lang.String r2 = r9.hostname     // Catch: java.util.concurrent.RejectedExecutionException -> L1f
            r4[r1] = r2     // Catch: java.util.concurrent.RejectedExecutionException -> L1f
            r1 = 1
            java.lang.Integer r2 = java.lang.Integer.valueOf(r10)     // Catch: java.util.concurrent.RejectedExecutionException -> L1f
            r4[r1] = r2     // Catch: java.util.concurrent.RejectedExecutionException -> L1f
            r1 = r8
            r2 = r9
            r5 = r10
            r6 = r11
            r1.<init>(r2, r3, r4, r5, r6)     // Catch: java.util.concurrent.RejectedExecutionException -> L1f
            r0.execute(r8)     // Catch: java.util.concurrent.RejectedExecutionException -> L1f
        L1f:
            return
    }
}
