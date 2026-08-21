package org.cocos2dx.okhttp3.internal.http2;

import java.io.IOException;
import org.cocos2dx.okhttp3.internal.Util;
import org.cocos2dx.okio.ByteString;

public final class Http2 {
    static final String[] BINARY = null;
    static final ByteString CONNECTION_PREFACE = null;
    static final String[] FLAGS = null;
    static final byte FLAG_ACK = 1;
    static final byte FLAG_COMPRESSED = 32;
    static final byte FLAG_END_HEADERS = 4;
    static final byte FLAG_END_PUSH_PROMISE = 4;
    static final byte FLAG_END_STREAM = 1;
    static final byte FLAG_NONE = 0;
    static final byte FLAG_PADDED = 8;
    static final byte FLAG_PRIORITY = 32;
    private static final String[] FRAME_NAMES = null;
    static final int INITIAL_MAX_FRAME_SIZE = 16384;
    static final byte TYPE_CONTINUATION = 9;
    static final byte TYPE_DATA = 0;
    static final byte TYPE_GOAWAY = 7;
    static final byte TYPE_HEADERS = 1;
    static final byte TYPE_PING = 6;
    static final byte TYPE_PRIORITY = 2;
    static final byte TYPE_PUSH_PROMISE = 5;
    static final byte TYPE_RST_STREAM = 3;
    static final byte TYPE_SETTINGS = 4;
    static final byte TYPE_WINDOW_UPDATE = 8;

    static {
        CONNECTION_PREFACE = ByteString.encodeUtf8("PRI * HTTP/2.0\r\n\r\nSM\r\n\r\n");
        FRAME_NAMES = new String[]{"DATA", "HEADERS", "PRIORITY", "RST_STREAM", "SETTINGS", "PUSH_PROMISE", "PING", "GOAWAY", "WINDOW_UPDATE", "CONTINUATION"};
        FLAGS = new String[64];
        BINARY = new String[256];
        int r0 = 0;
        int r1 = 0;
    L3:
        String[] r2 = BINARY;
        if (r1 >= r2.length) goto L6;
        r2[r1] = Util.format("%8s", new Object[]{Integer.toBinaryString(r1)}).replace(' ', '0');
        r1 = r1 + 1;
        goto L3
    L6:
        String[] r12 = FLAGS;
        r12[0] = "";
        r12[1] = "END_STREAM";
        int[] r22 = {1};
        r12[8] = "PADDED";
        int r13 = r22.length;
        int r5 = 0;
    L8:
        if (r5 >= r13) goto L10;
        int r7 = r22[r5];
        FLAGS[r7 | 8] = FLAGS[r7] + "|PADDED";
        r5 = r5 + 1;
        goto L8
    L10:
        String[] r14 = FLAGS;
        r14[4] = "END_HEADERS";
        r14[32] = "PRIORITY";
        r14[36] = "END_HEADERS|PRIORITY";
        int[] r15 = {4, 32, 36};
        int r4 = r15.length;
        int r52 = 0;
    L11:
        if (r52 >= r4) goto L16;
        int r72 = r15[r52];
        int r8 = r22.length;
        int r9 = 0;
    L13:
        if (r9 >= r8) goto L15;
        int r10 = r22[r9];
        int r122 = r10 | r72;
        FLAGS[r122] = FLAGS[r10] + '|' + FLAGS[r72];
        FLAGS[r122 | 8] = FLAGS[r10] + '|' + FLAGS[r72] + "|PADDED";
        r9 = r9 + 1;
        goto L13
    L15:
        r52 = r52 + 1;
    L16:
        String[] r16 = FLAGS;
        if (r0 >= r16.length) goto L22;
        if (r16[r0] != null) goto L21;
        r16[r0] = BINARY[r0];
    L21:
        r0 = r0 + 1;
        goto L16
    }

    private Http2() {
    }

    static IllegalArgumentException illegalArgument(String r1, Object... r2) {
        throw new IllegalArgumentException(Util.format(r1, r2));
    }

    static IOException ioException(String r1, Object... r2) throws IOException {
        throw new IOException(Util.format(r1, r2));
    }

    static String frameLog(boolean r4, int r5, int r6, byte r7, byte r8) {
        String[] r0 = FRAME_NAMES;
        if (r7 >= r0.length) goto L5;
        String r02 = r0[r7];
    L6:
        String r72 = formatFlags(r7, r8);
        Object[] r82 = new Object[5];
        if (r4 == false) goto L9;
        String r42 = "<<";
    L10:
        r82[0] = r42;
        r82[1] = Integer.valueOf(r5);
        r82[2] = Integer.valueOf(r6);
        r82[3] = r02;
        r82[4] = r72;
        return Util.format("%s 0x%08x %5d %-13s %s", r82);
    L9:
        r42 = ">>";
        goto L10
    L5:
        r02 = Util.format("0x%02x", new Object[]{Byte.valueOf(r7)});
        goto L6
    }

    static String formatFlags(byte r2, byte r3) {
        if (r3 != 0) goto L6;
        return "";
    L6:
        if (r2 == 2) goto L39;
        if (r2 == 3) goto L39;
        if (r2 == 4) goto L34;
        if (r2 == 6) goto L34;
        if (r2 == 7) goto L39;
        if (r2 == 8) goto L39;
        String[] r0 = FLAGS;
        if (r3 >= r0.length) goto L20;
        String r02 = r0[r3];
    L22:
        if (r2 == 5) goto L24;
    L27:
        if (r2 == 0) goto L29;
    L32:
        return r02;
    L29:
        if ((r3 & 32) == 0) goto L32;
        return r02.replace("PRIORITY", "COMPRESSED");
    L24:
        if ((r3 & 4) == 0) goto L27;
        return r02.replace("HEADERS", "PUSH_PROMISE");
    L20:
        r02 = BINARY[r3];
    L34:
        if (r3 != 1) goto L37;
        return "ACK";
    L37:
        return BINARY[r3];
    L39:
        return BINARY[r3];
    }
}
