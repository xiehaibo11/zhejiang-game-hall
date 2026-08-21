package com.huawei.updatesdk.b.e;

public class e {
    private static final java.util.Map<java.lang.String, com.huawei.updatesdk.b.e.a> a = null;

    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.huawei.updatesdk.b.e.e.a = r0
            return
    }

    public static com.huawei.updatesdk.b.e.a a(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Lc
            com.huawei.updatesdk.b.e.c r2 = new com.huawei.updatesdk.b.e.c
            r2.<init>()
            return r2
        Lc:
            java.util.Map<java.lang.String, com.huawei.updatesdk.b.e.a> r0 = com.huawei.updatesdk.b.e.e.a
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L1d
            java.util.Map<java.lang.String, com.huawei.updatesdk.b.e.a> r0 = com.huawei.updatesdk.b.e.e.a
            java.lang.Object r2 = r0.get(r2)
            com.huawei.updatesdk.b.e.a r2 = (com.huawei.updatesdk.b.e.a) r2
            return r2
        L1d:
            java.lang.String r0 = "apptouch"
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L2d
            java.util.Map<java.lang.String, com.huawei.updatesdk.b.e.a> r0 = com.huawei.updatesdk.b.e.e.a
            com.huawei.updatesdk.b.e.b r1 = new com.huawei.updatesdk.b.e.b
            r1.<init>()
            goto L34
        L2d:
            java.util.Map<java.lang.String, com.huawei.updatesdk.b.e.a> r0 = com.huawei.updatesdk.b.e.e.a
            com.huawei.updatesdk.b.e.c r1 = new com.huawei.updatesdk.b.e.c
            r1.<init>()
        L34:
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.huawei.updatesdk.b.e.a> r0 = com.huawei.updatesdk.b.e.e.a
            java.lang.Object r2 = r0.get(r2)
            com.huawei.updatesdk.b.e.a r2 = (com.huawei.updatesdk.b.e.a) r2
            return r2
    }
}
