package com.xiaomi.push;

public final class a {
    public static final com.xiaomi.push.a a = null;
    private volatile int a;
    private final byte[] a;

    static {
            com.xiaomi.push.a r0 = new com.xiaomi.push.a
            r1 = 0
            byte[] r1 = new byte[r1]
            r0.<init>(r1)
            com.xiaomi.push.a.a = r0
            return
    }

    private a(byte[] r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.a = r2
            return
    }

    public static com.xiaomi.push.a a(byte[] r2) {
            int r0 = r2.length
            r1 = 0
            com.xiaomi.push.a r2 = a(r2, r1, r0)
            return r2
    }

    public static com.xiaomi.push.a a(byte[] r2, int r3, int r4) {
            byte[] r0 = new byte[r4]
            r1 = 0
            java.lang.System.arraycopy(r2, r3, r0, r1, r4)
            com.xiaomi.push.a r2 = new com.xiaomi.push.a
            r2.<init>(r0)
            return r2
    }

    public int a() {
            r1 = this;
            byte[] r0 = r1.a
            int r0 = r0.length
            return r0
    }

    public byte[] a() {
            r4 = this;
            byte[] r0 = r4.a
            int r1 = r0.length
            byte[] r2 = new byte[r1]
            r3 = 0
            java.lang.System.arraycopy(r0, r3, r2, r3, r1)
            return r2
    }

    public boolean equals(java.lang.Object r8) {
            r7 = this;
            r0 = 1
            if (r8 != r7) goto L4
            return r0
        L4:
            boolean r1 = r8 instanceof com.xiaomi.push.a
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.xiaomi.push.a r8 = (com.xiaomi.push.a) r8
            byte[] r1 = r7.a
            int r3 = r1.length
            byte[] r8 = r8.a
            int r4 = r8.length
            if (r3 == r4) goto L15
            return r2
        L15:
            r4 = r2
        L16:
            if (r4 >= r3) goto L22
            r5 = r1[r4]
            r6 = r8[r4]
            if (r5 == r6) goto L1f
            return r2
        L1f:
            int r4 = r4 + 1
            goto L16
        L22:
            return r0
    }

    public int hashCode() {
            r5 = this;
            int r0 = r5.a
            if (r0 != 0) goto L1a
            byte[] r0 = r5.a
            int r1 = r0.length
            r2 = 0
            r3 = r1
        L9:
            if (r2 >= r1) goto L13
            int r3 = r3 * 31
            r4 = r0[r2]
            int r3 = r3 + r4
            int r2 = r2 + 1
            goto L9
        L13:
            if (r3 != 0) goto L17
            r0 = 1
            goto L18
        L17:
            r0 = r3
        L18:
            r5.a = r0
        L1a:
            return r0
    }
}
