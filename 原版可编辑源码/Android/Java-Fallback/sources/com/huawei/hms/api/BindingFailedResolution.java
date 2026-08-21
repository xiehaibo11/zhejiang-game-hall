package com.huawei.hms.api;

public class BindingFailedResolution implements com.huawei.hms.activity.IBridgeActivityDelegate, android.content.ServiceConnection {
    private static final java.lang.Object f = null;
    private android.app.Activity a;
    private boolean b;
    private com.huawei.hms.api.BindingFailedResolution.d c;
    private android.os.Handler d;
    private android.os.Handler e;

    class a implements android.os.Handler.Callback {
        final com.huawei.hms.api.BindingFailedResolution a;

        a(com.huawei.hms.api.BindingFailedResolution r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public boolean handleMessage(android.os.Message r2) {
                r1 = this;
                if (r2 == 0) goto L11
                int r2 = r2.what
                r0 = 3
                if (r2 == r0) goto L8
                goto L11
            L8:
                com.huawei.hms.api.BindingFailedResolution r2 = r1.a
                r0 = 8
                com.huawei.hms.api.BindingFailedResolution.a(r2, r0)
                r2 = 1
                return r2
            L11:
                r2 = 0
                return r2
        }
    }

    class b implements android.os.Handler.Callback {
        final com.huawei.hms.api.BindingFailedResolution a;

        b(com.huawei.hms.api.BindingFailedResolution r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public boolean handleMessage(android.os.Message r3) {
                r2 = this;
                r0 = 0
                if (r3 == 0) goto L17
                int r3 = r3.what
                r1 = 2
                if (r3 == r1) goto L9
                goto L17
            L9:
                java.lang.String r3 = "BindingFailedResolution"
                java.lang.String r1 = "In connect, bind core try timeout"
                com.huawei.hms.support.log.HMSLog.e(r3, r1)
                com.huawei.hms.api.BindingFailedResolution r3 = r2.a
                com.huawei.hms.api.BindingFailedResolution.a(r3, r0)
                r3 = 1
                return r3
            L17:
                return r0
        }
    }

    class c implements com.huawei.hms.ui.AbstractDialog.Callback {
        final com.huawei.hms.api.BindingFailedResolution a;

        c(com.huawei.hms.api.BindingFailedResolution r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onCancel(com.huawei.hms.ui.AbstractDialog r2) {
                r1 = this;
                com.huawei.hms.api.BindingFailedResolution r2 = r1.a
                r0 = 0
                com.huawei.hms.api.BindingFailedResolution.a(r2, r0)
                com.huawei.hms.common.internal.BindResolveClients r2 = com.huawei.hms.common.internal.BindResolveClients.getInstance()
                r2.unRegisterAll()
                com.huawei.hms.api.BindingFailedResolution r2 = r1.a
                r0 = 8
                com.huawei.hms.api.BindingFailedResolution.a(r2, r0)
                return
        }

        @Override
        public void onDoWork(com.huawei.hms.ui.AbstractDialog r2) {
                r1 = this;
                com.huawei.hms.api.BindingFailedResolution r2 = r1.a
                r0 = 0
                com.huawei.hms.api.BindingFailedResolution.a(r2, r0)
                com.huawei.hms.common.internal.BindResolveClients r2 = com.huawei.hms.common.internal.BindResolveClients.getInstance()
                r2.unRegisterAll()
                com.huawei.hms.api.BindingFailedResolution r2 = r1.a
                r0 = 8
                com.huawei.hms.api.BindingFailedResolution.a(r2, r0)
                return
        }
    }

    private static class d extends com.huawei.hms.ui.AbstractPromptDialog {
        private d() {
                r0 = this;
                r0.<init>()
                return
        }

