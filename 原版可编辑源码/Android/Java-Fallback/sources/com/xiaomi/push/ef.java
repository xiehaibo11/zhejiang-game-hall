package com.xiaomi.push;

public enum ef extends java.lang.Enum<com.xiaomi.push.ef> {
    public static final com.xiaomi.push.ef a = null;
    private static final com.xiaomi.push.ef[] a = null;
    public static final com.xiaomi.push.ef b = null;
    public static final com.xiaomi.push.ef c = null;
    public static final com.xiaomi.push.ef d = null;
    public java.lang.String a;

    static {
            com.xiaomi.push.ef r0 = new com.xiaomi.push.ef
            r1 = 0
            java.lang.String r2 = "ACTIVITY"
            java.lang.String r3 = "activity"
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.ef.a = r0
            com.xiaomi.push.ef r0 = new com.xiaomi.push.ef
            r2 = 1
            java.lang.String r3 = "SERVICE_ACTION"
            java.lang.String r4 = "service_action"
            r0.<init>(r3, r2, r4)
            com.xiaomi.push.ef.b = r0
            com.xiaomi.push.ef r0 = new com.xiaomi.push.ef
            r3 = 2
            java.lang.String r4 = "SERVICE_COMPONENT"
            java.lang.String r5 = "service_component"
            r0.<init>(r4, r3, r5)
            com.xiaomi.push.ef.c = r0
            com.xiaomi.push.ef r0 = new com.xiaomi.push.ef
            r4 = 3
            java.lang.String r5 = "PROVIDER"
            java.lang.String r6 = "provider"
            r0.<init>(r5, r4, r6)
            com.xiaomi.push.ef.d = r0
            r5 = 4
            com.xiaomi.push.ef[] r5 = new com.xiaomi.push.ef[r5]
            com.xiaomi.push.ef r6 = com.xiaomi.push.ef.a
            r5[r1] = r6
            com.xiaomi.push.ef r1 = com.xiaomi.push.ef.b
            r5[r2] = r1
            com.xiaomi.push.ef r1 = com.xiaomi.push.ef.c
            r5[r3] = r1
            r5[r4] = r0
            com.xiaomi.push.ef.a = r5
            return
    }

    ef(java.lang.String r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.a = r3
            return
    }

    public static com.xiaomi.push.ef valueOf(java.lang.String r1) {
            java.lang.Class<com.xiaomi.push.ef> r0 = com.xiaomi.push.ef.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.xiaomi.push.ef r1 = (com.xiaomi.push.ef) r1
            return r1
    }

    public static com.xiaomi.push.ef[] values() {
            com.xiaomi.push.ef[] r0 = com.xiaomi.push.ef.a
            java.lang.Object r0 = r0.clone()
            com.xiaomi.push.ef[] r0 = (com.xiaomi.push.ef[]) r0
            return r0
    }
}
