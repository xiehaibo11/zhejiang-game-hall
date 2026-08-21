package com.bianfeng.ymnsdk.utilslib.security;

public final class Base64 {
    private static final int BASELENGTH = 128;
    private static final int EIGHTBIT = 8;
    private static final int FOURBYTE = 4;
    private static final int LOOKUPLENGTH = 64;
    private static final char PAD = '=';
    private static final int SIGN = -128;
    private static final int SIXTEENBIT = 16;
    private static final int TWENTYFOURBITGROUP = 24;
    private static final byte[] base64Alphabet = null;
    private static final boolean fDebug = false;
    private static final char[] lookUpBase64Alphabet = null;

    private static boolean isPad(char r1) {
        if (r1 != '=') goto L5;
        return true;
    L5:
        return false;
    }

    private static boolean isWhiteSpace(char r1) {
        if (r1 != ' ') goto L5;
    L12:
        return true;
    L5:
        if (r1 == '\r') goto L12;
        if (r1 == '\n') goto L12;
        if (r1 == '\t') goto L12;
        return false;
    }

    public Base64() {
    }

    static {
        base64Alphabet = new byte[128];
        lookUpBase64Alphabet = new char[64];
        int r1 = 0;
        int r2 = 0;
    L3:
        if (r2 >= 128) goto L5;
        base64Alphabet[r2] = -1;
        r2 = r2 + 1;
        goto L3
    L5:
        int r0 = 90;
    L7:
        if (r0 < 65) goto L9;
        base64Alphabet[r0] = (byte) (r0 - 65);
        r0 = r0 - 1;
        goto L7
    L9:
        int r02 = 122;
    L10:
        int r22 = 26;
        if (r02 < 97) goto L13;
        base64Alphabet[r02] = (byte) ((r02 - 97) + 26);
        r02 = r02 - 1;
        goto L10
    L13:
        int r03 = 57;
    L14:
        int r3 = 52;
        if (r03 < 48) goto L17;
        base64Alphabet[r03] = (byte) ((r03 - 48) + 52);
        r03 = r03 - 1;
        goto L14
    L17:
        byte[] r04 = base64Alphabet;
        r04[43] = 62;
        r04[47] = 63;
        int r05 = 0;
    L19:
        if (r05 > 25) goto L21;
        lookUpBase64Alphabet[r05] = (char) (r05 + 65);
        r05 = r05 + 1;
        goto L19
    L21:
        int r06 = 0;
    L23:
        if (r22 > 51) goto L26;
        lookUpBase64Alphabet[r22] = (char) (r06 + 97);
        r22 = r22 + 1;
        r06 = r06 + 1;
    L26:
        if (r3 > 61) goto L28;
        lookUpBase64Alphabet[r3] = (char) (r1 + 48);
        r3 = r3 + 1;
        r1 = r1 + 1;
        goto L26
    L28:
        char[] r07 = lookUpBase64Alphabet;
        r07[62] = '+';
        r07[63] = '/';
    }

    private static boolean isData(char r1) {
        if (r1 < 128) goto L5;
    L7:
        return false;
    L5:
        if (base64Alphabet[r1] == (-1)) goto L7;
        return true;
    }

    public static String encode(byte[] r15) {
        if (r15 != null) goto L5;
        return null;
    L5:
        int r0 = r15.length * 8;
        if (r0 != 0) goto L9;
        return "";
    L9:
        int r2 = r0 % 24;
        int r02 = r0 / 24;
        if (r2 == 0) goto L12;
        int r3 = r02 + 1;
    L13:
        char[] r32 = new char[r3 * 4];
        int r4 = 0;
        int r5 = 0;
        int r6 = 0;
    L14:
        if (r4 >= r02) goto L29;
        int r7 = r5 + 1;
        byte r52 = r15[r5];
        int r8 = r7 + 1;
        byte r72 = r15[r7];
        int r9 = r8 + 1;
        byte r82 = r15[r8];
        byte r10 = (byte) (r72 & 15);
        byte r11 = (byte) (r52 & 3);
        if ((r52 & (-128)) != 0) goto L18;
        int r53 = r52 >> 2;
    L19:
        byte r54 = (byte) r53;
        if ((r72 & (-128)) != 0) goto L22;
        int r73 = r72 >> 4;
    L23:
        byte r74 = (byte) r73;
        if ((r82 & (-128)) != 0) goto L26;
        int r12 = r82 >> 6;
    L27:
        int r13 = r6 + 1;
        char[] r14 = lookUpBase64Alphabet;
        r32[r6] = r14[r54];
        int r55 = r13 + 1;
        r32[r13] = r14[(r11 << 4) | r74];
        int r62 = r55 + 1;
        int r75 = r10 << 2;
        r32[r55] = r14[r75 | ((byte) r12)];
        r32[r62] = r14[r82 & 63];
        r4 = r4 + 1;
        r6 = r62 + 1;
        r5 = r9;
        goto L14
    L26:
        r12 = (r82 >> 6) ^ 252;
        goto L27
    L22:
        r73 = (r72 >> 4) ^ 240;
        goto L23
    L18:
        r53 = (r52 >> 2) ^ 192;
        goto L19
    L29:
        if (r2 != 8) goto L36;
        byte r152 = r15[r5];
        byte r1 = (byte) (r152 & 3);
        if ((r152 & (-128)) != 0) goto L33;
        int r153 = r152 >> 2;
    L34:
        int r22 = r6 + 1;
        char[] r42 = lookUpBase64Alphabet;
        r32[r6] = r42[(byte) r153];
        int r154 = r22 + 1;
        r32[r22] = r42[r1 << 4];
        r32[r154] = PAD;
        r32[r154 + 1] = PAD;
    L47:
        return new String(r32);
    L33:
        r153 = (r152 >> 2) ^ 192;
        goto L34
    L36:
        if (r2 != 16) goto L47;
        byte r16 = r15[r5];
        byte r155 = r15[r5 + 1];
        byte r23 = (byte) (r155 & 15);
        byte r43 = (byte) (r16 & 3);
        if ((r16 & (-128)) != 0) goto L40;
        int r17 = r16 >> 2;
    L41:
        byte r18 = (byte) r17;
        if ((r155 & (-128)) != 0) goto L44;
        int r156 = r155 >> 4;
    L45:
        int r56 = r6 + 1;
        char[] r76 = lookUpBase64Alphabet;
        r32[r6] = r76[r18];
        int r19 = r56 + 1;
        r32[r56] = r76[((byte) r156) | (r43 << 4)];
        r32[r19] = r76[r23 << 2];
        r32[r19 + 1] = PAD;
        goto L47
    L44:
        r156 = (r155 >> 4) ^ 240;
        goto L45
    L40:
        r17 = (r16 >> 2) ^ 192;
        goto L41
    L12:
        r3 = r02;
        goto L13
    }

