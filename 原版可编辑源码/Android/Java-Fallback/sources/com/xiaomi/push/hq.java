package com.xiaomi.push;

public enum hq extends java.lang.Enum<com.xiaomi.push.hq> {
    public static final com.xiaomi.push.hq a = null;
    private static final com.xiaomi.push.hq[] a = null;
    public static final com.xiaomi.push.hq b = null;
    public static final com.xiaomi.push.hq c = null;
    public static final com.xiaomi.push.hq d = null;
    private final int a;

    static {
            com.xiaomi.push.hq r0 = new com.xiaomi.push.hq
            r1 = 0
            r2 = 1
            java.lang.String r3 = "INT"
            r0.<init>(r3, r1, r2)
            com.xiaomi.push.hq.a = r0
            com.xiaomi.push.hq r0 = new com.xiaomi.push.hq
            r3 = 2
            java.lang.String r4 = "LONG"
            r0.<init>(r4, r2, r3)
            com.xiaomi.push.hq.b = r0
            com.xiaomi.push.hq r0 = new com.xiaomi.push.hq
            r4 = 3
            java.lang.String r5 = "STRING"
            r0.<init>(r5, r3, r4)
            com.xiaomi.push.hq.c = r0
            com.xiaomi.push.hq r0 = new com.xiaomi.push.hq
            r5 = 4
            java.lang.String r6 = "BOOLEAN"
            r0.<init>(r6, r4, r5)
            com.xiaomi.push.hq.d = r0
            com.xiaomi.push.hq[] r5 = new com.xiaomi.push.hq[r5]
            com.xiaomi.push.hq r6 = com.xiaomi.push.hq.a
            r5[r1] = r6
            com.xiaomi.push.hq r1 = com.xiaomi.push.hq.b
            r5[r2] = r1
            com.xiaomi.push.hq r1 = com.xiaomi.push.hq.c
            r5[r3] = r1
            r5[r4] = r0
            com.xiaomi.push.hq.a = r5
            return
    }

    hq(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.a = r3
            return
    }

    public static com.xiaomi.push.hq a(int r1) {
            r0 = 1
            if (r1 == r0) goto L17
            r0 = 2
            if (r1 == r0) goto L14
            r0 = 3
            if (r1 == r0) goto L11
            r0 = 4
            if (r1 == r0) goto Le
            r1 = 0
            return r1
        Le:
            com.xiaomi.push.hq r1 = com.xiaomi.push.hq.d
            return r1
        L11:
            com.xiaomi.push.hq r1 = com.xiaomi.push.hq.c
            return r1
        L14:
            com.xiaomi.push.hq r1 = com.xiaomi.push.hq.b
            return r1
        L17:
            com.xiaomi.push.hq r1 = com.xiaomi.push.hq.a
            return r1
    }

    public static com.xiaomi.push.hq valueOf(java.lang.String r1) {
            java.lang.Class<com.xiaomi.push.hq> r0 = com.xiaomi.push.hq.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.xiaomi.push.hq r1 = (com.xiaomi.push.hq) r1
            return r1
    }

    public static com.xiaomi.push.hq[] values() {
            com.xiaomi.push.hq[] r0 = com.xiaomi.push.hq.a
            java.lang.Object r0 = r0.clone()
            com.xiaomi.push.hq[] r0 = (com.xiaomi.push.hq[]) r0
            return r0
    }
}
