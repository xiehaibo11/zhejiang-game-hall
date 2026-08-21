package com.czhj.devicehelper.oaId.helpers;

public class DevicesIDsHelper {
    private static com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.AppIdsUpdater a = null;
    private static java.lang.String b = null;
    private static int d = -1;
    private static int e;
    private static java.lang.String f;
    private static java.lang.Class<?> g;
    private static java.lang.Class<?> h;
    private static java.lang.Class<?> i;
    private static java.lang.Class<?> j;
    private static java.lang.String k;
    private static final java.util.List<java.lang.String> l = null;
    private static final java.util.List<java.lang.String> m = null;
    private com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.AppIdsUpdater c;




    public interface AppIdsUpdater {
        void OnIdsAvalid(java.lang.String r1);
    }

    static class IdentifyListenerHandler implements java.lang.reflect.InvocationHandler {
        IdentifyListenerHandler() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public java.lang.Object invoke(java.lang.Object r3, java.lang.reflect.Method r4, java.lang.Object[] r5) throws java.lang.Throwable {
                r2 = this;
                java.lang.String r3 = "OnSupport"
                java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> L68
                boolean r3 = r3.equalsIgnoreCase(r4)     // Catch: java.lang.Throwable -> L68
                if (r3 == 0) goto L83
                java.lang.Class r3 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.c()     // Catch: java.lang.Throwable -> L68
                java.lang.String r4 = "getOAID"
                r0 = 0
                java.lang.Class[] r1 = new java.lang.Class[r0]     // Catch: java.lang.Throwable -> L68
                java.lang.reflect.Method r3 = r3.getDeclaredMethod(r4, r1)     // Catch: java.lang.Throwable -> L68
                int r4 = r5.length     // Catch: java.lang.Throwable -> L68
                r1 = 1
                if (r4 != r1) goto L2b
                r4 = r5[r0]     // Catch: java.lang.Throwable -> L68
                java.lang.Object[] r5 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L68
                java.lang.Object r3 = r3.invoke(r4, r5)     // Catch: java.lang.Throwable -> L68
            L25:
                java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L68
                com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.c(r3)     // Catch: java.lang.Throwable -> L68
                goto L34
            L2b:
                r4 = r5[r1]     // Catch: java.lang.Throwable -> L68
                java.lang.Object[] r5 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L68
                java.lang.Object r3 = r3.invoke(r4, r5)     // Catch: java.lang.Throwable -> L68
                goto L25
            L34:
                com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper$AppIdsUpdater r3 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.d()     // Catch: java.lang.Throwable -> L68
                if (r3 == 0) goto L4f
                java.lang.String r3 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.e()     // Catch: java.lang.Throwable -> L68
                boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L68
                if (r3 != 0) goto L4f
                com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper$AppIdsUpdater r3 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.d()     // Catch: java.lang.Throwable -> L68
                java.lang.String r4 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.e()     // Catch: java.lang.Throwable -> L68
                r3.OnIdsAvalid(r4)     // Catch: java.lang.Throwable -> L68
            L4f:
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L68
                r3.<init>()     // Catch: java.lang.Throwable -> L68
                java.lang.String r4 = "MdidSdkHelper oaid:"
                r3.append(r4)     // Catch: java.lang.Throwable -> L68
                java.lang.String r4 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.e()     // Catch: java.lang.Throwable -> L68
                r3.append(r4)     // Catch: java.lang.Throwable -> L68
                java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L68
                com.czhj.sdk.logger.SigmobLog.e(r3)     // Catch: java.lang.Throwable -> L68
                goto L83
            L68:
                com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper$AppIdsUpdater r3 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.d()
                if (r3 == 0) goto L83
                java.lang.String r3 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.e()
                boolean r3 = android.text.TextUtils.isEmpty(r3)
                if (r3 != 0) goto L83
                com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper$AppIdsUpdater r3 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.d()
                java.lang.String r4 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.e()
                r3.OnIdsAvalid(r4)
            L83:
                r3 = 0
                return r3
        }
    }

    static {
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper$2 r0 = new com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper$2
            r0.<init>()
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.l = r0
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper$3 r0 = new com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper$3
            r0.<init>()
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.m = r0
            i()
            return
    }

    public DevicesIDsHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.AppIdsUpdater a(com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper r0) {
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper$AppIdsUpdater r0 = r0.c
            return r0
    }

