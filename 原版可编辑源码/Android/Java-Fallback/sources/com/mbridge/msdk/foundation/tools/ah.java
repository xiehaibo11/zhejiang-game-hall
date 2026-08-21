package com.mbridge.msdk.foundation.tools;

final class ah implements com.mbridge.msdk.foundation.tools.FastKV.a<java.util.Set<java.lang.String>> {
    static final com.mbridge.msdk.foundation.tools.ah a = null;

    static {
            com.mbridge.msdk.foundation.tools.ah r0 = new com.mbridge.msdk.foundation.tools.ah
            r0.<init>()
            com.mbridge.msdk.foundation.tools.ah.a = r0
            return
    }

    private ah() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final java.util.Set<java.lang.String> a(byte[] r5, int r6, int r7) {
            r4 = this;
            java.util.LinkedHashSet r0 = new java.util.LinkedHashSet
            r0.<init>()
            if (r7 <= 0) goto L84
            com.mbridge.msdk.foundation.tools.j r1 = new com.mbridge.msdk.foundation.tools.j
            r1.<init>(r5, r6)
            int r6 = r6 + r7
        Ld:
            int r5 = r1.b
            if (r5 >= r6) goto L77
            byte[] r5 = r1.a
            int r7 = r1.b
            int r2 = r7 + 1
            r1.b = r2
            r5 = r5[r7]
            int r7 = r5 >> 7
            if (r7 != 0) goto L20
            goto L6f
        L20:
            r5 = r5 & 127(0x7f, float:1.78E-43)
            byte[] r7 = r1.a
            int r2 = r1.b
            int r3 = r2 + 1
            r1.b = r3
            r7 = r7[r2]
            int r7 = r7 << 7
            r5 = r5 | r7
            int r7 = r5 >> 14
            if (r7 != 0) goto L34
            goto L6f
        L34:
            r5 = r5 & 16383(0x3fff, float:2.2957E-41)
            byte[] r7 = r1.a
            int r2 = r1.b
            int r3 = r2 + 1
            r1.b = r3
            r7 = r7[r2]
            int r7 = r7 << 14
            r5 = r5 | r7
            int r7 = r5 >> 21
            if (r7 != 0) goto L48
            goto L6f
        L48:
            r7 = 2097151(0x1fffff, float:2.938734E-39)
            r5 = r5 & r7
            byte[] r7 = r1.a
            int r2 = r1.b
            int r3 = r2 + 1
            r1.b = r3
            r7 = r7[r2]
            int r7 = r7 << 21
            r5 = r5 | r7
            int r7 = r5 >> 28
            if (r7 != 0) goto L5e
            goto L6f
        L5e:
            r7 = 268435455(0xfffffff, float:2.5243547E-29)
            r5 = r5 & r7
            byte[] r7 = r1.a
            int r2 = r1.b
            int r3 = r2 + 1
            r1.b = r3
            r7 = r7[r2]
            int r7 = r7 << 28
            r5 = r5 | r7
        L6f:
            java.lang.String r5 = r1.b(r5)
            r0.add(r5)
            goto Ld
        L77:
            int r5 = r1.b
            if (r5 != r6) goto L7c
            goto L84
        L7c:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "Invalid String set"
            r5.<init>(r6)
            throw r5
        L84:
            return r0
    }

    @Override
    public final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "StringSet"
            return r0
    }

    @Override
    public final byte[] a(java.util.Set<java.lang.String> r11) {
            r10 = this;
            java.util.Set r11 = (java.util.Set) r11
            boolean r0 = r11.isEmpty()
            r1 = 0
            if (r0 == 0) goto Ld
            byte[] r11 = new byte[r1]
            goto L89
        Ld:
            int r0 = r11.size()
            int[] r2 = new int[r0]
            java.lang.String[] r3 = new java.lang.String[r0]
            java.util.Iterator r11 = r11.iterator()
            r4 = r1
            r5 = r4
        L1b:
            boolean r6 = r11.hasNext()
            if (r6 == 0) goto L55
            java.lang.Object r6 = r11.next()
            java.lang.String r6 = (java.lang.String) r6
            if (r6 != 0) goto L2f
            int r4 = r4 + 5
            r6 = -1
            r2[r5] = r6
            goto L52
        L2f:
            int r7 = com.mbridge.msdk.foundation.tools.j.b(r6)
            r3[r5] = r6
            r2[r5] = r7
            int r6 = r7 >> 7
            if (r6 != 0) goto L3d
            r6 = 1
            goto L50
        L3d:
            int r6 = r7 >> 14
            if (r6 != 0) goto L43
            r6 = 2
            goto L50
        L43:
            int r6 = r7 >> 21
            if (r6 != 0) goto L49
            r6 = 3
            goto L50
        L49:
            int r6 = r7 >> 28
            if (r6 != 0) goto L4f
            r6 = 4
            goto L50
        L4f:
            r6 = 5
        L50:
            int r6 = r6 + r7
            int r4 = r4 + r6
        L52:
            int r5 = r5 + 1
            goto L1b
        L55:
            com.mbridge.msdk.foundation.tools.j r11 = new com.mbridge.msdk.foundation.tools.j
            r11.<init>(r4)
        L5a:
            if (r1 >= r0) goto L87
            r4 = r2[r1]
            int r5 = r11.b
            r6 = r4
        L61:
            r7 = r6 & (-128(0xffffffffffffff80, float:NaN))
            if (r7 == 0) goto L74
            byte[] r7 = r11.a
            int r8 = r5 + 1
            r9 = r6 & 127(0x7f, float:1.78E-43)
            r9 = r9 | 128(0x80, float:1.8E-43)
            byte r9 = (byte) r9
            r7[r5] = r9
            int r6 = r6 >>> 7
            r5 = r8
            goto L61
        L74:
            byte[] r7 = r11.a
            int r8 = r5 + 1
            byte r6 = (byte) r6
            r7[r5] = r6
            r11.b = r8
            if (r4 < 0) goto L84
            r4 = r3[r1]
            r11.a(r4)
        L84:
            int r1 = r1 + 1
            goto L5a
        L87:
            byte[] r11 = r11.a
        L89:
            return r11
    }
}
