package com.xiaomi.push;

public class dv extends com.xiaomi.push.al.a {
    private android.content.Context a;
    private android.content.SharedPreferences a;
    private com.xiaomi.push.service.ba a;

    public dv(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            r2.a = r3
            java.lang.String r0 = "mipush_extra"
            r1 = 0
            android.content.SharedPreferences r0 = r3.getSharedPreferences(r0, r1)
            r2.a = r0
            com.xiaomi.push.service.ba r3 = com.xiaomi.push.service.ba.a(r3)
            r2.a = r3
            return
    }

    private java.util.List<com.xiaomi.push.hr> a(java.io.File r11) {
            r10 = this;
            com.xiaomi.push.dn r0 = com.xiaomi.push.dn.a()
            com.xiaomi.push.dm r0 = r0.a()
            if (r0 != 0) goto Ld
            java.lang.String r0 = ""
            goto L11
        Ld:
            java.lang.String r0 = r0.a()
        L11:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            if (r1 == 0) goto L19
            return r2
        L19:
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r3 = 4
            byte[] r4 = new byte[r3]
            java.lang.Object r5 = com.xiaomi.push.dq.a
            monitor-enter(r5)
            java.io.File r6 = new java.io.File     // Catch: java.lang.Throwable -> L94 java.lang.Exception -> La9
            android.content.Context r7 = r10.a     // Catch: java.lang.Throwable -> L94 java.lang.Exception -> La9
            java.io.File r7 = r7.getExternalFilesDir(r2)     // Catch: java.lang.Throwable -> L94 java.lang.Exception -> La9
            java.lang.String r8 = "push_cdata.lock"
            r6.<init>(r7, r8)     // Catch: java.lang.Throwable -> L94 java.lang.Exception -> La9
            com.xiaomi.push.ab.a(r6)     // Catch: java.lang.Throwable -> L94 java.lang.Exception -> La9
            java.io.RandomAccessFile r7 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L94 java.lang.Exception -> La9
            java.lang.String r8 = "rw"
            r7.<init>(r6, r8)     // Catch: java.lang.Throwable -> L94 java.lang.Exception -> La9
            java.nio.channels.FileChannel r6 = r7.getChannel()     // Catch: java.lang.Throwable -> L8f java.lang.Exception -> L92
            java.nio.channels.FileLock r6 = r6.lock()     // Catch: java.lang.Throwable -> L8f java.lang.Exception -> L92
            java.io.FileInputStream r8 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8c
            r8.<init>(r11)     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8c
        L48:
            int r11 = r8.read(r4)     // Catch: java.lang.Throwable -> L86 java.lang.Exception -> L8d
            if (r11 == r3) goto L4f
            goto L5b
        L4f:
            int r11 = com.xiaomi.push.af.a(r4)     // Catch: java.lang.Throwable -> L86 java.lang.Exception -> L8d
            byte[] r2 = new byte[r11]     // Catch: java.lang.Throwable -> L86 java.lang.Exception -> L8d
            int r9 = r8.read(r2)     // Catch: java.lang.Throwable -> L86 java.lang.Exception -> L8d
            if (r9 == r11) goto L6d
        L5b:
            if (r6 == 0) goto L66
            boolean r11 = r6.isValid()     // Catch: java.lang.Throwable -> Lbc
            if (r11 == 0) goto L66
            r6.release()     // Catch: java.io.IOException -> L66 java.lang.Throwable -> Lbc
        L66:
            com.xiaomi.push.ab.a(r8)     // Catch: java.lang.Throwable -> Lbc
        L69:
            com.xiaomi.push.ab.a(r7)     // Catch: java.lang.Throwable -> Lbc
            goto Lba
        L6d:
            byte[] r11 = com.xiaomi.push.dp.a(r0, r2)     // Catch: java.lang.Throwable -> L86 java.lang.Exception -> L8d
            if (r11 == 0) goto L48
            int r2 = r11.length     // Catch: java.lang.Throwable -> L86 java.lang.Exception -> L8d
            if (r2 != 0) goto L77
            goto L48
        L77:
            com.xiaomi.push.hr r2 = new com.xiaomi.push.hr     // Catch: java.lang.Throwable -> L86 java.lang.Exception -> L8d
            r2.<init>()     // Catch: java.lang.Throwable -> L86 java.lang.Exception -> L8d
            com.xiaomi.push.it.a(r2, r11)     // Catch: java.lang.Throwable -> L86 java.lang.Exception -> L8d
            r1.add(r2)     // Catch: java.lang.Throwable -> L86 java.lang.Exception -> L8d
            r10.a(r2)     // Catch: java.lang.Throwable -> L86 java.lang.Exception -> L8d
            goto L48
        L86:
            r11 = move-exception
            goto L8a
        L88:
            r11 = move-exception
            r8 = r2
        L8a:
            r2 = r6
            goto L97
        L8c:
            r8 = r2
        L8d:
            r2 = r6
            goto Lab
        L8f:
            r11 = move-exception
            r8 = r2
            goto L97
        L92:
            r8 = r2
            goto Lab
        L94:
            r11 = move-exception
            r7 = r2
            r8 = r7
        L97:
            if (r2 == 0) goto La2
            boolean r0 = r2.isValid()     // Catch: java.lang.Throwable -> Lbc
            if (r0 == 0) goto La2
            r2.release()     // Catch: java.io.IOException -> La2 java.lang.Throwable -> Lbc
        La2:
            com.xiaomi.push.ab.a(r8)     // Catch: java.lang.Throwable -> Lbc
            com.xiaomi.push.ab.a(r7)     // Catch: java.lang.Throwable -> Lbc
            throw r11     // Catch: java.lang.Throwable -> Lbc
        La9:
            r7 = r2
            r8 = r7
        Lab:
            if (r2 == 0) goto Lb6
            boolean r11 = r2.isValid()     // Catch: java.lang.Throwable -> Lbc
            if (r11 == 0) goto Lb6
            r2.release()     // Catch: java.io.IOException -> Lb6 java.lang.Throwable -> Lbc
        Lb6:
            com.xiaomi.push.ab.a(r8)     // Catch: java.lang.Throwable -> Lbc
            goto L69
        Lba:
            monitor-exit(r5)     // Catch: java.lang.Throwable -> Lbc
            return r1
        Lbc:
            r11 = move-exception
            monitor-exit(r5)     // Catch: java.lang.Throwable -> Lbc
            throw r11
    }

