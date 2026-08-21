package com.xiaomi.push;

public enum hp extends java.lang.Enum<com.xiaomi.push.hp> {
    public static final com.xiaomi.push.hp a = null;
    private static final com.xiaomi.push.hp[] a = null;
    public static final com.xiaomi.push.hp b = null;
    private final int a;

    static {
            com.xiaomi.push.hp r0 = new com.xiaomi.push.hp
            r1 = 0
            r2 = 1
            java.lang.String r3 = "MISC_CONFIG"
            r0.<init>(r3, r1, r2)
            com.xiaomi.push.hp.a = r0
            com.xiaomi.push.hp r0 = new com.xiaomi.push.hp
            r3 = 2
            java.lang.String r4 = "PLUGIN_CONFIG"
            r0.<init>(r4, r2, r3)
            com.xiaomi.push.hp.b = r0
            com.xiaomi.push.hp[] r3 = new com.xiaomi.push.hp[r3]
            com.xiaomi.push.hp r4 = com.xiaomi.push.hp.a
            r3[r1] = r4
            r3[r2] = r0
            com.xiaomi.push.hp.a = r3
            return
    }

    hp(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.a = r3
            return
    }

    public static com.xiaomi.push.hp a(int r1) {
            r0 = 1
            if (r1 == r0) goto Lb
            r0 = 2
            if (r1 == r0) goto L8
            r1 = 0
            return r1
        L8:
            com.xiaomi.push.hp r1 = com.xiaomi.push.hp.b
            return r1
        Lb:
            com.xiaomi.push.hp r1 = com.xiaomi.push.hp.a
            return r1
    }

    public static com.xiaomi.push.hp valueOf(java.lang.String r1) {
            java.lang.Class<com.xiaomi.push.hp> r0 = com.xiaomi.push.hp.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.xiaomi.push.hp r1 = (com.xiaomi.push.hp) r1
            return r1
    }

    public static com.xiaomi.push.hp[] values() {
            com.xiaomi.push.hp[] r0 = com.xiaomi.push.hp.a
            java.lang.Object r0 = r0.clone()
            com.xiaomi.push.hp[] r0 = (com.xiaomi.push.hp[]) r0
            return r0
    }

    public int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }
}
