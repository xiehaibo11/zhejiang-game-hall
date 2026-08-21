package com.meizu.cloud.pushsdk.util;

public class d {


    private static int a(android.content.Context r0) {
            boolean r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isMeizu(r0)
            if (r0 == 0) goto L8
            r0 = 1
            goto L19
        L8:
            boolean r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isXiaoMi()
            if (r0 == 0) goto L10
            r0 = 2
            goto L19
        L10:
            boolean r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isHuaWei()
            if (r0 == 0) goto L18
            r0 = 3
            goto L19
        L18:
            r0 = 0
        L19:
            return r0
    }

    private static android.content.Intent a(android.content.Context r7, java.util.Map<java.lang.String, java.lang.String> r8) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.meizu.cloud.pushservice.action.PUSH_TRACKER_SERVICE"
            r0.<init>(r1)
            android.content.pm.PackageManager r7 = r7.getPackageManager()
            r2 = 0
            java.util.List r7 = r7.queryIntentServices(r0, r2)
            r0 = 0
            if (r7 == 0) goto L5b
            java.util.Iterator r3 = r7.iterator()
        L17:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L38
            java.lang.Object r4 = r3.next()
            android.content.pm.ResolveInfo r4 = (android.content.pm.ResolveInfo) r4
            android.content.pm.ServiceInfo r5 = r4.serviceInfo
            java.lang.String r5 = r5.packageName
            java.lang.String r6 = "com.meizu.cloud"
            boolean r5 = r6.equals(r5)
            if (r5 == 0) goto L17
            android.content.pm.ServiceInfo r3 = r4.serviceInfo
            java.lang.String r3 = r3.packageName
            android.content.pm.ServiceInfo r4 = r4.serviceInfo
            java.lang.String r4 = r4.name
            goto L3a
        L38:
            r3 = r0
            r4 = r3
        L3a:
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 == 0) goto L5d
            int r5 = r7.size()
            if (r5 <= 0) goto L5d
            java.lang.Object r3 = r7.get(r2)
            android.content.pm.ResolveInfo r3 = (android.content.pm.ResolveInfo) r3
            android.content.pm.ServiceInfo r3 = r3.serviceInfo
            java.lang.String r3 = r3.packageName
            java.lang.Object r7 = r7.get(r2)
            android.content.pm.ResolveInfo r7 = (android.content.pm.ResolveInfo) r7
            android.content.pm.ServiceInfo r7 = r7.serviceInfo
            java.lang.String r4 = r7.name
            goto L5d
        L5b:
            r3 = r0
            r4 = r3
        L5d:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r2 = "current process packageName "
            r7.append(r2)
            r7.append(r3)
            java.lang.String r7 = r7.toString()
            java.lang.String r2 = "UxIPUtils"
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r7)
            boolean r7 = android.text.TextUtils.isEmpty(r4)
            if (r7 != 0) goto Lae
            org.json.JSONObject r7 = com.meizu.cloud.pushsdk.d.f.e.a(r8)     // Catch: java.lang.Exception -> L92
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Exception -> L92
            android.content.Intent r8 = new android.content.Intent     // Catch: java.lang.Exception -> L92
            r8.<init>()     // Catch: java.lang.Exception -> L92
            r8.setPackage(r3)     // Catch: java.lang.Exception -> L92
            r8.setAction(r1)     // Catch: java.lang.Exception -> L92
            java.lang.String r1 = "extra_push_tracker"
            r8.putExtra(r1, r7)     // Catch: java.lang.Exception -> L92
            return r8
        L92:
            r7 = move-exception
            r7.printStackTrace()
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r1 = "getRemotePushTrackerIntent error "
            r8.append(r1)
            java.lang.String r7 = r7.getMessage()
            r8.append(r7)
            java.lang.String r7 = r8.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r7)
        Lae:
            return r0
    }

    public static com.meizu.cloud.pushsdk.handler.a.c.d a(java.lang.String r8) {
            java.lang.String r0 = "device_id"
            java.lang.String r1 = "push_timestamp"
            java.lang.String r2 = "seq_id"
            java.lang.String r3 = "task_id"
            com.meizu.cloud.pushsdk.handler.a.c.d r4 = new com.meizu.cloud.pushsdk.handler.a.c.d
            r4.<init>()
            boolean r5 = android.text.TextUtils.isEmpty(r8)
            java.lang.String r6 = "UxIPUtils"
            if (r5 != 0) goto L65
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Exception -> L62
            r5.<init>(r8)     // Catch: java.lang.Exception -> L62
            boolean r8 = r5.has(r3)     // Catch: java.lang.Exception -> L62
            r7 = 0
            if (r8 == 0) goto L26
            java.lang.String r8 = r5.getString(r3)     // Catch: java.lang.Exception -> L62
            goto L27
        L26:
            r8 = r7
        L27:
            boolean r3 = r5.has(r2)     // Catch: java.lang.Exception -> L62
            if (r3 == 0) goto L32
            java.lang.String r2 = r5.getString(r2)     // Catch: java.lang.Exception -> L62
            goto L33
        L32:
            r2 = r7
        L33:
            boolean r3 = r5.has(r1)     // Catch: java.lang.Exception -> L62
            if (r3 == 0) goto L3e
            java.lang.String r1 = r5.getString(r1)     // Catch: java.lang.Exception -> L62
            goto L3f
        L3e:
            r1 = r7
        L3f:
            boolean r3 = r5.has(r0)     // Catch: java.lang.Exception -> L62
            if (r3 == 0) goto L49
            java.lang.String r7 = r5.getString(r0)     // Catch: java.lang.Exception -> L62
        L49:
            com.meizu.cloud.pushsdk.handler.a.c.d$a r0 = com.meizu.cloud.pushsdk.handler.a.c.d.a()     // Catch: java.lang.Exception -> L62
            com.meizu.cloud.pushsdk.handler.a.c.d$a r8 = r0.a(r8)     // Catch: java.lang.Exception -> L62
            com.meizu.cloud.pushsdk.handler.a.c.d$a r8 = r8.d(r7)     // Catch: java.lang.Exception -> L62
            com.meizu.cloud.pushsdk.handler.a.c.d$a r8 = r8.c(r1)     // Catch: java.lang.Exception -> L62
            com.meizu.cloud.pushsdk.handler.a.c.d$a r8 = r8.b(r2)     // Catch: java.lang.Exception -> L62
            com.meizu.cloud.pushsdk.handler.a.c.d r4 = r8.a()     // Catch: java.lang.Exception -> L62
            goto L6a
        L62:
            java.lang.String r8 = "the platformExtra parse error"
            goto L67
        L65:
            java.lang.String r8 = "the platformExtra is empty"
        L67:
            com.meizu.cloud.pushinternal.DebugLogger.e(r6, r8)
        L6a:
            return r4
    }

    public static java.lang.String a(android.content.Intent r2) {
            java.lang.String r0 = "extra_app_push_task_Id"
            java.lang.String r0 = r2.getStringExtra(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L39
            java.lang.String r1 = "pushMessage"
            java.io.Serializable r2 = r2.getSerializableExtra(r1)     // Catch: java.lang.Exception -> L1c
            com.meizu.cloud.pushsdk.notification.MPushMessage r2 = (com.meizu.cloud.pushsdk.notification.MPushMessage) r2     // Catch: java.lang.Exception -> L1c
            if (r2 == 0) goto L39
            java.lang.String r2 = r2.getTaskId()     // Catch: java.lang.Exception -> L1c
            r0 = r2
            goto L39
        L1c:
            r2 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "parse MessageV2 error "
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "UxIPUtils"
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r2)
            java.lang.String r0 = "no push platform task"
        L39:
            return r0
    }

    public static void a(android.content.Context r1, android.content.Intent r2, java.lang.String r3, int r4) {
            java.lang.String r0 = "4.1.4"
            a(r1, r2, r0, r3, r4)
            return
    }

    public static void a(android.content.Context r8, android.content.Intent r9, java.lang.String r10, java.lang.String r11, int r12) {
            java.lang.String r0 = a(r9)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1f
            java.lang.String r2 = r8.getPackageName()
            java.lang.String r0 = "statistics_imei_key"
            java.lang.String r3 = r9.getStringExtra(r0)
            java.lang.String r4 = a(r9)
            r1 = r8
            r5 = r10
            r6 = r11
            r7 = r12
            a(r1, r2, r3, r4, r5, r6, r7)
        L1f:
            return
    }

    public static void a(android.content.Context r8, java.lang.String r9, int r10, java.lang.String r11, java.lang.String r12) {
            boolean r0 = android.text.TextUtils.isEmpty(r11)
            if (r0 != 0) goto L14
            java.lang.String r2 = r8.getPackageName()
            java.lang.String r5 = "4.1.4"
            r1 = r8
            r3 = r12
            r4 = r11
            r6 = r9
            r7 = r10
            a(r1, r2, r3, r4, r5, r6, r7)
        L14:
            return
    }

    public static void a(android.content.Context r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13) {
            r1 = 1
            java.lang.String r6 = "dpm"
            r0 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r7 = r13
            a(r0, r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public static void a(android.content.Context r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, int r9) {
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 8
            r0.<init>(r1)
            java.lang.String r1 = "taskId"
            r0.put(r1, r6)
            java.lang.String r6 = "deviceId"
            r0.put(r6, r5)
            long r5 = java.lang.System.currentTimeMillis()
            r1 = 1000(0x3e8, double:4.94E-321)
            long r5 = r5 / r1
            java.lang.String r5 = java.lang.String.valueOf(r5)
            java.lang.String r6 = "timestamp"
            r0.put(r6, r5)
            java.lang.String r5 = "package_name"
            r0.put(r5, r4)
            java.lang.String r4 = "pushsdk_version"
            r0.put(r4, r7)
            java.lang.String r4 = "push_info"
            r0.put(r4, r8)
            java.lang.String r4 = java.lang.String.valueOf(r9)
            java.lang.String r5 = "push_info_type"
            r0.put(r5, r4)
            r4 = 0
            java.lang.String r5 = "notification_service_message"
            a(r3, r4, r5, r0)
            return
    }

    public static void a(android.content.Context r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15, long r16) {
            r1 = 1
            java.lang.String r6 = "spm"
            r0 = r10
            r2 = r11
            r3 = r12
            r4 = r13
            r5 = r14
            r7 = r15
            r8 = r16
            a(r0, r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    public static void a(android.content.Context r10, boolean r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15, java.lang.String r16, java.lang.String r17) {
            r8 = 0
            r0 = r10
            r1 = r11
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r15
            r6 = r16
            r7 = r17
            a(r0, r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    public static void a(android.content.Context r3, boolean r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, long r11) {
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 8
            r0.<init>(r1)
            java.lang.String r1 = "en"
            r0.put(r1, r9)
            java.lang.String r1 = "ti"
            r0.put(r1, r7)
            java.lang.String r7 = "di"
            r0.put(r7, r6)
            boolean r6 = android.text.TextUtils.isEmpty(r10)
            r1 = 1000(0x3e8, double:4.94E-321)
            if (r6 == 0) goto L27
            long r6 = java.lang.System.currentTimeMillis()
            long r6 = r6 / r1
            java.lang.String r10 = java.lang.String.valueOf(r6)
        L27:
            java.lang.String r6 = "ts"
            r0.put(r6, r10)
            java.lang.String r6 = "pn"
            r0.put(r6, r5)
            java.lang.String r5 = "pv"
            java.lang.String r6 = "4.1.4"
            r0.put(r5, r6)
            long r5 = java.lang.System.currentTimeMillis()
            long r5 = r5 / r1
            java.lang.String r5 = java.lang.String.valueOf(r5)
            java.lang.String r6 = "nm"
            r0.put(r6, r5)
            boolean r5 = android.text.TextUtils.isEmpty(r8)
            if (r5 != 0) goto L51
            java.lang.String r5 = "si"
            r0.put(r5, r8)
        L51:
            boolean r5 = a(r3, r0, r4, r11)
            if (r5 != 0) goto L5a
            a(r3, r4, r9, r0)
        L5a:
            return
    }

    public static void a(android.content.Context r4, boolean r5, java.lang.String r6, java.util.Map<java.lang.String, java.lang.String> r7) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onLogEvent eventName ["
            r0.append(r1)
            r0.append(r6)
            java.lang.String r1 = "] properties = "
            r0.append(r1)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "UxIPUtils"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r0)
            java.lang.String r0 = "notification_service_message"
            boolean r0 = r0.equals(r6)
            if (r0 == 0) goto L28
            goto Ld5
        L28:
            java.lang.String r0 = "nm"
            java.lang.Object r1 = r7.get(r0)
            if (r1 == 0) goto L37
            java.lang.Object r0 = r7.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            goto L42
        L37:
            long r0 = java.lang.System.currentTimeMillis()
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 / r2
            java.lang.String r0 = java.lang.String.valueOf(r0)
        L42:
            r1 = 0
            com.meizu.cloud.pushsdk.d.e.a r1 = com.meizu.cloud.pushsdk.d.a.a(r4, r1, r1)
            com.meizu.cloud.pushsdk.d.c.b$a r2 = com.meizu.cloud.pushsdk.d.c.b.d()
            com.meizu.cloud.pushsdk.d.c.b$a r6 = r2.a(r6)
            int r2 = a(r4)
            com.meizu.cloud.pushsdk.d.c.b$a r6 = r6.a(r2)
            java.lang.String r2 = "ts"
            java.lang.Object r2 = r7.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            long r2 = r2.longValue()
            com.meizu.cloud.pushsdk.d.c.a$a r6 = r6.a(r2)
            com.meizu.cloud.pushsdk.d.c.b$a r6 = (com.meizu.cloud.pushsdk.d.c.b.a) r6
            com.meizu.cloud.pushsdk.d.c.b$a r6 = r6.h(r0)
            java.lang.String r0 = "di"
            java.lang.Object r0 = r7.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            com.meizu.cloud.pushsdk.d.c.b$a r6 = r6.c(r0)
            java.lang.String r0 = "pn"
            java.lang.Object r2 = r7.get(r0)
            java.lang.String r2 = (java.lang.String) r2
            com.meizu.cloud.pushsdk.d.c.b$a r6 = r6.e(r2)
            java.lang.String r2 = "pv"
            java.lang.Object r2 = r7.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            com.meizu.cloud.pushsdk.d.c.b$a r6 = r6.d(r2)
            java.lang.String r2 = "ti"
            java.lang.Object r2 = r7.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            com.meizu.cloud.pushsdk.d.c.b$a r6 = r6.b(r2)
            java.lang.String r2 = "si"
            java.lang.Object r3 = r7.get(r2)
            java.lang.CharSequence r3 = (java.lang.CharSequence) r3
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto Lb2
            java.lang.String r2 = ""
            goto Lb8
        Lb2:
            java.lang.Object r2 = r7.get(r2)
            java.lang.String r2 = (java.lang.String) r2
        Lb8:
            com.meizu.cloud.pushsdk.d.c.b$a r6 = r6.f(r2)
            java.lang.Object r7 = r7.get(r0)
            java.lang.String r7 = (java.lang.String) r7
            int r4 = com.meizu.cloud.pushsdk.util.b.j(r4, r7)
            java.lang.String r4 = java.lang.String.valueOf(r4)
            com.meizu.cloud.pushsdk.d.c.b$a r4 = r6.g(r4)
            com.meizu.cloud.pushsdk.d.c.b r4 = r4.b()
            r1.a(r4, r5)
        Ld5:
            return
    }

    private static boolean a(android.content.Context r9, android.content.Intent r10, boolean r11, java.util.Map<java.lang.String, java.lang.String> r12, long r13) {
            r0 = 0
            java.lang.String r1 = "UxIPUtils"
            if (r10 != 0) goto Lb
            java.lang.String r9 = "startRemotePushTracker error intent is null"
        L7:
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r9)
            return r0
        Lb:
            r2 = 0
            int r2 = (r13 > r2 ? 1 : (r13 == r2 ? 0 : -1))
            if (r2 != 0) goto L49
            r9.startService(r10)     // Catch: java.lang.Exception -> L2f
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2f
            r9.<init>()     // Catch: java.lang.Exception -> L2f
            java.lang.String r11 = "immediately start tracker data in mz_tracker process "
            r9.append(r11)     // Catch: java.lang.Exception -> L2f
            java.lang.String r11 = "extra_push_tracker"
            java.lang.String r10 = r10.getStringExtra(r11)     // Catch: java.lang.Exception -> L2f
            r9.append(r10)     // Catch: java.lang.Exception -> L2f
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L2f
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r9)     // Catch: java.lang.Exception -> L2f
            goto L60
        L2f:
            r9 = move-exception
            r9.printStackTrace()
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "startRemotePushTracker error "
            r10.append(r11)
            java.lang.String r9 = r9.getMessage()
            r10.append(r9)
            java.lang.String r9 = r10.toString()
            goto L7
        L49:
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = r9.getMainLooper()
            r0.<init>(r1)
            com.meizu.cloud.pushsdk.util.d$1 r1 = new com.meizu.cloud.pushsdk.util.d$1
            r2 = r1
            r3 = r9
            r4 = r10
            r5 = r13
            r7 = r11
            r8 = r12
            r2.<init>(r3, r4, r5, r7, r8)
            r0.postDelayed(r1, r13)
        L60:
            r9 = 1
            return r9
    }

    private static boolean a(android.content.Context r6, java.util.Map<java.lang.String, java.lang.String> r7, boolean r8, long r9) {
            android.content.Intent r1 = a(r6, r7)
            r0 = r6
            r2 = r8
            r3 = r7
            r4 = r9
            boolean r6 = a(r0, r1, r2, r3, r4)
            return r6
    }

    public static void b(android.content.Context r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13) {
            r1 = 0
            java.lang.String r6 = "rpe"
            r0 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r7 = r13
            a(r0, r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public static void b(android.content.Context r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15, long r16) {
            r1 = 0
            java.lang.String r6 = "rpe"
            r0 = r10
            r2 = r11
            r3 = r12
            r4 = r13
            r5 = r14
            r7 = r15
            r8 = r16
            a(r0, r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    public static void c(android.content.Context r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13) {
            r1 = 1
            java.lang.String r6 = "rpe"
            r0 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r7 = r13
            a(r0, r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public static void c(android.content.Context r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15, long r16) {
            r1 = 0
            java.lang.String r6 = "sipm"
            r0 = r10
            r2 = r11
            r3 = r12
            r4 = r13
            r5 = r14
            r7 = r15
            r8 = r16
            a(r0, r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    public static void d(android.content.Context r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13) {
            r1 = 1
            java.lang.String r6 = "cpm"
            r0 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r7 = r13
            a(r0, r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public static void d(android.content.Context r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15, long r16) {
            r1 = 0
            java.lang.String r6 = "nspm"
            r0 = r10
            r2 = r11
            r3 = r12
            r4 = r13
            r5 = r14
            r7 = r15
            r8 = r16
            a(r0, r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    public static void e(android.content.Context r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13) {
            r1 = 1
            java.lang.String r6 = "acce"
            r0 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r7 = r13
            a(r0, r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public static void e(android.content.Context r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15, long r16) {
            r1 = 0
            java.lang.String r6 = "fspm"
            r0 = r10
            r2 = r11
            r3 = r12
            r4 = r13
            r5 = r14
            r7 = r15
            r8 = r16
            a(r0, r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    public static void f(android.content.Context r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13) {
            r1 = 1
            java.lang.String r6 = "acsm"
            r0 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r7 = r13
            a(r0, r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public static void f(android.content.Context r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15, long r16) {
            r1 = 0
            java.lang.String r6 = "npm"
            r0 = r10
            r2 = r11
            r3 = r12
            r4 = r13
            r5 = r14
            r7 = r15
            r8 = r16
            a(r0, r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }
}
