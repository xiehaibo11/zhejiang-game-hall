package com.huawei.hms.availableupdate;

public class e implements com.huawei.hms.availableupdate.f {
    public final android.content.Context a;
    public final com.huawei.hms.availableupdate.l b;
    public final com.huawei.hms.availableupdate.b c;
    public com.huawei.hms.availableupdate.g d;
    public java.io.File e;

    public class a extends com.huawei.hms.availableupdate.c {
        public long b;
        public int c;
        public final int d;
        public final java.lang.String e;
        public final com.huawei.hms.availableupdate.e f;

        public a(com.huawei.hms.availableupdate.e r1, java.io.File r2, int r3, int r4, java.lang.String r5) {
                r0 = this;
                r0.f = r1
                r0.d = r4
                r0.e = r5
                r0.<init>(r2, r3)
                r1 = 0
                r0.b = r1
                com.huawei.hms.availableupdate.e r1 = r0.f
                com.huawei.hms.availableupdate.b r1 = com.huawei.hms.availableupdate.e.a(r1)
                int r1 = r1.a()
                r0.c = r1
                return
        }

        public final void a(int r4) {
                r3 = this;
                com.huawei.hms.availableupdate.e r0 = r3.f
                com.huawei.hms.availableupdate.b r0 = com.huawei.hms.availableupdate.e.a(r0)
                com.huawei.hms.availableupdate.e r1 = r3.f
                android.content.Context r1 = r1.b()
                java.lang.String r2 = r3.e
                r0.a(r1, r4, r2)
                com.huawei.hms.availableupdate.e r0 = r3.f
                int r1 = r3.d
                r2 = 2100(0x834, float:2.943E-42)
                com.huawei.hms.availableupdate.e.a(r0, r2, r4, r1)
                return
        }