        d(com.huawei.hms.api.BindingFailedResolution.a r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        protected java.lang.String onGetMessageString(android.content.Context r4) {
                r3 = this;
                r0 = 0
                java.lang.String r0 = com.huawei.hms.utils.Util.getAppName(r4, r0)
                com.huawei.hms.utils.HMSPackageManager r1 = com.huawei.hms.utils.HMSPackageManager.getInstance(r4)
                java.lang.String r1 = r1.getHMSPackageName()
                java.lang.String r4 = com.huawei.hms.utils.Util.getAppName(r4, r1)
                r1 = 2
                java.lang.Object[] r1 = new java.lang.Object[r1]
                r2 = 0
                r1[r2] = r0
                r0 = 1
                r1[r0] = r4
                java.lang.String r4 = "hms_bindfaildlg_message"
                java.lang.String r4 = com.huawei.hms.utils.ResourceLoaderUtil.getString(r4, r1)
                return r4
        }

        @Override
        protected java.lang.String onGetPositiveButtonString(android.content.Context r1) {
                r0 = this;
                java.lang.String r1 = "hms_confirm"
                java.lang.String r1 = com.huawei.hms.utils.ResourceLoaderUtil.getString(r1)
                return r1
        }
    }

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.hms.api.BindingFailedResolution.f = r0
            return
    }

    public BindingFailedResolution() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.b = r0
            r0 = 0
            r1.d = r0
            r1.e = r0
            return
    }

    static com.huawei.hms.api.BindingFailedResolution.d a(com.huawei.hms.api.BindingFailedResolution r0, com.huawei.hms.api.BindingFailedResolution.d r1) {
            r0.c = r1
            return r1
    }

    private void a() {
            r5 = this;
            android.app.Activity r0 = r5.getActivity()
            r1 = 0
            if (r0 != 0) goto L12
            java.lang.String r0 = "BindingFailedResolution"
            java.lang.String r2 = "In connect, bind core try fail"
            com.huawei.hms.support.log.HMSLog.e(r0, r2)
            r5.a(r1)
            return
        L12:
            android.content.Intent r2 = new android.content.Intent
            java.lang.String r3 = "com.huawei.hms.core.aidlservice"
            r2.<init>(r3)
            android.content.Context r3 = r0.getApplicationContext()
            com.huawei.hms.utils.HMSPackageManager r3 = com.huawei.hms.utils.HMSPackageManager.getInstance(r3)
            java.lang.String r3 = r3.getHMSPackageName()
            r2.setPackage(r3)
            java.lang.Object r3 = com.huawei.hms.api.BindingFailedResolution.f
            monitor-enter(r3)
            r4 = 1
            boolean r0 = r0.bindService(r2, r5, r4)     // Catch: java.lang.Throwable -> L43
            if (r0 == 0) goto L37
            r5.c()     // Catch: java.lang.Throwable -> L43
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L43
            return
        L37:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L43
            java.lang.String r0 = "BindingFailedResolution"
            java.lang.String r2 = "In connect, bind core try fail"
            com.huawei.hms.support.log.HMSLog.e(r0, r2)
            r5.a(r1)
            return
        L43:
            r0 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L43
            throw r0
    }

    private void a(int r4) {
            r3 = this;
            android.app.Activity r0 = r3.getActivity()
            if (r0 == 0) goto L34
            boolean r1 = r0.isFinishing()
            if (r1 == 0) goto Ld
            goto L34
        Ld:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "finishBridgeActivity："
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "BindingFailedResolution"
            com.huawei.hms.support.log.HMSLog.i(r2, r1)
            android.content.Intent r1 = new android.content.Intent
            r1.<init>()
            java.lang.String r2 = "intent.extra.RESULT"
            r1.putExtra(r2, r4)
            r4 = -1
            r0.setResult(r4, r1)
            r0.finish()
        L34:
            return
    }

