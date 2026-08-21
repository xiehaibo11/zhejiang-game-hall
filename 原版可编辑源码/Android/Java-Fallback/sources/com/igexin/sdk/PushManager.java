package com.igexin.sdk;

public class PushManager {
    private static final java.util.concurrent.ExecutorService a = null;
    private long b;
    private long c;
    private long d;
    private byte[] e;
    private java.lang.Class f;
    private java.lang.String g;
    private java.lang.String h;
    private com.igexin.push.core.g i;
    private java.lang.Boolean j;
    private final java.lang.String k;

    static {
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newSingleThreadExecutor()
            com.igexin.sdk.PushManager.a = r0
            return
    }

    private PushManager() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "[PushManager]"
            r1.k = r0
            return
    }

    PushManager(com.igexin.sdk.d r1) {
            r0 = this;
            r0.<init>()
            return
    }

    private int a(int r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L4f
            java.lang.String r0 = "_"
            boolean r0 = r3.contains(r0)
            if (r0 == 0) goto L4f
            r0 = 60001(0xea61, float:8.408E-41)
            if (r2 == r0) goto L19
            r0 = 60002(0xea62, float:8.4081E-41)
            if (r2 == r0) goto L19
            goto L4f
        L19:
            java.lang.String r0 = "HW_"
            boolean r0 = r3.startsWith(r0)
            if (r0 == 0) goto L24
            int r2 = r2 + 18
            return r2
        L24:
            java.lang.String r0 = "XM_"
            boolean r0 = r3.startsWith(r0)
            if (r0 == 0) goto L2f
            int r2 = r2 + 48
            return r2
        L2f:
            java.lang.String r0 = "OP_"
            boolean r0 = r3.startsWith(r0)
            if (r0 == 0) goto L3a
            int r2 = r2 + 28
            return r2
        L3a:
            java.lang.String r0 = "VV_"
            boolean r0 = r3.startsWith(r0)
            if (r0 == 0) goto L45
            int r2 = r2 + 38
            return r2
        L45:
            java.lang.String r0 = "MZ_"
            boolean r3 = r3.startsWith(r0)
            if (r3 == 0) goto L4f
            int r2 = r2 + 58
        L4f:
            return r2
    }

    static android.app.Application a(com.igexin.sdk.PushManager r0, android.content.Context r1) {
            android.app.Application r0 = r0.d(r1)
            return r0
    }

    static com.igexin.push.core.g a(com.igexin.sdk.PushManager r0) {
            com.igexin.push.core.g r0 = r0.i
            return r0
    }

    static com.igexin.push.core.g a(com.igexin.sdk.PushManager r0, com.igexin.push.core.g r1) {
            r0.i = r1
            return r1
    }

    private java.lang.Class a(android.content.Context r2) {
            r1 = this;
            java.lang.Class r0 = r1.f
            if (r0 == 0) goto L5
            return r0
        L5:
            com.igexin.push.core.x r0 = com.igexin.push.core.x.a()
            java.lang.Class r2 = r0.c(r2)
            return r2
    }

    private java.lang.String a(java.lang.String r6) {
            r5 = this;
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Exception -> L3a
            byte[] r6 = r6.getBytes()     // Catch: java.lang.Exception -> L3a
            r0.update(r6)     // Catch: java.lang.Exception -> L3a
            byte[] r6 = r0.digest()     // Catch: java.lang.Exception -> L3a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3a
            java.lang.String r1 = ""
            r0.<init>(r1)     // Catch: java.lang.Exception -> L3a
            int r1 = r6.length     // Catch: java.lang.Exception -> L3a
            r2 = 0
        L1a:
            if (r2 >= r1) goto L35
            r3 = r6[r2]     // Catch: java.lang.Exception -> L3a
            if (r3 >= 0) goto L22
            int r3 = r3 + 256
        L22:
            r4 = 16
            if (r3 >= r4) goto L2b
            java.lang.String r4 = "0"
            r0.append(r4)     // Catch: java.lang.Exception -> L3a
        L2b:
            java.lang.String r3 = java.lang.Integer.toHexString(r3)     // Catch: java.lang.Exception -> L3a
            r0.append(r3)     // Catch: java.lang.Exception -> L3a
            int r2 = r2 + 1
            goto L1a
        L35:
            java.lang.String r6 = r0.toString()     // Catch: java.lang.Exception -> L3a
            return r6
        L3a:
            r6 = 0
            return r6
    }

    private void a(android.content.Context r5, com.igexin.sdk.message.GTCmdMessage r6) {
            r4 = this;
            com.igexin.push.core.x r0 = com.igexin.push.core.x.a()     // Catch: java.lang.Throwable -> L29
            java.lang.Class r0 = r0.d(r5)     // Catch: java.lang.Throwable -> L29
            if (r0 == 0) goto L45
            if (r5 == 0) goto L45
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Throwable -> L29
            r1.<init>(r5, r0)     // Catch: java.lang.Throwable -> L29
            android.os.Bundle r0 = new android.os.Bundle     // Catch: java.lang.Throwable -> L29
            r0.<init>()     // Catch: java.lang.Throwable -> L29
            java.lang.String r2 = "action"
            r3 = 10010(0x271a, float:1.4027E-41)
            r0.putInt(r2, r3)     // Catch: java.lang.Throwable -> L29
            java.lang.String r2 = "cmd_msg"
            r0.putSerializable(r2, r6)     // Catch: java.lang.Throwable -> L29
            r1.putExtras(r0)     // Catch: java.lang.Throwable -> L29
            r5.startService(r1)     // Catch: java.lang.Throwable -> L29
            goto L45
        L29:
            r5 = move-exception
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "PushManager|"
            r6.append(r0)
            java.lang.String r5 = r5.toString()
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            r6 = 0
            java.lang.Object[] r6 = new java.lang.Object[r6]
            com.igexin.b.a.c.b.a(r5, r6)
        L45:
            return
    }

    private void a(android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            com.igexin.sdk.message.BindAliasCmdMessage r0 = new com.igexin.sdk.message.BindAliasCmdMessage
            r1 = 10010(0x271a, float:1.4027E-41)
            r0.<init>(r4, r5, r1)
            r2.a(r3, r0)
            return
    }

    private boolean a(android.content.Context r2, android.content.Intent r3) {
            r1 = this;
            com.igexin.push.core.x r0 = com.igexin.push.core.x.a()
            boolean r2 = r0.a(r2, r3)
            return r2
    }

    private void b(android.content.Context r3) {
            r2 = this;
            com.igexin.push.core.g r0 = r2.i
            if (r0 != 0) goto L15
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 14
            if (r0 >= r1) goto Lb
            goto L15
        Lb:
            java.util.concurrent.ExecutorService r0 = com.igexin.sdk.PushManager.a
            com.igexin.sdk.d r1 = new com.igexin.sdk.d
            r1.<init>(r2, r3)
            r0.execute(r1)
        L15:
            return
    }

    private void b(android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            com.igexin.sdk.message.UnBindAliasCmdMessage r0 = new com.igexin.sdk.message.UnBindAliasCmdMessage
            r1 = 10011(0x271b, float:1.4028E-41)
            r0.<init>(r4, r5, r1)
            r2.a(r3, r0)
            return
    }

    private void c(android.content.Context r3) {
            r2 = this;
            com.igexin.push.core.g r0 = r2.i
            if (r0 == 0) goto L15
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 14
            if (r0 >= r1) goto Lb
            goto L15
        Lb:
            java.util.concurrent.ExecutorService r0 = com.igexin.sdk.PushManager.a
            com.igexin.sdk.e r1 = new com.igexin.sdk.e
            r1.<init>(r2, r3)
            r0.execute(r1)
        L15:
            return
    }

    private void c(android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            com.igexin.sdk.message.SetTagCmdMessage r0 = new com.igexin.sdk.message.SetTagCmdMessage
            r1 = 10009(0x2719, float:1.4026E-41)
            r0.<init>(r4, r5, r1)
            r2.a(r3, r0)
            return
    }

    private android.app.Application d(android.content.Context r2) {
            r1 = this;
            if (r2 == 0) goto L17
            boolean r0 = r1.e(r2)
            if (r0 != 0) goto L9
            goto L17
        L9:
            boolean r0 = r2 instanceof android.app.Application
            if (r0 == 0) goto L10
            android.app.Application r2 = (android.app.Application) r2
            return r2
        L10:
            android.content.Context r2 = r2.getApplicationContext()
            android.app.Application r2 = (android.app.Application) r2
            return r2
        L17:
            r2 = 0
            return r2
    }

    private boolean e(android.content.Context r8) {
            r7 = this;
            java.lang.Boolean r0 = r7.j
            if (r0 == 0) goto L9
            boolean r8 = r0.booleanValue()
            return r8
        L9:
            r0 = 0
            int r1 = android.os.Process.myPid()     // Catch: java.lang.Throwable -> L6b
            java.lang.String r2 = ""
            android.content.Context r3 = r8.getApplicationContext()     // Catch: java.lang.Throwable -> L6b
            java.lang.String r4 = "activity"
            java.lang.Object r3 = r3.getSystemService(r4)     // Catch: java.lang.Throwable -> L6b
            android.app.ActivityManager r3 = (android.app.ActivityManager) r3     // Catch: java.lang.Throwable -> L6b
            if (r3 != 0) goto L1f
            return r0
        L1f:
            java.lang.String r4 = "Z2V0UnVubmluZ0FwcFByb2Nlc3Nlcw=="
            java.lang.Class<android.app.ActivityManager> r5 = android.app.ActivityManager.class
            java.lang.String r6 = new java.lang.String     // Catch: java.lang.Throwable -> L6b
            byte[] r4 = android.util.Base64.decode(r4, r0)     // Catch: java.lang.Throwable -> L6b
            r6.<init>(r4)     // Catch: java.lang.Throwable -> L6b
            java.lang.Class[] r4 = new java.lang.Class[r0]     // Catch: java.lang.Throwable -> L6b
            java.lang.reflect.Method r4 = r5.getDeclaredMethod(r6, r4)     // Catch: java.lang.Throwable -> L6b
            java.lang.Object[] r5 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L6b
            java.lang.Object r3 = r4.invoke(r3, r5)     // Catch: java.lang.Throwable -> L6b
            java.util.List r3 = (java.util.List) r3     // Catch: java.lang.Throwable -> L6b
            if (r3 == 0) goto L6a
            boolean r4 = r3.isEmpty()     // Catch: java.lang.Throwable -> L6b
            if (r4 == 0) goto L43
            goto L6a
        L43:
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L6b
        L47:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L6b
            if (r4 == 0) goto L5b
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L6b
            android.app.ActivityManager$RunningAppProcessInfo r4 = (android.app.ActivityManager.RunningAppProcessInfo) r4     // Catch: java.lang.Throwable -> L6b
            if (r4 == 0) goto L47
            int r5 = r4.pid     // Catch: java.lang.Throwable -> L6b
            if (r5 != r1) goto L47
            java.lang.String r2 = r4.processName     // Catch: java.lang.Throwable -> L6b
        L5b:
            java.lang.String r8 = r8.getPackageName()     // Catch: java.lang.Throwable -> L6b
            boolean r8 = r2.equals(r8)     // Catch: java.lang.Throwable -> L6b
            java.lang.Boolean r8 = java.lang.Boolean.valueOf(r8)     // Catch: java.lang.Throwable -> L6b
            r7.j = r8     // Catch: java.lang.Throwable -> L6b
            goto L71
        L6a:
            return r0
        L6b:
            java.lang.Boolean r8 = java.lang.Boolean.valueOf(r0)
            r7.j = r8
        L71:
            java.lang.Boolean r8 = r7.j
            boolean r8 = r8.booleanValue()
            return r8
    }

    private static void f(android.content.Context r1) {
            if (r1 == 0) goto L3
            return
        L3:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "NULL context"
            r1.<init>(r0)
            throw r1
    }

    public static com.igexin.sdk.PushManager getInstance() {
            com.igexin.sdk.PushManager r0 = com.igexin.sdk.f.a()
            return r0
    }

    private <T extends android.app.Activity> void registerPushActivity(android.content.Context r5, java.lang.Class<T> r6) {
            r4 = this;
            r0 = 0
            java.lang.String r1 = "PushManager|registerPushActiviy|"
            if (r6 == 0) goto L50
            java.lang.String r2 = r6.getName()     // Catch: java.lang.Exception -> L1a java.lang.Throwable -> L74
            java.lang.Class.forName(r2)     // Catch: java.lang.Exception -> L1a java.lang.Throwable -> L74
            boolean r2 = com.igexin.push.util.a.a(r5, r6)     // Catch: java.lang.Throwable -> L74
            if (r2 != 0) goto L13
            return
        L13:
            java.lang.String r6 = r6.getName()     // Catch: java.lang.Throwable -> L74
        L17:
            r4.h = r6     // Catch: java.lang.Throwable -> L74
            goto L5a
        L1a:
            r5 = move-exception
            com.igexin.b.a.c.a.c r6 = com.igexin.b.a.c.a.c.a()     // Catch: java.lang.Throwable -> L74
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L74
            r2.<init>()     // Catch: java.lang.Throwable -> L74
            java.lang.String r3 = "[PushManager]can't load activity = "
            r2.append(r3)     // Catch: java.lang.Throwable -> L74
            java.lang.String r3 = r5.toString()     // Catch: java.lang.Throwable -> L74
            r2.append(r3)     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L74
            r6.a(r2)     // Catch: java.lang.Throwable -> L74
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L74
            r6.<init>()     // Catch: java.lang.Throwable -> L74
            r6.append(r1)     // Catch: java.lang.Throwable -> L74
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L74
            r6.append(r5)     // Catch: java.lang.Throwable -> L74
            java.lang.String r5 = r6.toString()     // Catch: java.lang.Throwable -> L74
            java.lang.Object[] r6 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L74
            com.igexin.b.a.c.b.a(r5, r6)     // Catch: java.lang.Throwable -> L74
            return
        L50:
            java.lang.String r6 = "PushManager"
            java.lang.String r2 = "call -> registerPushActiviy, parameter [activity] is null"
            android.util.Log.d(r6, r2)     // Catch: java.lang.Throwable -> L74
            java.lang.String r6 = ""
            goto L17
        L5a:
            java.lang.Class r6 = r4.f     // Catch: java.lang.Throwable -> L74
            if (r6 == 0) goto L8d
            android.content.Intent r6 = new android.content.Intent     // Catch: java.lang.Throwable -> L74
            android.content.Context r2 = r5.getApplicationContext()     // Catch: java.lang.Throwable -> L74
            java.lang.Class r3 = r4.f     // Catch: java.lang.Throwable -> L74
            r6.<init>(r2, r3)     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = "ua"
            java.lang.String r3 = r4.h     // Catch: java.lang.Throwable -> L74
            r6.putExtra(r2, r3)     // Catch: java.lang.Throwable -> L74
            r4.a(r5, r6)     // Catch: java.lang.Throwable -> L74
            goto L8d
        L74:
            r5 = move-exception
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r1)
            java.lang.String r5 = r5.toString()
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            java.lang.Object[] r6 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r5, r6)
        L8d:
            return
    }

    public boolean bindAlias(android.content.Context r4, java.lang.String r5) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "bindAlias_"
            r0.append(r1)
            long r1 = java.lang.System.currentTimeMillis()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            boolean r4 = r3.bindAlias(r4, r5, r0)
            return r4
    }

    public boolean bindAlias(android.content.Context r7, java.lang.String r8, java.lang.String r9) {
            r6 = this;
            com.igexin.b.a.c.a.c r0 = com.igexin.b.a.c.a.c.a()
            java.lang.String r1 = "[PushManager]call bindAlias"
            r0.a(r1)
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r6.d
            long r2 = r0 - r2
            r4 = 1000(0x3e8, double:4.94E-321)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 >= 0) goto L27
            com.igexin.b.a.c.a.c r8 = com.igexin.b.a.c.a.c.a()
            java.lang.String r0 = "[PushManager]call - > bindAlias failed, it be called too frequently"
            r8.a(r0)
            java.lang.String r8 = "30001"
            r6.a(r7, r9, r8)
            r7 = 0
            return r7
        L27:
            r6.d = r0
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "action"
            java.lang.String r2 = "bindAlias"
            r0.putString(r1, r2)
            java.lang.String r2 = "alias"
            r0.putString(r2, r8)
            java.lang.String r8 = "sn"
            r0.putString(r8, r9)
            android.content.Intent r8 = new android.content.Intent
            android.content.Context r9 = r7.getApplicationContext()
            java.lang.Class r2 = r6.a(r7)
            r8.<init>(r9, r2)
            java.lang.String r9 = "com.igexin.sdk.action.pushmanager"
            r8.putExtra(r1, r9)
            java.lang.String r9 = "bundle"
            r8.putExtra(r9, r0)
            boolean r7 = r6.a(r7, r8)
            return r7
    }

    public void checkManifest(android.content.Context r1) {
            r0 = this;
            com.igexin.push.util.a.c(r1)
            return
    }

    public java.lang.String getClientid(android.content.Context r6) {
            r5 = this;
            byte[] r0 = r5.e
            r1 = 0
            if (r0 != 0) goto Lb3
            android.content.pm.PackageManager r0 = r6.getPackageManager()     // Catch: java.lang.Exception -> L98
            java.lang.String r2 = r6.getPackageName()     // Catch: java.lang.Exception -> L98
            r3 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo(r2, r3)     // Catch: java.lang.Exception -> L98
            java.lang.String r2 = ""
            if (r0 == 0) goto L34
            android.os.Bundle r3 = r0.metaData     // Catch: java.lang.Exception -> L98
            if (r3 == 0) goto L34
            android.os.Bundle r2 = r0.metaData     // Catch: java.lang.Exception -> L98
            java.lang.String r3 = "PUSH_APPID"
            java.lang.String r2 = r2.getString(r3)     // Catch: java.lang.Exception -> L98
            android.os.Bundle r3 = r0.metaData     // Catch: java.lang.Exception -> L98
            java.lang.String r4 = "PUSH_APPSECRET"
            java.lang.String r3 = r3.getString(r4)     // Catch: java.lang.Exception -> L98
            android.os.Bundle r0 = r0.metaData     // Catch: java.lang.Exception -> L98
            java.lang.String r4 = "PUSH_APPKEY"
            java.lang.String r0 = r0.getString(r4)     // Catch: java.lang.Exception -> L98
            goto L36
        L34:
            r0 = r2
            r3 = r0
        L36:
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L98
            if (r4 == 0) goto L40
            java.lang.String r2 = com.igexin.push.core.b.a.a(r6)     // Catch: java.lang.Exception -> L98
        L40:
            boolean r4 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L98
            if (r4 == 0) goto L4a
            java.lang.String r0 = com.igexin.push.core.b.a.b(r6)     // Catch: java.lang.Exception -> L98
        L4a:
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L98
            if (r4 == 0) goto L54
            java.lang.String r3 = com.igexin.push.core.b.a.c(r6)     // Catch: java.lang.Exception -> L98
        L54:
            java.lang.String r2 = r2.trim()     // Catch: java.lang.Exception -> L98
            java.lang.String r3 = r3.trim()     // Catch: java.lang.Exception -> L98
            java.lang.String r0 = r0.trim()     // Catch: java.lang.Exception -> L98
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L98
            if (r4 != 0) goto Lb3
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L98
            if (r4 != 0) goto Lb3
            boolean r4 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L98
            if (r4 != 0) goto Lb3
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L98
            r4.<init>()     // Catch: java.lang.Exception -> L98
            r4.append(r2)     // Catch: java.lang.Exception -> L98
            r4.append(r3)     // Catch: java.lang.Exception -> L98
            r4.append(r0)     // Catch: java.lang.Exception -> L98
            java.lang.String r0 = r6.getPackageName()     // Catch: java.lang.Exception -> L98
            r4.append(r0)     // Catch: java.lang.Exception -> L98
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Exception -> L98
            java.lang.String r0 = r5.a(r0)     // Catch: java.lang.Exception -> L98
            if (r0 == 0) goto Lb3
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L98
            r5.e = r0     // Catch: java.lang.Exception -> L98
            goto Lb3
        L98:
            r0 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "PushManager|"
            r2.append(r3)
            java.lang.String r0 = r0.toString()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            java.lang.Object[] r2 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r2)
        Lb3:
            byte[] r0 = r5.e
            if (r0 == 0) goto Lf9
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.io.File r6 = r6.getFilesDir()
            java.lang.String r6 = r6.getPath()
            r0.append(r6)
            java.lang.String r6 = "/"
            r0.append(r6)
            java.lang.String r6 = "init.pid"
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            byte[] r6 = com.igexin.push.util.c.a(r6)
            if (r6 == 0) goto Lf9
            byte[] r0 = r5.e
            int r0 = r0.length
            int r2 = r6.length
            if (r0 != r2) goto Lf9
            int r0 = r6.length
            byte[] r2 = new byte[r0]
        Le4:
            if (r1 >= r0) goto Lf3
            byte[] r3 = r5.e
            r3 = r3[r1]
            r4 = r6[r1]
            r3 = r3 ^ r4
            byte r3 = (byte) r3
            r2[r1] = r3
            int r1 = r1 + 1
            goto Le4
        Lf3:
            java.lang.String r6 = new java.lang.String
            r6.<init>(r2)
            return r6
        Lf9:
            r6 = 0
            return r6
    }

    public java.lang.String getVersion(android.content.Context r1) {
            r0 = this;
            java.lang.String r1 = "4.6.4.0"
            return r1
    }

    public void initialize(android.content.Context r4) {
            r3 = this;
            f(r4)     // Catch: java.lang.Exception -> L7d
            java.lang.String r0 = r3.g     // Catch: java.lang.Exception -> L7d
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L7d
            if (r0 == 0) goto L3f
            java.lang.Class<com.igexin.sdk.GTIntentService> r0 = com.igexin.sdk.GTIntentService.class
            android.util.Pair r0 = com.igexin.push.util.b.a(r4, r0)     // Catch: java.lang.Exception -> L7d
            java.lang.Object r0 = r0.second     // Catch: java.lang.Exception -> L7d
            java.lang.Class r0 = (java.lang.Class) r0     // Catch: java.lang.Exception -> L7d
            if (r0 == 0) goto L38
            java.lang.String r0 = r0.getName()     // Catch: java.lang.Exception -> L7d
            r3.g = r0     // Catch: java.lang.Exception -> L7d
            com.igexin.b.a.c.a.c r0 = com.igexin.b.a.c.a.c.a()     // Catch: java.lang.Exception -> L7d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L7d
            r1.<init>()     // Catch: java.lang.Exception -> L7d
            java.lang.String r2 = "[PushManager] initialize intentService = "
            r1.append(r2)     // Catch: java.lang.Exception -> L7d
            java.lang.String r2 = r3.g     // Catch: java.lang.Exception -> L7d
            r1.append(r2)     // Catch: java.lang.Exception -> L7d
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L7d
        L34:
            r0.a(r1)     // Catch: java.lang.Exception -> L7d
            goto L3f
        L38:
            com.igexin.b.a.c.a.c r0 = com.igexin.b.a.c.a.c.a()     // Catch: java.lang.Exception -> L7d
            java.lang.String r1 = "[PushManager] initialize intentService = NULL!"
            goto L34
        L3f:
            java.lang.Class r0 = r3.f     // Catch: java.lang.Exception -> L7d
            if (r0 != 0) goto L77
            java.lang.Class<com.igexin.sdk.PushService> r0 = com.igexin.sdk.PushService.class
            android.util.Pair r0 = com.igexin.push.util.b.a(r4, r0)     // Catch: java.lang.Exception -> L7d
            java.lang.Object r0 = r0.second     // Catch: java.lang.Exception -> L7d
            java.lang.Class r0 = (java.lang.Class) r0     // Catch: java.lang.Exception -> L7d
            r3.f = r0     // Catch: java.lang.Exception -> L7d
            if (r0 != 0) goto L5b
            com.igexin.b.a.c.a.c r0 = com.igexin.b.a.c.a.c.a()     // Catch: java.lang.Exception -> L7d
            java.lang.String r1 = "[PushManager] initialize uService = NULL!"
        L57:
            r0.a(r1)     // Catch: java.lang.Exception -> L7d
            goto L77
        L5b:
            com.igexin.b.a.c.a.c r0 = com.igexin.b.a.c.a.c.a()     // Catch: java.lang.Exception -> L7d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L7d
            r1.<init>()     // Catch: java.lang.Exception -> L7d
            java.lang.String r2 = "[PushManager] initialize uService = "
            r1.append(r2)     // Catch: java.lang.Exception -> L7d
            java.lang.Class r2 = r3.f     // Catch: java.lang.Exception -> L7d
            java.lang.String r2 = r2.getName()     // Catch: java.lang.Exception -> L7d
            r1.append(r2)     // Catch: java.lang.Exception -> L7d
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L7d
            goto L57
        L77:
            java.lang.Class r0 = r3.f     // Catch: java.lang.Exception -> L7d
            r3.initialize(r4, r0)     // Catch: java.lang.Exception -> L7d
            goto Lb5
        L7d:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "PushManager|initialize|"
            r0.append(r1)
            java.lang.String r1 = r4.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
            com.igexin.b.a.c.a.c r0 = com.igexin.b.a.c.a.c.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "[PushManager] initialize sdk error = "
            r1.append(r2)
            java.lang.String r4 = r4.toString()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.a(r4)
        Lb5:
            return
    }

    @java.lang.Deprecated
    public <T extends android.app.Service> void initialize(android.content.Context r6, java.lang.Class<T> r7) {
            r5 = this;
            r0 = 0
            com.igexin.b.a.c.a.c r1 = com.igexin.b.a.c.a.c.a()     // Catch: java.lang.Throwable -> L9e
            java.lang.String r2 = "[PushManager]Start initializing sdk"
            r1.a(r2)     // Catch: java.lang.Throwable -> L9e
            android.content.Context r1 = r6.getApplicationContext()     // Catch: java.lang.Throwable -> L9e
            java.lang.String r1 = r1.getPackageName()     // Catch: java.lang.Throwable -> L9e
            java.lang.String r2 = "PushManager"
            boolean r2 = com.igexin.push.util.a.a(r2, r6, r7)     // Catch: java.lang.Throwable -> L9e
            if (r2 != 0) goto L2b
            java.lang.String r6 = "PushManager|init checkServiceSetCorrectly false"
            java.lang.Object[] r7 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L9e
            com.igexin.b.a.c.b.a(r6, r7)     // Catch: java.lang.Throwable -> L9e
            com.igexin.b.a.c.a.c r6 = com.igexin.b.a.c.a.c.a()     // Catch: java.lang.Throwable -> L9e
            java.lang.String r7 = "[PushManager]initialize failed,please check your push service!!"
            r6.a(r7)     // Catch: java.lang.Throwable -> L9e
            return
        L2b:
            android.content.Context r2 = r6.getApplicationContext()     // Catch: java.lang.Throwable -> L9e
            com.igexin.push.util.a.a(r2)     // Catch: java.lang.Throwable -> L9e
            if (r7 == 0) goto L40
            java.lang.String r2 = com.igexin.push.core.CoreConsts.n     // Catch: java.lang.Throwable -> L9e
            java.lang.String r3 = r7.getName()     // Catch: java.lang.Throwable -> L9e
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Throwable -> L9e
            if (r2 == 0) goto L42
        L40:
            java.lang.Class<com.igexin.sdk.PushService> r7 = com.igexin.sdk.PushService.class
        L42:
            android.content.Intent r2 = new android.content.Intent     // Catch: java.lang.Throwable -> L9e
            android.content.Context r3 = r6.getApplicationContext()     // Catch: java.lang.Throwable -> L9e
            r2.<init>(r3, r7)     // Catch: java.lang.Throwable -> L9e
            java.lang.String r3 = "action"
            java.lang.String r4 = com.igexin.sdk.PushConsts.ACTION_SERVICE_INITIALIZE     // Catch: java.lang.Throwable -> L9e
            r2.putExtra(r3, r4)     // Catch: java.lang.Throwable -> L9e
            java.lang.String r3 = "op_app"
            r2.putExtra(r3, r1)     // Catch: java.lang.Throwable -> L9e
            java.lang.String r1 = "us"
            java.lang.String r3 = r7.getName()     // Catch: java.lang.Throwable -> L9e
            r2.putExtra(r1, r3)     // Catch: java.lang.Throwable -> L9e
            java.lang.String r1 = r5.g     // Catch: java.lang.Throwable -> L9e
            if (r1 == 0) goto L6b
            java.lang.String r1 = "uis"
            java.lang.String r3 = r5.g     // Catch: java.lang.Throwable -> L9e
            r2.putExtra(r1, r3)     // Catch: java.lang.Throwable -> L9e
        L6b:
            java.lang.String r1 = r5.h     // Catch: java.lang.Throwable -> L9e
            if (r1 == 0) goto L76
            java.lang.String r1 = "ua"
            java.lang.String r3 = r5.h     // Catch: java.lang.Throwable -> L9e
            r2.putExtra(r1, r3)     // Catch: java.lang.Throwable -> L9e
        L76:
            boolean r1 = r5.a(r6, r2)     // Catch: java.lang.Throwable -> L9e
            if (r1 == 0) goto L9a
            r5.f = r7     // Catch: java.lang.Throwable -> L9e
            com.igexin.b.a.c.a.c r1 = com.igexin.b.a.c.a.c.a()     // Catch: java.lang.Throwable -> L9e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9e
            r2.<init>()     // Catch: java.lang.Throwable -> L9e
            java.lang.String r3 = "[PushManager]start pushService = "
            r2.append(r3)     // Catch: java.lang.Throwable -> L9e
            java.lang.String r7 = r7.getName()     // Catch: java.lang.Throwable -> L9e
            r2.append(r7)     // Catch: java.lang.Throwable -> L9e
            java.lang.String r7 = r2.toString()     // Catch: java.lang.Throwable -> L9e
            r1.a(r7)     // Catch: java.lang.Throwable -> L9e
        L9a:
            r5.b(r6)     // Catch: java.lang.Throwable -> L9e
            goto Ld5
        L9e:
            r6 = move-exception
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "PushManager|initialize|"
            r7.append(r1)
            java.lang.String r1 = r6.toString()
            r7.append(r1)
            java.lang.String r7 = r7.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r7, r0)
            com.igexin.b.a.c.a.c r7 = com.igexin.b.a.c.a.c.a()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[PushManager]initialize sdk error = "
            r0.append(r1)
            java.lang.String r6 = r6.toString()
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            r7.a(r6)
        Ld5:
            return
    }

    public boolean isPushTurnedOn(android.content.Context r2) {
            r1 = this;
            com.igexin.sdk.a.d r0 = new com.igexin.sdk.a.d
            r0.<init>(r2)
            boolean r2 = r0.c()
            return r2
    }

    @java.lang.Deprecated
    public <T extends com.igexin.sdk.GTIntentService> void registerPushIntentService(android.content.Context r5, java.lang.Class<T> r6) {
            r4 = this;
            com.igexin.b.a.c.a.c r0 = com.igexin.b.a.c.a.c.a()
            java.lang.String r1 = "[PushManager]call registerPushIntentService"
            r0.a(r1)
            r0 = 0
            java.lang.String r1 = "PushManager|registerPushIntentService|"
            if (r6 == 0) goto L7f
            java.lang.String r2 = r6.getName()     // Catch: java.lang.Exception -> L49 java.lang.Throwable -> La3
            java.lang.Class.forName(r2)     // Catch: java.lang.Exception -> L49 java.lang.Throwable -> La3
            android.content.Intent r2 = new android.content.Intent     // Catch: java.lang.Throwable -> La3
            r2.<init>(r5, r6)     // Catch: java.lang.Throwable -> La3
            boolean r2 = com.igexin.push.util.a.a(r2, r5)     // Catch: java.lang.Throwable -> La3
            if (r2 != 0) goto L42
            com.igexin.b.a.c.a.c r5 = com.igexin.b.a.c.a.c.a()     // Catch: java.lang.Throwable -> La3
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La3
            r2.<init>()     // Catch: java.lang.Throwable -> La3
            java.lang.String r3 = "[PushManager]call - > registerPushIntentService, parameter [userIntentService] is set, but didn't find class \""
            r2.append(r3)     // Catch: java.lang.Throwable -> La3
            java.lang.String r6 = r6.getName()     // Catch: java.lang.Throwable -> La3
            r2.append(r6)     // Catch: java.lang.Throwable -> La3
            java.lang.String r6 = "\", please check your AndroidManifest"
            r2.append(r6)     // Catch: java.lang.Throwable -> La3
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> La3
            r5.a(r6)     // Catch: java.lang.Throwable -> La3
            return
        L42:
            java.lang.String r6 = r6.getName()     // Catch: java.lang.Throwable -> La3
        L46:
            r4.g = r6     // Catch: java.lang.Throwable -> La3
            goto L89
        L49:
            r5 = move-exception
            com.igexin.b.a.c.a.c r6 = com.igexin.b.a.c.a.c.a()     // Catch: java.lang.Throwable -> La3
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La3
            r2.<init>()     // Catch: java.lang.Throwable -> La3
            java.lang.String r3 = "[PushManager]error, can't load IntentService = "
            r2.append(r3)     // Catch: java.lang.Throwable -> La3
            java.lang.String r3 = r5.toString()     // Catch: java.lang.Throwable -> La3
            r2.append(r3)     // Catch: java.lang.Throwable -> La3
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> La3
            r6.a(r2)     // Catch: java.lang.Throwable -> La3
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La3
            r6.<init>()     // Catch: java.lang.Throwable -> La3
            r6.append(r1)     // Catch: java.lang.Throwable -> La3
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> La3
            r6.append(r5)     // Catch: java.lang.Throwable -> La3
            java.lang.String r5 = r6.toString()     // Catch: java.lang.Throwable -> La3
            java.lang.Object[] r6 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> La3
            com.igexin.b.a.c.b.a(r5, r6)     // Catch: java.lang.Throwable -> La3
            return
        L7f:
            java.lang.String r6 = "PushManager"
            java.lang.String r2 = "call -> registerPushIntentService, parameter [userIntentService] is null, use default Receiver"
            android.util.Log.d(r6, r2)     // Catch: java.lang.Throwable -> La3
            java.lang.String r6 = ""
            goto L46
        L89:
            java.lang.Class r6 = r4.f     // Catch: java.lang.Throwable -> La3
            if (r6 == 0) goto Ld8
            android.content.Intent r6 = new android.content.Intent     // Catch: java.lang.Throwable -> La3
            android.content.Context r2 = r5.getApplicationContext()     // Catch: java.lang.Throwable -> La3
            java.lang.Class r3 = r4.f     // Catch: java.lang.Throwable -> La3
            r6.<init>(r2, r3)     // Catch: java.lang.Throwable -> La3
            java.lang.String r2 = "uis"
            java.lang.String r3 = r4.g     // Catch: java.lang.Throwable -> La3
            r6.putExtra(r2, r3)     // Catch: java.lang.Throwable -> La3
            r4.a(r5, r6)     // Catch: java.lang.Throwable -> La3
            goto Ld8
        La3:
            r5 = move-exception
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r1)
            java.lang.String r1 = r5.toString()
            r6.append(r1)
            java.lang.String r6 = r6.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r6, r0)
            com.igexin.b.a.c.a.c r6 = com.igexin.b.a.c.a.c.a()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[PushManager]registerPushIntentService failed = "
            r0.append(r1)
            java.lang.String r5 = r5.toString()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            r6.a(r5)
        Ld8:
            return
    }

    public boolean sendApplinkFeedback(android.content.Context r5, java.lang.String r6) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 == 0) goto L11
            com.igexin.b.a.c.a.c r5 = com.igexin.b.a.c.a.c.a()
            java.lang.String r6 = "[PushManager]call - > sendApplinkFeedback failed, parameter is illegal"
            r5.a(r6)
            r5 = 0
            return r5
        L11:
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "action"
            java.lang.String r2 = "sendApplinkFeedback"
            r0.putString(r1, r2)
            java.lang.String r2 = "url"
            r0.putString(r2, r6)
            android.content.Intent r6 = new android.content.Intent
            android.content.Context r2 = r5.getApplicationContext()
            java.lang.Class r3 = r4.a(r5)
            r6.<init>(r2, r3)
            java.lang.String r2 = "com.igexin.sdk.action.pushmanager"
            r6.putExtra(r1, r2)
            java.lang.String r1 = "bundle"
            r6.putExtra(r1, r0)
            boolean r5 = r4.a(r5, r6)
            return r5
    }

    public boolean sendFeedbackMessage(android.content.Context r4, java.lang.String r5, java.lang.String r6, int r7) {
            r3 = this;
            r0 = 0
            r1 = 60001(0xea61, float:8.408E-41)
            if (r7 < r1) goto Lb
            r1 = 60999(0xee47, float:8.5478E-41)
            if (r7 <= r1) goto L15
        Lb:
            r1 = 90001(0x15f91, float:1.26118E-40)
            if (r7 < r1) goto L17
            r1 = 90999(0x16377, float:1.27517E-40)
            if (r7 > r1) goto L17
        L15:
            r1 = 1
            goto L18
        L17:
            r1 = r0
        L18:
            if (r5 == 0) goto L5e
            if (r6 == 0) goto L5e
            if (r1 != 0) goto L1f
            goto L5e
        L1f:
            int r7 = r3.a(r7, r6)
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "action"
            java.lang.String r2 = "sendFeedbackMessage"
            r0.putString(r1, r2)
            java.lang.String r2 = "taskid"
            r0.putString(r2, r5)
            java.lang.String r5 = "messageid"
            r0.putString(r5, r6)
            java.lang.String r5 = java.lang.String.valueOf(r7)
            java.lang.String r6 = "actionid"
            r0.putString(r6, r5)
            android.content.Intent r5 = new android.content.Intent
            android.content.Context r6 = r4.getApplicationContext()
            java.lang.Class r7 = r3.a(r4)
            r5.<init>(r6, r7)
            java.lang.String r6 = "com.igexin.sdk.action.pushmanager"
            r5.putExtra(r1, r6)
            java.lang.String r6 = "bundle"
            r5.putExtra(r6, r0)
            boolean r4 = r3.a(r4, r5)
            return r4
        L5e:
            com.igexin.b.a.c.a.c r4 = com.igexin.b.a.c.a.c.a()
            java.lang.String r5 = "[PushManager]call - > sendFeedbackMessage failed, parameter is illegal"
            r4.a(r5)
            return r0
    }

    public boolean sendMessage(android.content.Context r7, java.lang.String r8, byte[] r9) {
            r6 = this;
            long r0 = java.lang.System.currentTimeMillis()
            if (r8 == 0) goto L4f
            if (r9 == 0) goto L4f
            int r2 = r9.length
            long r2 = (long) r2
            r4 = 4096(0x1000, double:2.0237E-320)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 > 0) goto L4f
            long r2 = r6.c
            long r2 = r0 - r2
            r4 = 1000(0x3e8, double:4.94E-321)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 >= 0) goto L1b
            goto L4f
        L1b:
            r6.c = r0
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "action"
            java.lang.String r2 = "sendMessage"
            r0.putString(r1, r2)
            java.lang.String r2 = "taskid"
            r0.putString(r2, r8)
            java.lang.String r8 = "extraData"
            r0.putByteArray(r8, r9)
            android.content.Intent r8 = new android.content.Intent
            android.content.Context r9 = r7.getApplicationContext()
            java.lang.Class r2 = r6.a(r7)
            r8.<init>(r9, r2)
            java.lang.String r9 = "com.igexin.sdk.action.pushmanager"
            r8.putExtra(r1, r9)
            java.lang.String r9 = "bundle"
            r8.putExtra(r9, r0)
            boolean r7 = r6.a(r7, r8)
            return r7
        L4f:
            com.igexin.b.a.c.a.c r7 = com.igexin.b.a.c.a.c.a()
            java.lang.String r8 = "[PushManager]call - > sendMessage failed, parameter is illegal or it be called too frequently"
            r7.a(r8)
            r7 = 0
            return r7
    }

    public void setDebugLogger(android.content.Context r2, com.igexin.sdk.IUserLoggerInterface r3) {
            r1 = this;
            if (r2 == 0) goto L12
            if (r3 == 0) goto L12
            boolean r0 = r1.e(r2)     // Catch: java.lang.Throwable -> L11
            if (r0 == 0) goto L11
            com.igexin.b.a.c.a.c r0 = com.igexin.b.a.c.a.c.a()     // Catch: java.lang.Throwable -> L11
            r0.a(r2, r3)     // Catch: java.lang.Throwable -> L11
        L11:
            return
        L12:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "context or loggerInterface can not be null"
            r2.<init>(r3)
            throw r2
    }

    public boolean setHeartbeatInterval(android.content.Context r5, int r6) {
            r4 = this;
            if (r6 >= 0) goto Ld
            com.igexin.b.a.c.a.c r5 = com.igexin.b.a.c.a.c.a()
            java.lang.String r6 = "[PushManager]call -> setHeartbeatInterval failed, parameter [interval] < 0, illegal"
            r5.a(r6)
            r5 = 0
            return r5
        Ld:
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "action"
            java.lang.String r2 = "setHeartbeatInterval"
            r0.putString(r1, r2)
            java.lang.String r2 = "interval"
            r0.putInt(r2, r6)
            android.content.Intent r6 = new android.content.Intent
            android.content.Context r2 = r5.getApplicationContext()
            java.lang.Class r3 = r4.a(r5)
            r6.<init>(r2, r3)
            java.lang.String r2 = "com.igexin.sdk.action.pushmanager"
            r6.putExtra(r1, r2)
            java.lang.String r1 = "bundle"
            r6.putExtra(r1, r0)
            boolean r5 = r4.a(r5, r6)
            return r5
    }

    public boolean setHwBadgeNum(android.content.Context r5, int r6) {
            r4 = this;
            java.lang.String r0 = "action"
            com.igexin.b.a.c.a.c r1 = com.igexin.b.a.c.a.c.a()
            java.lang.String r2 = "[PushManager]call - > setHwBadgeNum"
            r1.a(r2)
            android.os.Bundle r1 = new android.os.Bundle     // Catch: java.lang.Throwable -> L36
            r1.<init>()     // Catch: java.lang.Throwable -> L36
            java.lang.String r2 = "setHwBadgeNum"
            r1.putString(r0, r2)     // Catch: java.lang.Throwable -> L36
            java.lang.String r2 = "badgeNum"
            r1.putInt(r2, r6)     // Catch: java.lang.Throwable -> L36
            android.content.Intent r6 = new android.content.Intent     // Catch: java.lang.Throwable -> L36
            android.content.Context r2 = r5.getApplicationContext()     // Catch: java.lang.Throwable -> L36
            java.lang.Class r3 = r4.a(r5)     // Catch: java.lang.Throwable -> L36
            r6.<init>(r2, r3)     // Catch: java.lang.Throwable -> L36
            java.lang.String r2 = "com.igexin.sdk.action.pushmanager"
            r6.putExtra(r0, r2)     // Catch: java.lang.Throwable -> L36
            java.lang.String r0 = "bundle"
            r6.putExtra(r0, r1)     // Catch: java.lang.Throwable -> L36
            boolean r5 = r4.a(r5, r6)     // Catch: java.lang.Throwable -> L36
            return r5
        L36:
            r5 = 0
            return r5
    }

    public boolean setSilentTime(android.content.Context r4, int r5, int r6) {
            r3 = this;
            if (r5 < 0) goto L3f
            r0 = 24
            if (r5 >= r0) goto L3f
            if (r6 < 0) goto L3f
            r0 = 23
            if (r6 <= r0) goto Ld
            goto L3f
        Ld:
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "action"
            java.lang.String r2 = "setSilentTime"
            r0.putString(r1, r2)
            java.lang.String r2 = "beginHour"
            r0.putInt(r2, r5)
            java.lang.String r5 = "duration"
            r0.putInt(r5, r6)
            android.content.Intent r5 = new android.content.Intent
            android.content.Context r6 = r4.getApplicationContext()
            java.lang.Class r2 = r3.a(r4)
            r5.<init>(r6, r2)
            java.lang.String r6 = "com.igexin.sdk.action.pushmanager"
            r5.putExtra(r1, r6)
            java.lang.String r6 = "bundle"
            r5.putExtra(r6, r0)
            boolean r4 = r3.a(r4, r5)
            return r4
        L3f:
            com.igexin.b.a.c.a.c r4 = com.igexin.b.a.c.a.c.a()
            java.lang.String r5 = "[PushManager]call - > setSilentTime failed, parameter [beginHour] or [duration] value exceeding"
            r4.a(r5)
            r4 = 0
            return r4
    }

    public boolean setSocketTimeout(android.content.Context r5, int r6) {
            r4 = this;
            if (r6 >= 0) goto Ld
            com.igexin.b.a.c.a.c r5 = com.igexin.b.a.c.a.c.a()
            java.lang.String r6 = "[PushManager]call - > setSocketTimeout failed, parameter [timeout] < 0, illegal"
            r5.a(r6)
            r5 = 0
            return r5
        Ld:
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "action"
            java.lang.String r2 = "setSocketTimeout"
            r0.putString(r1, r2)
            java.lang.String r2 = "timeout"
            r0.putInt(r2, r6)
            android.content.Intent r6 = new android.content.Intent
            android.content.Context r2 = r5.getApplicationContext()
            java.lang.Class r3 = r4.a(r5)
            r6.<init>(r2, r3)
            java.lang.String r2 = "com.igexin.sdk.action.pushmanager"
            r6.putExtra(r1, r2)
            java.lang.String r1 = "bundle"
            r6.putExtra(r1, r0)
            boolean r5 = r4.a(r5, r6)
            return r5
    }

    public int setTag(android.content.Context r12, com.igexin.sdk.Tag[] r13, java.lang.String r14) {
            r11 = this;
            r0 = 20006(0x4e26, float:2.8034E-41)
            java.lang.String r1 = "20006"
            r2 = 0
            if (r13 != 0) goto L1b
            com.igexin.b.a.c.a.c r13 = com.igexin.b.a.c.a.c.a()
            java.lang.String r3 = "[PushManager]call -> setTag failed, parameter [tags] is null"
            r13.a(r3)
            java.lang.Object[] r13 = new java.lang.Object[r2]
            java.lang.String r2 = "PushManager|tags is null"
            com.igexin.b.a.c.b.a(r2, r13)
            r11.c(r12, r14, r1)
            return r0
        L1b:
            if (r14 != 0) goto L35
            com.igexin.b.a.c.a.c r13 = com.igexin.b.a.c.a.c.a()
            java.lang.String r0 = "[PushManager]call -> setTag failed, parameter [sn] is null"
            r13.a(r0)
            java.lang.Object[] r13 = new java.lang.Object[r2]
            java.lang.String r0 = "PushManager|sn is null"
            com.igexin.b.a.c.b.a(r0, r13)
            java.lang.String r13 = "20007"
            r11.c(r12, r14, r13)
            r12 = 20007(0x4e27, float:2.8036E-41)
            return r12
        L35:
            int r3 = r13.length
            long r3 = (long) r3
            r5 = 200(0xc8, double:9.9E-322)
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 <= 0) goto L55
            com.igexin.b.a.c.a.c r13 = com.igexin.b.a.c.a.c.a()
            java.lang.String r0 = "[PushManager]call -> setTag failed, parameter [tags] len > 200 is exceeds"
            r13.a(r0)
            java.lang.Object[] r13 = new java.lang.Object[r2]
            java.lang.String r0 = "PushManager|tags len > 200 is exceeds"
            com.igexin.b.a.c.b.a(r0, r13)
            java.lang.String r13 = "20001"
            r11.c(r12, r14, r13)
            r12 = 20001(0x4e21, float:2.8027E-41)
            return r12
        L55:
            long r3 = java.lang.System.currentTimeMillis()
            long r5 = r11.b
            long r5 = r3 - r5
            r7 = 1000(0x3e8, double:4.94E-321)
            int r5 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r5 >= 0) goto L74
            com.igexin.b.a.c.a.c r13 = com.igexin.b.a.c.a.c.a()
            java.lang.String r0 = "[PushManager]call - > setTag failed, it be called too frequently"
            r13.a(r0)
            java.lang.String r13 = "20002"
            r11.c(r12, r14, r13)
            r12 = 20002(0x4e22, float:2.8029E-41)
            return r12
        L74:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            int r6 = r13.length
            r7 = r2
        L7b:
            if (r7 >= r6) goto Ldc
            r8 = r13[r7]
            if (r8 == 0) goto Ld9
            java.lang.String r9 = r8.getName()
            if (r9 == 0) goto Ld9
            java.lang.String r9 = r8.getName()
            java.lang.String r10 = " "
            boolean r9 = r9.contains(r10)
            if (r9 != 0) goto Lab
            java.lang.String r9 = r8.getName()
            java.lang.String r10 = ","
            boolean r9 = r9.contains(r10)
            if (r9 == 0) goto La0
            goto Lab
        La0:
            java.lang.String r8 = r8.getName()
            r5.append(r8)
            r5.append(r10)
            goto Ld9
        Lab:
            com.igexin.b.a.c.a.c r13 = com.igexin.b.a.c.a.c.a()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[PushManager]call -> setTag failed, the tag ["
            r0.append(r1)
            java.lang.String r1 = r8.getName()
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r1 = " is not illegal"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r13.a(r0)
            java.lang.String r13 = "20011"
            r11.c(r12, r14, r13)
            r12 = 20011(0x4e2b, float:2.8041E-41)
            return r12
        Ld9:
            int r7 = r7 + 1
            goto L7b
        Ldc:
            int r13 = r5.length()
            if (r13 <= 0) goto L12b
            int r13 = r5.length()
            int r13 = r13 + (-1)
            r5.deleteCharAt(r13)
            com.igexin.b.a.c.a.c r13 = com.igexin.b.a.c.a.c.a()
            java.lang.String r0 = "[PushManager]call setTag"
            r13.a(r0)
            android.os.Bundle r13 = new android.os.Bundle
            r13.<init>()
            java.lang.String r0 = "action"
            java.lang.String r1 = "setTag"
            r13.putString(r0, r1)
            java.lang.String r1 = r5.toString()
            java.lang.String r5 = "tags"
            r13.putString(r5, r1)
            java.lang.String r1 = "sn"
            r13.putString(r1, r14)
            r11.b = r3
            android.content.Intent r14 = new android.content.Intent
            android.content.Context r1 = r12.getApplicationContext()
            java.lang.Class r3 = r11.a(r12)
            r14.<init>(r1, r3)
            java.lang.String r1 = "com.igexin.sdk.action.pushmanager"
            r14.putExtra(r0, r1)
            java.lang.String r0 = "bundle"
            r14.putExtra(r0, r13)
            r11.a(r12, r14)
            return r2
        L12b:
            r11.c(r12, r14, r1)
            return r0
    }

    public void turnOffPush(android.content.Context r6) {
            r5 = this;
            com.igexin.b.a.c.a.c r0 = com.igexin.b.a.c.a.c.a()
            java.lang.String r1 = "[PushManager]call turnOffPush"
            r0.a(r1)
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "action"
            java.lang.String r2 = "turnOffPush"
            r0.putString(r1, r2)
            android.content.Intent r2 = new android.content.Intent
            android.content.Context r3 = r6.getApplicationContext()
            java.lang.Class r4 = r5.a(r6)
            r2.<init>(r3, r4)
            java.lang.String r3 = "com.igexin.sdk.action.pushmanager"
            r2.putExtra(r1, r3)
            java.lang.String r1 = "bundle"
            r2.putExtra(r1, r0)
            r5.a(r6, r2)
            r5.c(r6)
            return
    }

    public void turnOnPush(android.content.Context r4) {
            r3 = this;
            com.igexin.b.a.c.a.c r0 = com.igexin.b.a.c.a.c.a()
            java.lang.String r1 = "[PushManager]call turnOnPush"
            r0.a(r1)
            android.content.Intent r0 = new android.content.Intent
            android.content.Context r1 = r4.getApplicationContext()
            java.lang.Class r2 = r3.a(r4)
            r0.<init>(r1, r2)
            java.lang.String r1 = "action"
            java.lang.String r2 = "com.igexin.action.initialize.slave"
            r0.putExtra(r1, r2)
            android.content.Context r1 = r4.getApplicationContext()
            java.lang.String r1 = r1.getPackageName()
            java.lang.String r2 = "op_app"
            r0.putExtra(r2, r1)
            java.lang.String r1 = "isSlave"
            r2 = 1
            r0.putExtra(r1, r2)
            r3.a(r4, r0)
            r3.b(r4)
            return
    }

    public boolean unBindAlias(android.content.Context r4, java.lang.String r5, boolean r6) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "unBindAlias_"
            r0.append(r1)
            long r1 = java.lang.System.currentTimeMillis()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            boolean r4 = r3.unBindAlias(r4, r5, r6, r0)
            return r4
    }

    public boolean unBindAlias(android.content.Context r7, java.lang.String r8, boolean r9, java.lang.String r10) {
            r6 = this;
            com.igexin.b.a.c.a.c r0 = com.igexin.b.a.c.a.c.a()
            java.lang.String r1 = "[PushManager]call unBindAlias"
            r0.a(r1)
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r6.d
            long r2 = r0 - r2
            r4 = 1000(0x3e8, double:4.94E-321)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 >= 0) goto L27
            com.igexin.b.a.c.a.c r8 = com.igexin.b.a.c.a.c.a()
            java.lang.String r9 = "[PushManager]call - > unBindAlias failed, it be called too frequently"
            r8.a(r9)
            java.lang.String r8 = "30001"
            r6.b(r7, r10, r8)
            r7 = 0
            return r7
        L27:
            r6.d = r0
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "action"
            java.lang.String r2 = "unbindAlias"
            r0.putString(r1, r2)
            java.lang.String r2 = "alias"
            r0.putString(r2, r8)
            java.lang.String r8 = "isSeft"
            r0.putBoolean(r8, r9)
            java.lang.String r8 = "sn"
            r0.putString(r8, r10)
            android.content.Intent r8 = new android.content.Intent
            android.content.Context r9 = r7.getApplicationContext()
            java.lang.Class r10 = r6.a(r7)
            r8.<init>(r9, r10)
            java.lang.String r9 = "com.igexin.sdk.action.pushmanager"
            r8.putExtra(r1, r9)
            java.lang.String r9 = "bundle"
            r8.putExtra(r9, r0)
            boolean r7 = r6.a(r7, r8)
            return r7
    }
}
