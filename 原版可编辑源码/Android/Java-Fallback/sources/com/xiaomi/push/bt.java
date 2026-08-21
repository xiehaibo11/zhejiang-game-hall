package com.xiaomi.push;

public class bt {
    public static java.lang.String a() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = android.os.Build.VERSION.RELEASE
            r0.append(r1)
            java.lang.String r1 = "-"
            r0.append(r1)
            java.lang.String r1 = android.os.Build.VERSION.INCREMENTAL
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static java.lang.String a(android.content.Context r4) {
            com.xiaomi.push.bw r0 = com.xiaomi.push.bw.a(r4)
            java.lang.String r1 = "sp_client_report_key"
            java.lang.String r2 = "sp_client_report_status"
            java.lang.String r3 = ""
            java.lang.String r0 = r0.a(r2, r1, r3)
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 == 0) goto L21
            r0 = 20
            java.lang.String r0 = com.xiaomi.push.bp.a(r0)
            com.xiaomi.push.bw r4 = com.xiaomi.push.bw.a(r4)
            r4.a(r2, r1, r0)
        L21:
            return r0
    }

    public static void a(android.content.Context r3, java.lang.String r4) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.xiaomi.xmsf.push.XMSF_UPLOAD_ACTIVE"
            r0.<init>(r1)
            java.lang.String r1 = r3.getPackageName()
            java.lang.String r2 = "pkgname"
            r0.putExtra(r2, r1)
            java.lang.String r1 = "category"
            java.lang.String r2 = "category_client_report_data"
            r0.putExtra(r1, r2)
            java.lang.String r1 = "name"
            java.lang.String r2 = "quality_support"
            r0.putExtra(r1, r2)
            java.lang.String r1 = "data"
            r0.putExtra(r1, r4)
            java.lang.String r4 = "com.xiaomi.xmsf.permission.USE_XMSF_UPLOAD"
            r3.sendBroadcast(r0, r4)
            return
    }

    public static void a(android.content.Context r11, java.lang.String r12, java.lang.String r13) {
            java.io.File r13 = r11.getExternalFilesDir(r13)
            if (r13 == 0) goto L124
            boolean r0 = r13.exists()
            if (r0 != 0) goto Lf
            r13.mkdirs()
        Lf:
            java.io.File r11 = r11.getExternalFilesDir(r12)
            if (r11 == 0) goto L124
            boolean r12 = r11.exists()
            if (r12 != 0) goto L1f
            r11.mkdirs()
            return
        L1f:
            com.xiaomi.push.bu r12 = new com.xiaomi.push.bu
            r12.<init>()
            java.io.File[] r11 = r11.listFiles(r12)
            if (r11 == 0) goto L124
            int r12 = r11.length
            if (r12 > 0) goto L2f
            goto L124
        L2f:
            long r0 = java.lang.System.currentTimeMillis()
            int r12 = r11.length
            r2 = 0
            r3 = 0
            r4 = r3
            r5 = r4
        L38:
            if (r2 >= r12) goto L124
            r6 = r11[r2]
            if (r6 == 0) goto L108
            java.lang.String r7 = r6.getAbsolutePath()     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lca
            boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lca
            if (r7 == 0) goto L4a
            goto L108
        L4a:
            java.io.File r7 = new java.io.File     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lca
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lca
            r8.<init>()     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lca
            java.lang.String r9 = r6.getAbsolutePath()     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lca
            r8.append(r9)     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lca
            java.lang.String r9 = ".lock"
            r8.append(r9)     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lca
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lca
            r7.<init>(r8)     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lca
            com.xiaomi.push.ab.a(r7)     // Catch: java.lang.Throwable -> Lc1 java.lang.Exception -> Lc3
            java.io.RandomAccessFile r5 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> Lc1 java.lang.Exception -> Lc3
            java.lang.String r8 = "rw"
            r5.<init>(r7, r8)     // Catch: java.lang.Throwable -> Lc1 java.lang.Exception -> Lc3
            java.nio.channels.FileChannel r4 = r5.getChannel()     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Lec
            java.nio.channels.FileLock r3 = r4.lock()     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Lec
            java.lang.String r4 = r13.getAbsolutePath()     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Lec
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Lec
            r8.<init>()     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Lec
            r8.append(r4)     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Lec
            java.lang.String r4 = java.io.File.separator     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Lec
            r8.append(r4)     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Lec
            java.lang.String r4 = r6.getName()     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Lec
            r8.append(r4)     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Lec
            r8.append(r0)     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Lec
            java.lang.String r4 = r8.toString()     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Lec
            java.io.File r8 = new java.io.File     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Lec
            r8.<init>(r4)     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Lec
            com.xiaomi.push.ab.b(r6, r8)     // Catch: java.io.IOException -> L9e java.lang.Exception -> Lbf java.lang.Throwable -> Lec
            goto La8
        L9e:
            r4 = move-exception
            r4.printStackTrace()     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Lec
            r6.delete()     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Lec
            r8.delete()     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Lec
        La8:
            r6.delete()     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Lec
            if (r3 == 0) goto Lbb
            boolean r4 = r3.isValid()
            if (r4 == 0) goto Lbb
            r3.release()     // Catch: java.io.IOException -> Lb7
            goto Lbb
        Lb7:
            r4 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r4)
        Lbb:
            com.xiaomi.push.ab.a(r5)
            goto Le6
        Lbf:
            r4 = move-exception
            goto Lce
        Lc1:
            r11 = move-exception
            goto Lee
        Lc3:
            r5 = move-exception
            r10 = r5
            r5 = r4
            r4 = r10
            goto Lce
        Lc8:
            r11 = move-exception
            goto Lef
        Lca:
            r6 = move-exception
            r7 = r5
            r5 = r4
            r4 = r6
        Lce:
            com.xiaomi.channel.commonutils.logger.b.a(r4)     // Catch: java.lang.Throwable -> Lec
            if (r3 == 0) goto Le1
            boolean r4 = r3.isValid()
            if (r4 == 0) goto Le1
            r3.release()     // Catch: java.io.IOException -> Ldd
            goto Le1
        Ldd:
            r4 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r4)
        Le1:
            com.xiaomi.push.ab.a(r5)
            if (r7 == 0) goto Le9
        Le6:
            r7.delete()
        Le9:
            r4 = r5
            r5 = r7
            goto L120
        Lec:
            r11 = move-exception
            r4 = r5
        Lee:
            r5 = r7
        Lef:
            if (r3 == 0) goto Lff
            boolean r12 = r3.isValid()
            if (r12 == 0) goto Lff
            r3.release()     // Catch: java.io.IOException -> Lfb
            goto Lff
        Lfb:
            r12 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r12)
        Lff:
            com.xiaomi.push.ab.a(r4)
            if (r5 == 0) goto L107
            r5.delete()
        L107:
            throw r11
        L108:
            if (r3 == 0) goto L118
            boolean r6 = r3.isValid()
            if (r6 == 0) goto L118
            r3.release()     // Catch: java.io.IOException -> L114
            goto L118
        L114:
            r6 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r6)
        L118:
            com.xiaomi.push.ab.a(r4)
            if (r5 == 0) goto L120
            r5.delete()
        L120:
            int r2 = r2 + 1
            goto L38
        L124:
            return
    }

    public static void a(android.content.Context r2, java.util.List<java.lang.String> r3) {
            if (r3 == 0) goto L2a
            int r0 = r3.size()
            if (r0 > 0) goto L9
            goto L2a
        L9:
            boolean r0 = a(r2)
            if (r0 == 0) goto L2a
            java.util.Iterator r3 = r3.iterator()
        L13:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L2a
            java.lang.Object r0 = r3.next()
            java.lang.String r0 = (java.lang.String) r0
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L26
            goto L13
        L26:
            a(r2, r0)
            goto L13
        L2a:
            return
    }

    public static boolean a(android.content.Context r2) {
            android.content.Context r2 = r2.getApplicationContext()
            android.content.pm.PackageManager r2 = r2.getPackageManager()
            r0 = 0
            java.lang.String r1 = "com.xiaomi.xmsf"
            android.content.pm.PackageInfo r2 = r2.getPackageInfo(r1, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            int r2 = r2.versionCode     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            r1 = 108(0x6c, float:1.51E-43)
            if (r2 < r1) goto L16
            r0 = 1
        L16:
            return r0
    }

    public static boolean a(android.content.Context r4, java.lang.String r5) {
            java.io.File r0 = new java.io.File
            r0.<init>(r5)
            com.xiaomi.clientreport.manager.a r4 = com.xiaomi.clientreport.manager.a.a(r4)
            com.xiaomi.clientreport.data.Config r4 = r4.a()
            long r4 = r4.getMaxFileLength()
            boolean r1 = r0.exists()
            r2 = 0
            r3 = 1
            if (r1 == 0) goto L27
            long r0 = r0.length()     // Catch: java.lang.Exception -> L22
            int r4 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r4 <= 0) goto L2a
            goto L2b
        L22:
            r4 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r4)
            goto L2b
        L27:
            com.xiaomi.push.ab.a(r0)
        L2a:
            r2 = r3
        L2b:
            return r2
    }

    public static byte[] a(java.lang.String r2) {
            byte[] r2 = com.xiaomi.push.bm.a(r2)
            r0 = 16
            byte[] r2 = java.util.Arrays.copyOf(r2, r0)
            r0 = 0
            r1 = 68
            r2[r0] = r1
            r0 = 15
            r1 = 84
            r2[r0] = r1
            return r2
    }

    public static java.io.File[] a(android.content.Context r0, java.lang.String r1) {
            java.io.File r0 = r0.getExternalFilesDir(r1)
            if (r0 == 0) goto L10
            com.xiaomi.push.bv r1 = new com.xiaomi.push.bv
            r1.<init>()
            java.io.File[] r0 = r0.listFiles(r1)
            return r0
        L10:
            r0 = 0
            return r0
    }
}
