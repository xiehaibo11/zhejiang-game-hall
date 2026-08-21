package com.mbridge.msdk.thrid.okhttp.internal.ws;

final class WebSocketReader {
    boolean closed;
    private final com.mbridge.msdk.thrid.okio.Buffer controlFrameBuffer;
    final com.mbridge.msdk.thrid.okhttp.internal.ws.WebSocketReader.FrameCallback frameCallback;
    long frameLength;
    final boolean isClient;
    boolean isControlFrame;
    boolean isFinalFrame;
    private final com.mbridge.msdk.thrid.okio.Buffer.UnsafeCursor maskCursor;
    private final byte[] maskKey;
    private final com.mbridge.msdk.thrid.okio.Buffer messageFrameBuffer;
    int opcode;
    final com.mbridge.msdk.thrid.okio.BufferedSource source;

    public interface FrameCallback {
        void onReadClose(int r1, java.lang.String r2);

        void onReadMessage(com.mbridge.msdk.thrid.okio.ByteString r1) throws java.io.IOException;

        void onReadMessage(java.lang.String r1) throws java.io.IOException;

        void onReadPing(com.mbridge.msdk.thrid.okio.ByteString r1);

        void onReadPong(com.mbridge.msdk.thrid.okio.ByteString r1);
    }

    WebSocketReader(boolean r2, com.mbridge.msdk.thrid.okio.BufferedSource r3, com.mbridge.msdk.thrid.okhttp.internal.ws.WebSocketReader.FrameCallback r4) {
            r1 = this;
            r1.<init>()
            com.mbridge.msdk.thrid.okio.Buffer r0 = new com.mbridge.msdk.thrid.okio.Buffer
            r0.<init>()
            r1.controlFrameBuffer = r0
            com.mbridge.msdk.thrid.okio.Buffer r0 = new com.mbridge.msdk.thrid.okio.Buffer
            r0.<init>()
            r1.messageFrameBuffer = r0
            if (r3 == 0) goto L38
            if (r4 == 0) goto L30
            r1.isClient = r2
            r1.source = r3
            r1.frameCallback = r4
            r3 = 0
            if (r2 == 0) goto L20
            r4 = r3
            goto L23
        L20:
            r4 = 4
            byte[] r4 = new byte[r4]
        L23:
            r1.maskKey = r4
            if (r2 == 0) goto L28
            goto L2d
        L28:
            com.mbridge.msdk.thrid.okio.Buffer$UnsafeCursor r3 = new com.mbridge.msdk.thrid.okio.Buffer$UnsafeCursor
            r3.<init>()
        L2d:
            r1.maskCursor = r3
            return
        L30:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r3 = "frameCallback == null"
            r2.<init>(r3)
            throw r2
        L38:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r3 = "source == null"
            r2.<init>(r3)
            throw r2
    }

