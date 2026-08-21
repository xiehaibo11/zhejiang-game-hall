package com.bytedance.pangle.d;

public final class d {
    private static java.lang.String a;
    private static java.util.List<java.lang.String> b;

    static {
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            com.bytedance.pangle.d.d.b = r0
            return
    }

    public static java.lang.String a() {
            java.lang.String r0 = com.bytedance.pangle.d.d.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = com.bytedance.pangle.d.d.a
            return r0
        Lb:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L20
            r1 = 28
            if (r0 < r1) goto L20
            java.lang.String r0 = android.app.Application.getProcessName()     // Catch: java.lang.Throwable -> L20
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L20
            if (r1 != 0) goto L1d
            com.bytedance.pangle.d.d.a = r0     // Catch: java.lang.Throwable -> L20
        L1d:
            java.lang.String r0 = com.bytedance.pangle.d.d.a     // Catch: java.lang.Throwable -> L20
            return r0
        L20:
            java.lang.String r0 = "android.app.ActivityThread"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L3f
            java.lang.String r1 = "currentProcessName"
            r2 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L3f
            java.lang.Object r0 = com.bytedance.pangle.util.MethodUtils.invokeStaticMethod(r0, r1, r2)     // Catch: java.lang.Exception -> L3f
            r1 = r0
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L3f
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L3f
            if (r1 != 0) goto L3c
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L3f
            com.bytedance.pangle.d.d.a = r0     // Catch: java.lang.Exception -> L3f
        L3c:
            java.lang.String r0 = com.bytedance.pangle.d.d.a     // Catch: java.lang.Exception -> L3f
            return r0
        L3f:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = b()
            com.bytedance.pangle.d.d.a = r0
            return r0
    }

    public static java.lang.String a(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L17
            java.lang.String r0 = ":"
            boolean r1 = r2.contains(r0)
            if (r1 != 0) goto Lf
            goto L17
        Lf:
            java.lang.String[] r2 = r2.split(r0)
            r0 = 1
            r2 = r2[r0]
            goto L19
        L17:
            java.lang.String r2 = "main"
        L19:
            return r2
    }

    public static boolean a(android.content.Context r3) {
            java.lang.String r0 = a()
            r1 = 0
            if (r0 == 0) goto L10
            java.lang.String r2 = ":"
            boolean r2 = r0.contains(r2)
            if (r2 == 0) goto L10
            return r1
        L10:
            if (r0 == 0) goto L1e
            java.lang.String r3 = r3.getPackageName()
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L1e
            r3 = 1
            return r3
        L1e:
            return r1
    }

    private static java.lang.String b() {
            r0 = 0
            java.io.BufferedReader r1 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L5e
            java.io.InputStreamReader r2 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L5e
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L5e
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5e
            java.lang.String r5 = "/proc/"
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L5e
            int r5 = android.os.Process.myPid()     // Catch: java.lang.Throwable -> L5e
            r4.append(r5)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r5 = "/cmdline"
            r4.append(r5)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L5e
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r4 = "iso-8859-1"
            r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> L5e
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L5e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5f
            r2.<init>()     // Catch: java.lang.Throwable -> L5f
        L2e:
            int r3 = r1.read()     // Catch: java.lang.Throwable -> L5f
            if (r3 <= 0) goto L39
            char r3 = (char) r3     // Catch: java.lang.Throwable -> L5f
            r2.append(r3)     // Catch: java.lang.Throwable -> L5f
            goto L2e
        L39:
            boolean r3 = com.bytedance.pangle.log.ZeusLogger.isDebug()     // Catch: java.lang.Throwable -> L5f
            if (r3 == 0) goto L56
            java.lang.String r3 = "Process"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5f
            java.lang.String r5 = "get processName = "
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Throwable -> L5f
            r4.append(r5)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L5f
            com.bytedance.pangle.log.ZeusLogger.d(r3, r4)     // Catch: java.lang.Throwable -> L5f
        L56:
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L5f
            r1.close()     // Catch: java.lang.Exception -> L5d
        L5d:
            return r0
        L5e:
            r1 = r0
        L5f:
            if (r1 == 0) goto L64
            r1.close()     // Catch: java.lang.Exception -> L64
        L64:
            return r0
    }
}