    public static byte[] decode(String r13) {
        if (r13 != null) goto L5;
        return null;
    L5:
        char[] r132 = r13.toCharArray();
        int r1 = removeWhiteSpace(r132);
        if ((r1 % 4) == 0) goto L8;
        return null;
    L8:
        int r12 = r1 / 4;
        if (r12 == 0) goto L11;
        byte[] r3 = new byte[r12 * 3];
        int r4 = 0;
        int r5 = 0;
        int r6 = 0;
    L14:
        if (r4 >= (r12 - 1)) goto L26;
        int r7 = r5 + 1;
        char r52 = r132[r5];
        if (isData(r52) == false) goto L25;
        int r8 = r7 + 1;
        char r72 = r132[r7];
        if (isData(r72) == false) goto L25;
        int r9 = r8 + 1;
        char r82 = r132[r8];
        if (isData(r82) == false) goto L25;
        int r10 = r9 + 1;
        char r92 = r132[r9];
        if (isData(r92) == false) goto L25;
        byte[] r11 = base64Alphabet;
        byte r53 = r11[r52];
        byte r73 = r11[r72];
        byte r83 = r11[r82];
        byte r93 = r11[r92];
        int r112 = r6 + 1;
        r3[r6] = (byte) ((r53 << 2) | (r73 >> 4));
        int r54 = r112 + 1;
        r3[r112] = (byte) (((r73 & 15) << 4) | ((r83 >> 2) & 15));
        r6 = r54 + 1;
        r3[r54] = (byte) ((r83 << 6) | r93);
        r4 = r4 + 1;
        r5 = r10;
    L25:
        return null;
    L26:
        int r14 = r5 + 1;
        char r55 = r132[r5];
        if (isData(r55) == false) goto L61;
        int r74 = r14 + 1;
        char r15 = r132[r14];
        if (isData(r15) == false) goto L64;
        byte[] r84 = base64Alphabet;
        byte r56 = r84[r55];
        byte r16 = r84[r15];
        int r85 = r74 + 1;
        char r75 = r132[r74];
        char r133 = r132[r85];
        if (isData(r75) == false) goto L39;
        if (isData(r133) == false) goto L39;
        byte[] r0 = base64Alphabet;
        byte r2 = r0[r75];
        byte r134 = r0[r133];
        int r02 = r6 + 1;
        r3[r6] = (byte) ((r56 << 2) | (r16 >> 4));
        r3[r02] = (byte) (((r16 & 15) << 4) | ((r2 >> 2) & 15));
        r3[r02 + 1] = (byte) (r134 | (r2 << 6));
        return r3;
    L39:
        if (isPad(r75) == false) goto L48;
        if (isPad(r133) == false) goto L48;
        if ((r16 & 15) == 0) goto L45;
        return null;
    L45:
        int r42 = r4 * 3;
        byte[] r135 = new byte[r42 + 1];
        System.arraycopy(r3, 0, r135, 0, r42);
        r135[r6] = (byte) ((r56 << 2) | (r16 >> 4));
        return r135;
    L48:
        if (isPad(r75) == false) goto L50;
        return null;
    L50:
        if (isPad(r133) == false) goto L63;
        byte r136 = base64Alphabet[r75];
        if ((r136 & 3) == 0) goto L54;
        return null;
    L54:
        int r43 = r4 * 3;
        byte[] r03 = new byte[r43 + 2];
        System.arraycopy(r3, 0, r03, 0, r43);
        r03[r6] = (byte) ((r56 << 2) | (r16 >> 4));
        r03[r6 + 1] = (byte) (((r136 >> 2) & 15) | ((r16 & 15) << 4));
        return r03;
    L63:
        return null;
    L64:
        return null;
    L61:
        return null;
    L11:
        return new byte[0];
    }

    private static int removeWhiteSpace(char[] r5) {
        int r0 = 0;
        if (r5 != null) goto L5;
        return 0;
    L5:
        int r1 = r5.length;
        int r2 = 0;
    L6:
        if (r0 >= r1) goto L11;
        if (isWhiteSpace(r5[r0]) == true) goto L10;
        r5[r2] = r5[r0];
        r2 = r2 + 1;
    L10:
        r0 = r0 + 1;
        goto L6
    L11:
        return r2;
    }
}
