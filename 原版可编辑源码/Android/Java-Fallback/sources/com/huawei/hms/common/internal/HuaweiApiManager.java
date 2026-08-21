package com.huawei.hms.common.internal;

public class HuaweiApiManager implements android.os.Handler.Callback {
    private static final java.lang.String HANDLER_NAME = "HuaweiApiHandler";
    private static final java.lang.Object LOCK_OBJECT = null;
    private static final int MSG_RECEIVE_SEND_REQ = 4;
    private static final java.lang.String TAG = "HuaweiApiManager";
    private static com.huawei.hms.common.internal.HuaweiApiManager mInstance;
    private final java.util.Map<com.huawei.hms.common.internal.ConnectionManagerKey<?>, com.huawei.hms.common.internal.HuaweiApiManager.ConnectionManager<?>> mConnectionCache;
    private final android.os.Handler mHandler;
    private final java.util.concurrent.atomic.AtomicInteger mSerial;


    public class ConnectionManager<OptionsT extends com.huawei.hms.api.Api.ApiOptions> implements com.huawei.hms.common.internal.BaseHmsClient.ConnectionCallbacks, com.huawei.hms.common.internal.BaseHmsClient.OnConnectionFailedListener {
        private final java.util.Queue<com.huawei.hms.common.internal.HuaweiApiManager.TaskApiCallbackWrapper> callbackQueue;
        private final com.huawei.hms.common.HuaweiApi<OptionsT> mApi;
        private final com.huawei.hms.common.internal.AnyClient mClient;
        private final com.huawei.hms.common.internal.ConnectionManagerKey mConnectionManagerKey;
        private com.huawei.hms.api.ConnectionResult mConnectionResult;
        private com.huawei.hms.common.internal.ResolveClientBean mResolveClientBean;
        final com.huawei.hms.common.internal.HuaweiApiManager this$0;





        ConnectionManager(com.huawei.hms.common.internal.HuaweiApiManager r2, com.huawei.hms.common.HuaweiApi<OptionsT> r3) {
                r1 = this;
                r1.this$0 = r2
                r1.<init>()
                java.util.LinkedList r0 = new java.util.LinkedList
                r0.<init>()
                r1.callbackQueue = r0
                r1.mApi = r3
                android.os.Handler r2 = com.huawei.hms.common.internal.HuaweiApiManager.access$100(r2)
                android.os.Looper r2 = r2.getLooper()
                com.huawei.hms.common.internal.AnyClient r2 = r3.getClient(r2, r1)
                r1.mClient = r2
                r2 = 0
                r1.mConnectionResult = r2
                com.huawei.hms.common.internal.ConnectionManagerKey r2 = r3.getConnectionManagerKey()
                r1.mConnectionManagerKey = r2
                return
        }

        static com.huawei.hms.common.HuaweiApi access$200(com.huawei.hms.common.internal.HuaweiApiManager.ConnectionManager r0) {
                com.huawei.hms.common.HuaweiApi<OptionsT extends com.huawei.hms.api.Api$ApiOptions> r0 = r0.mApi
                return r0
        }

        static com.huawei.hms.common.internal.AnyClient access$300(com.huawei.hms.common.internal.HuaweiApiManager.ConnectionManager r0) {
                com.huawei.hms.common.internal.AnyClient r0 = r0.mClient
                return r0
        }

        static void access$500(com.huawei.hms.common.internal.HuaweiApiManager.ConnectionManager r0, com.huawei.hms.api.ConnectionResult r1) {
                r0.innerConnectionFailed(r1)
                return
        }

        static void access$600(com.huawei.hms.common.internal.HuaweiApiManager.ConnectionManager r0) {
                r0.innerConnected()
                return
        }

        static void access$700(com.huawei.hms.common.internal.HuaweiApiManager.ConnectionManager r0, int r1) {
                r0.innerConnectionSuspended(r1)
                return
        }

        private java.lang.String errorReason(com.huawei.hms.api.ConnectionResult r5) {
                r4 = this;
                com.huawei.hms.common.HuaweiApi<OptionsT extends com.huawei.hms.api.Api$ApiOptions> r0 = r4.mApi
                android.content.Context r0 = r0.getContext()
                boolean r0 = com.huawei.hms.utils.Util.isAvailableLibExist(r0)
                r1 = 10
                r2 = 8
                r3 = -1
                if (r0 == 0) goto L3c
                int r5 = r5.getErrorCode()
                if (r5 == r3) goto L4f
                r0 = 3
                if (r5 == r0) goto L39
                if (r5 == r2) goto L4c
                if (r5 == r1) goto L49
                r0 = 13
                if (r5 == r0) goto L36
                r0 = 21
                if (r5 == r0) goto L33
                switch(r5) {
                    case 25: goto L30;
                    case 26: goto L2d;
                    case 27: goto L2a;
                    default: goto L29;
                }
            L29:
                goto L46
            L2a:
                java.lang.String r5 = "there is already an update popup at the front desk, but it hasn't been clicked or it is not effective for a while"
                goto L51
            L2d:
                java.lang.String r5 = "update failed, because no activity incoming, can't pop update page"
                goto L51
            L30:
                java.lang.String r5 = "failed to get update result"
                goto L51
            L33:
                java.lang.String r5 = "device is too old to be support"
                goto L51
            L36:
                java.lang.String r5 = "update cancelled"
                goto L51
            L39:
                java.lang.String r5 = "HuaWei Mobile Service is disabled"
                goto L51
            L3c:
                int r5 = r5.getErrorCode()
                if (r5 == r3) goto L4f
                if (r5 == r2) goto L4c
                if (r5 == r1) goto L49
            L46:
                java.lang.String r5 = "unknown errorReason"
                goto L51
            L49:
                java.lang.String r5 = "application configuration error, please developer check configuration"
                goto L51
            L4c:
                java.lang.String r5 = "internal error"
                goto L51
            L4f:
                java.lang.String r5 = "get update result, but has other error codes"
            L51:
                return r5
        }

