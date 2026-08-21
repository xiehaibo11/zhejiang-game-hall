package com.xiaomi.push;

public final class eu {
    private static int a;
    private static com.xiaomi.push.eu.a a;
    private static final java.lang.String a = null;

    interface a {
        void a();

        void a(boolean r1);

        boolean a();
    }

    static {
            java.lang.Class<com.xiaomi.push.service.XMJobService> r0 = com.xiaomi.push.service.XMJobService.class
            java.lang.String r0 = r0.getCanonicalName()
            com.xiaomi.push.eu.a = r0
            r0 = 0
            com.xiaomi.push.eu.a = r0
            return
    }

    public static synchronized void a() {
            java.lang.Class<com.xiaomi.push.eu> r0 = com.xiaomi.push.eu.class
            monitor-enter(r0)
            com.xiaomi.push.eu$a r1 = com.xiaomi.push.eu.a     // Catch: java.lang.Throwable -> L15
            if (r1 != 0) goto L9
            monitor-exit(r0)
            return
        L9:
            java.lang.String r1 = "[Alarm] stop alarm."
            com.xiaomi.channel.commonutils.logger.b.a(r1)     // Catch: java.lang.Throwable -> L15
            com.xiaomi.push.eu$a r1 = com.xiaomi.push.eu.a     // Catch: java.lang.Throwable -> L15
            r1.a()     // Catch: java.lang.Throwable -> L15
            monitor-exit(r0)
            return
        L15:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static void a(android.content.Context r9) {
            java.lang.String r0 = "android.permission.BIND_JOB_SERVICE"
            android.content.Context r9 = r9.getApplicationContext()
            java.lang.String r1 = r9.getPackageName()
            java.lang.String r2 = "com.xiaomi.xmsf"
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L1b
            com.xiaomi.push.ev r0 = new com.xiaomi.push.ev
            r0.<init>(r9)
        L17:
            com.xiaomi.push.eu.a = r0
            goto Ld3
        L1b:
            android.content.pm.PackageManager r1 = r9.getPackageManager()
            r2 = 0
            java.lang.String r3 = r9.getPackageName()     // Catch: java.lang.Exception -> L80
            r4 = 4
            android.content.pm.PackageInfo r1 = r1.getPackageInfo(r3, r4)     // Catch: java.lang.Exception -> L80
            android.content.pm.ServiceInfo[] r3 = r1.services     // Catch: java.lang.Exception -> L80
            r4 = 1
            if (r3 == 0) goto L99
            android.content.pm.ServiceInfo[] r1 = r1.services     // Catch: java.lang.Exception -> L80
            int r3 = r1.length     // Catch: java.lang.Exception -> L80
            r5 = r2
        L32:
            if (r2 >= r3) goto L7e
            r6 = r1[r2]     // Catch: java.lang.Exception -> L7b
            java.lang.String r7 = r6.permission     // Catch: java.lang.Exception -> L7b
            boolean r7 = r0.equals(r7)     // Catch: java.lang.Exception -> L7b
            if (r7 == 0) goto L64
            java.lang.String r7 = com.xiaomi.push.eu.a     // Catch: java.lang.Exception -> L7b
            java.lang.String r8 = r6.name     // Catch: java.lang.Exception -> L7b
            boolean r7 = r7.equals(r8)     // Catch: java.lang.Exception -> L7b
            if (r7 == 0) goto L4a
        L48:
            r5 = r4
            goto L61
        L4a:
            java.lang.String r7 = r6.name     // Catch: java.lang.Exception -> L61
            java.lang.Class r7 = com.xiaomi.push.v.a(r9, r7)     // Catch: java.lang.Exception -> L61
            java.lang.String r8 = com.xiaomi.push.eu.a     // Catch: java.lang.Exception -> L61
            java.lang.Class r7 = r7.getSuperclass()     // Catch: java.lang.Exception -> L61
            java.lang.String r7 = r7.getCanonicalName()     // Catch: java.lang.Exception -> L61
            boolean r7 = r8.equals(r7)     // Catch: java.lang.Exception -> L61
            if (r7 == 0) goto L61
            goto L48
        L61:
            if (r5 != r4) goto L64
            goto L7e
        L64:
            java.lang.String r7 = com.xiaomi.push.eu.a     // Catch: java.lang.Exception -> L7b
            java.lang.String r8 = r6.name     // Catch: java.lang.Exception -> L7b
            boolean r7 = r7.equals(r8)     // Catch: java.lang.Exception -> L7b
            if (r7 == 0) goto L78
            java.lang.String r6 = r6.permission     // Catch: java.lang.Exception -> L7b
            boolean r6 = r0.equals(r6)     // Catch: java.lang.Exception -> L7b
            if (r6 == 0) goto L78
            r2 = r4
            goto L99
        L78:
            int r2 = r2 + 1
            goto L32
        L7b:
            r1 = move-exception
            r2 = r5
            goto L81
        L7e:
            r2 = r5
            goto L99
        L80:
            r1 = move-exception
        L81:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "check service err : "
            r3.append(r4)
            java.lang.String r1 = r1.getMessage()
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r1)
        L99:
            if (r2 != 0) goto Lc8
            boolean r1 = com.xiaomi.push.v.a(r9)
            if (r1 != 0) goto La2
            goto Lc8
        La2:
            java.lang.RuntimeException r9 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Should export service: "
            r1.append(r2)
            java.lang.String r2 = com.xiaomi.push.eu.a
            r1.append(r2)
            java.lang.String r2 = " with permission "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = " in AndroidManifest.xml file"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r9.<init>(r0)
            throw r9
        Lc8:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            com.xiaomi.push.ev r0 = new com.xiaomi.push.ev
            r0.<init>(r9)
            goto L17
        Ld3:
            return
    }