    private void a(android.app.Activity r4) {
            r3 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            boolean r1 = com.huawei.hms.utils.UIUtil.isActivityFullscreen(r4)
            java.lang.String r2 = "intent.extra.isfullscreen"
            r0.putExtra(r2, r1)
            android.content.Context r1 = r4.getApplicationContext()
            com.huawei.hms.utils.HMSPackageManager r1 = com.huawei.hms.utils.HMSPackageManager.getInstance(r1)
            java.lang.String r1 = r1.getHMSPackageName()
            java.lang.String r2 = "com.huawei.hms.core.activity.JumpActivity"
            r0.setClassName(r1, r2)
            java.lang.String r1 = "BindingFailedResolution"
            java.lang.String r2 = "onBridgeActivityCreate：try to start HMS"
            com.huawei.hms.support.log.HMSLog.i(r1, r2)
            int r2 = r3.getRequestCode()     // Catch: java.lang.Throwable -> L2e
            r4.startActivityForResult(r0, r2)     // Catch: java.lang.Throwable -> L2e
            goto L55
        L2e:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "ActivityNotFoundException："
            r0.append(r2)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.huawei.hms.support.log.HMSLog.e(r1, r4)
            android.os.Handler r4 = r3.e
            if (r4 == 0) goto L52
            r0 = 3
            r4.removeMessages(r0)
            r4 = 0
            r3.e = r4
        L52:
            r3.a()
        L55:
            return
    }

    static void a(com.huawei.hms.api.BindingFailedResolution r0, int r1) {
            r0.a(r1)
            return
    }

    static void a(com.huawei.hms.api.BindingFailedResolution r0, boolean r1) {
            r0.a(r1)
            return
    }

    private void a(boolean r2) {
            r1 = this;
            boolean r0 = r1.b
            if (r0 == 0) goto La
            r0 = 0
            r1.b = r0
            r1.onStartResult(r2)
        La:
            return
    }

    private void b() {
            r3 = this;
            java.lang.Object r0 = com.huawei.hms.api.BindingFailedResolution.f
            monitor-enter(r0)
            android.os.Handler r1 = r3.d     // Catch: java.lang.Throwable -> L12
            if (r1 == 0) goto L10
            android.os.Handler r1 = r3.d     // Catch: java.lang.Throwable -> L12
            r2 = 2
            r1.removeMessages(r2)     // Catch: java.lang.Throwable -> L12
            r1 = 0
            r3.d = r1     // Catch: java.lang.Throwable -> L12
        L10:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            return
        L12:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            throw r1
    }

    private void c() {
            r4 = this;
            android.os.Handler r0 = r4.d
            r1 = 2
            if (r0 == 0) goto L9
            r0.removeMessages(r1)
            goto L19
        L9:
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r2 = android.os.Looper.getMainLooper()
            com.huawei.hms.api.BindingFailedResolution$b r3 = new com.huawei.hms.api.BindingFailedResolution$b
            r3.<init>(r4)
            r0.<init>(r2, r3)
            r4.d = r0
        L19:
            android.os.Handler r0 = r4.d
            r2 = 5000(0x1388, double:2.4703E-320)
            r0.sendEmptyMessageDelayed(r1, r2)
            return
    }

    private void d() {
            r4 = this;
            android.os.Handler r0 = r4.e
            r1 = 3
            if (r0 == 0) goto L9
            r0.removeMessages(r1)
            goto L19
        L9:
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r2 = android.os.Looper.getMainLooper()
            com.huawei.hms.api.BindingFailedResolution$a r3 = new com.huawei.hms.api.BindingFailedResolution$a
            r3.<init>(r4)
            r0.<init>(r2, r3)
            r4.e = r0
        L19:
            android.os.Handler r0 = r4.e
            r2 = 4000(0xfa0, double:1.9763E-320)
            r0.sendEmptyMessageDelayed(r1, r2)
            return
    }

