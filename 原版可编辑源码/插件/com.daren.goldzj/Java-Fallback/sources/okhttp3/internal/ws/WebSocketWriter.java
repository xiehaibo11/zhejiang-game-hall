package okhttp3.internal.ws;

import java.io.IOException;
import java.util.Random;
import okio.Buffer;
import okio.BufferedSink;
import okio.ByteString;
import okio.Sink;
import okio.Timeout;

final class WebSocketWriter {
    boolean activeWriter;
    final Buffer buffer;
    final FrameSink frameSink;
    final boolean isClient;
    private final Buffer.UnsafeCursor maskCursor;
    private final byte[] maskKey;
    final Random random;
    final BufferedSink sink;
    final Buffer sinkBuffer;
    boolean writerClosed;

    final class FrameSink implements Sink {
        boolean closed;
        long contentLength;
        int formatOpcode;
        boolean isFirstFrame;
        final WebSocketWriter this$0;

        FrameSink(WebSocketWriter r1) {
            this.this$0 = r1;
        }

        public void write(Buffer r7, long r8) throws IOException {
            if (this.closed == true) goto L18;
            this.this$0.buffer.write(r7, r8);
            if (this.isFirstFrame == true) goto L7;
        L11:
            boolean r72 = false;
        L12:
            long r2 = this.this$0.buffer.completeSegmentByteCount();
            if (r2 <= 0) goto L19;
            if (r72 == true) goto L20;
            this.this$0.writeMessageFrame(this.formatOpcode, r2, this.isFirstFrame, false);
            this.isFirstFrame = false;
            return;
        L20:
            return;
        L19:
            return;
        L7:
            if (this.contentLength == (-1)) goto L11;
            if (this.this$0.buffer.size() <= (this.contentLength - 8192)) goto L11;
            r72 = true;
            goto L12
        L18:
            throw new IOException("closed");
        }

        public void flush() throws IOException {
            if (this.closed == true) goto L7;
            WebSocketWriter r1 = this.this$0;
            r1.writeMessageFrame(this.formatOpcode, r1.buffer.size(), this.isFirstFrame, false);
            this.isFirstFrame = false;
            return;
        L7:
            throw new IOException("closed");
        }

        public Timeout timeout() {
            return this.this$0.sink.timeout();
        }

        public void close() throws IOException {
            if (this.closed == true) goto L7;
            WebSocketWriter r1 = this.this$0;
            r1.writeMessageFrame(this.formatOpcode, r1.buffer.size(), this.isFirstFrame, true);
            this.closed = true;
            this.this$0.activeWriter = false;
            return;
        L7:
            throw new IOException("closed");
        }
    }

    WebSocketWriter(boolean r2, BufferedSink r3, Random r4) {
        this.buffer = new Buffer();
        this.frameSink = new FrameSink(this);
        if (r3 == null) goto L17;
        if (r4 == null) goto L15;
        this.isClient = r2;
        this.sink = r3;
        this.sinkBuffer = r3.buffer();
        this.random = r4;
        Buffer.UnsafeCursor r32 = null;
        if (r2 == false) goto L8;
        byte[] r42 = new byte[4];
    L9:
        this.maskKey = r42;
        if (r2 == false) goto L12;
        r32 = new Buffer.UnsafeCursor();
    L12:
        this.maskCursor = r32;
        return;
    L8:
        r42 = null;
        goto L9
    L15:
        throw new NullPointerException("random == null");
    L17:
        throw new NullPointerException("sink == null");
    }

    void writePing(ByteString r2) throws IOException {
        writeControlFrame(9, r2);
    }

    void writePong(ByteString r2) throws IOException {
        writeControlFrame(10, r2);
    }

    void writeClose(int r2, ByteString r3) throws IOException {
        ByteString r0 = ByteString.EMPTY;
        if (r2 != 0) goto L5;
        if (r3 != null) goto L5;
    L18:
        writeControlFrame(8, r0);     // Catch: Throwable -> L15
        this.writerClosed = true;
        return;
    L15:
        th = move-exception;
        this.writerClosed = true;
        throw th;
    L5:
        if (r2 == 0) goto L7;
        WebSocketProtocol.validateCloseCode(r2);
    L7:
        Buffer r02 = new Buffer();
        r02.writeShort(r2);
        if (r3 == null) goto L10;
        r02.write(r3);
    L10:
        r0 = r02.readByteString();
        goto L18
    }

    private void writeControlFrame(int r7, ByteString r8) throws IOException {
        if (this.writerClosed == true) goto L17;
        int r0 = r8.size();
        if (r0 > 125) goto L15;
        this.sinkBuffer.writeByte(r7 | 128);
        if (this.isClient == false) goto L11;
        this.sinkBuffer.writeByte(r0 | 128);
        this.random.nextBytes(this.maskKey);
        this.sinkBuffer.write(this.maskKey);
        if (r0 <= 0) goto L12;
        long r02 = this.sinkBuffer.size();
        this.sinkBuffer.write(r8);
        this.sinkBuffer.readAndWriteUnsafe(this.maskCursor);
        this.maskCursor.seek(r02);
        WebSocketProtocol.toggleMask(this.maskCursor, this.maskKey);
        this.maskCursor.close();
    L12:
        this.sink.flush();
        return;
    L11:
        this.sinkBuffer.writeByte(r0);
        this.sinkBuffer.write(r8);
        goto L12
    L15:
        throw new IllegalArgumentException("Payload size must be less than or equal to 125");
    L17:
        throw new IOException("closed");
    }

    Sink newMessageSink(int r3, long r4) {
        if (this.activeWriter == true) goto L7;
        this.activeWriter = true;
        FrameSink r1 = this.frameSink;
        r1.formatOpcode = r3;
        r1.contentLength = r4;
        r1.isFirstFrame = true;
        r1.closed = false;
        return r1;
    L7:
        throw new IllegalStateException("Another message writer is active. Did you call close()?");
    }

    void writeMessageFrame(int r2, long r3, boolean r5, boolean r6) throws IOException {
        if (this.writerClosed == true) goto L29;
        int r0 = 0;
        if (r5 == true) goto L8;
        r2 = 0;
    L8:
        if (r6 == false) goto L10;
        r2 = r2 | 128;
    L10:
        this.sinkBuffer.writeByte(r2);
        if (this.isClient == false) goto L14;
        r0 = 128;
    L14:
        if (r3 > 125) goto L17;
        Buffer r52 = this.sinkBuffer;
        r52.writeByte(((int) r3) | r0);
    L21:
        if (this.isClient == false) goto L25;
        this.random.nextBytes(this.maskKey);
        this.sinkBuffer.write(this.maskKey);
        if (r3 <= 0) goto L26;
        long r53 = this.sinkBuffer.size();
        this.sinkBuffer.write(this.buffer, r3);
        this.sinkBuffer.readAndWriteUnsafe(this.maskCursor);
        this.maskCursor.seek(r53);
        WebSocketProtocol.toggleMask(this.maskCursor, this.maskKey);
        this.maskCursor.close();
    L26:
        this.sink.emit();
        return;
    L25:
        this.sinkBuffer.write(this.buffer, r3);
        goto L26
    L17:
        if (r3 > 65535) goto L19;
        Buffer r54 = this.sinkBuffer;
        r54.writeByte(r0 | 126);
        this.sinkBuffer.writeShort((int) r3);
        goto L21
    L19:
        Buffer r55 = this.sinkBuffer;
        r55.writeByte(r0 | 127);
        this.sinkBuffer.writeLong(r3);
        goto L21
    L29:
        throw new IOException("closed");
    }
}
