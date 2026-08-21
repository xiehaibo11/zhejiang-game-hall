package org.cocos2dx.okhttp3.internal.ws;

final class WebSocketWriter {
    boolean activeWriter;
    final org.cocos2dx.okio.Buffer buffer;
    final org.cocos2dx.okhttp3.internal.ws.WebSocketWriter.FrameSink frameSink;
    final boolean isClient;
    private final org.cocos2dx.okio.Buffer.UnsafeCursor maskCursor;
    private final byte[] maskKey;
    final java.util.Random random;
    final org.cocos2dx.okio.BufferedSink sink;
    final org.cocos2dx.okio.Buffer sinkBuffer;
    boolean writerClosed;

    final class FrameSink implements org.cocos2dx.okio.Sink {
        boolean closed;
        long contentLength;
        int formatOpcode;
        boolean isFirstFrame;
        final org.cocos2dx.okhttp3.internal.ws.WebSocketWriter this$0;

        FrameSink(org.cocos2dx.okhttp3.internal.ws.WebSocketWriter r1) {
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
                org.cocos2dx.okhttp3.internal.ws.WebSocketWriter r1 = r7.this$0
                int r2 = r7.formatOpcode
                org.cocos2dx.okio.Buffer r0 = r1.buffer
                long r3 = r0.size()
                boolean r5 = r7.isFirstFrame
                r6 = 1
                r1.writeMessageFrame(r2, r3, r5, r6)
                r0 = 1
                r7.closed = r0
                org.cocos2dx.okhttp3.internal.ws.WebSocketWriter r0 = r7.this$0
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
                org.cocos2dx.okhttp3.internal.ws.WebSocketWriter r1 = r7.this$0
                int r2 = r7.formatOpcode
                org.cocos2dx.okio.Buffer r0 = r1.buffer
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
        public org.cocos2dx.okio.Timeout timeout() {
                r1 = this;
                org.cocos2dx.okhttp3.internal.ws.WebSocketWriter r0 = r1.this$0
                org.cocos2dx.okio.BufferedSink r0 = r0.sink
                org.cocos2dx.okio.Timeout r0 = r0.timeout()
                return r0
        }

        @Override
        public void write(org.cocos2dx.okio.Buffer r7, long r8) throws java.io.IOException {
                r6 = this;
                boolean r0 = r6.closed
                if (r0 != 0) goto L49
                org.cocos2dx.okhttp3.internal.ws.WebSocketWriter r0 = r6.this$0
                org.cocos2dx.okio.Buffer r0 = r0.buffer
                r0.write(r7, r8)
                boolean r7 = r6.isFirstFrame
                r8 = 0
                if (r7 == 0) goto L2b
                long r0 = r6.contentLength
                r2 = -1
                int r7 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r7 == 0) goto L2b
                org.cocos2dx.okhttp3.internal.ws.WebSocketWriter r7 = r6.this$0
                org.cocos2dx.okio.Buffer r7 = r7.buffer
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
                org.cocos2dx.okhttp3.internal.ws.WebSocketWriter r9 = r6.this$0
                org.cocos2dx.okio.Buffer r9 = r9.buffer
                long r2 = r9.completeSegmentByteCount()
                r0 = 0
                int r9 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
                if (r9 <= 0) goto L48
                if (r7 != 0) goto L48
                org.cocos2dx.okhttp3.internal.ws.WebSocketWriter r0 = r6.this$0
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

    WebSocketWriter(boolean r2, org.cocos2dx.okio.BufferedSink r3, java.util.Random r4) {
            r1 = this;
            r1.<init>()
            org.cocos2dx.okio.Buffer r0 = new org.cocos2dx.okio.Buffer
            r0.<init>()
            r1.buffer = r0
            org.cocos2dx.okhttp3.internal.ws.WebSocketWriter$FrameSink r0 = new org.cocos2dx.okhttp3.internal.ws.WebSocketWriter$FrameSink
            r0.<init>(r1)
            r1.frameSink = r0
            if (r3 == 0) goto L3d
            if (r4 == 0) goto L35
            r1.isClient = r2
            r1.sink = r3
            org.cocos2dx.okio.Buffer r3 = r3.buffer()
            r1.sinkBuffer = r3
            r1.random = r4
            r3 = 0
            if (r2 == 0) goto L28
            r4 = 4
            byte[] r4 = new byte[r4]
            goto L29
        L28:
            r4 = r3
        L29:
            r1.maskKey = r4
            if (r2 == 0) goto L32
            org.cocos2dx.okio.Buffer$UnsafeCursor r3 = new org.cocos2dx.okio.Buffer$UnsafeCursor
            r3.<init>()
        L32:
            r1.maskCursor = r3
            return
        L35:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r3 = "random == null"
            r2.<init>(r3)
            throw r2
        L3d:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r3 = "sink == null"
            r2.<init>(r3)
            throw r2
    }

    private void writeControlFrame(int r7, org.cocos2dx.okio.ByteString r8) throws java.io.IOException {
            r6 = this;
            boolean r0 = r6.writerClosed
            if (r0 != 0) goto L6d
            int r0 = r8.size()
            long r1 = (long) r0
            r3 = 125(0x7d, double:6.2E-322)
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 > 0) goto L65
            r7 = r7 | 128(0x80, float:1.8E-43)
            org.cocos2dx.okio.Buffer r1 = r6.sinkBuffer
            r1.writeByte(r7)
            boolean r7 = r6.isClient
            if (r7 == 0) goto L55
            r7 = r0 | 128(0x80, float:1.8E-43)
            org.cocos2dx.okio.Buffer r1 = r6.sinkBuffer
            r1.writeByte(r7)
            java.util.Random r7 = r6.random
            byte[] r1 = r6.maskKey
            r7.nextBytes(r1)
            org.cocos2dx.okio.Buffer r7 = r6.sinkBuffer
            byte[] r1 = r6.maskKey
            r7.write(r1)
            if (r0 <= 0) goto L5f
            org.cocos2dx.okio.Buffer r7 = r6.sinkBuffer
            long r0 = r7.size()
            org.cocos2dx.okio.Buffer r7 = r6.sinkBuffer
            r7.write(r8)
            org.cocos2dx.okio.Buffer r7 = r6.sinkBuffer
            org.cocos2dx.okio.Buffer$UnsafeCursor r8 = r6.maskCursor
            r7.readAndWriteUnsafe(r8)
            org.cocos2dx.okio.Buffer$UnsafeCursor r7 = r6.maskCursor
            r7.seek(r0)
            org.cocos2dx.okio.Buffer$UnsafeCursor r7 = r6.maskCursor
            byte[] r8 = r6.maskKey
            org.cocos2dx.okhttp3.internal.ws.WebSocketProtocol.toggleMask(r7, r8)
            org.cocos2dx.okio.Buffer$UnsafeCursor r7 = r6.maskCursor
            r7.close()
            goto L5f
        L55:
            org.cocos2dx.okio.Buffer r7 = r6.sinkBuffer
            r7.writeByte(r0)
            org.cocos2dx.okio.Buffer r7 = r6.sinkBuffer
            r7.write(r8)
        L5f:
            org.cocos2dx.okio.BufferedSink r7 = r6.sink
            r7.flush()
            return
        L65:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "Payload size must be less than or equal to 125"
            r7.<init>(r8)
            throw r7
        L6d:
            java.io.IOException r7 = new java.io.IOException
            java.lang.String r8 = "closed"
            r7.<init>(r8)
            throw r7
    }