        private java.lang.String getTransactionId(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                boolean r0 = android.text.TextUtils.isEmpty(r2)
                if (r0 == 0) goto L10
                com.huawei.hms.common.HuaweiApi<OptionsT extends com.huawei.hms.api.Api$ApiOptions> r2 = r1.mApi
                java.lang.String r2 = r2.getAppID()
                java.lang.String r2 = com.huawei.hms.common.internal.TransactionIdCreater.getId(r2, r3)
            L10:
                return r2
        }

        private void innerConnected() {
                r2 = this;
                com.huawei.hms.common.internal.HuaweiApiManager r0 = r2.this$0
                android.os.Handler r0 = com.huawei.hms.common.internal.HuaweiApiManager.access$100(r0)
                com.huawei.hms.utils.Checker.assertHandlerThread(r0)
                r0 = 0
                r2.mConnectionResult = r0
                java.util.Queue<com.huawei.hms.common.internal.HuaweiApiManager$TaskApiCallbackWrapper> r0 = r2.callbackQueue
                java.util.Iterator r0 = r0.iterator()
            L12:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L22
                java.lang.Object r1 = r0.next()
                com.huawei.hms.common.internal.HuaweiApiManager$TaskApiCallbackWrapper r1 = (com.huawei.hms.common.internal.HuaweiApiManager.TaskApiCallbackWrapper) r1
                r2.postMessage(r1)
                goto L12
            L22:
                java.util.Queue<com.huawei.hms.common.internal.HuaweiApiManager$TaskApiCallbackWrapper> r0 = r2.callbackQueue
                r0.clear()
                return
        }

