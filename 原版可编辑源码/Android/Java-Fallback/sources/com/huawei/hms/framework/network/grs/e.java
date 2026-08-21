package com.huawei.hms.framework.network.grs;

public class e {
    private static java.util.Map<java.lang.String, com.huawei.hms.framework.network.grs.d> a;
    private static final java.lang.Object b = null;

    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 16
            r0.<init>(r1)
            com.huawei.hms.framework.network.grs.e.a = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.hms.framework.network.grs.e.b = r0
            return
    }

    public static com.huawei.hms.framework.network.grs.d a(com.huawei.hms.framework.network.grs.GrsBaseInfo r5, android.content.Context r6) {
            java.lang.Object r0 = com.huawei.hms.framework.network.grs.e.b
            monitor-enter(r0)
            int r1 = r5.uniqueCode()     // Catch: java.lang.Throwable -> L6f
            java.util.Map<java.lang.String, com.huawei.hms.framework.network.grs.d> r2 = com.huawei.hms.framework.network.grs.e.a     // Catch: java.lang.Throwable -> L6f
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6f
            r3.<init>()     // Catch: java.lang.Throwable -> L6f
            java.lang.String r4 = r6.getPackageName()     // Catch: java.lang.Throwable -> L6f
            r3.append(r4)     // Catch: java.lang.Throwable -> L6f
            r3.append(r1)     // Catch: java.lang.Throwable -> L6f
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L6f
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Throwable -> L6f
            com.huawei.hms.framework.network.grs.d r2 = (com.huawei.hms.framework.network.grs.d) r2     // Catch: java.lang.Throwable -> L6f
            if (r2 == 0) goto L50
            com.huawei.hms.framework.network.grs.d r3 = new com.huawei.hms.framework.network.grs.d     // Catch: java.lang.Throwable -> L6f
            r3.<init>(r5)     // Catch: java.lang.Throwable -> L6f
            boolean r3 = r2.a(r3)     // Catch: java.lang.Throwable -> L6f
            if (r3 == 0) goto L31
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L6f
            return r2
        L31:
            com.huawei.hms.framework.network.grs.d r2 = new com.huawei.hms.framework.network.grs.d     // Catch: java.lang.Throwable -> L6f
            r2.<init>(r6, r5)     // Catch: java.lang.Throwable -> L6f
            java.util.Map<java.lang.String, com.huawei.hms.framework.network.grs.d> r5 = com.huawei.hms.framework.network.grs.e.a     // Catch: java.lang.Throwable -> L6f
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6f
            r3.<init>()     // Catch: java.lang.Throwable -> L6f
            java.lang.String r6 = r6.getPackageName()     // Catch: java.lang.Throwable -> L6f
            r3.append(r6)     // Catch: java.lang.Throwable -> L6f
            r3.append(r1)     // Catch: java.lang.Throwable -> L6f
            java.lang.String r6 = r3.toString()     // Catch: java.lang.Throwable -> L6f
            r5.put(r6, r2)     // Catch: java.lang.Throwable -> L6f
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L6f
            return r2
        L50:
            com.huawei.hms.framework.network.grs.d r2 = new com.huawei.hms.framework.network.grs.d     // Catch: java.lang.Throwable -> L6f
            r2.<init>(r6, r5)     // Catch: java.lang.Throwable -> L6f
            java.util.Map<java.lang.String, com.huawei.hms.framework.network.grs.d> r5 = com.huawei.hms.framework.network.grs.e.a     // Catch: java.lang.Throwable -> L6f
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6f
            r3.<init>()     // Catch: java.lang.Throwable -> L6f
            java.lang.String r6 = r6.getPackageName()     // Catch: java.lang.Throwable -> L6f
            r3.append(r6)     // Catch: java.lang.Throwable -> L6f
            r3.append(r1)     // Catch: java.lang.Throwable -> L6f
            java.lang.String r6 = r3.toString()     // Catch: java.lang.Throwable -> L6f
            r5.put(r6, r2)     // Catch: java.lang.Throwable -> L6f
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L6f
            return r2
        L6f:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L6f
            throw r5
    }
}
