package com.mbridge.msdk.thrid.okhttp.internal.http2;

public final class Http2Stream {
    static final boolean $assertionsDisabled = false;
    long bytesLeftInWriteWindow;
    final com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection connection;
    com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode errorCode;
    private boolean hasResponseHeaders;
    private com.mbridge.msdk.thrid.okhttp.internal.http2.Header.Listener headersListener;
    private final java.util.Deque<com.mbridge.msdk.thrid.okhttp.Headers> headersQueue;
    final int id;
    final com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream.StreamTimeout readTimeout;
    final com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream.FramingSink sink;
    private final com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream.FramingSource source;
    long unacknowledgedBytesRead;
    final com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream.StreamTimeout writeTimeout;

    final class FramingSink implements com.mbridge.msdk.thrid.okio.Sink {
        static final boolean $assertionsDisabled = false;
        private static final long EMIT_BUFFER_SIZE = 16384;
        boolean closed;
        boolean finished;
        private final com.mbridge.msdk.thrid.okio.Buffer sendBuffer;
        final com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream this$0;

        static {
                java.lang.Class<com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream> r0 = com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream.class
                return
        }

        FramingSink(com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                com.mbridge.msdk.thrid.okio.Buffer r1 = new com.mbridge.msdk.thrid.okio.Buffer
                r1.<init>()
                r0.sendBuffer = r1
                return
        }

        private void emitFrame(boolean r12) throws java.io.IOException {
                r11 = this;
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r11.this$0
                monitor-enter(r0)
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r1 = r11.this$0     // Catch: java.lang.Throwable -> L88
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$StreamTimeout r1 = r1.writeTimeout     // Catch: java.lang.Throwable -> L88
                r1.enter()     // Catch: java.lang.Throwable -> L88
            La:
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r1 = r11.this$0     // Catch: java.lang.Throwable -> L7f
                long r1 = r1.bytesLeftInWriteWindow     // Catch: java.lang.Throwable -> L7f
                r3 = 0
                int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
                if (r1 > 0) goto L28
                boolean r1 = r11.finished     // Catch: java.lang.Throwable -> L7f
                if (r1 != 0) goto L28
                boolean r1 = r11.closed     // Catch: java.lang.Throwable -> L7f
                if (r1 != 0) goto L28
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r1 = r11.this$0     // Catch: java.lang.Throwable -> L7f
                com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r1 = r1.errorCode     // Catch: java.lang.Throwable -> L7f
                if (r1 != 0) goto L28
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r1 = r11.this$0     // Catch: java.lang.Throwable -> L7f
                r1.waitForIo()     // Catch: java.lang.Throwable -> L7f
                goto La
            L28:
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r1 = r11.this$0     // Catch: java.lang.Throwable -> L88
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$StreamTimeout r1 = r1.writeTimeout     // Catch: java.lang.Throwable -> L88
                r1.exitAndThrowIfTimedOut()     // Catch: java.lang.Throwable -> L88
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r1 = r11.this$0     // Catch: java.lang.Throwable -> L88
                r1.checkOutNotClosed()     // Catch: java.lang.Throwable -> L88
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r1 = r11.this$0     // Catch: java.lang.Throwable -> L88
                long r1 = r1.bytesLeftInWriteWindow     // Catch: java.lang.Throwable -> L88
                com.mbridge.msdk.thrid.okio.Buffer r3 = r11.sendBuffer     // Catch: java.lang.Throwable -> L88
                long r3 = r3.size()     // Catch: java.lang.Throwable -> L88
                long r9 = java.lang.Math.min(r1, r3)     // Catch: java.lang.Throwable -> L88
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r1 = r11.this$0     // Catch: java.lang.Throwable -> L88
                long r2 = r1.bytesLeftInWriteWindow     // Catch: java.lang.Throwable -> L88
                long r2 = r2 - r9
                r1.bytesLeftInWriteWindow = r2     // Catch: java.lang.Throwable -> L88
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L88
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r11.this$0
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$StreamTimeout r0 = r0.writeTimeout
                r0.enter()
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r11.this$0     // Catch: java.lang.Throwable -> L76
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r5 = r0.connection     // Catch: java.lang.Throwable -> L76
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r11.this$0     // Catch: java.lang.Throwable -> L76
                int r6 = r0.id     // Catch: java.lang.Throwable -> L76
                if (r12 == 0) goto L67
                com.mbridge.msdk.thrid.okio.Buffer r12 = r11.sendBuffer     // Catch: java.lang.Throwable -> L76
                long r0 = r12.size()     // Catch: java.lang.Throwable -> L76
                int r12 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
                if (r12 != 0) goto L67
                r12 = 1
                goto L68
            L67:
                r12 = 0
            L68:
                r7 = r12
                com.mbridge.msdk.thrid.okio.Buffer r8 = r11.sendBuffer     // Catch: java.lang.Throwable -> L76
                r5.writeData(r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L76
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r12 = r11.this$0
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$StreamTimeout r12 = r12.writeTimeout
                r12.exitAndThrowIfTimedOut()
                return
            L76:
                r12 = move-exception
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r11.this$0
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$StreamTimeout r0 = r0.writeTimeout
                r0.exitAndThrowIfTimedOut()
                throw r12
            L7f:
                r12 = move-exception
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r1 = r11.this$0     // Catch: java.lang.Throwable -> L88
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$StreamTimeout r1 = r1.writeTimeout     // Catch: java.lang.Throwable -> L88
                r1.exitAndThrowIfTimedOut()     // Catch: java.lang.Throwable -> L88
                throw r12     // Catch: java.lang.Throwable -> L88
            L88:
                r12 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L88
                throw r12
        }

        @Override
        public void close() throws java.io.IOException {
                r8 = this;
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r8.this$0
                monitor-enter(r0)
                boolean r1 = r8.closed     // Catch: java.lang.Throwable -> L52
                if (r1 == 0) goto L9
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L52
                return
            L9:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L52
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r8.this$0
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$FramingSink r0 = r0.sink
                boolean r0 = r0.finished
                r1 = 1
                if (r0 != 0) goto L3c
                com.mbridge.msdk.thrid.okio.Buffer r0 = r8.sendBuffer
                long r2 = r0.size()
                r4 = 0
                int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
                if (r0 <= 0) goto L2d
            L1f:
                com.mbridge.msdk.thrid.okio.Buffer r0 = r8.sendBuffer
                long r2 = r0.size()
                int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
                if (r0 <= 0) goto L3c
                r8.emitFrame(r1)
                goto L1f
            L2d:
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r8.this$0
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r2 = r0.connection
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r8.this$0
                int r3 = r0.id
                r4 = 1
                r5 = 0
                r6 = 0
                r2.writeData(r3, r4, r5, r6)
            L3c:
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r2 = r8.this$0
                monitor-enter(r2)
                r8.closed = r1     // Catch: java.lang.Throwable -> L4f
                monitor-exit(r2)     // Catch: java.lang.Throwable -> L4f
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r8.this$0
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r0 = r0.connection
                r0.flush()
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r8.this$0
                r0.cancelStreamIfNecessary()
                return
            L4f:
                r0 = move-exception
                monitor-exit(r2)     // Catch: java.lang.Throwable -> L4f
                throw r0
            L52:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L52
                throw r1
        }

        @Override
        public void flush() throws java.io.IOException {
                r4 = this;
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r4.this$0
                monitor-enter(r0)
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r1 = r4.this$0     // Catch: java.lang.Throwable -> L22
                r1.checkOutNotClosed()     // Catch: java.lang.Throwable -> L22
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L22
            L9:
                com.mbridge.msdk.thrid.okio.Buffer r0 = r4.sendBuffer
                long r0 = r0.size()
                r2 = 0
                int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r0 <= 0) goto L21
                r0 = 0
                r4.emitFrame(r0)
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r4.this$0
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r0 = r0.connection
                r0.flush()
                goto L9
            L21:
                return
            L22:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L22
                throw r1
        }

