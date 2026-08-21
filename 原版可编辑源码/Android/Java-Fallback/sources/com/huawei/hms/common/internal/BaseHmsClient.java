package com.huawei.hms.common.internal;

public abstract class BaseHmsClient implements com.huawei.hms.support.api.client.AidlApiClient {
    private static final int BINDING = 5;
    private static final int CONNECTED = 3;
    private static final int DISCONNECTED = 1;
    private static final int DISCONNECTING = 4;
    private static final java.lang.Object LOCK_CONNECT_TIMEOUT_HANDLER = null;
    private static final int MSG_CONN_TIMEOUT = 2;
    private static final java.lang.String TAG = "BaseHmsClient";
    private java.lang.String mAppID;
    private com.huawei.hms.adapter.BinderAdapter mBinderAdapter;
    private final com.huawei.hms.common.internal.ClientSettings mClientSettings;
    private final java.util.concurrent.atomic.AtomicInteger mConnStatus;
    private android.os.Handler mConnectTimeoutHandler;
    private final com.huawei.hms.common.internal.BaseHmsClient.ConnectionCallbacks mConnectionCallbacks;
    private final com.huawei.hms.common.internal.BaseHmsClient.OnConnectionFailedListener mConnectionFailedListener;
    private final android.content.Context mContext;
    private volatile com.huawei.hms.core.aidl.d mService;
    protected java.lang.String sessionId;




    public interface ConnectionCallbacks {
        public static final int CAUSE_API_CLIENT_EXPIRED = 3;
        public static final int CAUSE_NETWORK_LOST = 2;
        public static final int CAUSE_SERVICE_DISCONNECTED = 1;

        void onConnected();

        void onConnectionSuspended(int r1);
    }

