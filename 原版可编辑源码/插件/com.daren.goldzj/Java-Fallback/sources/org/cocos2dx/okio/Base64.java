package org.cocos2dx.okio;

final class Base64 {
    private static final byte[] MAP = null;
    private static final byte[] URL_MAP = null;

    private Base64() {
    }

    public static byte[] decode(String r14) {
        int r0 = r14.length();
    L4:
        if (r0 <= 0) goto L13;
        char r5 = r14.charAt(r0 - 1);
        if (r5 == '=') goto L12;
        if (r5 == '\n') goto L12;
        if (r5 == '\r') goto L12;
        if (r5 == ' ') goto L12;
        if (r5 != '\t') goto L13;
    L12:
        r0 = r0 - 1;
    L13:
        byte[] r52 = new byte[(int) ((((long) r0) * 6) / 8)];
        int r7 = 0;
        int r8 = 0;
        int r9 = 0;
        int r10 = 0;
    L15:
        if (r7 >= r0) goto L53;
        char r12 = r14.charAt(r7);
        if (r12 < 'A') goto L22;
        if (r12 > 'Z') goto L22;
        int r122 = r12 - 'A';
    L49:
        r9 = (r9 << 6) | ((byte) r122);
        r8 = r8 + 1;
        if ((r8 % 4) != 0) goto L52;
        int r11 = r10 + 1;
        r52[r10] = (byte) (r9 >> 16);
        int r102 = r11 + 1;
        r52[r11] = (byte) (r9 >> 8);
        r52[r102] = (byte) r9;
        r10 = r102 + 1;
    L52:
        r7 = r7 + 1;
    L22:
        if (r12 < 'a') goto L27;
        if (r12 > 'z') goto L27;
        r122 = r12 - 'G';
    L27:
        if (r12 < '0') goto L32;
        if (r12 > '9') goto L32;
        r122 = r12 + 4;
    L32:
        if (r12 != '+') goto L34;
    L48:
        r122 = 62;
        goto L49
    L34:
        if (r12 == '-') goto L48;
        if (r12 != '/') goto L39;
    L47:
        r122 = 63;
        goto L49
    L39:
        if (r12 == '_') goto L47;
        if (r12 == '\n') goto L52;
        if (r12 == '\r') goto L52;
        if (r12 == ' ') goto L52;
        if (r12 == '\t') goto L52;
        return null;
    L53:
        int r82 = r8 % 4;
        if (r82 != 1) goto L57;
        return null;
    L57:
        if (r82 != 2) goto L60;
        r52[r10] = (byte) ((r9 << 12) >> 16);
        r10 = r10 + 1;
    L63:
        if (r10 != r52.length) goto L65;
        return r52;
    L65:
        byte[] r142 = new byte[r10];
        System.arraycopy(r52, 0, r142, 0, r10);
        return r142;
    L60:
        if (r82 != 3) goto L63;
        int r143 = r9 << 6;
        int r02 = r10 + 1;
        r52[r10] = (byte) (r143 >> 16);
        r10 = r02 + 1;
        r52[r02] = (byte) (r143 >> 8);
        goto L63
    }

    static {
        MAP = new byte[]{65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 43, 47};
        URL_MAP = new byte[]{65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 45, 95};
    }

    public static String encode(byte[] r1) {
        return encode(r1, MAP);
    }

    public static String encodeUrl(byte[] r1) {
        return encode(r1, URL_MAP);
    }

    private static String encode(byte[] r9, byte[] r10) {
        byte[] r0 = new byte[((r9.length + 2) / 3) * 4];
        int r2 = r9.length - (r9.length % 3);
        int r3 = 0;
        int r4 = 0;
    L3:
        if (r3 >= r2) goto L5;
        int r5 = r4 + 1;
        r0[r4] = r10[(r9[r3] & 255) >> 2];
        int r42 = r5 + 1;
        int r7 = r3 + 1;
        r0[r5] = r10[((r9[r3] & 3) << 4) | ((r9[r7] & 255) >> 4)];
        int r52 = r42 + 1;
        int r6 = (r9[r7] & 15) << 2;
        int r72 = r3 + 2;
        r0[r42] = r10[r6 | ((r9[r72] & 255) >> 6)];
        r4 = r52 + 1;
        r0[r52] = r10[r9[r72] & 63];
        r3 = r3 + 3;
        goto L3
    L5:
        int r32 = r9.length % 3;
        if (r32 == 1) goto L10;
        if (r32 != 2) goto L16;
        int r33 = r4 + 1;
        r0[r4] = r10[(r9[r2] & 255) >> 2];
        int r43 = r33 + 1;
        int r73 = (r9[r2] & 3) << 4;
        int r22 = r2 + 1;
        r0[r33] = r10[((r9[r22] & 255) >> 4) | r73];
        r0[r43] = r10[(r9[r22] & 15) << 2];
        r0[r43 + 1] = 61;
    L16:
        return new String(r0, "US-ASCII");
    L13:
        e = move-exception;
        throw new AssertionError(e);
    L10:
        int r34 = r4 + 1;
        r0[r4] = r10[(r9[r2] & 255) >> 2];
        int r1 = r34 + 1;
        r0[r34] = r10[(r9[r2] & 3) << 4];
        r0[r1] = 61;
        r0[r1 + 1] = 61;
        goto L16
    }
}
