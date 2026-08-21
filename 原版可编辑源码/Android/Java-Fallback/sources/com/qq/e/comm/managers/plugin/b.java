package com.qq.e.comm.managers.plugin;

class b {
    private static volatile java.lang.String a;

    public static synchronized java.lang.String a(android.content.Context r4) {
            java.lang.Class<com.qq.e.comm.managers.plugin.b> r0 = com.qq.e.comm.managers.plugin.b.class
            monitor-enter(r0)
            java.lang.String r1 = com.qq.e.comm.managers.plugin.b.a     // Catch: java.lang.Throwable -> L50
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L50
            if (r1 != 0) goto Lf
            java.lang.String r4 = com.qq.e.comm.managers.plugin.b.a     // Catch: java.lang.Throwable -> L50
            monitor-exit(r0)
            return r4
        Lf:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L50
            r2 = 28
            if (r1 < r2) goto L1f
            java.lang.String r4 = android.app.Application.getProcessName()     // Catch: java.lang.Throwable -> L50
            com.qq.e.comm.managers.plugin.b.a = r4     // Catch: java.lang.Throwable -> L50
            java.lang.String r4 = com.qq.e.comm.managers.plugin.b.a     // Catch: java.lang.Throwable -> L50
            monitor-exit(r0)
            return r4
        L1f:
            int r1 = android.os.Process.myPid()     // Catch: java.lang.Throwable -> L50
            java.lang.String r2 = "activity"
            java.lang.Object r4 = r4.getSystemService(r2)     // Catch: java.lang.Throwable -> L50
            android.app.ActivityManager r4 = (android.app.ActivityManager) r4     // Catch: java.lang.Throwable -> L50
            java.util.List r4 = r4.getRunningAppProcesses()     // Catch: java.lang.Throwable -> L50
            if (r4 == 0) goto L4d
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> L50
        L35:
            boolean r2 = r4.hasNext()     // Catch: java.lang.Throwable -> L50
            if (r2 == 0) goto L4d
            java.lang.Object r2 = r4.next()     // Catch: java.lang.Exception -> L35 java.lang.Throwable -> L50
            android.app.ActivityManager$RunningAppProcessInfo r2 = (android.app.ActivityManager.RunningAppProcessInfo) r2     // Catch: java.lang.Exception -> L35 java.lang.Throwable -> L50
            int r3 = r2.pid     // Catch: java.lang.Exception -> L35 java.lang.Throwable -> L50
            if (r3 != r1) goto L35
            java.lang.String r2 = r2.processName     // Catch: java.lang.Exception -> L35 java.lang.Throwable -> L50
            com.qq.e.comm.managers.plugin.b.a = r2     // Catch: java.lang.Exception -> L35 java.lang.Throwable -> L50
            java.lang.String r4 = com.qq.e.comm.managers.plugin.b.a     // Catch: java.lang.Exception -> L35 java.lang.Throwable -> L50
            monitor-exit(r0)
            return r4
        L4d:
            r4 = 0
            monitor-exit(r0)
            return r4
        L50:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    public static synchronized java.lang.String a(java.lang.String r4) {
            java.lang.Class<com.qq.e.comm.managers.plugin.b> r0 = com.qq.e.comm.managers.plugin.b.class
            monitor-enter(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L52
            if (r1 == 0) goto Lb
            monitor-exit(r0)
            return r4
        Lb:
            java.lang.String r1 = com.qq.e.comm.managers.plugin.b.a     // Catch: java.lang.Throwable -> L52
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L52
            if (r2 != 0) goto L50
            java.lang.String r2 = "_"
            boolean r2 = r1.endsWith(r2)     // Catch: java.lang.Throwable -> L52
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L52
            r3.<init>()     // Catch: java.lang.Throwable -> L52
            r3.append(r4)     // Catch: java.lang.Throwable -> L52
            if (r2 == 0) goto L26
            java.lang.String r4 = ""
            goto L28
        L26:
            java.lang.String r4 = "_"
        L28:
            r3.append(r4)     // Catch: java.lang.Throwable -> L52
            r4 = 0
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Exception -> L47 java.lang.Throwable -> L52
            r2.<init>(r1)     // Catch: java.lang.Exception -> L47 java.lang.Throwable -> L52
            java.lang.String r4 = "MD5"
            java.security.MessageDigest r4 = java.security.MessageDigest.getInstance(r4)     // Catch: java.lang.Exception -> L46 java.lang.Throwable -> L52
            java.lang.String r1 = "UTF-8"
            byte[] r1 = r2.getBytes(r1)     // Catch: java.lang.Exception -> L46 java.lang.Throwable -> L52
            byte[] r4 = r4.digest(r1)     // Catch: java.lang.Exception -> L46 java.lang.Throwable -> L52
            java.lang.String r4 = com.qq.e.comm.managers.plugin.d.a(r4)     // Catch: java.lang.Exception -> L46 java.lang.Throwable -> L52
            goto L47
        L46:
            r4 = r2
        L47:
            r3.append(r4)     // Catch: java.lang.Throwable -> L52
            java.lang.String r4 = r3.toString()     // Catch: java.lang.Throwable -> L52
            monitor-exit(r0)
            return r4
        L50:
            monitor-exit(r0)
            return r4
        L52:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    static void a(android.content.Context r11, java.io.File r12, java.io.File r13) throws java.lang.Throwable {
            java.lang.String r0 = "gdtadv2.jar"
            java.lang.String r1 = "gdt_plugin"
            android.content.res.AssetManager r11 = r11.getAssets()
            r2 = 0
            com.qq.e.comm.managers.plugin.h.a()     // Catch: java.lang.Throwable -> Le9
            java.lang.String[] r3 = r11.list(r1)     // Catch: java.lang.Throwable -> Le9
            int r4 = java.util.Arrays.binarySearch(r3, r0)     // Catch: java.lang.Throwable -> Le9
            if (r4 < 0) goto Lc0
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le9
            r3.<init>()     // Catch: java.lang.Throwable -> Le9
            r3.append(r1)     // Catch: java.lang.Throwable -> Le9
            java.lang.String r1 = java.io.File.separator     // Catch: java.lang.Throwable -> Le9
            r3.append(r1)     // Catch: java.lang.Throwable -> Le9
            r3.append(r0)     // Catch: java.lang.Throwable -> Le9
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> Le9
            java.lang.String r1 = com.qq.e.comm.constants.Sig.ASSET_PLUGIN_SIG     // Catch: java.lang.Throwable -> Le9
            if (r1 != 0) goto L30
            java.lang.String r1 = ""
        L30:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le9
            r3.<init>()     // Catch: java.lang.Throwable -> Le9
            int r4 = com.qq.e.comm.managers.status.SDKStatus.getBuildInPluginVersion()     // Catch: java.lang.Throwable -> Le9
            r3.append(r4)     // Catch: java.lang.Throwable -> Le9
            java.lang.String r4 = "#####"
            r3.append(r4)     // Catch: java.lang.Throwable -> Le9
            r3.append(r1)     // Catch: java.lang.Throwable -> Le9
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> Le9
            com.qq.e.comm.managers.plugin.h.a(r1, r13)     // Catch: java.lang.Throwable -> Le9
            java.lang.String r13 = com.qq.e.comm.constants.CustomPkgConstants.getAssetPluginXorKey()     // Catch: java.lang.Throwable -> Le9
            boolean r13 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> Le9
            if (r13 == 0) goto L5f
            java.io.InputStream r11 = r11.open(r0)     // Catch: java.lang.Throwable -> Le9
            boolean r11 = com.qq.e.comm.managers.plugin.h.a(r11, r12)     // Catch: java.lang.Throwable -> Le9
            r12 = r2
            goto La7
        L5f:
            java.io.InputStream r11 = r11.open(r0)     // Catch: java.lang.Throwable -> Le9
            java.io.FileOutputStream r13 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> Lbb
            r13.<init>(r12)     // Catch: java.lang.Throwable -> Lbb
            java.lang.String r12 = com.qq.e.comm.constants.CustomPkgConstants.getAssetPluginXorKey()     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r0 = "UTF-8"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)     // Catch: java.lang.Throwable -> Lb8
            byte[] r12 = r12.getBytes(r0)     // Catch: java.lang.Throwable -> Lb8
            r0 = 1024(0x400, float:1.435E-42)
            byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> Lb8
            int r1 = r12.length     // Catch: java.lang.Throwable -> Lb8
            r2 = 64
            r3 = 0
            r4 = r3
            r5 = r4
        L80:
            int r6 = r11.read(r0)     // Catch: java.lang.Throwable -> Lb8
            if (r6 <= 0) goto La2
            r7 = r3
        L87:
            if (r7 >= r6) goto L9e
            int r8 = r5 + 1
            if (r5 >= r2) goto L8e
            goto L9a
        L8e:
            r5 = r0[r7]     // Catch: java.lang.Throwable -> Lb8
            int r9 = r4 + 1
            int r4 = r4 % r1
            r4 = r12[r4]     // Catch: java.lang.Throwable -> Lb8
            r4 = r4 ^ r5
            byte r4 = (byte) r4     // Catch: java.lang.Throwable -> Lb8
            r0[r7] = r4     // Catch: java.lang.Throwable -> Lb8
            r4 = r9
        L9a:
            int r7 = r7 + 1
            r5 = r8
            goto L87
        L9e:
            r13.write(r0, r3, r6)     // Catch: java.lang.Throwable -> Lb8
            goto L80
        La2:
            r12 = 1
            r2 = r13
            r10 = r12
            r12 = r11
            r11 = r10
        La7:
            a(r12)
            a(r2)
            if (r11 == 0) goto Lb0
            return
        Lb0:
            java.lang.Exception r11 = new java.lang.Exception
            java.lang.String r12 = "Plugin prepare failed"
            r11.<init>(r12)
            throw r11
        Lb8:
            r12 = move-exception
            r2 = r13
            goto Lee
        Lbb:
            r12 = move-exception
            r10 = r12
            r12 = r11
            r11 = r10
            goto Leb
        Lc0:
            if (r3 == 0) goto Lcd
            int r11 = r3.length     // Catch: java.lang.Throwable -> Le9
            if (r11 > 0) goto Lc6
            goto Lcd
        Lc6:
            java.lang.String r11 = ","
            java.lang.String r11 = android.text.TextUtils.join(r11, r3)     // Catch: java.lang.Throwable -> Le9
            goto Lcf
        Lcd:
            java.lang.String r11 = "no asset"
        Lcf:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le9
            r12.<init>()     // Catch: java.lang.Throwable -> Le9
            java.lang.String r13 = "Asset Error "
            r12.append(r13)     // Catch: java.lang.Throwable -> Le9
            r12.append(r11)     // Catch: java.lang.Throwable -> Le9
            java.lang.String r11 = r12.toString()     // Catch: java.lang.Throwable -> Le9
            com.qq.e.comm.util.GDTLogger.e(r11)     // Catch: java.lang.Throwable -> Le9
            java.lang.Exception r12 = new java.lang.Exception     // Catch: java.lang.Throwable -> Le9
            r12.<init>(r11)     // Catch: java.lang.Throwable -> Le9
            throw r12     // Catch: java.lang.Throwable -> Le9
        Le9:
            r11 = move-exception
            r12 = r2
        Leb:
            r10 = r12
            r12 = r11
            r11 = r10
        Lee:
            java.lang.String r13 = "插件加载失败"
            com.qq.e.comm.util.GDTLogger.e(r13, r12)     // Catch: java.lang.Throwable -> Lf4
            throw r12     // Catch: java.lang.Throwable -> Lf4
        Lf4:
            r12 = move-exception
            a(r11)
            a(r2)
            throw r12
    }

    private static void a(java.io.Closeable r0) {
            if (r0 == 0) goto L5
            r0.close()     // Catch: java.io.IOException -> L5
        L5:
            return
    }
}
