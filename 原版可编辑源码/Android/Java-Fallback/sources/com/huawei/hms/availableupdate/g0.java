package com.huawei.hms.availableupdate;

public class g0 extends com.huawei.hms.availableupdate.p {
    public android.content.BroadcastReceiver j;
    public android.os.Handler k;
    public int l;
    public android.os.Handler m;

    public class a extends android.os.Handler {
        public final com.huawei.hms.availableupdate.g0 a;

        public a(com.huawei.hms.availableupdate.g0 r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void handleMessage(android.os.Message r3) {
                r2 = this;
                java.lang.Object r0 = r3.obj
                android.os.Bundle r0 = (android.os.Bundle) r0
                com.huawei.hms.ui.SafeBundle r1 = new com.huawei.hms.ui.SafeBundle
                r1.<init>(r0)
                int r3 = r3.what
                switch(r3) {
                    case 101: goto L1b;
                    case 102: goto L15;
                    case 103: goto Lf;
                    default: goto Le;
                }
            Le:
                goto L20
            Lf:
                com.huawei.hms.availableupdate.g0 r3 = r2.a
                com.huawei.hms.availableupdate.g0.c(r3, r1)
                goto L20
            L15:
                com.huawei.hms.availableupdate.g0 r3 = r2.a
                com.huawei.hms.availableupdate.g0.b(r3, r1)
                goto L20
            L1b:
                com.huawei.hms.availableupdate.g0 r3 = r2.a
                com.huawei.hms.availableupdate.g0.a(r3, r1)
            L20:
                return
        }
    }

    public class b implements java.lang.Runnable {
        public final com.huawei.hms.availableupdate.g0 a;

