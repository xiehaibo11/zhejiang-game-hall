package com.huawei.hms.adapter;

public class BinderAdapter implements android.content.ServiceConnection {
    private static final java.lang.Object LOCK_CONNECT_TIMEOUT_HANDLER = null;
    private static final int MSG_CONN_TIMEOUT = 1001;
    private static final java.lang.String TAG = "BinderAdapter";
    private boolean bindfail;
    private com.huawei.hms.adapter.BinderAdapter.BinderCallBack callback;
    private java.lang.String mAction;
    private android.os.Handler mBinderTimeoutHandler;
    private android.content.Context mContext;
    private java.lang.String mService;


    public interface BinderCallBack {
        void onBinderFailed(int r1);

        void onBinderFailed(int r1, android.content.Intent r2);

        void onNullBinding(android.content.ComponentName r1);

        void onServiceConnected(android.content.ComponentName r1, android.os.IBinder r2);

        void onServiceDisconnected(android.content.ComponentName r1);
    }

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.hms.adapter.BinderAdapter.LOCK_CONNECT_TIMEOUT_HANDLER = r0
            return
    }

    public BinderAdapter(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.bindfail = r0
            r0 = 0
            r1.mBinderTimeoutHandler = r0
            r1.mContext = r2
            r1.mAction = r3
            r1.mService = r4
            return
    }

    static void access$000(com.huawei.hms.adapter.BinderAdapter r0) {
            r0.binderServiceFailed()
            return
    }

    private void bindCoreService() {
            r4 = this;
            java.lang.String r0 = r4.mAction
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L10
            java.lang.String r0 = r4.mService
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L13
        L10:
            r4.getBindFailPendingIntent()
        L13:
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = r4.mAction
            r0.<init>(r1)
            java.lang.String r1 = r4.mService
            r0.setPackage(r1)
            java.lang.Object r1 = com.huawei.hms.adapter.BinderAdapter.LOCK_CONNECT_TIMEOUT_HANDLER
            monitor-enter(r1)
            android.content.Context r2 = r4.mContext     // Catch: java.lang.Throwable -> L37
            r3 = 1
            boolean r0 = r2.bindService(r0, r4, r3)     // Catch: java.lang.Throwable -> L37
            if (r0 == 0) goto L30
            r4.postConnDelayHandle()     // Catch: java.lang.Throwable -> L37
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L37
            return
        L30:
            r4.bindfail = r3     // Catch: java.lang.Throwable -> L37
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L37
            r4.getBindFailPendingIntent()
            return
        L37:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L37
            throw r0
    }

    private void binderServiceFailed() {
            r2 = this;
            com.huawei.hms.adapter.BinderAdapter$BinderCallBack r0 = r2.getCallBack()
            if (r0 == 0) goto La
            r1 = -1
            r0.onBinderFailed(r1)
        La:
            return
    }

    private void cancelConnDelayHandle() {
            r3 = this;
            java.lang.Object r0 = com.huawei.hms.adapter.BinderAdapter.LOCK_CONNECT_TIMEOUT_HANDLER
            monitor-enter(r0)
            android.os.Handler r1 = r3.mBinderTimeoutHandler     // Catch: java.lang.Throwable -> L13
            if (r1 == 0) goto L11
            android.os.Handler r1 = r3.mBinderTimeoutHandler     // Catch: java.lang.Throwable -> L13
            r2 = 1001(0x3e9, float:1.403E-42)
            r1.removeMessages(r2)     // Catch: java.lang.Throwable -> L13
            r1 = 0
            r3.mBinderTimeoutHandler = r1     // Catch: java.lang.Throwable -> L13
        L11:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
            return
        L13:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
            throw r1
    }

    private void getBindFailPendingIntent() {
            r3 = this;
            java.lang.String r0 = "BinderAdapter"
            java.lang.String r1 = "In connect, bind core service fail"
            com.huawei.hms.support.log.HMSLog.e(r0, r1)
            android.content.Context r0 = r3.mContext
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo()
            java.lang.String r0 = r0.packageName
            android.content.ComponentName r1 = new android.content.ComponentName
            java.lang.String r2 = "com.huawei.hms.activity.BridgeActivity"
            r1.<init>(r0, r2)
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            r0.setComponent(r1)
            java.lang.Class<com.huawei.hms.api.BindingFailedResolution> r1 = com.huawei.hms.api.BindingFailedResolution.class
            java.lang.String r1 = r1.getName()
            java.lang.String r2 = "intent.extra.DELEGATE_CLASS_OBJECT"
            r0.putExtra(r2, r1)
            com.huawei.hms.adapter.BinderAdapter$BinderCallBack r1 = r3.callback
            r2 = -1
            r1.onBinderFailed(r2, r0)
            return
    }

    private com.huawei.hms.adapter.BinderAdapter.BinderCallBack getCallBack() {
            r1 = this;
            com.huawei.hms.adapter.BinderAdapter$BinderCallBack r0 = r1.callback
            return r0
    }

    private void postConnDelayHandle() {
            r4 = this;
            android.os.Handler r0 = r4.mBinderTimeoutHandler
            r1 = 1001(0x3e9, float:1.403E-42)
            if (r0 == 0) goto La
            r0.removeMessages(r1)
            goto L1a
        La:
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r2 = android.os.Looper.getMainLooper()
            com.huawei.hms.adapter.BinderAdapter$1 r3 = new com.huawei.hms.adapter.BinderAdapter$1
            r3.<init>(r4)
            r0.<init>(r2, r3)
            r4.mBinderTimeoutHandler = r0
        L1a:
            android.os.Handler r0 = r4.mBinderTimeoutHandler
            r2 = 5000(0x1388, double:2.4703E-320)
            r0.sendEmptyMessageDelayed(r1, r2)
            return
    }

    public void binder(com.huawei.hms.adapter.BinderAdapter.BinderCallBack r1) {
            r0 = this;
            if (r1 != 0) goto L3
            return
        L3:
            r0.callback = r1
            r0.bindCoreService()
            return
    }

    @Override
    public void onNullBinding(android.content.ComponentName r3) {
            r2 = this;
            java.lang.String r0 = "BinderAdapter"
            java.lang.String r1 = "Enter onNullBinding, than unBind."
            com.huawei.hms.support.log.HMSLog.e(r0, r1)
            boolean r0 = r2.bindfail
            if (r0 == 0) goto Lf
            r3 = 0
            r2.bindfail = r3
            return
        Lf:
            r2.unBind()
            r2.cancelConnDelayHandle()
            com.huawei.hms.adapter.BinderAdapter$BinderCallBack r0 = r2.getCallBack()
            if (r0 == 0) goto L1e
            r0.onNullBinding(r3)
        L1e:
            return
    }

    @Override
    public void onServiceConnected(android.content.ComponentName r3, android.os.IBinder r4) {
            r2 = this;
            java.lang.String r0 = "BinderAdapter"
            java.lang.String r1 = "Enter onServiceConnected."
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            r2.cancelConnDelayHandle()
            com.huawei.hms.adapter.BinderAdapter$BinderCallBack r0 = r2.getCallBack()
            if (r0 == 0) goto L13
            r0.onServiceConnected(r3, r4)
        L13:
            return
    }

    @Override
    public void onServiceDisconnected(android.content.ComponentName r3) {
            r2 = this;
            java.lang.String r0 = "BinderAdapter"
            java.lang.String r1 = "Enter onServiceDisconnected."
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            com.huawei.hms.adapter.BinderAdapter$BinderCallBack r0 = r2.getCallBack()
            if (r0 == 0) goto L10
            r0.onServiceDisconnected(r3)
        L10:
            return
    }

    public void unBind() {
            r1 = this;
            android.content.Context r0 = r1.mContext
            com.huawei.hms.utils.Util.unBindServiceCatchException(r0, r1)
            return
    }
}
