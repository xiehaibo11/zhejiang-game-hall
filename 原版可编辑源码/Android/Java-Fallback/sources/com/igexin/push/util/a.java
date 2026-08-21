package com.igexin.push.util;

public class a {
    private static final java.lang.String a = null;
    private static java.lang.Integer b;

    static {
            java.lang.Class<com.igexin.push.util.a> r0 = com.igexin.push.util.a.class
            java.lang.String r0 = r0.getName()
            com.igexin.push.util.a.a = r0
            r0 = 0
            com.igexin.push.util.a.b = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(android.content.Context r1) {
            android.content.pm.ApplicationInfo r0 = r1.getApplicationInfo()
            int r0 = r0.flags
            r0 = r0 & 2
            if (r0 != 0) goto Lb
            return
        Lb:
            e(r1)
            return
    }

    private static void a(java.util.Map<java.lang.String, com.igexin.push.core.bean.c> r2, java.lang.String r3) {
            java.lang.Object r0 = r2.get(r3)
            com.igexin.push.core.bean.c r0 = (com.igexin.push.core.bean.c) r0
            r2.remove(r3)
            java.util.List r3 = r0.b()
            java.util.Iterator r3 = r3.iterator()
        L11:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L32
            java.lang.Object r0 = r3.next()
            java.lang.String r0 = (java.lang.String) r0
            java.lang.Object r1 = r2.get(r0)
            com.igexin.push.core.bean.c r1 = (com.igexin.push.core.bean.c) r1
            if (r1 == 0) goto L11
            r1.e()
            int r1 = r1.c()
            if (r1 != 0) goto L11
            a(r2, r0)
            goto L11
        L32:
            return
    }

    public static boolean a() {
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = com.igexin.push.config.j.c
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    public static boolean a(long r4) {
            int r0 = com.igexin.push.config.j.b
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            java.util.Date r0 = new java.util.Date
            r0.<init>(r4)
            java.util.Calendar r4 = java.util.Calendar.getInstance()
            r4.setTime(r0)
            r5 = 11
            int r4 = r4.get(r5)
            int r5 = com.igexin.push.config.j.a
            int r0 = com.igexin.push.config.j.b
            int r5 = r5 + r0
            r0 = 24
            if (r5 < r0) goto L23
            int r5 = r5 + (-24)
        L23:
            int r2 = com.igexin.push.config.j.a
            r3 = 1
            if (r2 >= r5) goto L2f
            int r0 = com.igexin.push.config.j.a
            if (r4 < r0) goto L3f
            if (r4 >= r5) goto L3f
            return r3
        L2f:
            int r2 = com.igexin.push.config.j.a
            if (r2 <= r5) goto L3f
            if (r4 < 0) goto L38
            if (r4 >= r5) goto L38
            return r3
        L38:
            int r5 = com.igexin.push.config.j.a
            if (r4 < r5) goto L3f
            if (r4 >= r0) goto L3f
            return r3
        L3f:
            return r1
    }

    public static boolean a(android.content.Context r4, java.lang.Class r5) {
            r0 = 0
            if (r4 != 0) goto Lb
            java.lang.String r4 = com.igexin.push.util.a.a     // Catch: java.lang.Throwable -> L75
            java.lang.String r5 = "context can not set null "
            android.util.Log.e(r4, r5)     // Catch: java.lang.Throwable -> L75
            return r0
        Lb:
            android.content.pm.PackageManager r1 = r4.getPackageManager()     // Catch: java.lang.Throwable -> L75
            android.content.Intent r2 = new android.content.Intent     // Catch: java.lang.Throwable -> L75
            r2.<init>(r4, r5)     // Catch: java.lang.Throwable -> L75
            java.util.List r2 = r1.queryIntentActivities(r2, r0)     // Catch: java.lang.Throwable -> L75
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L75
            if (r2 > 0) goto L3e
            java.lang.String r4 = com.igexin.push.util.a.a     // Catch: java.lang.Throwable -> L75
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L75
            r1.<init>()     // Catch: java.lang.Throwable -> L75
            java.lang.String r2 = "not regist "
            r1.append(r2)     // Catch: java.lang.Throwable -> L75
            java.lang.String r5 = r5.getName()     // Catch: java.lang.Throwable -> L75
            r1.append(r5)     // Catch: java.lang.Throwable -> L75
            java.lang.String r5 = "in manifest"
            r1.append(r5)     // Catch: java.lang.Throwable -> L75
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L75
            android.util.Log.e(r4, r5)     // Catch: java.lang.Throwable -> L75
            return r0
        L3e:
            android.content.ComponentName r2 = new android.content.ComponentName     // Catch: java.lang.Throwable -> L75
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.Throwable -> L75
            java.lang.String r3 = r5.getName()     // Catch: java.lang.Throwable -> L75
            r2.<init>(r4, r3)     // Catch: java.lang.Throwable -> L75
            r4 = 128(0x80, float:1.8E-43)
            android.content.pm.ActivityInfo r4 = r1.getActivityInfo(r2, r4)     // Catch: java.lang.Throwable -> L75
            int r4 = r4.theme     // Catch: java.lang.Throwable -> L75
            r1 = 16973840(0x1030010, float:2.4060945E-38)
            if (r4 == r1) goto L73
            java.lang.String r4 = com.igexin.push.util.a.a     // Catch: java.lang.Throwable -> L75
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L75
            r1.<init>()     // Catch: java.lang.Throwable -> L75
            java.lang.String r5 = r5.getName()     // Catch: java.lang.Throwable -> L75
            r1.append(r5)     // Catch: java.lang.Throwable -> L75
            java.lang.String r5 = " need set theme Theme.Translucent.NoTitleBar"
            r1.append(r5)     // Catch: java.lang.Throwable -> L75
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L75
            android.util.Log.e(r4, r5)     // Catch: java.lang.Throwable -> L75
            return r0
        L73:
            r4 = 1
            return r4
        L75:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = com.igexin.push.util.a.a
            r5.append(r1)
            java.lang.String r1 = "|"
            r5.append(r1)
            java.lang.String r4 = r4.toString()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            java.lang.Object[] r5 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r4, r5)
            return r0
    }

    public static boolean a(android.content.Intent r2, android.content.Context r3) {
            r0 = 0
            if (r2 == 0) goto L36
            if (r3 != 0) goto L6
            goto L36
        L6:
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: java.lang.Throwable -> L16
            java.util.List r2 = r3.queryIntentServices(r2, r0)     // Catch: java.lang.Throwable -> L16
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L16
            if (r2 <= 0) goto L15
            r0 = 1
        L15:
            return r0
        L16:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = com.igexin.push.util.a.a
            r3.append(r1)
            java.lang.String r1 = "|"
            r3.append(r1)
            java.lang.String r2 = r2.toString()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            java.lang.Object[] r3 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r2, r3)
        L36:
            return r0
    }

