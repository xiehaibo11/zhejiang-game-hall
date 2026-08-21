package com.mbridge.msdk.foundation.same.report.b;

public class a implements java.lang.Thread.UncaughtExceptionHandler {
    private static volatile com.mbridge.msdk.foundation.same.report.b.a c;
    android.os.Handler a;
    private java.lang.ref.WeakReference<android.content.Context> b;
    private java.lang.Thread.UncaughtExceptionHandler d;
    private java.lang.Throwable e;


    private a(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            com.mbridge.msdk.foundation.same.report.b.a$1 r0 = new com.mbridge.msdk.foundation.same.report.b.a$1
            r0.<init>(r1)
            r1.a = r0
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.b = r0
            return
    }

    public static com.mbridge.msdk.foundation.same.report.b.a a(android.content.Context r2) {
            com.mbridge.msdk.foundation.same.report.b.a r0 = com.mbridge.msdk.foundation.same.report.b.a.c
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.foundation.same.report.b.a> r0 = com.mbridge.msdk.foundation.same.report.b.a.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.same.report.b.a r1 = com.mbridge.msdk.foundation.same.report.b.a.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.foundation.same.report.b.a r1 = new com.mbridge.msdk.foundation.same.report.b.a     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.foundation.same.report.b.a.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.mbridge.msdk.foundation.same.report.b.a r2 = com.mbridge.msdk.foundation.same.report.b.a.c
            return r2
    }

    private java.lang.String a(java.lang.Throwable r5) {
            r4 = this;
            java.lang.StackTraceElement[] r5 = r5.getStackTrace()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
        La:
            int r2 = r5.length
            if (r1 >= r2) goto L2a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r3 = r5[r1]
            java.lang.String r3 = r3.toString()
            r2.append(r3)
            java.lang.String r3 = "\n"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            int r1 = r1 + 1
            goto La
        L2a:
            java.lang.String r5 = r0.toString()
            return r5
    }

