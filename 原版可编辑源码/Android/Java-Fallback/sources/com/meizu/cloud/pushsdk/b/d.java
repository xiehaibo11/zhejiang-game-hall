package com.meizu.cloud.pushsdk.b;

class d {
    private static final char[] a = null;
    private static final char b = 0;
    private static final char c = 0;
    private static final char d = 0;
    private final java.lang.String e;
    private char[] f;
    private int g;

    static {
            r0 = 64
            char[] r0 = new char[r0]
            r0 = {x0026: FILL_ARRAY_DATA , data: [65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 43, 47} // fill-array
            com.meizu.cloud.pushsdk.b.d.a = r0
            r0 = 2
            java.lang.String r1 = "00000011"
            int r1 = java.lang.Integer.parseInt(r1, r0)
            char r1 = (char) r1
            com.meizu.cloud.pushsdk.b.d.b = r1
            java.lang.String r1 = "00001111"
            int r1 = java.lang.Integer.parseInt(r1, r0)
            char r1 = (char) r1
            com.meizu.cloud.pushsdk.b.d.c = r1
            java.lang.String r1 = "00111111"
            int r0 = java.lang.Integer.parseInt(r1, r0)
            char r0 = (char) r0
            com.meizu.cloud.pushsdk.b.d.d = r0
            return
    }

    public d(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.g = r0
            r1.e = r2
            r1.a()
            return
    }

    private void a() {
            r5 = this;
            char[] r0 = com.meizu.cloud.pushsdk.b.d.a
            int r0 = r0.length
            char[] r0 = new char[r0]
            java.lang.String r1 = r5.e
            r2 = 0
            char r1 = r1.charAt(r2)
            int r1 = r1 % 13
            r5.g = r1
        L10:
            char[] r1 = com.meizu.cloud.pushsdk.b.d.a
            int r3 = r1.length
            if (r2 >= r3) goto L21
            int r3 = r5.g
            int r3 = r3 + r2
            int r4 = r1.length
            int r3 = r3 % r4
            char r1 = r1[r3]
            r0[r2] = r1
            int r2 = r2 + 1
            goto L10
        L21:
            r5.f = r0
            return
    }

    public java.lang.String a(byte[] r9) {
            r8 = this;
            if (r9 == 0) goto La8
            int r0 = r9.length
            if (r0 != 0) goto L7
            goto La8
        L7:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            int r1 = r9.length
            int r1 = r1 + 2
            int r1 = r1 / 3
            int r1 = r1 * 4
            r0.<init>(r1)
            r1 = 0
            int r2 = r9.length
        L15:
            if (r1 >= r2) goto La3
            int r3 = r1 + 1
            r1 = r9[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            if (r3 != r2) goto L3a
            char[] r9 = r8.f
            int r2 = r1 >>> 2
            char r9 = r9[r2]
            r0.append(r9)
            char[] r9 = r8.f
            char r2 = com.meizu.cloud.pushsdk.b.d.b
            r1 = r1 & r2
            int r1 = r1 << 4
            char r9 = r9[r1]
            r0.append(r9)
            java.lang.String r9 = "=="
        L36:
            r0.append(r9)
            goto La3
        L3a:
            int r4 = r3 + 1
            r3 = r9[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            if (r4 != r2) goto L69
            char[] r9 = r8.f
            int r2 = r1 >>> 2
            char r9 = r9[r2]
            r0.append(r9)
            char[] r9 = r8.f
            char r2 = com.meizu.cloud.pushsdk.b.d.b
            r1 = r1 & r2
            int r1 = r1 << 4
            int r2 = r3 >>> 4
            r1 = r1 | r2
            char r9 = r9[r1]
            r0.append(r9)
            char[] r9 = r8.f
            char r1 = com.meizu.cloud.pushsdk.b.d.c
            r1 = r1 & r3
            int r1 = r1 << 2
            char r9 = r9[r1]
            r0.append(r9)
            java.lang.String r9 = "="
            goto L36
        L69:
            int r5 = r4 + 1
            r4 = r9[r4]
            r4 = r4 & 255(0xff, float:3.57E-43)
            char[] r6 = r8.f
            int r7 = r1 >>> 2
            char r6 = r6[r7]
            r0.append(r6)
            char[] r6 = r8.f
            char r7 = com.meizu.cloud.pushsdk.b.d.b
            r1 = r1 & r7
            int r1 = r1 << 4
            int r7 = r3 >>> 4
            r1 = r1 | r7
            char r1 = r6[r1]
            r0.append(r1)
            char[] r1 = r8.f
            char r6 = com.meizu.cloud.pushsdk.b.d.c
            r3 = r3 & r6
            int r3 = r3 << 2
            int r6 = r4 >>> 6
            r3 = r3 | r6
            char r1 = r1[r3]
            r0.append(r1)
            char[] r1 = r8.f
            char r3 = com.meizu.cloud.pushsdk.b.d.d
            r3 = r3 & r4
            char r1 = r1[r3]
            r0.append(r1)
            r1 = r5
            goto L15
        La3:
            java.lang.String r9 = r0.toString()
            return r9
        La8:
            r9 = 0
            return r9
    }
}
