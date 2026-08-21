package org.cocos2dx.okhttp3.internal.http2;

public final class Http2 {
    static final java.lang.String[] BINARY = null;
    static final org.cocos2dx.okio.ByteString CONNECTION_PREFACE = null;
    static final java.lang.String[] FLAGS = null;
    static final byte FLAG_ACK = 1;
    static final byte FLAG_COMPRESSED = 32;
    static final byte FLAG_END_HEADERS = 4;
    static final byte FLAG_END_PUSH_PROMISE = 4;
    static final byte FLAG_END_STREAM = 1;
    static final byte FLAG_NONE = 0;
    static final byte FLAG_PADDED = 8;
    static final byte FLAG_PRIORITY = 32;
    private static final java.lang.String[] FRAME_NAMES = null;
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
            java.lang.String r0 = "PRI * HTTP/2.0\r\n\r\nSM\r\n\r\n"
            org.cocos2dx.okio.ByteString r0 = org.cocos2dx.okio.ByteString.encodeUtf8(r0)
            org.cocos2dx.okhttp3.internal.http2.Http2.CONNECTION_PREFACE = r0
            java.lang.String r1 = "DATA"
            java.lang.String r2 = "HEADERS"
            java.lang.String r3 = "PRIORITY"
            java.lang.String r4 = "RST_STREAM"
            java.lang.String r5 = "SETTINGS"
            java.lang.String r6 = "PUSH_PROMISE"
            java.lang.String r7 = "PING"
            java.lang.String r8 = "GOAWAY"
            java.lang.String r9 = "WINDOW_UPDATE"
            java.lang.String r10 = "CONTINUATION"
            java.lang.String[] r0 = new java.lang.String[]{r1, r2, r3, r4, r5, r6, r7, r8, r9, r10}
            org.cocos2dx.okhttp3.internal.http2.Http2.FRAME_NAMES = r0
            r0 = 64
            java.lang.String[] r0 = new java.lang.String[r0]
            org.cocos2dx.okhttp3.internal.http2.Http2.FLAGS = r0
            r0 = 256(0x100, float:3.59E-43)
            java.lang.String[] r0 = new java.lang.String[r0]
            org.cocos2dx.okhttp3.internal.http2.Http2.BINARY = r0
            r0 = 0
            r1 = 0
        L30:
            java.lang.String[] r2 = org.cocos2dx.okhttp3.internal.http2.Http2.BINARY
            int r3 = r2.length
            r4 = 32
            r5 = 1
            if (r1 >= r3) goto L51
            java.lang.Object[] r3 = new java.lang.Object[r5]
            java.lang.String r5 = java.lang.Integer.toBinaryString(r1)
            r3[r0] = r5
            java.lang.String r5 = "%8s"
            java.lang.String r3 = org.cocos2dx.okhttp3.internal.Util.format(r5, r3)
            r5 = 48
            java.lang.String r3 = r3.replace(r4, r5)
            r2[r1] = r3
            int r1 = r1 + 1
            goto L30
        L51:
            java.lang.String[] r1 = org.cocos2dx.okhttp3.internal.http2.Http2.FLAGS
            java.lang.String r2 = ""
            r1[r0] = r2
            java.lang.String r2 = "END_STREAM"
            r1[r5] = r2
            int[] r2 = new int[r5]
            r2[r0] = r5
            r3 = 8
            java.lang.String r5 = "PADDED"
            r1[r3] = r5
            int r1 = r2.length
            r5 = 0
        L67:
            java.lang.String r6 = "|PADDED"
            if (r5 >= r1) goto L89
            r7 = r2[r5]
            java.lang.String[] r8 = org.cocos2dx.okhttp3.internal.http2.Http2.FLAGS
            r9 = r7 | 8
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String[] r11 = org.cocos2dx.okhttp3.internal.http2.Http2.FLAGS
            r7 = r11[r7]
            r10.append(r7)
            r10.append(r6)
            java.lang.String r6 = r10.toString()
            r8[r9] = r6
            int r5 = r5 + 1
            goto L67
        L89:
            java.lang.String[] r1 = org.cocos2dx.okhttp3.internal.http2.Http2.FLAGS
            r5 = 4
            java.lang.String r7 = "END_HEADERS"
            r1[r5] = r7
            java.lang.String r5 = "PRIORITY"
            r1[r4] = r5
            r4 = 36
            java.lang.String r5 = "END_HEADERS|PRIORITY"
            r1[r4] = r5
            r1 = 3
            int[] r1 = new int[r1]
            r1 = {x010a: FILL_ARRAY_DATA , data: [4, 32, 36} // fill-array
            int r4 = r1.length
            r5 = 0
        La2:
            if (r5 >= r4) goto Lf6
            r7 = r1[r5]
            int r8 = r2.length
            r9 = 0
        La8:
            if (r9 >= r8) goto Lf3
            r10 = r2[r9]
            java.lang.String[] r11 = org.cocos2dx.okhttp3.internal.http2.Http2.FLAGS
            r12 = r10 | r7
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            java.lang.String[] r14 = org.cocos2dx.okhttp3.internal.http2.Http2.FLAGS
            r14 = r14[r10]
            r13.append(r14)
            r14 = 124(0x7c, float:1.74E-43)
            r13.append(r14)
            java.lang.String[] r15 = org.cocos2dx.okhttp3.internal.http2.Http2.FLAGS
            r15 = r15[r7]
            r13.append(r15)
            java.lang.String r13 = r13.toString()
            r11[r12] = r13
            java.lang.String[] r11 = org.cocos2dx.okhttp3.internal.http2.Http2.FLAGS
            r12 = r12 | r3
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            java.lang.String[] r15 = org.cocos2dx.okhttp3.internal.http2.Http2.FLAGS
            r10 = r15[r10]
            r13.append(r10)
            r13.append(r14)
            java.lang.String[] r10 = org.cocos2dx.okhttp3.internal.http2.Http2.FLAGS
            r10 = r10[r7]
            r13.append(r10)
            r13.append(r6)
            java.lang.String r10 = r13.toString()
            r11[r12] = r10
            int r9 = r9 + 1
            goto La8
        Lf3:
            int r5 = r5 + 1
            goto La2
        Lf6:
            java.lang.String[] r1 = org.cocos2dx.okhttp3.internal.http2.Http2.FLAGS
            int r2 = r1.length
            if (r0 >= r2) goto L108
            r2 = r1[r0]
            if (r2 != 0) goto L105
            java.lang.String[] r2 = org.cocos2dx.okhttp3.internal.http2.Http2.BINARY
            r2 = r2[r0]
            r1[r0] = r2
        L105:
            int r0 = r0 + 1
            goto Lf6
        L108:
            return
    }