    private void a() {
            r5 = this;
            android.content.SharedPreferences r0 = r5.a
            android.content.SharedPreferences$Editor r0 = r0.edit()
            long r1 = java.lang.System.currentTimeMillis()
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 / r3
            java.lang.String r3 = "last_upload_data_timestamp"
            r0.putLong(r3, r1)
            r0.commit()
            return
    }

    private void a(com.xiaomi.push.hr r5) {
            r4 = this;
            com.xiaomi.push.hl r0 = r5.a
            com.xiaomi.push.hl r1 = com.xiaomi.push.hl.b
            if (r0 != r1) goto L2b
            java.lang.String r0 = r5.a
            java.lang.String r1 = "same_"
            boolean r0 = r0.startsWith(r1)
            if (r0 != 0) goto L2b
            android.content.SharedPreferences r0 = r4.a
            android.content.SharedPreferences$Editor r0 = r0.edit()
            long r1 = r5.a
            java.lang.String r3 = "dc_job_result_time_4"
            r0.putLong(r3, r1)
            java.lang.String r5 = r5.a
            java.lang.String r5 = com.xiaomi.push.bp.a(r5)
            java.lang.String r1 = "dc_job_result_4"
            r0.putString(r1, r5)
            r0.commit()
        L2b:
            return
    }

    private boolean a() {
            r3 = this;
            android.content.Context r0 = r3.a
            boolean r0 = com.xiaomi.push.bj.e(r0)
            r1 = 0
            if (r0 == 0) goto La
            return r1
        La:
            android.content.Context r0 = r3.a
            boolean r0 = com.xiaomi.push.bj.g(r0)
            r2 = 1
            if (r0 != 0) goto L1b
            android.content.Context r0 = r3.a
            boolean r0 = com.xiaomi.push.bj.f(r0)
            if (r0 == 0) goto L22
        L1b:
            boolean r0 = r3.c()
            if (r0 != 0) goto L22
            return r2
        L22:
            android.content.Context r0 = r3.a
            boolean r0 = com.xiaomi.push.bj.h(r0)
            if (r0 == 0) goto L31
            boolean r0 = r3.b()
            if (r0 != 0) goto L31
            return r2
        L31:
            android.content.Context r0 = r3.a
            boolean r0 = com.xiaomi.push.bj.i(r0)
            if (r0 == 0) goto L3a
            return r2
        L3a:
            return r1
    }