    public static boolean a(java.lang.String r2) {
            r0 = 0
            android.content.Context r1 = com.igexin.push.core.d.g     // Catch: java.lang.Exception -> Le
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Exception -> Le
            android.content.Intent r2 = r1.getLaunchIntentForPackage(r2)     // Catch: java.lang.Exception -> Le
            if (r2 == 0) goto Le
            r0 = 1
        Le:
            return r0
    }

    public static <T extends android.app.Service> boolean a(java.lang.String r2, android.content.Context r3, java.lang.Class<T> r4) {
            r2 = 0
            if (r4 != 0) goto L20
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Throwable -> L1e
            java.lang.String r1 = com.igexin.push.core.CoreConsts.n     // Catch: java.lang.Throwable -> L1e
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L1e
            r0.<init>(r3, r1)     // Catch: java.lang.Throwable -> L1e
            boolean r0 = a(r0, r3)     // Catch: java.lang.Throwable -> L1e
            if (r0 != 0) goto L20
            com.igexin.b.a.c.a.c r3 = com.igexin.b.a.c.a.c.a()     // Catch: java.lang.Throwable -> L1e
            java.lang.String r4 = "call - > initialize, parameter [userServiceName] is null use default PushService, but didn't find class \"com.igexin.sdk.PushService\", please check your AndroidManifest"
            r3.a(r4)     // Catch: java.lang.Throwable -> L1e
            return r2
        L1e:
            r3 = move-exception
            goto L7c
        L20:
            if (r4 == 0) goto L43
            java.lang.String r0 = com.igexin.push.core.CoreConsts.n     // Catch: java.lang.Throwable -> L1e
            java.lang.String r1 = r4.getName()     // Catch: java.lang.Throwable -> L1e
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L1e
            if (r0 == 0) goto L43
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Throwable -> L1e
            r0.<init>(r3, r4)     // Catch: java.lang.Throwable -> L1e
            boolean r0 = a(r0, r3)     // Catch: java.lang.Throwable -> L1e
            if (r0 != 0) goto L43
            com.igexin.b.a.c.a.c r3 = com.igexin.b.a.c.a.c.a()     // Catch: java.lang.Throwable -> L1e
            java.lang.String r4 = "call - > initialize, parameter [userServiceName] is default PushService, but didn't find class \"com.igexin.sdk.PushService\", please check your AndroidManifest"
            r3.a(r4)     // Catch: java.lang.Throwable -> L1e
            return r2
        L43:
            if (r4 == 0) goto L72
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Throwable -> L1e
            r0.<init>(r3, r4)     // Catch: java.lang.Throwable -> L1e
            boolean r3 = a(r0, r3)     // Catch: java.lang.Throwable -> L1e
            if (r3 != 0) goto L72
            com.igexin.b.a.c.a.c r3 = com.igexin.b.a.c.a.c.a()     // Catch: java.lang.Throwable -> L1e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1e
            r0.<init>()     // Catch: java.lang.Throwable -> L1e
            java.lang.String r1 = "call - > initialize, parameter [userServiceName] is set, but didn't find class \""
            r0.append(r1)     // Catch: java.lang.Throwable -> L1e
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> L1e
            r0.append(r4)     // Catch: java.lang.Throwable -> L1e
            java.lang.String r4 = "\", please check your AndroidManifest"
            r0.append(r4)     // Catch: java.lang.Throwable -> L1e
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L1e
            r3.a(r4)     // Catch: java.lang.Throwable -> L1e
            return r2
        L72:
            if (r4 == 0) goto L9c
            java.lang.String r3 = r4.getName()     // Catch: java.lang.Throwable -> L1e
            java.lang.Class.forName(r3)     // Catch: java.lang.Throwable -> L1e
            goto L9c
        L7c:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = com.igexin.push.util.a.a
            r4.append(r0)
            java.lang.String r0 = "|"
            r4.append(r0)
            java.lang.String r3 = r3.toString()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.Object[] r4 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r3, r4)
            return r2
        L9c:
            r2 = 1
            return r2
    }

    public static boolean a(org.json.JSONObject r20) {
            java.lang.String r0 = "do_dismatch"
            java.lang.String r1 = "do_failed"
            java.lang.String r2 = "do_uninstalled"
            java.lang.String r3 = "do_match"
            java.lang.String r4 = "do_installed"
            java.lang.String r5 = "noinstall_action"
            java.lang.String r6 = "buttons"
            java.lang.String r7 = "type"
            java.lang.String r8 = "actionid"
            java.util.HashMap r10 = new java.util.HashMap     // Catch: java.lang.Throwable -> L1f1
            r10.<init>()     // Catch: java.lang.Throwable -> L1f1
            java.lang.String r11 = "action_chains"
            r12 = r20
            org.json.JSONArray r11 = r12.getJSONArray(r11)     // Catch: java.lang.Throwable -> L1f1
            r12 = 0
        L20:
            int r13 = r11.length()     // Catch: java.lang.Throwable -> L1f1
            r14 = 1
            if (r12 >= r13) goto L168
            java.lang.Object r13 = r11.get(r12)     // Catch: java.lang.Throwable -> L1f1
            org.json.JSONObject r13 = (org.json.JSONObject) r13     // Catch: java.lang.Throwable -> L1f1
            com.igexin.push.core.bean.c r15 = new com.igexin.push.core.bean.c     // Catch: java.lang.Throwable -> L1f1
            r15.<init>()     // Catch: java.lang.Throwable -> L1f1
            boolean r16 = r13.has(r8)     // Catch: java.lang.Throwable -> L1f1
            if (r16 != 0) goto L40
        L38:
            r19 = r6
            r17 = r7
            r18 = r8
            goto L15e
        L40:
            java.lang.String r9 = r13.getString(r8)     // Catch: java.lang.Throwable -> L1f1
            r15.a(r9)     // Catch: java.lang.Throwable -> L1f1
            java.lang.String r9 = r15.a()     // Catch: java.lang.Throwable -> L1f1
            boolean r9 = r10.containsKey(r9)     // Catch: java.lang.Throwable -> L1f1
            if (r9 == 0) goto L52
            return r14
        L52:
            java.util.ArrayList r9 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L1f1
            r9.<init>()     // Catch: java.lang.Throwable -> L1f1
            boolean r14 = r13.has(r7)     // Catch: java.lang.Throwable -> L1f1
            if (r14 != 0) goto L5e
            goto L38
        L5e:
            java.lang.String r14 = r13.getString(r7)     // Catch: java.lang.Throwable -> L1f1
            r17 = r7
            java.lang.String r7 = "popup"
            boolean r7 = r7.equals(r14)     // Catch: java.lang.Throwable -> L1f1
            r18 = r8
            java.lang.String r8 = "do"
            if (r7 == 0) goto Lb0
            boolean r7 = r13.has(r6)     // Catch: java.lang.Throwable -> L1f1
            if (r7 == 0) goto L9f
            org.json.JSONArray r7 = r13.getJSONArray(r6)     // Catch: java.lang.Throwable -> L1f1
            r19 = r6
            r14 = 0
        L7d:
            int r6 = r7.length()     // Catch: java.lang.Throwable -> L1f1
            if (r14 >= r6) goto La1
            java.lang.Object r6 = r7.get(r14)     // Catch: java.lang.Throwable -> L1f1
            org.json.JSONObject r6 = (org.json.JSONObject) r6     // Catch: java.lang.Throwable -> L1f1
            boolean r6 = r6.has(r8)     // Catch: java.lang.Throwable -> L1f1
            if (r6 == 0) goto L9c
            java.lang.Object r6 = r7.get(r14)     // Catch: java.lang.Throwable -> L1f1
            org.json.JSONObject r6 = (org.json.JSONObject) r6     // Catch: java.lang.Throwable -> L1f1
            java.lang.String r6 = r6.getString(r8)     // Catch: java.lang.Throwable -> L1f1
            r9.add(r6)     // Catch: java.lang.Throwable -> L1f1
        L9c:
            int r14 = r14 + 1
            goto L7d
        L9f:
            r19 = r6
        La1:
            boolean r6 = r13.has(r8)     // Catch: java.lang.Throwable -> L1f1
            if (r6 == 0) goto L154
            java.lang.String r6 = r13.getString(r8)     // Catch: java.lang.Throwable -> L1f1
        Lab:
            r9.add(r6)     // Catch: java.lang.Throwable -> L1f1
            goto L154
        Lb0:
            r19 = r6
            java.lang.String r6 = "startapp"
            boolean r6 = r6.equals(r14)     // Catch: java.lang.Throwable -> L1f1
            if (r6 == 0) goto Ld2
            boolean r6 = r13.has(r5)     // Catch: java.lang.Throwable -> L1f1
            if (r6 == 0) goto Lc7
            java.lang.String r6 = r13.getString(r5)     // Catch: java.lang.Throwable -> L1f1
            r9.add(r6)     // Catch: java.lang.Throwable -> L1f1
        Lc7:
            boolean r6 = r13.has(r8)     // Catch: java.lang.Throwable -> L1f1
            if (r6 == 0) goto L154
            java.lang.String r6 = r13.getString(r8)     // Catch: java.lang.Throwable -> L1f1
            goto Lab
        Ld2:
            java.lang.String r6 = "checkapp"
            boolean r6 = r6.equals(r14)     // Catch: java.lang.Throwable -> L1f1
            if (r6 == 0) goto Lf2
            boolean r6 = r13.has(r4)     // Catch: java.lang.Throwable -> L1f1
            if (r6 == 0) goto Le7
            java.lang.String r6 = r13.getString(r4)     // Catch: java.lang.Throwable -> L1f1
            r9.add(r6)     // Catch: java.lang.Throwable -> L1f1
        Le7:
            boolean r6 = r13.has(r2)     // Catch: java.lang.Throwable -> L1f1
            if (r6 == 0) goto L154
            java.lang.String r6 = r13.getString(r2)     // Catch: java.lang.Throwable -> L1f1
            goto Lab
        Lf2:
            java.lang.String r6 = "checkversions"
            boolean r6 = r6.equals(r14)     // Catch: java.lang.Throwable -> L1f1
            if (r6 == 0) goto L11f
            boolean r6 = r13.has(r3)     // Catch: java.lang.Throwable -> L1f1
            if (r6 == 0) goto L107
            java.lang.String r6 = r13.getString(r3)     // Catch: java.lang.Throwable -> L1f1
            r9.add(r6)     // Catch: java.lang.Throwable -> L1f1
        L107:
            boolean r6 = r13.has(r0)     // Catch: java.lang.Throwable -> L1f1
            if (r6 == 0) goto L114
            java.lang.String r6 = r13.getString(r0)     // Catch: java.lang.Throwable -> L1f1
            r9.add(r6)     // Catch: java.lang.Throwable -> L1f1
        L114:
            boolean r6 = r13.has(r8)     // Catch: java.lang.Throwable -> L1f1
            if (r6 == 0) goto L154
            java.lang.String r6 = r13.getString(r8)     // Catch: java.lang.Throwable -> L1f1
            goto Lab
        L11f:
            java.lang.String r6 = "startintent"
            boolean r6 = r6.equals(r14)     // Catch: java.lang.Throwable -> L1f1
            if (r6 == 0) goto L140
            boolean r6 = r13.has(r1)     // Catch: java.lang.Throwable -> L1f1
            if (r6 == 0) goto L134
            java.lang.String r6 = r13.getString(r1)     // Catch: java.lang.Throwable -> L1f1
            r9.add(r6)     // Catch: java.lang.Throwable -> L1f1
        L134:
            boolean r6 = r13.has(r8)     // Catch: java.lang.Throwable -> L1f1
            if (r6 == 0) goto L154
            java.lang.String r6 = r13.getString(r8)     // Catch: java.lang.Throwable -> L1f1
            goto Lab
        L140:
            java.lang.String r6 = "null"
            boolean r6 = r6.equals(r14)     // Catch: java.lang.Throwable -> L1f1
            if (r6 != 0) goto L154
            boolean r6 = r13.has(r8)     // Catch: java.lang.Throwable -> L1f1
            if (r6 == 0) goto L154
            java.lang.String r6 = r13.getString(r8)     // Catch: java.lang.Throwable -> L1f1
            goto Lab
        L154:
            r15.a(r9)     // Catch: java.lang.Throwable -> L1f1
            java.lang.String r6 = r15.a()     // Catch: java.lang.Throwable -> L1f1
            r10.put(r6, r15)     // Catch: java.lang.Throwable -> L1f1
        L15e:
            int r12 = r12 + 1
            r7 = r17
            r8 = r18
            r6 = r19
            goto L20
        L168:
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L1f1
            java.util.Collection r1 = r10.values()     // Catch: java.lang.Throwable -> L1f1
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L1f1
            java.util.Set r1 = r10.entrySet()     // Catch: java.lang.Throwable -> L1f1
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L1f1
        L179:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L1f1
            if (r2 == 0) goto L1b7
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L1f1
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.lang.Throwable -> L1f1
            java.lang.Object r2 = r2.getValue()     // Catch: java.lang.Throwable -> L1f1
            com.igexin.push.core.bean.c r2 = (com.igexin.push.core.bean.c) r2     // Catch: java.lang.Throwable -> L1f1
            java.util.List r2 = r2.b()     // Catch: java.lang.Throwable -> L1f1
            if (r2 != 0) goto L192
            goto L179
        L192:
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L1f1
        L196:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L1f1
            if (r3 == 0) goto L179
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L1f1
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L1f1
            java.lang.Object r3 = r10.get(r3)     // Catch: java.lang.Throwable -> L1f1
            com.igexin.push.core.bean.c r3 = (com.igexin.push.core.bean.c) r3     // Catch: java.lang.Throwable -> L1f1
            if (r3 == 0) goto L196
            r3.d()     // Catch: java.lang.Throwable -> L1f1
            boolean r4 = r0.contains(r3)     // Catch: java.lang.Throwable -> L1f1
            if (r4 == 0) goto L196
            r0.remove(r3)     // Catch: java.lang.Throwable -> L1f1
            goto L196
        L1b7:
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L1f1
        L1bb:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L1f1
            if (r1 == 0) goto L1cf
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L1f1
            com.igexin.push.core.bean.c r1 = (com.igexin.push.core.bean.c) r1     // Catch: java.lang.Throwable -> L1f1
            java.lang.String r1 = r1.a()     // Catch: java.lang.Throwable -> L1f1
            a(r10, r1)     // Catch: java.lang.Throwable -> L1f1
            goto L1bb
        L1cf:
            int r0 = r10.size()     // Catch: java.lang.Throwable -> L1f1
            if (r0 <= 0) goto L1ef
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1f1
            r0.<init>()     // Catch: java.lang.Throwable -> L1f1
            java.lang.String r1 = com.igexin.push.util.a.a     // Catch: java.lang.Throwable -> L1f1
            r0.append(r1)     // Catch: java.lang.Throwable -> L1f1
            java.lang.String r1 = "|action_chains have loop nodeMap not empty"
            r0.append(r1)     // Catch: java.lang.Throwable -> L1f1
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L1f1
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L1f1
            com.igexin.b.a.c.b.a(r0, r2)     // Catch: java.lang.Throwable -> L1f1
            return r14
        L1ef:
            r1 = 0
            goto L212
        L1f1:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.igexin.push.util.a.a
            r1.append(r2)
            java.lang.String r2 = "|isHaveLoop exception :"
            r1.append(r2)
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r2)
        L212:
            return r1
    }

    public static boolean b() {
            android.content.Context r0 = com.igexin.push.core.d.g
            java.lang.String r1 = "connectivity"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.net.ConnectivityManager r0 = (android.net.ConnectivityManager) r0
            android.net.NetworkInfo r0 = r0.getActiveNetworkInfo()
            r1 = 1
            if (r0 == 0) goto L18
            int r0 = r0.getType()
            if (r0 != r1) goto L18
            goto L19
        L18:
            r1 = 0
        L19:
            return r1
    }

    public static boolean b(android.content.Context r10) {
            r0 = 1
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L93
            r2 = 24
            r3 = 0
            if (r1 < r2) goto L27
            java.lang.String r1 = "notification"
            java.lang.Object r10 = r10.getSystemService(r1)     // Catch: java.lang.Throwable -> L93
            android.app.NotificationManager r10 = (android.app.NotificationManager) r10     // Catch: java.lang.Throwable -> L93
            java.lang.Class<android.app.NotificationManager> r1 = android.app.NotificationManager.class
            java.lang.String r2 = "areNotificationsEnabled"
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L93
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r2, r4)     // Catch: java.lang.Throwable -> L93
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L93
            java.lang.Object r10 = r1.invoke(r10, r2)     // Catch: java.lang.Throwable -> L93
            java.lang.Boolean r10 = (java.lang.Boolean) r10     // Catch: java.lang.Throwable -> L93
            boolean r10 = r10.booleanValue()     // Catch: java.lang.Throwable -> L93
            return r10
        L27:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L93
            r2 = 19
            if (r1 < r2) goto L93
            java.lang.String r1 = "appops"
            java.lang.Object r1 = r10.getSystemService(r1)     // Catch: java.lang.Throwable -> L93
            android.app.AppOpsManager r1 = (android.app.AppOpsManager) r1     // Catch: java.lang.Throwable -> L93
            android.content.pm.ApplicationInfo r2 = r10.getApplicationInfo()     // Catch: java.lang.Throwable -> L93
            android.content.Context r10 = r10.getApplicationContext()     // Catch: java.lang.Throwable -> L93
            java.lang.String r10 = r10.getPackageName()     // Catch: java.lang.Throwable -> L93
            int r2 = r2.uid     // Catch: java.lang.Throwable -> L93
            java.lang.Class<android.app.AppOpsManager> r4 = android.app.AppOpsManager.class
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> L93
            java.lang.Class r4 = java.lang.Class.forName(r4)     // Catch: java.lang.Throwable -> L93
            java.lang.String r5 = "checkOpNoThrow"
            r6 = 3
            java.lang.Class[] r7 = new java.lang.Class[r6]     // Catch: java.lang.Throwable -> L93
            java.lang.Class r8 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> L93
            r7[r3] = r8     // Catch: java.lang.Throwable -> L93
            java.lang.Class r8 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> L93
            r7[r0] = r8     // Catch: java.lang.Throwable -> L93
            java.lang.Class<java.lang.String> r8 = java.lang.String.class
            r9 = 2
            r7[r9] = r8     // Catch: java.lang.Throwable -> L93
            java.lang.reflect.Method r5 = r4.getMethod(r5, r7)     // Catch: java.lang.Throwable -> L93
            java.lang.String r7 = "OP_POST_NOTIFICATION"
            java.lang.reflect.Field r4 = r4.getDeclaredField(r7)     // Catch: java.lang.Throwable -> L93
            java.lang.Class<java.lang.Integer> r7 = java.lang.Integer.class
            java.lang.Object r4 = r4.get(r7)     // Catch: java.lang.Throwable -> L93
            java.lang.Integer r4 = (java.lang.Integer) r4     // Catch: java.lang.Throwable -> L93
            int r4 = r4.intValue()     // Catch: java.lang.Throwable -> L93
            java.lang.Object[] r6 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L93
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L93
            r6[r3] = r4     // Catch: java.lang.Throwable -> L93
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L93
            r6[r0] = r2     // Catch: java.lang.Throwable -> L93
            r6[r9] = r10     // Catch: java.lang.Throwable -> L93
            java.lang.Object r10 = r5.invoke(r1, r6)     // Catch: java.lang.Throwable -> L93
            java.lang.Integer r10 = (java.lang.Integer) r10     // Catch: java.lang.Throwable -> L93
            int r10 = r10.intValue()     // Catch: java.lang.Throwable -> L93
            if (r10 != 0) goto L92
            goto L93
        L92:
            r0 = r3
        L93:
            return r0
    }

    public static boolean b(android.content.Intent r1, android.content.Context r2) {
            r0 = 0
            if (r1 == 0) goto L15
            if (r2 != 0) goto L6
            goto L15
        L6:
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Throwable -> L15
            java.util.List r1 = r2.queryIntentActivities(r1, r0)     // Catch: java.lang.Throwable -> L15
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L15
            if (r1 <= 0) goto L15
            r0 = 1
        L15:
            return r0
    }

    public static boolean b(java.lang.String r4) {
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L4d
            if (r1 != 0) goto L4d
            java.lang.String r1 = com.igexin.push.config.j.q     // Catch: java.lang.Throwable -> L4d
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L4d
            if (r1 != 0) goto L4d
            java.lang.String r1 = "none"
            java.lang.String r2 = com.igexin.push.config.j.q     // Catch: java.lang.Throwable -> L4d
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Throwable -> L4d
            if (r1 == 0) goto L1a
            goto L4d
        L1a:
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L4d
            r1.<init>()     // Catch: java.lang.Throwable -> L4d
            java.lang.String r2 = com.igexin.push.config.j.q     // Catch: java.lang.Throwable -> L4d
            java.lang.String r3 = ","
            java.lang.String[] r2 = r2.split(r3)     // Catch: java.lang.Throwable -> L4d
            java.util.List r2 = java.util.Arrays.asList(r2)     // Catch: java.lang.Throwable -> L4d
            r1.addAll(r2)     // Catch: java.lang.Throwable -> L4d
            boolean r2 = r1.isEmpty()     // Catch: java.lang.Throwable -> L4d
            if (r2 == 0) goto L35
            return r0
        L35:
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L4d
        L39:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L4d
            if (r2 == 0) goto L4d
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L4d
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L4d
            boolean r2 = r4.contains(r2)     // Catch: java.lang.Throwable -> L4d
            if (r2 == 0) goto L39
            r4 = 1
            return r4
        L4d:
            return r0
    }

    public static void c() {
            android.content.Context r0 = com.igexin.push.core.d.g
            java.lang.String r1 = "connectivity"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.net.ConnectivityManager r0 = (android.net.ConnectivityManager) r0
            r1 = 1
            android.net.NetworkInfo r0 = r0.getNetworkInfo(r1)
            android.net.NetworkInfo$State r0 = r0.getState()
            android.net.NetworkInfo$State r2 = android.net.NetworkInfo.State.CONNECTED
            if (r0 == r2) goto L20
            android.net.NetworkInfo$State r2 = android.net.NetworkInfo.State.CONNECTING
            if (r0 != r2) goto L1c
            goto L20
        L1c:
            r0 = 0
            com.igexin.push.core.d.r = r0
            goto L22
        L20:
            com.igexin.push.core.d.r = r1
        L22:
            return
    }

    public static void c(android.content.Context r5) {
            if (r5 == 0) goto L1b5
            android.content.Context r5 = r5.getApplicationContext()
            android.content.pm.ApplicationInfo r0 = r5.getApplicationInfo()
            int r0 = r0.flags
            r0 = r0 & 2
            if (r0 != 0) goto L11
            return
        L11:
            boolean r0 = e(r5)
            if (r0 == 0) goto L1ad
            android.content.pm.PackageManager r0 = r5.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L74
            java.lang.String r1 = r5.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L74
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo(r1, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L74
            android.os.Bundle r1 = r0.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L74
            if (r1 == 0) goto L6c
            android.os.Bundle r1 = r0.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L74
            java.lang.String r2 = "PUSH_APPID"
            java.lang.String r1 = r1.getString(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L74
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L74
            if (r1 != 0) goto L64
            android.os.Bundle r1 = r0.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L74
            java.lang.String r2 = "PUSH_APPSECRET"
            java.lang.String r1 = r1.getString(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L74
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L74
            if (r1 != 0) goto L5c
            android.os.Bundle r0 = r0.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L74
            java.lang.String r1 = "PUSH_APPKEY"
            java.lang.String r0 = r0.getString(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L74
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L74
            if (r0 != 0) goto L54
            goto L78
        L54:
            com.igexin.sdk.GetuiPushException r0 = new com.igexin.sdk.GetuiPushException     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L74
            java.lang.String r1 = "未配置个推APPKEY"
            r0.<init>(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L74
            throw r0     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L74
        L5c:
            com.igexin.sdk.GetuiPushException r0 = new com.igexin.sdk.GetuiPushException     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L74
            java.lang.String r1 = "未配置个推APPSECRET"
            r0.<init>(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L74
            throw r0     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L74
        L64:
            com.igexin.sdk.GetuiPushException r0 = new com.igexin.sdk.GetuiPushException     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L74
            java.lang.String r1 = "未配置个推APPID"
            r0.<init>(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L74
            throw r0     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L74
        L6c:
            com.igexin.sdk.GetuiPushException r0 = new com.igexin.sdk.GetuiPushException     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L74
            java.lang.String r1 = "未配置META-DATA"
            r0.<init>(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L74
            throw r0     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L74
        L74:
            r0 = move-exception
            r0.printStackTrace()
        L78:
            android.content.pm.PackageManager r0 = r5.getPackageManager()
            android.content.Intent r1 = new android.content.Intent
            java.lang.Class<com.igexin.sdk.PushService> r2 = com.igexin.sdk.PushService.class
            r1.<init>(r5, r2)
            r2 = 0
            java.util.List r0 = r0.queryIntentServices(r1, r2)
            int r1 = r0.size()
            if (r1 == 0) goto L1a5
            java.lang.Object r0 = r0.get(r2)
            android.content.pm.ResolveInfo r0 = (android.content.pm.ResolveInfo) r0
            android.content.pm.ServiceInfo r0 = r0.serviceInfo
            java.lang.String r1 = ":pushservice"
            if (r0 == 0) goto Lab
            java.lang.String r0 = r0.processName
            boolean r0 = r0.endsWith(r1)
            if (r0 == 0) goto La3
            goto Lab
        La3:
            com.igexin.sdk.GetuiPushException r5 = new com.igexin.sdk.GetuiPushException
            java.lang.String r0 = "PushService需配置在pushservice进程"
            r5.<init>(r0)
            throw r5
        Lab:
            android.content.pm.PackageManager r0 = r5.getPackageManager()
            android.content.Intent r3 = new android.content.Intent
            java.lang.Class<com.igexin.sdk.PushReceiver> r4 = com.igexin.sdk.PushReceiver.class
            r3.<init>(r5, r4)
            java.util.List r0 = r0.queryBroadcastReceivers(r3, r2)
            int r0 = r0.size()
            if (r0 == 0) goto L19d
            android.content.pm.PackageManager r0 = r5.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
            java.lang.String r2 = r5.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
            r3 = 4096(0x1000, float:5.74E-42)
            android.content.pm.PackageInfo r0 = r0.getPackageInfo(r2, r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
            if (r0 == 0) goto L148
            java.lang.String[] r0 = r0.requestedPermissions     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
            if (r0 == 0) goto L13c
            int r2 = r0.length     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
            if (r2 == 0) goto L13c
            java.util.List r0 = java.util.Arrays.asList(r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
            java.lang.String r2 = "android.permission.INTERNET"
            boolean r2 = r0.contains(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
            if (r2 == 0) goto L134
            java.lang.String r2 = "android.permission.READ_PHONE_STATE"
            boolean r2 = r0.contains(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
            if (r2 == 0) goto L12c
            java.lang.String r2 = "android.permission.ACCESS_NETWORK_STATE"
            boolean r2 = r0.contains(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
            if (r2 == 0) goto L124
            java.lang.String r2 = "android.permission.ACCESS_WIFI_STATE"
            boolean r2 = r0.contains(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
            if (r2 == 0) goto L11c
            java.lang.String r2 = "android.permission.WRITE_EXTERNAL_STORAGE"
            boolean r2 = r0.contains(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
            if (r2 == 0) goto L114
            java.lang.String r2 = "android.permission.VIBRATE"
            boolean r0 = r0.contains(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
            if (r0 == 0) goto L10c
            goto L148
        L10c:
            com.igexin.sdk.GetuiPushException r0 = new com.igexin.sdk.GetuiPushException     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
            java.lang.String r2 = "未在Manifest中配置所需权限：android.permission.VIBRATE"
            r0.<init>(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
            throw r0     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
        L114:
            com.igexin.sdk.GetuiPushException r0 = new com.igexin.sdk.GetuiPushException     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
            java.lang.String r2 = "未在Manifest中配置所需权限：android.permission.WRITE_EXTERNAL_STORAGE"
            r0.<init>(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
            throw r0     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
        L11c:
            com.igexin.sdk.GetuiPushException r0 = new com.igexin.sdk.GetuiPushException     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
            java.lang.String r2 = "未在Manifest中配置所需权限：android.permission.ACCESS_WIFI_STATE"
            r0.<init>(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
            throw r0     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
        L124:
            com.igexin.sdk.GetuiPushException r0 = new com.igexin.sdk.GetuiPushException     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
            java.lang.String r2 = "未在Manifest中配置所需权限：android.permission.ACCESS_NETWORK_STATE"
            r0.<init>(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
            throw r0     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
        L12c:
            com.igexin.sdk.GetuiPushException r0 = new com.igexin.sdk.GetuiPushException     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
            java.lang.String r2 = "未在Manifest中配置所需权限：android.permission.READ_PHONE_STATE"
            r0.<init>(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
            throw r0     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
        L134:
            com.igexin.sdk.GetuiPushException r0 = new com.igexin.sdk.GetuiPushException     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
            java.lang.String r2 = "未在Manifest中配置所需权限：android.permission.INTERNET"
            r0.<init>(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
            throw r0     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
        L13c:
            com.igexin.sdk.GetuiPushException r0 = new com.igexin.sdk.GetuiPushException     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
            java.lang.String r2 = "Manifest中无权限配置"
            r0.<init>(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
            throw r0     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L144
        L144:
            r0 = move-exception
            r0.printStackTrace()
        L148:
            java.lang.Class<com.igexin.sdk.PushService> r0 = com.igexin.sdk.PushService.class
            android.util.Pair r0 = com.igexin.push.util.b.a(r5, r0)
            java.lang.Object r0 = r0.first
            android.content.pm.ServiceInfo r0 = (android.content.pm.ServiceInfo) r0
            if (r0 == 0) goto L195
            java.lang.String r2 = r0.processName
            boolean r1 = r2.endsWith(r1)
            if (r1 == 0) goto L18d
            boolean r1 = r0.exported
            if (r1 == 0) goto L185
            java.lang.String r0 = r0.permission
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L17d
            java.lang.Class<com.igexin.sdk.GTIntentService> r0 = com.igexin.sdk.GTIntentService.class
            android.util.Pair r5 = com.igexin.push.util.b.a(r5, r0)
            java.lang.Object r5 = r5.first
            android.content.pm.ServiceInfo r5 = (android.content.pm.ServiceInfo) r5
            if (r5 == 0) goto L175
            return
        L175:
            com.igexin.sdk.GetuiPushException r5 = new com.igexin.sdk.GetuiPushException
            java.lang.String r0 = "未找到继承 com.igexin.sdk.GTIntentService 的子类"
            r5.<init>(r0)
            throw r5
        L17d:
            com.igexin.sdk.GetuiPushException r5 = new com.igexin.sdk.GetuiPushException
            java.lang.String r0 = "自定义推送服务(Service)不能配置android:permission"
            r5.<init>(r0)
            throw r5
        L185:
            com.igexin.sdk.GetuiPushException r5 = new com.igexin.sdk.GetuiPushException
            java.lang.String r0 = "自定义推送服务(Service).exported需配置为true"
            r5.<init>(r0)
            throw r5
        L18d:
            com.igexin.sdk.GetuiPushException r5 = new com.igexin.sdk.GetuiPushException
            java.lang.String r0 = "自定义推送服务(Service)需配置在pushservice进程"
            r5.<init>(r0)
            throw r5
        L195:
            com.igexin.sdk.GetuiPushException r5 = new com.igexin.sdk.GetuiPushException
            java.lang.String r0 = "未找到继承 com.igexin.sdk.PushService 的子类"
            r5.<init>(r0)
            throw r5
        L19d:
            com.igexin.sdk.GetuiPushException r5 = new com.igexin.sdk.GetuiPushException
            java.lang.String r0 = "未集成com.igexin.sdk.PushReceiver"
            r5.<init>(r0)
            throw r5
        L1a5:
            com.igexin.sdk.GetuiPushException r5 = new com.igexin.sdk.GetuiPushException
            java.lang.String r0 = "未集成com.igexin.sdk.PushService"
            r5.<init>(r0)
            throw r5
        L1ad:
            com.igexin.sdk.GetuiPushException r5 = new com.igexin.sdk.GetuiPushException
            java.lang.String r0 = "libgetuiext3.so不存在"
            r5.<init>(r0)
            throw r5
        L1b5:
            com.igexin.sdk.GetuiPushException r5 = new com.igexin.sdk.GetuiPushException
            java.lang.String r0 = "传入的context为空"
            r5.<init>(r0)
            throw r5
    }

    public static void d() {
            android.content.Context r0 = com.igexin.push.core.d.g
            java.lang.String r1 = "power"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.os.PowerManager r0 = (android.os.PowerManager) r0
            boolean r0 = r0.isScreenOn()
            if (r0 == 0) goto L12
            r0 = 1
            goto L13
        L12:
            r0 = 0
        L13:
            com.igexin.push.core.d.s = r0
            return
    }

    public static boolean d(android.content.Context r2) {
            java.lang.Integer r0 = com.igexin.push.util.a.b
            r1 = 1
            if (r0 != 0) goto L1b
            android.content.pm.ApplicationInfo r2 = r2.getApplicationInfo()
            int r2 = r2.flags
            r2 = r2 & 2
            if (r2 != 0) goto L15
            r2 = -1
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            goto L19
        L15:
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)
        L19:
            com.igexin.push.util.a.b = r2
        L1b:
            java.lang.Integer r2 = com.igexin.push.util.a.b
            int r2 = r2.intValue()
            if (r2 <= 0) goto L24
            goto L25
        L24:
            r1 = 0
        L25:
            return r1
    }

    public static boolean e() {
            java.lang.String r0 = com.igexin.push.config.j.p     // Catch: java.lang.Throwable -> L23
            java.lang.String r1 = ","
            java.lang.String[] r0 = r0.split(r1)     // Catch: java.lang.Throwable -> L23
            int r1 = r0.length     // Catch: java.lang.Throwable -> L23
            r2 = 0
            r3 = r2
        Lb:
            if (r3 >= r1) goto L23
            r4 = r0[r3]     // Catch: java.lang.Throwable -> L23
            java.lang.String r5 = android.os.Build.MODEL     // Catch: java.lang.Throwable -> L23
            java.lang.String r5 = r5.toLowerCase()     // Catch: java.lang.Throwable -> L23
            java.lang.String r4 = r4.toLowerCase()     // Catch: java.lang.Throwable -> L23
            boolean r4 = r5.contains(r4)     // Catch: java.lang.Throwable -> L23
            if (r4 == 0) goto L20
            return r2
        L20:
            int r3 = r3 + 1
            goto Lb
        L23:
            r0 = 1
            return r0
    }

    private static boolean e(android.content.Context r3) {
            java.io.File r0 = new java.io.File
            android.content.pm.ApplicationInfo r3 = r3.getApplicationInfo()
            java.lang.String r3 = r3.nativeLibraryDir
            java.lang.String r1 = "libgetuiext3.so"
            r0.<init>(r3, r1)
            boolean r3 = r0.exists()
            if (r3 != 0) goto L51
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "libgetuiext3.so not found in path: "
            r3.append(r1)
            java.lang.String r0 = r0.getAbsolutePath()
            r3.append(r0)
            java.lang.String r0 = " please check!"
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            com.igexin.b.a.c.a.c r0 = com.igexin.b.a.c.a.c.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "["
            r1.append(r2)
            java.lang.String r2 = com.igexin.push.util.a.a
            r1.append(r2)
            java.lang.String r2 = "] "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.a(r3)
            r3 = 0
            return r3
        L51:
            r3 = 1
            return r3
    }

    public static boolean f() {
            r0 = 0
            android.content.Context r1 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L99
            java.lang.String r2 = "connectivity"
            java.lang.Object r1 = r1.getSystemService(r2)     // Catch: java.lang.Throwable -> L99
            android.net.ConnectivityManager r1 = (android.net.ConnectivityManager) r1     // Catch: java.lang.Throwable -> L99
            if (r1 != 0) goto L26
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L99
            r1.<init>()     // Catch: java.lang.Throwable -> L99
            java.lang.String r2 = com.igexin.push.util.a.a     // Catch: java.lang.Throwable -> L99
            r1.append(r2)     // Catch: java.lang.Throwable -> L99
            java.lang.String r2 = "|ConnectivityManager is null"
            r1.append(r2)     // Catch: java.lang.Throwable -> L99
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L99
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L99
            com.igexin.b.a.c.b.a(r1, r2)     // Catch: java.lang.Throwable -> L99
            return r0
        L26:
            android.net.NetworkInfo r1 = r1.getActiveNetworkInfo()     // Catch: java.lang.Throwable -> L99
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L99
            r2.<init>()     // Catch: java.lang.Throwable -> L99
            java.lang.String r3 = com.igexin.push.util.a.a     // Catch: java.lang.Throwable -> L99
            r2.append(r3)     // Catch: java.lang.Throwable -> L99
            java.lang.String r3 = "|activeNetworkInfo = "
            r2.append(r3)     // Catch: java.lang.Throwable -> L99
            r2.append(r1)     // Catch: java.lang.Throwable -> L99
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L99
            java.lang.Object[] r3 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L99
            com.igexin.b.a.c.b.a(r2, r3)     // Catch: java.lang.Throwable -> L99
            if (r1 == 0) goto L80
            android.net.NetworkInfo$State r2 = r1.getState()     // Catch: java.lang.Throwable -> L99
            android.net.NetworkInfo$State r3 = android.net.NetworkInfo.State.CONNECTED     // Catch: java.lang.Throwable -> L99
            if (r2 != r3) goto L80
            int r2 = r1.getType()     // Catch: java.lang.Throwable -> L99
            r3 = 1
            if (r2 != 0) goto L59
            java.lang.String r1 = "mobile"
            goto L64
        L59:
            int r1 = r1.getType()     // Catch: java.lang.Throwable -> L99
            if (r1 != r3) goto L62
            java.lang.String r1 = "wifi"
            goto L64
        L62:
            java.lang.String r1 = "none"
        L64:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L99
            r2.<init>()     // Catch: java.lang.Throwable -> L99
            java.lang.String r4 = com.igexin.push.util.a.a     // Catch: java.lang.Throwable -> L99
            r2.append(r4)     // Catch: java.lang.Throwable -> L99
            r2.append(r1)     // Catch: java.lang.Throwable -> L99
            java.lang.String r1 = "|connected"
            r2.append(r1)     // Catch: java.lang.Throwable -> L99
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L99
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L99
            com.igexin.b.a.c.b.a(r1, r2)     // Catch: java.lang.Throwable -> L99
            return r3
        L80:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L99
            r1.<init>()     // Catch: java.lang.Throwable -> L99
            java.lang.String r2 = com.igexin.push.util.a.a     // Catch: java.lang.Throwable -> L99
            r1.append(r2)     // Catch: java.lang.Throwable -> L99
            java.lang.String r2 = "|network available = false"
            r1.append(r2)     // Catch: java.lang.Throwable -> L99
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L99
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L99
            com.igexin.b.a.c.b.a(r1, r2)     // Catch: java.lang.Throwable -> L99
            goto Lb9
        L99:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = com.igexin.push.util.a.a
            r2.append(r3)
            java.lang.String r3 = "|network available ex ="
            r2.append(r3)
            java.lang.String r1 = r1.toString()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.Object[] r2 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r1, r2)
        Lb9:
            return r0
    }

    public static boolean g() {
            long r0 = java.lang.System.currentTimeMillis()
            r2 = 1182566108138(0x113566ecbea, double:5.84265287967E-312)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto Lf
            r0 = 0
            return r0
        Lf:
            r0 = 1
            return r0
    }

    public static boolean h() {
            java.lang.String r0 = "~"
            java.lang.String r1 = "|"
            java.lang.String r2 = com.igexin.push.config.j.s
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            r4 = 0
            if (r3 == 0) goto Le
            return r4
        Le:
            java.lang.String r3 = ","
            java.lang.String[] r2 = r2.split(r3)     // Catch: java.lang.Throwable -> L64
            int r3 = r2.length     // Catch: java.lang.Throwable -> L64
            r5 = r4
        L16:
            if (r5 >= r3) goto L64
            r6 = r2[r5]     // Catch: java.lang.Throwable -> L64
            boolean r7 = r6.contains(r1)     // Catch: java.lang.Throwable -> L64
            if (r7 == 0) goto L61
            boolean r7 = r6.contains(r0)     // Catch: java.lang.Throwable -> L64
            if (r7 != 0) goto L27
            goto L61
        L27:
            int r7 = r6.indexOf(r1)     // Catch: java.lang.Throwable -> L64
            java.lang.String r7 = r6.substring(r4, r7)     // Catch: java.lang.Throwable -> L64
            int r8 = r6.indexOf(r1)     // Catch: java.lang.Throwable -> L64
            r9 = 1
            int r8 = r8 + r9
            java.lang.String r6 = r6.substring(r8)     // Catch: java.lang.Throwable -> L64
            java.lang.String[] r6 = r6.split(r0)     // Catch: java.lang.Throwable -> L64
            int r8 = r6.length     // Catch: java.lang.Throwable -> L64
            r10 = 2
            if (r8 == r10) goto L42
            goto L61
        L42:
            r8 = r6[r4]     // Catch: java.lang.Throwable -> L64
            int r8 = java.lang.Integer.parseInt(r8)     // Catch: java.lang.Throwable -> L64
            r6 = r6[r9]     // Catch: java.lang.Throwable -> L64
            int r6 = java.lang.Integer.parseInt(r6)     // Catch: java.lang.Throwable -> L64
            java.lang.String r10 = com.igexin.push.util.j.a()     // Catch: java.lang.Throwable -> L64
            boolean r7 = r10.equalsIgnoreCase(r7)     // Catch: java.lang.Throwable -> L64
            if (r7 == 0) goto L61
            int r7 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L64
            if (r7 < r8) goto L61
            int r7 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L64
            if (r7 > r6) goto L61
            return r9
        L61:
            int r5 = r5 + 1
            goto L16
        L64:
            return r4
    }
}
