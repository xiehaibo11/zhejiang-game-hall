package org.cocos2dx.okio;

final class Base64 {
    private static final byte[] MAP = null;
    private static final byte[] URL_MAP = null;

    static {
            r0 = 64
            byte[] r1 = new byte[r0]
            r1 = {x0012: FILL_ARRAY_DATA , data: [65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 43, 47} // fill-array
            org.cocos2dx.okio.Base64.MAP = r1
            byte[] r0 = new byte[r0]
            r0 = {x0036: FILL_ARRAY_DATA , data: [65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 45, 95} // fill-array
            org.cocos2dx.okio.Base64.URL_MAP = r0
            return
    }

    private Base64() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] decode(java.lang.String r14) {
            int r0 = r14.length()
        L4:
            r1 = 9
            r2 = 32
            r3 = 13
            r4 = 10
            if (r0 <= 0) goto L24
            int r5 = r0 + (-1)
            char r5 = r14.charAt(r5)
            r6 = 61
            if (r5 == r6) goto L21
            if (r5 == r4) goto L21
            if (r5 == r3) goto L21
            if (r5 == r2) goto L21
            if (r5 == r1) goto L21
            goto L24
        L21:
            int r0 = r0 + (-1)
            goto L4
        L24:
            long r5 = (long) r0
            r7 = 6
            long r5 = r5 * r7
            r7 = 8
            long r5 = r5 / r7
            int r6 = (int) r5
            byte[] r5 = new byte[r6]
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            r10 = 0
        L34:
            r11 = 0
            if (r7 >= r0) goto L9e
            char r12 = r14.charAt(r7)
            r13 = 65
            if (r12 < r13) goto L46
            r13 = 90
            if (r12 > r13) goto L46
            int r12 = r12 + (-65)
            goto L7d
        L46:
            r13 = 97
            if (r12 < r13) goto L51
            r13 = 122(0x7a, float:1.71E-43)
            if (r12 > r13) goto L51
            int r12 = r12 + (-71)
            goto L7d
        L51:
            r13 = 48
            if (r12 < r13) goto L5c
            r13 = 57
            if (r12 > r13) goto L5c
            int r12 = r12 + 4
            goto L7d
        L5c:
            r13 = 43
            if (r12 == r13) goto L7b
            r13 = 45
            if (r12 != r13) goto L65
            goto L7b
        L65:
            r13 = 47
            if (r12 == r13) goto L78
            r13 = 95
            if (r12 != r13) goto L6e
            goto L78
        L6e:
            if (r12 == r4) goto L9b
            if (r12 == r3) goto L9b
            if (r12 == r2) goto L9b
            if (r12 != r1) goto L77
            goto L9b
        L77:
            return r11
        L78:
            r12 = 63
            goto L7d
        L7b:
            r12 = 62
        L7d:
            int r9 = r9 << 6
            byte r11 = (byte) r12
            r9 = r9 | r11
            int r8 = r8 + 1
            int r11 = r8 % 4
            if (r11 != 0) goto L9b
            int r11 = r10 + 1
            int r12 = r9 >> 16
            byte r12 = (byte) r12
            r5[r10] = r12
            int r10 = r11 + 1
            int r12 = r9 >> 8
            byte r12 = (byte) r12
            r5[r11] = r12
            int r11 = r10 + 1
            byte r12 = (byte) r9
            r5[r10] = r12
            r10 = r11
        L9b:
            int r7 = r7 + 1
            goto L34
        L9e:
            int r8 = r8 % 4
            r14 = 1
            if (r8 != r14) goto La4
            return r11
        La4:
            r14 = 2
            if (r8 != r14) goto Lb2
            int r14 = r9 << 12
            int r0 = r10 + 1
            int r14 = r14 >> 16
            byte r14 = (byte) r14
            r5[r10] = r14
            r10 = r0
            goto Lc5
        Lb2:
            r14 = 3
            if (r8 != r14) goto Lc5
            int r14 = r9 << 6
            int r0 = r10 + 1
            int r1 = r14 >> 16
            byte r1 = (byte) r1
            r5[r10] = r1
            int r10 = r0 + 1
            int r14 = r14 >> 8
            byte r14 = (byte) r14
            r5[r0] = r14
        Lc5:
            int r14 = r5.length
            if (r10 != r14) goto Lc9
            return r5
        Lc9:
            byte[] r14 = new byte[r10]
            java.lang.System.arraycopy(r5, r6, r14, r6, r10)
            return r14
    }

    public static java.lang.String encode(byte[] r1) {
            byte[] r0 = org.cocos2dx.okio.Base64.MAP
            java.lang.String r1 = encode(r1, r0)
            return r1
    }

    private static java.lang.String encode(byte[] r9, byte[] r10) {
            int r0 = r9.length
            r1 = 2
            int r0 = r0 + r1
            int r0 = r0 / 3
            int r0 = r0 * 4
            byte[] r0 = new byte[r0]
            int r2 = r9.length
            int r3 = r9.length
            int r3 = r3 % 3
            int r2 = r2 - r3
            r3 = 0
            r4 = 0
        L10:
            if (r3 >= r2) goto L53
            int r5 = r4 + 1
            r6 = r9[r3]
            r6 = r6 & 255(0xff, float:3.57E-43)
            int r6 = r6 >> r1
            r6 = r10[r6]
            r0[r4] = r6
            int r4 = r5 + 1
            r6 = r9[r3]
            r6 = r6 & 3
            int r6 = r6 << 4
            int r7 = r3 + 1
            r8 = r9[r7]
            r8 = r8 & 255(0xff, float:3.57E-43)
            int r8 = r8 >> 4
            r6 = r6 | r8
            r6 = r10[r6]
            r0[r5] = r6
            int r5 = r4 + 1
            r6 = r9[r7]
            r6 = r6 & 15
            int r6 = r6 << r1
            int r7 = r3 + 2
            r8 = r9[r7]
            r8 = r8 & 255(0xff, float:3.57E-43)
            int r8 = r8 >> 6
            r6 = r6 | r8
            r6 = r10[r6]
            r0[r4] = r6
            int r4 = r5 + 1
            r6 = r9[r7]
            r6 = r6 & 63
            r6 = r10[r6]
            r0[r5] = r6
            int r3 = r3 + 3
            goto L10
        L53:
            int r3 = r9.length
            int r3 = r3 % 3
            r5 = 61
            r6 = 1
            if (r3 == r6) goto L8b
            if (r3 == r1) goto L5e
            goto La9
        L5e:
            int r3 = r4 + 1
            r7 = r9[r2]
            r7 = r7 & 255(0xff, float:3.57E-43)
            int r7 = r7 >> r1
            r7 = r10[r7]
            r0[r4] = r7
            int r4 = r3 + 1
            r7 = r9[r2]
            r7 = r7 & 3
            int r7 = r7 << 4
            int r2 = r2 + r6
            r6 = r9[r2]
            r6 = r6 & 255(0xff, float:3.57E-43)
            int r6 = r6 >> 4
            r6 = r6 | r7
            r6 = r10[r6]
            r0[r3] = r6
            int r3 = r4 + 1
            r9 = r9[r2]
            r9 = r9 & 15
            int r9 = r9 << r1
            r9 = r10[r9]
            r0[r4] = r9
            r0[r3] = r5
            goto La9
        L8b:
            int r3 = r4 + 1
            r6 = r9[r2]
            r6 = r6 & 255(0xff, float:3.57E-43)
            int r1 = r6 >> 2
            r1 = r10[r1]
            r0[r4] = r1
            int r1 = r3 + 1
            r9 = r9[r2]
            r9 = r9 & 3
            int r9 = r9 << 4
            r9 = r10[r9]
            r0[r3] = r9
            int r9 = r1 + 1
            r0[r1] = r5
            r0[r9] = r5
        La9:
            java.lang.String r9 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> Lb1
            java.lang.String r10 = "US-ASCII"
            r9.<init>(r0, r10)     // Catch: java.io.UnsupportedEncodingException -> Lb1
            return r9
        Lb1:
            r9 = move-exception
            java.lang.AssertionError r10 = new java.lang.AssertionError
            r10.<init>(r9)
            throw r10
    }

    public static java.lang.String encodeUrl(byte[] r1) {
            byte[] r0 = org.cocos2dx.okio.Base64.URL_MAP
            java.lang.String r1 = encode(r1, r0)
            return r1
    }
}
