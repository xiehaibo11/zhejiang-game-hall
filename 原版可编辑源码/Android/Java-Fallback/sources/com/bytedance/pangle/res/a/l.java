package com.bytedance.pangle.res.a;

public final class l {
    public static void a(com.bytedance.pangle.res.a.g r6) {
            r0 = 0
            r6.b(r0)
            int r0 = r6.readInt()
            int r1 = r6.readInt()
            int r2 = r6.readInt()
            r3 = 4
            r6.skipBytes(r3)
            int r4 = r6.readInt()
            int r5 = r6.readInt()
            int r1 = r1 * r3
            r6.skipBytes(r1)
            if (r2 == 0) goto L26
            int r2 = r2 * r3
            r6.skipBytes(r2)
        L26:
            if (r5 != 0) goto L2a
            r1 = r0
            goto L2b
        L2a:
            r1 = r5
        L2b:
            int r1 = r1 - r4
            r6.skipBytes(r1)
            if (r5 == 0) goto L41
            int r0 = r0 - r5
            r6.skipBytes(r0)
            int r0 = r0 % r3
            if (r0 <= 0) goto L41
        L38:
            int r1 = r0 + (-1)
            if (r0 <= 0) goto L41
            r6.readByte()
            r0 = r1
            goto L38
        L41:
            return
    }
}
