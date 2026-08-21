package com.vivo.push.util;

public final class z {
    private static java.lang.String[] a;
    private static java.lang.String[] b;
    private static java.lang.String[] c;
    private static java.lang.String[] d;
    private static java.lang.String[] e;
    private static java.util.Map<java.lang.String, android.os.Bundle> f;

    static {
            java.lang.String r0 = "com.vivo.push.sdk.service.CommonJobService"
            java.lang.String r1 = "com.vivo.push.sdk.RegistrationReceiver"
            java.lang.String r2 = "com.vivo.push.sdk.service.PushService"
            java.lang.String[] r2 = new java.lang.String[]{r1, r2, r0}
            com.vivo.push.util.z.a = r2
            java.lang.String r3 = "android.permission.INTERNET"
            java.lang.String r4 = "android.permission.READ_PHONE_STATE"
            java.lang.String r5 = "android.permission.ACCESS_NETWORK_STATE"
            java.lang.String r6 = "android.permission.WRITE_SETTINGS"
            java.lang.String r7 = "android.permission.VIBRATE"
            java.lang.String r8 = "android.permission.WRITE_EXTERNAL_STORAGE"
            java.lang.String r9 = "android.permission.ACCESS_WIFI_STATE"
            java.lang.String r10 = "android.permission.WAKE_LOCK"
            java.lang.String r11 = "android.permission.GET_ACCOUNTS"
            java.lang.String r12 = "com.bbk.account.permission.READ_ACCOUNTINFO"
            java.lang.String r13 = "android.permission.AUTHENTICATE_ACCOUNTS"
            java.lang.String r14 = "android.permission.MOUNT_UNMOUNT_FILESYSTEMS"
            java.lang.String r15 = "android.permission.GET_TASKS"
            java.lang.String[] r2 = new java.lang.String[]{r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15}
            com.vivo.push.util.z.b = r2
            java.lang.String r2 = "com.vivo.push.sdk.service.CommandService"
            java.lang.String[] r0 = new java.lang.String[]{r2, r0}
            com.vivo.push.util.z.c = r0
            java.lang.String[] r0 = new java.lang.String[]{r1}
            com.vivo.push.util.z.d = r0
            r0 = 0
            java.lang.String[] r0 = new java.lang.String[r0]
            com.vivo.push.util.z.e = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.vivo.push.util.z.f = r0
            return
    }

    public static long a(android.content.Context r2) {
            java.lang.String r0 = com.vivo.push.util.t.b(r2)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L14
            java.lang.String r2 = "Utility"
            java.lang.String r0 = "systemPushPkgName is null"
            com.vivo.push.util.p.a(r2, r0)
            r0 = -1
            return r0
        L14:
            long r0 = a(r2, r0)
            return r0
    }

    public static long a(android.content.Context r3, java.lang.String r4) {
            java.lang.String r0 = "com.vivo.push.sdk_version"
            java.lang.Object r0 = a(r3, r4, r0)
            if (r0 != 0) goto Le
            java.lang.String r0 = "sdk_version"
            java.lang.Object r0 = a(r3, r4, r0)
        Le:
            r3 = -1
            java.lang.String r1 = "Utility"
            if (r0 == 0) goto L27
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L1d
            long r3 = java.lang.Long.parseLong(r0)     // Catch: java.lang.Exception -> L1d
            return r3
        L1d:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r2 = "getSdkVersionCode error "
            com.vivo.push.util.p.a(r1, r2, r0)
            return r3
        L27:
            java.lang.String r0 = "getSdkVersionCode sdk version is null"
            com.vivo.push.util.p.a(r1, r0)
            return r3
    }

