package com.xiaomi.mipush.sdk;

public enum e extends java.lang.Enum<com.xiaomi.mipush.sdk.e> {
    public static final com.xiaomi.mipush.sdk.e a = null;
    private static final com.xiaomi.mipush.sdk.e[] a = null;
    public static final com.xiaomi.mipush.sdk.e b = null;
    public static final com.xiaomi.mipush.sdk.e c = null;
    public static final com.xiaomi.mipush.sdk.e d = null;
    private int a;

    static {
            com.xiaomi.mipush.sdk.e r0 = new com.xiaomi.mipush.sdk.e
            r1 = 0
            r2 = 1
            java.lang.String r3 = "ASSEMBLE_PUSH_HUAWEI"
            r0.<init>(r3, r1, r2)
            com.xiaomi.mipush.sdk.e.a = r0
            com.xiaomi.mipush.sdk.e r0 = new com.xiaomi.mipush.sdk.e
            r3 = 2
            java.lang.String r4 = "ASSEMBLE_PUSH_FCM"
            r0.<init>(r4, r2, r3)
            com.xiaomi.mipush.sdk.e.b = r0
            com.xiaomi.mipush.sdk.e r0 = new com.xiaomi.mipush.sdk.e
            r4 = 3
            java.lang.String r5 = "ASSEMBLE_PUSH_COS"
            r0.<init>(r5, r3, r4)
            com.xiaomi.mipush.sdk.e.c = r0
            com.xiaomi.mipush.sdk.e r0 = new com.xiaomi.mipush.sdk.e
            r5 = 4
            java.lang.String r6 = "ASSEMBLE_PUSH_FTOS"
            r0.<init>(r6, r4, r5)
            com.xiaomi.mipush.sdk.e.d = r0
            com.xiaomi.mipush.sdk.e[] r5 = new com.xiaomi.mipush.sdk.e[r5]
            com.xiaomi.mipush.sdk.e r6 = com.xiaomi.mipush.sdk.e.a
            r5[r1] = r6
            com.xiaomi.mipush.sdk.e r1 = com.xiaomi.mipush.sdk.e.b
            r5[r2] = r1
            com.xiaomi.mipush.sdk.e r1 = com.xiaomi.mipush.sdk.e.c
            r5[r3] = r1
            r5[r4] = r0
            com.xiaomi.mipush.sdk.e.a = r5
            return
    }

    e(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.a = r3
            return
    }

    public static com.xiaomi.mipush.sdk.e valueOf(java.lang.String r1) {
            java.lang.Class<com.xiaomi.mipush.sdk.e> r0 = com.xiaomi.mipush.sdk.e.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.xiaomi.mipush.sdk.e r1 = (com.xiaomi.mipush.sdk.e) r1
            return r1
    }

    public static com.xiaomi.mipush.sdk.e[] values() {
            com.xiaomi.mipush.sdk.e[] r0 = com.xiaomi.mipush.sdk.e.a
            java.lang.Object r0 = r0.clone()
            com.xiaomi.mipush.sdk.e[] r0 = (com.xiaomi.mipush.sdk.e[]) r0
            return r0
    }
}