        private void innerConnectionFailed(com.huawei.hms.api.ConnectionResult r9) {
                r8 = this;
                com.huawei.hms.common.internal.HuaweiApiManager r0 = r8.this$0
                android.os.Handler r0 = com.huawei.hms.common.internal.HuaweiApiManager.access$100(r0)
                com.huawei.hms.utils.Checker.assertHandlerThread(r0)
                r8.mConnectionResult = r9
                java.util.Queue<com.huawei.hms.common.internal.HuaweiApiManager$TaskApiCallbackWrapper> r0 = r8.callbackQueue
                java.util.Iterator r0 = r0.iterator()
                r1 = 1
                r2 = r1
            L13:
                boolean r3 = r0.hasNext()
                r4 = 0
                if (r3 == 0) goto Lae
                java.lang.Object r3 = r0.next()
                com.huawei.hms.common.internal.HuaweiApiManager$TaskApiCallbackWrapper r3 = (com.huawei.hms.common.internal.HuaweiApiManager.TaskApiCallbackWrapper) r3
                com.huawei.hms.common.internal.TaskApiCallWrapper r3 = r3.getApiCallWrapper()
                com.huawei.hms.common.internal.ResponseHeader r5 = new com.huawei.hms.common.internal.ResponseHeader
                java.lang.StringBuilder r6 = new java.lang.StringBuilder
                r6.<init>()
                java.lang.String r7 = "Connection Failed:"
                r6.append(r7)
                java.lang.String r7 = r8.errorReason(r9)
                r6.append(r7)
                java.lang.String r7 = "("
                r6.append(r7)
                int r7 = r9.getErrorCode()
                r6.append(r7)
                java.lang.String r7 = ")"
                r6.append(r7)
                java.lang.String r6 = r6.toString()
                r7 = 907135003(0x3611c81b, float:2.172316E-6)
                r5.<init>(r1, r7, r6)
                com.huawei.hms.common.internal.TaskApiCall r6 = r3.getTaskApiCall()
                java.lang.String r6 = r6.getTransactionId()
                r5.setTransactionId(r6)
                com.huawei.hms.common.HuaweiApi<OptionsT extends com.huawei.hms.api.Api$ApiOptions> r6 = r8.mApi
                android.content.Context r6 = r6.getContext()
                com.huawei.hms.common.HuaweiApi<OptionsT extends com.huawei.hms.api.Api$ApiOptions> r7 = r8.mApi
                int r7 = r7.getKitSdkVersion()
                java.lang.String r7 = java.lang.String.valueOf(r7)
                com.huawei.hms.support.hianalytics.b.a(r6, r5, r7)
                com.huawei.hms.api.ConnectionResult r6 = r8.mConnectionResult
                android.app.PendingIntent r6 = r6.getResolution()
                if (r6 == 0) goto L9f
                if (r2 == 0) goto L9f
                com.huawei.hms.api.ConnectionResult r2 = r8.mConnectionResult
                android.app.PendingIntent r2 = r2.getResolution()
                r5.setParcelable(r2)
                r2 = 0
                com.huawei.hms.common.HuaweiApi<OptionsT extends com.huawei.hms.api.Api$ApiOptions> r6 = r8.mApi
                android.content.Context r6 = r6.getContext()
                boolean r6 = com.huawei.hms.utils.Util.isAvailableLibExist(r6)
                if (r6 == 0) goto L9f
                com.huawei.hms.api.ConnectionResult r6 = r8.mConnectionResult
                int r6 = r6.getErrorCode()
                r7 = 26
                if (r6 != r7) goto L9f
                java.lang.String r6 = "hasContextResolution"
                r5.setResolution(r6)
            L9f:
                com.huawei.hms.common.internal.TaskApiCall r6 = r3.getTaskApiCall()
                com.huawei.hms.common.internal.AnyClient r7 = r8.mClient
                com.huawei.hmf.tasks.TaskCompletionSource r3 = r3.getTaskCompletionSource()
                r6.onResponse(r7, r5, r4, r3)
                goto L13
            Lae:
                java.util.Queue<com.huawei.hms.common.internal.HuaweiApiManager$TaskApiCallbackWrapper> r9 = r8.callbackQueue
                r9.clear()
                r8.mConnectionResult = r4
                com.huawei.hms.common.internal.AnyClient r9 = r8.mClient
                r9.disconnect()
                com.huawei.hms.common.internal.HuaweiApiManager r9 = r8.this$0
                java.util.Map r9 = com.huawei.hms.common.internal.HuaweiApiManager.access$400(r9)
                com.huawei.hms.common.internal.ConnectionManagerKey r0 = r8.mConnectionManagerKey
                r9.remove(r0)
                return
        }

        private void innerConnectionSuspended(int r7) {
                r6 = this;
                com.huawei.hms.common.internal.HuaweiApiManager r7 = r6.this$0
                android.os.Handler r7 = com.huawei.hms.common.internal.HuaweiApiManager.access$100(r7)
                com.huawei.hms.utils.Checker.assertHandlerThread(r7)
                java.util.Queue<com.huawei.hms.common.internal.HuaweiApiManager$TaskApiCallbackWrapper> r7 = r6.callbackQueue
                java.util.Iterator r7 = r7.iterator()
            Lf:
                boolean r0 = r7.hasNext()
                r1 = 0
                if (r0 == 0) goto L44
                java.lang.Object r0 = r7.next()
                com.huawei.hms.common.internal.HuaweiApiManager$TaskApiCallbackWrapper r0 = (com.huawei.hms.common.internal.HuaweiApiManager.TaskApiCallbackWrapper) r0
                com.huawei.hms.common.internal.TaskApiCallWrapper r0 = r0.getApiCallWrapper()
                com.huawei.hms.common.internal.ResponseHeader r2 = new com.huawei.hms.common.internal.ResponseHeader
                r3 = 1
                r4 = 907135003(0x3611c81b, float:2.172316E-6)
                java.lang.String r5 = "Connection Suspended"
                r2.<init>(r3, r4, r5)
                com.huawei.hms.common.internal.TaskApiCall r3 = r0.getTaskApiCall()
                java.lang.String r3 = r3.getTransactionId()
                r2.setTransactionId(r3)
                com.huawei.hms.common.internal.TaskApiCall r3 = r0.getTaskApiCall()
                com.huawei.hms.common.internal.AnyClient r4 = r6.mClient
                com.huawei.hmf.tasks.TaskCompletionSource r0 = r0.getTaskCompletionSource()
                r3.onResponse(r4, r2, r1, r0)
                goto Lf
            L44:
                java.util.Queue<com.huawei.hms.common.internal.HuaweiApiManager$TaskApiCallbackWrapper> r7 = r6.callbackQueue
                r7.clear()
                r6.mConnectionResult = r1
                com.huawei.hms.common.internal.AnyClient r7 = r6.mClient
                r7.disconnect()
                com.huawei.hms.common.internal.HuaweiApiManager r7 = r6.this$0
                java.util.Map r7 = com.huawei.hms.common.internal.HuaweiApiManager.access$400(r7)
                com.huawei.hms.common.internal.ConnectionManagerKey r0 = r6.mConnectionManagerKey
                r7.remove(r0)
                return
        }