    private boolean b() {
            r9 = this;
            com.xiaomi.push.service.ba r0 = r9.a
            com.xiaomi.push.ho r1 = com.xiaomi.push.ho.L
            int r1 = r1.a()
            r2 = 1
            boolean r0 = r0.a(r1, r2)
            r1 = 0
            if (r0 != 0) goto L11
            return r1
        L11:
            com.xiaomi.push.service.ba r0 = r9.a
            com.xiaomi.push.ho r3 = com.xiaomi.push.ho.M
            int r3 = r3.a()
            r4 = 432000(0x69780, float:6.05361E-40)
            int r0 = r0.a(r3, r4)
            r3 = 86400(0x15180, float:1.21072E-40)
            int r0 = java.lang.Math.max(r3, r0)
            android.content.SharedPreferences r3 = r9.a
            r4 = -1
            java.lang.String r6 = "last_upload_data_timestamp"
            long r3 = r3.getLong(r6, r4)
            long r5 = java.lang.System.currentTimeMillis()
            r7 = 1000(0x3e8, double:4.94E-321)
            long r5 = r5 / r7
            long r5 = r5 - r3
            long r3 = java.lang.Math.abs(r5)
            long r5 = (long) r0
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 <= 0) goto L43
            goto L44
        L43:
            r2 = r1
        L44:
            return r2
    }

    private boolean c() {
            r9 = this;
            com.xiaomi.push.service.ba r0 = r9.a
            com.xiaomi.push.ho r1 = com.xiaomi.push.ho.J
            int r1 = r1.a()
            r2 = 1
            boolean r0 = r0.a(r1, r2)
            r1 = 0
            if (r0 != 0) goto L11
            return r1
        L11:
            com.xiaomi.push.service.ba r0 = r9.a
            com.xiaomi.push.ho r3 = com.xiaomi.push.ho.K
            int r3 = r3.a()
            r4 = 259200(0x3f480, float:3.63217E-40)
            int r0 = r0.a(r3, r4)
            r3 = 86400(0x15180, float:1.21072E-40)
            int r0 = java.lang.Math.max(r3, r0)
            android.content.SharedPreferences r3 = r9.a
            r4 = -1
            java.lang.String r6 = "last_upload_data_timestamp"
            long r3 = r3.getLong(r6, r4)
            long r5 = java.lang.System.currentTimeMillis()
            r7 = 1000(0x3e8, double:4.94E-321)
            long r5 = r5 / r7
            long r5 = r5 - r3
            long r3 = java.lang.Math.abs(r5)
            long r5 = (long) r0
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 <= 0) goto L43
            goto L44
        L43:
            r2 = r1
        L44:
            return r2
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "1"
            return r0
    }

    @Override
    public void run() {
            r6 = this;
            java.io.File r0 = new java.io.File
            android.content.Context r1 = r6.a
            r2 = 0
            java.io.File r1 = r1.getExternalFilesDir(r2)
            java.lang.String r3 = "push_cdata.data"
            r0.<init>(r1, r3)
            android.content.Context r1 = r6.a
            boolean r1 = com.xiaomi.push.bj.d(r1)
            if (r1 != 0) goto L25
            long r1 = r0.length()
            r3 = 1863680(0x1c7000, double:9.207803E-318)
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 <= 0) goto L24
            r0.delete()
        L24:
            return
        L25:
            boolean r1 = r6.a()
            if (r1 == 0) goto L2c
            return
        L2c:
            boolean r1 = r0.exists()
            if (r1 != 0) goto L33
            return
        L33:
            java.util.List r1 = r6.a(r0)
            boolean r3 = com.xiaomi.push.ag.a(r1)
            if (r3 != 0) goto L7f
            int r3 = r1.size()
            r4 = 4000(0xfa0, float:5.605E-42)
            if (r3 <= r4) goto L4b
            int r4 = r3 + (-4000)
            java.util.List r1 = r1.subList(r4, r3)
        L4b:
            com.xiaomi.push.ic r3 = new com.xiaomi.push.ic
            r3.<init>()
            r3.a(r1)
            byte[] r1 = com.xiaomi.push.it.a(r3)
            byte[] r1 = com.xiaomi.push.ab.a(r1)
            com.xiaomi.push.ii r3 = new com.xiaomi.push.ii
            r4 = 0
            java.lang.String r5 = "-1"
            r3.<init>(r5, r4)
            com.xiaomi.push.ht r4 = com.xiaomi.push.ht.q
            java.lang.String r4 = r4.a
            r3.c(r4)
            r3.a(r1)
            com.xiaomi.push.dn r1 = com.xiaomi.push.dn.a()
            com.xiaomi.push.dm r1 = r1.a()
            if (r1 == 0) goto L7c
            com.xiaomi.push.hj r4 = com.xiaomi.push.hj.i
            r1.a(r3, r4, r2)
        L7c:
            r6.a()
        L7f:
            r0.delete()
            return
    }
}
