package com.xiaomi.push;

public enum hk extends java.lang.Enum<com.xiaomi.push.hk> {
    public static final com.xiaomi.push.hk a = null;
    private static final com.xiaomi.push.hk[] a = null;
    public static final com.xiaomi.push.hk b = null;
    private final int a;

    static {
            com.xiaomi.push.hk r0 = new com.xiaomi.push.hk
            r1 = 0
            java.lang.String r2 = "START"
            r0.<init>(r2, r1, r1)
            com.xiaomi.push.hk.a = r0
            com.xiaomi.push.hk r0 = new com.xiaomi.push.hk
            r2 = 1
            java.lang.String r3 = "BIND"
            r0.<init>(r3, r2, r2)
            com.xiaomi.push.hk.b = r0
            r3 = 2
            com.xiaomi.push.hk[] r3 = new com.xiaomi.push.hk[r3]
            com.xiaomi.push.hk r4 = com.xiaomi.push.hk.a
            r3[r1] = r4
            r3[r2] = r0
            com.xiaomi.push.hk.a = r3
            return
    }

    hk(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.a = r3
            return
    }

    public static com.xiaomi.push.hk valueOf(java.lang.String r1) {
            java.lang.Class<com.xiaomi.push.hk> r0 = com.xiaomi.push.hk.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.xiaomi.push.hk r1 = (com.xiaomi.push.hk) r1
            return r1
    }

    public static com.xiaomi.push.hk[] values() {
            com.xiaomi.push.hk[] r0 = com.xiaomi.push.hk.a
            java.lang.Object r0 = r0.clone()
            com.xiaomi.push.hk[] r0 = (com.xiaomi.push.hk[]) r0
            return r0
    }

    public int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }
}