        private void postMessage(com.huawei.hms.common.internal.HuaweiApiManager.TaskApiCallbackWrapper r5) {
                r4 = this;
                com.huawei.hms.common.internal.TaskApiCallWrapper r0 = r5.getApiCallWrapper()
                com.huawei.hms.common.internal.TaskApiCall r0 = r0.getTaskApiCall()
                java.lang.String r0 = r0.getUri()
                com.huawei.hms.common.internal.RequestHeader r1 = new com.huawei.hms.common.internal.RequestHeader
                r1.<init>()
                java.lang.String r2 = "\\."
                java.lang.String[] r2 = r0.split(r2)
                r3 = 0
                r2 = r2[r3]
                r1.setSrvName(r2)
                r1.setApiName(r0)
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                com.huawei.hms.common.HuaweiApi<OptionsT extends com.huawei.hms.api.Api$ApiOptions> r3 = r4.mApi
                java.lang.String r3 = r3.getAppID()
                r2.append(r3)
                java.lang.String r3 = "|"
                r2.append(r3)
                com.huawei.hms.common.HuaweiApi<OptionsT extends com.huawei.hms.api.Api$ApiOptions> r3 = r4.mApi
                java.lang.String r3 = r3.getSubAppID()
                r2.append(r3)
                java.lang.String r2 = r2.toString()
                r1.setAppID(r2)
                com.huawei.hms.common.HuaweiApi<OptionsT extends com.huawei.hms.api.Api$ApiOptions> r2 = r4.mApi
                android.content.Context r2 = r2.getContext()
                java.lang.String r2 = r2.getPackageName()
                r1.setPkgName(r2)
                com.huawei.hms.common.internal.AnyClient r2 = r4.mClient
                java.lang.String r2 = r2.getSessionId()
                r1.setSessionId(r2)
                com.huawei.hms.common.internal.TaskApiCallWrapper r2 = r5.getApiCallWrapper()
                com.huawei.hms.common.internal.TaskApiCall r2 = r2.getTaskApiCall()
                java.lang.String r3 = r2.getTransactionId()
                java.lang.String r0 = r4.getTransactionId(r3, r0)
                r1.setTransactionId(r0)
                android.os.Parcelable r0 = r2.getParcelable()
                r1.setParcelable(r0)
                com.huawei.hms.common.HuaweiApi<OptionsT extends com.huawei.hms.api.Api$ApiOptions> r0 = r4.mApi
                int r0 = r0.getKitSdkVersion()
                r1.setKitSdkVersion(r0)
                com.huawei.hms.common.HuaweiApi<OptionsT extends com.huawei.hms.api.Api$ApiOptions> r0 = r4.mApi
                int r0 = r0.getApiLevel()
                int r3 = r2.getApiLevel()
                int r0 = java.lang.Math.max(r0, r3)
                r1.setApiLevel(r0)
                com.huawei.hms.common.internal.AnyClient r0 = r4.mClient
                java.lang.String r2 = r2.getRequestJson()
                com.huawei.hms.common.internal.AnyClient$CallBack r5 = r5.getCallBack()
                r0.post(r1, r2, r5)
                return
        }

        private com.huawei.hms.common.internal.HuaweiApiManager.TaskApiCallbackWrapper wrapperRequest(com.huawei.hms.common.internal.TaskApiCallWrapper r3) {
                r2 = this;
                com.huawei.hms.common.internal.HuaweiApiManager$TaskApiCallbackWrapper r0 = new com.huawei.hms.common.internal.HuaweiApiManager$TaskApiCallbackWrapper
                com.huawei.hms.common.internal.HuaweiApiManager$ConnectionManager$1 r1 = new com.huawei.hms.common.internal.HuaweiApiManager$ConnectionManager$1
                r1.<init>(r2, r3)
                r0.<init>(r3, r1)
                return r0
        }