    public interface OnConnectionFailedListener {
        void onConnectionFailed(com.huawei.hms.api.ConnectionResult r1);
    }

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.hms.common.internal.BaseHmsClient.LOCK_CONNECT_TIMEOUT_HANDLER = r0
            return
    }

    public BaseHmsClient(android.content.Context r3, com.huawei.hms.common.internal.ClientSettings r4, com.huawei.hms.common.internal.BaseHmsClient.OnConnectionFailedListener r5, com.huawei.hms.common.internal.BaseHmsClient.ConnectionCallbacks r6) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r1 = 1
            r0.<init>(r1)
            r2.mConnStatus = r0
            r0 = 0
            r2.mConnectTimeoutHandler = r0
            r2.mContext = r3
            r2.mClientSettings = r4
            java.lang.String r3 = r4.getAppID()
            r2.mAppID = r3
            r2.mConnectionFailedListener = r5
            r2.mConnectionCallbacks = r6
            return
    }

    static com.huawei.hms.core.aidl.d access$000(com.huawei.hms.common.internal.BaseHmsClient r0) {
            com.huawei.hms.core.aidl.d r0 = r0.mService
            return r0
    }

    static com.huawei.hms.core.aidl.d access$002(com.huawei.hms.common.internal.BaseHmsClient r0, com.huawei.hms.core.aidl.d r1) {
            r0.mService = r1
            return r1
    }

    static com.huawei.hms.adapter.BinderAdapter access$100(com.huawei.hms.common.internal.BaseHmsClient r0) {
            com.huawei.hms.adapter.BinderAdapter r0 = r0.mBinderAdapter
            return r0
    }

    static void access$200(com.huawei.hms.common.internal.BaseHmsClient r0, int r1) {
            r0.setConnectStatus(r1)
            return
    }

    static void access$300(com.huawei.hms.common.internal.BaseHmsClient r0, int r1) {
            r0.notifyFailed(r1)
            return
    }

    static android.content.Context access$400(com.huawei.hms.common.internal.BaseHmsClient r0) {
            android.content.Context r0 = r0.mContext
            return r0
    }

    static void access$500(com.huawei.hms.common.internal.BaseHmsClient r0, com.huawei.hms.api.ConnectionResult r1) {
            r0.notifyFailed(r1)
            return
    }

    static com.huawei.hms.common.internal.BaseHmsClient.ConnectionCallbacks access$600(com.huawei.hms.common.internal.BaseHmsClient r0) {
            com.huawei.hms.common.internal.BaseHmsClient$ConnectionCallbacks r0 = r0.mConnectionCallbacks
            return r0
    }

    static void access$700(com.huawei.hms.common.internal.BaseHmsClient r0) {
            r0.bindCoreService()
            return
    }

    private void bindCoreService() {
            r4 = this;
            com.huawei.hms.common.internal.ClientSettings r0 = r4.mClientSettings
            java.lang.String r0 = r0.getInnerHmsPkg()
            java.lang.String r1 = r4.getServiceAction()
            android.content.Context r2 = r4.mContext
            java.lang.String r2 = r2.getPackageName()
            boolean r2 = r0.equalsIgnoreCase(r2)
            if (r2 == 0) goto L23
            android.content.Context r2 = r4.mContext
            java.lang.String r2 = com.huawei.hms.utils.Util.getServiceActionMetadata(r2)
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L23
            r1 = r2
        L23:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "enter bindCoreService, packageName is "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r3 = ", serviceAction is "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "BaseHmsClient"
            com.huawei.hms.support.log.HMSLog.i(r3, r2)
            com.huawei.hms.adapter.BinderAdapter r2 = new com.huawei.hms.adapter.BinderAdapter
            android.content.Context r3 = r4.mContext
            r2.<init>(r3, r1, r0)
            r4.mBinderAdapter = r2
            com.huawei.hms.common.internal.BaseHmsClient$1 r0 = new com.huawei.hms.common.internal.BaseHmsClient$1
            r0.<init>(r4)
            r2.binder(r0)
            return
    }

    private void cancelConnDelayHandle() {
            r3 = this;
            java.lang.Object r0 = com.huawei.hms.common.internal.BaseHmsClient.LOCK_CONNECT_TIMEOUT_HANDLER
            monitor-enter(r0)
            android.os.Handler r1 = r3.mConnectTimeoutHandler     // Catch: java.lang.Throwable -> L12
            if (r1 == 0) goto L10
            android.os.Handler r1 = r3.mConnectTimeoutHandler     // Catch: java.lang.Throwable -> L12
            r2 = 2
            r1.removeMessages(r2)     // Catch: java.lang.Throwable -> L12
            r1 = 0
            r3.mConnectTimeoutHandler = r1     // Catch: java.lang.Throwable -> L12
        L10:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            return
        L12:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            throw r1
    }

    private void checkAvailabilityAndConnect(int r5, boolean r6) {
            r4 = this;
            java.lang.String r0 = "BaseHmsClient"
            java.lang.String r1 = "====== HMSSDK version: 50300301 ======"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            java.util.concurrent.atomic.AtomicInteger r1 = r4.mConnStatus
            int r1 = r1.get()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Enter connect, Connection Status: "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            com.huawei.hms.support.log.HMSLog.i(r0, r2)
            r2 = 5
            if (r6 != 0) goto L2d
            r6 = 3
            if (r1 == r6) goto L2c
            if (r1 == r2) goto L2c
            r6 = 4
            if (r1 != r6) goto L2d
        L2c:
            return
        L2d:
            r4.setConnectStatus(r2)
            int r6 = r4.getMinApkVersion()
            if (r6 <= r5) goto L3a
            int r5 = r4.getMinApkVersion()
        L3a:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r1 = "connect minVersion:"
            r6.append(r1)
            r6.append(r5)
            java.lang.String r1 = " packageName:"
            r6.append(r1)
            com.huawei.hms.common.internal.ClientSettings r1 = r4.mClientSettings
            java.lang.String r1 = r1.getInnerHmsPkg()
            r6.append(r1)
            java.lang.String r6 = r6.toString()
            com.huawei.hms.support.log.HMSLog.i(r0, r6)
            android.content.Context r6 = r4.mContext
            java.lang.String r6 = r6.getPackageName()
            com.huawei.hms.common.internal.ClientSettings r1 = r4.mClientSettings
            java.lang.String r1 = r1.getInnerHmsPkg()
            boolean r6 = r6.equals(r1)
            if (r6 == 0) goto L77
            java.lang.String r5 = "service packageName is same, bind core service return"
            com.huawei.hms.support.log.HMSLog.i(r0, r5)
            r4.bindCoreService()
            return
        L77:
            android.content.Context r6 = r4.mContext
            boolean r6 = com.huawei.hms.utils.Util.isAvailableLibExist(r6)
            if (r6 == 0) goto Ldf
            com.huawei.hms.adapter.AvailableAdapter r6 = new com.huawei.hms.adapter.AvailableAdapter
            r6.<init>(r5)
            android.content.Context r5 = r4.mContext
            int r5 = r6.isHuaweiMobileServicesAvailable(r5)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "check available result: "
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            if (r5 != 0) goto La4
            r4.bindCoreService()
            goto L106
        La4:
            boolean r1 = r6.isUserResolvableError(r5)
            if (r1 == 0) goto Lb3
            java.lang.String r1 = "bindCoreService3.0 fail, start resolution now."
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            r4.resolution(r6, r5)
            goto L106
        Lb3:
            boolean r1 = r6.isUserNoticeError(r5)
            if (r1 == 0) goto Lc2
            java.lang.String r1 = "bindCoreService3.0 fail, start notice now."
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            r4.notice(r6, r5)
            goto L106
        Lc2:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r1 = "bindCoreService3.0 fail: "
            r6.append(r1)
            r6.append(r5)
            java.lang.String r1 = " is not resolvable."
            r6.append(r1)
            java.lang.String r6 = r6.toString()
            com.huawei.hms.support.log.HMSLog.i(r0, r6)
            r4.notifyFailed(r5)
            goto L106
        Ldf:
            com.huawei.hms.api.HuaweiApiAvailability r6 = com.huawei.hms.api.HuaweiApiAvailability.getInstance()
            android.content.Context r1 = r4.mContext
            int r5 = r6.isHuaweiMobileServicesAvailable(r1, r5)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r1 = "HuaweiApiAvailability check available result: "
            r6.append(r1)
            r6.append(r5)
            java.lang.String r6 = r6.toString()
            com.huawei.hms.support.log.HMSLog.i(r0, r6)
            if (r5 != 0) goto L103
            r4.bindCoreService()
            goto L106
        L103:
            r4.notifyFailed(r5)
        L106:
            return
    }

    private void notice(com.huawei.hms.adapter.AvailableAdapter r4, int r5) {
            r3 = this;
            java.lang.String r0 = "BaseHmsClient"
            java.lang.String r1 = "enter notice"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            com.huawei.hms.common.internal.ClientSettings r0 = r3.getClientSettings()
            boolean r0 = r0.isHasActivity()
            r1 = 26
            if (r0 != 0) goto L2d
            r4 = 29
            if (r5 != r4) goto L19
            r5 = 9
        L19:
            com.huawei.hms.api.HuaweiApiAvailability r4 = com.huawei.hms.api.HuaweiApiAvailability.getInstance()
            android.content.Context r0 = r3.mContext
            r2 = 0
            android.app.PendingIntent r4 = r4.getErrPendingIntent(r0, r5, r2)
            com.huawei.hms.api.ConnectionResult r5 = new com.huawei.hms.api.ConnectionResult
            r5.<init>(r1, r4)
            r3.notifyFailed(r5)
            return
        L2d:
            com.huawei.hms.common.internal.ClientSettings r5 = r3.getClientSettings()
            android.app.Activity r5 = r5.getCpActivity()
            android.content.Context r0 = r3.getContext()
            android.app.Activity r5 = com.huawei.hms.utils.Util.getActiveActivity(r5, r0)
            if (r5 == 0) goto L48
            com.huawei.hms.common.internal.BaseHmsClient$2 r0 = new com.huawei.hms.common.internal.BaseHmsClient$2
            r0.<init>(r3)
            r4.startNotice(r5, r0)
            goto L4b
        L48:
            r3.notifyFailed(r1)
        L4b:
            return
    }

    private void notifyFailed(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "notifyFailed result: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "BaseHmsClient"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            com.huawei.hms.common.internal.BaseHmsClient$OnConnectionFailedListener r0 = r2.mConnectionFailedListener
            if (r0 == 0) goto L22
            com.huawei.hms.api.ConnectionResult r1 = new com.huawei.hms.api.ConnectionResult
            r1.<init>(r3)
            r0.onConnectionFailed(r1)
        L22:
            return
    }

    private void notifyFailed(com.huawei.hms.api.ConnectionResult r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "notifyFailed result: "
            r0.append(r1)
            int r1 = r3.getErrorCode()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "BaseHmsClient"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            com.huawei.hms.common.internal.BaseHmsClient$OnConnectionFailedListener r0 = r2.mConnectionFailedListener
            if (r0 == 0) goto L21
            r0.onConnectionFailed(r3)
        L21:
            return
    }

    private void resolution(com.huawei.hms.adapter.AvailableAdapter r4, int r5) {
            r3 = this;
            java.lang.String r0 = "BaseHmsClient"
            java.lang.String r1 = "enter HmsCore resolution"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            com.huawei.hms.common.internal.ClientSettings r0 = r3.getClientSettings()
            boolean r0 = r0.isHasActivity()
            r1 = 26
            if (r0 != 0) goto L27
            com.huawei.hms.api.HuaweiApiAvailability r4 = com.huawei.hms.api.HuaweiApiAvailability.getInstance()
            android.content.Context r0 = r3.mContext
            r2 = 0
            android.app.PendingIntent r4 = r4.getErrPendingIntent(r0, r5, r2)
            com.huawei.hms.api.ConnectionResult r5 = new com.huawei.hms.api.ConnectionResult
            r5.<init>(r1, r4)
            r3.notifyFailed(r5)
            return
        L27:
            com.huawei.hms.common.internal.ClientSettings r5 = r3.getClientSettings()
            android.app.Activity r5 = r5.getCpActivity()
            android.content.Context r0 = r3.getContext()
            android.app.Activity r5 = com.huawei.hms.utils.Util.getActiveActivity(r5, r0)
            if (r5 == 0) goto L42
            com.huawei.hms.common.internal.BaseHmsClient$3 r0 = new com.huawei.hms.common.internal.BaseHmsClient$3
            r0.<init>(r3)
            r4.startResolution(r5, r0)
            goto L45
        L42:
            r3.notifyFailed(r1)
        L45:
            return
    }

    private void setConnectStatus(int r2) {
            r1 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r1.mConnStatus
            r0.set(r2)
            return
    }

    protected final void checkConnected() {
            r2 = this;
            boolean r0 = r2.isConnected()
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Not connected. Call connect() and wait for onConnected() to be called."
            r0.<init>(r1)
            throw r0
    }

    public void connect(int r2) {
            r1 = this;
            r0 = 0
            r1.checkAvailabilityAndConnect(r2, r0)
            return
    }

    public void connect(int r1, boolean r2) {
            r0 = this;
            r0.checkAvailabilityAndConnect(r1, r2)
            return
    }

    protected final void connectionConnected() {
            r1 = this;
            r0 = 3
            r1.setConnectStatus(r0)
            com.huawei.hms.common.internal.BaseHmsClient$ConnectionCallbacks r0 = r1.mConnectionCallbacks
            if (r0 == 0) goto Lb
            r0.onConnected()
        Lb:
            return
    }

    public void disconnect() {
            r3 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r3.mConnStatus
            int r0 = r0.get()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Enter disconnect, Connection Status: "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "BaseHmsClient"
            com.huawei.hms.support.log.HMSLog.i(r2, r1)
            r1 = 1
            if (r0 == r1) goto L3a
            r2 = 3
            if (r0 == r2) goto L30
            r1 = 4
            if (r0 == r1) goto L3a
            r2 = 5
            if (r0 == r2) goto L29
            goto L3a
        L29:
            r3.cancelConnDelayHandle()
            r3.setConnectStatus(r1)
            goto L3a
        L30:
            com.huawei.hms.adapter.BinderAdapter r0 = r3.mBinderAdapter
            if (r0 == 0) goto L37
            r0.unBind()
        L37:
            r3.setConnectStatus(r1)
        L3a:
            return
    }

    @Override
    public java.util.List<java.lang.String> getApiNameList() {
            r1 = this;
            com.huawei.hms.common.internal.ClientSettings r0 = r1.mClientSettings
            java.util.List r0 = r0.getApiName()
            return r0
    }

    @Override
    public java.lang.String getAppID() {
            r1 = this;
            java.lang.String r0 = r1.mAppID
            return r0
    }

    protected com.huawei.hms.common.internal.ClientSettings getClientSettings() {
            r1 = this;
            com.huawei.hms.common.internal.ClientSettings r0 = r1.mClientSettings
            return r0
    }

    @Override
    public android.content.Context getContext() {
            r1 = this;
            android.content.Context r0 = r1.mContext
            return r0
    }

    @Override
    public java.lang.String getCpID() {
            r1 = this;
            com.huawei.hms.common.internal.ClientSettings r0 = r1.mClientSettings
            java.lang.String r0 = r0.getCpID()
            return r0
    }

    @java.lang.Deprecated
    public int getMinApkVersion() {
            r1 = this;
            r0 = 30000000(0x1c9c380, float:7.411627E-38)
            return r0
    }

    @Override
    public java.lang.String getPackageName() {
            r1 = this;
            com.huawei.hms.common.internal.ClientSettings r0 = r1.mClientSettings
            java.lang.String r0 = r0.getClientPackageName()
            return r0
    }

    @Override
    public com.huawei.hms.core.aidl.d getService() {
            r1 = this;
            com.huawei.hms.core.aidl.d r0 = r1.mService
            return r0
    }

    public java.lang.String getServiceAction() {
            r1 = this;
            java.lang.String r0 = "com.huawei.hms.core.aidlservice"
            return r0
    }

    @Override
    public java.lang.String getSessionId() {
            r1 = this;
            java.lang.String r0 = r1.sessionId
            return r0
    }

    @Override
    public com.huawei.hms.support.api.client.SubAppInfo getSubAppInfo() {
            r1 = this;
            com.huawei.hms.common.internal.ClientSettings r0 = r1.mClientSettings
            com.huawei.hms.support.api.client.SubAppInfo r0 = r0.getSubAppID()
            return r0
    }

    @Override
    public java.lang.String getTransportName() {
            r1 = this;
            java.lang.Class<com.huawei.hms.api.IPCTransport> r0 = com.huawei.hms.api.IPCTransport.class
            java.lang.String r0 = r0.getName()
            return r0
    }

    @Override
    public boolean isConnected() {
            r2 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r2.mConnStatus
            int r0 = r0.get()
            r1 = 3
            if (r0 == r1) goto L15
            java.util.concurrent.atomic.AtomicInteger r0 = r2.mConnStatus
            int r0 = r0.get()
            r1 = 4
            if (r0 != r1) goto L13
            goto L15
        L13:
            r0 = 0
            goto L16
        L15:
            r0 = 1
        L16:
            return r0
    }

    public boolean isConnecting() {
            r2 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r2.mConnStatus
            int r0 = r0.get()
            r1 = 5
            if (r0 != r1) goto Lb
            r0 = 1
            goto Lc
        Lb:
            r0 = 0
        Lc:
            return r0
    }

    public void onConnecting() {
            r0 = this;
            r0.connectionConnected()
            return
    }
}