    private static void a(android.content.Context r1) {
            h()     // Catch: java.lang.Throwable -> L3b
            if (r1 == 0) goto L2a
            java.lang.Class<?> r0 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.j     // Catch: java.lang.Throwable -> L3b
            if (r0 == 0) goto L2a
            java.lang.Class<?> r0 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.g     // Catch: java.lang.Throwable -> L3b
            if (r0 == 0) goto L2a
            java.lang.Class<?> r0 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.h     // Catch: java.lang.Throwable -> L3b
            if (r0 != 0) goto L12
            goto L2a
        L12:
            java.lang.String r0 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.f     // Catch: java.lang.Throwable -> L3b
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L3b
            if (r0 == 0) goto L1e
            b(r1)     // Catch: java.lang.Throwable -> L3b
            goto L4c
        L1e:
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper$AppIdsUpdater r1 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.a     // Catch: java.lang.Throwable -> L3b
            if (r1 == 0) goto L4c
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper$AppIdsUpdater r1 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.a     // Catch: java.lang.Throwable -> L3b
            java.lang.String r0 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.f     // Catch: java.lang.Throwable -> L3b
            r1.OnIdsAvalid(r0)     // Catch: java.lang.Throwable -> L3b
            goto L4c
        L2a:
            java.lang.String r1 = "OAID 读取类创建失败"
            com.czhj.sdk.logger.SigmobLog.e(r1)     // Catch: java.lang.Throwable -> L3b
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper$AppIdsUpdater r1 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.a     // Catch: java.lang.Throwable -> L3b
            if (r1 == 0) goto L3a
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper$AppIdsUpdater r1 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.a     // Catch: java.lang.Throwable -> L3b
            java.lang.String r0 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.f     // Catch: java.lang.Throwable -> L3b
            r1.OnIdsAvalid(r0)     // Catch: java.lang.Throwable -> L3b
        L3a:
            return
        L3b:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r1)
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper$AppIdsUpdater r1 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.a
            if (r1 == 0) goto L4c
            java.lang.String r0 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.f
            r1.OnIdsAvalid(r0)
        L4c:
            return
    }

    private void a(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            java.lang.Thread r0 = new java.lang.Thread
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper$1 r1 = new com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper$1
            r1.<init>(r2, r4, r3)
            r0.<init>(r1)
            r0.start()
            return
    }

    public static void a(java.lang.String r0) {
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.b = r0
            return
    }

    public static boolean a() {
            java.lang.String r0 = "ro.build.freeme.label"
            java.lang.String r0 = d(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L16
            java.lang.String r1 = "FREEMEOS"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto L16
            r0 = 1
            return r0
        L16:
            r0 = 0
            return r0
    }

    private static void b(android.content.Context r9) {
            c(r9)     // Catch: java.lang.Throwable -> La4
            r0 = 0
            r1 = 1
            java.lang.Class<?> r2 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.i     // Catch: java.lang.Exception -> L30 java.lang.Throwable -> La4
            if (r2 == 0) goto L30
            java.lang.Class<?> r2 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.i     // Catch: java.lang.Exception -> L30 java.lang.Throwable -> La4
            java.lang.String r3 = "classLoader"
            java.lang.reflect.Field r2 = r2.getField(r3)     // Catch: java.lang.Exception -> L30 java.lang.Throwable -> La4
            java.lang.Class<?> r3 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.i     // Catch: java.lang.Exception -> L30 java.lang.Throwable -> La4
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Exception -> L30 java.lang.Throwable -> La4
            if (r2 != 0) goto L30
            java.lang.Class<?> r2 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.i     // Catch: java.lang.Exception -> L30 java.lang.Throwable -> La4
            java.lang.String r3 = "InitEntry"
            java.lang.Class[] r4 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L30 java.lang.Throwable -> La4
            java.lang.Class<android.content.Context> r5 = android.content.Context.class
            r4[r0] = r5     // Catch: java.lang.Exception -> L30 java.lang.Throwable -> La4
            java.lang.reflect.Method r2 = r2.getDeclaredMethod(r3, r4)     // Catch: java.lang.Exception -> L30 java.lang.Throwable -> La4
            java.lang.Class<?> r3 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.i     // Catch: java.lang.Exception -> L30 java.lang.Throwable -> La4
            java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L30 java.lang.Throwable -> La4
            r4[r0] = r9     // Catch: java.lang.Exception -> L30 java.lang.Throwable -> La4
            r2.invoke(r3, r4)     // Catch: java.lang.Exception -> L30 java.lang.Throwable -> La4
        L30:
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper$IdentifyListenerHandler r2 = new com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper$IdentifyListenerHandler     // Catch: java.lang.Throwable -> La4
            r2.<init>()     // Catch: java.lang.Throwable -> La4
            java.lang.Class<?> r3 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.j     // Catch: java.lang.Throwable -> La4
            java.lang.String r4 = "InitSdk"
            r5 = 3
            java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.lang.Throwable -> La4
            java.lang.Class<android.content.Context> r7 = android.content.Context.class
            r6[r0] = r7     // Catch: java.lang.Throwable -> La4
            java.lang.Class r7 = java.lang.Boolean.TYPE     // Catch: java.lang.Throwable -> La4
            r6[r1] = r7     // Catch: java.lang.Throwable -> La4
            java.lang.Class<?> r7 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.g     // Catch: java.lang.Throwable -> La4
            r8 = 2
            r6[r8] = r7     // Catch: java.lang.Throwable -> La4
            java.lang.reflect.Method r3 = r3.getDeclaredMethod(r4, r6)     // Catch: java.lang.Throwable -> La4
            r4 = 0
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> La4
            r5[r0] = r9     // Catch: java.lang.Throwable -> La4
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r1)     // Catch: java.lang.Throwable -> La4
            r5[r1] = r6     // Catch: java.lang.Throwable -> La4
            java.lang.ClassLoader r9 = r9.getClassLoader()     // Catch: java.lang.Throwable -> La4
            java.lang.Class[] r1 = new java.lang.Class[r1]     // Catch: java.lang.Throwable -> La4
            java.lang.Class<?> r6 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.g     // Catch: java.lang.Throwable -> La4
            r1[r0] = r6     // Catch: java.lang.Throwable -> La4
            java.lang.Object r9 = java.lang.reflect.Proxy.newProxyInstance(r9, r1, r2)     // Catch: java.lang.Throwable -> La4
            r5[r8] = r9     // Catch: java.lang.Throwable -> La4
            java.lang.Object r9 = r3.invoke(r4, r5)     // Catch: java.lang.Throwable -> La4
            java.lang.Integer r9 = (java.lang.Integer) r9     // Catch: java.lang.Throwable -> La4
            int r9 = r9.intValue()     // Catch: java.lang.Throwable -> La4
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La4
            r0.<init>()     // Catch: java.lang.Throwable -> La4
            java.lang.String r1 = "MdidSdkHelper ErrorCode : "
            r0.append(r1)     // Catch: java.lang.Throwable -> La4
            r0.append(r9)     // Catch: java.lang.Throwable -> La4
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> La4
            com.czhj.sdk.logger.SigmobLog.e(r0)     // Catch: java.lang.Throwable -> La4
            r0 = 1008614(0xf63e6, float:1.413369E-39)
            if (r9 == r0) goto Lbf
            r0 = 1008610(0xf63e2, float:1.413364E-39)
            if (r9 == r0) goto Lbf
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper$AppIdsUpdater r9 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.a     // Catch: java.lang.Throwable -> La4
            if (r9 == 0) goto Lbf
            java.lang.String r9 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.f     // Catch: java.lang.Throwable -> La4
            boolean r9 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> La4
            if (r9 != 0) goto Lbf
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper$AppIdsUpdater r9 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.a     // Catch: java.lang.Throwable -> La4
            java.lang.String r0 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.f     // Catch: java.lang.Throwable -> La4
            r9.OnIdsAvalid(r0)     // Catch: java.lang.Throwable -> La4
            goto Lbf
        La4:
            r9 = move-exception
            java.lang.String r9 = r9.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r9)
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper$AppIdsUpdater r9 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.a
            if (r9 == 0) goto Lbf
            java.lang.String r9 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.f
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 != 0) goto Lbf
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper$AppIdsUpdater r9 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.a
            java.lang.String r0 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.f
            r9.OnIdsAvalid(r0)
        Lbf:
            return
    }

    public static void b(android.content.Context r0, com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.AppIdsUpdater r1) {
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.a = r1
            a(r0)
            return
    }

    public static void b(java.lang.String r0) {
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.k = r0
            return
    }

    public static boolean b() {
            java.lang.String r0 = "ro.ssui.product"
            java.lang.String r0 = d(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L16
            java.lang.String r1 = "unknown"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 != 0) goto L16
            r0 = 1
            return r0
        L16:
            r0 = 0
            return r0
    }

    static java.lang.Class c() {
            java.lang.Class<?> r0 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.h
            return r0
    }

    static java.lang.String c(java.lang.String r0) {
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.f = r0
            return r0
    }

    private static void c(android.content.Context r8) {
            java.lang.String r0 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.b     // Catch: java.lang.Throwable -> L35
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L35
            if (r0 != 0) goto Lb
            java.lang.String r0 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.b     // Catch: java.lang.Throwable -> L35
            goto Lf
        Lb:
            java.lang.String r0 = d(r8)     // Catch: java.lang.Throwable -> L35
        Lf:
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L35
            if (r1 != 0) goto L3d
            java.lang.Class<?> r1 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.j     // Catch: java.lang.Throwable -> L35
            java.lang.String r2 = "InitCert"
            r3 = 2
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L35
            java.lang.Class<android.content.Context> r5 = android.content.Context.class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Throwable -> L35
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r7 = 1
            r4[r7] = r5     // Catch: java.lang.Throwable -> L35
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r2, r4)     // Catch: java.lang.Throwable -> L35
            r2 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L35
            r3[r6] = r8     // Catch: java.lang.Throwable -> L35
            r3[r7] = r0     // Catch: java.lang.Throwable -> L35
            r1.invoke(r2, r3)     // Catch: java.lang.Throwable -> L35
            goto L3d
        L35:
            r8 = move-exception
            java.lang.String r8 = r8.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r8)
        L3d:
            return
    }

    static com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.AppIdsUpdater d() {
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper$AppIdsUpdater r0 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.a
            return r0
    }

    private static java.lang.String d(android.content.Context r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L4f
            r0.<init>()     // Catch: java.io.IOException -> L4f
            java.lang.String r1 = r2.getPackageName()     // Catch: java.io.IOException -> L4f
            r0.append(r1)     // Catch: java.io.IOException -> L4f
            java.lang.String r1 = ".cert.pem"
            r0.append(r1)     // Catch: java.io.IOException -> L4f
            java.lang.String r0 = r0.toString()     // Catch: java.io.IOException -> L4f
            android.content.res.AssetManager r2 = r2.getAssets()     // Catch: java.io.IOException -> L4f
            java.lang.String r1 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.k     // Catch: java.io.IOException -> L4f
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.io.IOException -> L4f
            if (r1 != 0) goto L28
            java.lang.String r1 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.k     // Catch: java.io.IOException -> L28
            java.io.InputStream r2 = r2.open(r1)     // Catch: java.io.IOException -> L28
            goto L2c
        L28:
            java.io.InputStream r2 = r2.open(r0)     // Catch: java.io.IOException -> L4f
        L2c:
            java.io.BufferedReader r0 = new java.io.BufferedReader     // Catch: java.io.IOException -> L4f
            java.io.InputStreamReader r1 = new java.io.InputStreamReader     // Catch: java.io.IOException -> L4f
            r1.<init>(r2)     // Catch: java.io.IOException -> L4f
            r0.<init>(r1)     // Catch: java.io.IOException -> L4f
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L4f
            r2.<init>()     // Catch: java.io.IOException -> L4f
        L3b:
            java.lang.String r1 = r0.readLine()     // Catch: java.io.IOException -> L4f
            if (r1 == 0) goto L4a
            r2.append(r1)     // Catch: java.io.IOException -> L4f
            r1 = 10
            r2.append(r1)     // Catch: java.io.IOException -> L4f
            goto L3b
        L4a:
            java.lang.String r2 = r2.toString()     // Catch: java.io.IOException -> L4f
            return r2
        L4f:
            java.lang.String r2 = "loadPemFromAssetFile failed"
            com.czhj.sdk.logger.SigmobLog.d(r2)
            java.lang.String r2 = ""
            return r2
    }

    private static java.lang.String d(java.lang.String r8) {
            r0 = 0
            if (r8 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "android.os.SystemProperties"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L2c
            java.lang.String r2 = "get"
            r3 = 2
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L2c
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Exception -> L2c
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r7 = 1
            r4[r7] = r5     // Catch: java.lang.Exception -> L2c
            java.lang.reflect.Method r2 = r1.getMethod(r2, r4)     // Catch: java.lang.Exception -> L2c
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L2c
            r3[r6] = r8     // Catch: java.lang.Exception -> L2c
            java.lang.String r8 = "unknown"
            r3[r7] = r8     // Catch: java.lang.Exception -> L2c
            java.lang.Object r8 = r2.invoke(r1, r3)     // Catch: java.lang.Exception -> L2c
            java.lang.String r8 = (java.lang.String) r8     // Catch: java.lang.Exception -> L2c
            r0 = r8
        L2c:
            return r0
    }

    static java.lang.String e() {
            java.lang.String r0 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.f
            return r0
    }

    private static java.lang.String f() {
            java.lang.String r0 = android.os.Build.BRAND
            java.lang.String r0 = r0.toUpperCase()
            return r0
    }

    private static java.lang.String g() {
            java.lang.String r0 = android.os.Build.MANUFACTURER
            java.lang.String r0 = r0.toUpperCase()
            return r0
    }

    private static void h() {
            java.lang.String r0 = "com.bun.miitmdid.core.JLibrary"
            java.lang.String r1 = "com.bun.miitmdid.core.MdidSdkHelper"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> L49
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.j = r1     // Catch: java.lang.ClassNotFoundException -> L49
            java.lang.String r1 = "com.bun.miitmdid.interfaces.IIdentifierListener"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L1b
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.g = r1     // Catch: java.lang.Exception -> L1b
            java.lang.String r1 = "com.bun.miitmdid.interfaces.IdSupplier"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L1b
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.h = r1     // Catch: java.lang.Exception -> L1b
            return
        L1b:
            java.lang.String r1 = "com.bun.supplier.IIdentifierListener"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L32
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.g = r1     // Catch: java.lang.Exception -> L32
            java.lang.String r1 = "com.bun.supplier.IdSupplier"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L32
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.h = r1     // Catch: java.lang.Exception -> L32
            java.lang.Class r1 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L32
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.i = r1     // Catch: java.lang.Exception -> L32
            return
        L32:
            java.lang.String r1 = "com.bun.miitmdid.core.IIdentifierListener"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L48
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.g = r1     // Catch: java.lang.Exception -> L48
            java.lang.String r1 = "com.bun.miitmdid.supplier.IdSupplier"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L48
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.h = r1     // Catch: java.lang.Exception -> L48
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L48
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.i = r0     // Catch: java.lang.Exception -> L48
        L48:
            return
        L49:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
            return
    }

    private static void i() {
            java.util.List<java.lang.String> r0 = com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.m
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L15
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.System.loadLibrary(r1)     // Catch: java.lang.Throwable -> L6
        L15:
            return
    }

    public void a(android.content.Context r2, com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.AppIdsUpdater r3) {
            r1 = this;
            r1.c = r3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "getManufacturer ===> "
            r3.append(r0)
            java.lang.String r0 = g()
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            com.czhj.sdk.logger.SigmobLog.d(r3)
            java.lang.String r3 = g()
            java.lang.String r3 = r3.toUpperCase()
            java.lang.String r0 = "ASUS"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L2f
        L2a:
            r1.a(r2, r3)
            goto Ldc
        L2f:
            java.lang.String r0 = "HUAWEI"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L38
            goto L2a
        L38:
            java.lang.String r0 = "LENOVO"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L41
            goto L2a
        L41:
            java.lang.String r0 = "MOTOLORA"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L4a
            goto L2a
        L4a:
            java.lang.String r0 = "MEIZU"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L53
            goto L2a
        L53:
            java.lang.String r0 = "NUBIA"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L66
            com.czhj.devicehelper.oaId.helpers.e r3 = new com.czhj.devicehelper.oaId.helpers.e
            r3.<init>(r2)
            java.lang.String r2 = r3.a()
            goto Ldd
        L66:
            java.lang.String r0 = "OPPO"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L6f
            goto L2a
        L6f:
            java.lang.String r0 = "SAMSUNG"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L78
            goto L2a
        L78:
            java.lang.String r0 = "VIVO"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L8a
            com.czhj.devicehelper.oaId.helpers.i r3 = new com.czhj.devicehelper.oaId.helpers.i
            r3.<init>(r2)
            java.lang.String r2 = r3.a()
            goto Ldd
        L8a:
            java.lang.String r0 = "XIAOMI"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L9c
            com.czhj.devicehelper.oaId.helpers.j r3 = new com.czhj.devicehelper.oaId.helpers.j
            r3.<init>(r2)
        L97:
            java.lang.String r2 = r3.a()
            goto Ldd
        L9c:
            java.lang.String r0 = "BLACKSHARK"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto Laa
            com.czhj.devicehelper.oaId.helpers.j r3 = new com.czhj.devicehelper.oaId.helpers.j
            r3.<init>(r2)
            goto L97
        Laa:
            java.lang.String r0 = "ONEPLUS"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto Lb4
            goto L2a
        Lb4:
            java.lang.String r0 = "ZTE"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto Lbe
            goto L2a
        Lbe:
            java.lang.String r0 = "FERRMEOS"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto L2a
            boolean r0 = a()
            if (r0 == 0) goto Lce
            goto L2a
        Lce:
            java.lang.String r0 = "SSUI"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto L2a
            boolean r0 = b()
            goto L2a
        Ldc:
            r2 = 0
        Ldd:
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper$AppIdsUpdater r3 = r1.c
            if (r3 == 0) goto Le4
            r3.OnIdsAvalid(r2)
        Le4:
            return
    }
}