        @Override
        public com.mbridge.msdk.thrid.okio.Timeout timeout() {
                r1 = this;
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r1.this$0
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$StreamTimeout r0 = r0.writeTimeout
                return r0
        }

        @Override
        public void write(com.mbridge.msdk.thrid.okio.Buffer r3, long r4) throws java.io.IOException {
                r2 = this;
                com.mbridge.msdk.thrid.okio.Buffer r0 = r2.sendBuffer
                r0.write(r3, r4)
            L5:
                com.mbridge.msdk.thrid.okio.Buffer r3 = r2.sendBuffer
                long r3 = r3.size()
                r0 = 16384(0x4000, double:8.095E-320)
                int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
                if (r3 < 0) goto L16
                r3 = 0
                r2.emitFrame(r3)
                goto L5
            L16:
                return
        }
    }

    private final class FramingSource implements com.mbridge.msdk.thrid.okio.Source {
        static final boolean $assertionsDisabled = false;
        boolean closed;
        boolean finished;
        private final long maxByteCount;
        private final com.mbridge.msdk.thrid.okio.Buffer readBuffer;
        private final com.mbridge.msdk.thrid.okio.Buffer receiveBuffer;
        final com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream this$0;

        static {
                java.lang.Class<com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream> r0 = com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream.class
                return
        }

        FramingSource(com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r1, long r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                com.mbridge.msdk.thrid.okio.Buffer r1 = new com.mbridge.msdk.thrid.okio.Buffer
                r1.<init>()
                r0.receiveBuffer = r1
                com.mbridge.msdk.thrid.okio.Buffer r1 = new com.mbridge.msdk.thrid.okio.Buffer
                r1.<init>()
                r0.readBuffer = r1
                r0.maxByteCount = r2
                return
        }

        private void updateConnectionFlowControl(long r2) {
                r1 = this;
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r1.this$0
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r0 = r0.connection
                r0.updateConnectionFlowControl(r2)
                return
        }

