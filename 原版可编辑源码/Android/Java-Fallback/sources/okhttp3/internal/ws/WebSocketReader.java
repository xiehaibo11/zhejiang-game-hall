package okhttp3.internal.ws;

@kotlin.Metadata(d1 = {"\u0000P\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0012\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\b\u0018\u00002\u00020\u0001:\u0001&B-\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\u0003\u0012\u0006\u0010\t\u001a\u00020\u0003¢\u0006\u0002\u0010\nJ\b\u0010\u001e\u001a\u00020\u001fH\u0016J\u0006\u0010 \u001a\u00020\u001fJ\b\u0010!\u001a\u00020\u001fH\u0002J\b\u0010\"\u001a\u00020\u001fH\u0002J\b\u0010#\u001a\u00020\u001fH\u0002J\b\u0010$\u001a\u00020\u001fH\u0002J\b\u0010%\u001a\u00020\u001fH\u0002R\u000e\u0010\u000b\u001a\u00020\u0003X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u000fX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0003X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0011\u001a\u00020\u0003X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0012\u001a\u0004\u0018\u00010\u0013X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0014\u001a\u0004\u0018\u00010\u0015X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0016\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0017\u001a\u0004\u0018\u00010\u0018X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0019\u001a\u00020\u001aX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u001b\u001a\u00020\u0003X\u0082\u000e¢\u0006\u0002\n\u0000R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u001c\u0010\u001d¨\u0006'"}, d2 = {"Lokhttp3/internal/ws/WebSocketReader;", "Ljava/io/Closeable;", "isClient", "", "source", "Lokio/BufferedSource;", "frameCallback", "Lokhttp3/internal/ws/WebSocketReader$FrameCallback;", "perMessageDeflate", "noContextTakeover", "(ZLokio/BufferedSource;Lokhttp3/internal/ws/WebSocketReader$FrameCallback;ZZ)V", "closed", "controlFrameBuffer", "Lokio/Buffer;", "frameLength", "", "isControlFrame", "isFinalFrame", "maskCursor", "Lokio/Buffer$UnsafeCursor;", "maskKey", "", "messageFrameBuffer", "messageInflater", "Lokhttp3/internal/ws/MessageInflater;", "opcode", "", "readingCompressedMessage", "getSource", "()Lokio/BufferedSource;", "close", "", "processNextFrame", "readControlFrame", "readHeader", "readMessage", "readMessageFrame", "readUntilNonControlFrame", "FrameCallback", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class WebSocketReader implements java.io.Closeable {
    private boolean closed;
    private final okio.Buffer controlFrameBuffer;
    private final okhttp3.internal.ws.WebSocketReader.FrameCallback frameCallback;
    private long frameLength;
    private final boolean isClient;
    private boolean isControlFrame;
    private boolean isFinalFrame;
    private final okio.Buffer.UnsafeCursor maskCursor;
    private final byte[] maskKey;
    private final okio.Buffer messageFrameBuffer;
    private okhttp3.internal.ws.MessageInflater messageInflater;
    private final boolean noContextTakeover;
    private int opcode;
    private final boolean perMessageDeflate;
    private boolean readingCompressedMessage;
    private final okio.BufferedSource source;

    @kotlin.Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0004\bf\u0018\u00002\u00020\u0001J\u0018\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007H&J\u0010\u0010\b\u001a\u00020\u00032\u0006\u0010\t\u001a\u00020\u0007H&J\u0010\u0010\b\u001a\u00020\u00032\u0006\u0010\n\u001a\u00020\u000bH&J\u0010\u0010\f\u001a\u00020\u00032\u0006\u0010\r\u001a\u00020\u000bH&J\u0010\u0010\u000e\u001a\u00020\u00032\u0006\u0010\r\u001a\u00020\u000bH&¨\u0006\u000f"}, d2 = {"Lokhttp3/internal/ws/WebSocketReader$FrameCallback;", "", "onReadClose", "", "code", "", "reason", "", "onReadMessage", "text", "bytes", "Lokio/ByteString;", "onReadPing", "payload", "onReadPong", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public interface FrameCallback {
        void onReadClose(int r1, java.lang.String r2);

        void onReadMessage(java.lang.String r1) throws java.io.IOException;

        void onReadMessage(okio.ByteString r1) throws java.io.IOException;

        void onReadPing(okio.ByteString r1);

        void onReadPong(okio.ByteString r1);
    }

    public WebSocketReader(boolean r2, okio.BufferedSource r3, okhttp3.internal.ws.WebSocketReader.FrameCallback r4, boolean r5, boolean r6) {
            r1 = this;
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "frameCallback"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            r1.<init>()
            r1.isClient = r2
            r1.source = r3
            r1.frameCallback = r4
            r1.perMessageDeflate = r5
            r1.noContextTakeover = r6
            okio.Buffer r2 = new okio.Buffer
            r2.<init>()
            r1.controlFrameBuffer = r2
            okio.Buffer r2 = new okio.Buffer
            r2.<init>()
            r1.messageFrameBuffer = r2
            boolean r2 = r1.isClient
            r3 = 0
            if (r2 == 0) goto L2c
            r2 = r3
            goto L2f
        L2c:
            r2 = 4
            byte[] r2 = new byte[r2]
        L2f:
            r1.maskKey = r2
            boolean r2 = r1.isClient
            if (r2 == 0) goto L36
            goto L3b
        L36:
            okio.Buffer$UnsafeCursor r3 = new okio.Buffer$UnsafeCursor
            r3.<init>()
        L3b:
            r1.maskCursor = r3
            return
    }

    private final void readControlFrame() throws java.io.IOException {
            r8 = this;
            long r0 = r8.frameLength
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L33
            okio.BufferedSource r4 = r8.source
            okio.Buffer r5 = r8.controlFrameBuffer
            r4.readFully(r5, r0)
            boolean r0 = r8.isClient
            if (r0 != 0) goto L33
            okio.Buffer r0 = r8.controlFrameBuffer
            okio.Buffer$UnsafeCursor r1 = r8.maskCursor
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
            r0.readAndWriteUnsafe(r1)
            okio.Buffer$UnsafeCursor r0 = r8.maskCursor
            r0.seek(r2)
            okhttp3.internal.ws.WebSocketProtocol r0 = okhttp3.internal.ws.WebSocketProtocol.INSTANCE
            okio.Buffer$UnsafeCursor r1 = r8.maskCursor
            byte[] r4 = r8.maskKey
            kotlin.jvm.internal.Intrinsics.checkNotNull(r4)
            r0.toggleMask(r1, r4)
            okio.Buffer$UnsafeCursor r0 = r8.maskCursor
            r0.close()
        L33:
            int r0 = r8.opcode
            switch(r0) {
                case 8: goto L62;
                case 9: goto L56;
                case 10: goto L4a;
                default: goto L38;
            }
        L38:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            int r1 = r8.opcode
            java.lang.String r1 = okhttp3.internal.Util.toHexString(r1)
            java.lang.String r2 = "Unknown control opcode: "
            java.lang.String r1 = kotlin.jvm.internal.Intrinsics.stringPlus(r2, r1)
            r0.<init>(r1)
            throw r0
        L4a:
            okhttp3.internal.ws.WebSocketReader$FrameCallback r0 = r8.frameCallback
            okio.Buffer r1 = r8.controlFrameBuffer
            okio.ByteString r1 = r1.readByteString()
            r0.onReadPong(r1)
            goto L99
        L56:
            okhttp3.internal.ws.WebSocketReader$FrameCallback r0 = r8.frameCallback
            okio.Buffer r1 = r8.controlFrameBuffer
            okio.ByteString r1 = r1.readByteString()
            r0.onReadPing(r1)
            goto L99
        L62:
            r0 = 1005(0x3ed, float:1.408E-42)
            okio.Buffer r1 = r8.controlFrameBuffer
            long r4 = r1.size()
            r6 = 1
            int r1 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r1 == 0) goto L9a
            int r1 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r1 == 0) goto L8f
            okio.Buffer r0 = r8.controlFrameBuffer
            short r0 = r0.readShort()
            okio.Buffer r1 = r8.controlFrameBuffer
            java.lang.String r1 = r1.readUtf8()
            okhttp3.internal.ws.WebSocketProtocol r2 = okhttp3.internal.ws.WebSocketProtocol.INSTANCE
            java.lang.String r2 = r2.closeCodeExceptionMessage(r0)
            if (r2 != 0) goto L89
            goto L91
        L89:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            r0.<init>(r2)
            throw r0
        L8f:
            java.lang.String r1 = ""
        L91:
            okhttp3.internal.ws.WebSocketReader$FrameCallback r2 = r8.frameCallback
            r2.onReadClose(r0, r1)
            r0 = 1
            r8.closed = r0
        L99:
            return
        L9a:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.String r1 = "Malformed close payload length of 1."
            r0.<init>(r1)
            throw r0
    }

    private final void readHeader() throws java.io.IOException, java.net.ProtocolException {
            r8 = this;
            boolean r0 = r8.closed
            if (r0 != 0) goto L145
            okio.BufferedSource r0 = r8.source
            okio.Timeout r0 = r0.timeout()
            long r0 = r0.timeoutNanos()
            okio.BufferedSource r2 = r8.source
            okio.Timeout r2 = r2.timeout()
            r2.clearTimeout()
            okio.BufferedSource r2 = r8.source     // Catch: java.lang.Throwable -> L138
            byte r2 = r2.readByte()     // Catch: java.lang.Throwable -> L138
            r3 = 255(0xff, float:3.57E-43)
            int r2 = okhttp3.internal.Util.and(r2, r3)     // Catch: java.lang.Throwable -> L138
            okio.BufferedSource r4 = r8.source
            okio.Timeout r4 = r4.timeout()
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.NANOSECONDS
            r4.timeout(r0, r5)
            r0 = r2 & 15
            r8.opcode = r0
            r0 = r2 & 128(0x80, float:1.8E-43)
            r1 = 0
            r4 = 1
            if (r0 == 0) goto L3a
            r0 = r4
            goto L3b
        L3a:
            r0 = r1
        L3b:
            r8.isFinalFrame = r0
            r0 = r2 & 8
            if (r0 == 0) goto L43
            r0 = r4
            goto L44
        L43:
            r0 = r1
        L44:
            r8.isControlFrame = r0
            if (r0 == 0) goto L55
            boolean r0 = r8.isFinalFrame
            if (r0 == 0) goto L4d
            goto L55
        L4d:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.String r1 = "Control frames must be final."
            r0.<init>(r1)
            throw r0
        L55:
            r0 = r2 & 64
            if (r0 == 0) goto L5b
            r0 = r4
            goto L5c
        L5b:
            r0 = r1
        L5c:
            int r5 = r8.opcode
            java.lang.String r6 = "Unexpected rsv1 flag"
            if (r5 == r4) goto L6e
            r7 = 2
            if (r5 == r7) goto L6e
            if (r0 != 0) goto L68
            goto L7f
        L68:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            r0.<init>(r6)
            throw r0
        L6e:
            if (r0 == 0) goto L7c
            boolean r0 = r8.perMessageDeflate
            if (r0 == 0) goto L76
            r0 = r4
            goto L7d
        L76:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            r0.<init>(r6)
            throw r0
        L7c:
            r0 = r1
        L7d:
            r8.readingCompressedMessage = r0
        L7f:
            r0 = r2 & 32
            if (r0 == 0) goto L85
            r0 = r4
            goto L86
        L85:
            r0 = r1
        L86:
            if (r0 != 0) goto L130
            r0 = r2 & 16
            if (r0 == 0) goto L8e
            r0 = r4
            goto L8f
        L8e:
            r0 = r1
        L8f:
            if (r0 != 0) goto L128
            okio.BufferedSource r0 = r8.source
            byte r0 = r0.readByte()
            int r0 = okhttp3.internal.Util.and(r0, r3)
            r2 = r0 & 128(0x80, float:1.8E-43)
            if (r2 == 0) goto La0
            r1 = r4
        La0:
            boolean r2 = r8.isClient
            if (r1 != r2) goto Lb3
            java.net.ProtocolException r0 = new java.net.ProtocolException
            boolean r1 = r8.isClient
            if (r1 == 0) goto Lad
            java.lang.String r1 = "Server-sent frames must not be masked."
            goto Laf
        Lad:
            java.lang.String r1 = "Client-sent frames must be masked."
        Laf:
            r0.<init>(r1)
            throw r0
        Lb3:
            r0 = r0 & 127(0x7f, float:1.78E-43)
            long r2 = (long) r0
            r8.frameLength = r2
            r4 = 126(0x7e, double:6.23E-322)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 != 0) goto Lcf
            okio.BufferedSource r0 = r8.source
            short r0 = r0.readShort()
            r2 = 65535(0xffff, float:9.1834E-41)
            int r0 = okhttp3.internal.Util.and(r0, r2)
            long r2 = (long) r0
            r8.frameLength = r2
            goto L106
        Lcf:
            r4 = 127(0x7f, double:6.27E-322)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 != 0) goto L106
            okio.BufferedSource r0 = r8.source
            long r2 = r0.readLong()
            r8.frameLength = r2
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 < 0) goto Le4
            goto L106
        Le4:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Frame length 0x"
            r1.append(r2)
            long r2 = r8.frameLength
            java.lang.String r2 = okhttp3.internal.Util.toHexString(r2)
            r1.append(r2)
            java.lang.String r2 = " > 0x7FFFFFFFFFFFFFFF"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L106:
            boolean r0 = r8.isControlFrame
            if (r0 == 0) goto L11b
            long r2 = r8.frameLength
            r4 = 125(0x7d, double:6.2E-322)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 > 0) goto L113
            goto L11b
        L113:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.String r1 = "Control frame must be less than 125B."
            r0.<init>(r1)
            throw r0
        L11b:
            if (r1 == 0) goto L127
            okio.BufferedSource r0 = r8.source
            byte[] r1 = r8.maskKey
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
            r0.readFully(r1)
        L127:
            return
        L128:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.String r1 = "Unexpected rsv3 flag"
            r0.<init>(r1)
            throw r0
        L130:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.String r1 = "Unexpected rsv2 flag"
            r0.<init>(r1)
            throw r0
        L138:
            r2 = move-exception
            okio.BufferedSource r3 = r8.source
            okio.Timeout r3 = r3.timeout()
            java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.NANOSECONDS
            r3.timeout(r0, r4)
            throw r2
        L145:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "closed"
            r0.<init>(r1)
            throw r0
    }

    private final void readMessage() throws java.io.IOException {
            r5 = this;
        L0:
            boolean r0 = r5.closed
            if (r0 != 0) goto L5f
            long r0 = r5.frameLength
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto L40
            okio.BufferedSource r2 = r5.source
            okio.Buffer r3 = r5.messageFrameBuffer
            r2.readFully(r3, r0)
            boolean r0 = r5.isClient
            if (r0 != 0) goto L40
            okio.Buffer r0 = r5.messageFrameBuffer
            okio.Buffer$UnsafeCursor r1 = r5.maskCursor
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
            r0.readAndWriteUnsafe(r1)
            okio.Buffer$UnsafeCursor r0 = r5.maskCursor
            okio.Buffer r1 = r5.messageFrameBuffer
            long r1 = r1.size()
            long r3 = r5.frameLength
            long r1 = r1 - r3
            r0.seek(r1)
            okhttp3.internal.ws.WebSocketProtocol r0 = okhttp3.internal.ws.WebSocketProtocol.INSTANCE
            okio.Buffer$UnsafeCursor r1 = r5.maskCursor
            byte[] r2 = r5.maskKey
            kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
            r0.toggleMask(r1, r2)
            okio.Buffer$UnsafeCursor r0 = r5.maskCursor
            r0.close()
        L40:
            boolean r0 = r5.isFinalFrame
            if (r0 == 0) goto L45
            return
        L45:
            r5.readUntilNonControlFrame()
            int r0 = r5.opcode
            if (r0 != 0) goto L4d
            goto L0
        L4d:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            int r1 = r5.opcode
            java.lang.String r1 = okhttp3.internal.Util.toHexString(r1)
            java.lang.String r2 = "Expected continuation opcode. Got: "
            java.lang.String r1 = kotlin.jvm.internal.Intrinsics.stringPlus(r2, r1)
            r0.<init>(r1)
            throw r0
        L5f:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "closed"
            r0.<init>(r1)
            throw r0
    }

    private final void readMessageFrame() throws java.io.IOException {
            r4 = this;
            int r0 = r4.opcode
            r1 = 1
            if (r0 == r1) goto L19
            r2 = 2
            if (r0 != r2) goto L9
            goto L19
        L9:
            java.net.ProtocolException r1 = new java.net.ProtocolException
            java.lang.String r0 = okhttp3.internal.Util.toHexString(r0)
            java.lang.String r2 = "Unknown opcode: "
            java.lang.String r0 = kotlin.jvm.internal.Intrinsics.stringPlus(r2, r0)
            r1.<init>(r0)
            throw r1
        L19:
            r4.readMessage()
            boolean r2 = r4.readingCompressedMessage
            if (r2 == 0) goto L32
            okhttp3.internal.ws.MessageInflater r2 = r4.messageInflater
            if (r2 != 0) goto L2d
            okhttp3.internal.ws.MessageInflater r2 = new okhttp3.internal.ws.MessageInflater
            boolean r3 = r4.noContextTakeover
            r2.<init>(r3)
            r4.messageInflater = r2
        L2d:
            okio.Buffer r3 = r4.messageFrameBuffer
            r2.inflate(r3)
        L32:
            if (r0 != r1) goto L40
            okhttp3.internal.ws.WebSocketReader$FrameCallback r0 = r4.frameCallback
            okio.Buffer r1 = r4.messageFrameBuffer
            java.lang.String r1 = r1.readUtf8()
            r0.onReadMessage(r1)
            goto L4b
        L40:
            okhttp3.internal.ws.WebSocketReader$FrameCallback r0 = r4.frameCallback
            okio.Buffer r1 = r4.messageFrameBuffer
            okio.ByteString r1 = r1.readByteString()
            r0.onReadMessage(r1)
        L4b:
            return
    }

    private final void readUntilNonControlFrame() throws java.io.IOException {
            r1 = this;
        L0:
            boolean r0 = r1.closed
            if (r0 != 0) goto L10
            r1.readHeader()
            boolean r0 = r1.isControlFrame
            if (r0 != 0) goto Lc
            goto L10
        Lc:
            r1.readControlFrame()
            goto L0
        L10:
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            okhttp3.internal.ws.MessageInflater r0 = r1.messageInflater
            if (r0 != 0) goto L5
            goto L8
        L5:
            r0.close()
        L8:
            return
    }

    public final okio.BufferedSource getSource() {
            r1 = this;
            okio.BufferedSource r0 = r1.source
            return r0
    }

    public final void processNextFrame() throws java.io.IOException {
            r1 = this;
            r1.readHeader()
            boolean r0 = r1.isControlFrame
            if (r0 == 0) goto Lb
            r1.readControlFrame()
            goto Le
        Lb:
            r1.readMessageFrame()
        Le:
            return
    }
}