        synchronized void connect(int r3) {
                r2 = this;
                monitor-enter(r2)
                com.huawei.hms.common.internal.HuaweiApiManager r0 = r2.this$0     // Catch: java.lang.Throwable -> L66
                android.os.Handler r0 = com.huawei.hms.common.internal.HuaweiApiManager.access$100(r0)     // Catch: java.lang.Throwable -> L66
                com.huawei.hms.utils.Checker.assertHandlerThread(r0)     // Catch: java.lang.Throwable -> L66
                com.huawei.hms.common.internal.AnyClient r0 = r2.mClient     // Catch: java.lang.Throwable -> L66
                boolean r0 = r0.isConnected()     // Catch: java.lang.Throwable -> L66
                if (r0 == 0) goto L1b
                java.lang.String r3 = "HuaweiApiManager"
                java.lang.String r0 = "client is connected"
                com.huawei.hms.support.log.HMSLog.d(r3, r0)     // Catch: java.lang.Throwable -> L66
                monitor-exit(r2)
                return
            L1b:
                com.huawei.hms.common.internal.AnyClient r0 = r2.mClient     // Catch: java.lang.Throwable -> L66
                boolean r0 = r0.isConnecting()     // Catch: java.lang.Throwable -> L66
                if (r0 == 0) goto L2c
                java.lang.String r3 = "HuaweiApiManager"
                java.lang.String r0 = "client is isConnecting"
                com.huawei.hms.support.log.HMSLog.d(r3, r0)     // Catch: java.lang.Throwable -> L66
                monitor-exit(r2)
                return
            L2c:
                com.huawei.hms.common.HuaweiApi<OptionsT extends com.huawei.hms.api.Api$ApiOptions> r0 = r2.mApi     // Catch: java.lang.Throwable -> L66
                android.app.Activity r0 = r0.getActivity()     // Catch: java.lang.Throwable -> L66
                if (r0 == 0) goto L5f
                com.huawei.hms.common.internal.ResolveClientBean r0 = r2.mResolveClientBean     // Catch: java.lang.Throwable -> L66
                if (r0 != 0) goto L41
                com.huawei.hms.common.internal.ResolveClientBean r0 = new com.huawei.hms.common.internal.ResolveClientBean     // Catch: java.lang.Throwable -> L66
                com.huawei.hms.common.internal.AnyClient r1 = r2.mClient     // Catch: java.lang.Throwable -> L66
                r0.<init>(r1, r3)     // Catch: java.lang.Throwable -> L66
                r2.mResolveClientBean = r0     // Catch: java.lang.Throwable -> L66
            L41:
                com.huawei.hms.common.internal.BindResolveClients r0 = com.huawei.hms.common.internal.BindResolveClients.getInstance()     // Catch: java.lang.Throwable -> L66
                com.huawei.hms.common.internal.ResolveClientBean r1 = r2.mResolveClientBean     // Catch: java.lang.Throwable -> L66
                boolean r0 = r0.isClientRegistered(r1)     // Catch: java.lang.Throwable -> L66
                if (r0 == 0) goto L56
                java.lang.String r3 = "HuaweiApiManager"
                java.lang.String r0 = "mResolveClientBean has already register, return!"
                com.huawei.hms.support.log.HMSLog.i(r3, r0)     // Catch: java.lang.Throwable -> L66
                monitor-exit(r2)
                return
            L56:
                com.huawei.hms.common.internal.BindResolveClients r0 = com.huawei.hms.common.internal.BindResolveClients.getInstance()     // Catch: java.lang.Throwable -> L66
                com.huawei.hms.common.internal.ResolveClientBean r1 = r2.mResolveClientBean     // Catch: java.lang.Throwable -> L66
                r0.register(r1)     // Catch: java.lang.Throwable -> L66
            L5f:
                com.huawei.hms.common.internal.AnyClient r0 = r2.mClient     // Catch: java.lang.Throwable -> L66
                r0.connect(r3)     // Catch: java.lang.Throwable -> L66
                monitor-exit(r2)
                return
            L66:
                r3 = move-exception
                monitor-exit(r2)
                throw r3
        }

        boolean disconnect() {
                r1 = this;
                com.huawei.hms.common.internal.HuaweiApiManager r0 = r1.this$0
                android.os.Handler r0 = com.huawei.hms.common.internal.HuaweiApiManager.access$100(r0)
                com.huawei.hms.utils.Checker.assertHandlerThread(r0)
                com.huawei.hms.common.internal.AnyClient r0 = r1.mClient
                r0.disconnect()
                r0 = 1
                return r0
        }

        @Override
        public void onConnected() {
                r2 = this;
                java.lang.String r0 = "HuaweiApiManager"
                java.lang.String r1 = "onConnected"
                com.huawei.hms.support.log.HMSLog.d(r0, r1)
                com.huawei.hms.common.internal.BindResolveClients r0 = com.huawei.hms.common.internal.BindResolveClients.getInstance()
                com.huawei.hms.common.internal.ResolveClientBean r1 = r2.mResolveClientBean
                r0.unRegister(r1)
                r0 = 0
                r2.mResolveClientBean = r0
                android.os.Looper r0 = android.os.Looper.myLooper()
                com.huawei.hms.common.internal.HuaweiApiManager r1 = r2.this$0
                android.os.Handler r1 = com.huawei.hms.common.internal.HuaweiApiManager.access$100(r1)
                android.os.Looper r1 = r1.getLooper()
                if (r0 != r1) goto L27
                r2.innerConnected()
                goto L35
            L27:
                com.huawei.hms.common.internal.HuaweiApiManager r0 = r2.this$0
                android.os.Handler r0 = com.huawei.hms.common.internal.HuaweiApiManager.access$100(r0)
                com.huawei.hms.common.internal.HuaweiApiManager$ConnectionManager$3 r1 = new com.huawei.hms.common.internal.HuaweiApiManager$ConnectionManager$3
                r1.<init>(r2)
                r0.post(r1)
            L35:
                return
        }

