package com.huawei.hms.update.note;

public class AppSpoofResolution implements com.huawei.hms.activity.IBridgeActivityDelegate {
    public android.app.Activity a;
    public com.huawei.hms.update.note.AppSpoofResolution.b b;

    public class a implements com.huawei.hms.ui.AbstractDialog.Callback {
        public final com.huawei.hms.update.note.AppSpoofResolution a;

        public a(com.huawei.hms.update.note.AppSpoofResolution r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onCancel(com.huawei.hms.ui.AbstractDialog r2) {
                r1 = this;
                com.huawei.hms.availableupdate.m r2 = com.huawei.hms.availableupdate.m.c
                r0 = 1
                r2.a(r0)
                com.huawei.hms.update.note.AppSpoofResolution r2 = r1.a
                r0 = 0
                com.huawei.hms.update.note.AppSpoofResolution.a(r2, r0)
                com.huawei.hms.update.note.AppSpoofResolution r2 = r1.a
                com.huawei.hms.update.note.AppSpoofResolution.a(r2)
                return
        }

        @Override
        public void onDoWork(com.huawei.hms.ui.AbstractDialog r2) {
                r1 = this;
                com.huawei.hms.availableupdate.m r2 = com.huawei.hms.availableupdate.m.c
                r0 = 1
                r2.a(r0)
                com.huawei.hms.update.note.AppSpoofResolution r2 = r1.a
                r0 = 0
                com.huawei.hms.update.note.AppSpoofResolution.a(r2, r0)
                com.huawei.hms.update.note.AppSpoofResolution r2 = r1.a
                com.huawei.hms.update.note.AppSpoofResolution.a(r2)
                return
        }
    }

    public static class b extends com.huawei.hms.ui.AbstractPromptDialog {
        public b() {
                r0 = this;
                r0.<init>()
                return
        }

        public b(com.huawei.hms.update.note.AppSpoofResolution.a r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public java.lang.String onGetMessageString(android.content.Context r4) {
                r3 = this;
                com.huawei.hms.utils.PackageManagerHelper r0 = new com.huawei.hms.utils.PackageManagerHelper
                r0.<init>(r4)
                java.lang.String r1 = "com.huawei.hwid"
                java.lang.String r0 = r0.getApplicationName(r1)
                boolean r2 = android.text.TextUtils.isEmpty(r0)
                if (r2 == 0) goto L12
                goto L13
            L12:
                r1 = r0
            L13:
                android.content.Context r0 = com.huawei.hms.utils.ResourceLoaderUtil.getmContext()
                if (r0 != 0) goto L1c
                com.huawei.hms.utils.ResourceLoaderUtil.setmContext(r4)
            L1c:
                r4 = 1
                java.lang.Object[] r4 = new java.lang.Object[r4]
                r0 = 0
                r4[r0] = r1
                java.lang.String r0 = "hms_is_spoof"
                java.lang.String r4 = com.huawei.hms.utils.ResourceLoaderUtil.getString(r0, r4)
                return r4
        }

        @Override
        public java.lang.String onGetPositiveButtonString(android.content.Context r2) {
                r1 = this;
                android.content.Context r0 = com.huawei.hms.utils.ResourceLoaderUtil.getmContext()
                if (r0 != 0) goto L9
                com.huawei.hms.utils.ResourceLoaderUtil.setmContext(r2)
            L9:
                java.lang.String r2 = "hms_confirm"
                java.lang.String r2 = com.huawei.hms.utils.ResourceLoaderUtil.getString(r2)
                return r2
        }

        @Override
        public java.lang.String onGetTitleString(android.content.Context r2) {
                r1 = this;
                android.content.Context r0 = com.huawei.hms.utils.ResourceLoaderUtil.getmContext()
                if (r0 != 0) goto L9
                com.huawei.hms.utils.ResourceLoaderUtil.setmContext(r2)
            L9:
                java.lang.String r2 = "hms_spoof_hints"
                java.lang.String r2 = com.huawei.hms.utils.ResourceLoaderUtil.getString(r2)
                return r2
        }
    }

    public AppSpoofResolution() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.huawei.hms.update.note.AppSpoofResolution.b a(com.huawei.hms.update.note.AppSpoofResolution r0, com.huawei.hms.update.note.AppSpoofResolution.b r1) {
            r0.b = r1
            return r1
    }

    public static void a(com.huawei.hms.update.note.AppSpoofResolution r0) {
            r0.a()
            return
    }

