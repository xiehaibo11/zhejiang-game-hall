package org.cocos2dx.okhttp3.internal.ws;

import java.io.IOException;
import java.net.ProtocolException;
import java.util.concurrent.TimeUnit;
import org.cocos2dx.okio.Buffer;
import org.cocos2dx.okio.BufferedSource;
import org.cocos2dx.okio.ByteString;

final class WebSocketReader {
    boolean closed;
    private final Buffer controlFrameBuffer;
    final FrameCallback frameCallback;
    long frameLength;
    final boolean isClient;
    boolean isControlFrame;
    boolean isFinalFrame;
    private final Buffer.UnsafeCursor maskCursor;
    private final byte[] maskKey;
    private final Buffer messageFrameBuffer;
    int opcode;
    final BufferedSource source;

    public interface FrameCallback {
        void onReadClose(int r1, String r2);

        void onReadMessage(String r1) throws IOException;

        void onReadMessage(ByteString r1) throws IOException;

        void onReadPing(ByteString r1);

        void onReadPong(ByteString r1);
    }

    WebSocketReader(boolean r2, BufferedSource r3, FrameCallback r4) {
        this.controlFrameBuffer = new Buffer();
        this.messageFrameBuffer = new Buffer();
        if (r3 == null) goto L18;
        if (r4 == null) goto L16;
        this.isClient = r2;
        this.source = r3;
        this.frameCallback = r4;
        Buffer.UnsafeCursor r32 = null;
        if (r2 == false) goto L8;
        byte[] r42 = null;
    L9:
        this.maskKey = r42;
        if (r2 == true) goto L13;
        r32 = new Buffer.UnsafeCursor();
    L13:
        this.maskCursor = r32;
        return;
    L8:
        r42 = new byte[4];
        goto L9
    L16:
        throw new NullPointerException("frameCallback == null");
    L18:
        throw new NullPointerException("source == null");
    }

    void processNextFrame() throws IOException {
        readHeader();
        if (this.isControlFrame == false) goto L5;
        readControlFrame();
        return;
    L5:
        readMessageFrame();
    }

    private void readHeader() throws IOException {
        if (this.closed == true) goto L74;
        long r0 = this.source.timeout().timeoutNanos();
        this.source.timeout().clearTimeout();
        int r2 = this.source.readByte() & 255;
        this.source.timeout().timeout(r0, TimeUnit.NANOSECONDS);
        this.opcode = r2 & 15;
        boolean r1 = true;
        if ((r2 & 128) == 0) goto L9;
        boolean r02 = true;
    L10:
        this.isFinalFrame = r02;
        if ((r2 & 8) == 0) goto L13;
        boolean r03 = true;
    L14:
        this.isControlFrame = r03;
        if (this.isControlFrame == false) goto L22;
        if (this.isFinalFrame == true) goto L22;
        throw new ProtocolException("Control frames must be final.");
    L22:
        if ((r2 & 64) == 0) goto L24;
        boolean r04 = true;
    L26:
        if ((r2 & 32) == 0) goto L28;
        boolean r4 = true;
    L30:
        if ((r2 & 16) == 0) goto L32;
        boolean r22 = true;
    L33:
        if (r04 == true) goto L69;
        if (r4 == true) goto L69;
        if (r22 == true) goto L69;
        if (((this.source.readByte() & 255) & 128) != 0) goto L40;
        r1 = false;
    L40:
        boolean r23 = this.isClient;
        if (r1 == r23) goto L43;
        this.frameLength = r0 & 127;
        long r24 = this.frameLength;
        if (r24 != 126) goto L52;
        this.frameLength = ((long) this.source.readShort()) & 65535;
    L59:
        if (this.isControlFrame == true) goto L61;
    L65:
        if (r1 == false) goto L77;
        this.source.readFully(this.maskKey);
        return;
    L77:
        return;
    L61:
        if (this.frameLength <= 125) goto L65;
        throw new ProtocolException("Control frame must be less than 125B.");
    L52:
        if (r24 != 127) goto L59;
        this.frameLength = this.source.readLong();
        if (this.frameLength >= 0) goto L59;
        throw new ProtocolException("Frame length 0x" + Long.toHexString(this.frameLength) + " > 0x7FFFFFFFFFFFFFFF");
    L43:
        if (r23 == false) goto L45;
        String r12 = "Server-sent frames must not be masked.";
    L47:
        throw new ProtocolException(r12);
    L45:
        r12 = "Client-sent frames must be masked.";
    L69:
        throw new ProtocolException("Reserved flags are unsupported.");
    L32:
        r22 = false;
        goto L33
    L28:
        r4 = false;
        goto L30
    L24:
        r04 = false;
        goto L26
    L13:
        r03 = false;
        goto L14
    L9:
        r02 = false;
    L70:
        th = move-exception;
        this.source.timeout().timeout(r0, TimeUnit.NANOSECONDS);
        throw th;
    L74:
        throw new IOException("closed");
    }

