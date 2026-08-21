package okhttp3.internal.ws;

@kotlin.Metadata(d1 = {"\u0000V\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0012\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\t\u0018\u00002\u00020\u0001B5\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\u0003\u0012\u0006\u0010\t\u001a\u00020\u0003\u0012\u0006\u0010\n\u001a\u00020\u000b¢\u0006\u0002\u0010\fJ\b\u0010\u001b\u001a\u00020\u001cH\u0016J\u0018\u0010\u001d\u001a\u00020\u001c2\u0006\u0010\u001e\u001a\u00020\u001f2\b\u0010 \u001a\u0004\u0018\u00010!J\u0018\u0010\"\u001a\u00020\u001c2\u0006\u0010#\u001a\u00020\u001f2\u0006\u0010$\u001a\u00020!H\u0002J\u0016\u0010%\u001a\u00020\u001c2\u0006\u0010&\u001a\u00020\u001f2\u0006\u0010'\u001a\u00020!J\u000e\u0010(\u001a\u00020\u001c2\u0006\u0010$\u001a\u00020!J\u000e\u0010)\u001a\u00020\u001c2\u0006\u0010$\u001a\u00020!R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\r\u001a\u0004\u0018\u00010\u000eX\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u000f\u001a\u0004\u0018\u00010\u0010X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0011\u001a\u00020\u0012X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0013\u001a\u0004\u0018\u00010\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0016R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0018R\u000e\u0010\u0019\u001a\u00020\u0012X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u001a\u001a\u00020\u0003X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006*"}, d2 = {"Lokhttp3/internal/ws/WebSocketWriter;", "Ljava/io/Closeable;", "isClient", "", "sink", "Lokio/BufferedSink;", "random", "Ljava/util/Random;", "perMessageDeflate", "noContextTakeover", "minimumDeflateSize", "", "(ZLokio/BufferedSink;Ljava/util/Random;ZZJ)V", "maskCursor", "Lokio/Buffer$UnsafeCursor;", "maskKey", "", "messageBuffer", "Lokio/Buffer;", "messageDeflater", "Lokhttp3/internal/ws/MessageDeflater;", "getRandom", "()Ljava/util/Random;", "getSink", "()Lokio/BufferedSink;", "sinkBuffer", "writerClosed", "close", "", "writeClose", "code", "", "reason", "Lokio/ByteString;", "writeControlFrame", "opcode", "payload", "writeMessageFrame", "formatOpcode", "data", "writePing", "writePong", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class WebSocketWriter implements java.io.Closeable {
    private final boolean isClient;
    private final okio.Buffer.UnsafeCursor maskCursor;
    private final byte[] maskKey;
    private final okio.Buffer messageBuffer;
    private okhttp3.internal.ws.MessageDeflater messageDeflater;
    private final long minimumDeflateSize;
    private final boolean noContextTakeover;
    private final boolean perMessageDeflate;
    private final java.util.Random random;
    private final okio.BufferedSink sink;
    private final okio.Buffer sinkBuffer;
    private boolean writerClosed;

    final class FrameSink implements okio.Sink {
        boolean closed;
        long contentLength;
        int formatOpcode;
        boolean isFirstFrame;
        final okhttp3.internal.ws.WebSocketWriter this$0;

        FrameSink(okhttp3.internal.ws.WebSocketWriter r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void close() throws java.io.IOException {
                r7 = this;
                boolean r0 = r7.closed
                if (r0 != 0) goto L1d
                okhttp3.internal.ws.WebSocketWriter r1 = r7.this$0
                int r2 = r7.formatOpcode
                okio.Buffer r0 = r1.buffer
                long r3 = r0.size()
                boolean r5 = r7.isFirstFrame
                r6 = 1
                r1.writeMessageFrame(r2, r3, r5, r6)
                r0 = 1
                r7.closed = r0
                okhttp3.internal.ws.WebSocketWriter r0 = r7.this$0
                r1 = 0
                r0.activeWriter = r1
                return
            L1d:
                java.io.IOException r0 = new java.io.IOException
                java.lang.String r1 = "closed"
                r0.<init>(r1)
                throw r0
        }

        @Override
        public void flush() throws java.io.IOException {
                r7 = this;
                boolean r0 = r7.closed
                if (r0 != 0) goto L18
                okhttp3.internal.ws.WebSocketWriter r1 = r7.this$0
                int r2 = r7.formatOpcode
                okio.Buffer r0 = r1.buffer
                long r3 = r0.size()
                boolean r5 = r7.isFirstFrame
                r6 = 0
                r1.writeMessageFrame(r2, r3, r5, r6)
                r0 = 0
                r7.isFirstFrame = r0
                return
            L18:
                java.io.IOException r0 = new java.io.IOException
                java.lang.String r1 = "closed"
                r0.<init>(r1)
                throw r0
        }

        @Override
        public okio.Timeout timeout() {
                r1 = this;
                okhttp3.internal.ws.WebSocketWriter r0 = r1.this$0
                okio.BufferedSink r0 = r0.sink
                okio.Timeout r0 = r0.timeout()
                return r0
        }

        @Override
        public void write(okio.Buffer r7, long r8) throws java.io.IOException {
                r6 = this;
                boolean r0 = r6.closed
                if (r0 != 0) goto L49
                okhttp3.internal.ws.WebSocketWriter r0 = r6.this$0
                okio.Buffer r0 = r0.buffer
                r0.write(r7, r8)
                boolean r7 = r6.isFirstFrame
                r8 = 0
                if (r7 == 0) goto L2b
                long r0 = r6.contentLength
                r2 = -1
                int r7 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r7 == 0) goto L2b
                okhttp3.internal.ws.WebSocketWriter r7 = r6.this$0
                okio.Buffer r7 = r7.buffer
                long r0 = r7.size()
                long r2 = r6.contentLength
                r4 = 8192(0x2000, double:4.0474E-320)
                long r2 = r2 - r4
                int r7 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r7 <= 0) goto L2b
                r7 = 1
                goto L2c
            L2b:
                r7 = 0
            L2c:
                okhttp3.internal.ws.WebSocketWriter r9 = r6.this$0
                okio.Buffer r9 = r9.buffer
                long r2 = r9.completeSegmentByteCount()
                r0 = 0
                int r9 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
                if (r9 <= 0) goto L48
                if (r7 != 0) goto L48
                okhttp3.internal.ws.WebSocketWriter r0 = r6.this$0
                int r1 = r6.formatOpcode
                boolean r4 = r6.isFirstFrame
                r5 = 0
                r0.writeMessageFrame(r1, r2, r4, r5)
                r6.isFirstFrame = r8
            L48:
                return
            L49:
                java.io.IOException r7 = new java.io.IOException
                java.lang.String r8 = "closed"
                r7.<init>(r8)
                throw r7
        }
    }

    public WebSocketWriter(boolean r2, okio.BufferedSink r3, java.util.Random r4, boolean r5, boolean r6, long r7) {
            r1 = this;
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "random"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            r1.<init>()
            r1.isClient = r2
            r1.sink = r3
            r1.random = r4
            r1.perMessageDeflate = r5
            r1.noContextTakeover = r6
            r1.minimumDeflateSize = r7
            okio.Buffer r2 = new okio.Buffer
            r2.<init>()
            r1.messageBuffer = r2
            okio.BufferedSink r2 = r1.sink
            okio.Buffer r2 = r2.getBuffer()
            r1.sinkBuffer = r2
            boolean r2 = r1.isClient
            r3 = 0
            if (r2 == 0) goto L31
            r2 = 4
            byte[] r2 = new byte[r2]
            goto L32
        L31:
            r2 = r3
        L32:
            r1.maskKey = r2
            boolean r2 = r1.isClient
            if (r2 == 0) goto L3d
            okio.Buffer$UnsafeCursor r3 = new okio.Buffer$UnsafeCursor
            r3.<init>()
        L3d:
            r1.maskCursor = r3
            return
    }

    private final void writeControlFrame(int r6, okio.ByteString r7) throws java.io.IOException {
            r5 = this;
            boolean r0 = r5.writerClosed
            if (r0 != 0) goto L7e
            int r0 = r7.size()
            long r1 = (long) r0
            r3 = 125(0x7d, double:6.2E-322)
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 > 0) goto L11
            r1 = 1
            goto L12
        L11:
            r1 = 0
        L12:
            if (r1 == 0) goto L72
            r6 = r6 | 128(0x80, float:1.8E-43)
            okio.Buffer r1 = r5.sinkBuffer
            r1.writeByte(r6)
            boolean r6 = r5.isClient
            if (r6 == 0) goto L62
            r6 = r0 | 128(0x80, float:1.8E-43)
            okio.Buffer r1 = r5.sinkBuffer
            r1.writeByte(r6)
            java.util.Random r6 = r5.random
            byte[] r1 = r5.maskKey
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
            r6.nextBytes(r1)
            okio.Buffer r6 = r5.sinkBuffer
            byte[] r1 = r5.maskKey
            r6.write(r1)
            if (r0 <= 0) goto L6c
            okio.Buffer r6 = r5.sinkBuffer
            long r0 = r6.size()
            okio.Buffer r6 = r5.sinkBuffer
            r6.write(r7)
            okio.Buffer r6 = r5.sinkBuffer
            okio.Buffer$UnsafeCursor r7 = r5.maskCursor
            kotlin.jvm.internal.Intrinsics.checkNotNull(r7)
            r6.readAndWriteUnsafe(r7)
            okio.Buffer$UnsafeCursor r6 = r5.maskCursor
            r6.seek(r0)
            okhttp3.internal.ws.WebSocketProtocol r6 = okhttp3.internal.ws.WebSocketProtocol.INSTANCE
            okio.Buffer$UnsafeCursor r7 = r5.maskCursor
            byte[] r0 = r5.maskKey
            r6.toggleMask(r7, r0)
            okio.Buffer$UnsafeCursor r6 = r5.maskCursor
            r6.close()
            goto L6c
        L62:
            okio.Buffer r6 = r5.sinkBuffer
            r6.writeByte(r0)
            okio.Buffer r6 = r5.sinkBuffer
            r6.write(r7)
        L6c:
            okio.BufferedSink r6 = r5.sink
            r6.flush()
            return
        L72:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r7 = "Payload size must be less than or equal to 125"
            java.lang.String r7 = r7.toString()
            r6.<init>(r7)
            throw r6
        L7e:
            java.io.IOException r6 = new java.io.IOException
            java.lang.String r7 = "closed"
            r6.<init>(r7)
            throw r6
    }

    @Override
    public void close() {
            r1 = this;
            okhttp3.internal.ws.MessageDeflater r0 = r1.messageDeflater
            if (r0 != 0) goto L5
            goto L8
        L5:
            r0.close()
        L8:
            return
    }

    public final java.util.Random getRandom() {
            r1 = this;
            java.util.Random r0 = r1.random
            return r0
    }

    public final okio.BufferedSink getSink() {
            r1 = this;
            okio.BufferedSink r0 = r1.sink
            return r0
    }

    public final void writeClose(int r2, okio.ByteString r3) throws java.io.IOException {
            r1 = this;
            okio.ByteString r0 = okio.ByteString.EMPTY
            if (r2 != 0) goto L6
            if (r3 == 0) goto L1e
        L6:
            if (r2 == 0) goto Ld
            okhttp3.internal.ws.WebSocketProtocol r0 = okhttp3.internal.ws.WebSocketProtocol.INSTANCE
            r0.validateCloseCode(r2)
        Ld:
            okio.Buffer r0 = new okio.Buffer
            r0.<init>()
            r0.writeShort(r2)
            if (r3 == 0) goto L1a
            r0.write(r3)
        L1a:
            okio.ByteString r0 = r0.readByteString()
        L1e:
            r2 = 8
            r3 = 1
            r1.writeControlFrame(r2, r0)     // Catch: java.lang.Throwable -> L27
            r1.writerClosed = r3
            return
        L27:
            r2 = move-exception
            r1.writerClosed = r3
            throw r2
    }

    public final void writeMessageFrame(int r6, okio.ByteString r7) throws java.io.IOException {
            r5 = this;
            java.lang.String r0 = "data"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            boolean r0 = r5.writerClosed
            if (r0 != 0) goto Lba
            okio.Buffer r0 = r5.messageBuffer
            r0.write(r7)
            r0 = 128(0x80, float:1.8E-43)
            r6 = r6 | r0
            boolean r1 = r5.perMessageDeflate
            if (r1 == 0) goto L34
            int r7 = r7.size()
            long r1 = (long) r7
            long r3 = r5.minimumDeflateSize
            int r7 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r7 < 0) goto L34
            okhttp3.internal.ws.MessageDeflater r7 = r5.messageDeflater
            if (r7 != 0) goto L2d
            okhttp3.internal.ws.MessageDeflater r7 = new okhttp3.internal.ws.MessageDeflater
            boolean r1 = r5.noContextTakeover
            r7.<init>(r1)
            r5.messageDeflater = r7
        L2d:
            okio.Buffer r1 = r5.messageBuffer
            r7.deflate(r1)
            r6 = r6 | 64
        L34:
            okio.Buffer r7 = r5.messageBuffer
            long r1 = r7.size()
            okio.Buffer r7 = r5.sinkBuffer
            r7.writeByte(r6)
            r6 = 0
            boolean r7 = r5.isClient
            if (r7 == 0) goto L45
            goto L46
        L45:
            r0 = r6
        L46:
            r6 = 125(0x7d, double:6.2E-322)
            int r6 = (r1 > r6 ? 1 : (r1 == r6 ? 0 : -1))
            if (r6 > 0) goto L54
            int r6 = (int) r1
            r6 = r6 | r0
            okio.Buffer r7 = r5.sinkBuffer
            r7.writeByte(r6)
            goto L75
        L54:
            r6 = 65535(0xffff, double:3.23786E-319)
            int r6 = (r1 > r6 ? 1 : (r1 == r6 ? 0 : -1))
            if (r6 > 0) goto L69
            r6 = r0 | 126(0x7e, float:1.77E-43)
            okio.Buffer r7 = r5.sinkBuffer
            r7.writeByte(r6)
            okio.Buffer r6 = r5.sinkBuffer
            int r7 = (int) r1
            r6.writeShort(r7)
            goto L75
        L69:
            r6 = r0 | 127(0x7f, float:1.78E-43)
            okio.Buffer r7 = r5.sinkBuffer
            r7.writeByte(r6)
            okio.Buffer r6 = r5.sinkBuffer
            r6.writeLong(r1)
        L75:
            boolean r6 = r5.isClient
            if (r6 == 0) goto Lad
            java.util.Random r6 = r5.random
            byte[] r7 = r5.maskKey
            kotlin.jvm.internal.Intrinsics.checkNotNull(r7)
            r6.nextBytes(r7)
            okio.Buffer r6 = r5.sinkBuffer
            byte[] r7 = r5.maskKey
            r6.write(r7)
            r6 = 0
            int r0 = (r1 > r6 ? 1 : (r1 == r6 ? 0 : -1))
            if (r0 <= 0) goto Lad
            okio.Buffer r0 = r5.messageBuffer
            okio.Buffer$UnsafeCursor r3 = r5.maskCursor
            kotlin.jvm.internal.Intrinsics.checkNotNull(r3)
            r0.readAndWriteUnsafe(r3)
            okio.Buffer$UnsafeCursor r0 = r5.maskCursor
            r0.seek(r6)
            okhttp3.internal.ws.WebSocketProtocol r6 = okhttp3.internal.ws.WebSocketProtocol.INSTANCE
            okio.Buffer$UnsafeCursor r7 = r5.maskCursor
            byte[] r0 = r5.maskKey
            r6.toggleMask(r7, r0)
            okio.Buffer$UnsafeCursor r6 = r5.maskCursor
            r6.close()
        Lad:
            okio.Buffer r6 = r5.sinkBuffer
            okio.Buffer r7 = r5.messageBuffer
            r6.write(r7, r1)
            okio.BufferedSink r6 = r5.sink
            r6.emit()
            return
        Lba:
            java.io.IOException r6 = new java.io.IOException
            java.lang.String r7 = "closed"
            r6.<init>(r7)
            throw r6
    }

    public final void writePing(okio.ByteString r2) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "payload"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r0 = 9
            r1.writeControlFrame(r0, r2)
            return
    }

    public final void writePong(okio.ByteString r2) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "payload"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r0 = 10
            r1.writeControlFrame(r0, r2)
            return
    }
}
