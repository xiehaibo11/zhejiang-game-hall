package com.xiaomi.mipush.sdk;

public enum au extends java.lang.Enum<com.xiaomi.mipush.sdk.au> {
    public static final com.xiaomi.mipush.sdk.au a = null;
    private static final com.xiaomi.mipush.sdk.au[] a = null;
    public static final com.xiaomi.mipush.sdk.au b = null;
    public static final com.xiaomi.mipush.sdk.au c = null;
    public static final com.xiaomi.mipush.sdk.au d = null;
    public static final com.xiaomi.mipush.sdk.au e = null;
    public static final com.xiaomi.mipush.sdk.au f = null;

    static {
            com.xiaomi.mipush.sdk.au r0 = new com.xiaomi.mipush.sdk.au
            r1 = 0
            java.lang.String r2 = "DISABLE_PUSH"
            r0.<init>(r2, r1)
            com.xiaomi.mipush.sdk.au.a = r0
            com.xiaomi.mipush.sdk.au r0 = new com.xiaomi.mipush.sdk.au
            r2 = 1
            java.lang.String r3 = "ENABLE_PUSH"
            r0.<init>(r3, r2)
            com.xiaomi.mipush.sdk.au.b = r0
            com.xiaomi.mipush.sdk.au r0 = new com.xiaomi.mipush.sdk.au
            r3 = 2
            java.lang.String r4 = "UPLOAD_HUAWEI_TOKEN"
            r0.<init>(r4, r3)
            com.xiaomi.mipush.sdk.au.c = r0
            com.xiaomi.mipush.sdk.au r0 = new com.xiaomi.mipush.sdk.au
            r4 = 3
            java.lang.String r5 = "UPLOAD_FCM_TOKEN"
            r0.<init>(r5, r4)
            com.xiaomi.mipush.sdk.au.d = r0
            com.xiaomi.mipush.sdk.au r0 = new com.xiaomi.mipush.sdk.au
            r5 = 4
            java.lang.String r6 = "UPLOAD_COS_TOKEN"
            r0.<init>(r6, r5)
            com.xiaomi.mipush.sdk.au.e = r0
            com.xiaomi.mipush.sdk.au r0 = new com.xiaomi.mipush.sdk.au
            r6 = 5
            java.lang.String r7 = "UPLOAD_FTOS_TOKEN"
            r0.<init>(r7, r6)
            com.xiaomi.mipush.sdk.au.f = r0
            r7 = 6
            com.xiaomi.mipush.sdk.au[] r7 = new com.xiaomi.mipush.sdk.au[r7]
            com.xiaomi.mipush.sdk.au r8 = com.xiaomi.mipush.sdk.au.a
            r7[r1] = r8
            com.xiaomi.mipush.sdk.au r1 = com.xiaomi.mipush.sdk.au.b
            r7[r2] = r1
            com.xiaomi.mipush.sdk.au r1 = com.xiaomi.mipush.sdk.au.c
            r7[r3] = r1
            com.xiaomi.mipush.sdk.au r1 = com.xiaomi.mipush.sdk.au.d
            r7[r4] = r1
            com.xiaomi.mipush.sdk.au r1 = com.xiaomi.mipush.sdk.au.e
            r7[r5] = r1
            r7[r6] = r0
            com.xiaomi.mipush.sdk.au.a = r7
            return
    }

    au(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.xiaomi.mipush.sdk.au valueOf(java.lang.String r1) {
            java.lang.Class<com.xiaomi.mipush.sdk.au> r0 = com.xiaomi.mipush.sdk.au.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.xiaomi.mipush.sdk.au r1 = (com.xiaomi.mipush.sdk.au) r1
            return r1
    }

    public static com.xiaomi.mipush.sdk.au[] values() {
            com.xiaomi.mipush.sdk.au[] r0 = com.xiaomi.mipush.sdk.au.a
            java.lang.Object r0 = r0.clone()
            com.xiaomi.mipush.sdk.au[] r0 = (com.xiaomi.mipush.sdk.au[]) r0
            return r0
    }
}
