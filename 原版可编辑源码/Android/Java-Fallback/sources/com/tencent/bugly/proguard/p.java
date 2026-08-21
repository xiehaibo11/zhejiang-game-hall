package com.tencent.bugly.proguard;

public final class p {
    public static boolean a = true;
    public static java.util.List<com.tencent.bugly.proguard.o> b;
    public static boolean c;
    private static com.tencent.bugly.proguard.w d;
    private static boolean e;

    static {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.tencent.bugly.proguard.p.b = r0
            return
    }

    public static synchronized void a(android.content.Context r2) {
            java.lang.Class<com.tencent.bugly.proguard.p> r0 = com.tencent.bugly.proguard.p.class
            monitor-enter(r0)
            r1 = 0
            a(r2, r1)     // Catch: java.lang.Throwable -> L9
            monitor-exit(r0)
            return
        L9:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    public static synchronized void a(android.content.Context r4, com.tencent.bugly.BuglyStrategy r5) {
            java.lang.Class<com.tencent.bugly.proguard.p> r0 = com.tencent.bugly.proguard.p.class
            monitor-enter(r0)
            boolean r1 = com.tencent.bugly.proguard.p.e     // Catch: java.lang.Throwable -> L40
            r2 = 0
            if (r1 == 0) goto L11
            java.lang.String r4 = "[init] initial Multi-times, ignore this."
            java.lang.Object[] r5 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L40
            com.tencent.bugly.proguard.al.d(r4, r5)     // Catch: java.lang.Throwable -> L40
            monitor-exit(r0)
            return
        L11:
            if (r4 != 0) goto L1c
            java.lang.String r4 = com.tencent.bugly.proguard.al.b     // Catch: java.lang.Throwable -> L40
            java.lang.String r5 = "[init] context of init() is null, check it."
            android.util.Log.w(r4, r5)     // Catch: java.lang.Throwable -> L40
            monitor-exit(r0)
            return
        L1c:
            com.tencent.bugly.proguard.aa r1 = com.tencent.bugly.proguard.aa.a(r4)     // Catch: java.lang.Throwable -> L40
            boolean r3 = a(r1)     // Catch: java.lang.Throwable -> L40
            if (r3 == 0) goto L2a
            com.tencent.bugly.proguard.p.a = r2     // Catch: java.lang.Throwable -> L40
            monitor-exit(r0)
            return
        L2a:
            java.lang.String r2 = r1.e()     // Catch: java.lang.Throwable -> L40
            if (r2 != 0) goto L39
            java.lang.String r4 = com.tencent.bugly.proguard.al.b     // Catch: java.lang.Throwable -> L40
            java.lang.String r5 = "[init] meta data of BUGLY_APPID in AndroidManifest.xml should be set."
            android.util.Log.e(r4, r5)     // Catch: java.lang.Throwable -> L40
            monitor-exit(r0)
            return
        L39:
            boolean r1 = r1.D     // Catch: java.lang.Throwable -> L40
            a(r4, r2, r1, r5)     // Catch: java.lang.Throwable -> L40
            monitor-exit(r0)
            return
        L40:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    public static synchronized void a(android.content.Context r12, java.lang.String r13, boolean r14, com.tencent.bugly.BuglyStrategy r15) {
            java.lang.Class<com.tencent.bugly.proguard.p> r0 = com.tencent.bugly.proguard.p.class
            monitor-enter(r0)
            boolean r1 = com.tencent.bugly.proguard.p.e     // Catch: java.lang.Throwable -> L238
            r2 = 0
            if (r1 == 0) goto L11
            java.lang.String r12 = "[init] initial Multi-times, ignore this."
            java.lang.Object[] r13 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.al.d(r12, r13)     // Catch: java.lang.Throwable -> L238
            monitor-exit(r0)
            return
        L11:
            if (r12 != 0) goto L1c
            java.lang.String r12 = com.tencent.bugly.proguard.al.b     // Catch: java.lang.Throwable -> L238
            java.lang.String r13 = "[init] context is null, check it."
            android.util.Log.w(r12, r13)     // Catch: java.lang.Throwable -> L238
            monitor-exit(r0)
            return
        L1c:
            if (r13 != 0) goto L27
            java.lang.String r12 = com.tencent.bugly.proguard.al.b     // Catch: java.lang.Throwable -> L238
            java.lang.String r13 = "init arg 'crashReportAppID' should not be null!"
            android.util.Log.e(r12, r13)     // Catch: java.lang.Throwable -> L238
            monitor-exit(r0)
            return
        L27:
            r1 = 1
            com.tencent.bugly.proguard.p.e = r1     // Catch: java.lang.Throwable -> L238
            if (r14 == 0) goto L68
            com.tencent.bugly.proguard.p.c = r1     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.al.c = r1     // Catch: java.lang.Throwable -> L238
            java.lang.String r3 = "Bugly debug模式开启，请在发布时把isDebug关闭。 -- Running in debug model for 'isDebug' is enabled. Please disable it when you release."
            java.lang.Object[] r4 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.al.d(r3, r4)     // Catch: java.lang.Throwable -> L238
            java.lang.String r3 = "--------------------------------------------------------------------------------------------"
            java.lang.Object[] r4 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.al.e(r3, r4)     // Catch: java.lang.Throwable -> L238
            java.lang.String r3 = "Bugly debug模式将有以下行为特性 -- The following list shows the behaviour of debug model: "
            java.lang.Object[] r4 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.al.d(r3, r4)     // Catch: java.lang.Throwable -> L238
            java.lang.String r3 = "[1] 输出详细的Bugly SDK的Log -- More detailed log of Bugly SDK will be output to logcat;"
            java.lang.Object[] r4 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.al.d(r3, r4)     // Catch: java.lang.Throwable -> L238
            java.lang.String r3 = "[2] 每一条Crash都会被立即上报 -- Every crash caught by Bugly will be uploaded immediately."
            java.lang.Object[] r4 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.al.d(r3, r4)     // Catch: java.lang.Throwable -> L238
            java.lang.String r3 = "[3] 自定义日志将会在Logcat中输出 -- Custom log will be output to logcat."
            java.lang.Object[] r4 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.al.d(r3, r4)     // Catch: java.lang.Throwable -> L238
            java.lang.String r3 = "--------------------------------------------------------------------------------------------"
            java.lang.Object[] r4 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.al.e(r3, r4)     // Catch: java.lang.Throwable -> L238
            java.lang.String r3 = "[init] Open debug mode of Bugly."
            java.lang.Object[] r4 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.al.b(r3, r4)     // Catch: java.lang.Throwable -> L238
        L68:
            java.lang.String r3 = " crash report start initializing..."
            java.lang.Object[] r4 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.al.a(r3, r4)     // Catch: java.lang.Throwable -> L238
            java.lang.String r3 = "[init] Bugly start initializing..."
            java.lang.Object[] r4 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.al.b(r3, r4)     // Catch: java.lang.Throwable -> L238
            java.lang.String r3 = "[init] Bugly complete version: v%s"
            java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L238
            java.lang.String r5 = "4.1.9.2"
            r4[r2] = r5     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.al.a(r3, r4)     // Catch: java.lang.Throwable -> L238
            android.content.Context r12 = com.tencent.bugly.proguard.ap.a(r12)     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.aa r3 = com.tencent.bugly.proguard.aa.a(r12)     // Catch: java.lang.Throwable -> L238
            r3.o()     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.ao.a(r12)     // Catch: java.lang.Throwable -> L238
            java.util.List<com.tencent.bugly.proguard.o> r4 = com.tencent.bugly.proguard.p.b     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.w r4 = com.tencent.bugly.proguard.w.a(r12, r4)     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.p.d = r4     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.ai.a(r12)     // Catch: java.lang.Throwable -> L238
            java.util.List<com.tencent.bugly.proguard.o> r4 = com.tencent.bugly.proguard.p.b     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.ac.a(r12, r4)     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.u r4 = com.tencent.bugly.proguard.u.a(r12)     // Catch: java.lang.Throwable -> L238
            boolean r5 = a(r3)     // Catch: java.lang.Throwable -> L238
            if (r5 == 0) goto Lad
            com.tencent.bugly.proguard.p.a = r2     // Catch: java.lang.Throwable -> L238
            monitor-exit(r0)
            return
        Lad:
            r3.r = r13     // Catch: java.lang.Throwable -> L238
            java.lang.String r5 = "APP_ID"
            r3.b(r5, r13)     // Catch: java.lang.Throwable -> L238
            java.lang.String r5 = "[param] Set APP ID:%s"
            java.lang.Object[] r6 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L238
            r6[r2] = r13     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.al.a(r5, r6)     // Catch: java.lang.Throwable -> L238
            if (r15 == 0) goto L1e3
            java.lang.String r13 = r15.getAppVersion()     // Catch: java.lang.Throwable -> L238
            boolean r5 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L238
            r6 = 2
            r7 = 3
            r8 = 100
            if (r5 != 0) goto Lf8
            int r5 = r13.length()     // Catch: java.lang.Throwable -> L238
            if (r5 <= r8) goto Le9
            java.lang.String r5 = r13.substring(r2, r8)     // Catch: java.lang.Throwable -> L238
            java.lang.String r9 = "appVersion %s length is over limit %d substring to %s"
            java.lang.Object[] r10 = new java.lang.Object[r7]     // Catch: java.lang.Throwable -> L238
            r10[r2] = r13     // Catch: java.lang.Throwable -> L238
            java.lang.Integer r13 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L238
            r10[r1] = r13     // Catch: java.lang.Throwable -> L238
            r10[r6] = r5     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.al.d(r9, r10)     // Catch: java.lang.Throwable -> L238
            r13 = r5
        Le9:
            r3.o = r13     // Catch: java.lang.Throwable -> L238
            java.lang.String r13 = "[param] Set App version: %s"
            java.lang.Object[] r5 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L238
            java.lang.String r9 = r15.getAppVersion()     // Catch: java.lang.Throwable -> L238
            r5[r2] = r9     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.al.a(r13, r5)     // Catch: java.lang.Throwable -> L238
        Lf8:
            boolean r13 = r15.isReplaceOldChannel()     // Catch: java.lang.Exception -> L15a java.lang.Throwable -> L238
            r5 = 556(0x22c, float:7.79E-43)
            if (r13 == 0) goto L134
            java.lang.String r13 = r15.getAppChannel()     // Catch: java.lang.Exception -> L15a java.lang.Throwable -> L238
            boolean r9 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Exception -> L15a java.lang.Throwable -> L238
            if (r9 != 0) goto L14e
            int r9 = r13.length()     // Catch: java.lang.Exception -> L15a java.lang.Throwable -> L238
            if (r9 <= r8) goto L126
            java.lang.String r9 = r13.substring(r2, r8)     // Catch: java.lang.Exception -> L15a java.lang.Throwable -> L238
            java.lang.String r10 = "appChannel %s length is over limit %d substring to %s"
            java.lang.Object[] r11 = new java.lang.Object[r7]     // Catch: java.lang.Exception -> L15a java.lang.Throwable -> L238
            r11[r2] = r13     // Catch: java.lang.Exception -> L15a java.lang.Throwable -> L238
            java.lang.Integer r13 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Exception -> L15a java.lang.Throwable -> L238
            r11[r1] = r13     // Catch: java.lang.Exception -> L15a java.lang.Throwable -> L238
            r11[r6] = r9     // Catch: java.lang.Exception -> L15a java.lang.Throwable -> L238
            com.tencent.bugly.proguard.al.d(r10, r11)     // Catch: java.lang.Exception -> L15a java.lang.Throwable -> L238
            r13 = r9
        L126:
            com.tencent.bugly.proguard.w r9 = com.tencent.bugly.proguard.p.d     // Catch: java.lang.Exception -> L15a java.lang.Throwable -> L238
            java.lang.String r10 = "app_channel"
            byte[] r11 = r13.getBytes()     // Catch: java.lang.Exception -> L15a java.lang.Throwable -> L238
            r9.a(r5, r10, r11, r2)     // Catch: java.lang.Exception -> L15a java.lang.Throwable -> L238
            r3.s = r13     // Catch: java.lang.Exception -> L15a java.lang.Throwable -> L238
            goto L14e
        L134:
            com.tencent.bugly.proguard.w r13 = com.tencent.bugly.proguard.p.d     // Catch: java.lang.Exception -> L15a java.lang.Throwable -> L238
            r9 = 0
            java.util.Map r13 = r13.a(r5, r9)     // Catch: java.lang.Exception -> L15a java.lang.Throwable -> L238
            if (r13 == 0) goto L14e
            java.lang.String r5 = "app_channel"
            java.lang.Object r13 = r13.get(r5)     // Catch: java.lang.Exception -> L15a java.lang.Throwable -> L238
            byte[] r13 = (byte[]) r13     // Catch: java.lang.Exception -> L15a java.lang.Throwable -> L238
            if (r13 == 0) goto L14e
            java.lang.String r5 = new java.lang.String     // Catch: java.lang.Exception -> L15a java.lang.Throwable -> L238
            r5.<init>(r13)     // Catch: java.lang.Exception -> L15a java.lang.Throwable -> L238
            r3.s = r5     // Catch: java.lang.Exception -> L15a java.lang.Throwable -> L238
        L14e:
            java.lang.String r13 = "[param] Set App channel: %s"
            java.lang.Object[] r5 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L15a java.lang.Throwable -> L238
            java.lang.String r9 = r3.s     // Catch: java.lang.Exception -> L15a java.lang.Throwable -> L238
            r5[r2] = r9     // Catch: java.lang.Exception -> L15a java.lang.Throwable -> L238
            com.tencent.bugly.proguard.al.a(r13, r5)     // Catch: java.lang.Exception -> L15a java.lang.Throwable -> L238
            goto L162
        L15a:
            r13 = move-exception
            boolean r5 = com.tencent.bugly.proguard.p.c     // Catch: java.lang.Throwable -> L238
            if (r5 == 0) goto L162
            r13.printStackTrace()     // Catch: java.lang.Throwable -> L238
        L162:
            java.lang.String r13 = r15.getAppPackageName()     // Catch: java.lang.Throwable -> L238
            boolean r5 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L238
            if (r5 != 0) goto L197
            int r5 = r13.length()     // Catch: java.lang.Throwable -> L238
            if (r5 <= r8) goto L188
            java.lang.String r5 = r13.substring(r2, r8)     // Catch: java.lang.Throwable -> L238
            java.lang.String r9 = "appPackageName %s length is over limit %d substring to %s"
            java.lang.Object[] r10 = new java.lang.Object[r7]     // Catch: java.lang.Throwable -> L238
            r10[r2] = r13     // Catch: java.lang.Throwable -> L238
            java.lang.Integer r13 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L238
            r10[r1] = r13     // Catch: java.lang.Throwable -> L238
            r10[r6] = r5     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.al.d(r9, r10)     // Catch: java.lang.Throwable -> L238
            r13 = r5
        L188:
            r3.c = r13     // Catch: java.lang.Throwable -> L238
            java.lang.String r13 = "[param] Set App package: %s"
            java.lang.Object[] r5 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L238
            java.lang.String r9 = r15.getAppPackageName()     // Catch: java.lang.Throwable -> L238
            r5[r2] = r9     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.al.a(r13, r5)     // Catch: java.lang.Throwable -> L238
        L197:
            java.lang.String r13 = r15.getDeviceID()     // Catch: java.lang.Throwable -> L238
            if (r13 == 0) goto L1c5
            int r5 = r13.length()     // Catch: java.lang.Throwable -> L238
            if (r5 <= r8) goto L1b9
            java.lang.String r5 = r13.substring(r2, r8)     // Catch: java.lang.Throwable -> L238
            java.lang.String r9 = "deviceId %s length is over limit %d substring to %s"
            java.lang.Object[] r7 = new java.lang.Object[r7]     // Catch: java.lang.Throwable -> L238
            r7[r2] = r13     // Catch: java.lang.Throwable -> L238
            java.lang.Integer r13 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L238
            r7[r1] = r13     // Catch: java.lang.Throwable -> L238
            r7[r6] = r5     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.al.d(r9, r7)     // Catch: java.lang.Throwable -> L238
            r13 = r5
        L1b9:
            r3.a(r13)     // Catch: java.lang.Throwable -> L238
            java.lang.String r5 = "[param] Set device ID: %s"
            java.lang.Object[] r6 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L238
            r6[r2] = r13     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.al.a(r5, r6)     // Catch: java.lang.Throwable -> L238
        L1c5:
            java.lang.String r13 = r15.getDeviceModel()     // Catch: java.lang.Throwable -> L238
            if (r13 == 0) goto L1d7
            r3.b(r13)     // Catch: java.lang.Throwable -> L238
            java.lang.String r5 = "[param] Set device model: %s"
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L238
            r1[r2] = r13     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.al.a(r5, r1)     // Catch: java.lang.Throwable -> L238
        L1d7:
            boolean r13 = r15.isUploadProcess()     // Catch: java.lang.Throwable -> L238
            r3.f = r13     // Catch: java.lang.Throwable -> L238
            boolean r13 = r15.isBuglyLogUpload()     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.ao.b = r13     // Catch: java.lang.Throwable -> L238
        L1e3:
            r13 = 0
        L1e4:
            java.util.List<com.tencent.bugly.proguard.o> r1 = com.tencent.bugly.proguard.p.b     // Catch: java.lang.Throwable -> L238
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L238
            if (r13 >= r1) goto L215
            java.util.List<com.tencent.bugly.proguard.o> r1 = com.tencent.bugly.proguard.p.b     // Catch: java.lang.Throwable -> L208 java.lang.Throwable -> L238
            java.lang.Object r1 = r1.get(r13)     // Catch: java.lang.Throwable -> L208 java.lang.Throwable -> L238
            com.tencent.bugly.proguard.o r1 = (com.tencent.bugly.proguard.o) r1     // Catch: java.lang.Throwable -> L208 java.lang.Throwable -> L238
            int r1 = r1.id     // Catch: java.lang.Throwable -> L208 java.lang.Throwable -> L238
            boolean r1 = r4.b(r1)     // Catch: java.lang.Throwable -> L208 java.lang.Throwable -> L238
            if (r1 == 0) goto L212
            java.util.List<com.tencent.bugly.proguard.o> r1 = com.tencent.bugly.proguard.p.b     // Catch: java.lang.Throwable -> L208 java.lang.Throwable -> L238
            java.lang.Object r1 = r1.get(r13)     // Catch: java.lang.Throwable -> L208 java.lang.Throwable -> L238
            com.tencent.bugly.proguard.o r1 = (com.tencent.bugly.proguard.o) r1     // Catch: java.lang.Throwable -> L208 java.lang.Throwable -> L238
            r1.init(r12, r14, r15)     // Catch: java.lang.Throwable -> L208 java.lang.Throwable -> L238
            goto L212
        L208:
            r1 = move-exception
            boolean r3 = com.tencent.bugly.proguard.al.a(r1)     // Catch: java.lang.Throwable -> L238
            if (r3 != 0) goto L212
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L238
        L212:
            int r13 = r13 + 1
            goto L1e4
        L215:
            com.tencent.bugly.proguard.s.a(r12, r15)     // Catch: java.lang.Throwable -> L238
            if (r15 == 0) goto L21f
            long r12 = r15.getAppReportDelay()     // Catch: java.lang.Throwable -> L238
            goto L221
        L21f:
            r12 = 0
        L221:
            com.tencent.bugly.proguard.ac r14 = com.tencent.bugly.proguard.ac.a()     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.ak r15 = r14.c     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.ac$1 r1 = new com.tencent.bugly.proguard.ac$1     // Catch: java.lang.Throwable -> L238
            r1.<init>(r14)     // Catch: java.lang.Throwable -> L238
            r15.a(r1, r12)     // Catch: java.lang.Throwable -> L238
            java.lang.String r12 = "[init] Bugly initialization finished."
            java.lang.Object[] r13 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L238
            com.tencent.bugly.proguard.al.b(r12, r13)     // Catch: java.lang.Throwable -> L238
            monitor-exit(r0)
            return
        L238:
            r12 = move-exception
            monitor-exit(r0)
            throw r12
    }

    public static synchronized void a(com.tencent.bugly.proguard.o r2) {
            java.lang.Class<com.tencent.bugly.proguard.p> r0 = com.tencent.bugly.proguard.p.class
            monitor-enter(r0)
            java.util.List<com.tencent.bugly.proguard.o> r1 = com.tencent.bugly.proguard.p.b     // Catch: java.lang.Throwable -> L12
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto L10
            java.util.List<com.tencent.bugly.proguard.o> r1 = com.tencent.bugly.proguard.p.b     // Catch: java.lang.Throwable -> L12
            r1.add(r2)     // Catch: java.lang.Throwable -> L12
        L10:
            monitor-exit(r0)
            return
        L12:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    private static boolean a(com.tencent.bugly.proguard.aa r1) {
            java.util.List<java.lang.String> r0 = r1.v
            r1.getClass()
            if (r0 == 0) goto L11
            java.lang.String r1 = "bugly"
            boolean r1 = r0.contains(r1)
            if (r1 == 0) goto L11
            r1 = 1
            return r1
        L11:
            r1 = 0
            return r1
    }
}