    org.cocos2dx.okio.Sink newMessageSink(int r3, long r4) {
            r2 = this;
            boolean r0 = r2.activeWriter
            if (r0 != 0) goto L13
            r0 = 1
            r2.activeWriter = r0
            org.cocos2dx.okhttp3.internal.ws.WebSocketWriter$FrameSink r1 = r2.frameSink
            r1.formatOpcode = r3
            r1.contentLength = r4
            r1.isFirstFrame = r0
            r3 = 0
            r1.closed = r3
            return r1
        L13:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r4 = "Another message writer is active. Did you call close()?"
            r3.<init>(r4)
            throw r3
    }

    void writeClose(int r2, org.cocos2dx.okio.ByteString r3) throws java.io.IOException {
            r1 = this;
            org.cocos2dx.okio.ByteString r0 = org.cocos2dx.okio.ByteString.EMPTY
            if (r2 != 0) goto L6
            if (r3 == 0) goto L1c
        L6:
            if (r2 == 0) goto Lb
            org.cocos2dx.okhttp3.internal.ws.WebSocketProtocol.validateCloseCode(r2)
        Lb:
            org.cocos2dx.okio.Buffer r0 = new org.cocos2dx.okio.Buffer
            r0.<init>()
            r0.writeShort(r2)
            if (r3 == 0) goto L18
            r0.write(r3)
        L18:
            org.cocos2dx.okio.ByteString r0 = r0.readByteString()
        L1c:
            r2 = 8
            r3 = 1
            r1.writeControlFrame(r2, r0)     // Catch: java.lang.Throwable -> L25
            r1.writerClosed = r3
            return
        L25:
            r2 = move-exception
            r1.writerClosed = r3
            throw r2
    }