        @Override
        public void close() throws java.io.IOException {
                r8 = this;
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r8.this$0
                monitor-enter(r0)
                r1 = 1
                r8.closed = r1     // Catch: java.lang.Throwable -> L70
                com.mbridge.msdk.thrid.okio.Buffer r1 = r8.readBuffer     // Catch: java.lang.Throwable -> L70
                long r1 = r1.size()     // Catch: java.lang.Throwable -> L70
                com.mbridge.msdk.thrid.okio.Buffer r3 = r8.readBuffer     // Catch: java.lang.Throwable -> L70
                r3.clear()     // Catch: java.lang.Throwable -> L70
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r3 = r8.this$0     // Catch: java.lang.Throwable -> L70
                java.util.Deque r3 = com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream.access$000(r3)     // Catch: java.lang.Throwable -> L70
                boolean r3 = r3.isEmpty()     // Catch: java.lang.Throwable -> L70
                r4 = 0
                if (r3 != 0) goto L44
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r3 = r8.this$0     // Catch: java.lang.Throwable -> L70
                com.mbridge.msdk.thrid.okhttp.internal.http2.Header$Listener r3 = com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream.access$100(r3)     // Catch: java.lang.Throwable -> L70
                if (r3 == 0) goto L44
                java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L70
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r3 = r8.this$0     // Catch: java.lang.Throwable -> L70
                java.util.Deque r3 = com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream.access$000(r3)     // Catch: java.lang.Throwable -> L70
                r4.<init>(r3)     // Catch: java.lang.Throwable -> L70
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r3 = r8.this$0     // Catch: java.lang.Throwable -> L70
                java.util.Deque r3 = com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream.access$000(r3)     // Catch: java.lang.Throwable -> L70
                r3.clear()     // Catch: java.lang.Throwable -> L70
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r3 = r8.this$0     // Catch: java.lang.Throwable -> L70
                com.mbridge.msdk.thrid.okhttp.internal.http2.Header$Listener r3 = com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream.access$100(r3)     // Catch: java.lang.Throwable -> L70
                r7 = r4
                r4 = r3
                r3 = r7
                goto L45
            L44:
                r3 = r4
            L45:
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r5 = r8.this$0     // Catch: java.lang.Throwable -> L70
                r5.notifyAll()     // Catch: java.lang.Throwable -> L70
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L70
                r5 = 0
                int r0 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
                if (r0 <= 0) goto L54
                r8.updateConnectionFlowControl(r1)
            L54:
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r8.this$0
                r0.cancelStreamIfNecessary()
                if (r4 == 0) goto L6f
                java.util.Iterator r0 = r3.iterator()
            L5f:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L6f
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.thrid.okhttp.Headers r1 = (com.mbridge.msdk.thrid.okhttp.Headers) r1
                r4.onHeaders(r1)
                goto L5f
            L6f:
                return
            L70:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L70
                throw r1
        }