    private java.lang.String a(java.lang.Throwable r18, java.lang.String r19) {
            r17 = this;
            r1 = r17
            java.lang.String r0 = "appname"
            java.lang.String r2 = "appversionname"
            java.lang.String r3 = "-1"
            java.lang.String r4 = "appversioncode"
            java.lang.String r5 = "osversion"
            java.lang.String r6 = ""
            org.json.JSONObject r7 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L108
            r7.<init>()     // Catch: java.lang.Throwable -> L108
            java.lang.ref.WeakReference<android.content.Context> r8 = r1.b     // Catch: java.lang.Throwable -> L108
            java.lang.Object r8 = r8.get()     // Catch: java.lang.Throwable -> L108
            android.content.Context r8 = (android.content.Context) r8     // Catch: java.lang.Throwable -> L108
            if (r8 != 0) goto L1e
            return r6
        L1e:
            java.lang.Runtime r9 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L108
            long r9 = r9.maxMemory()     // Catch: java.lang.Throwable -> L108
            double r9 = (double) r9     // Catch: java.lang.Throwable -> L108
            r11 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r9 = r9 * r11
            r13 = 4697254411347427328(0x4130000000000000, double:1048576.0)
            double r9 = r9 / r13
            float r9 = (float) r9     // Catch: java.lang.Throwable -> L108
            java.lang.Runtime r10 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L108
            long r13 = r10.totalMemory()     // Catch: java.lang.Throwable -> L108
            double r13 = (double) r13     // Catch: java.lang.Throwable -> L108
            double r13 = r13 * r11
            r15 = 4697254411347427328(0x4130000000000000, double:1048576.0)
            double r13 = r13 / r15
            float r10 = (float) r13     // Catch: java.lang.Throwable -> L108
            java.lang.Runtime r13 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L108
            long r13 = r13.freeMemory()     // Catch: java.lang.Throwable -> L108
            double r13 = (double) r13     // Catch: java.lang.Throwable -> L108
            double r13 = r13 * r11
            double r13 = r13 / r15
            float r11 = (float) r13     // Catch: java.lang.Throwable -> L108
            java.io.File r12 = android.os.Environment.getExternalStorageDirectory()     // Catch: java.lang.Throwable -> L108
            long r13 = r12.getUsableSpace()     // Catch: java.lang.Throwable -> L108
            r15 = r2
            r16 = r3
            long r2 = r12.getTotalSpace()     // Catch: java.lang.Throwable -> L108
            java.lang.String r12 = android.text.format.Formatter.formatFileSize(r8, r13)     // Catch: java.lang.Throwable -> L108
            java.lang.String r2 = android.text.format.Formatter.formatFileSize(r8, r2)     // Catch: java.lang.Throwable -> L108
            java.lang.String r3 = "max_memory"
            java.lang.String r9 = java.lang.String.valueOf(r9)     // Catch: java.lang.Throwable -> L108
            r7.put(r3, r9)     // Catch: java.lang.Throwable -> L108
            java.lang.String r3 = "memoryby_app"
            java.lang.String r9 = java.lang.String.valueOf(r10)     // Catch: java.lang.Throwable -> L108
            r7.put(r3, r9)     // Catch: java.lang.Throwable -> L108
            java.lang.String r3 = "remaining_memory"
            double r9 = (double) r11     // Catch: java.lang.Throwable -> L108
            r7.put(r3, r9)     // Catch: java.lang.Throwable -> L108
            java.lang.String r3 = "sdcard_remainder"
            r7.put(r3, r12)     // Catch: java.lang.Throwable -> L108
            java.lang.String r3 = "totalspacestr"
            r7.put(r3, r2)     // Catch: java.lang.Throwable -> L108
            java.lang.String r2 = "crashtime"
            r3 = r19
            r7.put(r2, r3)     // Catch: java.lang.Throwable -> L108
            com.mbridge.msdk.foundation.a.a.a r2 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Throwable -> L108
            java.lang.String r3 = "sdk_app_id"
            java.lang.String r2 = r2.b(r3)     // Catch: java.lang.Throwable -> L108
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L108
            if (r3 != 0) goto L9d
            java.lang.String r3 = "appid"
            r7.put(r3, r2)     // Catch: java.lang.Throwable -> L108
        L9d:
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> Lb9 java.lang.Throwable -> L108
            r7.put(r5, r2)     // Catch: java.lang.Exception -> Lb9 java.lang.Throwable -> L108
            int r2 = r1.b(r8)     // Catch: java.lang.Exception -> Lb9 java.lang.Throwable -> L108
            r7.put(r4, r2)     // Catch: java.lang.Exception -> Lb9 java.lang.Throwable -> L108
            java.lang.String r2 = c(r8)     // Catch: java.lang.Exception -> Lb9 java.lang.Throwable -> L108
            r3 = r15
            r7.put(r3, r2)     // Catch: java.lang.Exception -> Lba java.lang.Throwable -> L108
            java.lang.String r2 = r1.d(r8)     // Catch: java.lang.Exception -> Lba java.lang.Throwable -> L108
            r7.put(r0, r2)     // Catch: java.lang.Exception -> Lba java.lang.Throwable -> L108
            goto Lc9
        Lb9:
            r3 = r15
        Lba:
            r2 = 0
            r7.put(r5, r2)     // Catch: java.lang.Throwable -> L108
            r2 = r16
            r7.put(r4, r2)     // Catch: java.lang.Throwable -> L108
            r7.put(r3, r2)     // Catch: java.lang.Throwable -> L108
            r7.put(r0, r6)     // Catch: java.lang.Throwable -> L108
        Lc9:
            java.io.StringWriter r0 = new java.io.StringWriter     // Catch: java.lang.Throwable -> L108
            r0.<init>()     // Catch: java.lang.Throwable -> L108
            java.io.PrintWriter r2 = new java.io.PrintWriter     // Catch: java.lang.Throwable -> L108
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L108
            r3 = r18
            r3.printStackTrace(r2)     // Catch: java.lang.Throwable -> L108
            java.lang.String r2 = "crashinfo"
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L108
            r7.put(r2, r0)     // Catch: java.lang.Throwable -> L108
            java.lang.String r0 = r7.toString()     // Catch: java.lang.Throwable -> L108
            java.lang.StringBuffer r2 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L108
            r2.<init>()     // Catch: java.lang.Throwable -> L108
            java.lang.String r3 = "key=2000052"
            r2.append(r3)     // Catch: java.lang.Throwable -> L108
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L108
            r3.<init>()     // Catch: java.lang.Throwable -> L108
            java.lang.String r4 = "&exception="
            r3.append(r4)     // Catch: java.lang.Throwable -> L108
            r3.append(r0)     // Catch: java.lang.Throwable -> L108
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L108
            r2.append(r0)     // Catch: java.lang.Throwable -> L108
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L108
            return r0
        L108:
            r0 = move-exception
            r0.printStackTrace()
            return r6
    }

    static java.lang.ref.WeakReference a(com.mbridge.msdk.foundation.same.report.b.a r0) {
            java.lang.ref.WeakReference<android.content.Context> r0 = r0.b
            return r0
    }

