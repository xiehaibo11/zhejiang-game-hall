package com.xiaomi.push;

public abstract class dt extends com.xiaomi.push.al.a {
    protected int a;
    protected android.content.Context a;

    public dt(android.content.Context r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.a = r2
            r0.a = r1
            return
    }

    public static void a(android.content.Context r2, com.xiaomi.push.hr r3) {
            com.xiaomi.push.dn r0 = com.xiaomi.push.dn.a()
            com.xiaomi.push.dm r0 = r0.a()
            if (r0 != 0) goto Ld
            java.lang.String r0 = ""
            goto L11
        Ld:
            java.lang.String r0 = r0.a()
        L11:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L18
            return
        L18:
            java.lang.String r1 = r3.a()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L23
            return
        L23:
            a(r2, r3, r0)
            return
    }

    private static void a(android.content.Context r6, com.xiaomi.push.hr r7, java.lang.String r8) {
            byte[] r7 = com.xiaomi.push.it.a(r7)
            byte[] r7 = com.xiaomi.push.dp.b(r8, r7)
            if (r7 == 0) goto Laf
            int r8 = r7.length
            if (r8 != 0) goto Lf
            goto Laf
        Lf:
            java.lang.Object r8 = com.xiaomi.push.dq.a
            monitor-enter(r8)
            r0 = 0
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L7d java.io.IOException -> L81
            java.io.File r2 = r6.getExternalFilesDir(r0)     // Catch: java.lang.Throwable -> L7d java.io.IOException -> L81
            java.lang.String r3 = "push_cdata.lock"
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L7d java.io.IOException -> L81
            com.xiaomi.push.ab.a(r1)     // Catch: java.lang.Throwable -> L7d java.io.IOException -> L81
            java.io.RandomAccessFile r2 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L7d java.io.IOException -> L81
            java.lang.String r3 = "rw"
            r2.<init>(r1, r3)     // Catch: java.lang.Throwable -> L7d java.io.IOException -> L81
            java.nio.channels.FileChannel r1 = r2.getChannel()     // Catch: java.lang.Throwable -> L77 java.io.IOException -> L7a
            java.nio.channels.FileLock r1 = r1.lock()     // Catch: java.lang.Throwable -> L77 java.io.IOException -> L7a
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L6f java.io.IOException -> L73
            java.io.File r6 = r6.getExternalFilesDir(r0)     // Catch: java.lang.Throwable -> L6f java.io.IOException -> L73
            java.lang.String r4 = "push_cdata.data"
            r3.<init>(r6, r4)     // Catch: java.lang.Throwable -> L6f java.io.IOException -> L73
            java.io.BufferedOutputStream r6 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L6f java.io.IOException -> L73
            java.io.FileOutputStream r4 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L6f java.io.IOException -> L73
            r5 = 1
            r4.<init>(r3, r5)     // Catch: java.lang.Throwable -> L6f java.io.IOException -> L73
            r6.<init>(r4)     // Catch: java.lang.Throwable -> L6f java.io.IOException -> L73
            int r0 = r7.length     // Catch: java.lang.Throwable -> L6b java.io.IOException -> L6d
            byte[] r0 = com.xiaomi.push.af.a(r0)     // Catch: java.lang.Throwable -> L6b java.io.IOException -> L6d
            r6.write(r0)     // Catch: java.lang.Throwable -> L6b java.io.IOException -> L6d
            r6.write(r7)     // Catch: java.lang.Throwable -> L6b java.io.IOException -> L6d
            r6.flush()     // Catch: java.lang.Throwable -> L6b java.io.IOException -> L6d
            r4 = 0
            r3.setLastModified(r4)     // Catch: java.lang.Throwable -> L6b java.io.IOException -> L6d
            if (r1 == 0) goto L64
            boolean r7 = r1.isValid()     // Catch: java.lang.Throwable -> L98
            if (r7 == 0) goto L64
            r1.release()     // Catch: java.io.IOException -> L64 java.lang.Throwable -> L98
        L64:
            com.xiaomi.push.ab.a(r6)     // Catch: java.lang.Throwable -> L98
        L67:
            com.xiaomi.push.ab.a(r2)     // Catch: java.lang.Throwable -> L98
            goto L96
        L6b:
            r7 = move-exception
            goto L71
        L6d:
            r7 = move-exception
            goto L75
        L6f:
            r7 = move-exception
            r6 = r0
        L71:
            r0 = r1
            goto L9b
        L73:
            r7 = move-exception
            r6 = r0
        L75:
            r0 = r1
            goto L84
        L77:
            r7 = move-exception
            r6 = r0
            goto L9b
        L7a:
            r7 = move-exception
            r6 = r0
            goto L84
        L7d:
            r7 = move-exception
            r6 = r0
            r2 = r6
            goto L9b
        L81:
            r7 = move-exception
            r6 = r0
            r2 = r6
        L84:
            r7.printStackTrace()     // Catch: java.lang.Throwable -> L9a
            if (r0 == 0) goto L92
            boolean r7 = r0.isValid()     // Catch: java.lang.Throwable -> L98
            if (r7 == 0) goto L92
            r0.release()     // Catch: java.io.IOException -> L92 java.lang.Throwable -> L98
        L92:
            com.xiaomi.push.ab.a(r6)     // Catch: java.lang.Throwable -> L98
            goto L67
        L96:
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L98
            return
        L98:
            r6 = move-exception
            goto Lad
        L9a:
            r7 = move-exception
        L9b:
            if (r0 == 0) goto La6
            boolean r1 = r0.isValid()     // Catch: java.lang.Throwable -> L98
            if (r1 == 0) goto La6
            r0.release()     // Catch: java.lang.Throwable -> L98 java.io.IOException -> La6
        La6:
            com.xiaomi.push.ab.a(r6)     // Catch: java.lang.Throwable -> L98
            com.xiaomi.push.ab.a(r2)     // Catch: java.lang.Throwable -> L98
            throw r7     // Catch: java.lang.Throwable -> L98
        Lad:
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L98
            throw r6
        Laf:
            return
    }

