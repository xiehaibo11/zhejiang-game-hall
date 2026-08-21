package com.mbridge.msdk.foundation.tools;

public final class v extends com.mbridge.msdk.foundation.tools.e {
    private static java.lang.String a = null;
    private static java.lang.String b = null;
    private static int c = -1;
    private static int d = -1;
    private static volatile int e = -1;
    private static java.lang.String f = "";
    private static java.lang.String g = "";
    private static java.lang.String h = "";
    private static java.lang.String i = "";
    private static int j = 0;
    private static java.lang.String k = "";
    private static java.lang.String l = "";
    private static int m = -1;
    private static java.lang.String n = "";
    private static int o = 0;
    private static java.lang.String p = "";
    private static java.lang.String q = null;
    private static int r = 0;
    private static int s = -1;
    private static int t = -1;
    private static java.lang.Object u = null;
    private static int v = 0;
    private static int w = 0;
    private static int x = -1;
    private static int y;





    static {
            return
    }

    public static java.lang.String A() {
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.f
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L13
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            C(r0)
        L13:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.f
            return r0
    }

    public static java.lang.String A(android.content.Context r2) {
            if (r2 != 0) goto L5
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.h
            return r2
        L5:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.h     // Catch: java.lang.Exception -> L22
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L22
            if (r0 == 0) goto L1f
            android.content.pm.PackageManager r0 = r2.getPackageManager()     // Catch: java.lang.Exception -> L22
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L22
            r1 = 0
            android.content.pm.PackageInfo r2 = r0.getPackageInfo(r2, r1)     // Catch: java.lang.Exception -> L22
            java.lang.String r2 = r2.packageName     // Catch: java.lang.Exception -> L22
            com.mbridge.msdk.foundation.tools.v.h = r2     // Catch: java.lang.Exception -> L22
            return r2
        L1f:
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.h
            return r2
        L22:
            r2 = move-exception
            r2.printStackTrace()
            java.lang.String r2 = ""
            return r2
    }

    public static java.lang.String B() {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: java.lang.Throwable -> L27
            java.lang.String r1 = "authority_other"
            boolean r0 = r0.a(r1)     // Catch: java.lang.Throwable -> L27
            if (r0 != 0) goto Lf
            java.lang.String r0 = ""
            return r0
        Lf:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.l     // Catch: java.lang.Throwable -> L27
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L27
            if (r0 == 0) goto L31
            java.lang.Thread r0 = new java.lang.Thread     // Catch: java.lang.Throwable -> L27
            com.mbridge.msdk.foundation.tools.v$4 r1 = new com.mbridge.msdk.foundation.tools.v$4     // Catch: java.lang.Throwable -> L27
            r1.<init>()     // Catch: java.lang.Throwable -> L27
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L27
            r0.start()     // Catch: java.lang.Throwable -> L27
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.l     // Catch: java.lang.Throwable -> L27
            return r0
        L27:
            r0 = move-exception
            java.lang.String r1 = r0.getMessage()
            java.lang.String r2 = "SameDiTool"
            com.mbridge.msdk.foundation.tools.z.c(r2, r1, r0)
        L31:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.l
            return r0
    }

