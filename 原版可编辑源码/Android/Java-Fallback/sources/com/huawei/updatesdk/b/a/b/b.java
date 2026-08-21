package com.huawei.updatesdk.b.a.b;

public class b {
    private static com.huawei.updatesdk.b.a.b.b b;
    private final java.util.Map<java.lang.String, com.huawei.updatesdk.b.a.b.a> a;

    private b() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.a = r0
            return
    }

    public static synchronized com.huawei.updatesdk.b.a.b.b a() {
            java.lang.Class<com.huawei.updatesdk.b.a.b.b> r0 = com.huawei.updatesdk.b.a.b.b.class
            monitor-enter(r0)
            com.huawei.updatesdk.b.a.b.b r1 = com.huawei.updatesdk.b.a.b.b.b     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.huawei.updatesdk.b.a.b.b r1 = new com.huawei.updatesdk.b.a.b.b     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.huawei.updatesdk.b.a.b.b.b = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.huawei.updatesdk.b.a.b.b r1 = com.huawei.updatesdk.b.a.b.b.b     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private static void a(com.huawei.updatesdk.b.a.b.a r2) {
            com.huawei.updatesdk.b.a.b.b r0 = a()
            java.util.Map<java.lang.String, com.huawei.updatesdk.b.a.b.a> r0 = r0.a
            java.lang.String r1 = r2.c()
            r0.put(r1, r2)
            return
    }

    private static java.util.ArrayList<java.lang.String> b(android.content.pm.PackageInfo r6) {
            com.huawei.updatesdk.b.a.b.a r0 = new com.huawei.updatesdk.b.a.b.a
            r0.<init>()
            java.lang.String r1 = r6.packageName
            r0.a(r1)
            java.io.File r1 = new java.io.File
            android.content.pm.ApplicationInfo r6 = r6.applicationInfo
            java.lang.String r6 = r6.sourceDir
            r1.<init>(r6)
            boolean r6 = r1.exists()
            r2 = 0
            if (r6 != 0) goto L1b
            return r2
        L1b:
            long r3 = r1.lastModified()
            r0.a(r3)
            com.huawei.updatesdk.b.a.b.c$a r6 = com.huawei.updatesdk.b.a.b.c.a(r1)
            android.util.ArrayMap<java.lang.String, android.util.ArraySet<java.security.PublicKey>> r1 = r6.a
            if (r1 == 0) goto L96
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L96
            android.util.ArraySet<java.lang.String> r1 = r6.b
            if (r1 == 0) goto L96
            boolean r1 = r1.isEmpty()
            if (r1 == 0) goto L3b
            goto L96
        L3b:
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            android.util.ArrayMap<java.lang.String, android.util.ArraySet<java.security.PublicKey>> r2 = r6.a
            java.util.Set r2 = r2.entrySet()
            java.util.Iterator r2 = r2.iterator()
        L4a:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L87
            java.lang.Object r3 = r2.next()
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3
            java.lang.Object r4 = r3.getKey()
            java.lang.String r4 = (java.lang.String) r4
            android.util.ArraySet<java.lang.String> r5 = r6.b
            boolean r4 = r5.contains(r4)
            if (r4 != 0) goto L65
            goto L4a
        L65:
            java.lang.Object r3 = r3.getValue()
            android.util.ArraySet r3 = (android.util.ArraySet) r3
            java.util.Iterator r3 = r3.iterator()
        L6f:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L4a
            java.lang.Object r4 = r3.next()
            java.security.PublicKey r4 = (java.security.PublicKey) r4
            byte[] r4 = r4.getEncoded()
            java.lang.String r4 = com.huawei.updatesdk.a.a.d.g.a(r4)
            r1.add(r4)
            goto L6f
        L87:
            com.huawei.updatesdk.b.a.b.a$a r6 = new com.huawei.updatesdk.b.a.b.a$a
            r6.<init>()
            r6.a(r1)
            r0.a(r6)
            a(r0)
            return r1
        L96:
            a(r0)
            return r2
    }

    public java.util.List<java.lang.String> a(android.content.pm.PackageInfo r7) {
            r6 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 21
            if (r0 < r2) goto L46
            if (r7 == 0) goto L46
            android.content.pm.ApplicationInfo r0 = r7.applicationInfo
            java.lang.String r0 = r0.sourceDir
            if (r0 != 0) goto L10
            goto L46
        L10:
            java.io.File r2 = new java.io.File
            r2.<init>(r0)
            long r2 = r2.lastModified()
            com.huawei.updatesdk.b.a.b.b r0 = a()
            java.util.Map<java.lang.String, com.huawei.updatesdk.b.a.b.a> r0 = r0.a
            java.lang.String r4 = r7.packageName
            java.lang.Object r0 = r0.get(r4)
            com.huawei.updatesdk.b.a.b.a r0 = (com.huawei.updatesdk.b.a.b.a) r0
            if (r0 == 0) goto L41
            long r4 = r0.b()
            int r2 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r2 != 0) goto L41
            com.huawei.updatesdk.b.a.b.a$a r7 = r0.a()
            if (r7 != 0) goto L38
            return r1
        L38:
            com.huawei.updatesdk.b.a.b.a$a r7 = r0.a()
            java.util.List r7 = r7.a()
            return r7
        L41:
            java.util.ArrayList r7 = b(r7)
            return r7
        L46:
            return r1
    }
}