    private void e() {
            r3 = this;
            android.app.Activity r0 = r3.getActivity()
            if (r0 == 0) goto L2e
            boolean r1 = r0.isFinishing()
            if (r1 == 0) goto Ld
            goto L2e
        Ld:
            com.huawei.hms.api.BindingFailedResolution$d r1 = r3.c
            if (r1 != 0) goto L1a
            com.huawei.hms.api.BindingFailedResolution$d r1 = new com.huawei.hms.api.BindingFailedResolution$d
            r2 = 0
            r1.<init>(r2)
            r3.c = r1
            goto L1d
        L1a:
            r1.dismiss()
        L1d:
            java.lang.String r1 = "BindingFailedResolution"
            java.lang.String r2 = "showPromptdlg to resolve conn error"
            com.huawei.hms.support.log.HMSLog.i(r1, r2)
            com.huawei.hms.api.BindingFailedResolution$d r1 = r3.c
            com.huawei.hms.api.BindingFailedResolution$c r2 = new com.huawei.hms.api.BindingFailedResolution$c
            r2.<init>(r3)
            r1.show(r0, r2)
        L2e:
            return
    }

    protected android.app.Activity getActivity() {
            r1 = this;
            android.app.Activity r0 = r1.a
            return r0
    }

    @Override
    public int getRequestCode() {
            r1 = this;
            r0 = 2003(0x7d3, float:2.807E-42)
            return r0
    }

    @Override
    public void onBridgeActivityCreate(android.app.Activity r3) {
            r2 = this;
            r2.a = r3
            com.huawei.hms.api.a r0 = com.huawei.hms.api.a.b
            android.app.Activity r1 = r2.a
            r0.a(r1)
            r2.d()
            r2.a(r3)
            return
    }

    @Override
    public void onBridgeActivityDestroy() {
            r2 = this;
            r2.b()
            com.huawei.hms.api.a r0 = com.huawei.hms.api.a.b
            android.app.Activity r1 = r2.a
            r0.b(r1)
            r0 = 0
            r2.a = r0
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
            java.lang.String r1 = "BindingFailedResolution"
            java.lang.String r2 = "onBridgeActivityResult"
            com.huawei.hms.support.log.HMSLog.i(r1, r2)
            android.os.Handler r1 = r0.e
            if (r1 == 0) goto L1a
            r2 = 3
            r1.removeMessages(r2)
            r1 = 0
            r0.e = r1
        L1a:
            r0.a()
            r1 = 1
            return r1
    }

    @Override
    public void onBridgeConfigurationChanged() {
            r2 = this;
            com.huawei.hms.api.BindingFailedResolution$d r0 = r2.c
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.String r0 = "BindingFailedResolution"
            java.lang.String r1 = "re show prompt dialog"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            r2.e()
            return
    }

    @Override
    public void onKeyUp(int r1, android.view.KeyEvent r2) {
            r0 = this;
            java.lang.String r1 = "BindingFailedResolution"
            java.lang.String r2 = "On key up when resolve conn error"
            com.huawei.hms.support.log.HMSLog.i(r1, r2)
            return
    }

    @Override
    public void onServiceConnected(android.content.ComponentName r1, android.os.IBinder r2) {
            r0 = this;
            r0.b()
            r1 = 1
            r0.a(r1)
            android.app.Activity r1 = r0.getActivity()
            if (r1 != 0) goto Le
            return
        Le:
            com.huawei.hms.utils.Util.unBindServiceCatchException(r1, r0)
            java.lang.String r1 = "BindingFailedResolution"
            java.lang.String r2 = "test connect success, try to reConnect and reply message"
            com.huawei.hms.support.log.HMSLog.i(r1, r2)
            com.huawei.hms.common.internal.BindResolveClients r1 = com.huawei.hms.common.internal.BindResolveClients.getInstance()
            r1.notifyClientReconnect()
            return
    }

    @Override
    public void onServiceDisconnected(android.content.ComponentName r1) {
            r0 = this;
            return
    }

    protected void onStartResult(boolean r2) {
            r1 = this;
            android.app.Activity r0 = r1.getActivity()
            if (r0 != 0) goto L7
            return
        L7:
            if (r2 == 0) goto Le
            r2 = 0
            r1.a(r2)
            return
        Le:
            r1.e()
            return
    }
}