        @Override
        public long read(com.mbridge.msdk.thrid.okio.Buffer r17, long r18) throws java.io.IOException {
                r16 = this;
                r1 = r16
                r2 = r18
                r4 = 0
                int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
                if (r0 < 0) goto Lee
            La:
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r6 = r1.this$0
                monitor-enter(r6)
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r1.this$0     // Catch: java.lang.Throwable -> Leb
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$StreamTimeout r0 = r0.readTimeout     // Catch: java.lang.Throwable -> Leb
                r0.enter()     // Catch: java.lang.Throwable -> Leb
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r1.this$0     // Catch: java.lang.Throwable -> Le2
                com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r0 = r0.errorCode     // Catch: java.lang.Throwable -> Le2
                if (r0 == 0) goto L1f
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r1.this$0     // Catch: java.lang.Throwable -> Le2
                com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r0 = r0.errorCode     // Catch: java.lang.Throwable -> Le2
                goto L20
            L1f:
                r0 = 0
            L20:
                boolean r8 = r1.closed     // Catch: java.lang.Throwable -> Le2
                if (r8 != 0) goto Lda
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r8 = r1.this$0     // Catch: java.lang.Throwable -> Le2
                java.util.Deque r8 = com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream.access$000(r8)     // Catch: java.lang.Throwable -> Le2
                boolean r8 = r8.isEmpty()     // Catch: java.lang.Throwable -> Le2
                r9 = -1
                if (r8 != 0) goto L50
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r8 = r1.this$0     // Catch: java.lang.Throwable -> Le2
                com.mbridge.msdk.thrid.okhttp.internal.http2.Header$Listener r8 = com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream.access$100(r8)     // Catch: java.lang.Throwable -> Le2
                if (r8 == 0) goto L50
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r7 = r1.this$0     // Catch: java.lang.Throwable -> Le2
                java.util.Deque r7 = com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream.access$000(r7)     // Catch: java.lang.Throwable -> Le2
                java.lang.Object r7 = r7.removeFirst()     // Catch: java.lang.Throwable -> Le2
                com.mbridge.msdk.thrid.okhttp.Headers r7 = (com.mbridge.msdk.thrid.okhttp.Headers) r7     // Catch: java.lang.Throwable -> Le2
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r8 = r1.this$0     // Catch: java.lang.Throwable -> Le2
                com.mbridge.msdk.thrid.okhttp.internal.http2.Header$Listener r8 = com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream.access$100(r8)     // Catch: java.lang.Throwable -> Le2
                r13 = r17
                r11 = r9
                goto Lb8
            L50:
                com.mbridge.msdk.thrid.okio.Buffer r8 = r1.readBuffer     // Catch: java.lang.Throwable -> Le2
                long r11 = r8.size()     // Catch: java.lang.Throwable -> Le2
                int r8 = (r11 > r4 ? 1 : (r11 == r4 ? 0 : -1))
                if (r8 <= 0) goto L9e
                com.mbridge.msdk.thrid.okio.Buffer r8 = r1.readBuffer     // Catch: java.lang.Throwable -> Le2
                com.mbridge.msdk.thrid.okio.Buffer r11 = r1.readBuffer     // Catch: java.lang.Throwable -> Le2
                long r11 = r11.size()     // Catch: java.lang.Throwable -> Le2
                long r11 = java.lang.Math.min(r2, r11)     // Catch: java.lang.Throwable -> Le2
                r13 = r17
                long r11 = r8.read(r13, r11)     // Catch: java.lang.Throwable -> Le2
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r8 = r1.this$0     // Catch: java.lang.Throwable -> Le2
                long r14 = r8.unacknowledgedBytesRead     // Catch: java.lang.Throwable -> Le2
                long r14 = r14 + r11
                r8.unacknowledgedBytesRead = r14     // Catch: java.lang.Throwable -> Le2
                if (r0 != 0) goto Lb6
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r8 = r1.this$0     // Catch: java.lang.Throwable -> Le2
                long r14 = r8.unacknowledgedBytesRead     // Catch: java.lang.Throwable -> Le2
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r8 = r1.this$0     // Catch: java.lang.Throwable -> Le2
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r8 = r8.connection     // Catch: java.lang.Throwable -> Le2
                com.mbridge.msdk.thrid.okhttp.internal.http2.Settings r8 = r8.okHttpSettings     // Catch: java.lang.Throwable -> Le2
                int r8 = r8.getInitialWindowSize()     // Catch: java.lang.Throwable -> Le2
                int r8 = r8 / 2
                long r7 = (long) r8     // Catch: java.lang.Throwable -> Le2
                int r7 = (r14 > r7 ? 1 : (r14 == r7 ? 0 : -1))
                if (r7 < 0) goto Lb6
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r7 = r1.this$0     // Catch: java.lang.Throwable -> Le2
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r7 = r7.connection     // Catch: java.lang.Throwable -> Le2
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r8 = r1.this$0     // Catch: java.lang.Throwable -> Le2
                int r8 = r8.id     // Catch: java.lang.Throwable -> Le2
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r14 = r1.this$0     // Catch: java.lang.Throwable -> Le2
                long r14 = r14.unacknowledgedBytesRead     // Catch: java.lang.Throwable -> Le2
                r7.writeWindowUpdateLater(r8, r14)     // Catch: java.lang.Throwable -> Le2
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r7 = r1.this$0     // Catch: java.lang.Throwable -> Le2
                r7.unacknowledgedBytesRead = r4     // Catch: java.lang.Throwable -> Le2
                goto Lb6
            L9e:
                r13 = r17
                boolean r7 = r1.finished     // Catch: java.lang.Throwable -> Le2
                if (r7 != 0) goto Lb5
                if (r0 != 0) goto Lb5
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r1.this$0     // Catch: java.lang.Throwable -> Le2
                r0.waitForIo()     // Catch: java.lang.Throwable -> Le2
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r1.this$0     // Catch: java.lang.Throwable -> Leb
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$StreamTimeout r0 = r0.readTimeout     // Catch: java.lang.Throwable -> Leb
                r0.exitAndThrowIfTimedOut()     // Catch: java.lang.Throwable -> Leb
                monitor-exit(r6)     // Catch: java.lang.Throwable -> Leb
                goto La
            Lb5:
                r11 = r9
            Lb6:
                r7 = 0
                r8 = 0
            Lb8:
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r14 = r1.this$0     // Catch: java.lang.Throwable -> Leb
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$StreamTimeout r14 = r14.readTimeout     // Catch: java.lang.Throwable -> Leb
                r14.exitAndThrowIfTimedOut()     // Catch: java.lang.Throwable -> Leb
                monitor-exit(r6)     // Catch: java.lang.Throwable -> Leb
                if (r7 == 0) goto Lc9
                if (r8 == 0) goto Lc9
                r8.onHeaders(r7)
                goto La
            Lc9:
                int r2 = (r11 > r9 ? 1 : (r11 == r9 ? 0 : -1))
                if (r2 == 0) goto Ld1
                r1.updateConnectionFlowControl(r11)
                return r11
            Ld1:
                if (r0 != 0) goto Ld4
                return r9
            Ld4:
                com.mbridge.msdk.thrid.okhttp.internal.http2.StreamResetException r2 = new com.mbridge.msdk.thrid.okhttp.internal.http2.StreamResetException
                r2.<init>(r0)
                throw r2
            Lda:
                java.io.IOException r0 = new java.io.IOException     // Catch: java.lang.Throwable -> Le2
                java.lang.String r2 = "stream closed"
                r0.<init>(r2)     // Catch: java.lang.Throwable -> Le2
                throw r0     // Catch: java.lang.Throwable -> Le2
            Le2:
                r0 = move-exception
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r2 = r1.this$0     // Catch: java.lang.Throwable -> Leb
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$StreamTimeout r2 = r2.readTimeout     // Catch: java.lang.Throwable -> Leb
                r2.exitAndThrowIfTimedOut()     // Catch: java.lang.Throwable -> Leb
                throw r0     // Catch: java.lang.Throwable -> Leb
            Leb:
                r0 = move-exception
                monitor-exit(r6)     // Catch: java.lang.Throwable -> Leb
                throw r0
            Lee:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                java.lang.String r5 = "byteCount < 0: "
                r4.append(r5)
                r4.append(r2)
                java.lang.String r2 = r4.toString()
                r0.<init>(r2)
                throw r0
        }

