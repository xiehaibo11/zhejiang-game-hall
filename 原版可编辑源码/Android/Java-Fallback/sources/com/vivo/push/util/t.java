package com.vivo.push.util;

public final class t {
    private static java.lang.Boolean a;
    private static java.lang.String b;

    static {
            return
    }

    public static com.vivo.push.model.b a(android.content.Context r14) {
            android.content.Context r14 = com.vivo.push.util.ContextDelegate.getContext(r14)
            android.content.Context r14 = r14.getApplicationContext()
            com.vivo.push.model.b r0 = d(r14)
            java.lang.String r1 = "PushPackageUtils"
            if (r0 == 0) goto L1e
            java.lang.String r14 = java.lang.String.valueOf(r0)
            java.lang.String r2 = "get system push info :"
            java.lang.String r14 = r2.concat(r14)
            com.vivo.push.util.p.d(r1, r14)
            return r0
        L1e:
            java.util.List r2 = e(r14)
            java.lang.String r3 = r14.getPackageName()
            com.vivo.push.model.b r3 = f(r14, r3)
            int r4 = r2.size()
            if (r4 > 0) goto L40
            if (r3 == 0) goto L39
            boolean r2 = r3.d()
            if (r2 == 0) goto L39
            r0 = r3
        L39:
            java.lang.String r2 = "findAllPushPackages error: find no package!"
            com.vivo.push.util.p.a(r1, r2)
            goto L10c
        L40:
            com.vivo.push.util.y r0 = com.vivo.push.util.y.b(r14)
            r4 = 0
            java.lang.String r5 = "com.vivo.push.cur_pkg"
            java.lang.String r0 = r0.a(r5, r4)
            boolean r5 = android.text.TextUtils.isEmpty(r0)
            if (r5 != 0) goto L66
            java.lang.String r5 = "com.vivo.pushservice.action.METHOD"
            boolean r5 = a(r14, r0, r5)
            if (r5 == 0) goto L66
            com.vivo.push.model.b r0 = f(r14, r0)
            if (r0 == 0) goto L66
            boolean r5 = r0.d()
            if (r5 == 0) goto L66
            goto L67
        L66:
            r0 = r4
        L67:
            if (r3 == 0) goto L70
            boolean r5 = r3.d()
            if (r5 == 0) goto L70
            goto L71
        L70:
            r3 = r4
        L71:
            if (r0 == 0) goto L74
            goto L75
        L74:
            r0 = r4
        L75:
            if (r3 == 0) goto La5
            if (r0 == 0) goto La6
            boolean r5 = r3.c()
            if (r5 == 0) goto L92
            boolean r5 = r0.c()
            if (r5 == 0) goto La5
            long r5 = r3.b()
            long r7 = r0.b()
            int r5 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r5 <= 0) goto La5
            goto La6
        L92:
            boolean r5 = r0.c()
            if (r5 != 0) goto La6
            long r5 = r3.b()
            long r7 = r0.b()
            int r5 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r5 <= 0) goto La5
            goto La6
        La5:
            r3 = r0
        La6:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            if (r3 == 0) goto Lb7
            boolean r5 = r3.c()
            if (r5 == 0) goto Lb8
            r13 = r4
            r4 = r3
            r3 = r13
            goto Lb8
        Lb7:
            r3 = r4
        Lb8:
            int r5 = r2.size()
            r6 = 0
        Lbd:
            if (r6 >= r5) goto L102
            java.lang.Object r7 = r2.get(r6)
            java.lang.String r7 = (java.lang.String) r7
            boolean r8 = android.text.TextUtils.isEmpty(r7)
            if (r8 != 0) goto Lff
            com.vivo.push.model.b r8 = f(r14, r7)
            if (r8 == 0) goto Lff
            r0.put(r7, r8)
            boolean r7 = r8.d()
            if (r7 == 0) goto Lff
            boolean r7 = r8.c()
            if (r7 == 0) goto Lf0
            if (r4 == 0) goto Lee
            long r9 = r8.b()
            long r11 = r4.b()
            int r7 = (r9 > r11 ? 1 : (r9 == r11 ? 0 : -1))
            if (r7 <= 0) goto Lff
        Lee:
            r4 = r8
            goto Lff
        Lf0:
            if (r3 == 0) goto Lfe
            long r9 = r8.b()
            long r11 = r3.b()
            int r7 = (r9 > r11 ? 1 : (r9 == r11 ? 0 : -1))
            if (r7 <= 0) goto Lff
        Lfe:
            r3 = r8
        Lff:
            int r6 = r6 + 1
            goto Lbd
        L102:
            if (r3 == 0) goto L106
            r0 = r3
            goto L10c
        L106:
            java.lang.String r0 = "findSuitablePushPackage, all push app in balck list."
            com.vivo.push.util.p.d(r1, r0)
            r0 = r4
        L10c:
            if (r0 == 0) goto L182
            boolean r2 = r0.c()
            java.lang.String r3 = "finSuitablePushPackage"
            java.lang.String r4 = "查找最优包为:"
            java.lang.String r5 = "("
            if (r2 == 0) goto L142
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r4)
            java.lang.String r4 = r0.a()
            r2.append(r4)
            r2.append(r5)
            long r6 = r0.b()
            r2.append(r6)
            java.lang.String r4 = ", Black)"
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            com.vivo.push.util.p.a(r14, r2)
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>(r3)
            goto L169
        L142:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r4)
            java.lang.String r4 = r0.a()
            r2.append(r4)
            r2.append(r5)
            long r6 = r0.b()
            r2.append(r6)
            java.lang.String r4 = ")"
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            com.vivo.push.util.p.a(r14, r2)
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>(r3)
        L169:
            java.lang.String r2 = r0.a()
            r14.append(r2)
            r14.append(r5)
            long r2 = r0.b()
            r14.append(r2)
            r14.append(r4)
            java.lang.String r14 = r14.toString()
            goto L189
        L182:
            java.lang.String r2 = "查找最优包为空!"
            com.vivo.push.util.p.b(r14, r2)
            java.lang.String r14 = "finSuitablePushPackage is null"
        L189:
            com.vivo.push.util.p.d(r1, r14)
            return r0
    }

    private static boolean a(android.content.Context r1, long r2) {
            com.vivo.push.cache.b r0 = com.vivo.push.cache.b.a()
            com.vivo.push.cache.d r1 = r0.a(r1)
            if (r1 == 0) goto Lf
            boolean r1 = r1.isInBlackList(r2)
            return r1
        Lf:
            r1 = 0
            return r1
    }

    public static boolean a(android.content.Context r9, java.lang.String r10) {
            boolean r0 = android.text.TextUtils.isEmpty(r10)
            r1 = 0
            if (r0 != 0) goto L71
            if (r9 != 0) goto Lb
            goto L71
        Lb:
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r2 = "com.vivo.pushservice.action.PUSH_SERVICE"
            r0.<init>(r2)
            r0.setPackage(r10)
            android.content.pm.PackageManager r9 = r9.getPackageManager()
            r2 = 576(0x240, float:8.07E-43)
            java.util.List r0 = r9.queryIntentServices(r0, r2)
            if (r0 == 0) goto L6a
            int r2 = r0.size()
            if (r2 > 0) goto L28
            goto L6a
        L28:
            int r2 = r0.size()
            r3 = r1
            r4 = r3
        L2e:
            if (r3 >= r2) goto L69
            java.lang.Object r5 = r0.get(r3)
            android.content.pm.ResolveInfo r5 = (android.content.pm.ResolveInfo) r5
            if (r5 == 0) goto L66
            android.content.pm.ServiceInfo r6 = r5.serviceInfo
            if (r6 == 0) goto L66
            android.content.pm.ServiceInfo r6 = r5.serviceInfo
            java.lang.String r6 = r6.name
            android.content.pm.ServiceInfo r7 = r5.serviceInfo
            boolean r7 = r7.exported
            java.lang.String r8 = "com.vivo.push.sdk.service.PushService"
            boolean r6 = r8.equals(r6)
            if (r6 == 0) goto L66
            if (r7 == 0) goto L66
            android.content.pm.ServiceInfo r4 = r5.serviceInfo
            boolean r4 = r4.enabled
            android.content.ComponentName r5 = new android.content.ComponentName
            r5.<init>(r10, r8)
            int r5 = r9.getComponentEnabledSetting(r5)
            r6 = 1
            if (r5 == r6) goto L65
            if (r5 != 0) goto L63
            if (r4 == 0) goto L63
            goto L65
        L63:
            r4 = r1
            goto L66
        L65:
            r4 = r6
        L66:
            int r3 = r3 + 1
            goto L2e
        L69:
            return r4
        L6a:
            java.lang.String r9 = "PushPackageUtils"
            java.lang.String r10 = "isEnablePush error: can not find push service."
            com.vivo.push.util.p.a(r9, r10)
        L71:
            return r1
    }

    private static boolean a(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            android.content.Intent r0 = new android.content.Intent
            r0.<init>(r3)
            r0.setPackage(r2)
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Exception -> L13
            r2 = 576(0x240, float:8.07E-43)
            java.util.List r1 = r1.queryBroadcastReceivers(r0, r2)     // Catch: java.lang.Exception -> L13
            goto L14
        L13:
            r1 = 0
        L14:
            if (r1 == 0) goto L1e
            int r1 = r1.size()
            if (r1 <= 0) goto L1e
            r1 = 1
            goto L1f
        L1e:
            r1 = 0
        L1f:
            return r1
    }

    public static int b(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = "com.vivo.pushservice.action.RECEIVE"
            boolean r0 = a(r2, r3, r0)
            if (r0 == 0) goto La
            r0 = 0
            goto Lb
        La:
            r0 = -1
        Lb:
            java.lang.String r1 = "com.vivo.pushclient.action.RECEIVE"
            boolean r2 = a(r2, r3, r1)
            if (r2 == 0) goto L14
            r0 = 1
        L14:
            return r0
    }

    public static java.lang.String b(android.content.Context r10) {
            java.lang.String r0 = "name"
            java.lang.String r1 = "close"
            java.lang.String r2 = "PushPackageUtils"
            java.lang.String r3 = com.vivo.push.util.t.b
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L11
            java.lang.String r10 = com.vivo.push.util.t.b
            return r10
        L11:
            r3 = 0
            android.content.ContentResolver r4 = r10.getContentResolver()     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> La9
            android.net.Uri r5 = com.vivo.push.p.a     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> La9
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            android.database.Cursor r10 = r4.query(r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> La9
            if (r10 != 0) goto L36
            java.lang.String r0 = "cursor is null"
            com.vivo.push.util.p.a(r2, r0)     // Catch: java.lang.Exception -> L32 java.lang.Throwable -> La1
            if (r10 == 0) goto L31
            r10.close()     // Catch: java.lang.Exception -> L2d
            goto L31
        L2d:
            r10 = move-exception
            com.vivo.push.util.p.a(r2, r1, r10)
        L31:
            return r3
        L32:
            r0 = move-exception
            r5 = r3
            goto La5
        L36:
            r4 = 0
            r5 = r3
        L38:
            boolean r6 = r10.moveToNext()     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            if (r6 == 0) goto L76
            java.lang.String r6 = "pushPkgName"
            int r7 = r10.getColumnIndex(r0)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            java.lang.String r7 = r10.getString(r7)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            boolean r6 = r6.equals(r7)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            java.lang.String r7 = "value"
            if (r6 == 0) goto L59
            int r6 = r10.getColumnIndex(r7)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            java.lang.String r5 = r10.getString(r6)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            goto L38
        L59:
            java.lang.String r6 = "pushEnable"
            int r8 = r10.getColumnIndex(r0)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            java.lang.String r8 = r10.getString(r8)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            boolean r6 = r6.equals(r8)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            if (r6 == 0) goto L38
            int r4 = r10.getColumnIndex(r7)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            java.lang.String r4 = r10.getString(r4)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            boolean r4 = java.lang.Boolean.parseBoolean(r4)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            goto L38
        L76:
            com.vivo.push.util.t.b = r5     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            if (r0 == 0) goto L89
            if (r10 == 0) goto L88
            r10.close()     // Catch: java.lang.Exception -> L84
            goto L88
        L84:
            r10 = move-exception
            com.vivo.push.util.p.a(r2, r1, r10)
        L88:
            return r3
        L89:
            if (r4 != 0) goto L96
            if (r10 == 0) goto L95
            r10.close()     // Catch: java.lang.Exception -> L91
            goto L95
        L91:
            r10 = move-exception
            com.vivo.push.util.p.a(r2, r1, r10)
        L95:
            return r3
        L96:
            if (r10 == 0) goto Lb5
            r10.close()     // Catch: java.lang.Exception -> L9c
            goto Lb5
        L9c:
            r10 = move-exception
            com.vivo.push.util.p.a(r2, r1, r10)
            goto Lb5
        La1:
            r0 = move-exception
            r3 = r10
            goto Lb6
        La4:
            r0 = move-exception
        La5:
            r3 = r10
            goto Lab
        La7:
            r0 = move-exception
            goto Lb6
        La9:
            r0 = move-exception
            r5 = r3
        Lab:
            java.lang.String r10 = "getSystemPush"
            com.vivo.push.util.p.a(r2, r10, r0)     // Catch: java.lang.Throwable -> La7
            if (r3 == 0) goto Lb5
            r3.close()     // Catch: java.lang.Exception -> L9c
        Lb5:
            return r5
        Lb6:
            if (r3 == 0) goto Lc0
            r3.close()     // Catch: java.lang.Exception -> Lbc
            goto Lc0
        Lbc:
            r10 = move-exception
            com.vivo.push.util.p.a(r2, r1, r10)
        Lc0:
            throw r0
    }

    public static boolean c(android.content.Context r4) {
            java.lang.Boolean r0 = com.vivo.push.util.t.a
            if (r0 == 0) goto L9
            boolean r4 = r0.booleanValue()
            return r4
        L9:
            java.lang.String r0 = "com.vivo.push.sdk.service.SystemPushConfig"
            r1 = 0
            if (r4 == 0) goto L23
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 == 0) goto L15
            goto L23
        L15:
            android.content.pm.PackageManager r2 = r4.getPackageManager()
            r3 = 128(0x80, float:1.8E-43)
            android.content.pm.ProviderInfo r0 = r2.resolveContentProvider(r0, r3)
            if (r0 == 0) goto L23
            java.lang.String r1 = r0.packageName
        L23:
            java.lang.String r4 = g(r4, r1)
            java.lang.String r0 = "BCC35D4D3606F154F0402AB7634E8490C0B244C2675C3C6238986987024F0C02"
            boolean r4 = r0.equals(r4)
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r4)
            com.vivo.push.util.t.a = r4
            boolean r4 = r4.booleanValue()
            return r4
    }

    public static boolean c(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "com.vivo.pushclient.action.RECEIVE"
            boolean r1 = a(r1, r2, r0)
            return r1
    }

    private static com.vivo.push.model.b d(android.content.Context r5) {
            java.lang.String r0 = b(r5)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            if (r1 == 0) goto Lc
            return r2
        Lc:
            com.vivo.push.model.b r1 = new com.vivo.push.model.b
            r1.<init>(r0)
            android.content.pm.PackageManager r3 = r5.getPackageManager()     // Catch: java.lang.Exception -> L45
            r4 = 128(0x80, float:1.8E-43)
            android.content.pm.PackageInfo r3 = r3.getPackageInfo(r0, r4)     // Catch: java.lang.Exception -> L45
            if (r3 == 0) goto L29
            int r2 = r3.versionCode
            r1.a(r2)
            java.lang.String r2 = r3.versionName
            r1.a(r2)
            android.content.pm.ApplicationInfo r2 = r3.applicationInfo
        L29:
            if (r2 == 0) goto L32
            long r2 = com.vivo.push.util.z.a(r5, r0)
            r1.a(r2)
        L32:
            long r2 = r1.b()
            boolean r2 = a(r5, r2)
            r1.a(r2)
            boolean r5 = a(r5, r0)
            r1.b(r5)
            return r1
        L45:
            r5 = move-exception
            r5.printStackTrace()
            java.lang.String r0 = "PushPackageUtils"
            java.lang.String r1 = "PackageManager NameNotFoundException is null"
            com.vivo.push.util.p.b(r0, r1, r5)
            return r2
    }

    public static boolean d(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "com.vivo.pushservice.action.RECEIVE"
            boolean r1 = a(r1, r2, r0)
            return r1
    }

    private static java.util.List<java.lang.String> e(android.content.Context r5) {
            java.lang.String r0 = "findAllCoreClientPush"
            com.vivo.push.util.g.a(r0)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r2 = "com.vivo.pushservice.action.PUSH_SERVICE"
            r1.<init>(r2)
            android.content.pm.PackageManager r5 = r5.getPackageManager()     // Catch: java.lang.Exception -> L1c
            r2 = 576(0x240, float:8.07E-43)
            java.util.List r5 = r5.queryIntentServices(r1, r2)     // Catch: java.lang.Exception -> L1c
            goto L1d
        L1c:
            r5 = 0
        L1d:
            if (r5 == 0) goto L44
            int r1 = r5.size()
            if (r1 <= 0) goto L44
            int r1 = r5.size()
            r2 = 0
        L2a:
            if (r2 >= r1) goto L44
            java.lang.Object r3 = r5.get(r2)
            android.content.pm.ResolveInfo r3 = (android.content.pm.ResolveInfo) r3
            if (r3 == 0) goto L41
            android.content.pm.ServiceInfo r3 = r3.serviceInfo
            java.lang.String r3 = r3.packageName
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L41
            r0.add(r3)
        L41:
            int r2 = r2 + 1
            goto L2a
        L44:
            int r5 = r0.size()
            if (r5 > 0) goto L51
            java.lang.String r5 = "PushPackageUtils"
            java.lang.String r1 = "get all push packages is null"
            com.vivo.push.util.p.d(r5, r1)
        L51:
            return r0
    }

    public static boolean e(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "com.vivo.pushservice.action.METHOD"
            boolean r1 = a(r1, r2, r0)
            return r1
    }

    private static com.vivo.push.model.b f(android.content.Context r4, java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 0
            if (r0 != 0) goto L61
            java.lang.String r0 = "com.vivo.pushservice.action.METHOD"
            boolean r0 = a(r4, r5, r0)
            if (r0 != 0) goto L1a
            java.lang.String r0 = "com.vivo.pushservice.action.RECEIVE"
            boolean r0 = a(r4, r5, r0)
            if (r0 == 0) goto L18
            goto L1a
        L18:
            r0 = 0
            goto L1b
        L1a:
            r0 = 1
        L1b:
            if (r0 != 0) goto L1e
            goto L61
        L1e:
            com.vivo.push.model.b r0 = new com.vivo.push.model.b
            r0.<init>(r5)
            android.content.pm.PackageManager r2 = r4.getPackageManager()     // Catch: java.lang.Exception -> L59
            r3 = 128(0x80, float:1.8E-43)
            android.content.pm.PackageInfo r2 = r2.getPackageInfo(r5, r3)     // Catch: java.lang.Exception -> L59
            if (r2 == 0) goto L3c
            int r3 = r2.versionCode     // Catch: java.lang.Exception -> L59
            r0.a(r3)     // Catch: java.lang.Exception -> L59
            java.lang.String r3 = r2.versionName     // Catch: java.lang.Exception -> L59
            r0.a(r3)     // Catch: java.lang.Exception -> L59
            android.content.pm.ApplicationInfo r2 = r2.applicationInfo     // Catch: java.lang.Exception -> L59
            goto L3d
        L3c:
            r2 = r1
        L3d:
            if (r2 == 0) goto L46
            long r2 = com.vivo.push.util.z.a(r4, r5)     // Catch: java.lang.Exception -> L59
            r0.a(r2)     // Catch: java.lang.Exception -> L59
        L46:
            boolean r5 = a(r4, r5)
            r0.b(r5)
            long r1 = r0.b()
            boolean r4 = a(r4, r1)
            r0.a(r4)
            return r0
        L59:
            r4 = move-exception
            java.lang.String r5 = "PushPackageUtils"
            java.lang.String r0 = "getPushPackageInfo exception: "
            com.vivo.push.util.p.a(r5, r0, r4)
        L61:
            return r1
    }

    private static java.lang.String g(android.content.Context r5, java.lang.String r6) {
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = 0
            if (r0 != 0) goto L64
            if (r5 != 0) goto La
            goto L64
        La:
            android.content.pm.PackageManager r5 = r5.getPackageManager()     // Catch: java.lang.Exception -> L54
            r0 = 64
            android.content.pm.PackageInfo r5 = r5.getPackageInfo(r6, r0)     // Catch: java.lang.Exception -> L54
            android.content.pm.Signature[] r5 = r5.signatures     // Catch: java.lang.Exception -> L54
            r6 = 0
            r5 = r5[r6]     // Catch: java.lang.Exception -> L54
            byte[] r5 = r5.toByteArray()     // Catch: java.lang.Exception -> L54
            java.lang.String r0 = "SHA256"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Exception -> L54
            byte[] r5 = r0.digest(r5)     // Catch: java.lang.Exception -> L54
            java.lang.StringBuffer r0 = new java.lang.StringBuffer     // Catch: java.lang.Exception -> L54
            r0.<init>()     // Catch: java.lang.Exception -> L54
        L2c:
            int r2 = r5.length     // Catch: java.lang.Exception -> L54
            if (r6 >= r2) goto L4f
            r2 = r5[r6]     // Catch: java.lang.Exception -> L54
            r2 = r2 & 255(0xff, float:3.57E-43)
            java.lang.String r2 = java.lang.Integer.toHexString(r2)     // Catch: java.lang.Exception -> L54
            java.util.Locale r3 = java.util.Locale.US     // Catch: java.lang.Exception -> L54
            java.lang.String r2 = r2.toUpperCase(r3)     // Catch: java.lang.Exception -> L54
            int r3 = r2.length()     // Catch: java.lang.Exception -> L54
            r4 = 1
            if (r3 != r4) goto L49
            java.lang.String r3 = "0"
            r0.append(r3)     // Catch: java.lang.Exception -> L54
        L49:
            r0.append(r2)     // Catch: java.lang.Exception -> L54
            int r6 = r6 + 1
            goto L2c
        L4f:
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Exception -> L54
            return r5
        L54:
            r5 = move-exception
            java.lang.String r5 = java.lang.String.valueOf(r5)
            java.lang.String r6 = " getSignatureSHA exception "
            java.lang.String r5 = r6.concat(r5)
            java.lang.String r6 = "PushPackageUtils"
            com.vivo.push.util.p.a(r6, r5)
        L64:
            return r1
    }
}