    public static void B(android.content.Context r2) {
            if (r2 != 0) goto L3
            return
        L3:
            android.os.Looper r0 = android.os.Looper.myLooper()     // Catch: java.lang.Exception -> L28
            android.os.Looper r1 = android.os.Looper.getMainLooper()     // Catch: java.lang.Exception -> L28
            if (r0 != r1) goto Lf
            r0 = 1
            goto L10
        Lf:
            r0 = 0
        L10:
            if (r0 == 0) goto L16
            p(r2)     // Catch: java.lang.Exception -> L28
            goto L30
        L16:
            android.os.Handler r0 = new android.os.Handler     // Catch: java.lang.Exception -> L28
            android.os.Looper r1 = r2.getMainLooper()     // Catch: java.lang.Exception -> L28
            r0.<init>(r1)     // Catch: java.lang.Exception -> L28
            com.mbridge.msdk.foundation.tools.v$1 r1 = new com.mbridge.msdk.foundation.tools.v$1     // Catch: java.lang.Exception -> L28
            r1.<init>(r2)     // Catch: java.lang.Exception -> L28
            r0.post(r1)     // Catch: java.lang.Exception -> L28
            goto L30
        L28:
            r2 = move-exception
            java.lang.String r0 = "SameDiTool"
            java.lang.String r1 = ""
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r2)
        L30:
            return
    }

    public static java.lang.String C() {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            java.lang.String r1 = ""
            if (r0 != 0) goto Lf
            return r1
        Lf:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.g
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L2c
            int r0 = D()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            r2.append(r1)
            java.lang.String r0 = r2.toString()
            com.mbridge.msdk.foundation.tools.v.g = r0
        L2c:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.g
            return r0
    }

    public static java.lang.String C(android.content.Context r8) {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            r1 = 0
            if (r0 != 0) goto Le
            return r1
        Le:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.f
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r2 = "SameDiTool"
            if (r0 == 0) goto L2f
            java.lang.String r0 = "mbridge_ua"
            java.lang.String r3 = ""
            java.lang.Object r0 = com.mbridge.msdk.foundation.tools.ag.b(r8, r0, r3)     // Catch: java.lang.Throwable -> L27
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L27
            com.mbridge.msdk.foundation.tools.v.f = r0     // Catch: java.lang.Throwable -> L27
            goto L2f
        L27:
            r0 = move-exception
            java.lang.String r3 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r2, r3, r0)
        L2f:
            android.os.Looper r0 = android.os.Looper.myLooper()     // Catch: java.lang.Throwable -> Lc9
            android.os.Looper r3 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> Lc9
            r4 = 1
            r5 = 0
            if (r0 != r3) goto L3d
            r0 = r4
            goto L3e
        L3d:
            r0 = r5
        L3e:
            if (r0 == 0) goto Lc5
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.f     // Catch: java.lang.Throwable -> Lc9
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lc9
            if (r0 == 0) goto Lb2
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L54
            r3 = 17
            if (r0 < r3) goto L54
            java.lang.String r0 = android.webkit.WebSettings.getDefaultUserAgent(r8)     // Catch: java.lang.Throwable -> L54
            com.mbridge.msdk.foundation.tools.v.f = r0     // Catch: java.lang.Throwable -> L54
        L54:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.f     // Catch: java.lang.Throwable -> Lc9
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lc9
            if (r0 == 0) goto Ld1
            java.lang.Class<android.webkit.WebSettings> r0 = android.webkit.WebSettings.class
            r3 = 2
            java.lang.Class[] r6 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L86
            java.lang.Class<android.content.Context> r7 = android.content.Context.class
            r6[r5] = r7     // Catch: java.lang.Throwable -> L86
            java.lang.Class<android.webkit.WebView> r7 = android.webkit.WebView.class
            r6[r4] = r7     // Catch: java.lang.Throwable -> L86
            java.lang.reflect.Constructor r0 = r0.getDeclaredConstructor(r6)     // Catch: java.lang.Throwable -> L86
            r0.setAccessible(r4)     // Catch: java.lang.Throwable -> L86
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L86
            r3[r5] = r8     // Catch: java.lang.Throwable -> L86
            r3[r4] = r1     // Catch: java.lang.Throwable -> L86
            java.lang.Object r1 = r0.newInstance(r3)     // Catch: java.lang.Throwable -> L86
            android.webkit.WebSettings r1 = (android.webkit.WebSettings) r1     // Catch: java.lang.Throwable -> L86
            java.lang.String r1 = r1.getUserAgentString()     // Catch: java.lang.Throwable -> L86
            com.mbridge.msdk.foundation.tools.v.f = r1     // Catch: java.lang.Throwable -> L86
            r0.setAccessible(r5)     // Catch: java.lang.Throwable -> L86
            goto L8a
        L86:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> Lc9
        L8a:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.f     // Catch: java.lang.Throwable -> Lc9
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lc9
            if (r0 == 0) goto La6
            android.webkit.WebView r0 = new android.webkit.WebView     // Catch: java.lang.Throwable -> La2
            r0.<init>(r8)     // Catch: java.lang.Throwable -> La2
            android.webkit.WebSettings r0 = r0.getSettings()     // Catch: java.lang.Throwable -> La2
            java.lang.String r0 = r0.getUserAgentString()     // Catch: java.lang.Throwable -> La2
            com.mbridge.msdk.foundation.tools.v.f = r0     // Catch: java.lang.Throwable -> La2
            goto La6
        La2:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> Lc9
        La6:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.f     // Catch: java.lang.Throwable -> Lc9
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lc9
            if (r0 == 0) goto Ld1
            R()     // Catch: java.lang.Throwable -> Lc9
            goto Ld1
        Lb2:
            java.lang.Thread r0 = new java.lang.Thread     // Catch: java.lang.Exception -> Lc0 java.lang.Throwable -> Lc9
            com.mbridge.msdk.foundation.tools.v$2 r1 = new com.mbridge.msdk.foundation.tools.v$2     // Catch: java.lang.Exception -> Lc0 java.lang.Throwable -> Lc9
            r1.<init>(r8)     // Catch: java.lang.Exception -> Lc0 java.lang.Throwable -> Lc9
            r0.<init>(r1)     // Catch: java.lang.Exception -> Lc0 java.lang.Throwable -> Lc9
            r0.start()     // Catch: java.lang.Exception -> Lc0 java.lang.Throwable -> Lc9
            goto Ld1
        Lc0:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> Lc9
            goto Ld1
        Lc5:
            R()     // Catch: java.lang.Throwable -> Lc9
            goto Ld1
        Lc9:
            r0 = move-exception
            java.lang.String r1 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r2, r1, r0)
        Ld1:
            H(r8)
            java.lang.String r8 = com.mbridge.msdk.foundation.tools.v.f
            return r8
    }

    public static int D() {
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L3
            return r0
        L3:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    public static int D(android.content.Context r4) {
            java.lang.String r4 = "SameDiTool"
            r0 = 0
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L4c
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> L4c
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r2 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: java.lang.Exception -> L4c
            java.lang.String r3 = "authority_general_data"
            boolean r2 = r2.a(r3)     // Catch: java.lang.Exception -> L4c
            if (r2 != 0) goto L1a
            int r4 = com.mbridge.msdk.foundation.tools.v.e     // Catch: java.lang.Exception -> L4c
            return r4
        L1a:
            if (r1 != 0) goto L1f
            int r4 = com.mbridge.msdk.foundation.tools.v.e     // Catch: java.lang.Exception -> L4c
            return r4
        L1f:
            int r2 = com.mbridge.msdk.foundation.tools.v.e     // Catch: java.lang.Exception -> L4c
            r3 = -1
            if (r2 == r3) goto L47
            com.mbridge.msdk.foundation.tools.v$3 r2 = new com.mbridge.msdk.foundation.tools.v$3     // Catch: java.lang.Throwable -> L3c
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L3c
            java.util.concurrent.ThreadPoolExecutor r1 = com.mbridge.msdk.foundation.same.f.b.c()     // Catch: java.lang.Throwable -> L3c
            int r1 = r1.getActiveCount()     // Catch: java.lang.Throwable -> L3c
            r3 = 1
            if (r1 >= r3) goto L44
            java.util.concurrent.ThreadPoolExecutor r1 = com.mbridge.msdk.foundation.same.f.b.c()     // Catch: java.lang.Throwable -> L3c
            r1.execute(r2)     // Catch: java.lang.Throwable -> L3c
            goto L44
        L3c:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Exception -> L4c
            com.mbridge.msdk.foundation.tools.z.d(r4, r1)     // Catch: java.lang.Exception -> L4c
        L44:
            int r4 = com.mbridge.msdk.foundation.tools.v.e     // Catch: java.lang.Exception -> L4c
            return r4
        L47:
            com.mbridge.msdk.foundation.tools.v.e = r0     // Catch: java.lang.Exception -> L4c
            int r4 = com.mbridge.msdk.foundation.tools.v.e
            return r4
        L4c:
            r1 = move-exception
            java.lang.String r2 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r4, r2, r1)
            com.mbridge.msdk.foundation.tools.v.e = r0
            int r4 = com.mbridge.msdk.foundation.tools.v.e
            return r4
    }

    public static java.lang.String E() {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_device_id"
            boolean r0 = r0.a(r1)
            java.lang.String r1 = ""
            if (r0 != 0) goto Lf
            return r1
        Lf:
            boolean r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.h()
            if (r0 != 0) goto L21
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1e
            goto L20
        L1e:
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.v.a
        L20:
            return r1
        L21:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L2a
            return r1
        L2a:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.a
            return r0
    }

    public static java.lang.String E(android.content.Context r3) {
            java.lang.String r0 = "SameDiTool"
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r1 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r2 = "authority_general_data"
            boolean r1 = r1.a(r2)
            java.lang.String r2 = ""
            if (r1 != 0) goto L11
            return r2
        L11:
            if (r3 != 0) goto L14
            return r2
        L14:
            android.content.ContentResolver r3 = r3.getContentResolver()     // Catch: java.lang.Throwable -> L1f java.lang.Exception -> L28
            java.lang.String r1 = "time_12_24"
            java.lang.String r3 = android.provider.Settings.System.getString(r3, r1)     // Catch: java.lang.Throwable -> L1f java.lang.Exception -> L28
            return r3
        L1f:
            r3 = move-exception
            java.lang.String r1 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r3)
            goto L30
        L28:
            r3 = move-exception
            java.lang.String r1 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r3)
        L30:
            return r2
    }

    public static java.lang.String F() {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_device_id"
            boolean r0 = r0.a(r1)
            java.lang.String r1 = ""
            if (r0 != 0) goto Lf
            return r1
        Lf:
            boolean r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.h()
            if (r0 != 0) goto L21
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1e
            goto L20
        L1e:
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.v.b
        L20:
            return r1
        L21:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.b
            if (r0 != 0) goto L26
            return r1
        L26:
            return r0
    }

    public static java.lang.String F(android.content.Context r9) {
            java.lang.String r0 = "SameDiTool"
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r1 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r2 = "authority_general_data"
            boolean r1 = r1.a(r2)
            java.lang.String r2 = ""
            if (r1 != 0) goto L11
            return r2
        L11:
            if (r9 != 0) goto L14
            return r2
        L14:
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.v.q
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L1f
            java.lang.String r9 = com.mbridge.msdk.foundation.tools.v.q
            return r9
        L1f:
            java.lang.String r1 = "/proc/meminfo"
            r3 = 0
            java.io.FileReader r4 = new java.io.FileReader     // Catch: java.lang.Throwable -> L6f java.io.IOException -> L8c
            r4.<init>(r1)     // Catch: java.lang.Throwable -> L6f java.io.IOException -> L8c
            java.io.BufferedReader r1 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L6b java.io.IOException -> L6d
            r5 = 8192(0x2000, float:1.148E-41)
            r1.<init>(r4, r5)     // Catch: java.lang.Throwable -> L6b java.io.IOException -> L6d
            java.lang.String r3 = r1.readLine()     // Catch: java.lang.Throwable -> L65 java.io.IOException -> L68
            java.lang.String r5 = "\\s+"
            java.lang.String[] r3 = r3.split(r5)     // Catch: java.lang.Throwable -> L65 java.io.IOException -> L68
            r5 = 1
            r3 = r3[r5]     // Catch: java.lang.Throwable -> L65 java.io.IOException -> L68
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L65 java.io.IOException -> L68
            long r5 = r3.longValue()     // Catch: java.lang.Throwable -> L65 java.io.IOException -> L68
            r7 = 1024(0x400, double:5.06E-321)
            long r5 = r5 * r7
            java.lang.String r9 = android.text.format.Formatter.formatFileSize(r9, r5)     // Catch: java.lang.Throwable -> L65 java.io.IOException -> L68
            com.mbridge.msdk.foundation.tools.v.q = r9     // Catch: java.lang.Throwable -> L65 java.io.IOException -> L68
            r1.close()     // Catch: java.io.IOException -> L50
            goto L58
        L50:
            r1 = move-exception
            java.lang.String r2 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r2, r1)
        L58:
            r4.close()     // Catch: java.io.IOException -> L5c
            goto L64
        L5c:
            r1 = move-exception
            java.lang.String r2 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r2, r1)
        L64:
            return r9
        L65:
            r9 = move-exception
            r3 = r1
            goto L71
        L68:
            r9 = move-exception
            r3 = r1
            goto L8e
        L6b:
            r9 = move-exception
            goto L71
        L6d:
            r9 = move-exception
            goto L8e
        L6f:
            r9 = move-exception
            r4 = r3
        L71:
            java.lang.String r1 = r9.getMessage()     // Catch: java.lang.Throwable -> Lb2
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r9)     // Catch: java.lang.Throwable -> Lb2
            if (r3 == 0) goto L86
            r3.close()     // Catch: java.io.IOException -> L7e
            goto L86
        L7e:
            r9 = move-exception
            java.lang.String r1 = r9.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r9)
        L86:
            if (r4 == 0) goto Lb1
            r4.close()     // Catch: java.io.IOException -> La9
            goto Lb1
        L8c:
            r9 = move-exception
            r4 = r3
        L8e:
            java.lang.String r1 = r9.getMessage()     // Catch: java.lang.Throwable -> Lb2
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r9)     // Catch: java.lang.Throwable -> Lb2
            if (r3 == 0) goto La3
            r3.close()     // Catch: java.io.IOException -> L9b
            goto La3
        L9b:
            r9 = move-exception
            java.lang.String r1 = r9.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r9)
        La3:
            if (r4 == 0) goto Lb1
            r4.close()     // Catch: java.io.IOException -> La9
            goto Lb1
        La9:
            r9 = move-exception
            java.lang.String r1 = r9.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r9)
        Lb1:
            return r2
        Lb2:
            r9 = move-exception
            if (r3 == 0) goto Lc1
            r3.close()     // Catch: java.io.IOException -> Lb9
            goto Lc1
        Lb9:
            r1 = move-exception
            java.lang.String r2 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r2, r1)
        Lc1:
            if (r4 == 0) goto Lcf
            r4.close()     // Catch: java.io.IOException -> Lc7
            goto Lcf
        Lc7:
            r1 = move-exception
            java.lang.String r2 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r2, r1)
        Lcf:
            throw r9
    }

    public static java.util.UUID G() {
            java.util.UUID r0 = java.util.UUID.randomUUID()     // Catch: java.lang.Throwable -> L5
            goto L10
        L5:
            r0 = move-exception
            java.lang.String r1 = r0.getMessage()
            java.lang.String r2 = "SameDiTool"
            com.mbridge.msdk.foundation.tools.z.c(r2, r1, r0)
            r0 = 0
        L10:
            return r0
    }

    static void G(android.content.Context r0) {
            H(r0)
            return
    }

    public static java.lang.String H() {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto Lf
            java.lang.String r0 = ""
            return r0
        Lf:
            java.lang.String r0 = android.os.Build.MANUFACTURER
            return r0
    }

    private static void H(android.content.Context r2) {
            java.lang.String r0 = "mbridge_ua"
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.v.f     // Catch: java.lang.Throwable -> L8
            com.mbridge.msdk.foundation.tools.ag.a(r2, r0, r1)     // Catch: java.lang.Throwable -> L8
            goto L12
        L8:
            r2 = move-exception
            java.lang.String r0 = r2.getMessage()
            java.lang.String r1 = "SameDiTool"
            com.mbridge.msdk.foundation.tools.z.c(r1, r0, r2)
        L12:
            return
    }

    public static java.lang.String I() {
            java.lang.String r0 = "SameDiTool"
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r1 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r2 = "authority_general_data"
            boolean r1 = r1.a(r2)
            if (r1 != 0) goto L11
            java.lang.String r0 = ""
            return r0
        L11:
            int r1 = com.mbridge.msdk.foundation.tools.v.r
            java.lang.String r2 = "GB"
            if (r1 <= 0) goto L29
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = com.mbridge.msdk.foundation.tools.v.r
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            return r0
        L29:
            java.lang.String r1 = "/proc/meminfo"
            r3 = 0
            com.mbridge.msdk.foundation.tools.v.r = r3
            r3 = 0
            java.io.FileReader r4 = new java.io.FileReader     // Catch: java.lang.Throwable -> L7d java.lang.Exception -> L93
            r4.<init>(r1)     // Catch: java.lang.Throwable -> L7d java.lang.Exception -> L93
            java.io.BufferedReader r1 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L78
            r5 = 8192(0x2000, float:1.148E-41)
            r1.<init>(r4, r5)     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L78
            java.lang.String r3 = r1.readLine()     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L71
            java.lang.String r5 = "\\s+"
            java.lang.String[] r3 = r3.split(r5)     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L71
            r5 = 1
            r3 = r3[r5]     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L71
            r1.close()     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L71
            if (r3 == 0) goto L68
            java.lang.Float r5 = new java.lang.Float     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L71
            java.lang.Float r3 = java.lang.Float.valueOf(r3)     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L71
            float r3 = r3.floatValue()     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L71
            r6 = 1233125376(0x49800000, float:1048576.0)
            float r3 = r3 / r6
            r5.<init>(r3)     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L71
            double r5 = r5.doubleValue()     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L71
            double r5 = java.lang.Math.ceil(r5)     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L71
            int r3 = (int) r5     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L71
            com.mbridge.msdk.foundation.tools.v.r = r3     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L71
        L68:
            r4.close()     // Catch: java.io.IOException -> L6b
        L6b:
            r1.close()     // Catch: java.io.IOException -> La9
            goto Lad
        L6f:
            r3 = move-exception
            goto L81
        L71:
            r3 = move-exception
            goto L97
        L73:
            r1 = move-exception
            r7 = r3
            r3 = r1
            r1 = r7
            goto L81
        L78:
            r1 = move-exception
            r7 = r3
            r3 = r1
            r1 = r7
            goto L97
        L7d:
            r1 = move-exception
            r4 = r3
            r3 = r1
            r1 = r4
        L81:
            java.lang.String r5 = r3.getMessage()     // Catch: java.lang.Throwable -> Lbf
            com.mbridge.msdk.foundation.tools.z.c(r0, r5, r3)     // Catch: java.lang.Throwable -> Lbf
            if (r4 == 0) goto L8d
            r4.close()     // Catch: java.io.IOException -> L8d
        L8d:
            if (r1 == 0) goto Lad
            r1.close()     // Catch: java.io.IOException -> La9
            goto Lad
        L93:
            r1 = move-exception
            r4 = r3
            r3 = r1
            r1 = r4
        L97:
            java.lang.String r5 = r3.getMessage()     // Catch: java.lang.Throwable -> Lbf
            com.mbridge.msdk.foundation.tools.z.c(r0, r5, r3)     // Catch: java.lang.Throwable -> Lbf
            if (r4 == 0) goto La3
            r4.close()     // Catch: java.io.IOException -> La3
        La3:
            if (r1 == 0) goto Lad
            r1.close()     // Catch: java.io.IOException -> La9
            goto Lad
        La9:
            r0 = move-exception
            r0.printStackTrace()
        Lad:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = com.mbridge.msdk.foundation.tools.v.r
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            return r0
        Lbf:
            r0 = move-exception
            if (r4 == 0) goto Lc5
            r4.close()     // Catch: java.io.IOException -> Lc5
        Lc5:
            if (r1 == 0) goto Lcf
            r1.close()     // Catch: java.io.IOException -> Lcb
            goto Lcf
        Lcb:
            r1 = move-exception
            r1.printStackTrace()
        Lcf:
            throw r0
    }

    public static java.lang.String J() {
            java.lang.String r0 = ""
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L71
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> L71
            long r2 = com.mbridge.msdk.foundation.tools.u.a()     // Catch: java.lang.Exception -> L71
            long r4 = S()     // Catch: java.lang.Exception -> L71
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L71
            r6.<init>()     // Catch: java.lang.Exception -> L71
            java.lang.String r7 = "app_tki_"
            r6.append(r7)     // Catch: java.lang.Exception -> L71
            r6.append(r2)     // Catch: java.lang.Exception -> L71
            java.lang.String r7 = "_"
            r6.append(r7)     // Catch: java.lang.Exception -> L71
            r6.append(r4)     // Catch: java.lang.Exception -> L71
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L71
            java.lang.Object r7 = com.mbridge.msdk.foundation.tools.ag.b(r1, r6, r0)     // Catch: java.lang.Exception -> L71
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Exception -> L71
            boolean r8 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> L6e
            if (r8 == 0) goto L76
            org.json.JSONObject r8 = new org.json.JSONObject     // Catch: java.lang.Exception -> L6e
            r8.<init>()     // Catch: java.lang.Exception -> L6e
            java.lang.String r9 = "1"
            r8.put(r9, r0)     // Catch: java.lang.Exception -> L5e
            java.lang.String r9 = "2"
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: java.lang.Exception -> L5e
            r8.put(r9, r4)     // Catch: java.lang.Exception -> L5e
            java.lang.String r4 = "3"
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Exception -> L5e
            r8.put(r4, r2)     // Catch: java.lang.Exception -> L5e
            java.lang.String r2 = "4"
            r8.put(r2, r0)     // Catch: java.lang.Exception -> L5e
            java.lang.String r2 = "5"
            r8.put(r2, r0)     // Catch: java.lang.Exception -> L5e
            goto L62
        L5e:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Exception -> L6e
        L62:
            java.lang.String r0 = r8.toString()     // Catch: java.lang.Exception -> L6e
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.a.a(r0)     // Catch: java.lang.Exception -> L6e
            com.mbridge.msdk.foundation.tools.ag.a(r1, r6, r0)     // Catch: java.lang.Exception -> L71
            goto L75
        L6e:
            r1 = move-exception
            r0 = r7
            goto L72
        L71:
            r1 = move-exception
        L72:
            r1.printStackTrace()
        L75:
            r7 = r0
        L76:
            return r7
    }

    public static int K() {
            java.lang.String r0 = "FreeRamSize"
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r1 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: java.lang.Throwable -> L6c
            java.lang.String r2 = "authority_general_data"
            boolean r1 = r1.a(r2)     // Catch: java.lang.Throwable -> L6c
            if (r1 != 0) goto L10
            r0 = 0
            return r0
        L10:
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L6c
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L6c
            r2 = 0
            java.lang.Long r4 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L6c
            java.lang.Object r4 = com.mbridge.msdk.foundation.tools.ag.b(r1, r0, r4)     // Catch: java.lang.Throwable -> L6c
            java.lang.Long r4 = (java.lang.Long) r4     // Catch: java.lang.Throwable -> L6c
            long r4 = r4.longValue()     // Catch: java.lang.Throwable -> L6c
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L6c
            long r4 = r6 - r4
            r8 = 1800000(0x1b7740, double:8.89318E-318)
            int r4 = (r4 > r8 ? 1 : (r4 == r8 ? 0 : -1))
            if (r4 > 0) goto L3a
            int r4 = com.mbridge.msdk.foundation.tools.v.d     // Catch: java.lang.Throwable -> L6c
            r5 = -1
            if (r4 != r5) goto L76
        L3a:
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L6c
            android.content.Context r4 = r4.j()     // Catch: java.lang.Throwable -> L6c
            if (r4 == 0) goto L56
            java.lang.String r2 = "activity"
            java.lang.Object r2 = r4.getSystemService(r2)     // Catch: java.lang.Throwable -> L6c
            android.app.ActivityManager r2 = (android.app.ActivityManager) r2     // Catch: java.lang.Throwable -> L6c
            android.app.ActivityManager$MemoryInfo r3 = new android.app.ActivityManager$MemoryInfo     // Catch: java.lang.Throwable -> L6c
            r3.<init>()     // Catch: java.lang.Throwable -> L6c
            r2.getMemoryInfo(r3)     // Catch: java.lang.Throwable -> L6c
            long r2 = r3.availMem     // Catch: java.lang.Throwable -> L6c
        L56:
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 / r4
            long r2 = r2 / r4
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L6c
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> L6c
            com.mbridge.msdk.foundation.tools.v.d = r2     // Catch: java.lang.Throwable -> L6c
            java.lang.Long r2 = java.lang.Long.valueOf(r6)     // Catch: java.lang.Throwable -> L6c
            com.mbridge.msdk.foundation.tools.ag.a(r1, r0, r2)     // Catch: java.lang.Throwable -> L6c
            goto L76
        L6c:
            r0 = move-exception
            java.lang.String r1 = r0.getMessage()
            java.lang.String r2 = "SameDiTool"
            com.mbridge.msdk.foundation.tools.z.c(r2, r1, r0)
        L76:
            int r0 = com.mbridge.msdk.foundation.tools.v.d
            return r0
    }

    public static int L() {
            java.lang.String r0 = "TotalRamSize"
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r1 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r2 = "authority_general_data"
            boolean r1 = r1.a(r2)
            if (r1 != 0) goto L10
            r0 = 0
            return r0
        L10:
            int r1 = com.mbridge.msdk.foundation.tools.v.c
            r2 = 1
            if (r1 >= r2) goto L63
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L59
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L59
            r2 = 0
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L59
            java.lang.Object r2 = com.mbridge.msdk.foundation.tools.ag.b(r1, r0, r2)     // Catch: java.lang.Throwable -> L59
            java.lang.Long r2 = (java.lang.Long) r2     // Catch: java.lang.Throwable -> L59
            long r2 = r2.longValue()     // Catch: java.lang.Throwable -> L59
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L59
            long r2 = r4 - r2
            r6 = 1800000(0x1b7740, double:8.89318E-318)
            int r2 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r2 > 0) goto L3f
            int r2 = com.mbridge.msdk.foundation.tools.v.c     // Catch: java.lang.Throwable -> L59
            r3 = -1
            if (r2 != r3) goto L63
        L3f:
            long r2 = S()     // Catch: java.lang.Throwable -> L59
            r6 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 / r6
            long r2 = r2 / r6
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L59
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> L59
            com.mbridge.msdk.foundation.tools.v.c = r2     // Catch: java.lang.Throwable -> L59
            java.lang.Long r2 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L59
            com.mbridge.msdk.foundation.tools.ag.a(r1, r0, r2)     // Catch: java.lang.Throwable -> L59
            goto L63
        L59:
            r0 = move-exception
            java.lang.String r1 = r0.getMessage()
            java.lang.String r2 = "SameDiTool"
            com.mbridge.msdk.foundation.tools.z.c(r2, r1, r0)
        L63:
            int r0 = com.mbridge.msdk.foundation.tools.v.c
            return r0
    }

    public static int M() {
            int r0 = com.mbridge.msdk.foundation.tools.v.m
            return r0
    }

    public static java.lang.String N() {
            java.lang.String r0 = "SameDiTool"
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.v.p
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Ld
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.p
            return r0
        Ld:
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            r2 = 0
            r3 = 0
            java.lang.String r4 = "com.huawei.system.BuildEx"
            java.lang.Class r4 = java.lang.Class.forName(r4)     // Catch: java.lang.Throwable -> L2c
            java.lang.String r5 = "getOsBrand"
            java.lang.Class[] r6 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L2c
            java.lang.reflect.Method r5 = r4.getMethod(r5, r6)     // Catch: java.lang.Throwable -> L2c
            java.lang.Object[] r6 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L2c
            java.lang.Object r4 = r5.invoke(r4, r6)     // Catch: java.lang.Throwable -> L2c
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L2c
            r2 = r4
            goto L34
        L2c:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
        L34:
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> La2
            if (r4 != 0) goto L9d
            java.lang.String r4 = "harmony"
            boolean r4 = r2.equals(r4)     // Catch: java.lang.Throwable -> La2
            if (r4 == 0) goto L9d
            java.lang.String r4 = "osType"
            r1.put(r4, r2)     // Catch: java.lang.Throwable -> La2
            java.lang.String r2 = "ohos.system.version.SystemVersion"
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Throwable -> L63
            java.lang.String r4 = "getVersion"
            java.lang.Class[] r5 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L63
            java.lang.reflect.Method r4 = r2.getMethod(r4, r5)     // Catch: java.lang.Throwable -> L63
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L63
            java.lang.Object r2 = r4.invoke(r2, r3)     // Catch: java.lang.Throwable -> L63
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L63
            java.lang.String r3 = "version"
            r1.put(r3, r2)     // Catch: java.lang.Throwable -> L63
            goto L6b
        L63:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> La2
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)     // Catch: java.lang.Throwable -> La2
        L6b:
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L84
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L84
            android.content.ContentResolver r2 = r2.getContentResolver()     // Catch: java.lang.Throwable -> L84
            java.lang.String r3 = "pure_mode_state"
            r4 = -1
            int r2 = android.provider.Settings.Secure.getInt(r2, r3, r4)     // Catch: java.lang.Throwable -> L84
            java.lang.String r3 = "pure_state"
            r1.put(r3, r2)     // Catch: java.lang.Throwable -> L84
            goto L8c
        L84:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> La2
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)     // Catch: java.lang.Throwable -> La2
        L8c:
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> La2
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> La2
            if (r2 != 0) goto L9a
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.t.a(r1)     // Catch: java.lang.Throwable -> La2
        L9a:
            com.mbridge.msdk.foundation.tools.v.p = r1     // Catch: java.lang.Throwable -> La2
            goto Laa
        L9d:
            java.lang.String r1 = "android"
            com.mbridge.msdk.foundation.tools.v.p = r1     // Catch: java.lang.Throwable -> La2
            goto Laa
        La2:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        Laa:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.p
            return r0
    }

    public static int O() {
            int r0 = com.mbridge.msdk.foundation.tools.v.x
            return r0
    }

    public static int P() {
            r0 = 0
            com.mbridge.msdk.foundation.tools.ab r1 = com.mbridge.msdk.foundation.tools.ab.a.a()     // Catch: java.lang.Exception -> L25
            java.lang.String r2 = "v_a_d_p"
            boolean r1 = r1.a(r2, r0)     // Catch: java.lang.Exception -> L25
            if (r1 == 0) goto L24
            boolean r1 = com.mbridge.msdk.foundation.tools.ae.g()     // Catch: java.lang.Exception -> L25
            if (r1 == 0) goto L17
            r1 = 1
            com.mbridge.msdk.foundation.tools.v.y = r1     // Catch: java.lang.Exception -> L25
            goto L31
        L17:
            boolean r1 = com.mbridge.msdk.foundation.tools.ae.h()     // Catch: java.lang.Exception -> L25
            if (r1 == 0) goto L21
            r1 = 2
            com.mbridge.msdk.foundation.tools.v.y = r1     // Catch: java.lang.Exception -> L25
            goto L31
        L21:
            com.mbridge.msdk.foundation.tools.v.y = r0     // Catch: java.lang.Exception -> L25
            goto L31
        L24:
            return r0
        L25:
            r1 = move-exception
            com.mbridge.msdk.foundation.tools.v.y = r0
            java.lang.String r0 = r1.getMessage()
            java.lang.String r1 = "SameDiTool"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L31:
            int r0 = com.mbridge.msdk.foundation.tools.v.y
            return r0
    }

    static java.lang.String Q() {
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.f
            return r0
    }

    private static void R() {
            java.lang.String r0 = android.os.Build.VERSION.RELEASE
            java.lang.String r1 = x()
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L33
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L33
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Mozilla/5.0 (Linux; Android "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = "; "
            r2.append(r0)
            r2.append(r1)
            java.lang.String r0 = " Build/) AppleWebKit/535.19 (KHTML, like Gecko) Chrome/18.0.1025.133 Mobile Safari/535.19"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.mbridge.msdk.foundation.tools.v.f = r0
            goto L37
        L33:
            java.lang.String r0 = "Mozilla/5.0 (Linux; Android 4.0.4; Galaxy Nexus Build/IMM76B) AppleWebKit/535.19 (KHTML, like Gecko) Chrome/18.0.1025.133 Mobile Safari/535.19"
            com.mbridge.msdk.foundation.tools.v.f = r0
        L37:
            return
    }

    private static long S() {
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            if (r0 == 0) goto L23
            java.lang.String r1 = "activity"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.app.ActivityManager r0 = (android.app.ActivityManager) r0
            android.app.ActivityManager$MemoryInfo r1 = new android.app.ActivityManager$MemoryInfo
            r1.<init>()
            r0.getMemoryInfo(r1)
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 16
            if (r0 < r2) goto L23
            long r0 = r1.totalMem
            return r0
        L23:
            r0 = 0
            return r0
    }

    public static int a(int r0) {
            switch(r0) {
                case 1: goto Lb;
                case 2: goto Lb;
                case 3: goto L9;
                case 4: goto Lb;
                case 5: goto L9;
                case 6: goto L9;
                case 7: goto Lb;
                case 8: goto L9;
                case 9: goto L9;
                case 10: goto L9;
                case 11: goto Lb;
                case 12: goto L9;
                case 13: goto L7;
                case 14: goto L9;
                case 15: goto L9;
                case 16: goto Lb;
                case 17: goto L9;
                case 18: goto L7;
                case 19: goto L7;
                case 20: goto L5;
                default: goto L3;
            }
        L3:
            r0 = 0
            return r0
        L5:
            r0 = 5
            return r0
        L7:
            r0 = 4
            return r0
        L9:
            r0 = 3
            return r0
        Lb:
            r0 = 2
            return r0
    }

    public static java.lang.String a(android.content.Context r2, int r3) {
            java.lang.String r0 = ""
            if (r3 == 0) goto L2c
            r1 = 9
            if (r3 != r1) goto L9
            goto L2c
        L9:
            boolean r3 = com.mbridge.msdk.foundation.same.a.h     // Catch: java.lang.Throwable -> L22
            if (r3 == 0) goto L2c
            java.lang.String r3 = "phone"
            java.lang.Object r2 = r2.getSystemService(r3)     // Catch: java.lang.Throwable -> L22
            android.telephony.TelephonyManager r2 = (android.telephony.TelephonyManager) r2     // Catch: java.lang.Throwable -> L22
            if (r2 != 0) goto L18
            return r0
        L18:
            int r2 = r2.getNetworkType()     // Catch: java.lang.Throwable -> L22
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L22
            r0 = r2
            goto L2c
        L22:
            r2 = move-exception
            java.lang.String r3 = r2.getMessage()
            java.lang.String r1 = "SameDiTool"
            com.mbridge.msdk.foundation.tools.z.c(r1, r3, r2)
        L2c:
            return r0
    }

    public static java.lang.String a(java.lang.String r2, android.content.Context r3) {
            java.lang.String r0 = "SameDiTool"
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.v.n     // Catch: java.lang.Exception -> L36
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L36
            if (r1 != 0) goto Ld
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.n     // Catch: java.lang.Exception -> L36
            return r2
        Ld:
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L36
            if (r1 != 0) goto L3e
            if (r3 == 0) goto L3e
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: java.lang.Exception -> L36
            java.lang.String r2 = r3.getInstallerPackageName(r2)     // Catch: java.lang.Exception -> L36
            com.mbridge.msdk.foundation.tools.v.n = r2     // Catch: java.lang.Exception -> L36
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L36
            r2.<init>()     // Catch: java.lang.Exception -> L36
            java.lang.String r3 = "PKGSource:"
            r2.append(r3)     // Catch: java.lang.Exception -> L36
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.n     // Catch: java.lang.Exception -> L36
            r2.append(r3)     // Catch: java.lang.Exception -> L36
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L36
            com.mbridge.msdk.foundation.tools.z.a(r0, r2)     // Catch: java.lang.Exception -> L36
            goto L3e
        L36:
            r2 = move-exception
            java.lang.String r3 = r2.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r3, r2)
        L3e:
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.n
            return r2
    }

    public static void b(int r0) {
            com.mbridge.msdk.foundation.tools.v.x = r0
            return
    }

    static int c(int r0) {
            com.mbridge.msdk.foundation.tools.v.e = r0
            return r0
    }

    public static java.lang.Object f(java.lang.String r1) {
            java.lang.Object r0 = com.mbridge.msdk.foundation.tools.v.u
            if (r0 != 0) goto La
            java.lang.Object r1 = com.mbridge.msdk.foundation.tools.ae.d(r1)
            com.mbridge.msdk.foundation.tools.v.u = r1
        La:
            java.lang.Object r1 = com.mbridge.msdk.foundation.tools.v.u
            return r1
    }

    public static int g(java.lang.String r1) {
            int r0 = com.mbridge.msdk.foundation.tools.v.v
            if (r0 != 0) goto La
            int r1 = com.mbridge.msdk.foundation.tools.ae.e(r1)
            com.mbridge.msdk.foundation.tools.v.v = r1
        La:
            int r1 = com.mbridge.msdk.foundation.tools.v.v
            return r1
    }

    public static void h(java.lang.String r1) {
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.t.a(r1)
            com.mbridge.msdk.foundation.tools.v.b = r0
            com.mbridge.msdk.foundation.tools.v.a = r1
            return
    }

    static java.lang.String i(java.lang.String r0) {
            com.mbridge.msdk.foundation.tools.v.f = r0
            return r0
    }

    static java.lang.String j(java.lang.String r0) {
            com.mbridge.msdk.foundation.tools.v.l = r0
            return r0
    }

    public static void q(android.content.Context r6) {
            java.lang.String r0 = "SameDiTool"
            C()     // Catch: java.lang.Throwable -> La7
            A(r6)     // Catch: java.lang.Throwable -> La7
            v(r6)     // Catch: java.lang.Throwable -> La7
            u(r6)     // Catch: java.lang.Throwable -> La7
            t(r6)     // Catch: java.lang.Throwable -> La7
            x()     // Catch: java.lang.Throwable -> La7
            z()     // Catch: java.lang.Throwable -> La7
            E()     // Catch: java.lang.Throwable -> La7
            s(r6)     // Catch: java.lang.Throwable -> La7
            B()     // Catch: java.lang.Throwable -> La7
            r1 = 0
            com.mbridge.msdk.foundation.same.a.i = r1     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = "android.permission.ACCESS_NETWORK_STATE"
            boolean r2 = com.mbridge.msdk.foundation.tools.ae.a(r2, r6)     // Catch: java.lang.Throwable -> La7
            com.mbridge.msdk.foundation.same.a.h = r2     // Catch: java.lang.Throwable -> La7
            w(r6)     // Catch: java.lang.Throwable -> La7
            com.mbridge.msdk.foundation.tools.e.g(r6)     // Catch: java.lang.Throwable -> La4
            com.mbridge.msdk.foundation.tools.e.b(r6)     // Catch: java.lang.Throwable -> La4
            com.mbridge.msdk.foundation.tools.e.c(r6)     // Catch: java.lang.Throwable -> La4
            com.mbridge.msdk.foundation.tools.e.i(r6)     // Catch: java.lang.Throwable -> La4
            com.mbridge.msdk.foundation.tools.e.j(r6)     // Catch: java.lang.Throwable -> La4
            int r2 = D()     // Catch: java.lang.Throwable -> L79
            java.lang.String r3 = "install_non_market_apps"
            r4 = 21
            r5 = 17
            if (r2 < r5) goto L5e
            if (r2 >= r4) goto L5e
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L79
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L79
            android.content.ContentResolver r2 = r2.getContentResolver()     // Catch: java.lang.Throwable -> L79
            int r2 = android.provider.Settings.Global.getInt(r2, r3, r1)     // Catch: java.lang.Throwable -> L79
            com.mbridge.msdk.foundation.tools.v.m = r2     // Catch: java.lang.Throwable -> L79
            goto L81
        L5e:
            if (r2 >= r4) goto L66
            if (r2 >= r5) goto L81
            r4 = 10
            if (r2 <= r4) goto L81
        L66:
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L79
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L79
            android.content.ContentResolver r2 = r2.getContentResolver()     // Catch: java.lang.Throwable -> L79
            int r2 = android.provider.Settings.Secure.getInt(r2, r3, r1)     // Catch: java.lang.Throwable -> L79
            com.mbridge.msdk.foundation.tools.v.m = r2     // Catch: java.lang.Throwable -> L79
            goto L81
        L79:
            r2 = move-exception
            java.lang.String r3 = r2.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r3, r2)
        L81:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "getUSSForPe:"
            r2.append(r3)
            int r3 = com.mbridge.msdk.foundation.tools.v.m
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
            java.lang.String r0 = "android.permission.GET_TASKS"
            boolean r0 = com.mbridge.msdk.foundation.tools.ae.a(r0, r6)
            com.mbridge.msdk.foundation.same.a.k = r0
            com.mbridge.msdk.foundation.same.a.j = r1
            com.mbridge.msdk.foundation.tools.e.a(r6)
        La4:
            N()
        La7:
            return
    }

    public static int r(android.content.Context r2) {
            int r0 = com.mbridge.msdk.foundation.tools.v.s
            r1 = -1
            if (r0 != r1) goto Ld
            java.lang.String r0 = "com.tencent.mm"
            boolean r2 = com.mbridge.msdk.foundation.tools.ae.c(r2, r0)
            com.mbridge.msdk.foundation.tools.v.s = r2
        Ld:
            int r2 = com.mbridge.msdk.foundation.tools.v.s
            return r2
    }

    public static java.lang.String s(android.content.Context r3) {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto Lf
            java.lang.String r3 = ""
            return r3
        Lf:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.k
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L75
            java.lang.String r0 = "en-US"
            if (r3 != 0) goto L1c
            return r0
        L1c:
            android.content.res.Resources r1 = r3.getResources()     // Catch: java.lang.Throwable -> L69
            if (r1 == 0) goto L68
            android.content.res.Resources r1 = r3.getResources()     // Catch: java.lang.Throwable -> L69
            android.content.res.Configuration r1 = r1.getConfiguration()     // Catch: java.lang.Throwable -> L69
            if (r1 != 0) goto L2d
            goto L68
        L2d:
            android.content.res.Resources r3 = r3.getResources()     // Catch: java.lang.Throwable -> L69
            android.content.res.Configuration r3 = r3.getConfiguration()     // Catch: java.lang.Throwable -> L69
            java.util.Locale r3 = r3.locale     // Catch: java.lang.Throwable -> L69
            if (r3 != 0) goto L3a
            return r0
        L3a:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L69
            r2 = 21
            if (r1 < r2) goto L47
            java.lang.String r3 = r3.toLanguageTag()     // Catch: java.lang.Throwable -> L69
            com.mbridge.msdk.foundation.tools.v.k = r3     // Catch: java.lang.Throwable -> L69
            goto L65
        L47:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L69
            r1.<init>()     // Catch: java.lang.Throwable -> L69
            java.lang.String r2 = r3.getLanguage()     // Catch: java.lang.Throwable -> L69
            r1.append(r2)     // Catch: java.lang.Throwable -> L69
            java.lang.String r2 = "-"
            r1.append(r2)     // Catch: java.lang.Throwable -> L69
            java.lang.String r3 = r3.getCountry()     // Catch: java.lang.Throwable -> L69
            r1.append(r3)     // Catch: java.lang.Throwable -> L69
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Throwable -> L69
            com.mbridge.msdk.foundation.tools.v.k = r3     // Catch: java.lang.Throwable -> L69
        L65:
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.k     // Catch: java.lang.Throwable -> L69
            return r3
        L68:
            return r0
        L69:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            java.lang.String r1 = "SameDiTool"
            com.mbridge.msdk.foundation.tools.z.a(r1, r3)
            com.mbridge.msdk.foundation.tools.v.k = r0
        L75:
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.k
            return r3
    }

    public static int t(android.content.Context r2) {
            r0 = 1
            if (r2 == 0) goto L1d
            android.content.res.Resources r1 = r2.getResources()
            if (r1 != 0) goto La
            goto L1d
        La:
            android.content.res.Resources r2 = r2.getResources()
            android.content.res.Configuration r2 = r2.getConfiguration()
            if (r2 != 0) goto L15
            return r0
        L15:
            int r2 = r2.orientation
            r1 = 2
            if (r2 != r1) goto L1b
            return r1
        L1b:
            if (r2 != r0) goto L1d
        L1d:
            return r0
    }

    public static int u(android.content.Context r2) {
            if (r2 != 0) goto L5
            int r2 = com.mbridge.msdk.foundation.tools.v.j
            return r2
        L5:
            int r0 = com.mbridge.msdk.foundation.tools.v.j
            if (r0 != 0) goto L21
            android.content.pm.PackageManager r0 = r2.getPackageManager()     // Catch: java.lang.Exception -> L1b
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L1b
            r1 = 0
            android.content.pm.PackageInfo r2 = r0.getPackageInfo(r2, r1)     // Catch: java.lang.Exception -> L1b
            int r2 = r2.versionCode     // Catch: java.lang.Exception -> L1b
            com.mbridge.msdk.foundation.tools.v.j = r2     // Catch: java.lang.Exception -> L1b
            return r2
        L1b:
            r2 = move-exception
            r2.printStackTrace()
            r2 = -1
            return r2
        L21:
            return r0
    }

    public static int v() {
            int r0 = com.mbridge.msdk.foundation.tools.v.t
            r1 = -1
            if (r0 != r1) goto Lb
            boolean r0 = com.mbridge.msdk.foundation.tools.ae.c()
            com.mbridge.msdk.foundation.tools.v.t = r0
        Lb:
            int r0 = com.mbridge.msdk.foundation.tools.v.t
            return r0
    }

    public static java.lang.String v(android.content.Context r2) {
            if (r2 != 0) goto L5
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.i
            return r2
        L5:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.i     // Catch: java.lang.Exception -> L22
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L22
            if (r0 == 0) goto L1f
            android.content.pm.PackageManager r0 = r2.getPackageManager()     // Catch: java.lang.Exception -> L22
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L22
            r1 = 0
            android.content.pm.PackageInfo r2 = r0.getPackageInfo(r2, r1)     // Catch: java.lang.Exception -> L22
            java.lang.String r2 = r2.versionName     // Catch: java.lang.Exception -> L22
            com.mbridge.msdk.foundation.tools.v.i = r2     // Catch: java.lang.Exception -> L22
            return r2
        L1f:
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.i
            return r2
        L22:
            r2 = move-exception
            r2.printStackTrace()
            java.lang.String r2 = ""
            return r2
    }

    public static int w() {
            int r0 = com.mbridge.msdk.foundation.tools.v.w
            if (r0 != 0) goto La
            int r0 = com.mbridge.msdk.foundation.tools.ae.d()
            com.mbridge.msdk.foundation.tools.v.w = r0
        La:
            int r0 = com.mbridge.msdk.foundation.tools.v.w
            return r0
    }

    public static int w(android.content.Context r1) {
            if (r1 != 0) goto L5
            int r1 = com.mbridge.msdk.foundation.tools.v.o
            return r1
        L5:
            int r0 = com.mbridge.msdk.foundation.tools.v.o
            if (r0 != 0) goto L1c
            android.content.pm.ApplicationInfo r1 = r1.getApplicationInfo()     // Catch: java.lang.Exception -> L12
            int r1 = r1.targetSdkVersion     // Catch: java.lang.Exception -> L12
            com.mbridge.msdk.foundation.tools.v.o = r1     // Catch: java.lang.Exception -> L12
            goto L1c
        L12:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            java.lang.String r0 = "SameDiTool"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L1c:
            int r1 = com.mbridge.msdk.foundation.tools.v.o
            return r1
    }

    public static int x(android.content.Context r4) {
            java.lang.String r0 = "width"
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r1 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r2 = "authority_general_data"
            boolean r1 = r1.a(r2)
            r2 = 0
            if (r1 != 0) goto L10
            return r2
        L10:
            if (r4 != 0) goto L13
            return r2
        L13:
            android.content.res.Resources r1 = r4.getResources()     // Catch: java.lang.Exception -> L33
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()     // Catch: java.lang.Exception -> L33
            java.util.HashMap r4 = z(r4)     // Catch: java.lang.Exception -> L33
            java.lang.Object r3 = r4.get(r0)     // Catch: java.lang.Exception -> L33
            if (r3 != 0) goto L28
            int r4 = r1.widthPixels     // Catch: java.lang.Exception -> L33
            goto L32
        L28:
            java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Exception -> L33
            java.lang.Integer r4 = (java.lang.Integer) r4     // Catch: java.lang.Exception -> L33
            int r4 = r4.intValue()     // Catch: java.lang.Exception -> L33
        L32:
            return r4
        L33:
            r4 = move-exception
            r4.printStackTrace()
            return r2
    }

    public static java.lang.String x() {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto Lf
            java.lang.String r0 = ""
            return r0
        Lf:
            java.lang.String r0 = android.os.Build.MODEL
            return r0
    }

    public static int y(android.content.Context r4) {
            java.lang.String r0 = "height"
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r1 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r2 = "authority_general_data"
            boolean r1 = r1.a(r2)
            r2 = 0
            if (r1 != 0) goto L10
            return r2
        L10:
            if (r4 != 0) goto L13
            return r2
        L13:
            android.content.res.Resources r1 = r4.getResources()     // Catch: java.lang.Exception -> L33
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()     // Catch: java.lang.Exception -> L33
            java.util.HashMap r4 = z(r4)     // Catch: java.lang.Exception -> L33
            java.lang.Object r3 = r4.get(r0)     // Catch: java.lang.Exception -> L33
            if (r3 != 0) goto L28
            int r4 = r1.heightPixels     // Catch: java.lang.Exception -> L33
            goto L32
        L28:
            java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Exception -> L33
            java.lang.Integer r4 = (java.lang.Integer) r4     // Catch: java.lang.Exception -> L33
            int r4 = r4.intValue()     // Catch: java.lang.Exception -> L33
        L32:
            return r4
        L33:
            r4 = move-exception
            r4.printStackTrace()
            return r2
    }

    public static java.lang.String y() {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto Lf
            java.lang.String r0 = ""
            return r0
        Lf:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = android.os.Build.MANUFACTURER
            r0.append(r1)
            java.lang.String r1 = " "
            r0.append(r1)
            java.lang.String r1 = android.os.Build.MODEL
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static java.lang.String z() {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto Lf
            java.lang.String r0 = ""
            return r0
        Lf:
            java.lang.String r0 = android.os.Build.BRAND
            return r0
    }

    public static java.util.HashMap z(android.content.Context r4) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            if (r4 != 0) goto L8
            return r0
        L8:
            java.lang.String r1 = "window"
            java.lang.Object r4 = r4.getSystemService(r1)     // Catch: java.lang.Exception -> L3d
            android.view.WindowManager r4 = (android.view.WindowManager) r4     // Catch: java.lang.Exception -> L3d
            android.view.Display r4 = r4.getDefaultDisplay()     // Catch: java.lang.Exception -> L3d
            android.util.DisplayMetrics r1 = new android.util.DisplayMetrics     // Catch: java.lang.Exception -> L3d
            r1.<init>()     // Catch: java.lang.Exception -> L3d
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L3d
            r3 = 17
            if (r2 < r3) goto L23
            r4.getRealMetrics(r1)     // Catch: java.lang.Exception -> L3d
            goto L26
        L23:
            r4.getMetrics(r1)     // Catch: java.lang.Exception -> L3d
        L26:
            java.lang.String r4 = "height"
            int r2 = r1.heightPixels     // Catch: java.lang.Exception -> L3d
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L3d
            r0.put(r4, r2)     // Catch: java.lang.Exception -> L3d
            java.lang.String r4 = "width"
            int r1 = r1.widthPixels     // Catch: java.lang.Exception -> L3d
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L3d
            r0.put(r4, r1)     // Catch: java.lang.Exception -> L3d
            goto L47
        L3d:
            r4 = move-exception
            java.lang.String r1 = r4.getMessage()
            java.lang.String r2 = "SameDiTool"
            com.mbridge.msdk.foundation.tools.z.c(r2, r1, r4)
        L47:
            return r0
    }
}
