package com.huawei.updatesdk.a.b.c;

public class a {
    private static final java.util.Map<java.lang.String, java.lang.Class> a = null;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.huawei.updatesdk.a.b.c.a.a = r0
            java.lang.Class<com.huawei.updatesdk.service.appmgr.bean.e> r1 = com.huawei.updatesdk.service.appmgr.bean.e.class
            java.lang.String r2 = "client.updateCheck"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Class> r0 = com.huawei.updatesdk.a.b.c.a.a
            java.lang.Class<com.huawei.updatesdk.service.appmgr.bean.b> r1 = com.huawei.updatesdk.service.appmgr.bean.b.class
            java.lang.String r2 = "client.getMarketInfo"
            r0.put(r2, r1)
            return
    }

    public static com.huawei.updatesdk.a.b.c.c.d a(java.lang.String r3) {
            java.util.Map<java.lang.String, java.lang.Class> r0 = com.huawei.updatesdk.a.b.c.a.a
            java.lang.Object r0 = r0.get(r3)
            java.lang.Class r0 = (java.lang.Class) r0
            if (r0 == 0) goto L11
            java.lang.Object r3 = r0.newInstance()
            com.huawei.updatesdk.a.b.c.c.d r3 = (com.huawei.updatesdk.a.b.c.c.d) r3
            return r3
        L11:
            java.lang.InstantiationException r0 = new java.lang.InstantiationException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "ResponseBean class not found, method:"
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }
}
