package com.tkay.expressad.exoplayer.l;

public final class d {
    public final java.util.List<byte[]> a;
    public final int b;

    private d(java.util.List<byte[]> r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    public static com.tkay.expressad.exoplayer.l.d a(com.tkay.expressad.exoplayer.k.s r13) {
            r0 = 21
            r13.d(r0)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L78
            int r0 = r13.d()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L78
            r0 = r0 & 3
            int r1 = r13.d()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L78
            int r2 = r13.c()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L78
            r3 = 0
            r4 = r3
            r5 = r4
        L16:
            r6 = 1
            if (r4 >= r1) goto L33
            r13.d(r6)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L78
            int r6 = r13.e()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L78
            r7 = r3
        L21:
            if (r7 >= r6) goto L30
            int r8 = r13.e()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L78
            int r9 = r8 + 4
            int r5 = r5 + r9
            r13.d(r8)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L78
            int r7 = r7 + 1
            goto L21
        L30:
            int r4 = r4 + 1
            goto L16
        L33:
            r13.c(r2)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L78
            byte[] r2 = new byte[r5]     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L78
            r4 = r3
            r7 = r4
        L3a:
            if (r4 >= r1) goto L69
            r13.d(r6)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L78
            int r8 = r13.e()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L78
            r9 = r3
        L44:
            if (r9 >= r8) goto L66
            int r10 = r13.e()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L78
            byte[] r11 = com.tkay.expressad.exoplayer.k.p.a     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L78
            byte[] r12 = com.tkay.expressad.exoplayer.k.p.a     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L78
            int r12 = r12.length     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L78
            java.lang.System.arraycopy(r11, r3, r2, r7, r12)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L78
            byte[] r11 = com.tkay.expressad.exoplayer.k.p.a     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L78
            int r11 = r11.length     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L78
            int r7 = r7 + r11
            byte[] r11 = r13.a     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L78
            int r12 = r13.c()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L78
            java.lang.System.arraycopy(r11, r12, r2, r7, r10)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L78
            int r7 = r7 + r10
            r13.d(r10)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L78
            int r9 = r9 + 1
            goto L44
        L66:
            int r4 = r4 + 1
            goto L3a
        L69:
            if (r5 != 0) goto L6d
            r13 = 0
            goto L71
        L6d:
            java.util.List r13 = java.util.Collections.singletonList(r2)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L78
        L71:
            com.tkay.expressad.exoplayer.l.d r1 = new com.tkay.expressad.exoplayer.l.d     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L78
            int r0 = r0 + r6
            r1.<init>(r13, r0)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L78
            return r1
        L78:
            r13 = move-exception
            com.tkay.expressad.exoplayer.t r0 = new com.tkay.expressad.exoplayer.t
            java.lang.String r1 = "Error parsing HEVC config"
            r0.<init>(r1, r13)
            throw r0
    }
}