    public static synchronized void a(android.content.Context r4, int r5) {
            java.lang.Class<com.xiaomi.push.eu> r0 = com.xiaomi.push.eu.class
            monitor-enter(r0)
            int r1 = com.xiaomi.push.eu.a     // Catch: java.lang.Throwable -> L2e
            java.lang.String r2 = "com.xiaomi.xmsf"
            java.lang.String r3 = r4.getPackageName()     // Catch: java.lang.Throwable -> L2e
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Throwable -> L2e
            r3 = 2
            if (r2 != 0) goto L1a
            if (r5 != r3) goto L17
            com.xiaomi.push.eu.a = r3     // Catch: java.lang.Throwable -> L2e
            goto L1a
        L17:
            r5 = 0
            com.xiaomi.push.eu.a = r5     // Catch: java.lang.Throwable -> L2e
        L1a:
            int r5 = com.xiaomi.push.eu.a     // Catch: java.lang.Throwable -> L2e
            if (r1 == r5) goto L2c
            int r5 = com.xiaomi.push.eu.a     // Catch: java.lang.Throwable -> L2e
            if (r5 != r3) goto L2c
            a()     // Catch: java.lang.Throwable -> L2e
            com.xiaomi.push.ex r5 = new com.xiaomi.push.ex     // Catch: java.lang.Throwable -> L2e
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L2e
            com.xiaomi.push.eu.a = r5     // Catch: java.lang.Throwable -> L2e
        L2c:
            monitor-exit(r0)
            return
        L2e:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    public static synchronized void a(boolean r3) {
            java.lang.Class<com.xiaomi.push.eu> r0 = com.xiaomi.push.eu.class
            monitor-enter(r0)
            com.xiaomi.push.eu$a r1 = com.xiaomi.push.eu.a     // Catch: java.lang.Throwable -> L2e
            if (r1 != 0) goto Le
            java.lang.String r3 = "timer is not initialized"
            com.xiaomi.channel.commonutils.logger.b.a(r3)     // Catch: java.lang.Throwable -> L2e
            monitor-exit(r0)
            return
        Le:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2e
            r1.<init>()     // Catch: java.lang.Throwable -> L2e
            java.lang.String r2 = "[Alarm] register alarm. ("
            r1.append(r2)     // Catch: java.lang.Throwable -> L2e
            r1.append(r3)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r2 = ")"
            r1.append(r2)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L2e
            com.xiaomi.channel.commonutils.logger.b.a(r1)     // Catch: java.lang.Throwable -> L2e
            com.xiaomi.push.eu$a r1 = com.xiaomi.push.eu.a     // Catch: java.lang.Throwable -> L2e
            r1.a(r3)     // Catch: java.lang.Throwable -> L2e
            monitor-exit(r0)
            return
        L2e:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static synchronized boolean a() {
            java.lang.Class<com.xiaomi.push.eu> r0 = com.xiaomi.push.eu.class
            monitor-enter(r0)
            com.xiaomi.push.eu$a r1 = com.xiaomi.push.eu.a     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto La
            r1 = 0
            monitor-exit(r0)
            return r1
        La:
            com.xiaomi.push.eu$a r1 = com.xiaomi.push.eu.a     // Catch: java.lang.Throwable -> L12
            boolean r1 = r1.a()     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }
}