    private void readControlFrame() throws java.io.IOException {
            r8 = this;
            long r0 = r8.frameLength
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L2b
            com.mbridge.msdk.thrid.okio.BufferedSource r4 = r8.source
            com.mbridge.msdk.thrid.okio.Buffer r5 = r8.controlFrameBuffer
            r4.readFully(r5, r0)
            boolean r0 = r8.isClient
            if (r0 != 0) goto L2b
            com.mbridge.msdk.thrid.okio.Buffer r0 = r8.controlFrameBuffer
            com.mbridge.msdk.thrid.okio.Buffer$UnsafeCursor r1 = r8.maskCursor
            r0.readAndWriteUnsafe(r1)
            com.mbridge.msdk.thrid.okio.Buffer$UnsafeCursor r0 = r8.maskCursor
            r0.seek(r2)
            com.mbridge.msdk.thrid.okio.Buffer$UnsafeCursor r0 = r8.maskCursor
            byte[] r1 = r8.maskKey
            com.mbridge.msdk.thrid.okhttp.internal.ws.WebSocketProtocol.toggleMask(r0, r1)
            com.mbridge.msdk.thrid.okio.Buffer$UnsafeCursor r0 = r8.maskCursor
            r0.close()
        L2b:
            int r0 = r8.opcode
            switch(r0) {
                case 8: goto L65;
                case 9: goto L59;
                case 10: goto L4d;
                default: goto L30;
            }
        L30:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unknown control opcode: "
            r1.append(r2)
            int r2 = r8.opcode
            java.lang.String r2 = java.lang.Integer.toHexString(r2)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L4d:
            com.mbridge.msdk.thrid.okhttp.internal.ws.WebSocketReader$FrameCallback r0 = r8.frameCallback
            com.mbridge.msdk.thrid.okio.Buffer r1 = r8.controlFrameBuffer
            com.mbridge.msdk.thrid.okio.ByteString r1 = r1.readByteString()
            r0.onReadPong(r1)
            goto L9a
        L59:
            com.mbridge.msdk.thrid.okhttp.internal.ws.WebSocketReader$FrameCallback r0 = r8.frameCallback
            com.mbridge.msdk.thrid.okio.Buffer r1 = r8.controlFrameBuffer
            com.mbridge.msdk.thrid.okio.ByteString r1 = r1.readByteString()
            r0.onReadPing(r1)
            goto L9a
        L65:
            r0 = 1005(0x3ed, float:1.408E-42)
            com.mbridge.msdk.thrid.okio.Buffer r1 = r8.controlFrameBuffer
            long r4 = r1.size()
            r6 = 1
            int r1 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r1 == 0) goto L9b
            int r1 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r1 == 0) goto L90
            com.mbridge.msdk.thrid.okio.Buffer r0 = r8.controlFrameBuffer
            short r0 = r0.readShort()
            com.mbridge.msdk.thrid.okio.Buffer r1 = r8.controlFrameBuffer
            java.lang.String r1 = r1.readUtf8()
            java.lang.String r2 = com.mbridge.msdk.thrid.okhttp.internal.ws.WebSocketProtocol.closeCodeExceptionMessage(r0)
            if (r2 != 0) goto L8a
            goto L92
        L8a:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            r0.<init>(r2)
            throw r0
        L90:
            java.lang.String r1 = ""
        L92:
            com.mbridge.msdk.thrid.okhttp.internal.ws.WebSocketReader$FrameCallback r2 = r8.frameCallback
            r2.onReadClose(r0, r1)
            r0 = 1
            r8.closed = r0
        L9a:
            return
        L9b:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.String r1 = "Malformed close payload length of 1."
            r0.<init>(r1)
            throw r0
    }

    private void readHeader() throws java.io.IOException {
            r6 = this;
            boolean r0 = r6.closed
            if (r0 != 0) goto L111
            com.mbridge.msdk.thrid.okio.BufferedSource r0 = r6.source
            com.mbridge.msdk.thrid.okio.Timeout r0 = r0.timeout()
            long r0 = r0.timeoutNanos()
            com.mbridge.msdk.thrid.okio.BufferedSource r2 = r6.source
            com.mbridge.msdk.thrid.okio.Timeout r2 = r2.timeout()
            r2.clearTimeout()
            com.mbridge.msdk.thrid.okio.BufferedSource r2 = r6.source     // Catch: java.lang.Throwable -> L104
            byte r2 = r2.readByte()     // Catch: java.lang.Throwable -> L104
            r2 = r2 & 255(0xff, float:3.57E-43)
            com.mbridge.msdk.thrid.okio.BufferedSource r3 = r6.source
            com.mbridge.msdk.thrid.okio.Timeout r3 = r3.timeout()
            java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.NANOSECONDS
            r3.timeout(r0, r4)
            r0 = r2 & 15
            r6.opcode = r0
            r0 = r2 & 128(0x80, float:1.8E-43)
            r1 = 1
            r3 = 0
            if (r0 == 0) goto L36
            r0 = r1
            goto L37
        L36:
            r0 = r3
        L37:
            r6.isFinalFrame = r0
            r0 = r2 & 8
            if (r0 == 0) goto L3f
            r0 = r1
            goto L40
        L3f:
            r0 = r3
        L40:
            r6.isControlFrame = r0
            if (r0 == 0) goto L51
            boolean r0 = r6.isFinalFrame
            if (r0 == 0) goto L49
            goto L51
        L49:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.String r1 = "Control frames must be final."
            r0.<init>(r1)
            throw r0
        L51:
            r0 = r2 & 64
            if (r0 == 0) goto L57
            r0 = r1
            goto L58
        L57:
            r0 = r3
        L58:
            r4 = r2 & 32
            if (r4 == 0) goto L5e
            r4 = r1
            goto L5f
        L5e:
            r4 = r3
        L5f:
            r2 = r2 & 16
            if (r2 == 0) goto L65
            r2 = r1
            goto L66
        L65:
            r2 = r3
        L66:
            if (r0 != 0) goto Lfc
            if (r4 != 0) goto Lfc
            if (r2 != 0) goto Lfc
            com.mbridge.msdk.thrid.okio.BufferedSource r0 = r6.source
            byte r0 = r0.readByte()
            r0 = r0 & 255(0xff, float:3.57E-43)
            r2 = r0 & 128(0x80, float:1.8E-43)
            if (r2 == 0) goto L79
            goto L7a
        L79:
            r1 = r3
        L7a:
            boolean r2 = r6.isClient
            if (r1 != r2) goto L8d
            java.net.ProtocolException r0 = new java.net.ProtocolException
            boolean r1 = r6.isClient
            if (r1 == 0) goto L87
            java.lang.String r1 = "Server-sent frames must not be masked."
            goto L89
        L87:
            java.lang.String r1 = "Client-sent frames must be masked."
        L89:
            r0.<init>(r1)
            throw r0
        L8d:
            r0 = r0 & 127(0x7f, float:1.78E-43)
            long r2 = (long) r0
            r6.frameLength = r2
            r4 = 126(0x7e, double:6.23E-322)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 != 0) goto La6
            com.mbridge.msdk.thrid.okio.BufferedSource r0 = r6.source
            short r0 = r0.readShort()
            long r2 = (long) r0
            r4 = 65535(0xffff, double:3.23786E-319)
            long r2 = r2 & r4
            r6.frameLength = r2
            goto Ldd
        La6:
            r4 = 127(0x7f, double:6.27E-322)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 != 0) goto Ldd
            com.mbridge.msdk.thrid.okio.BufferedSource r0 = r6.source
            long r2 = r0.readLong()
            r6.frameLength = r2
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 < 0) goto Lbb
            goto Ldd
        Lbb:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Frame length 0x"
            r1.append(r2)
            long r2 = r6.frameLength
            java.lang.String r2 = java.lang.Long.toHexString(r2)
            r1.append(r2)
            java.lang.String r2 = " > 0x7FFFFFFFFFFFFFFF"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        Ldd:
            boolean r0 = r6.isControlFrame
            if (r0 == 0) goto Lf2
            long r2 = r6.frameLength
            r4 = 125(0x7d, double:6.2E-322)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 > 0) goto Lea
            goto Lf2
        Lea:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.String r1 = "Control frame must be less than 125B."
            r0.<init>(r1)
            throw r0
        Lf2:
            if (r1 == 0) goto Lfb
            com.mbridge.msdk.thrid.okio.BufferedSource r0 = r6.source
            byte[] r1 = r6.maskKey
            r0.readFully(r1)
        Lfb:
            return
        Lfc:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.String r1 = "Reserved flags are unsupported."
            r0.<init>(r1)
            throw r0
        L104:
            r2 = move-exception
            com.mbridge.msdk.thrid.okio.BufferedSource r3 = r6.source
            com.mbridge.msdk.thrid.okio.Timeout r3 = r3.timeout()
            java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.NANOSECONDS
            r3.timeout(r0, r4)
            throw r2
        L111:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "closed"
            r0.<init>(r1)
            throw r0
    }

    private void readMessage() throws java.io.IOException {
            r5 = this;
        L0:
            boolean r0 = r5.closed
            if (r0 != 0) goto L62
            long r0 = r5.frameLength
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto L38
            com.mbridge.msdk.thrid.okio.BufferedSource r2 = r5.source
            com.mbridge.msdk.thrid.okio.Buffer r3 = r5.messageFrameBuffer
            r2.readFully(r3, r0)
            boolean r0 = r5.isClient
            if (r0 != 0) goto L38
            com.mbridge.msdk.thrid.okio.Buffer r0 = r5.messageFrameBuffer
            com.mbridge.msdk.thrid.okio.Buffer$UnsafeCursor r1 = r5.maskCursor
            r0.readAndWriteUnsafe(r1)
            com.mbridge.msdk.thrid.okio.Buffer$UnsafeCursor r0 = r5.maskCursor
            com.mbridge.msdk.thrid.okio.Buffer r1 = r5.messageFrameBuffer
            long r1 = r1.size()
            long r3 = r5.frameLength
            long r1 = r1 - r3
            r0.seek(r1)
            com.mbridge.msdk.thrid.okio.Buffer$UnsafeCursor r0 = r5.maskCursor
            byte[] r1 = r5.maskKey
            com.mbridge.msdk.thrid.okhttp.internal.ws.WebSocketProtocol.toggleMask(r0, r1)
            com.mbridge.msdk.thrid.okio.Buffer$UnsafeCursor r0 = r5.maskCursor
            r0.close()
        L38:
            boolean r0 = r5.isFinalFrame
            if (r0 == 0) goto L3d
            return
        L3d:
            r5.readUntilNonControlFrame()
            int r0 = r5.opcode
            if (r0 != 0) goto L45
            goto L0
        L45:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Expected continuation opcode. Got: "
            r1.append(r2)
            int r2 = r5.opcode
            java.lang.String r2 = java.lang.Integer.toHexString(r2)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L62:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "closed"
            r0.<init>(r1)
            throw r0
    }

    private void readMessageFrame() throws java.io.IOException {
            r4 = this;
            int r0 = r4.opcode
            r1 = 1
            if (r0 == r1) goto L24
            r2 = 2
            if (r0 != r2) goto L9
            goto L24
        L9:
            java.net.ProtocolException r1 = new java.net.ProtocolException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Unknown opcode: "
            r2.append(r3)
            java.lang.String r0 = java.lang.Integer.toHexString(r0)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
        L24:
            r4.readMessage()
            if (r0 != r1) goto L35
            com.mbridge.msdk.thrid.okhttp.internal.ws.WebSocketReader$FrameCallback r0 = r4.frameCallback
            com.mbridge.msdk.thrid.okio.Buffer r1 = r4.messageFrameBuffer
            java.lang.String r1 = r1.readUtf8()
            r0.onReadMessage(r1)
            goto L40
        L35:
            com.mbridge.msdk.thrid.okhttp.internal.ws.WebSocketReader$FrameCallback r0 = r4.frameCallback
            com.mbridge.msdk.thrid.okio.Buffer r1 = r4.messageFrameBuffer
            com.mbridge.msdk.thrid.okio.ByteString r1 = r1.readByteString()
            r0.onReadMessage(r1)
        L40:
            return
    }

    private void readUntilNonControlFrame() throws java.io.IOException {
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

    void processNextFrame() throws java.io.IOException {
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
