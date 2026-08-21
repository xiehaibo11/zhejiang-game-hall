package com.xiaomi.push.service;

public class l {
    public static android.content.ComponentName a(android.content.Context r2, android.content.Intent r3) {
            r0 = 0
            if (r3 == 0) goto L1d
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> L1d
            r1 = 65536(0x10000, float:9.1835E-41)
            android.content.pm.ResolveInfo r2 = r2.resolveActivity(r3, r1)     // Catch: java.lang.Exception -> L1d
            if (r2 == 0) goto L1d
            android.content.ComponentName r3 = new android.content.ComponentName     // Catch: java.lang.Exception -> L1d
            android.content.pm.ActivityInfo r1 = r2.activityInfo     // Catch: java.lang.Exception -> L1d
            java.lang.String r1 = r1.packageName     // Catch: java.lang.Exception -> L1d
            android.content.pm.ActivityInfo r2 = r2.activityInfo     // Catch: java.lang.Exception -> L1d
            java.lang.String r2 = r2.name     // Catch: java.lang.Exception -> L1d
            r3.<init>(r1, r2)     // Catch: java.lang.Exception -> L1d
            r0 = r3
        L1d:
            return r0
    }

    public static boolean a(android.content.Context r1, android.content.ComponentName r2) {
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L13
            r0.<init>()     // Catch: java.lang.Exception -> L13
            r0.setComponent(r2)     // Catch: java.lang.Exception -> L13
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Exception -> L13
            r0 = 128(0x80, float:1.8E-43)
            r1.getActivityInfo(r2, r0)     // Catch: java.lang.Exception -> L13
            r1 = 1
            return r1
        L13:
            r1 = 0
            return r1
    }

    public static boolean a(android.content.Context r6, java.lang.String r7) {
            r0 = 0
            android.content.pm.PackageManager r1 = r6.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L38
            r2 = 4
            android.content.pm.PackageInfo r7 = r1.getPackageInfo(r7, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L38
            android.content.pm.ServiceInfo[] r7 = r7.services     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L38
            if (r7 == 0) goto L4d
            int r1 = r7.length     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L38
            r2 = r0
        L10:
            if (r2 >= r1) goto L4d
            r3 = r7[r2]     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L38
            boolean r4 = r3.exported     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L38
            if (r4 == 0) goto L35
            boolean r4 = r3.enabled     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L38
            if (r4 == 0) goto L35
            java.lang.String r4 = "com.xiaomi.mipush.sdk.PushMessageHandler"
            java.lang.String r5 = r3.name     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L38
            boolean r4 = r4.equals(r5)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L38
            if (r4 == 0) goto L35
            java.lang.String r4 = r6.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L38
            java.lang.String r3 = r3.packageName     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L38
            boolean r3 = r4.equals(r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L38
            if (r3 != 0) goto L35
            r6 = 1
            r0 = r6
            goto L4d
        L35:
            int r2 = r2 + 1
            goto L10
        L38:
            r6 = move-exception
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "checkService "
            r7.append(r1)
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r6)
        L4d:
            return r0
    }

    public static boolean a(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            r0 = 0
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> L1e
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Exception -> L1e
            r1.<init>(r4)     // Catch: java.lang.Exception -> L1e
            r1.setPackage(r3)     // Catch: java.lang.Exception -> L1e
            r3 = 32
            java.util.List r2 = r2.queryIntentServices(r1, r3)     // Catch: java.lang.Exception -> L1e
            if (r2 == 0) goto L3b
            boolean r2 = r2.isEmpty()     // Catch: java.lang.Exception -> L1e
            if (r2 != 0) goto L3b
            r2 = 1
            r0 = r2
            goto L3b
        L1e:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "checkService action: "
            r3.append(r1)
            r3.append(r4)
            java.lang.String r4 = ", "
            r3.append(r4)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r2)
        L3b:
            return r0
    }

    public static boolean b(android.content.Context r3, java.lang.String r4) {
            r0 = 0
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: java.lang.Exception -> L36
            r1 = 0
            r2 = 8
            java.util.List r3 = r3.queryContentProviders(r1, r0, r2)     // Catch: java.lang.Exception -> L36
            if (r3 == 0) goto L4b
            boolean r1 = r3.isEmpty()     // Catch: java.lang.Exception -> L36
            if (r1 != 0) goto L4b
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Exception -> L36
        L18:
            boolean r1 = r3.hasNext()     // Catch: java.lang.Exception -> L36
            if (r1 == 0) goto L4b
            java.lang.Object r1 = r3.next()     // Catch: java.lang.Exception -> L36
            android.content.pm.ProviderInfo r1 = (android.content.pm.ProviderInfo) r1     // Catch: java.lang.Exception -> L36
            boolean r2 = r1.enabled     // Catch: java.lang.Exception -> L36
            if (r2 == 0) goto L18
            boolean r2 = r1.exported     // Catch: java.lang.Exception -> L36
            if (r2 == 0) goto L18
            java.lang.String r1 = r1.authority     // Catch: java.lang.Exception -> L36
            boolean r1 = r1.equals(r4)     // Catch: java.lang.Exception -> L36
            if (r1 == 0) goto L18
            r0 = 1
            goto L18
        L36:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "checkProvider "
            r4.append(r1)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r3)
        L4b:
            return r0
    }

    public static boolean b(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            r0 = 0
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> L18
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Exception -> L18
            r1.<init>(r4)     // Catch: java.lang.Exception -> L18
            r1.setPackage(r3)     // Catch: java.lang.Exception -> L18
            r3 = 65536(0x10000, float:9.1835E-41)
            android.content.pm.ResolveInfo r2 = r2.resolveActivity(r1, r3)     // Catch: java.lang.Exception -> L18
            if (r2 == 0) goto L35
            r2 = 1
            r0 = r2
            goto L35
        L18:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "checkActivity action: "
            r3.append(r1)
            r3.append(r4)
            java.lang.String r4 = ", "
            r3.append(r4)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r2)
        L35:
            return r0
    }
}