        void receive(com.mbridge.msdk.thrid.okio.BufferedSource r10, long r11) throws java.io.IOException {
                r9 = this;
            L0:
                r0 = 0
                int r2 = (r11 > r0 ? 1 : (r11 == r0 ? 0 : -1))
                if (r2 <= 0) goto L81
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r2 = r9.this$0
                monitor-enter(r2)
                boolean r3 = r9.finished     // Catch: java.lang.Throwable -> L7e
                com.mbridge.msdk.thrid.okio.Buffer r4 = r9.readBuffer     // Catch: java.lang.Throwable -> L7e
                long r4 = r4.size()     // Catch: java.lang.Throwable -> L7e
                long r4 = r4 + r11
                long r6 = r9.maxByteCount     // Catch: java.lang.Throwable -> L7e
                int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
                r5 = 1
                r6 = 0
                if (r4 <= 0) goto L1c
                r4 = r5
                goto L1d
            L1c:
                r4 = r6
            L1d:
                monitor-exit(r2)     // Catch: java.lang.Throwable -> L7e
                if (r4 == 0) goto L2b
                r10.skip(r11)
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r10 = r9.this$0
                com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r11 = com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.FLOW_CONTROL_ERROR
                r10.closeLater(r11)
                return
            L2b:
                if (r3 == 0) goto L31
                r10.skip(r11)
                return
            L31:
                com.mbridge.msdk.thrid.okio.Buffer r2 = r9.receiveBuffer
                long r2 = r10.read(r2, r11)
                r7 = -1
                int r4 = (r2 > r7 ? 1 : (r2 == r7 ? 0 : -1))
                if (r4 == 0) goto L78
                long r11 = r11 - r2
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r2 = r9.this$0
                monitor-enter(r2)
                boolean r3 = r9.closed     // Catch: java.lang.Throwable -> L75
                if (r3 == 0) goto L51
                com.mbridge.msdk.thrid.okio.Buffer r3 = r9.receiveBuffer     // Catch: java.lang.Throwable -> L75
                long r3 = r3.size()     // Catch: java.lang.Throwable -> L75
                com.mbridge.msdk.thrid.okio.Buffer r5 = r9.receiveBuffer     // Catch: java.lang.Throwable -> L75
                r5.clear()     // Catch: java.lang.Throwable -> L75
                goto L6c
            L51:
                com.mbridge.msdk.thrid.okio.Buffer r3 = r9.readBuffer     // Catch: java.lang.Throwable -> L75
                long r3 = r3.size()     // Catch: java.lang.Throwable -> L75
                int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
                if (r3 != 0) goto L5c
                goto L5d
            L5c:
                r5 = r6
            L5d:
                com.mbridge.msdk.thrid.okio.Buffer r3 = r9.readBuffer     // Catch: java.lang.Throwable -> L75
                com.mbridge.msdk.thrid.okio.Buffer r4 = r9.receiveBuffer     // Catch: java.lang.Throwable -> L75
                r3.writeAll(r4)     // Catch: java.lang.Throwable -> L75
                if (r5 == 0) goto L6b
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r3 = r9.this$0     // Catch: java.lang.Throwable -> L75
                r3.notifyAll()     // Catch: java.lang.Throwable -> L75
            L6b:
                r3 = r0
            L6c:
                monitor-exit(r2)     // Catch: java.lang.Throwable -> L75
                int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
                if (r0 <= 0) goto L0
                r9.updateConnectionFlowControl(r3)
                goto L0
            L75:
                r10 = move-exception
                monitor-exit(r2)     // Catch: java.lang.Throwable -> L75
                throw r10
            L78:
                java.io.EOFException r10 = new java.io.EOFException
                r10.<init>()
                throw r10
            L7e:
                r10 = move-exception
                monitor-exit(r2)     // Catch: java.lang.Throwable -> L7e
                throw r10
            L81:
                return
        }

        @Override
        public com.mbridge.msdk.thrid.okio.Timeout timeout() {
                r1 = this;
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r1.this$0
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$StreamTimeout r0 = r0.readTimeout
                return r0
        }
    }

    class StreamTimeout extends com.mbridge.msdk.thrid.okio.AsyncTimeout {
        final com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream this$0;

        StreamTimeout(com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        public void exitAndThrowIfTimedOut() throws java.io.IOException {
                r1 = this;
                boolean r0 = r1.exit()
                if (r0 != 0) goto L7
                return
            L7:
                r0 = 0
                java.io.IOException r0 = r1.newTimeoutException(r0)
                throw r0
        }

        @Override
        protected java.io.IOException newTimeoutException(java.io.IOException r3) {
                r2 = this;
                java.net.SocketTimeoutException r0 = new java.net.SocketTimeoutException
                java.lang.String r1 = "timeout"
                r0.<init>(r1)
                if (r3 == 0) goto Lc
                r0.initCause(r3)
            Lc:
                return r0
        }

        @Override
        protected void timedOut() {
                r2 = this;
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r2.this$0
                com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r1 = com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.CANCEL
                r0.closeLater(r1)
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r2.this$0
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r0 = r0.connection
                r0.sendDegradedPingLater()
                return
        }
    }

    static {
            return
    }

