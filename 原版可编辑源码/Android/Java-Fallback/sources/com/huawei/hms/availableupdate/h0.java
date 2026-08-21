package com.huawei.hms.availableupdate;

public class h0 extends com.huawei.hms.availableupdate.p implements com.huawei.hms.availableupdate.g {
    public com.huawei.hms.availableupdate.f j;
    public com.huawei.hms.availableupdate.h k;
    public int l;

    public static class a implements java.lang.Runnable {
        public final com.huawei.hms.availableupdate.g a;
        public final int b;
        public final com.huawei.hms.availableupdate.h c;

        public a(com.huawei.hms.availableupdate.g r1, int r2, com.huawei.hms.availableupdate.h r3) {
                r0 = this;
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r3 = this;
                com.huawei.hms.availableupdate.g r0 = r3.a
                int r1 = r3.b
                com.huawei.hms.availableupdate.h r2 = r3.c
                r0.a(r1, r2)
                return
        }
    }

    public class b implements com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack {
        public final com.huawei.hms.availableupdate.g a;
        public final com.huawei.hms.availableupdate.h0 b;

        public b(com.huawei.hms.availableupdate.h0 r1, com.huawei.hms.availableupdate.g r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public void onMarketInstallInfo(android.content.Intent r1) {
                r0 = this;
                return
        }

        @Override
        public void onMarketStoreError(int r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "onMarketStoreError responseCode: "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                java.lang.String r0 = "UpdateWizard"
                com.huawei.hms.support.log.HMSLog.e(r0, r3)
                return
        }

        @Override
        public void onUpdateInfo(android.content.Intent r3) {
                r2 = this;
                if (r3 == 0) goto L9
                com.huawei.hms.availableupdate.h0 r0 = r2.b
                com.huawei.hms.availableupdate.g r1 = r2.a
                com.huawei.hms.availableupdate.h0.a(r0, r3, r1)
            L9:
                return
        }

        @Override
        public void onUpdateStoreError(int r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "onUpdateStoreError responseCode: "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                java.lang.String r0 = "UpdateWizard"
                com.huawei.hms.support.log.HMSLog.e(r0, r3)
                return
        }
    }

    public h0() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.l = r0
            return
    }

    public static android.net.Uri a(android.content.Context r5, java.io.File r6) {
            com.huawei.hms.utils.PackageManagerHelper r0 = new com.huawei.hms.utils.PackageManagerHelper
            r0.<init>(r5)
            java.lang.String r1 = r5.getPackageName()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r3 = ".hms.update.provider"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            int r3 = android.os.Build.VERSION.SDK_INT
            r4 = 23
            if (r3 <= r4) goto L31
            android.content.pm.ApplicationInfo r3 = r5.getApplicationInfo()
            int r3 = r3.targetSdkVersion
            if (r3 <= r4) goto L29
            goto L2f
        L29:
            boolean r0 = r0.hasProvider(r1, r2)
            if (r0 == 0) goto L31
        L2f:
            r0 = 1
            goto L32
        L31:
            r0 = 0
        L32:
            if (r0 == 0) goto L39
            android.net.Uri r5 = com.huawei.hms.update.provider.UpdateProvider.getUriForFile(r5, r2, r6)
            return r5
        L39:
            android.net.Uri r5 = android.net.Uri.fromFile(r6)
            return r5
    }

    public static void a(com.huawei.hms.availableupdate.g r2, int r3, com.huawei.hms.availableupdate.h r4) {
            if (r2 == 0) goto L13
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.huawei.hms.availableupdate.h0$a r1 = new com.huawei.hms.availableupdate.h0$a
            r1.<init>(r2, r3, r4)
            r0.post(r1)
        L13:
            return
    }

    public static void a(com.huawei.hms.availableupdate.h0 r0, android.content.Intent r1, com.huawei.hms.availableupdate.g r2) {
            r0.a(r1, r2)
            return
    }