    public static java.lang.Object a(android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            r0 = 0
            if (r3 == 0) goto L6a
            if (r5 == 0) goto L6a
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 == 0) goto Lc
            goto L6a
        Lc:
            java.util.Map<java.lang.String, android.os.Bundle> r1 = com.vivo.push.util.z.f     // Catch: java.lang.Exception -> L58
            if (r1 == 0) goto L27
            java.util.Map<java.lang.String, android.os.Bundle> r1 = com.vivo.push.util.z.f     // Catch: java.lang.Exception -> L58
            int r1 = r1.size()     // Catch: java.lang.Exception -> L58
            if (r1 <= 0) goto L27
            java.util.Map<java.lang.String, android.os.Bundle> r1 = com.vivo.push.util.z.f     // Catch: java.lang.Exception -> L58
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Exception -> L58
            android.os.Bundle r1 = (android.os.Bundle) r1     // Catch: java.lang.Exception -> L58
            if (r1 == 0) goto L27
            java.lang.Object r1 = r1.get(r5)     // Catch: java.lang.Exception -> L58
            goto L28
        L27:
            r1 = r0
        L28:
            if (r1 == 0) goto L2b
            return r1
        L2b:
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: java.lang.Exception -> L55
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r3 = r3.getApplicationInfo(r4, r2)     // Catch: java.lang.Exception -> L55
            if (r3 == 0) goto L39
            android.os.Bundle r0 = r3.metaData     // Catch: java.lang.Exception -> L55
        L39:
            if (r0 == 0) goto L40
            java.lang.Object r3 = r0.get(r5)     // Catch: java.lang.Exception -> L55
            goto L41
        L40:
            r3 = r1
        L41:
            java.util.Map<java.lang.String, android.os.Bundle> r5 = com.vivo.push.util.z.f     // Catch: java.lang.Exception -> L51
            int r5 = r5.size()     // Catch: java.lang.Exception -> L51
            r1 = 300(0x12c, float:4.2E-43)
            if (r5 > r1) goto L69
            java.util.Map<java.lang.String, android.os.Bundle> r5 = com.vivo.push.util.z.f     // Catch: java.lang.Exception -> L51
            r5.put(r4, r0)     // Catch: java.lang.Exception -> L51
            goto L69
        L51:
            r4 = move-exception
            r0 = r3
            r3 = r4
            goto L59
        L55:
            r3 = move-exception
            r0 = r1
            goto L59
        L58:
            r3 = move-exception
        L59:
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r4 = "getMetaValue::"
            java.lang.String r3 = r4.concat(r3)
            java.lang.String r4 = "Utility"
            com.vivo.push.util.p.a(r4, r3)
            r3 = r0
        L69:
            return r3
        L6a:
            return r0
    }

    public static java.lang.Object a(java.lang.String r0, java.lang.String r1) {
            java.lang.Class r0 = java.lang.Class.forName(r0)
            java.lang.reflect.Field r1 = r0.getField(r1)
            java.lang.Object r0 = r1.get(r0)
            return r0
    }

    public static void a(android.content.Context r5, android.content.Intent r6) {
            java.lang.String r0 = com.vivo.push.util.t.b(r5)
            java.lang.String r1 = "client_pkgname"
            java.lang.String r1 = r6.getStringExtra(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r3 = "Utility"
            if (r2 == 0) goto L18
            java.lang.String r5 = "illegality abe adapter : push pkg is null"
            com.vivo.push.util.p.a(r3, r5)
            return
        L18:
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L24
            java.lang.String r5 = "illegality abe adapter : src pkg is null"
            com.vivo.push.util.p.a(r3, r5)
            return
        L24:
            java.lang.String r2 = r5.getPackageName()
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L34
            java.lang.String r5 = "illegality abe adapter : abe is not pushservice"
            com.vivo.push.util.p.a(r3, r5)
            return
        L34:
            boolean r2 = r0.equals(r1)
            if (r2 != 0) goto L6b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r4 = "proxy to core : intent pkg : "
            r2.<init>(r4)
            java.lang.String r4 = r6.getPackage()
            r2.append(r4)
            java.lang.String r4 = " ; src pkg : "
            r2.append(r4)
            r2.append(r1)
            java.lang.String r1 = " ; push pkg : "
            r2.append(r1)
            r2.append(r0)
            java.lang.String r1 = r2.toString()
            com.vivo.push.util.p.d(r3, r1)
            r6.setPackage(r0)
            java.lang.String r1 = "com.vivo.push.sdk.service.PushService"
            r6.setClassName(r0, r1)
            r5.startService(r6)
            return
        L6b:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r6 = "illegality abe adapter : pushPkg = "
            r5.<init>(r6)
            r5.append(r0)
            java.lang.String r6 = " ; srcPkg = "
            r5.append(r6)
            r5.append(r1)
            java.lang.String r5 = r5.toString()
            com.vivo.push.util.p.a(r3, r5)
            return
    }

    private static void a(android.content.Context r3, java.lang.String r4, java.lang.String r5, boolean r6) {
            android.content.Intent r0 = new android.content.Intent
            r0.<init>(r4)
            java.lang.String r4 = r3.getPackageName()
            r0.setPackage(r4)
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: java.lang.Exception -> Le9
            if (r3 == 0) goto Le1
            java.lang.String r4 = " is missing"
            java.lang.String r1 = "checkModule "
            r2 = 576(0x240, float:8.07E-43)
            if (r6 == 0) goto L6d
            java.util.List r3 = r3.queryBroadcastReceivers(r0, r2)     // Catch: java.lang.Exception -> Le9
            if (r3 == 0) goto L56
            int r6 = r3.size()     // Catch: java.lang.Exception -> Le9
            if (r6 <= 0) goto L56
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Exception -> Le9
        L2a:
            boolean r6 = r3.hasNext()     // Catch: java.lang.Exception -> Le9
            if (r6 == 0) goto L41
            java.lang.Object r6 = r3.next()     // Catch: java.lang.Exception -> Le9
            android.content.pm.ResolveInfo r6 = (android.content.pm.ResolveInfo) r6     // Catch: java.lang.Exception -> Le9
            android.content.pm.ActivityInfo r6 = r6.activityInfo     // Catch: java.lang.Exception -> Le9
            java.lang.String r6 = r6.name     // Catch: java.lang.Exception -> Le9
            boolean r6 = r5.equals(r6)     // Catch: java.lang.Exception -> Le9
            if (r6 == 0) goto L2a
            return
        L41:
            com.vivo.push.util.VivoPushException r3 = new com.vivo.push.util.VivoPushException     // Catch: java.lang.Exception -> Le9
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le9
            r6.<init>()     // Catch: java.lang.Exception -> Le9
            r6.append(r5)     // Catch: java.lang.Exception -> Le9
            r6.append(r4)     // Catch: java.lang.Exception -> Le9
            java.lang.String r4 = r6.toString()     // Catch: java.lang.Exception -> Le9
            r3.<init>(r4)     // Catch: java.lang.Exception -> Le9
            throw r3     // Catch: java.lang.Exception -> Le9
        L56:
            com.vivo.push.util.VivoPushException r3 = new com.vivo.push.util.VivoPushException     // Catch: java.lang.Exception -> Le9
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le9
            r4.<init>(r1)     // Catch: java.lang.Exception -> Le9
            r4.append(r0)     // Catch: java.lang.Exception -> Le9
            java.lang.String r5 = " has no receivers"
            r4.append(r5)     // Catch: java.lang.Exception -> Le9
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> Le9
            r3.<init>(r4)     // Catch: java.lang.Exception -> Le9
            throw r3     // Catch: java.lang.Exception -> Le9
        L6d:
            java.util.List r3 = r3.queryIntentServices(r0, r2)     // Catch: java.lang.Exception -> Le9
            if (r3 == 0) goto Lca
            int r6 = r3.size()     // Catch: java.lang.Exception -> Le9
            if (r6 <= 0) goto Lca
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Exception -> Le9
        L7d:
            boolean r6 = r3.hasNext()     // Catch: java.lang.Exception -> Le9
            if (r6 == 0) goto Lb5
            java.lang.Object r6 = r3.next()     // Catch: java.lang.Exception -> Le9
            android.content.pm.ResolveInfo r6 = (android.content.pm.ResolveInfo) r6     // Catch: java.lang.Exception -> Le9
            android.content.pm.ServiceInfo r0 = r6.serviceInfo     // Catch: java.lang.Exception -> Le9
            java.lang.String r0 = r0.name     // Catch: java.lang.Exception -> Le9
            boolean r0 = r5.equals(r0)     // Catch: java.lang.Exception -> Le9
            if (r0 == 0) goto L7d
            android.content.pm.ServiceInfo r3 = r6.serviceInfo     // Catch: java.lang.Exception -> Le9
            boolean r3 = r3.exported     // Catch: java.lang.Exception -> Le9
            if (r3 == 0) goto L9a
            return
        L9a:
            com.vivo.push.util.VivoPushException r3 = new com.vivo.push.util.VivoPushException     // Catch: java.lang.Exception -> Le9
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le9
            r4.<init>()     // Catch: java.lang.Exception -> Le9
            android.content.pm.ServiceInfo r5 = r6.serviceInfo     // Catch: java.lang.Exception -> Le9
            java.lang.String r5 = r5.name     // Catch: java.lang.Exception -> Le9
            r4.append(r5)     // Catch: java.lang.Exception -> Le9
            java.lang.String r5 = " exported is false"
            r4.append(r5)     // Catch: java.lang.Exception -> Le9
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> Le9
            r3.<init>(r4)     // Catch: java.lang.Exception -> Le9
            throw r3     // Catch: java.lang.Exception -> Le9
        Lb5:
            com.vivo.push.util.VivoPushException r3 = new com.vivo.push.util.VivoPushException     // Catch: java.lang.Exception -> Le9
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le9
            r6.<init>()     // Catch: java.lang.Exception -> Le9
            r6.append(r5)     // Catch: java.lang.Exception -> Le9
            r6.append(r4)     // Catch: java.lang.Exception -> Le9
            java.lang.String r4 = r6.toString()     // Catch: java.lang.Exception -> Le9
            r3.<init>(r4)     // Catch: java.lang.Exception -> Le9
            throw r3     // Catch: java.lang.Exception -> Le9
        Lca:
            com.vivo.push.util.VivoPushException r3 = new com.vivo.push.util.VivoPushException     // Catch: java.lang.Exception -> Le9
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le9
            r4.<init>(r1)     // Catch: java.lang.Exception -> Le9
            r4.append(r0)     // Catch: java.lang.Exception -> Le9
            java.lang.String r5 = " has no services"
            r4.append(r5)     // Catch: java.lang.Exception -> Le9
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> Le9
            r3.<init>(r4)     // Catch: java.lang.Exception -> Le9
            throw r3     // Catch: java.lang.Exception -> Le9
        Le1:
            com.vivo.push.util.VivoPushException r3 = new com.vivo.push.util.VivoPushException     // Catch: java.lang.Exception -> Le9
            java.lang.String r4 = "localPackageManager is null"
            r3.<init>(r4)     // Catch: java.lang.Exception -> Le9
            throw r3     // Catch: java.lang.Exception -> Le9
        Le9:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "error  "
            r4.<init>(r5)
            java.lang.String r5 = r3.getMessage()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "Utility"
            com.vivo.push.util.p.a(r5, r4)
            com.vivo.push.util.VivoPushException r4 = new com.vivo.push.util.VivoPushException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r6 = "checkModule error"
            r5.<init>(r6)
            java.lang.String r3 = r3.getMessage()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.<init>(r3)
            throw r4
    }

    private static void a(android.content.pm.ComponentInfo r4, java.lang.String r5) {
            android.content.pm.ApplicationInfo r0 = r4.applicationInfo
            java.lang.String r0 = r0.packageName
            boolean r5 = r0.equals(r5)
            if (r5 == 0) goto Lb
            return
        Lb:
            java.lang.String[] r5 = com.vivo.push.util.z.a
            int r0 = r5.length
            r1 = 0
        Lf:
            if (r1 >= r0) goto L4e
            r2 = r5[r1]
            java.lang.String r3 = r4.name
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L4b
            java.lang.String r2 = r4.processName
            java.lang.String r3 = ":pushservice"
            boolean r2 = r2.contains(r3)
            if (r2 == 0) goto L26
            goto L4b
        L26:
            com.vivo.push.util.VivoPushException r5 = new com.vivo.push.util.VivoPushException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "module : "
            r0.<init>(r1)
            java.lang.String r1 = r4.name
            r0.append(r1)
            java.lang.String r1 = " process :"
            r0.append(r1)
            java.lang.String r4 = r4.processName
            r0.append(r4)
            java.lang.String r4 = "  check process fail"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r5.<init>(r4)
            throw r5
        L4b:
            int r1 = r1 + 1
            goto Lf
        L4e:
            return
    }

    private static void a(java.lang.String r4, android.content.pm.ComponentInfo[] r5, java.lang.String r6) {
            int r0 = r5.length
            r1 = 0
        L2:
            if (r1 >= r0) goto L32
            r2 = r5[r1]
            java.lang.String r3 = r2.name
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto L2f
            boolean r4 = r2.enabled
            if (r4 == 0) goto L16
            a(r2, r6)
            return
        L16:
            com.vivo.push.util.VivoPushException r4 = new com.vivo.push.util.VivoPushException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = r2.name
            r5.append(r6)
            java.lang.String r6 = " module Push-SDK need is illegitmacy !"
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r4.<init>(r5)
            throw r4
        L2f:
            int r1 = r1 + 1
            goto L2
        L32:
            com.vivo.push.util.VivoPushException r5 = new com.vivo.push.util.VivoPushException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r4)
            java.lang.String r4 = " module Push-SDK need is not exist"
            r6.append(r4)
            java.lang.String r4 = r6.toString()
            r5.<init>(r4)
            throw r5
    }

    public static java.lang.String b(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "com.vivo.push.app_id"
            java.lang.Object r0 = a(r1, r2, r0)
            if (r0 == 0) goto Ld
            java.lang.String r1 = r0.toString()
            return r1
        Ld:
            java.lang.String r0 = "app_id"
            java.lang.Object r1 = a(r1, r2, r0)
            if (r1 == 0) goto L1a
            java.lang.String r1 = r1.toString()
            return r1
        L1a:
            java.lang.String r1 = ""
            return r1
    }

    public static java.lang.String b(java.lang.String r6, java.lang.String r7) {
            java.lang.String r0 = "android.os.SystemProperties"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L20
            java.lang.String r1 = "get"
            r2 = 1
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L20
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Exception -> L20
            java.lang.reflect.Method r0 = r0.getMethod(r1, r3)     // Catch: java.lang.Exception -> L20
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L20
            r2[r5] = r6     // Catch: java.lang.Exception -> L20
            java.lang.Object r6 = r0.invoke(r1, r2)     // Catch: java.lang.Exception -> L20
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Exception -> L20
            goto L25
        L20:
            r6 = move-exception
            r6.printStackTrace()
            r6 = r7
        L25:
            if (r6 == 0) goto L2f
            int r0 = r6.length()
            if (r0 != 0) goto L2e
            goto L2f
        L2e:
            r7 = r6
        L2f:
            return r7
    }

    public static void b(android.content.Context r23) {
            r0 = r23
            java.lang.String r1 = "Utility"
            java.lang.String r2 = "check PushService AndroidManifest declearation !"
            com.vivo.push.util.p.d(r1, r2)
            java.lang.String r1 = com.vivo.push.util.t.b(r23)
            java.lang.String r2 = r23.getPackageName()
            boolean r2 = com.vivo.push.util.t.d(r0, r2)
            java.lang.String r3 = r23.getPackageName()
            boolean r3 = com.vivo.push.util.t.e(r0, r3)
            java.lang.String r4 = r23.getPackageName()
            boolean r4 = com.vivo.push.util.t.c(r0, r4)
            java.lang.String r5 = "com.vivo.push.sdk.service.CommandService"
            java.lang.String r6 = "com.vivo.push.sdk.service.PushService"
            java.lang.String r7 = "com.vivo.push.sdk.RegistrationReceiver"
            r8 = 0
            if (r3 == 0) goto L63
            java.lang.String r4 = "com.vivo.push.sdk.service.CommonJobService"
            java.lang.String[] r9 = new java.lang.String[]{r7, r6, r4}
            com.vivo.push.util.z.a = r9
            java.lang.String r10 = "android.permission.INTERNET"
            java.lang.String r11 = "android.permission.READ_PHONE_STATE"
            java.lang.String r12 = "android.permission.ACCESS_NETWORK_STATE"
            java.lang.String r13 = "android.permission.WRITE_SETTINGS"
            java.lang.String r14 = "android.permission.VIBRATE"
            java.lang.String r15 = "android.permission.WRITE_EXTERNAL_STORAGE"
            java.lang.String r16 = "android.permission.ACCESS_WIFI_STATE"
            java.lang.String r17 = "android.permission.WAKE_LOCK"
            java.lang.String r18 = "android.permission.GET_ACCOUNTS"
            java.lang.String r19 = "com.bbk.account.permission.READ_ACCOUNTINFO"
            java.lang.String r20 = "android.permission.AUTHENTICATE_ACCOUNTS"
            java.lang.String r21 = "android.permission.MOUNT_UNMOUNT_FILESYSTEMS"
            java.lang.String r22 = "android.permission.GET_TASKS"
            java.lang.String[] r9 = new java.lang.String[]{r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22}
            com.vivo.push.util.z.b = r9
            java.lang.String[] r4 = new java.lang.String[]{r5, r4}
            com.vivo.push.util.z.c = r4
            java.lang.String[] r4 = new java.lang.String[]{r7}
            com.vivo.push.util.z.d = r4
            goto L9c
        L63:
            if (r4 != 0) goto L70
            if (r2 == 0) goto L68
            goto L70
        L68:
            com.vivo.push.util.VivoPushException r0 = new com.vivo.push.util.VivoPushException
            java.lang.String r1 = "AndroidManifest.xml中receiver配置项错误，详见接入文档"
            r0.<init>(r1)
            throw r0
        L70:
            if (r4 == 0) goto L7b
            java.lang.String r4 = "com.vivo.push.sdk.service.CommandClientService"
            java.lang.String[] r4 = new java.lang.String[]{r4}
            com.vivo.push.util.z.c = r4
            goto L81
        L7b:
            java.lang.String[] r4 = new java.lang.String[]{r5}
            com.vivo.push.util.z.c = r4
        L81:
            java.lang.String[] r4 = new java.lang.String[r8]
            com.vivo.push.util.z.d = r4
            java.lang.String[] r4 = new java.lang.String[r8]
            com.vivo.push.util.z.a = r4
            java.lang.String r4 = "android.permission.INTERNET"
            if (r2 == 0) goto L96
            java.lang.String r5 = "android.permission.WRITE_SETTINGS"
            java.lang.String[] r4 = new java.lang.String[]{r4, r5}
            com.vivo.push.util.z.b = r4
            goto L9c
        L96:
            java.lang.String[] r4 = new java.lang.String[]{r4}
            com.vivo.push.util.z.b = r4
        L9c:
            android.content.pm.PackageManager r4 = r23.getPackageManager()     // Catch: java.lang.Exception -> L1a0
            if (r4 == 0) goto L198
            java.lang.String r5 = r23.getPackageName()     // Catch: java.lang.Exception -> L1a0
            r9 = 4096(0x1000, float:5.74E-42)
            android.content.pm.PackageInfo r4 = r4.getPackageInfo(r5, r9)     // Catch: java.lang.Exception -> L1a0
            java.lang.String[] r4 = r4.requestedPermissions     // Catch: java.lang.Exception -> L1a0
            if (r4 == 0) goto L190
            java.lang.String[] r5 = com.vivo.push.util.z.b     // Catch: java.lang.Exception -> L1a0
            int r9 = r5.length     // Catch: java.lang.Exception -> L1a0
            r10 = r8
        Lb4:
            if (r10 >= r9) goto Lea
            r11 = r5[r10]     // Catch: java.lang.Exception -> L1a0
            int r12 = r4.length     // Catch: java.lang.Exception -> L1a0
            r13 = r8
        Lba:
            if (r13 >= r12) goto Lca
            r14 = r4[r13]     // Catch: java.lang.Exception -> L1a0
            boolean r14 = r11.equals(r14)     // Catch: java.lang.Exception -> L1a0
            if (r14 != 0) goto Lc7
            int r13 = r13 + 1
            goto Lba
        Lc7:
            int r10 = r10 + 1
            goto Lb4
        Lca:
            com.vivo.push.util.VivoPushException r0 = new com.vivo.push.util.VivoPushException     // Catch: java.lang.Exception -> L1a0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1a0
            java.lang.String r2 = "permission : "
            r1.<init>(r2)     // Catch: java.lang.Exception -> L1a0
            r1.append(r11)     // Catch: java.lang.Exception -> L1a0
            java.lang.String r2 = "  check fail : "
            r1.append(r2)     // Catch: java.lang.Exception -> L1a0
            java.lang.String r2 = java.util.Arrays.toString(r4)     // Catch: java.lang.Exception -> L1a0
            r1.append(r2)     // Catch: java.lang.Exception -> L1a0
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L1a0
            r0.<init>(r1)     // Catch: java.lang.Exception -> L1a0
            throw r0     // Catch: java.lang.Exception -> L1a0
        Lea:
            f(r0, r1)
            d(r0, r1)
            e(r0, r1)
            java.lang.String r1 = "local_iv"
            java.lang.String r4 = r23.getPackageName()     // Catch: java.lang.Exception -> L177
            java.lang.Object r4 = a(r0, r4, r1)     // Catch: java.lang.Exception -> L177
            if (r4 == 0) goto L16b
            java.lang.String r1 = r23.getPackageName()
            java.lang.String r4 = "com.vivo.push.api_key"
            java.lang.Object r4 = a(r0, r1, r4)
            if (r4 == 0) goto L110
            java.lang.String r1 = r4.toString()
            goto L11f
        L110:
            java.lang.String r4 = "api_key"
            java.lang.Object r1 = a(r0, r1, r4)
            if (r1 == 0) goto L11d
            java.lang.String r1 = r1.toString()
            goto L11f
        L11d:
            java.lang.String r1 = ""
        L11f:
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L163
            java.lang.String r1 = r23.getPackageName()
            java.lang.String r1 = b(r0, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L15b
            if (r2 != 0) goto L137
            if (r3 == 0) goto L145
        L137:
            java.lang.String r1 = r23.getPackageName()
            long r1 = a(r0, r1)
            r4 = -1
            int r1 = (r1 > r4 ? 1 : (r1 == r4 ? 0 : -1))
            if (r1 == 0) goto L153
        L145:
            if (r3 == 0) goto L152
            r1 = 1
            java.lang.String r2 = "com.vivo.pushservice.action.METHOD"
            a(r0, r2, r7, r1)
            java.lang.String r1 = "com.vivo.pushservice.action.PUSH_SERVICE"
            a(r0, r1, r6, r8)
        L152:
            return
        L153:
            com.vivo.push.util.VivoPushException r0 = new com.vivo.push.util.VivoPushException
            java.lang.String r1 = "sdkversion is null"
            r0.<init>(r1)
            throw r0
        L15b:
            com.vivo.push.util.VivoPushException r0 = new com.vivo.push.util.VivoPushException
            java.lang.String r1 = "com.vivo.push.app_id is null"
            r0.<init>(r1)
            throw r0
        L163:
            com.vivo.push.util.VivoPushException r0 = new com.vivo.push.util.VivoPushException
            java.lang.String r1 = "com.vivo.push.api_key is null"
            r0.<init>(r1)
            throw r0
        L16b:
            com.vivo.push.util.VivoPushException r0 = new com.vivo.push.util.VivoPushException
            java.lang.String r2 = "AndroidManifest.xml中未配置"
            java.lang.String r1 = r2.concat(r1)
            r0.<init>(r1)
            throw r0
        L177:
            r0 = move-exception
            com.vivo.push.util.VivoPushException r1 = new com.vivo.push.util.VivoPushException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "getMetaValue error "
            r2.<init>(r3)
            java.lang.String r0 = r0.getMessage()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
        L190:
            com.vivo.push.util.VivoPushException r0 = new com.vivo.push.util.VivoPushException     // Catch: java.lang.Exception -> L1a0
            java.lang.String r1 = "Permissions is null!"
            r0.<init>(r1)     // Catch: java.lang.Exception -> L1a0
            throw r0     // Catch: java.lang.Exception -> L1a0
        L198:
            com.vivo.push.util.VivoPushException r0 = new com.vivo.push.util.VivoPushException     // Catch: java.lang.Exception -> L1a0
            java.lang.String r1 = "localPackageManager is null"
            r0.<init>(r1)     // Catch: java.lang.Exception -> L1a0
            throw r0     // Catch: java.lang.Exception -> L1a0
        L1a0:
            r0 = move-exception
            com.vivo.push.util.VivoPushException r1 = new com.vivo.push.util.VivoPushException
            java.lang.String r0 = r0.getMessage()
            r1.<init>(r0)
            throw r1
    }

    public static boolean b(android.content.Context r10, java.lang.String r11, java.lang.String r12) {
            r0 = 0
            java.lang.String r1 = "close"
            java.lang.String r2 = "Utility"
            r3 = 0
            if (r10 != 0) goto Le
            java.lang.String r10 = "context is null"
            com.vivo.push.util.p.a(r2, r10)     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L62
            return r0
        Le:
            android.content.ContentResolver r4 = r10.getContentResolver()     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L62
            android.net.Uri r5 = com.vivo.push.p.c     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L62
            r6 = 0
            java.lang.String r7 = "appPkgName = ? and regId = ? sdkVersion = ? "
            r10 = 3
            java.lang.String[] r8 = new java.lang.String[r10]     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L62
            r8[r0] = r11     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L62
            r10 = 1
            r8[r10] = r12     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L62
            r10 = 2
            java.lang.String r11 = "323"
            r8[r10] = r11     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L62
            r9 = 0
            android.database.Cursor r3 = r4.query(r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L62
            if (r3 != 0) goto L3b
            java.lang.String r10 = "cursor is null"
            com.vivo.push.util.p.a(r2, r10)     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L62
            if (r3 == 0) goto L3a
            r3.close()     // Catch: java.lang.Exception -> L36
            goto L3a
        L36:
            r10 = move-exception
            com.vivo.push.util.p.a(r2, r1, r10)
        L3a:
            return r0
        L3b:
            boolean r10 = r3.moveToFirst()     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L62
            if (r10 == 0) goto L5a
            java.lang.String r10 = "clientState"
            int r10 = r3.getColumnIndex(r10)     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L62
            java.lang.String r10 = r3.getString(r10)     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L62
            boolean r10 = java.lang.Boolean.parseBoolean(r10)     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L62
            if (r3 == 0) goto L59
            r3.close()     // Catch: java.lang.Exception -> L55
            goto L59
        L55:
            r11 = move-exception
            com.vivo.push.util.p.a(r2, r1, r11)
        L59:
            return r10
        L5a:
            if (r3 == 0) goto L72
            r3.close()     // Catch: java.lang.Exception -> L6e
            goto L72
        L60:
            r10 = move-exception
            goto L73
        L62:
            r10 = move-exception
            java.lang.String r11 = "isOverdue"
            com.vivo.push.util.p.a(r2, r11, r10)     // Catch: java.lang.Throwable -> L60
            if (r3 == 0) goto L72
            r3.close()     // Catch: java.lang.Exception -> L6e
            goto L72
        L6e:
            r10 = move-exception
            com.vivo.push.util.p.a(r2, r1, r10)
        L72:
            return r0
        L73:
            if (r3 == 0) goto L7d
            r3.close()     // Catch: java.lang.Exception -> L79
            goto L7d
        L79:
            r11 = move-exception
            com.vivo.push.util.p.a(r2, r1, r11)
        L7d:
            throw r10
    }

    public static java.lang.String c(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "verification_status"
            java.lang.Object r1 = a(r1, r2, r0)
            if (r1 == 0) goto Ld
            java.lang.String r1 = r1.toString()
            return r1
        Ld:
            java.lang.String r1 = ""
            return r1
    }

    public static java.security.PublicKey c(android.content.Context r6) {
            android.content.ContentResolver r0 = r6.getContentResolver()
            android.net.Uri r1 = com.vivo.push.p.a
            r2 = 0
            r3 = 0
            r4 = 0
            r5 = 0
            android.database.Cursor r6 = r0.query(r1, r2, r3, r4, r5)
            r0 = 0
            if (r6 != 0) goto L12
            return r0
        L12:
            boolean r1 = r6.moveToNext()     // Catch: java.lang.Throwable -> L4f java.lang.Exception -> L51
            if (r1 == 0) goto L4b
            java.lang.String r1 = "pushkey"
            java.lang.String r2 = "name"
            int r2 = r6.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L4f java.lang.Exception -> L51
            java.lang.String r2 = r6.getString(r2)     // Catch: java.lang.Throwable -> L4f java.lang.Exception -> L51
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Throwable -> L4f java.lang.Exception -> L51
            if (r1 == 0) goto L12
            java.lang.String r1 = "value"
            int r1 = r6.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L4f java.lang.Exception -> L51
            java.lang.String r1 = r6.getString(r1)     // Catch: java.lang.Throwable -> L4f java.lang.Exception -> L51
            java.lang.String r2 = "Utility"
            java.lang.String r3 = "result key : "
            java.lang.String r4 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L4f java.lang.Exception -> L51
            java.lang.String r3 = r3.concat(r4)     // Catch: java.lang.Throwable -> L4f java.lang.Exception -> L51
            com.vivo.push.util.p.d(r2, r3)     // Catch: java.lang.Throwable -> L4f java.lang.Exception -> L51
            java.security.PublicKey r0 = com.vivo.push.util.u.a(r1)     // Catch: java.lang.Throwable -> L4f java.lang.Exception -> L51
            r6.close()     // Catch: java.lang.Exception -> L4a
        L4a:
            return r0
        L4b:
            r6.close()     // Catch: java.lang.Exception -> L56
            goto L56
        L4f:
            r0 = move-exception
            goto L57
        L51:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L4f
            goto L4b
        L56:
            return r0
        L57:
            r6.close()     // Catch: java.lang.Exception -> L5a
        L5a:
            throw r0
    }

    private static void d(android.content.Context r4, java.lang.String r5) {
            android.content.pm.PackageManager r0 = r4.getPackageManager()     // Catch: java.lang.Exception -> L36
            if (r0 == 0) goto L2e
            android.content.pm.PackageManager r0 = r4.getPackageManager()     // Catch: java.lang.Exception -> L36
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.Exception -> L36
            r1 = 4
            android.content.pm.PackageInfo r4 = r0.getPackageInfo(r4, r1)     // Catch: java.lang.Exception -> L36
            android.content.pm.ServiceInfo[] r4 = r4.services     // Catch: java.lang.Exception -> L36
            if (r4 == 0) goto L26
            java.lang.String[] r0 = com.vivo.push.util.z.c     // Catch: java.lang.Exception -> L36
            int r1 = r0.length     // Catch: java.lang.Exception -> L36
            r2 = 0
        L1b:
            if (r2 >= r1) goto L25
            r3 = r0[r2]     // Catch: java.lang.Exception -> L36
            a(r3, r4, r5)     // Catch: java.lang.Exception -> L36
            int r2 = r2 + 1
            goto L1b
        L25:
            return
        L26:
            com.vivo.push.util.VivoPushException r4 = new com.vivo.push.util.VivoPushException     // Catch: java.lang.Exception -> L36
            java.lang.String r5 = "serviceInfos is null"
            r4.<init>(r5)     // Catch: java.lang.Exception -> L36
            throw r4     // Catch: java.lang.Exception -> L36
        L2e:
            com.vivo.push.util.VivoPushException r4 = new com.vivo.push.util.VivoPushException     // Catch: java.lang.Exception -> L36
            java.lang.String r5 = "localPackageManager is null"
            r4.<init>(r5)     // Catch: java.lang.Exception -> L36
            throw r4     // Catch: java.lang.Exception -> L36
        L36:
            r4 = move-exception
            com.vivo.push.util.VivoPushException r5 = new com.vivo.push.util.VivoPushException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "error "
            r0.<init>(r1)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r5.<init>(r4)
            throw r5
    }

    public static boolean d(android.content.Context r12) {
            java.lang.String r0 = "close"
            r1 = 0
            java.lang.String r2 = "Utility"
            r3 = 0
            if (r12 != 0) goto Le
            java.lang.String r12 = "context is null"
            com.vivo.push.util.p.a(r2, r12)     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L73
            return r1
        Le:
            java.lang.String r4 = r12.getPackageName()     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L73
            android.content.pm.PackageManager r5 = r12.getPackageManager()     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L73
            android.content.pm.PackageInfo r5 = r5.getPackageInfo(r4, r1)     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L73
            int r5 = r5.versionCode     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L73
            android.content.ContentResolver r6 = r12.getContentResolver()     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L73
            android.net.Uri r7 = com.vivo.push.p.b     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L73
            r8 = 0
            java.lang.String r9 = "pushVersion = ? and appPkgName = ? and appCode = ? "
            r12 = 3
            java.lang.String[] r10 = new java.lang.String[r12]     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L73
            java.lang.String r12 = "323"
            r10[r1] = r12     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L73
            r12 = 1
            r10[r12] = r4     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L73
            r4 = 2
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L73
            r10[r4] = r5     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L73
            r11 = 0
            android.database.Cursor r3 = r6.query(r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L73
            if (r3 != 0) goto L4d
            java.lang.String r12 = "cursor is null"
            com.vivo.push.util.p.a(r2, r12)     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L73
            if (r3 == 0) goto L4c
            r3.close()     // Catch: java.lang.Exception -> L48
            goto L4c
        L48:
            r12 = move-exception
            com.vivo.push.util.p.a(r2, r0, r12)
        L4c:
            return r1
        L4d:
            boolean r4 = r3.moveToFirst()     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L73
            if (r4 == 0) goto L6b
            java.lang.String r4 = "permission"
            int r4 = r3.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L73
            int r4 = r3.getInt(r4)     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L73
            r4 = r4 & r12
            if (r4 == 0) goto L6b
            if (r3 == 0) goto L6a
            r3.close()     // Catch: java.lang.Exception -> L66
            goto L6a
        L66:
            r1 = move-exception
            com.vivo.push.util.p.a(r2, r0, r1)
        L6a:
            return r12
        L6b:
            if (r3 == 0) goto L83
            r3.close()     // Catch: java.lang.Exception -> L7f
            goto L83
        L71:
            r12 = move-exception
            goto L84
        L73:
            r12 = move-exception
            java.lang.String r4 = "isSupport"
            com.vivo.push.util.p.a(r2, r4, r12)     // Catch: java.lang.Throwable -> L71
            if (r3 == 0) goto L83
            r3.close()     // Catch: java.lang.Exception -> L7f
            goto L83
        L7f:
            r12 = move-exception
            com.vivo.push.util.p.a(r2, r0, r12)
        L83:
            return r1
        L84:
            if (r3 == 0) goto L8e
            r3.close()     // Catch: java.lang.Exception -> L8a
            goto L8e
        L8a:
            r1 = move-exception
            com.vivo.push.util.p.a(r2, r0, r1)
        L8e:
            throw r12
    }

    private static void e(android.content.Context r4, java.lang.String r5) {
            java.lang.String[] r0 = com.vivo.push.util.z.e
            int r0 = r0.length
            if (r0 > 0) goto L6
            return
        L6:
            android.content.pm.PackageManager r0 = r4.getPackageManager()     // Catch: java.lang.Exception -> L3c
            if (r0 == 0) goto L34
            android.content.pm.PackageManager r0 = r4.getPackageManager()     // Catch: java.lang.Exception -> L3c
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.Exception -> L3c
            r1 = 1
            android.content.pm.PackageInfo r4 = r0.getPackageInfo(r4, r1)     // Catch: java.lang.Exception -> L3c
            android.content.pm.ActivityInfo[] r4 = r4.activities     // Catch: java.lang.Exception -> L3c
            if (r4 == 0) goto L2c
            java.lang.String[] r0 = com.vivo.push.util.z.e     // Catch: java.lang.Exception -> L3c
            int r1 = r0.length     // Catch: java.lang.Exception -> L3c
            r2 = 0
        L21:
            if (r2 >= r1) goto L2b
            r3 = r0[r2]     // Catch: java.lang.Exception -> L3c
            a(r3, r4, r5)     // Catch: java.lang.Exception -> L3c
            int r2 = r2 + 1
            goto L21
        L2b:
            return
        L2c:
            com.vivo.push.util.VivoPushException r4 = new com.vivo.push.util.VivoPushException     // Catch: java.lang.Exception -> L3c
            java.lang.String r5 = "activityInfos is null"
            r4.<init>(r5)     // Catch: java.lang.Exception -> L3c
            throw r4     // Catch: java.lang.Exception -> L3c
        L34:
            com.vivo.push.util.VivoPushException r4 = new com.vivo.push.util.VivoPushException     // Catch: java.lang.Exception -> L3c
            java.lang.String r5 = "localPackageManager is null"
            r4.<init>(r5)     // Catch: java.lang.Exception -> L3c
            throw r4     // Catch: java.lang.Exception -> L3c
        L3c:
            r4 = move-exception
            com.vivo.push.util.VivoPushException r5 = new com.vivo.push.util.VivoPushException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "error "
            r0.<init>(r1)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r5.<init>(r4)
            throw r5
    }

    private static void f(android.content.Context r4, java.lang.String r5) {
            android.content.pm.PackageManager r0 = r4.getPackageManager()     // Catch: java.lang.Exception -> L36
            if (r0 == 0) goto L2e
            android.content.pm.PackageManager r0 = r4.getPackageManager()     // Catch: java.lang.Exception -> L36
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.Exception -> L36
            r1 = 2
            android.content.pm.PackageInfo r4 = r0.getPackageInfo(r4, r1)     // Catch: java.lang.Exception -> L36
            android.content.pm.ActivityInfo[] r4 = r4.receivers     // Catch: java.lang.Exception -> L36
            if (r4 == 0) goto L26
            java.lang.String[] r0 = com.vivo.push.util.z.d     // Catch: java.lang.Exception -> L36
            int r1 = r0.length     // Catch: java.lang.Exception -> L36
            r2 = 0
        L1b:
            if (r2 >= r1) goto L25
            r3 = r0[r2]     // Catch: java.lang.Exception -> L36
            a(r3, r4, r5)     // Catch: java.lang.Exception -> L36
            int r2 = r2 + 1
            goto L1b
        L25:
            return
        L26:
            com.vivo.push.util.VivoPushException r4 = new com.vivo.push.util.VivoPushException     // Catch: java.lang.Exception -> L36
            java.lang.String r5 = "receivers is null"
            r4.<init>(r5)     // Catch: java.lang.Exception -> L36
            throw r4     // Catch: java.lang.Exception -> L36
        L2e:
            com.vivo.push.util.VivoPushException r4 = new com.vivo.push.util.VivoPushException     // Catch: java.lang.Exception -> L36
            java.lang.String r5 = "localPackageManager is null"
            r4.<init>(r5)     // Catch: java.lang.Exception -> L36
            throw r4     // Catch: java.lang.Exception -> L36
        L36:
            r4 = move-exception
            com.vivo.push.util.VivoPushException r5 = new com.vivo.push.util.VivoPushException
            java.lang.String r4 = r4.getMessage()
            r5.<init>(r4)
            throw r5
    }
}
