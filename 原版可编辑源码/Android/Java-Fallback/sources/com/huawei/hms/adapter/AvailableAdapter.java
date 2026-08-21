package com.huawei.hms.adapter;

public class AvailableAdapter {
    public final int a;
    public com.huawei.hms.adapter.AvailableAdapter.AvailableCallBack b;
    public com.huawei.hms.adapter.sysobs.SystemObserver c;

    public interface AvailableCallBack {
        void onComplete(int r1);
    }

    public class a implements com.huawei.hms.adapter.sysobs.SystemObserver {
        public final com.huawei.hms.adapter.AvailableAdapter a;

        public a(com.huawei.hms.adapter.AvailableAdapter r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public boolean onNoticeResult(int r3) {
                r2 = this;
                com.huawei.hms.adapter.AvailableAdapter r0 = r2.a
                com.huawei.hms.adapter.AvailableAdapter$AvailableCallBack r0 = com.huawei.hms.adapter.AvailableAdapter.a(r0)
                r1 = 1
                if (r0 != 0) goto L11
                java.lang.String r3 = "AvailableAdapter"
                java.lang.String r0 = "onNoticeResult baseCallBack null"
                com.huawei.hms.support.log.HMSLog.e(r3, r0)
                return r1
            L11:
                r0.onComplete(r3)
                return r1
        }

        @Override
        public boolean onSolutionResult(android.content.Intent r1, java.lang.String r2) {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public boolean onUpdateResult(int r3) {
                r2 = this;
                com.huawei.hms.adapter.AvailableAdapter r0 = r2.a
                com.huawei.hms.adapter.AvailableAdapter$AvailableCallBack r0 = com.huawei.hms.adapter.AvailableAdapter.a(r0)
                r1 = 1
                if (r0 != 0) goto L11
                java.lang.String r3 = "AvailableAdapter"
                java.lang.String r0 = "onUpdateResult baseCallBack null"
                com.huawei.hms.support.log.HMSLog.e(r3, r0)
                return r1
            L11:
                r0.onComplete(r3)
                return r1
        }
    }

    public AvailableAdapter(int r2) {
            r1 = this;
            r1.<init>()
            com.huawei.hms.adapter.AvailableAdapter$a r0 = new com.huawei.hms.adapter.AvailableAdapter$a
            r0.<init>(r1)
            r1.c = r0
            r1.a = r2
            return
    }

    public static com.huawei.hms.adapter.AvailableAdapter.AvailableCallBack a(com.huawei.hms.adapter.AvailableAdapter r0) {
            com.huawei.hms.adapter.AvailableAdapter$AvailableCallBack r0 = r0.a()
            return r0
    }

    public final com.huawei.hms.adapter.AvailableAdapter.AvailableCallBack a() {
            r1 = this;
            com.huawei.hms.adapter.AvailableAdapter$AvailableCallBack r0 = r1.b
            return r0
    }

    public final boolean a(android.app.Activity r2) {
            r1 = this;
            com.huawei.hms.utils.HMSPackageManager r2 = com.huawei.hms.utils.HMSPackageManager.getInstance(r2)
            int r2 = r2.getHmsVersionCode()
            r0 = 40000000(0x2625a00, float:1.6629686E-37)
            if (r2 < r0) goto L16
            java.lang.String r2 = "AvailableAdapter"
            java.lang.String r0 = "enter 4.0 HmsCore upgrade process"
            com.huawei.hms.support.log.HMSLog.i(r2, r0)
            r2 = 1
            goto L17
        L16:
            r2 = 0
        L17:
            return r2
    }

    public int isHuaweiMobileServicesAvailable(android.content.Context r4) {
            r3 = this;
            java.lang.String r0 = "context must not be null."
            com.huawei.hms.utils.Checker.checkNonNull(r4, r0)
            int r0 = android.os.Build.VERSION.SDK_INT
            java.lang.String r1 = "AvailableAdapter"
            r2 = 16
            if (r0 >= r2) goto L15
            java.lang.String r4 = "HMS can not be supported under android 4.1"
            com.huawei.hms.support.log.HMSLog.i(r1, r4)
            r4 = 21
            return r4
        L15:
            com.huawei.hms.utils.HMSPackageManager r4 = com.huawei.hms.utils.HMSPackageManager.getInstance(r4)
            com.huawei.hms.utils.PackageManagerHelper$PackageStates r0 = r4.getHMSPackageStates()
            com.huawei.hms.utils.PackageManagerHelper$PackageStates r2 = com.huawei.hms.utils.PackageManagerHelper.PackageStates.NOT_INSTALLED
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L2c
            java.lang.String r4 = "HMS is not installed"
            com.huawei.hms.support.log.HMSLog.i(r1, r4)
            r4 = 1
            return r4
        L2c:
            com.huawei.hms.utils.PackageManagerHelper$PackageStates r2 = com.huawei.hms.utils.PackageManagerHelper.PackageStates.SPOOF
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L3c
            java.lang.String r4 = "HMS is spoofed"
            com.huawei.hms.support.log.HMSLog.i(r1, r4)
            r4 = 29
            return r4
        L3c:
            com.huawei.hms.utils.PackageManagerHelper$PackageStates r2 = com.huawei.hms.utils.PackageManagerHelper.PackageStates.DISABLED
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L4b
            java.lang.String r4 = "HMS is disabled"
            com.huawei.hms.support.log.HMSLog.i(r1, r4)
            r4 = 3
            return r4
        L4b:
            int r0 = r3.a
            boolean r4 = r4.isApkUpdateNecessary(r0)
            if (r4 == 0) goto L5a
            java.lang.String r4 = "The current version does not meet the minimum version requirements"
            com.huawei.hms.support.log.HMSLog.i(r1, r4)
            r4 = 2
            return r4
        L5a:
            r4 = 0
            return r4
    }

    public boolean isUserNoticeError(int r2) {
            r1 = this;
            r0 = 29
            if (r2 == r0) goto L6
            r2 = 0
            return r2
        L6:
            r2 = 1
            return r2
    }

    public boolean isUserResolvableError(int r3) {
            r2 = this;
            r0 = 1
            if (r3 == r0) goto L8
            r1 = 2
            if (r3 == r1) goto L8
            r3 = 0
            return r3
        L8:
            return r0
    }

    public void startNotice(android.app.Activity r3, com.huawei.hms.adapter.AvailableAdapter.AvailableCallBack r4) {
            r2 = this;
            if (r3 == 0) goto L35
            if (r4 != 0) goto L5
            goto L35
        L5:
            boolean r0 = com.huawei.hms.utils.UIUtil.isBackground(r3)
            java.lang.String r1 = "AvailableAdapter"
            if (r0 == 0) goto L18
            java.lang.String r3 = "current app is in Background"
            com.huawei.hms.support.log.HMSLog.i(r1, r3)
            r3 = 28
            r4.onComplete(r3)
            return
        L18:
            java.lang.String r0 = "startNotice"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            r2.b = r4
            com.huawei.hms.adapter.sysobs.SystemNotifier r4 = com.huawei.hms.adapter.sysobs.SystemManager.getSystemNotifier()
            com.huawei.hms.adapter.sysobs.SystemObserver r0 = r2.c
            r4.registerObserver(r0)
            java.lang.Class<com.huawei.hms.update.note.AppSpoofResolution> r4 = com.huawei.hms.update.note.AppSpoofResolution.class
            java.lang.String r4 = r4.getName()
            android.content.Intent r4 = com.huawei.hms.activity.BridgeActivity.getIntentStartBridgeActivity(r3, r4)
            r3.startActivity(r4)
        L35:
            return
    }

    public void startResolution(android.app.Activity r3, com.huawei.hms.adapter.AvailableAdapter.AvailableCallBack r4) {
            r2 = this;
            if (r3 == 0) goto L45
            if (r4 != 0) goto L5
            goto L45
        L5:
            boolean r0 = com.huawei.hms.utils.UIUtil.isBackground(r3)
            java.lang.String r1 = "AvailableAdapter"
            if (r0 == 0) goto L18
            java.lang.String r3 = "current app is in Background"
            com.huawei.hms.support.log.HMSLog.i(r1, r3)
            r3 = 28
            r4.onComplete(r3)
            return
        L18:
            java.lang.String r0 = "startResolution"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            r2.b = r4
            com.huawei.hms.adapter.sysobs.SystemNotifier r4 = com.huawei.hms.adapter.sysobs.SystemManager.getSystemNotifier()
            com.huawei.hms.adapter.sysobs.SystemObserver r0 = r2.c
            r4.registerObserver(r0)
            java.lang.Class<com.huawei.hms.adapter.ui.UpdateAdapter> r4 = com.huawei.hms.adapter.ui.UpdateAdapter.class
            java.lang.String r4 = r4.getName()
            android.content.Intent r4 = com.huawei.hms.activity.BridgeActivity.getIntentStartBridgeActivity(r3, r4)
            int r0 = r2.a
            java.lang.String r1 = "update_version"
            r4.putExtra(r1, r0)
            boolean r0 = r2.a(r3)
            java.lang.String r1 = "new_update"
            r4.putExtra(r1, r0)
            r3.startActivity(r4)
        L45:
            return
    }
}