    @Override
    public void a(int r3, int r4, int r5, java.io.File r6) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Enter onDownloadPackage, status: "
            r0.append(r1)
            java.lang.String r1 = com.huawei.hms.availableupdate.i.a(r3)
            r0.append(r1)
            java.lang.String r1 = ", reveived: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = ", total: "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "UpdateWizard"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            r0 = 2000(0x7d0, float:2.803E-42)
            if (r3 == r0) goto L6a
            r6 = 2100(0x834, float:2.943E-42)
            if (r3 == r6) goto L4c
            r4 = 2101(0x835, float:2.944E-42)
            if (r3 == r4) goto L86
            switch(r3) {
                case 2201: goto L46;
                case 2202: goto L40;
                case 2203: goto L3a;
                case 2204: goto L3a;
                default: goto L39;
            }
        L39:
            goto L86
        L3a:
            java.lang.Class<com.huawei.hms.availableupdate.f0> r3 = com.huawei.hms.availableupdate.f0.class
            r2.a(r3)
            goto L86
        L40:
            java.lang.Class<com.huawei.hms.availableupdate.w> r3 = com.huawei.hms.availableupdate.w.class
            r2.a(r3)
            goto L86
        L46:
            java.lang.Class<com.huawei.hms.availableupdate.e0> r3 = com.huawei.hms.availableupdate.e0.class
            r2.a(r3)
            goto L86
        L4c:
            com.huawei.hms.availableupdate.q r3 = r2.d
            if (r3 == 0) goto L86
            boolean r3 = r3 instanceof com.huawei.hms.availableupdate.y
            if (r3 == 0) goto L86
            r3 = 0
            if (r4 < 0) goto L60
            if (r5 <= 0) goto L60
            long r3 = (long) r4
            r0 = 100
            long r3 = r3 * r0
            long r5 = (long) r5
            long r3 = r3 / r5
            int r3 = (int) r3
        L60:
            r2.l = r3
            com.huawei.hms.availableupdate.q r4 = r2.d
            com.huawei.hms.availableupdate.y r4 = (com.huawei.hms.availableupdate.y) r4
            r4.b(r3)
            goto L86
        L6a:
            r2.a()
            if (r6 != 0) goto L73
            r2.e()
            goto L86
        L73:
            com.huawei.hms.availableupdate.h r3 = r2.k
            java.lang.String r3 = r3.e
            boolean r3 = com.huawei.hms.utils.FileUtil.verifyHash(r3, r6)
            if (r3 == 0) goto L81
            r2.a(r6)
            goto L86
        L81:
            java.lang.String r3 = "Hash value mismatch for download file"
            com.huawei.hms.support.log.HMSLog.i(r1, r3)
        L86:
            return
    }

    @Override
    public void a(int r3, com.huawei.hms.availableupdate.h r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Enter onCheckUpdate, status: "
            r0.append(r1)
            java.lang.String r1 = com.huawei.hms.availableupdate.i.a(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "UpdateWizard"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            r0 = 1000(0x3e8, float:1.401E-42)
            if (r3 == r0) goto L2d
            switch(r3) {
                case 1201: goto L27;
                case 1202: goto L27;
                case 1203: goto L27;
                default: goto L21;
            }
        L21:
            java.lang.Class<com.huawei.hms.availableupdate.d0> r3 = com.huawei.hms.availableupdate.d0.class
            r2.a(r3)
            goto L32
        L27:
            java.lang.Class<com.huawei.hms.availableupdate.d0> r3 = com.huawei.hms.availableupdate.d0.class
            r2.a(r3)
            goto L32
        L2d:
            r2.k = r4
            r2.d()
        L32:
            return
    }

    public final void a(android.content.Intent r10, com.huawei.hms.availableupdate.g r11) {
            r9 = this;
            java.lang.String r0 = "UpdateWizard"
            r1 = 1201(0x4b1, float:1.683E-42)
            r2 = 0
            java.lang.String r3 = "status"
            r4 = -99
            int r3 = r10.getIntExtra(r3, r4)     // Catch: java.lang.Exception -> Ld5
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld5
            r4.<init>()     // Catch: java.lang.Exception -> Ld5
            java.lang.String r5 = "CheckUpdateCallBack status is "
            r4.append(r5)     // Catch: java.lang.Exception -> Ld5
            r4.append(r3)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> Ld5
            com.huawei.hms.support.log.HMSLog.i(r0, r4)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r4 = "failreason"
            java.lang.String r4 = r10.getStringExtra(r4)
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 != 0) goto L41
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "checkTargetAppUpdate reason is "
            r5.append(r6)
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.huawei.hms.support.log.HMSLog.e(r0, r4)
        L41:
            r4 = 7
            if (r3 != r4) goto Lc8
            java.lang.String r3 = "updatesdk_update_info"
            java.io.Serializable r10 = r10.getSerializableExtra(r3)
            boolean r3 = r10 instanceof com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo
            if (r3 == 0) goto Ld4
            com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r10 = (com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo) r10
            java.lang.String r4 = r10.getPackage_()
            int r5 = r10.getVersionCode_()
            java.lang.String r6 = r10.getDownurl_()
            int r7 = r10.getSize_()
            java.lang.String r8 = r10.getSha256_()
            boolean r10 = android.text.TextUtils.isEmpty(r4)
            if (r10 != 0) goto Lc4
            com.huawei.hms.update.ui.UpdateBean r10 = r9.c
            java.lang.String r10 = r10.b()
            boolean r10 = r4.equals(r10)
            if (r10 != 0) goto L77
            goto Lc4
        L77:
            com.huawei.hms.update.ui.UpdateBean r10 = r9.c
            int r10 = r10.c()
            if (r5 >= r10) goto La7
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r1 = "CheckUpdateCallBack versionCode is "
            r10.append(r1)
            r10.append(r5)
            java.lang.String r1 = "bean.getClientVersionCode() is "
            r10.append(r1)
            com.huawei.hms.update.ui.UpdateBean r1 = r9.c
            int r1 = r1.c()
            r10.append(r1)
            java.lang.String r10 = r10.toString()
            com.huawei.hms.support.log.HMSLog.e(r0, r10)
            r10 = 1203(0x4b3, float:1.686E-42)
            a(r11, r10, r2)
            return
        La7:
            boolean r10 = android.text.TextUtils.isEmpty(r6)
            if (r10 != 0) goto Lc0
            boolean r10 = android.text.TextUtils.isEmpty(r8)
            if (r10 == 0) goto Lb4
            goto Lc0
        Lb4:
            com.huawei.hms.availableupdate.h r10 = new com.huawei.hms.availableupdate.h
            r3 = r10
            r3.<init>(r4, r5, r6, r7, r8)
            r0 = 1000(0x3e8, float:1.401E-42)
            a(r11, r0, r10)
            goto Ld4
        Lc0:
            a(r11, r1, r2)
            return
        Lc4:
            a(r11, r1, r2)
            return
        Lc8:
            r10 = 3
            if (r3 != r10) goto Ld1
            r10 = 1202(0x4b2, float:1.684E-42)
            a(r11, r10, r2)
            goto Ld4
        Ld1:
            a(r11, r1, r2)
        Ld4:
            return
        Ld5:
            r10 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "intent has some error"
            r3.append(r4)
            java.lang.String r10 = r10.getMessage()
            r3.append(r10)
            java.lang.String r10 = r3.toString()
            com.huawei.hms.support.log.HMSLog.e(r0, r10)
            a(r11, r1, r2)
            return
    }

    public final void a(com.huawei.hms.availableupdate.g r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            android.app.Activity r0 = r3.b()
            if (r0 == 0) goto L26
            boolean r1 = r0.isFinishing()
            if (r1 == 0) goto L10
            goto L26
        L10:
            boolean r1 = r3.a(r0)
            if (r1 != 0) goto L17
            return
        L17:
            com.huawei.hms.update.ui.UpdateBean r1 = r3.c
            java.lang.String r1 = r1.b()
            com.huawei.hms.availableupdate.h0$b r2 = new com.huawei.hms.availableupdate.h0$b
            r2.<init>(r3, r4)
            com.huawei.updatesdk.UpdateSdkAPI.checkTargetAppUpdate(r0, r1, r2)
            return
        L26:
            r0 = 1201(0x4b1, float:1.683E-42)
            r1 = 0
            a(r4, r0, r1)
            return
    }

    @Override
    public void a(com.huawei.hms.availableupdate.q r3) {
            r2 = this;
            java.lang.String r0 = "UpdateWizard"
            java.lang.String r1 = "Enter onCancel."
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            boolean r0 = r3 instanceof com.huawei.hms.availableupdate.a0
            if (r0 == 0) goto Lf
            r2.g()
            goto L47
        Lf:
            boolean r0 = r3 instanceof com.huawei.hms.availableupdate.s
            if (r0 == 0) goto L1a
            r2.c()
            r2.g()
            goto L47
        L1a:
            boolean r0 = r3 instanceof com.huawei.hms.availableupdate.y
            if (r0 == 0) goto L27
            r2.c()
            java.lang.Class<com.huawei.hms.availableupdate.x> r3 = com.huawei.hms.availableupdate.x.class
            r2.a(r3)
            goto L47
        L27:
            boolean r0 = r3 instanceof com.huawei.hms.availableupdate.x
            if (r0 == 0) goto L34
            java.lang.Class<com.huawei.hms.availableupdate.y> r3 = com.huawei.hms.availableupdate.y.class
            r2.a(r3)
            r2.f()
            goto L47
        L34:
            boolean r0 = r3 instanceof com.huawei.hms.availableupdate.w
            if (r0 == 0) goto L3c
            r2.g()
            goto L47
        L3c:
            boolean r3 = r3 instanceof com.huawei.hms.availableupdate.v
            if (r3 == 0) goto L44
            r2.g()
            goto L47
        L44:
            r2.e()
        L47:
            return
    }

    public final void a(java.io.File r5) {
            r4 = this;
            android.app.Activity r0 = r4.b()
            if (r0 == 0) goto L5f
            boolean r1 = r0.isFinishing()
            if (r1 == 0) goto Ld
            goto L5f
        Ld:
            android.net.Uri r5 = a(r0, r5)
            java.lang.String r1 = "UpdateWizard"
            if (r5 != 0) goto L1e
            java.lang.String r5 = "In startInstaller, Failed to creates a Uri from a file."
            com.huawei.hms.support.log.HMSLog.e(r1, r5)
            r4.e()
            return
        L1e:
            boolean r2 = r4.a(r0)
            if (r2 != 0) goto L25
            return
        L25:
            android.content.Intent r2 = new android.content.Intent
            java.lang.String r3 = "android.intent.action.VIEW"
            r2.<init>(r3)
            java.lang.String r3 = "application/vnd.android.package-archive"
            r2.setDataAndType(r5, r3)
            r5 = 3
            r2.setFlags(r5)
            r5 = 1
            java.lang.String r3 = "android.intent.extra.NOT_UNKNOWN_SOURCE"
            r2.putExtra(r3, r5)
            int r5 = r4.getRequestCode()     // Catch: android.content.ActivityNotFoundException -> L43
            r0.startActivityForResult(r2, r5)     // Catch: android.content.ActivityNotFoundException -> L43
            goto L5f
        L43:
            r5 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "In startInstaller, Failed to start package installer."
            r0.append(r2)
            java.lang.String r5 = r5.getMessage()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.huawei.hms.support.log.HMSLog.e(r1, r5)
            r4.e()
        L5f:
            return
    }

    @Override
    public void a(java.lang.Class<? extends com.huawei.hms.availableupdate.q> r3) {
            r2 = this;
            android.app.Activity r0 = r2.b()
            boolean r0 = r2.a(r0)
            if (r0 != 0) goto Lb
            return
        Lb:
            r2.a()
            java.lang.Object r3 = r3.newInstance()     // Catch: java.lang.IllegalStateException -> L46 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4a
            com.huawei.hms.availableupdate.q r3 = (com.huawei.hms.availableupdate.q) r3     // Catch: java.lang.IllegalStateException -> L46 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4a
            java.lang.String r0 = r2.h     // Catch: java.lang.IllegalStateException -> L46 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4a
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.IllegalStateException -> L46 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4a
            if (r0 != 0) goto L30
            boolean r0 = r3 instanceof com.huawei.hms.availableupdate.a0     // Catch: java.lang.IllegalStateException -> L46 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4a
            if (r0 == 0) goto L30
            java.lang.String r0 = "hms_update_title"
            java.lang.String r0 = com.huawei.hms.utils.ResourceLoaderUtil.getString(r0)     // Catch: java.lang.IllegalStateException -> L46 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4a
            r2.h = r0     // Catch: java.lang.IllegalStateException -> L46 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4a
            r0 = r3
            com.huawei.hms.availableupdate.a0 r0 = (com.huawei.hms.availableupdate.a0) r0     // Catch: java.lang.IllegalStateException -> L46 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4a
            java.lang.String r1 = r2.h     // Catch: java.lang.IllegalStateException -> L46 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4a
            r0.a(r1)     // Catch: java.lang.IllegalStateException -> L46 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4a
        L30:
            int r0 = r2.l     // Catch: java.lang.IllegalStateException -> L46 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4a
            if (r0 <= 0) goto L40
            boolean r0 = r3 instanceof com.huawei.hms.availableupdate.y     // Catch: java.lang.IllegalStateException -> L46 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4a
            if (r0 == 0) goto L40
            r0 = r3
            com.huawei.hms.availableupdate.y r0 = (com.huawei.hms.availableupdate.y) r0     // Catch: java.lang.IllegalStateException -> L46 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4a
            int r1 = r2.l     // Catch: java.lang.IllegalStateException -> L46 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4a
            r0.a(r1)     // Catch: java.lang.IllegalStateException -> L46 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4a
        L40:
            r3.a(r2)     // Catch: java.lang.IllegalStateException -> L46 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4a
            r2.d = r3     // Catch: java.lang.IllegalStateException -> L46 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4a
            goto L65
        L46:
            r3 = move-exception
            goto L4b
        L48:
            r3 = move-exception
            goto L4b
        L4a:
            r3 = move-exception
        L4b:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "In showDialog, Failed to show the dialog."
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "UpdateWizard"
            com.huawei.hms.support.log.HMSLog.e(r0, r3)
        L65:
            return
    }

    public final boolean a(android.app.Activity r2) {
            r1 = this;
            com.huawei.hms.utils.HMSPackageManager r2 = com.huawei.hms.utils.HMSPackageManager.getInstance(r2)
            com.huawei.hms.update.ui.UpdateBean r0 = r1.c
            int r0 = r0.c()
            boolean r2 = r2.isApkUpdateNecessary(r0)
            if (r2 == 0) goto L12
            r2 = 1
            return r2
        L12:
            r1.a()
            com.huawei.hms.adapter.sysobs.SystemManager r2 = com.huawei.hms.adapter.sysobs.SystemManager.getInstance()
            r0 = 0
            r2.notifyUpdateResult(r0)
            return r0
    }

    @Override
    public void b(com.huawei.hms.availableupdate.q r3) {
            r2 = this;
            java.lang.String r0 = "UpdateWizard"
            java.lang.String r1 = "Enter onDoWork."
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            boolean r0 = r3 instanceof com.huawei.hms.availableupdate.a0
            if (r0 == 0) goto L17
            r3.b()
            java.lang.Class<com.huawei.hms.availableupdate.s> r3 = com.huawei.hms.availableupdate.s.class
            r2.a(r3)
            r2.a(r2)
            goto L53
        L17:
            boolean r0 = r3 instanceof com.huawei.hms.availableupdate.x
            if (r0 == 0) goto L22
            r3.b()
            r2.g()
            goto L53
        L22:
            boolean r0 = r3 instanceof com.huawei.hms.availableupdate.w
            if (r0 == 0) goto L2f
            java.lang.Class<com.huawei.hms.availableupdate.y> r3 = com.huawei.hms.availableupdate.y.class
            r2.a(r3)
            r2.f()
            goto L53
        L2f:
            boolean r0 = r3 instanceof com.huawei.hms.availableupdate.v
            if (r0 == 0) goto L3c
            java.lang.Class<com.huawei.hms.availableupdate.y> r3 = com.huawei.hms.availableupdate.y.class
            r2.a(r3)
            r2.f()
            goto L53
        L3c:
            boolean r0 = r3 instanceof com.huawei.hms.availableupdate.d0
            if (r0 == 0) goto L44
            r2.e()
            goto L53
        L44:
            boolean r0 = r3 instanceof com.huawei.hms.availableupdate.e0
            if (r0 == 0) goto L4c
            r2.e()
            goto L53
        L4c:
            boolean r3 = r3 instanceof com.huawei.hms.availableupdate.f0
            if (r3 == 0) goto L53
            r2.e()
        L53:
            return
    }

    public final void c() {
            r1 = this;
            com.huawei.hms.availableupdate.f r0 = r1.j
            if (r0 == 0) goto La
            r0.a()
            r0 = 0
            r1.j = r0
        La:
            return
    }

    public final void d() {
            r3 = this;
            android.app.Activity r0 = r3.b()
            if (r0 == 0) goto Lf
            android.content.Context r0 = r0.getBaseContext()
            java.lang.String r0 = com.huawei.hms.android.SystemUtils.getNetType(r0)
            goto L11
        Lf:
            java.lang.String r0 = ""
        L11:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "current network is "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "UpdateWizard"
            com.huawei.hms.support.log.HMSLog.i(r2, r1)
            java.lang.String r1 = "WIFI"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L3d
            java.lang.Class<com.huawei.hms.availableupdate.y> r0 = com.huawei.hms.availableupdate.y.class
            r3.a(r0)
            r3.f()
            java.lang.String r0 = "current network is wifi"
            com.huawei.hms.support.log.HMSLog.i(r2, r0)
            goto L47
        L3d:
            java.lang.Class<com.huawei.hms.availableupdate.v> r0 = com.huawei.hms.availableupdate.v.class
            r3.a(r0)
            java.lang.String r0 = "current network is not wifi"
            com.huawei.hms.support.log.HMSLog.i(r2, r0)
        L47:
            return
    }

    public final void e() {
            r2 = this;
            r0 = 0
            boolean r0 = r2.a(r0)
            r1 = 8
            if (r0 != 0) goto Lf
            int r0 = r2.f
            r2.c(r1, r0)
            goto L14
        Lf:
            int r0 = r2.f
            r2.a(r1, r0)
        L14:
            return
    }

    public final void f() {
            r3 = this;
            android.app.Activity r0 = r3.b()
            if (r0 == 0) goto L29
            boolean r1 = r0.isFinishing()
            if (r1 == 0) goto Ld
            goto L29
        Ld:
            boolean r1 = r3.a(r0)
            if (r1 != 0) goto L14
            return
        L14:
            r3.c()
            com.huawei.hms.availableupdate.d r1 = new com.huawei.hms.availableupdate.d
            com.huawei.hms.availableupdate.e r2 = new com.huawei.hms.availableupdate.e
            r2.<init>(r0)
            r1.<init>(r2)
            r3.j = r1
            com.huawei.hms.availableupdate.h r0 = r3.k
            r1.a(r3, r0)
            return
        L29:
            java.lang.Class<com.huawei.hms.availableupdate.e0> r0 = com.huawei.hms.availableupdate.e0.class
            r3.a(r0)
            return
    }

    public void g() {
            r2 = this;
            int r0 = r2.f
            r1 = 13
            r2.c(r1, r0)
            return
    }

    @Override
    public int getRequestCode() {
            r1 = this;
            r0 = 2006(0x7d6, float:2.811E-42)
            return r0
    }

    @Override
    public void onBridgeActivityCreate(android.app.Activity r2) {
            r1 = this;
            super.onBridgeActivityCreate(r2)
            com.huawei.hms.update.ui.UpdateBean r0 = r1.c
            if (r0 != 0) goto L8
            return
        L8:
            r0 = 6
            r1.f = r0
            boolean r2 = r1.a(r2)
            if (r2 != 0) goto L12
            return
        L12:
            com.huawei.hms.update.ui.UpdateBean r2 = r1.c
            boolean r2 = r2.isNeedConfirm()
            if (r2 == 0) goto L28
            java.lang.String r2 = r1.h
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L28
            java.lang.Class<com.huawei.hms.availableupdate.a0> r2 = com.huawei.hms.availableupdate.a0.class
            r1.a(r2)
            goto L30
        L28:
            java.lang.Class<com.huawei.hms.availableupdate.s> r2 = com.huawei.hms.availableupdate.s.class
            r1.a(r2)
            r1.a(r1)
        L30:
            return
    }

    @Override
    public void onBridgeActivityDestroy() {
            r0 = this;
            r0.c()
            super.onBridgeActivityDestroy()
            return
    }

    @Override
    public boolean onBridgeActivityResult(int r2, int r3, android.content.Intent r4) {
            r1 = this;
            boolean r0 = r1.e
            if (r0 == 0) goto Ld
            com.huawei.hms.activity.IBridgeActivityDelegate r0 = r1.b
            if (r0 == 0) goto Ld
            boolean r2 = r0.onBridgeActivityResult(r2, r3, r4)
            return r2
        Ld:
            int r3 = r1.f
            r4 = 6
            r0 = 0
            if (r3 != r4) goto L2e
            int r3 = r1.getRequestCode()
            if (r2 != r3) goto L2e
            java.lang.String r2 = r1.g
            int r3 = r1.i
            boolean r2 = r1.a(r2, r3)
            if (r2 == 0) goto L29
            int r2 = r1.f
            r1.c(r0, r2)
            goto L2c
        L29:
            r1.e()
        L2c:
            r2 = 1
            return r2
        L2e:
            return r0
    }

    @Override
    public void onKeyUp(int r2, android.view.KeyEvent r3) {
            r1 = this;
            boolean r0 = r1.e
            if (r0 == 0) goto Lc
            com.huawei.hms.activity.IBridgeActivityDelegate r0 = r1.b
            if (r0 == 0) goto Lc
            r0.onKeyUp(r2, r3)
            return
        Lc:
            r3 = 4
            if (r3 != r2) goto L2a
            java.lang.String r2 = "UpdateWizard"
            java.lang.String r3 = "In onKeyUp, Call finish."
            com.huawei.hms.support.log.HMSLog.i(r2, r3)
            android.app.Activity r2 = r1.b()
            if (r2 == 0) goto L2a
            boolean r3 = r2.isFinishing()
            if (r3 != 0) goto L2a
            r3 = 0
            r0 = 0
            r2.setResult(r3, r0)
            r2.finish()
        L2a:
            return
    }
}