        @Override
        public void onConnectionFailed(com.huawei.hms.api.ConnectionResult r3) {
                r2 = this;
                java.lang.String r0 = "HuaweiApiManager"
                java.lang.String r1 = "onConnectionFailed"
                com.huawei.hms.support.log.HMSLog.i(r0, r1)
                com.huawei.hms.common.internal.BindResolveClients r0 = com.huawei.hms.common.internal.BindResolveClients.getInstance()
                com.huawei.hms.common.internal.ResolveClientBean r1 = r2.mResolveClientBean
                r0.unRegister(r1)
                r0 = 0
                r2.mResolveClientBean = r0
                android.os.Looper r0 = android.os.Looper.myLooper()
                com.huawei.hms.common.internal.HuaweiApiManager r1 = r2.this$0
                android.os.Handler r1 = com.huawei.hms.common.internal.HuaweiApiManager.access$100(r1)
                android.os.Looper r1 = r1.getLooper()
                if (r0 != r1) goto L27
                r2.innerConnectionFailed(r3)
                goto L35
            L27:
                com.huawei.hms.common.internal.HuaweiApiManager r0 = r2.this$0
                android.os.Handler r0 = com.huawei.hms.common.internal.HuaweiApiManager.access$100(r0)
                com.huawei.hms.common.internal.HuaweiApiManager$ConnectionManager$2 r1 = new com.huawei.hms.common.internal.HuaweiApiManager$ConnectionManager$2
                r1.<init>(r2, r3)
                r0.post(r1)
            L35:
                return
        }

        @Override
        public void onConnectionSuspended(int r3) {
                r2 = this;
                java.lang.String r0 = "HuaweiApiManager"
                java.lang.String r1 = "onConnectionSuspended"
                com.huawei.hms.support.log.HMSLog.i(r0, r1)
                com.huawei.hms.common.internal.BindResolveClients r0 = com.huawei.hms.common.internal.BindResolveClients.getInstance()
                com.huawei.hms.common.internal.ResolveClientBean r1 = r2.mResolveClientBean
                r0.unRegister(r1)
                r0 = 0
                r2.mResolveClientBean = r0
                android.os.Looper r0 = android.os.Looper.myLooper()
                com.huawei.hms.common.internal.HuaweiApiManager r1 = r2.this$0
                android.os.Handler r1 = com.huawei.hms.common.internal.HuaweiApiManager.access$100(r1)
                android.os.Looper r1 = r1.getLooper()
                if (r0 != r1) goto L27
                r2.innerConnectionSuspended(r3)
                goto L35
            L27:
                com.huawei.hms.common.internal.HuaweiApiManager r0 = r2.this$0
                android.os.Handler r0 = com.huawei.hms.common.internal.HuaweiApiManager.access$100(r0)
                com.huawei.hms.common.internal.HuaweiApiManager$ConnectionManager$4 r1 = new com.huawei.hms.common.internal.HuaweiApiManager$ConnectionManager$4
                r1.<init>(r2, r3)
                r0.post(r1)
            L35:
                return
        }

        void sendRequest(com.huawei.hms.common.internal.TaskApiCallWrapper r3) {
                r2 = this;
                java.lang.String r0 = "HuaweiApiManager"
                java.lang.String r1 = "sendRequest"
                com.huawei.hms.support.log.HMSLog.i(r0, r1)
                com.huawei.hms.common.internal.HuaweiApiManager r0 = r2.this$0
                android.os.Handler r0 = com.huawei.hms.common.internal.HuaweiApiManager.access$100(r0)
                com.huawei.hms.utils.Checker.assertHandlerThread(r0)
                com.huawei.hms.common.internal.HuaweiApiManager$TaskApiCallbackWrapper r0 = r2.wrapperRequest(r3)
                com.huawei.hms.common.internal.TaskApiCall r3 = r3.getTaskApiCall()
                int r3 = r3.getMinApkVersion()
                com.huawei.hms.common.internal.AnyClient r1 = r2.mClient
                boolean r1 = r1.isConnected()
                if (r1 == 0) goto L44
                com.huawei.hms.common.HuaweiApi<OptionsT extends com.huawei.hms.api.Api$ApiOptions> r1 = r2.mApi
                android.content.Context r1 = r1.getContext()
                com.huawei.hms.utils.HMSPackageManager r1 = com.huawei.hms.utils.HMSPackageManager.getInstance(r1)
                boolean r1 = r1.hmsVerHigherThan(r3)
                if (r1 == 0) goto L38
                r2.postMessage(r0)
                goto L5c
            L38:
                r2.disconnect()
                java.util.Queue<com.huawei.hms.common.internal.HuaweiApiManager$TaskApiCallbackWrapper> r1 = r2.callbackQueue
                r1.add(r0)
                r2.connect(r3)
                goto L5c
            L44:
                java.util.Queue<com.huawei.hms.common.internal.HuaweiApiManager$TaskApiCallbackWrapper> r1 = r2.callbackQueue
                r1.add(r0)
                com.huawei.hms.api.ConnectionResult r0 = r2.mConnectionResult
                if (r0 == 0) goto L59
                int r0 = r0.getErrorCode()
                if (r0 == 0) goto L59
                com.huawei.hms.api.ConnectionResult r3 = r2.mConnectionResult
                r2.onConnectionFailed(r3)
                goto L5c
            L59:
                r2.connect(r3)
            L5c:
                return
        }
    }