    private Http2() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String formatFlags(byte r2, byte r3) {
            if (r3 != 0) goto L5
            java.lang.String r2 = ""
            return r2
        L5:
            r0 = 2
            if (r2 == r0) goto L4f
            r0 = 3
            if (r2 == r0) goto L4f
            r0 = 4
            if (r2 == r0) goto L44
            r0 = 6
            if (r2 == r0) goto L44
            r0 = 7
            if (r2 == r0) goto L4f
            r0 = 8
            if (r2 == r0) goto L4f
            java.lang.String[] r0 = org.cocos2dx.okhttp3.internal.http2.Http2.FLAGS
            int r1 = r0.length
            if (r3 >= r1) goto L20
            r0 = r0[r3]
            goto L24
        L20:
            java.lang.String[] r0 = org.cocos2dx.okhttp3.internal.http2.Http2.BINARY
            r0 = r0[r3]
        L24:
            r1 = 5
            if (r2 != r1) goto L34
            r1 = r3 & 4
            if (r1 == 0) goto L34
            java.lang.String r2 = "HEADERS"
            java.lang.String r3 = "PUSH_PROMISE"
            java.lang.String r2 = r0.replace(r2, r3)
            return r2
        L34:
            if (r2 != 0) goto L43
            r2 = r3 & 32
            if (r2 == 0) goto L43
            java.lang.String r2 = "PRIORITY"
            java.lang.String r3 = "COMPRESSED"
            java.lang.String r2 = r0.replace(r2, r3)
            return r2
        L43:
            return r0
        L44:
            r2 = 1
            if (r3 != r2) goto L4a
            java.lang.String r2 = "ACK"
            goto L4e
        L4a:
            java.lang.String[] r2 = org.cocos2dx.okhttp3.internal.http2.Http2.BINARY
            r2 = r2[r3]
        L4e:
            return r2
        L4f:
            java.lang.String[] r2 = org.cocos2dx.okhttp3.internal.http2.Http2.BINARY
            r2 = r2[r3]
            return r2
    }

    static java.lang.String frameLog(boolean r4, int r5, int r6, byte r7, byte r8) {
            java.lang.String[] r0 = org.cocos2dx.okhttp3.internal.http2.Http2.FRAME_NAMES
            int r1 = r0.length
            r2 = 0
            r3 = 1
            if (r7 >= r1) goto La
            r0 = r0[r7]
            goto L18
        La:
            java.lang.Object[] r0 = new java.lang.Object[r3]
            java.lang.Byte r1 = java.lang.Byte.valueOf(r7)
            r0[r2] = r1
            java.lang.String r1 = "0x%02x"
            java.lang.String r0 = org.cocos2dx.okhttp3.internal.Util.format(r1, r0)
        L18:
            java.lang.String r7 = formatFlags(r7, r8)
            r8 = 5
            java.lang.Object[] r8 = new java.lang.Object[r8]
            if (r4 == 0) goto L24
            java.lang.String r4 = "<<"
            goto L26
        L24:
            java.lang.String r4 = ">>"
        L26:
            r8[r2] = r4
            java.lang.Integer r4 = java.lang.Integer.valueOf(r5)
            r8[r3] = r4
            r4 = 2
            java.lang.Integer r5 = java.lang.Integer.valueOf(r6)
            r8[r4] = r5
            r4 = 3
            r8[r4] = r0
            r4 = 4
            r8[r4] = r7
            java.lang.String r4 = "%s 0x%08x %5d %-13s %s"
            java.lang.String r4 = org.cocos2dx.okhttp3.internal.Util.format(r4, r8)
            return r4
    }

    static java.lang.IllegalArgumentException illegalArgument(java.lang.String r1, java.lang.Object... r2) {
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = org.cocos2dx.okhttp3.internal.Util.format(r1, r2)
            r0.<init>(r1)
            throw r0
    }

    static java.io.IOException ioException(java.lang.String r1, java.lang.Object... r2) throws java.io.IOException {
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = org.cocos2dx.okhttp3.internal.Util.format(r1, r2)
            r0.<init>(r1)
            throw r0
    }
}