    public final void a() {
            r4 = this;
            android.app.Activity r0 = r4.getActivity()
            if (r0 == 0) goto L2e
            boolean r1 = r0.isFinishing()
            if (r1 == 0) goto Ld
            goto L2e
        Ld:
            java.lang.String r1 = "AppSpoofResolution"
            java.lang.String r2 = "enter AppSpoofResolution finishBridgeActivity："
            com.huawei.hms.support.log.HMSLog.i(r1, r2)
            com.huawei.hms.availableupdate.m r1 = com.huawei.hms.availableupdate.m.c
            java.util.concurrent.atomic.AtomicBoolean r1 = r1.a()
            r2 = 1
            r3 = 0
            boolean r1 = r1.compareAndSet(r2, r3)
            if (r1 == 0) goto L2b
            com.huawei.hms.adapter.sysobs.SystemManager r1 = com.huawei.hms.adapter.sysobs.SystemManager.getInstance()
            r2 = 29
            r1.notifyNoticeResult(r2)
        L2b:
            r0.finish()
        L2e:
            return
    }

    public final void b() {
            r3 = this;
            android.app.Activity r0 = r3.getActivity()
            if (r0 == 0) goto L2e
            boolean r1 = r0.isFinishing()
            if (r1 == 0) goto Ld
            goto L2e
        Ld:
            com.huawei.hms.update.note.AppSpoofResolution$b r1 = r3.b
            if (r1 != 0) goto L1a
            com.huawei.hms.update.note.AppSpoofResolution$b r1 = new com.huawei.hms.update.note.AppSpoofResolution$b
            r2 = 0
            r1.<init>(r2)
            r3.b = r1
            goto L1d
        L1a:
            r1.dismiss()
        L1d:
            java.lang.String r1 = "AppSpoofResolution"
            java.lang.String r2 = "enter AppSpoofResolution showPromptdlg to resolve conn error"
            com.huawei.hms.support.log.HMSLog.i(r1, r2)
            com.huawei.hms.update.note.AppSpoofResolution$b r1 = r3.b
            com.huawei.hms.update.note.AppSpoofResolution$a r2 = new com.huawei.hms.update.note.AppSpoofResolution$a
            r2.<init>(r3)
            r1.show(r0, r2)
        L2e:
            return
    }

    public android.app.Activity getActivity() {
            r1 = this;
            android.app.Activity r0 = r1.a
            return r0
    }

    @Override
    public int getRequestCode() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void onBridgeActivityCreate(android.app.Activity r3) {
            r2 = this;
            java.lang.String r0 = "AppSpoofResolution"
            java.lang.String r1 = "enter AppSpoofResolution onBridgeActivityCreate"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            r2.a = r3
            com.huawei.hms.availableupdate.m r3 = com.huawei.hms.availableupdate.m.c
            android.app.Activity r0 = r2.a
            r3.a(r0)
            com.huawei.hms.availableupdate.m r3 = com.huawei.hms.availableupdate.m.c
            r0 = 0
            r3.a(r0)
            r2.b()
            return
    }

    @Override
    public void onBridgeActivityDestroy() {
            r3 = this;
            java.lang.String r0 = "AppSpoofResolution"
            java.lang.String r1 = "enter AppSpoofResolution onBridgeActivityDestroy"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            com.huawei.hms.availableupdate.m r0 = com.huawei.hms.availableupdate.m.c
            java.util.concurrent.atomic.AtomicBoolean r0 = r0.a()
            r1 = 1
            r2 = 0
            boolean r0 = r0.compareAndSet(r1, r2)
            if (r0 == 0) goto L1e
            com.huawei.hms.adapter.sysobs.SystemManager r0 = com.huawei.hms.adapter.sysobs.SystemManager.getInstance()
            r1 = 29
            r0.notifyNoticeResult(r1)
        L1e:
            com.huawei.hms.availableupdate.m r0 = com.huawei.hms.availableupdate.m.c
            android.app.Activity r1 = r3.a
            r0.b(r1)
            r0 = 0
            r3.a = r0
            return
    }

    @Override
    public boolean onBridgeActivityResult(int r1, int r2, android.content.Intent r3) {
            r0 = this;
            int r2 = r0.getRequestCode()
            if (r1 == r2) goto L8
            r1 = 0
            return r1
        L8:
            java.lang.String r1 = "AppSpoofResolution"
            java.lang.String r2 = "enter AppSpoofResolution onBridgeActivityResult"
            com.huawei.hms.support.log.HMSLog.i(r1, r2)
            r1 = 1
            return r1
    }

    @Override
    public void onBridgeConfigurationChanged() {
            r2 = this;
            com.huawei.hms.update.note.AppSpoofResolution$b r0 = r2.b
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.String r0 = "AppSpoofResolution"
            java.lang.String r1 = "enter AppSpoofResolution re show prompt dialog"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            r2.b()
            return
    }

    @Override
    public void onKeyUp(int r1, android.view.KeyEvent r2) {
            r0 = this;
            java.lang.String r1 = "AppSpoofResolution"
            java.lang.String r2 = "enter AppSpoofResolution On key up when resolve spoof error"
            com.huawei.hms.support.log.HMSLog.i(r1, r2)
            return
    }
}