    Http2Stream(int r3, com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r4, boolean r5, boolean r6, @javax.annotation.Nullable com.mbridge.msdk.thrid.okhttp.Headers r7) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.unacknowledgedBytesRead = r0
            java.util.ArrayDeque r0 = new java.util.ArrayDeque
            r0.<init>()
            r2.headersQueue = r0
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$StreamTimeout r0 = new com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$StreamTimeout
            r0.<init>(r2)
            r2.readTimeout = r0
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$StreamTimeout r0 = new com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$StreamTimeout
            r0.<init>(r2)
            r2.writeTimeout = r0
            r0 = 0
            r2.errorCode = r0
            if (r4 == 0) goto L75
            r2.id = r3
            r2.connection = r4
            com.mbridge.msdk.thrid.okhttp.internal.http2.Settings r3 = r4.peerSettings
            int r3 = r3.getInitialWindowSize()
            long r0 = (long) r3
            r2.bytesLeftInWriteWindow = r0
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$FramingSource r3 = new com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$FramingSource
            com.mbridge.msdk.thrid.okhttp.internal.http2.Settings r4 = r4.okHttpSettings
            int r4 = r4.getInitialWindowSize()
            long r0 = (long) r4
            r3.<init>(r2, r0)
            r2.source = r3
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$FramingSink r3 = new com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$FramingSink
            r3.<init>(r2)
            r2.sink = r3
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$FramingSource r3 = r2.source
            r3.finished = r6
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$FramingSink r3 = r2.sink
            r3.finished = r5
            if (r7 == 0) goto L52
            java.util.Deque<com.mbridge.msdk.thrid.okhttp.Headers> r3 = r2.headersQueue
            r3.add(r7)
        L52:
            boolean r3 = r2.isLocallyInitiated()
            if (r3 == 0) goto L63
            if (r7 != 0) goto L5b
            goto L63
        L5b:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r4 = "locally-initiated streams shouldn't have headers yet"
            r3.<init>(r4)
            throw r3
        L63:
            boolean r3 = r2.isLocallyInitiated()
            if (r3 != 0) goto L74
            if (r7 == 0) goto L6c
            goto L74
        L6c:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r4 = "remotely-initiated streams should have headers"
            r3.<init>(r4)
            throw r3
        L74:
            return
        L75:
            java.lang.NullPointerException r3 = new java.lang.NullPointerException
            java.lang.String r4 = "connection == null"
            r3.<init>(r4)
            throw r3
    }

    static java.util.Deque access$000(com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0) {
            java.util.Deque<com.mbridge.msdk.thrid.okhttp.Headers> r0 = r0.headersQueue
            return r0
    }

    static com.mbridge.msdk.thrid.okhttp.internal.http2.Header.Listener access$100(com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0) {
            com.mbridge.msdk.thrid.okhttp.internal.http2.Header$Listener r0 = r0.headersListener
            return r0
    }

    private boolean closeInternal(com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r3) {
            r2 = this;
            monitor-enter(r2)
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r0 = r2.errorCode     // Catch: java.lang.Throwable -> L25
            r1 = 0
            if (r0 == 0) goto L8
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L25
            return r1
        L8:
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$FramingSource r0 = r2.source     // Catch: java.lang.Throwable -> L25
            boolean r0 = r0.finished     // Catch: java.lang.Throwable -> L25
            if (r0 == 0) goto L16
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$FramingSink r0 = r2.sink     // Catch: java.lang.Throwable -> L25
            boolean r0 = r0.finished     // Catch: java.lang.Throwable -> L25
            if (r0 == 0) goto L16
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L25
            return r1
        L16:
            r2.errorCode = r3     // Catch: java.lang.Throwable -> L25
            r2.notifyAll()     // Catch: java.lang.Throwable -> L25
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L25
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r3 = r2.connection
            int r0 = r2.id
            r3.removeStream(r0)
            r3 = 1
            return r3
        L25:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L25
            throw r3
    }

