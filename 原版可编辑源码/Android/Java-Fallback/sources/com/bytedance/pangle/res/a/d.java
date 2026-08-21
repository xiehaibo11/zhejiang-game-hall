package com.bytedance.pangle.res.a;

public final class d {
    private static <T> T a(T r0) {
            if (r0 == 0) goto L3
            return r0
        L3:
            r0 = 0
            throw r0
    }

    public static void a(java.io.InputStream r3, byte[] r4, int r5, int r6) {
            a(r3)
            a(r4)
            r0 = 0
            if (r6 < 0) goto L5d
            int r1 = r5 + r6
            int r2 = r4.length
            if (r5 < 0) goto L45
            if (r1 < r5) goto L45
            if (r1 > r2) goto L45
        L12:
            if (r0 >= r6) goto L21
            int r1 = r5 + r0
            int r2 = r6 - r0
            int r1 = r3.read(r4, r1, r2)
            r2 = -1
            if (r1 == r2) goto L21
            int r0 = r0 + r1
            goto L12
        L21:
            if (r0 != r6) goto L24
            return
        L24:
            java.io.EOFException r3 = new java.io.EOFException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "reached end of stream after reading "
            r4.<init>(r5)
            r4.append(r0)
            java.lang.String r5 = " bytes; "
            r4.append(r5)
            r4.append(r6)
            java.lang.String r5 = " bytes expected"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            throw r3
        L45:
            java.lang.IndexOutOfBoundsException r3 = new java.lang.IndexOutOfBoundsException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r5)
            r4.append(r1)
            r4.append(r2)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            throw r3
        L5d:
            java.lang.IndexOutOfBoundsException r3 = new java.lang.IndexOutOfBoundsException
            r4 = 1
            java.lang.Object[] r4 = new java.lang.Object[r4]
            java.lang.Integer r5 = java.lang.Integer.valueOf(r6)
            r4[r0] = r5
            java.lang.String r5 = "len (%s) cannot be negative"
            java.lang.String r4 = java.lang.String.format(r5, r4)
            r3.<init>(r4)
            throw r3
    }
}