    private static class TaskApiCallbackWrapper {
        private final com.huawei.hms.common.internal.TaskApiCallWrapper mApiCallWrapper;
        private final com.huawei.hms.common.internal.AnyClient.CallBack mCallBack;

        TaskApiCallbackWrapper(com.huawei.hms.common.internal.TaskApiCallWrapper r1, com.huawei.hms.common.internal.AnyClient.CallBack r2) {
                r0 = this;
                r0.<init>()
                r0.mApiCallWrapper = r1
                r0.mCallBack = r2
                return
        }

        com.huawei.hms.common.internal.TaskApiCallWrapper getApiCallWrapper() {
                r1 = this;
                com.huawei.hms.common.internal.TaskApiCallWrapper r0 = r1.mApiCallWrapper
                return r0
        }

        com.huawei.hms.common.internal.AnyClient.CallBack getCallBack() {
                r1 = this;
                com.huawei.hms.common.internal.AnyClient$CallBack r0 = r1.mCallBack
                return r0
        }
    }

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.hms.common.internal.HuaweiApiManager.LOCK_OBJECT = r0
            return
    }

    private HuaweiApiManager(android.content.Context r3, android.os.Looper r4, com.huawei.hms.api.HuaweiApiAvailability r5) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.atomic.AtomicInteger r3 = new java.util.concurrent.atomic.AtomicInteger
            r5 = 0
            r3.<init>(r5)
            r2.mSerial = r3
            java.util.concurrent.ConcurrentHashMap r3 = new java.util.concurrent.ConcurrentHashMap
            r5 = 5
            r0 = 1061158912(0x3f400000, float:0.75)
            r1 = 1
            r3.<init>(r5, r0, r1)
            r2.mConnectionCache = r3
            android.os.Handler r3 = new android.os.Handler
            r3.<init>(r4, r2)
            r2.mHandler = r3
            return
    }

    static void access$000(com.huawei.hms.common.internal.HuaweiApiManager r0, com.huawei.hms.common.HuaweiApi r1, com.huawei.hmf.tasks.TaskCompletionSource r2) {
            r0.innerDisconnect(r1, r2)
            return
    }

    static android.os.Handler access$100(com.huawei.hms.common.internal.HuaweiApiManager r0) {
            android.os.Handler r0 = r0.mHandler
            return r0
    }

    static java.util.Map access$400(com.huawei.hms.common.internal.HuaweiApiManager r0) {
            java.util.Map<com.huawei.hms.common.internal.ConnectionManagerKey<?>, com.huawei.hms.common.internal.HuaweiApiManager$ConnectionManager<?>> r0 = r0.mConnectionCache
            return r0
    }

    private void connectAndSendRequest(com.huawei.hms.common.internal.HandlerMessageWrapper r4) {
            r3 = this;
            com.huawei.hms.common.HuaweiApi<?> r0 = r4.mApi
            java.util.Map<com.huawei.hms.common.internal.ConnectionManagerKey<?>, com.huawei.hms.common.internal.HuaweiApiManager$ConnectionManager<?>> r1 = r3.mConnectionCache
            com.huawei.hms.common.internal.ConnectionManagerKey r2 = r0.getConnectionManagerKey()
            java.lang.Object r1 = r1.get(r2)
            com.huawei.hms.common.internal.HuaweiApiManager$ConnectionManager r1 = (com.huawei.hms.common.internal.HuaweiApiManager.ConnectionManager) r1
            if (r1 != 0) goto L1e
            com.huawei.hms.common.internal.HuaweiApiManager$ConnectionManager r1 = new com.huawei.hms.common.internal.HuaweiApiManager$ConnectionManager
            r1.<init>(r3, r0)
            java.util.Map<com.huawei.hms.common.internal.ConnectionManagerKey<?>, com.huawei.hms.common.internal.HuaweiApiManager$ConnectionManager<?>> r2 = r3.mConnectionCache
            com.huawei.hms.common.internal.ConnectionManagerKey r0 = r0.getConnectionManagerKey()
            r2.put(r0, r1)
        L1e:
            com.huawei.hms.common.internal.BaseContentWrapper r4 = r4.mContentWrapper
            com.huawei.hms.common.internal.TaskApiCallWrapper r4 = (com.huawei.hms.common.internal.TaskApiCallWrapper) r4
            r1.sendRequest(r4)
            return
    }

    public static com.huawei.hms.common.internal.HuaweiApiManager getInstance(android.content.Context r4) {
            java.lang.Object r0 = com.huawei.hms.common.internal.HuaweiApiManager.LOCK_OBJECT
            monitor-enter(r0)
            com.huawei.hms.common.internal.HuaweiApiManager r1 = com.huawei.hms.common.internal.HuaweiApiManager.mInstance     // Catch: java.lang.Throwable -> L28
            if (r1 != 0) goto L24
            android.os.HandlerThread r1 = new android.os.HandlerThread     // Catch: java.lang.Throwable -> L28
            java.lang.String r2 = "HuaweiApiManager"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L28
            r1.start()     // Catch: java.lang.Throwable -> L28
            com.huawei.hms.common.internal.HuaweiApiManager r2 = new com.huawei.hms.common.internal.HuaweiApiManager     // Catch: java.lang.Throwable -> L28
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L28
            android.os.Looper r1 = r1.getLooper()     // Catch: java.lang.Throwable -> L28
            com.huawei.hms.api.HuaweiApiAvailability r3 = com.huawei.hms.api.HuaweiApiAvailability.getInstance()     // Catch: java.lang.Throwable -> L28
            r2.<init>(r4, r1, r3)     // Catch: java.lang.Throwable -> L28
            com.huawei.hms.common.internal.HuaweiApiManager.mInstance = r2     // Catch: java.lang.Throwable -> L28
        L24:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L28
            com.huawei.hms.common.internal.HuaweiApiManager r4 = com.huawei.hms.common.internal.HuaweiApiManager.mInstance
            return r4
        L28:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L28
            throw r4
    }

    private void innerDisconnect(com.huawei.hms.common.HuaweiApi<?> r2, com.huawei.hmf.tasks.TaskCompletionSource<java.lang.Boolean> r3) {
            r1 = this;
            java.util.Map<com.huawei.hms.common.internal.ConnectionManagerKey<?>, com.huawei.hms.common.internal.HuaweiApiManager$ConnectionManager<?>> r0 = r1.mConnectionCache
            com.huawei.hms.common.internal.ConnectionManagerKey r2 = r2.getConnectionManagerKey()
            java.lang.Object r2 = r0.get(r2)
            com.huawei.hms.common.internal.HuaweiApiManager$ConnectionManager r2 = (com.huawei.hms.common.internal.HuaweiApiManager.ConnectionManager) r2
            if (r2 != 0) goto L17
            r2 = 0
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            r3.setResult(r2)
            goto L22
        L17:
            boolean r2 = r2.disconnect()
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            r3.setResult(r2)
        L22:
            return
    }

    public void disconnectService(com.huawei.hms.common.HuaweiApi<?> r3, com.huawei.hmf.tasks.TaskCompletionSource<java.lang.Boolean> r4) {
            r2 = this;
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Handler r1 = r2.mHandler
            android.os.Looper r1 = r1.getLooper()
            if (r0 != r1) goto L10
            r2.innerDisconnect(r3, r4)
            goto L1a
        L10:
            android.os.Handler r0 = r2.mHandler
            com.huawei.hms.common.internal.HuaweiApiManager$1 r1 = new com.huawei.hms.common.internal.HuaweiApiManager$1
            r1.<init>(r2, r3, r4)
            r0.post(r1)
        L1a:
            return
    }

    @Override
    public boolean handleMessage(android.os.Message r3) {
            r2 = this;
            int r0 = r3.what
            r1 = 4
            if (r0 == r1) goto L1f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unknown message id: "
            r0.append(r1)
            int r3 = r3.what
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "HuaweiApiManager"
            com.huawei.hms.support.log.HMSLog.w(r0, r3)
            r3 = 0
            return r3
        L1f:
            java.lang.Object r3 = r3.obj
            com.huawei.hms.common.internal.HandlerMessageWrapper r3 = (com.huawei.hms.common.internal.HandlerMessageWrapper) r3
            r2.connectAndSendRequest(r3)
            r3 = 1
            return r3
    }

    public final <TOption extends com.huawei.hms.api.Api.ApiOptions, TResult> void sendRequest(com.huawei.hms.common.HuaweiApi<TOption> r3, com.huawei.hms.common.internal.TaskApiCall<? extends com.huawei.hms.common.internal.AnyClient, TResult> r4, com.huawei.hmf.tasks.TaskCompletionSource<TResult> r5) {
            r2 = this;
            com.huawei.hms.common.internal.TaskApiCallWrapper r0 = new com.huawei.hms.common.internal.TaskApiCallWrapper
            r0.<init>(r4, r5)
            android.os.Handler r4 = r2.mHandler
            com.huawei.hms.common.internal.HandlerMessageWrapper r5 = new com.huawei.hms.common.internal.HandlerMessageWrapper
            java.util.concurrent.atomic.AtomicInteger r1 = r2.mSerial
            int r1 = r1.getAndIncrement()
            r5.<init>(r0, r1, r3)
            r3 = 4
            android.os.Message r3 = r4.obtainMessage(r3, r5)
            r4.sendMessage(r3)
            return
    }
}