    void addBytesToWriteWindow(long r3) {
            r2 = this;
            long r0 = r2.bytesLeftInWriteWindow
            long r0 = r0 + r3
            r2.bytesLeftInWriteWindow = r0
            r0 = 0
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 <= 0) goto Le
            r2.notifyAll()
        Le:
            return
    }

    void cancelStreamIfNecessary() throws java.io.IOException {
            r2 = this;
            monitor-enter(r2)
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$FramingSource r0 = r2.source     // Catch: java.lang.Throwable -> L33
            boolean r0 = r0.finished     // Catch: java.lang.Throwable -> L33
            if (r0 != 0) goto L1b
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$FramingSource r0 = r2.source     // Catch: java.lang.Throwable -> L33
            boolean r0 = r0.closed     // Catch: java.lang.Throwable -> L33
            if (r0 == 0) goto L1b
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$FramingSink r0 = r2.sink     // Catch: java.lang.Throwable -> L33
            boolean r0 = r0.finished     // Catch: java.lang.Throwable -> L33
            if (r0 != 0) goto L19
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$FramingSink r0 = r2.sink     // Catch: java.lang.Throwable -> L33
            boolean r0 = r0.closed     // Catch: java.lang.Throwable -> L33
            if (r0 == 0) goto L1b
        L19:
            r0 = 1
            goto L1c
        L1b:
            r0 = 0
        L1c:
            boolean r1 = r2.isOpen()     // Catch: java.lang.Throwable -> L33
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L33
            if (r0 == 0) goto L29
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r0 = com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.CANCEL
            r2.close(r0)
            goto L32
        L29:
            if (r1 != 0) goto L32
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r0 = r2.connection
            int r1 = r2.id
            r0.removeStream(r1)
        L32:
            return
        L33:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L33
            throw r0
    }

    void checkOutNotClosed() throws java.io.IOException {
            r2 = this;
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$FramingSink r0 = r2.sink
            boolean r0 = r0.closed
            if (r0 != 0) goto L21
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$FramingSink r0 = r2.sink
            boolean r0 = r0.finished
            if (r0 != 0) goto L19
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r0 = r2.errorCode
            if (r0 != 0) goto L11
            return
        L11:
            com.mbridge.msdk.thrid.okhttp.internal.http2.StreamResetException r0 = new com.mbridge.msdk.thrid.okhttp.internal.http2.StreamResetException
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r1 = r2.errorCode
            r0.<init>(r1)
            throw r0
        L19:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "stream finished"
            r0.<init>(r1)
            throw r0
        L21:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "stream closed"
            r0.<init>(r1)
            throw r0
    }

    public void close(com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r3) throws java.io.IOException {
            r2 = this;
            boolean r0 = r2.closeInternal(r3)
            if (r0 != 0) goto L7
            return
        L7:
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r0 = r2.connection
            int r1 = r2.id
            r0.writeSynReset(r1, r3)
            return
    }

    public void closeLater(com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r3) {
            r2 = this;
            boolean r0 = r2.closeInternal(r3)
            if (r0 != 0) goto L7
            return
        L7:
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r0 = r2.connection
            int r1 = r2.id
            r0.writeSynResetLater(r1, r3)
            return
    }

    public com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection getConnection() {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r0 = r1.connection
            return r0
    }

    public synchronized com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode getErrorCode() {
            r1 = this;
            monitor-enter(r1)
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r0 = r1.errorCode     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public int getId() {
            r1 = this;
            int r0 = r1.id
            return r0
    }

    public com.mbridge.msdk.thrid.okio.Sink getSink() {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.hasResponseHeaders     // Catch: java.lang.Throwable -> L18
            if (r0 != 0) goto L14
            boolean r0 = r2.isLocallyInitiated()     // Catch: java.lang.Throwable -> L18
            if (r0 == 0) goto Lc
            goto L14
        Lc:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L18
            java.lang.String r1 = "reply before requesting the sink"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L18
            throw r0     // Catch: java.lang.Throwable -> L18
        L14:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L18
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$FramingSink r0 = r2.sink
            return r0
        L18:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L18
            throw r0
    }

    public com.mbridge.msdk.thrid.okio.Source getSource() {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$FramingSource r0 = r1.source
            return r0
    }

    public boolean isLocallyInitiated() {
            r4 = this;
            int r0 = r4.id
            r1 = 1
            r0 = r0 & r1
            r2 = 0
            if (r0 != r1) goto L9
            r0 = r1
            goto La
        L9:
            r0 = r2
        La:
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r3 = r4.connection
            boolean r3 = r3.client
            if (r3 != r0) goto L11
            goto L12
        L11:
            r1 = r2
        L12:
            return r1
    }

    public synchronized boolean isOpen() {
            r2 = this;
            monitor-enter(r2)
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r0 = r2.errorCode     // Catch: java.lang.Throwable -> L29
            r1 = 0
            if (r0 == 0) goto L8
            monitor-exit(r2)
            return r1
        L8:
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$FramingSource r0 = r2.source     // Catch: java.lang.Throwable -> L29
            boolean r0 = r0.finished     // Catch: java.lang.Throwable -> L29
            if (r0 != 0) goto L14
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$FramingSource r0 = r2.source     // Catch: java.lang.Throwable -> L29
            boolean r0 = r0.closed     // Catch: java.lang.Throwable -> L29
            if (r0 == 0) goto L26
        L14:
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$FramingSink r0 = r2.sink     // Catch: java.lang.Throwable -> L29
            boolean r0 = r0.finished     // Catch: java.lang.Throwable -> L29
            if (r0 != 0) goto L20
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$FramingSink r0 = r2.sink     // Catch: java.lang.Throwable -> L29
            boolean r0 = r0.closed     // Catch: java.lang.Throwable -> L29
            if (r0 == 0) goto L26
        L20:
            boolean r0 = r2.hasResponseHeaders     // Catch: java.lang.Throwable -> L29
            if (r0 == 0) goto L26
            monitor-exit(r2)
            return r1
        L26:
            r0 = 1
            monitor-exit(r2)
            return r0
        L29:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public com.mbridge.msdk.thrid.okio.Timeout readTimeout() {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$StreamTimeout r0 = r1.readTimeout
            return r0
    }

    void receiveData(com.mbridge.msdk.thrid.okio.BufferedSource r4, int r5) throws java.io.IOException {
            r3 = this;
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$FramingSource r0 = r3.source
            long r1 = (long) r5
            r0.receive(r4, r1)
            return
    }

    void receiveFin() {
            r2 = this;
            monitor-enter(r2)
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$FramingSource r0 = r2.source     // Catch: java.lang.Throwable -> L18
            r1 = 1
            r0.finished = r1     // Catch: java.lang.Throwable -> L18
            boolean r0 = r2.isOpen()     // Catch: java.lang.Throwable -> L18
            r2.notifyAll()     // Catch: java.lang.Throwable -> L18
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L18
            if (r0 != 0) goto L17
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r0 = r2.connection
            int r1 = r2.id
            r0.removeStream(r1)
        L17:
            return
        L18:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L18
            throw r0
    }

    void receiveHeaders(java.util.List<com.mbridge.msdk.thrid.okhttp.internal.http2.Header> r2) {
            r1 = this;
            monitor-enter(r1)
            r0 = 1
            r1.hasResponseHeaders = r0     // Catch: java.lang.Throwable -> L1f
            java.util.Deque<com.mbridge.msdk.thrid.okhttp.Headers> r0 = r1.headersQueue     // Catch: java.lang.Throwable -> L1f
            com.mbridge.msdk.thrid.okhttp.Headers r2 = com.mbridge.msdk.thrid.okhttp.internal.Util.toHeaders(r2)     // Catch: java.lang.Throwable -> L1f
            r0.add(r2)     // Catch: java.lang.Throwable -> L1f
            boolean r2 = r1.isOpen()     // Catch: java.lang.Throwable -> L1f
            r1.notifyAll()     // Catch: java.lang.Throwable -> L1f
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L1f
            if (r2 != 0) goto L1e
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r2 = r1.connection
            int r0 = r1.id
            r2.removeStream(r0)
        L1e:
            return
        L1f:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L1f
            throw r2
    }

    synchronized void receiveRstStream(com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r2) {
            r1 = this;
            monitor-enter(r1)
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r0 = r1.errorCode     // Catch: java.lang.Throwable -> Lc
            if (r0 != 0) goto La
            r1.errorCode = r2     // Catch: java.lang.Throwable -> Lc
            r1.notifyAll()     // Catch: java.lang.Throwable -> Lc
        La:
            monitor-exit(r1)
            return
        Lc:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized void setHeadersListener(com.mbridge.msdk.thrid.okhttp.internal.http2.Header.Listener r2) {
            r1 = this;
            monitor-enter(r1)
            r1.headersListener = r2     // Catch: java.lang.Throwable -> L12
            java.util.Deque<com.mbridge.msdk.thrid.okhttp.Headers> r0 = r1.headersQueue     // Catch: java.lang.Throwable -> L12
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L12
            if (r0 != 0) goto L10
            if (r2 == 0) goto L10
            r1.notifyAll()     // Catch: java.lang.Throwable -> L12
        L10:
            monitor-exit(r1)
            return
        L12:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized com.mbridge.msdk.thrid.okhttp.Headers takeHeaders() throws java.io.IOException {
            r2 = this;
            monitor-enter(r2)
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$StreamTimeout r0 = r2.readTimeout     // Catch: java.lang.Throwable -> L3c
            r0.enter()     // Catch: java.lang.Throwable -> L3c
        L6:
            java.util.Deque<com.mbridge.msdk.thrid.okhttp.Headers> r0 = r2.headersQueue     // Catch: java.lang.Throwable -> L35
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L35
            if (r0 == 0) goto L16
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r0 = r2.errorCode     // Catch: java.lang.Throwable -> L35
            if (r0 != 0) goto L16
            r2.waitForIo()     // Catch: java.lang.Throwable -> L35
            goto L6
        L16:
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$StreamTimeout r0 = r2.readTimeout     // Catch: java.lang.Throwable -> L3c
            r0.exitAndThrowIfTimedOut()     // Catch: java.lang.Throwable -> L3c
            java.util.Deque<com.mbridge.msdk.thrid.okhttp.Headers> r0 = r2.headersQueue     // Catch: java.lang.Throwable -> L3c
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L3c
            if (r0 != 0) goto L2d
            java.util.Deque<com.mbridge.msdk.thrid.okhttp.Headers> r0 = r2.headersQueue     // Catch: java.lang.Throwable -> L3c
            java.lang.Object r0 = r0.removeFirst()     // Catch: java.lang.Throwable -> L3c
            com.mbridge.msdk.thrid.okhttp.Headers r0 = (com.mbridge.msdk.thrid.okhttp.Headers) r0     // Catch: java.lang.Throwable -> L3c
            monitor-exit(r2)
            return r0
        L2d:
            com.mbridge.msdk.thrid.okhttp.internal.http2.StreamResetException r0 = new com.mbridge.msdk.thrid.okhttp.internal.http2.StreamResetException     // Catch: java.lang.Throwable -> L3c
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r1 = r2.errorCode     // Catch: java.lang.Throwable -> L3c
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L3c
            throw r0     // Catch: java.lang.Throwable -> L3c
        L35:
            r0 = move-exception
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$StreamTimeout r1 = r2.readTimeout     // Catch: java.lang.Throwable -> L3c
            r1.exitAndThrowIfTimedOut()     // Catch: java.lang.Throwable -> L3c
            throw r0     // Catch: java.lang.Throwable -> L3c
        L3c:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    void waitForIo() throws java.io.InterruptedIOException {
            r1 = this;
            r1.wait()     // Catch: java.lang.InterruptedException -> L4
            return
        L4:
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            r0.interrupt()
            java.io.InterruptedIOException r0 = new java.io.InterruptedIOException
            r0.<init>()
            throw r0
    }

    public void writeHeaders(java.util.List<com.mbridge.msdk.thrid.okhttp.internal.http2.Header> r9, boolean r10) throws java.io.IOException {
            r8 = this;
            if (r9 == 0) goto L3b
            monitor-enter(r8)
            r0 = 1
            r8.hasResponseHeaders = r0     // Catch: java.lang.Throwable -> L38
            r1 = 0
            if (r10 != 0) goto Lf
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$FramingSink r10 = r8.sink     // Catch: java.lang.Throwable -> L38
            r10.finished = r0     // Catch: java.lang.Throwable -> L38
            r10 = r0
            goto L10
        Lf:
            r10 = r1
        L10:
            r2 = r10
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L38
            if (r10 != 0) goto L29
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r3 = r8.connection
            monitor-enter(r3)
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r10 = r8.connection     // Catch: java.lang.Throwable -> L26
            long r4 = r10.bytesLeftInWriteWindow     // Catch: java.lang.Throwable -> L26
            r6 = 0
            int r10 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r10 != 0) goto L22
            goto L23
        L22:
            r0 = r1
        L23:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L26
            r10 = r0
            goto L29
        L26:
            r9 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L26
            throw r9
        L29:
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r0 = r8.connection
            int r1 = r8.id
            r0.writeSynReply(r1, r2, r9)
            if (r10 == 0) goto L37
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r9 = r8.connection
            r9.flush()
        L37:
            return
        L38:
            r9 = move-exception
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L38
            throw r9
        L3b:
            java.lang.NullPointerException r9 = new java.lang.NullPointerException
            java.lang.String r10 = "headers == null"
            r9.<init>(r10)
            throw r9
    }

    public com.mbridge.msdk.thrid.okio.Timeout writeTimeout() {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream$StreamTimeout r0 = r1.writeTimeout
            return r0
    }
}