        public b(com.huawei.hms.availableupdate.g0 r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        public b(com.huawei.hms.availableupdate.g0 r1, com.huawei.hms.availableupdate.g0.a r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void run() {
                r2 = this;
                com.huawei.hms.availableupdate.g0 r0 = r2.a
                r1 = 14
                com.huawei.hms.availableupdate.g0.a(r0, r1)
                return
        }
    }

    public g0() {
            r1 = this;
            r1.<init>()
            android.os.Handler r0 = new android.os.Handler
            r0.<init>()
            r1.k = r0
            r0 = 0
            r1.l = r0
            com.huawei.hms.availableupdate.g0$a r0 = new com.huawei.hms.availableupdate.g0$a
            r0.<init>(r1)
            r1.m = r0
            return
    }

    public static void a(com.huawei.hms.availableupdate.g0 r0, int r1) {
            r0.c(r1)
            return
    }

    public static void a(com.huawei.hms.availableupdate.g0 r0, com.huawei.hms.ui.SafeBundle r1) {
            r0.a(r1)
            return
    }

    public static void b(com.huawei.hms.availableupdate.g0 r0, com.huawei.hms.ui.SafeBundle r1) {
            r0.b(r1)
            return
    }

    public static void c(com.huawei.hms.availableupdate.g0 r0, com.huawei.hms.ui.SafeBundle r1) {
            r0.c(r1)
            return
    }

    public final void a(com.huawei.hms.ui.SafeBundle r3) {
            r2 = this;
            java.lang.String r0 = "UpgradePkgName"
            boolean r1 = r3.containsKey(r0)
            if (r1 == 0) goto Ld
            java.lang.String r0 = r3.getString(r0)
            goto Le
        Ld:
            r0 = 0
        Le:
            if (r0 == 0) goto L5c
            java.lang.String r1 = r2.g
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L19
            goto L5c
        L19:
            java.lang.String r0 = "downloadtask.status"
            boolean r1 = r3.containsKey(r0)
            if (r1 == 0) goto L5c
            int r3 = r3.getInt(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "handleDownloadStatus-status is "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "SilentUpdateWizard"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            r0 = 3
            if (r3 == r0) goto L59
            r0 = 5
            if (r3 == r0) goto L59
            r0 = 6
            if (r3 == r0) goto L59
            r0 = 8
            if (r3 != r0) goto L49
            goto L59
        L49:
            r0 = 4
            if (r3 != r0) goto L53
            r3 = 60000(0xea60, float:8.4078E-41)
            r2.b(r3)
            goto L5c
        L53:
            r3 = 20000(0x4e20, float:2.8026E-41)
            r2.b(r3)
            goto L5c
        L59:
            r2.c(r3)
        L5c:
            return
    }

    @Override
    public void a(java.lang.Class<? extends com.huawei.hms.availableupdate.q> r3) {
            r2 = this;
            java.lang.Object r3 = r3.newInstance()     // Catch: java.lang.IllegalStateException -> L1c java.lang.IllegalAccessException -> L1e java.lang.InstantiationException -> L20
            com.huawei.hms.availableupdate.q r3 = (com.huawei.hms.availableupdate.q) r3     // Catch: java.lang.IllegalStateException -> L1c java.lang.IllegalAccessException -> L1e java.lang.InstantiationException -> L20
            int r0 = r2.l     // Catch: java.lang.IllegalStateException -> L1c java.lang.IllegalAccessException -> L1e java.lang.InstantiationException -> L20
            if (r0 <= 0) goto L16
            boolean r0 = r3 instanceof com.huawei.hms.availableupdate.y     // Catch: java.lang.IllegalStateException -> L1c java.lang.IllegalAccessException -> L1e java.lang.InstantiationException -> L20
            if (r0 == 0) goto L16
            r0 = r3
            com.huawei.hms.availableupdate.y r0 = (com.huawei.hms.availableupdate.y) r0     // Catch: java.lang.IllegalStateException -> L1c java.lang.IllegalAccessException -> L1e java.lang.InstantiationException -> L20
            int r1 = r2.l     // Catch: java.lang.IllegalStateException -> L1c java.lang.IllegalAccessException -> L1e java.lang.InstantiationException -> L20
            r0.a(r1)     // Catch: java.lang.IllegalStateException -> L1c java.lang.IllegalAccessException -> L1e java.lang.InstantiationException -> L20
        L16:
            r3.a(r2)     // Catch: java.lang.IllegalStateException -> L1c java.lang.IllegalAccessException -> L1e java.lang.InstantiationException -> L20
            r2.d = r3     // Catch: java.lang.IllegalStateException -> L1c java.lang.IllegalAccessException -> L1e java.lang.InstantiationException -> L20
            goto L3b
        L1c:
            r3 = move-exception
            goto L21
        L1e:
            r3 = move-exception
            goto L21
        L20:
            r3 = move-exception
        L21:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "In showDialog, Failed to show the dialog."
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "SilentUpdateWizard"
            com.huawei.hms.support.log.HMSLog.e(r0, r3)
        L3b:
            return
    }

    public final boolean a(android.app.Activity r8) {
            r7 = this;
            java.lang.String r0 = "SilentUpdateWizard"
            java.lang.String r1 = r7.g
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            r2 = 0
            if (r1 == 0) goto Lc
            return r2
        Lc:
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r3 = "com.huawei.appmarket.intent.action.ThirdUpdateAction"
            r1.<init>(r3)
            java.lang.String r3 = "com.huawei.appmarket"
            r1.setPackage(r3)
            org.json.JSONArray r3 = new org.json.JSONArray
            r3.<init>()
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
            java.lang.String r5 = "pkgName"
            java.lang.String r6 = r7.g     // Catch: org.json.JSONException -> L87
            r4.put(r5, r6)     // Catch: org.json.JSONException -> L87
            java.lang.String r5 = "versioncode"
            int r6 = r7.i     // Catch: org.json.JSONException -> L87
            r4.put(r5, r6)     // Catch: org.json.JSONException -> L87
            r3.put(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "params"
            r1.putExtra(r4, r3)
            com.huawei.hms.update.ui.UpdateBean r3 = r7.c
            boolean r3 = r3.d()
            java.lang.String r4 = "isHmsOrApkUpgrade"
            r1.putExtra(r4, r3)
            java.lang.String r3 = "hms_install"
            java.lang.String r3 = com.huawei.hms.utils.ResourceLoaderUtil.getString(r3)
            java.lang.String r4 = "buttonDlgY"
            r1.putExtra(r4, r3)
            java.lang.String r3 = "hms_cancel"
            java.lang.String r3 = com.huawei.hms.utils.ResourceLoaderUtil.getString(r3)
            java.lang.String r4 = "buttonDlgN"
            r1.putExtra(r4, r3)
            r3 = 1
            java.lang.Object[] r4 = new java.lang.Object[r3]
            java.lang.String r5 = "%P"
            r4[r2] = r5
            java.lang.String r5 = "hms_update_message_new"
            java.lang.String r4 = com.huawei.hms.utils.ResourceLoaderUtil.getString(r5, r4)
            java.lang.String r5 = "upgradeDlgContent"
            r1.putExtra(r5, r4)
            java.lang.String r4 = "start silent activity of AppMarket"
            com.huawei.hms.support.log.HMSLog.i(r0, r4)     // Catch: android.content.ActivityNotFoundException -> L81
            int r4 = r7.getRequestCode()     // Catch: android.content.ActivityNotFoundException -> L81
            r8.startActivityForResult(r1, r4)     // Catch: android.content.ActivityNotFoundException -> L81
            java.lang.String r8 = "start silent activity finished"
            com.huawei.hms.support.log.HMSLog.i(r0, r8)
            return r3
        L81:
            java.lang.String r8 = "ActivityNotFoundException"
            com.huawei.hms.support.log.HMSLog.e(r0, r8)
            return r2
        L87:
            r8 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "create hmsJsonObject fail"
            r1.append(r3)
            java.lang.String r8 = r8.getMessage()
            r1.append(r8)
            java.lang.String r8 = r1.toString()
            com.huawei.hms.support.log.HMSLog.e(r0, r8)
            return r2
    }

    public final void b(int r6) {
            r5 = this;
            android.os.Handler r0 = r5.k
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            android.os.Handler r0 = r5.k
            com.huawei.hms.availableupdate.g0$b r2 = new com.huawei.hms.availableupdate.g0$b
            r2.<init>(r5, r1)
            long r3 = (long) r6
            r0.postDelayed(r2, r3)
            return
    }

    public final void b(com.huawei.hms.ui.SafeBundle r3) {
            r2 = this;
            java.lang.String r0 = "UpgradePkgName"
            boolean r1 = r3.containsKey(r0)
            if (r1 == 0) goto Ld
            java.lang.String r0 = r3.getString(r0)
            goto Le
        Ld:
            r0 = 0
        Le:
            if (r0 == 0) goto L61
            java.lang.String r1 = r2.g
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L19
            goto L61
        L19:
            java.lang.String r0 = "UpgradeDownloadProgress"
            boolean r1 = r3.containsKey(r0)
            if (r1 == 0) goto L61
            java.lang.String r1 = "UpgradeAppName"
            boolean r1 = r3.containsKey(r1)
            if (r1 == 0) goto L61
            int r3 = r3.getInt(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "handlerDownloadProgress-progress is "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "SilentUpdateWizard"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            r0 = 20000(0x4e20, float:2.8026E-41)
            r2.b(r0)
            r0 = 99
            if (r3 < r0) goto L4d
            r3 = r0
        L4d:
            r2.l = r3
            com.huawei.hms.availableupdate.q r0 = r2.d
            if (r0 != 0) goto L58
            java.lang.Class<com.huawei.hms.availableupdate.y> r0 = com.huawei.hms.availableupdate.y.class
            r2.a(r0)
        L58:
            com.huawei.hms.availableupdate.q r0 = r2.d
            if (r0 == 0) goto L61
            com.huawei.hms.availableupdate.y r0 = (com.huawei.hms.availableupdate.y) r0
            r0.b(r3)
        L61:
            return
    }

    public final void c() {
            r3 = this;
            android.content.IntentFilter r0 = new android.content.IntentFilter
            r0.<init>()
            java.lang.String r1 = "com.huawei.appmarket.service.downloadservice.Receiver"
            r0.addAction(r1)
            java.lang.String r1 = "com.huawei.appmarket.service.downloadservice.progress.Receiver"
            r0.addAction(r1)
            java.lang.String r1 = "com.huawei.appmarket.service.installerservice.Receiver"
            r0.addAction(r1)
            com.huawei.hms.availableupdate.o r1 = new com.huawei.hms.availableupdate.o
            android.os.Handler r2 = r3.m
            r1.<init>(r2)
            r3.j = r1
            android.app.Activity r1 = r3.b()
            if (r1 == 0) goto L28
            android.content.BroadcastReceiver r2 = r3.j
            r1.registerReceiver(r2, r0)
        L28:
            return
    }

    public final void c(int r3) {
            r2 = this;
            android.os.Handler r0 = r2.k
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            r2.d()
            r2.a()
            r0 = 0
            boolean r0 = r2.a(r0)
            if (r0 != 0) goto L19
            int r0 = r2.f
            r2.c(r3, r0)
            goto L1e
        L19:
            int r0 = r2.f
            r2.a(r3, r0)
        L1e:
            return
    }

    public final void c(com.huawei.hms.ui.SafeBundle r4) {
            r3 = this;
            java.lang.String r0 = "packagename"
            boolean r1 = r4.containsKey(r0)
            if (r1 == 0) goto L66
            java.lang.String r1 = "status"
            boolean r2 = r4.containsKey(r1)
            if (r2 == 0) goto L66
            java.lang.String r0 = r4.getString(r0)
            int r4 = r4.getInt(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "handlerInstallStatus-status is "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "SilentUpdateWizard"
            com.huawei.hms.support.log.HMSLog.i(r2, r1)
            if (r0 == 0) goto L66
            java.lang.String r1 = r3.g
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L39
            goto L66
        L39:
            r0 = 2
            if (r4 != r0) goto L54
            android.os.Handler r4 = r3.k
            r0 = 0
            r4.removeCallbacksAndMessages(r0)
            com.huawei.hms.availableupdate.q r4 = r3.d
            if (r4 == 0) goto L4d
            com.huawei.hms.availableupdate.y r4 = (com.huawei.hms.availableupdate.y) r4
            r0 = 100
            r4.b(r0)
        L4d:
            int r4 = r3.f
            r0 = 0
            r3.c(r0, r4)
            goto L66
        L54:
            r0 = -1
            if (r4 == r0) goto L62
            r0 = -2
            if (r4 != r0) goto L5b
            goto L62
        L5b:
            r4 = 60000(0xea60, float:8.4078E-41)
            r3.b(r4)
            goto L66
        L62:
            r3.c(r4)
        L66:
            return
    }

    public final void d() {
            r2 = this;
            android.app.Activity r0 = r2.b()
            if (r0 == 0) goto L10
            android.content.BroadcastReceiver r1 = r2.j
            if (r1 == 0) goto L10
            r0.unregisterReceiver(r1)
            r0 = 0
            r2.j = r0
        L10:
            return
    }

    public void e() {
            r2 = this;
            int r0 = r2.f
            r1 = 13
            r2.c(r1, r0)
            return
    }

    @Override
    public int getRequestCode() {
            r1 = this;
            r0 = 2000(0x7d0, float:2.803E-42)
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
            r0 = 0
            r1.f = r0
            boolean r2 = r1.a(r2)
            if (r2 != 0) goto L25
            r2 = 1
            boolean r2 = r1.a(r2)
            r0 = 8
            if (r2 != 0) goto L20
            int r2 = r1.f
            r1.c(r0, r2)
            goto L25
        L20:
            int r2 = r1.f
            r1.a(r0, r2)
        L25:
            return
    }

    @Override
    public void onBridgeActivityDestroy() {
            r2 = this;
            android.os.Handler r0 = r2.k
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            r2.d()
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
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "onBridgeActivityResult requestCode is "
            r4.append(r0)
            r4.append(r2)
            java.lang.String r0 = "resultCode is "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            java.lang.String r0 = "SilentUpdateWizard"
            com.huawei.hms.support.log.HMSLog.i(r0, r4)
            int r4 = r1.getRequestCode()
            if (r2 != r4) goto L56
            r2 = 1
            if (r3 != 0) goto L3d
            r1.c()
            r3 = 20000(0x4e20, float:2.8026E-41)
            r1.b(r3)
            return r2
        L3d:
            r4 = 4
            if (r3 != r4) goto L44
            r1.e()
            return r2
        L44:
            boolean r4 = r1.a(r2)
            if (r4 != 0) goto L50
            int r4 = r1.f
            r1.c(r3, r4)
            goto L55
        L50:
            int r4 = r1.f
            r1.a(r3, r4)
        L55:
            return r2
        L56:
            r2 = 0
            return r2
    }

    @Override
    public void onBridgeConfigurationChanged() {
            r0 = this;
            super.onBridgeConfigurationChanged()
            return
    }

    @Override
    public void onKeyUp(int r1, android.view.KeyEvent r2) {
            r0 = this;
            super.onKeyUp(r1, r2)
            return
    }
}
