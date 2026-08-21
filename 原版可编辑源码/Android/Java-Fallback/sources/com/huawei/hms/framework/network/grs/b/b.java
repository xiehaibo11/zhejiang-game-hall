package com.huawei.hms.framework.network.grs.b;

public class b {
    private static java.util.Map<java.lang.String, com.huawei.hms.framework.network.grs.b.b> a;
    private com.huawei.hms.framework.network.grs.b.a b;

    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 16
            r0.<init>(r1)
            com.huawei.hms.framework.network.grs.b.b.a = r0
            return
    }

    public b(android.content.Context r2, com.huawei.hms.framework.network.grs.GrsBaseInfo r3, boolean r4) {
            r1 = this;
            r1.<init>()
            r1.a(r2, r4)
            java.util.Map<java.lang.String, com.huawei.hms.framework.network.grs.b.b> r4 = com.huawei.hms.framework.network.grs.b.b.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r2.getPackageName()
            r0.append(r2)
            int r2 = r3.uniqueCode()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r4.put(r2, r1)
            return
    }

    public static com.huawei.hms.framework.network.grs.b.b a(java.lang.String r2, com.huawei.hms.framework.network.grs.GrsBaseInfo r3) {
            java.util.Map<java.lang.String, com.huawei.hms.framework.network.grs.b.b> r0 = com.huawei.hms.framework.network.grs.b.b.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            int r2 = r3.uniqueCode()
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            java.lang.Object r2 = r0.get(r2)
            com.huawei.hms.framework.network.grs.b.b r2 = (com.huawei.hms.framework.network.grs.b.b) r2
            return r2
    }

    public static void a(android.content.Context r1, com.huawei.hms.framework.network.grs.GrsBaseInfo r2) {
            java.lang.String r1 = r1.getPackageName()
            com.huawei.hms.framework.network.grs.b.b r1 = a(r1, r2)
            if (r1 == 0) goto L1a
            com.huawei.hms.framework.network.grs.local.model.a r1 = r1.a()
            if (r1 == 0) goto L1a
            java.lang.String r2 = "LocalManagerProxy"
            java.lang.String r0 = "appGrs is not null and clear services."
            com.huawei.hms.framework.common.Logger.i(r2, r0)
            r1.a()
        L1a:
            return
    }

    public com.huawei.hms.framework.network.grs.local.model.a a() {
            r1 = this;
            com.huawei.hms.framework.network.grs.b.a r0 = r1.b
            com.huawei.hms.framework.network.grs.local.model.a r0 = r0.a()
            return r0
    }

    public java.lang.String a(android.content.Context r8, com.huawei.hms.framework.network.grs.a.a r9, com.huawei.hms.framework.network.grs.GrsBaseInfo r10, java.lang.String r11, java.lang.String r12, boolean r13) {
            r7 = this;
            com.huawei.hms.framework.network.grs.b.a r0 = r7.b
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            java.lang.String r8 = r0.a(r1, r2, r3, r4, r5, r6)
            return r8
    }

    public java.util.Map<java.lang.String, java.lang.String> a(android.content.Context r7, com.huawei.hms.framework.network.grs.a.a r8, com.huawei.hms.framework.network.grs.GrsBaseInfo r9, java.lang.String r10, boolean r11) {
            r6 = this;
            com.huawei.hms.framework.network.grs.b.a r0 = r6.b
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            java.util.Map r7 = r0.a(r1, r2, r3, r4, r5)
            return r7
    }

    public void a(android.content.Context r2, boolean r3) {
            r1 = this;
            com.huawei.hms.framework.network.grs.b.d r0 = new com.huawei.hms.framework.network.grs.b.d
            r0.<init>(r2, r3)
            r1.b = r0
            boolean r0 = r0.c()
            if (r0 != 0) goto L14
            com.huawei.hms.framework.network.grs.b.c r0 = new com.huawei.hms.framework.network.grs.b.c
            r0.<init>(r2, r3)
            r1.b = r0
        L14:
            return
    }

    public void a(com.huawei.hms.framework.network.grs.GrsBaseInfo r2) {
            r1 = this;
            com.huawei.hms.framework.network.grs.b.a r0 = r1.b
            r0.a(r2)
            return
    }

    public java.util.Set<java.lang.String> b() {
            r1 = this;
            com.huawei.hms.framework.network.grs.b.a r0 = r1.b
            java.util.Set r0 = r0.b()
            return r0
    }
}