    void writeMessageFrame(int r2, long r3, boolean r5, boolean r6) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.writerClosed
            if (r0 != 0) goto L92
            r0 = 0
            if (r5 == 0) goto L8
            goto L9
        L8:
            r2 = 0
        L9:
            if (r6 == 0) goto Ld
            r2 = r2 | 128(0x80, float:1.8E-43)
        Ld:
            org.cocos2dx.okio.Buffer r5 = r1.sinkBuffer
            r5.writeByte(r2)
            boolean r2 = r1.isClient
            if (r2 == 0) goto L18
            r0 = 128(0x80, float:1.8E-43)
        L18:
            r5 = 125(0x7d, double:6.2E-322)
            int r2 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r2 > 0) goto L26
            int r2 = (int) r3
            r2 = r2 | r0
            org.cocos2dx.okio.Buffer r5 = r1.sinkBuffer
            r5.writeByte(r2)
            goto L47
        L26:
            r5 = 65535(0xffff, double:3.23786E-319)
            int r2 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r2 > 0) goto L3b
            r2 = r0 | 126(0x7e, float:1.77E-43)
            org.cocos2dx.okio.Buffer r5 = r1.sinkBuffer
            r5.writeByte(r2)
            org.cocos2dx.okio.Buffer r2 = r1.sinkBuffer
            int r5 = (int) r3
            r2.writeShort(r5)
            goto L47
        L3b:
            r2 = r0 | 127(0x7f, float:1.78E-43)
            org.cocos2dx.okio.Buffer r5 = r1.sinkBuffer
            r5.writeByte(r2)
            org.cocos2dx.okio.Buffer r2 = r1.sinkBuffer
            r2.writeLong(r3)
        L47:
            boolean r2 = r1.isClient
            if (r2 == 0) goto L85
            java.util.Random r2 = r1.random
            byte[] r5 = r1.maskKey
            r2.nextBytes(r5)
            org.cocos2dx.okio.Buffer r2 = r1.sinkBuffer
            byte[] r5 = r1.maskKey
            r2.write(r5)
            r5 = 0
            int r2 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r2 <= 0) goto L8c
            org.cocos2dx.okio.Buffer r2 = r1.sinkBuffer
            long r5 = r2.size()
            org.cocos2dx.okio.Buffer r2 = r1.sinkBuffer
            org.cocos2dx.okio.Buffer r0 = r1.buffer
            r2.write(r0, r3)
            org.cocos2dx.okio.Buffer r2 = r1.sinkBuffer
            org.cocos2dx.okio.Buffer$UnsafeCursor r3 = r1.maskCursor
            r2.readAndWriteUnsafe(r3)
            org.cocos2dx.okio.Buffer$UnsafeCursor r2 = r1.maskCursor
            r2.seek(r5)
            org.cocos2dx.okio.Buffer$UnsafeCursor r2 = r1.maskCursor
            byte[] r3 = r1.maskKey
            org.cocos2dx.okhttp3.internal.ws.WebSocketProtocol.toggleMask(r2, r3)
            org.cocos2dx.okio.Buffer$UnsafeCursor r2 = r1.maskCursor
            r2.close()
            goto L8c
        L85:
            org.cocos2dx.okio.Buffer r2 = r1.sinkBuffer
            org.cocos2dx.okio.Buffer r5 = r1.buffer
            r2.write(r5, r3)
        L8c:
            org.cocos2dx.okio.BufferedSink r2 = r1.sink
            r2.emit()
            return
        L92:
            java.io.IOException r2 = new java.io.IOException
            java.lang.String r3 = "closed"
            r2.<init>(r3)
            throw r2
    }

    void writePing(org.cocos2dx.okio.ByteString r2) throws java.io.IOException {
            r1 = this;
            r0 = 9
            r1.writeControlFrame(r0, r2)
            return
    }

    void writePong(org.cocos2dx.okio.ByteString r2) throws java.io.IOException {
            r1 = this;
            r0 = 10
            r1.writeControlFrame(r0, r2)
            return
    }
}