    private java.lang.String c() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "dc_job_result_time_"
            r0.append(r1)
            java.lang.String r1 = r2.a()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    private java.lang.String d() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "dc_job_result_"
            r0.append(r1)
            java.lang.String r1 = r2.a()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public abstract com.xiaomi.push.hl a();

    protected boolean a() {
            r4 = this;
            android.content.Context r0 = r4.a
            java.lang.String r1 = r4.a()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            int r2 = r4.a
            long r2 = (long) r2
            boolean r0 = com.xiaomi.push.dp.a(r0, r1, r2)
            return r0
    }

    public abstract java.lang.String b();

    protected boolean b() {
            r1 = this;
            r0 = 1
            return r0
    }

    protected boolean c() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void run() {
            r11 = this;
            java.lang.String r0 = r11.b()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto Lb
            return
        Lb:
            boolean r1 = r11.a()
            if (r1 == 0) goto L2a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "DC run job mutual: "
            r0.append(r1)
            java.lang.String r1 = r11.a()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            return
        L2a:
            com.xiaomi.push.dn r1 = com.xiaomi.push.dn.a()
            com.xiaomi.push.dm r1 = r1.a()
            if (r1 != 0) goto L37
            java.lang.String r1 = ""
            goto L3b
        L37:
            java.lang.String r1 = r1.a()
        L3b:
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L42
            return
        L42:
            boolean r2 = r11.b()
            if (r2 != 0) goto L49
            return
        L49:
            boolean r2 = r11.c()
            if (r2 == 0) goto Lb4
            android.content.Context r2 = r11.a
            r3 = 0
            java.lang.String r4 = "mipush_extra"
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r4, r3)
            java.lang.String r3 = r11.d()
            r4 = 0
            java.lang.String r3 = r2.getString(r3, r4)
            java.lang.String r4 = com.xiaomi.push.bp.a(r0)
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto Lb4
            java.lang.String r3 = r11.c()
            r4 = 0
            long r2 = r2.getLong(r3, r4)
            android.content.Context r4 = r11.a
            com.xiaomi.push.service.ba r4 = com.xiaomi.push.service.ba.a(r4)
            com.xiaomi.push.ho r5 = com.xiaomi.push.ho.ba
            int r5 = r5.a()
            r6 = 604800(0x93a80, float:8.47505E-40)
            int r4 = r4.a(r5, r6)
            long r5 = java.lang.System.currentTimeMillis()
            long r5 = r5 - r2
            r7 = 1000(0x3e8, double:4.94E-321)
            long r5 = r5 / r7
            int r9 = r11.a
            long r9 = (long) r9
            int r5 = (r5 > r9 ? 1 : (r5 == r9 ? 0 : -1))
            if (r5 >= 0) goto L98
            return
        L98:
            long r5 = java.lang.System.currentTimeMillis()
            long r5 = r5 - r2
            long r5 = r5 / r7
            long r7 = (long) r4
            int r4 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r4 >= 0) goto Lb4
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r4 = "same_"
            r0.append(r4)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
        Lb4:
            com.xiaomi.push.hr r2 = new com.xiaomi.push.hr
            r2.<init>()
            r2.a(r0)
            long r3 = java.lang.System.currentTimeMillis()
            r2.a(r3)
            com.xiaomi.push.hl r0 = r11.a()
            r2.a(r0)
            android.content.Context r0 = r11.a
            a(r0, r2, r1)
            return
    }
}