    private java.util.List<java.lang.String> a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.regex.Pattern r3 = java.util.regex.Pattern.compile(r3)     // Catch: java.lang.Exception -> L1c
            java.util.regex.Matcher r2 = r3.matcher(r2)     // Catch: java.lang.Exception -> L1c
        Ld:
            boolean r3 = r2.find()     // Catch: java.lang.Exception -> L1c
            if (r3 == 0) goto L20
            r3 = 1
            java.lang.String r3 = r2.group(r3)     // Catch: java.lang.Exception -> L1c
            r0.add(r3)     // Catch: java.lang.Exception -> L1c
            goto Ld
        L1c:
            r2 = move-exception
            r2.printStackTrace()
        L20:
            return r0
    }

    private void a(java.lang.String r5, java.lang.String r6, java.lang.Throwable r7, java.lang.Thread r8) {
            r4 = this;
            boolean r5 = r5.contains(r6)
            if (r5 == 0) goto L44
            java.util.HashMap r5 = r4.b()
            if (r5 == 0) goto L4b
            java.lang.String r6 = "file"
            java.lang.Object r0 = r5.get(r6)
            if (r0 == 0) goto L4b
            android.os.Message r0 = android.os.Message.obtain()
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            java.lang.String r2 = "time"
            java.lang.Object r2 = r5.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r2 = r4.a(r7, r2)
            java.lang.String r3 = "crashinfo"
            r1.put(r3, r2)
            java.lang.Object r5 = r5.get(r6)
            r1.put(r6, r5)
            r0.obj = r1
            r5 = 101(0x65, float:1.42E-43)
            r0.what = r5
            android.os.Handler r5 = r4.a
            r5.sendMessage(r0)
            r4.a(r8, r7)
            goto L4b
        L44:
            java.lang.Thread$UncaughtExceptionHandler r5 = r4.d
            if (r5 == 0) goto L4b
            r5.uncaughtException(r8, r7)
        L4b:
            return
    }

    private void a(java.lang.Thread r1, java.lang.Throwable r2) {
            r0 = this;
            r1 = 2000(0x7d0, double:9.88E-321)
            java.lang.Thread.sleep(r1)     // Catch: java.lang.InterruptedException -> L6
            goto La
        L6:
            r1 = move-exception
            r1.printStackTrace()
        La:
            int r1 = android.os.Process.myPid()
            android.os.Process.killProcess(r1)
            return
    }

    private int b(android.content.Context r3) {
            r2 = this;
            android.content.pm.PackageManager r0 = r3.getPackageManager()
            r1 = 0
            java.lang.String r3 = r3.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L10
            android.content.pm.PackageInfo r3 = r0.getPackageInfo(r3, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L10
            int r3 = r3.versionCode     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L10
            return r3
        L10:
            r3 = move-exception
            r3.printStackTrace()
            return r1
    }

    private java.util.HashMap<java.lang.String, java.lang.Object> b() {
            r8 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.Throwable r1 = r8.e
            r2 = 0
            if (r1 != 0) goto Lb
            return r2
        Lb:
            com.mbridge.msdk.foundation.same.b.c r1 = com.mbridge.msdk.foundation.same.b.c.i
            java.lang.String r1 = com.mbridge.msdk.foundation.same.b.e.b(r1)
            java.io.File r3 = new java.io.File
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r1)
            java.lang.String r5 = "/"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            boolean r4 = r3.exists()
            if (r4 != 0) goto L30
            r3.mkdirs()
        L30:
            java.text.SimpleDateFormat r3 = new java.text.SimpleDateFormat
            java.lang.String r4 = "yyyy-MM-dd HH:mm:ss"
            r3.<init>(r4)
            java.util.Date r4 = new java.util.Date
            long r6 = java.lang.System.currentTimeMillis()
            r4.<init>(r6)
            java.lang.String r3 = r3.format(r4)
            java.io.File r4 = new java.io.File
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r1)
            r6.append(r5)
            java.lang.String r1 = "sdkcrash"
            r6.append(r1)
            r6.append(r3)
            java.lang.String r1 = ".txt"
            r6.append(r1)
            java.lang.String r1 = r6.toString()
            r4.<init>(r1)
            java.io.PrintWriter r1 = new java.io.PrintWriter     // Catch: java.lang.Exception -> L95
            java.io.BufferedWriter r5 = new java.io.BufferedWriter     // Catch: java.lang.Exception -> L95
            java.io.FileWriter r6 = new java.io.FileWriter     // Catch: java.lang.Exception -> L95
            r6.<init>(r4)     // Catch: java.lang.Exception -> L95
            r5.<init>(r6)     // Catch: java.lang.Exception -> L95
            r1.<init>(r5)     // Catch: java.lang.Exception -> L95
            java.lang.Throwable r5 = r8.e     // Catch: java.lang.Exception -> L95
            java.lang.String r5 = r8.a(r5, r3)     // Catch: java.lang.Exception -> L95
            r1.println(r5)     // Catch: java.lang.Exception -> L95
            java.lang.String r5 = "===="
            r1.println(r5)     // Catch: java.lang.Exception -> L95
            java.lang.Throwable r5 = r8.e     // Catch: java.lang.Exception -> L95
            r5.printStackTrace(r1)     // Catch: java.lang.Exception -> L95
            r1.close()     // Catch: java.lang.Exception -> L95
            java.lang.String r1 = "file"
            r0.put(r1, r4)     // Catch: java.lang.Exception -> L95
            java.lang.String r1 = "time"
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L95
            return r0
        L95:
            r0 = move-exception
            r0.printStackTrace()
            return r2
    }

    private static java.lang.String c(android.content.Context r3) {
            java.lang.String r0 = ""
            android.content.Context r1 = r3.getApplicationContext()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            java.lang.String r3 = r3.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            r2 = 0
            android.content.pm.PackageInfo r3 = r1.getPackageInfo(r3, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            java.lang.String r0 = r3.versionName     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            goto L1e
        L16:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            android.util.Log.e(r0, r3)
        L1e:
            return r0
    }

    private java.lang.String d(android.content.Context r4) {
            r3 = this;
            android.content.pm.PackageManager r0 = r4.getPackageManager()
            java.lang.String r1 = r4.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1a
            r2 = 0
            android.content.pm.PackageInfo r0 = r0.getPackageInfo(r1, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1a
            android.content.pm.ApplicationInfo r0 = r0.applicationInfo     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1a
            int r0 = r0.labelRes     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1a
            android.content.res.Resources r4 = r4.getResources()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1a
            java.lang.String r4 = r4.getString(r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1a
            return r4
        L1a:
            r4 = move-exception
            r4.printStackTrace()
            r4 = 0
            return r4
    }

    public final void a() {
            r1 = this;
            java.lang.Thread$UncaughtExceptionHandler r0 = java.lang.Thread.getDefaultUncaughtExceptionHandler()
            r1.d = r0
            java.lang.Thread.setDefaultUncaughtExceptionHandler(r1)
            return
    }

    @Override
    public void uncaughtException(java.lang.Thread r5, java.lang.Throwable r6) {
            r4 = this;
            r4.e = r6     // Catch: java.lang.Exception -> L54
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L54
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L54
            java.lang.String r1 = r1.k()     // Catch: java.lang.Exception -> L54
            com.mbridge.msdk.c.a r0 = r0.b(r1)     // Catch: java.lang.Exception -> L54
            if (r0 != 0) goto L1c
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L54
            com.mbridge.msdk.c.a r0 = r0.b()     // Catch: java.lang.Exception -> L54
        L1c:
            java.lang.String r1 = r0.L()     // Catch: java.lang.Exception -> L54
            if (r1 != 0) goto L25
            java.lang.String r0 = "mbridge"
            goto L29
        L25:
            java.lang.String r0 = r0.L()     // Catch: java.lang.Exception -> L54
        L29:
            java.lang.String r1 = "<mvpackage>(.*?)</mvpackage>"
            java.util.List r1 = r4.a(r0, r1)     // Catch: java.lang.Exception -> L54
            int r2 = r1.size()     // Catch: java.lang.Exception -> L54
            if (r2 <= 0) goto L4c
            r0 = 0
        L36:
            int r2 = r1.size()     // Catch: java.lang.Exception -> L54
            if (r0 >= r2) goto L5b
            java.lang.Object r2 = r1.get(r0)     // Catch: java.lang.Exception -> L54
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L54
            java.lang.String r3 = r4.a(r6)     // Catch: java.lang.Exception -> L54
            r4.a(r3, r2, r6, r5)     // Catch: java.lang.Exception -> L54
            int r0 = r0 + 1
            goto L36
        L4c:
            java.lang.String r1 = r4.a(r6)     // Catch: java.lang.Exception -> L54
            r4.a(r1, r0, r6, r5)     // Catch: java.lang.Exception -> L54
            goto L5b
        L54:
            r0 = move-exception
            r4.a(r5, r6)
            r0.printStackTrace()
        L5b:
            return
    }
}