        @Override
        public void write(byte[] r5, int r6, int r7) throws java.io.IOException {
                r4 = this;
                super.write(r5, r6, r7)
                int r5 = r4.c
                int r5 = r5 + r7
                r4.c = r5
                r6 = 209715200(0xc800000, float:1.9721523E-31)
                if (r5 <= r6) goto Ld
                return
            Ld:
                long r5 = java.lang.System.currentTimeMillis()
                long r0 = r4.b
                long r0 = r5 - r0
                long r0 = java.lang.Math.abs(r0)
                r2 = 1000(0x3e8, double:4.94E-321)
                int r7 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r7 <= 0) goto L26
                r4.b = r5
                int r5 = r4.c
                r4.a(r5)
            L26:
                int r5 = r4.c
                int r6 = r4.d
                if (r5 != r6) goto L2f
                r4.a(r5)
            L2f:
                return
        }
    }

    public e(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            com.huawei.hms.availableupdate.k r0 = new com.huawei.hms.availableupdate.k
            r0.<init>()
            r1.b = r0
            com.huawei.hms.availableupdate.b r0 = new com.huawei.hms.availableupdate.b
            r0.<init>()
            r1.c = r0
            android.content.Context r2 = r2.getApplicationContext()
            r1.a = r2
            return
    }

    public static com.huawei.hms.availableupdate.b a(com.huawei.hms.availableupdate.e r0) {
            com.huawei.hms.availableupdate.b r0 = r0.c
            return r0
    }

    public static void a(com.huawei.hms.availableupdate.e r0, int r1, int r2, int r3) {
            r0.a(r1, r2, r3)
            return
    }

    public final com.huawei.hms.availableupdate.c a(java.io.File r8, int r9, java.lang.String r10) throws java.io.IOException {
            r7 = this;
            com.huawei.hms.availableupdate.e$a r6 = new com.huawei.hms.availableupdate.e$a
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r9
            r5 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return r6
    }

    @Override
    public void a() {
            r2 = this;
            java.lang.String r0 = "UpdateDownload"
            java.lang.String r1 = "Enter cancel."
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            r0 = 0
            r2.a(r0)
            com.huawei.hms.availableupdate.l r0 = r2.b
            r0.a()
            return
    }

    public final synchronized void a(int r3, int r4, int r5) {
            r2 = this;
            monitor-enter(r2)
            com.huawei.hms.availableupdate.g r0 = r2.d     // Catch: java.lang.Throwable -> Lc
            if (r0 == 0) goto La
            java.io.File r1 = r2.e     // Catch: java.lang.Throwable -> Lc
            r0.a(r3, r4, r5, r1)     // Catch: java.lang.Throwable -> Lc
        La:
            monitor-exit(r2)
            return
        Lc:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final synchronized void a(com.huawei.hms.availableupdate.g r1) {
            r0 = this;
            monitor-enter(r0)
            r0.d = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @Override
    public void a(com.huawei.hms.availableupdate.g r7, com.huawei.hms.availableupdate.h r8) {
            r6 = this;
            java.lang.String r0 = "callback must not be null."
            com.huawei.hms.utils.Checker.checkNonNull(r7, r0)
            java.lang.String r0 = "UpdateDownload"
            java.lang.String r1 = "Enter downloadPackage."
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            r6.a(r7)
            r7 = 2201(0x899, float:3.084E-42)
            r1 = 0
            if (r8 == 0) goto Lab
            boolean r2 = r8.a()
            if (r2 != 0) goto L1c
            goto Lab
        L1c:
            java.lang.String r2 = android.os.Environment.getExternalStorageState()
            java.lang.String r3 = "mounted"
            boolean r2 = r3.equals(r2)
            r3 = 2204(0x89c, float:3.088E-42)
            if (r2 != 0) goto L33
            java.lang.String r7 = "In downloadPackage, Invalid external storage for downloading file."
            com.huawei.hms.support.log.HMSLog.e(r0, r7)
            r6.a(r3, r1, r1)
            return
        L33:
            java.lang.String r2 = r8.b
            boolean r4 = android.text.TextUtils.isEmpty(r2)
            if (r4 == 0) goto L44
            java.lang.String r8 = "In DownloadHelper.downloadPackage, Download the package,  packageName is null: "
            com.huawei.hms.support.log.HMSLog.e(r0, r8)
            r6.a(r7, r1, r1)
            return
        L44:
            android.content.Context r4 = r6.a
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r2)
            java.lang.String r2 = ".apk"
            r5.append(r2)
            java.lang.String r2 = r5.toString()
            java.io.File r2 = com.huawei.hms.update.provider.UpdateProvider.getLocalFile(r4, r2)
            r6.e = r2
            if (r2 != 0) goto L68
            java.lang.String r7 = "In downloadPackage, Failed to get local file for downloading."
            com.huawei.hms.support.log.HMSLog.e(r0, r7)
            r6.a(r3, r1, r1)
            return
        L68:
            java.io.File r2 = r2.getParentFile()
            if (r2 == 0) goto La2
            boolean r3 = r2.mkdirs()
            if (r3 != 0) goto L7b
            boolean r3 = r2.isDirectory()
            if (r3 != 0) goto L7b
            goto La2
        L7b:
            long r2 = r2.getUsableSpace()
            int r7 = r8.d
            int r7 = r7 * 3
            long r4 = (long) r7
            int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r7 >= 0) goto L93
            java.lang.String r7 = "In downloadPackage, No space for downloading file."
            com.huawei.hms.support.log.HMSLog.e(r0, r7)
            r7 = 2203(0x89b, float:3.087E-42)
            r6.a(r7, r1, r1)
            return
        L93:
            r6.a(r8)     // Catch: com.huawei.hms.availableupdate.j -> L97
            goto La1
        L97:
            java.lang.String r7 = "In downloadPackage, Canceled to download the update file."
            com.huawei.hms.support.log.HMSLog.w(r0, r7)
            r7 = 2101(0x835, float:2.944E-42)
            r6.a(r7, r1, r1)
        La1:
            return
        La2:
            java.lang.String r8 = "In downloadPackage, Failed to create directory for downloading file."
            com.huawei.hms.support.log.HMSLog.e(r0, r8)
            r6.a(r7, r1, r1)
            return
        Lab:
            java.lang.String r8 = "In downloadPackage, Invalid update info."
            com.huawei.hms.support.log.HMSLog.e(r0, r8)
            r6.a(r7, r1, r1)
            return
    }

    public void a(com.huawei.hms.availableupdate.h r14) throws com.huawei.hms.availableupdate.j {
            r13 = this;
            java.lang.String r0 = "UpdateDownload"
            java.lang.String r1 = "Enter downloadPackage."
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            r1 = 2201(0x899, float:3.084E-42)
            r2 = 0
            r3 = 0
            java.lang.String r4 = r14.b     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            if (r5 == 0) goto L24
            java.lang.String r14 = "In DownloadHelper.downloadPackage, Download the package,  packageName is null: "
            com.huawei.hms.support.log.HMSLog.e(r0, r14)     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            r13.a(r1, r2, r2)     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            com.huawei.hms.availableupdate.l r14 = r13.b
            r14.close()
            com.huawei.hms.utils.IOUtils.closeQuietly(r3)
            return
        L24:
            com.huawei.hms.availableupdate.b r5 = r13.c     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            android.content.Context r6 = r13.b()     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            r5.a(r6, r4)     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            com.huawei.hms.availableupdate.b r5 = r13.c     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            java.lang.String r6 = r14.c     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            int r7 = r14.d     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            java.lang.String r8 = r14.e     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            boolean r5 = r5.b(r6, r7, r8)     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            r6 = 2000(0x7d0, float:2.803E-42)
            if (r5 == 0) goto L88
            com.huawei.hms.availableupdate.b r5 = r13.c     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            int r5 = r5.a()     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            com.huawei.hms.availableupdate.b r7 = r13.c     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            int r7 = r7.b()     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            if (r5 != r7) goto L75
            java.lang.String r5 = r14.e     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            java.io.File r7 = r13.e     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            boolean r5 = com.huawei.hms.utils.FileUtil.verifyHash(r5, r7)     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            if (r5 == 0) goto L61
            r13.a(r6, r2, r2)     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            com.huawei.hms.availableupdate.l r14 = r13.b
            r14.close()
            com.huawei.hms.utils.IOUtils.closeQuietly(r3)
            return
        L61:
            com.huawei.hms.availableupdate.b r5 = r13.c     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            java.lang.String r7 = r14.c     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            int r8 = r14.d     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            java.lang.String r9 = r14.e     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            r5.a(r7, r8, r9)     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            java.io.File r5 = r13.e     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            int r7 = r14.d     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            com.huawei.hms.availableupdate.c r3 = r13.a(r5, r7, r4)     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            goto L9b
        L75:
            java.io.File r5 = r13.e     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            int r7 = r14.d     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            com.huawei.hms.availableupdate.c r3 = r13.a(r5, r7, r4)     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            com.huawei.hms.availableupdate.b r4 = r13.c     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            int r4 = r4.a()     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            long r4 = (long) r4     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            r3.a(r4)     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            goto L9b
        L88:
            com.huawei.hms.availableupdate.b r5 = r13.c     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            java.lang.String r7 = r14.c     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            int r8 = r14.d     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            java.lang.String r9 = r14.e     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            r5.a(r7, r8, r9)     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            java.io.File r5 = r13.e     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            int r7 = r14.d     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            com.huawei.hms.availableupdate.c r3 = r13.a(r5, r7, r4)     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
        L9b:
            com.huawei.hms.availableupdate.l r7 = r13.b     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            java.lang.String r8 = r14.c     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            com.huawei.hms.availableupdate.b r4 = r13.c     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            int r10 = r4.a()     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            com.huawei.hms.availableupdate.b r4 = r13.c     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            int r11 = r4.b()     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            android.content.Context r12 = r13.a     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            r9 = r3
            int r4 = r7.a(r8, r9, r10, r11, r12)     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            r5 = 200(0xc8, float:2.8E-43)
            if (r4 == r5) goto Lda
            r5 = 206(0xce, float:2.89E-43)
            if (r4 == r5) goto Lda
            java.lang.StringBuilder r14 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            r14.<init>()     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            java.lang.String r5 = "In DownloadHelper.downloadPackage, Download the package, HTTP code: "
            r14.append(r5)     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            r14.append(r4)     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            java.lang.String r14 = r14.toString()     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            com.huawei.hms.support.log.HMSLog.e(r0, r14)     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            r13.a(r1, r2, r2)     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            com.huawei.hms.availableupdate.l r14 = r13.b
            r14.close()
            com.huawei.hms.utils.IOUtils.closeQuietly(r3)
            return
        Lda:
            java.lang.String r14 = r14.e     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            java.io.File r4 = r13.e     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            boolean r14 = com.huawei.hms.utils.FileUtil.verifyHash(r14, r4)     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            if (r14 != 0) goto Lf2
            r14 = 2202(0x89a, float:3.086E-42)
            r13.a(r14, r2, r2)     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            com.huawei.hms.availableupdate.l r14 = r13.b
            r14.close()
            com.huawei.hms.utils.IOUtils.closeQuietly(r3)
            return
        Lf2:
            r13.a(r6, r2, r2)     // Catch: java.lang.Throwable -> Lf6 java.io.IOException -> Lf8
            goto L114
        Lf6:
            r14 = move-exception
            goto L11d
        Lf8:
            r14 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf6
            r4.<init>()     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r5 = "In DownloadHelper.downloadPackage, Failed to download."
            r4.append(r5)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r14 = r14.getMessage()     // Catch: java.lang.Throwable -> Lf6
            r4.append(r14)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r14 = r4.toString()     // Catch: java.lang.Throwable -> Lf6
            com.huawei.hms.support.log.HMSLog.e(r0, r14)     // Catch: java.lang.Throwable -> Lf6
            r13.a(r1, r2, r2)     // Catch: java.lang.Throwable -> Lf6
        L114:
            com.huawei.hms.availableupdate.l r14 = r13.b
            r14.close()
            com.huawei.hms.utils.IOUtils.closeQuietly(r3)
            return
        L11d:
            com.huawei.hms.availableupdate.l r0 = r13.b
            r0.close()
            com.huawei.hms.utils.IOUtils.closeQuietly(r3)
            throw r14
    }

    public android.content.Context b() {
            r1 = this;
            android.content.Context r0 = r1.a
            return r0
    }
}