    private void readControlFrame() throws IOException {
        long r0 = this.frameLength;
        if (r0 <= 0) goto L8;
        this.source.readFully(this.controlFrameBuffer, r0);
        if (this.isClient == true) goto L8;
        this.controlFrameBuffer.readAndWriteUnsafe(this.maskCursor);
        this.maskCursor.seek(0);
        WebSocketProtocol.toggleMask(this.maskCursor, this.maskKey);
        this.maskCursor.close();
    L8:
        switch(this.opcode) {
            case 8: goto L13;
            case 9: goto L12;
            case 10: goto L11;
            default: goto L10;
        };
    L11:
        this.frameCallback.onReadPong(this.controlFrameBuffer.readByteString());
        return;
    L12:
        this.frameCallback.onReadPing(this.controlFrameBuffer.readByteString());
        return;
    L13:
        short r02 = 1005;
        long r4 = this.controlFrameBuffer.size();
        if (r4 == 1) goto L26;
        if (r4 == 0) goto L22;
        r02 = this.controlFrameBuffer.readShort();
        String r1 = this.controlFrameBuffer.readUtf8();
        String r2 = WebSocketProtocol.closeCodeExceptionMessage(r02);
        if (r2 != null) goto L21;
    L23:
        this.frameCallback.onReadClose(r02, r1);
        this.closed = true;
        return;
    L21:
        throw new ProtocolException(r2);
    L22:
        r1 = "";
        goto L23
    L26:
        throw new ProtocolException("Malformed close payload length of 1.");
    L10:
        throw new ProtocolException("Unknown control opcode: " + Integer.toHexString(this.opcode));
    }

    private void readMessageFrame() throws IOException {
        int r0 = this.opcode;
        if (r0 != 1) goto L5;
    L9:
        readMessage();
        if (r0 != 1) goto L12;
        this.frameCallback.onReadMessage(this.messageFrameBuffer.readUtf8());
        return;
    L12:
        this.frameCallback.onReadMessage(this.messageFrameBuffer.readByteString());
        return;
    L5:
        if (r0 == 2) goto L9;
        throw new ProtocolException("Unknown opcode: " + Integer.toHexString(r0));
    }

    private void readUntilNonControlFrame() throws IOException {
    L3:
        if (this.closed == true) goto L8;
        readHeader();
        if (this.isControlFrame == false) goto L11;
        readControlFrame();
        goto L3
    L11:
        return;
    }

    private void readMessage() throws IOException {
    L3:
        if (this.closed == true) goto L18;
        long r0 = this.frameLength;
        if (r0 <= 0) goto L10;
        this.source.readFully(this.messageFrameBuffer, r0);
        if (this.isClient == true) goto L10;
        this.messageFrameBuffer.readAndWriteUnsafe(this.maskCursor);
        this.maskCursor.seek(this.messageFrameBuffer.size() - this.frameLength);
        WebSocketProtocol.toggleMask(this.maskCursor, this.maskKey);
        this.maskCursor.close();
    L10:
        if (this.isFinalFrame == true) goto L11;
        readUntilNonControlFrame();
        if (this.opcode == 0) goto L3;
        throw new ProtocolException("Expected continuation opcode. Got: " + Integer.toHexString(this.opcode));
    L11:
        return;
    L18:
        throw new IOException("closed");
    }
}
