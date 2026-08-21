package com.huawei.hms.api;

public class HuaweiApiClientImpl extends com.huawei.hms.api.HuaweiApiClient implements com.huawei.hms.support.api.client.InnerApiClient, android.content.ServiceConnection {
    private static final java.lang.Object B = null;
    private static final java.lang.Object C = null;
    public static final java.lang.String DEFAULT_ACCOUNT = "<<default account>>";
    public static final int SIGN_IN_MODE_OPTIONAL = 2;
    public static final int SIGN_IN_MODE_REQUIRED = 1;
    private com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack A;
    private int a;
    private final android.content.Context b;
    private final java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private volatile com.huawei.hms.core.aidl.d f;
    private java.lang.String g;
    private java.lang.ref.WeakReference<android.app.Activity> h;
    private java.lang.ref.WeakReference<android.app.Activity> i;
    private boolean j;
    private java.util.concurrent.atomic.AtomicInteger k;
    private java.util.List<com.huawei.hms.support.api.entity.auth.Scope> l;
    private java.util.List<com.huawei.hms.support.api.entity.auth.PermissionInfo> m;
    private java.util.Map<com.huawei.hms.api.Api<?>, com.huawei.hms.api.Api.ApiOptions> n;
    private com.huawei.hms.support.api.client.SubAppInfo o;
    private long p;
    private int q;
    private final java.lang.Object r;
    private final java.util.concurrent.locks.ReentrantLock s;
    private final java.util.concurrent.locks.Condition t;
    private com.huawei.hms.api.ConnectionResult u;
    private com.huawei.hms.api.HuaweiApiClient.ConnectionCallbacks v;
    private com.huawei.hms.api.HuaweiApiClient.OnConnectionFailedListener w;
    private android.os.Handler x;
    private android.os.Handler y;
    private com.huawei.hms.api.CheckUpdatelistener z;

    class a implements com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack {
        final com.huawei.hms.api.HuaweiApiClientImpl a;

        a(com.huawei.hms.api.HuaweiApiClientImpl r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onMarketInstallInfo(android.content.Intent r5) {
                r4 = this;
                if (r5 == 0) goto L3c
                r0 = -99
                java.lang.String r1 = "downloadStatus"
                int r1 = r5.getIntExtra(r1, r0)
                java.lang.String r2 = "installState"
                int r2 = r5.getIntExtra(r2, r0)
                java.lang.String r3 = "installType"
                int r5 = r5.getIntExtra(r3, r0)
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r3 = "onMarketInstallInfo installState: "
                r0.append(r3)
                r0.append(r2)
                java.lang.String r2 = ",installType: "
                r0.append(r2)
                r0.append(r5)
                java.lang.String r5 = ",downloadCode: "
                r0.append(r5)
                r0.append(r1)
                java.lang.String r5 = r0.toString()
                java.lang.String r0 = "HuaweiApiClientImpl"
                com.huawei.hms.support.log.HMSLog.i(r0, r5)
            L3c:
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
                java.lang.String r0 = "HuaweiApiClientImpl"
                com.huawei.hms.support.log.HMSLog.e(r0, r3)
                return
        }

        @Override
        public void onUpdateInfo(android.content.Intent r9) {
                r8 = this;
                java.lang.String r0 = "HuaweiApiClientImpl"
                if (r9 == 0) goto Lb5
                com.huawei.hms.api.HuaweiApiClientImpl r1 = r8.a
                com.huawei.hms.api.CheckUpdatelistener r1 = com.huawei.hms.api.HuaweiApiClientImpl.a(r1)
                if (r1 == 0) goto Lb5
                r1 = -1
                java.lang.String r2 = "status"
                r3 = -99
                int r2 = r9.getIntExtra(r2, r3)     // Catch: java.lang.Exception -> L93
                java.lang.String r4 = "failcause"
                int r3 = r9.getIntExtra(r4, r3)     // Catch: java.lang.Exception -> L93
                java.lang.String r4 = "compulsoryUpdateCancel"
                r5 = 0
                boolean r4 = r9.getBooleanExtra(r4, r5)     // Catch: java.lang.Exception -> L93
                java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L93
                r6.<init>()     // Catch: java.lang.Exception -> L93
                java.lang.String r7 = "onUpdateInfo status: "
                r6.append(r7)     // Catch: java.lang.Exception -> L93
                r6.append(r2)     // Catch: java.lang.Exception -> L93
                java.lang.String r7 = ",failcause: "
                r6.append(r7)     // Catch: java.lang.Exception -> L93
                r6.append(r3)     // Catch: java.lang.Exception -> L93
                java.lang.String r3 = ",isExit: "
                r6.append(r3)     // Catch: java.lang.Exception -> L93
                r6.append(r4)     // Catch: java.lang.Exception -> L93
                java.lang.String r3 = r6.toString()     // Catch: java.lang.Exception -> L93
                com.huawei.hms.support.log.HMSLog.i(r0, r3)     // Catch: java.lang.Exception -> L93
                r3 = 7
                if (r2 != r3) goto L76
                java.lang.String r1 = "updatesdk_update_info"
                java.io.Serializable r9 = r9.getSerializableExtra(r1)
                com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r9 = (com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo) r9
                if (r9 == 0) goto L6b
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "onUpdateInfo: "
                r1.append(r2)
                java.lang.String r9 = r9.toString()
                r1.append(r9)
                java.lang.String r9 = r1.toString()
                com.huawei.hms.support.log.HMSLog.i(r0, r9)
            L6b:
                com.huawei.hms.api.HuaweiApiClientImpl r9 = r8.a
                com.huawei.hms.api.CheckUpdatelistener r9 = com.huawei.hms.api.HuaweiApiClientImpl.a(r9)
                r0 = 1
                r9.onResult(r0)
                goto L8c
            L76:
                r9 = 3
                if (r2 != r9) goto L83
                com.huawei.hms.api.HuaweiApiClientImpl r9 = r8.a
                com.huawei.hms.api.CheckUpdatelistener r9 = com.huawei.hms.api.HuaweiApiClientImpl.a(r9)
                r9.onResult(r5)
                goto L8c
            L83:
                com.huawei.hms.api.HuaweiApiClientImpl r9 = r8.a
                com.huawei.hms.api.CheckUpdatelistener r9 = com.huawei.hms.api.HuaweiApiClientImpl.a(r9)
                r9.onResult(r1)
            L8c:
                com.huawei.hms.api.HuaweiApiClientImpl r9 = r8.a
                r0 = 0
                com.huawei.hms.api.HuaweiApiClientImpl.a(r9, r0)
                goto Lb5
            L93:
                r9 = move-exception
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = "intent has some error"
                r2.append(r3)
                java.lang.String r9 = r9.getMessage()
                r2.append(r9)
                java.lang.String r9 = r2.toString()
                com.huawei.hms.support.log.HMSLog.e(r0, r9)
                com.huawei.hms.api.HuaweiApiClientImpl r9 = r8.a
                com.huawei.hms.api.CheckUpdatelistener r9 = com.huawei.hms.api.HuaweiApiClientImpl.a(r9)
                r9.onResult(r1)
            Lb5:
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
                java.lang.String r0 = "HuaweiApiClientImpl"
                com.huawei.hms.support.log.HMSLog.e(r0, r3)
                return
        }
    }

    class b implements android.os.Handler.Callback {
        final com.huawei.hms.api.HuaweiApiClientImpl a;

        b(com.huawei.hms.api.HuaweiApiClientImpl r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public boolean handleMessage(android.os.Message r3) {
                r2 = this;
                if (r3 == 0) goto L28
                int r3 = r3.what
                r0 = 2
                if (r3 == r0) goto L8
                goto L28
            L8:
                java.lang.String r3 = "HuaweiApiClientImpl"
                java.lang.String r0 = "In connect, bind core service time out"
                com.huawei.hms.support.log.HMSLog.e(r3, r0)
                com.huawei.hms.api.HuaweiApiClientImpl r3 = r2.a
                java.util.concurrent.atomic.AtomicInteger r3 = com.huawei.hms.api.HuaweiApiClientImpl.b(r3)
                int r3 = r3.get()
                r0 = 5
                r1 = 1
                if (r3 != r0) goto L27
                com.huawei.hms.api.HuaweiApiClientImpl r3 = r2.a
                com.huawei.hms.api.HuaweiApiClientImpl.a(r3, r1)
                com.huawei.hms.api.HuaweiApiClientImpl r3 = r2.a
                com.huawei.hms.api.HuaweiApiClientImpl.c(r3)
            L27:
                return r1
            L28:
                r3 = 0
                return r3
        }
    }

    class c implements android.os.Handler.Callback {
        final com.huawei.hms.api.HuaweiApiClientImpl a;

        c(com.huawei.hms.api.HuaweiApiClientImpl r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public boolean handleMessage(android.os.Message r3) {
                r2 = this;
                if (r3 == 0) goto L28
                int r3 = r3.what
                r0 = 3
                if (r3 == r0) goto L8
                goto L28
            L8:
                java.lang.String r3 = "HuaweiApiClientImpl"
                java.lang.String r0 = "In connect, process time out"
                com.huawei.hms.support.log.HMSLog.e(r3, r0)
                com.huawei.hms.api.HuaweiApiClientImpl r3 = r2.a
                java.util.concurrent.atomic.AtomicInteger r3 = com.huawei.hms.api.HuaweiApiClientImpl.b(r3)
                int r3 = r3.get()
                r0 = 2
                r1 = 1
                if (r3 != r0) goto L27
                com.huawei.hms.api.HuaweiApiClientImpl r3 = r2.a
                com.huawei.hms.api.HuaweiApiClientImpl.a(r3, r1)
                com.huawei.hms.api.HuaweiApiClientImpl r3 = r2.a
                com.huawei.hms.api.HuaweiApiClientImpl.c(r3)
            L27:
                return r1
            L28:
                r3 = 0
                return r3
        }
    }

    class d extends com.huawei.hms.core.aidl.c.a {
        final com.huawei.hms.support.api.client.ResultCallback a;

        d(com.huawei.hms.api.HuaweiApiClientImpl r1, com.huawei.hms.support.api.client.ResultCallback r2) {
                r0 = this;
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public void call(com.huawei.hms.core.aidl.b r5) {
                r4 = this;
                java.lang.String r0 = "HuaweiApiClientImpl"
                if (r5 == 0) goto L2e
                int r1 = r5.c()
                com.huawei.hms.core.aidl.e r1 = com.huawei.hms.core.aidl.a.a(r1)
                com.huawei.hms.core.aidl.ResponseHeader r2 = new com.huawei.hms.core.aidl.ResponseHeader
                r2.<init>()
                android.os.Bundle r3 = r5.b
                r1.a(r3, r2)
                com.huawei.hms.support.api.client.BundleResult r1 = new com.huawei.hms.support.api.client.BundleResult
                int r2 = r2.getStatusCode()
                android.os.Bundle r5 = r5.a()
                r1.<init>(r2, r5)
                java.lang.String r5 = "Exit asyncRequest onResult"
                com.huawei.hms.support.log.HMSLog.i(r0, r5)
                com.huawei.hms.support.api.client.ResultCallback r5 = r4.a
                r5.onResult(r1)
                goto L3f
            L2e:
                java.lang.String r5 = "Exit asyncRequest onResult -1"
                com.huawei.hms.support.log.HMSLog.i(r0, r5)
                com.huawei.hms.support.api.client.ResultCallback r5 = r4.a
                com.huawei.hms.support.api.client.BundleResult r0 = new com.huawei.hms.support.api.client.BundleResult
                r1 = -1
                r2 = 0
                r0.<init>(r1, r2)
                r5.onResult(r0)
            L3f:
                return
        }
    }

    static class e extends com.huawei.hms.support.api.PendingResultImpl<com.huawei.hms.support.api.client.Status, com.huawei.hms.core.aidl.IMessageEntity> {
        public e(com.huawei.hms.support.api.client.ApiClient r1, java.lang.String r2, com.huawei.hms.core.aidl.IMessageEntity r3) {
                r0 = this;
                r0.<init>(r1, r2, r3)
                return
        }

        @Override
        public com.huawei.hms.support.api.client.Result onComplete(com.huawei.hms.core.aidl.IMessageEntity r1) {
                r0 = this;
                com.huawei.hms.support.api.client.Status r1 = r0.onComplete(r1)
                return r1
        }

        @Override
        public com.huawei.hms.support.api.client.Status onComplete(com.huawei.hms.core.aidl.IMessageEntity r2) {
                r1 = this;
                com.huawei.hms.support.api.client.Status r2 = new com.huawei.hms.support.api.client.Status
                r0 = 0
                r2.<init>(r0)
                return r2
        }
    }

    private class f implements com.huawei.hms.support.api.client.ResultCallback<com.huawei.hms.support.api.ResolveResult<com.huawei.hms.support.api.entity.core.ConnectResp>> {
        final com.huawei.hms.api.HuaweiApiClientImpl a;

        class a implements java.lang.Runnable {
            final com.huawei.hms.support.api.ResolveResult a;
            final com.huawei.hms.api.HuaweiApiClientImpl.f b;

            a(com.huawei.hms.api.HuaweiApiClientImpl.f r1, com.huawei.hms.support.api.ResolveResult r2) {
                    r0 = this;
                    r0.b = r1
                    r0.a = r2
                    r0.<init>()
                    return
            }

            @Override
            public void run() {
                    r2 = this;
                    com.huawei.hms.api.HuaweiApiClientImpl$f r0 = r2.b
                    com.huawei.hms.api.HuaweiApiClientImpl r0 = r0.a
                    com.huawei.hms.support.api.ResolveResult r1 = r2.a
                    com.huawei.hms.api.HuaweiApiClientImpl.b(r0, r1)
                    return
            }
        }

        private f(com.huawei.hms.api.HuaweiApiClientImpl r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        f(com.huawei.hms.api.HuaweiApiClientImpl r1, com.huawei.hms.api.HuaweiApiClientImpl.a r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public void a(com.huawei.hms.support.api.ResolveResult<com.huawei.hms.support.api.entity.core.ConnectResp> r3) {
                r2 = this;
                android.os.Handler r0 = new android.os.Handler
                android.os.Looper r1 = android.os.Looper.getMainLooper()
                r0.<init>(r1)
                com.huawei.hms.api.HuaweiApiClientImpl$f$a r1 = new com.huawei.hms.api.HuaweiApiClientImpl$f$a
                r1.<init>(r2, r3)
                r0.post(r1)
                return
        }

        @Override
        public void onResult(com.huawei.hms.support.api.ResolveResult<com.huawei.hms.support.api.entity.core.ConnectResp> r1) {
                r0 = this;
                com.huawei.hms.support.api.ResolveResult r1 = (com.huawei.hms.support.api.ResolveResult) r1
                r0.a(r1)
                return
        }
    }

    private class g implements com.huawei.hms.support.api.client.ResultCallback<com.huawei.hms.support.api.ResolveResult<com.huawei.hms.support.api.entity.core.DisconnectResp>> {
        final com.huawei.hms.api.HuaweiApiClientImpl a;

        class a implements java.lang.Runnable {
            final com.huawei.hms.support.api.ResolveResult a;
            final com.huawei.hms.api.HuaweiApiClientImpl.g b;

            a(com.huawei.hms.api.HuaweiApiClientImpl.g r1, com.huawei.hms.support.api.ResolveResult r2) {
                    r0 = this;
                    r0.b = r1
                    r0.a = r2
                    r0.<init>()
                    return
            }

            @Override
            public void run() {
                    r2 = this;
                    com.huawei.hms.api.HuaweiApiClientImpl$g r0 = r2.b
                    com.huawei.hms.api.HuaweiApiClientImpl r0 = r0.a
                    com.huawei.hms.support.api.ResolveResult r1 = r2.a
                    com.huawei.hms.api.HuaweiApiClientImpl.a(r0, r1)
                    return
            }
        }

        private g(com.huawei.hms.api.HuaweiApiClientImpl r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        g(com.huawei.hms.api.HuaweiApiClientImpl r1, com.huawei.hms.api.HuaweiApiClientImpl.a r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public void a(com.huawei.hms.support.api.ResolveResult<com.huawei.hms.support.api.entity.core.DisconnectResp> r3) {
                r2 = this;
                android.os.Handler r0 = new android.os.Handler
                android.os.Looper r1 = android.os.Looper.getMainLooper()
                r0.<init>(r1)
                com.huawei.hms.api.HuaweiApiClientImpl$g$a r1 = new com.huawei.hms.api.HuaweiApiClientImpl$g$a
                r1.<init>(r2, r3)
                r0.post(r1)
                return
        }

        @Override
        public void onResult(com.huawei.hms.support.api.ResolveResult<com.huawei.hms.support.api.entity.core.DisconnectResp> r1) {
                r0 = this;
                com.huawei.hms.support.api.ResolveResult r1 = (com.huawei.hms.support.api.ResolveResult) r1
                r0.a(r1)
                return
        }
    }

    private class h implements com.huawei.hms.support.api.client.ResultCallback<com.huawei.hms.support.api.ResolveResult<com.huawei.hms.support.api.entity.core.JosGetNoticeResp>> {
        final com.huawei.hms.api.HuaweiApiClientImpl a;

        private h(com.huawei.hms.api.HuaweiApiClientImpl r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        h(com.huawei.hms.api.HuaweiApiClientImpl r1, com.huawei.hms.api.HuaweiApiClientImpl.a r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public void a(com.huawei.hms.support.api.ResolveResult<com.huawei.hms.support.api.entity.core.JosGetNoticeResp> r4) {
                r3 = this;
                if (r4 == 0) goto L4c
                com.huawei.hms.support.api.client.Status r0 = r4.getStatus()
                boolean r0 = r0.isSuccess()
                if (r0 == 0) goto L4c
                java.lang.Object r4 = r4.getValue()
                com.huawei.hms.support.api.entity.core.JosGetNoticeResp r4 = (com.huawei.hms.support.api.entity.core.JosGetNoticeResp) r4
                android.content.Intent r0 = r4.getNoticeIntent()
                if (r0 == 0) goto L4c
                int r4 = r4.getStatusCode()
                if (r4 != 0) goto L4c
                java.lang.String r4 = "HuaweiApiClientImpl"
                java.lang.String r1 = "get notice has intent."
                com.huawei.hms.support.log.HMSLog.i(r4, r1)
                com.huawei.hms.api.HuaweiApiClientImpl r1 = r3.a
                java.lang.ref.WeakReference r1 = com.huawei.hms.api.HuaweiApiClientImpl.d(r1)
                java.lang.Object r1 = r1.get()
                android.app.Activity r1 = (android.app.Activity) r1
                com.huawei.hms.api.HuaweiApiClientImpl r2 = r3.a
                android.app.Activity r2 = r2.getTopActivity()
                android.app.Activity r1 = com.huawei.hms.utils.Util.getValidActivity(r1, r2)
                if (r1 != 0) goto L43
                java.lang.String r0 = "showNotice no valid activity!"
                com.huawei.hms.support.log.HMSLog.e(r4, r0)
                return
            L43:
                com.huawei.hms.api.HuaweiApiClientImpl r4 = r3.a
                r2 = 1
                com.huawei.hms.api.HuaweiApiClientImpl.a(r4, r2)
                r1.startActivity(r0)
            L4c:
                return
        }

        @Override
        public void onResult(com.huawei.hms.support.api.ResolveResult<com.huawei.hms.support.api.entity.core.JosGetNoticeResp> r1) {
                r0 = this;
                com.huawei.hms.support.api.ResolveResult r1 = (com.huawei.hms.support.api.ResolveResult) r1
                r0.a(r1)
                return
        }
    }

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.hms.api.HuaweiApiClientImpl.B = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.hms.api.HuaweiApiClientImpl.C = r0
            return
    }

    public HuaweiApiClientImpl(android.content.Context r4) {
            r3 = this;
            r3.<init>()
            r0 = -1
            r3.a = r0
            r0 = 0
            r3.j = r0
            java.util.concurrent.atomic.AtomicInteger r1 = new java.util.concurrent.atomic.AtomicInteger
            r2 = 1
            r1.<init>(r2)
            r3.k = r1
            r1 = 0
            r3.p = r1
            r3.q = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r3.r = r0
            java.util.concurrent.locks.ReentrantLock r0 = new java.util.concurrent.locks.ReentrantLock
            r0.<init>()
            r3.s = r0
            java.util.concurrent.locks.Condition r0 = r0.newCondition()
            r3.t = r0
            r0 = 0
            r3.x = r0
            r3.y = r0
            r3.z = r0
            r3.b = r4
            java.lang.String r0 = com.huawei.hms.utils.Util.getAppId(r4)
            r3.c = r0
            r3.d = r0
            java.lang.String r4 = com.huawei.hms.utils.Util.getCpId(r4)
            r3.e = r4
            return
    }

    static com.huawei.hms.api.CheckUpdatelistener a(com.huawei.hms.api.HuaweiApiClientImpl r0) {
            com.huawei.hms.api.CheckUpdatelistener r0 = r0.z
            return r0
    }

    static com.huawei.hms.api.CheckUpdatelistener a(com.huawei.hms.api.HuaweiApiClientImpl r0, com.huawei.hms.api.CheckUpdatelistener r1) {
            r0.z = r1
            return r1
    }

    private void a() {
            r4 = this;
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.huawei.hms.core.aidlservice"
            r0.<init>(r1)
            android.content.Context r1 = r4.b
            com.huawei.hms.utils.HMSPackageManager r1 = com.huawei.hms.utils.HMSPackageManager.getInstance(r1)
            r1.refresh()
            android.content.Context r1 = r4.b
            com.huawei.hms.utils.HMSPackageManager r1 = com.huawei.hms.utils.HMSPackageManager.getInstance(r1)
            java.lang.String r1 = r1.getHMSPackageName()
            r0.setPackage(r1)
            java.lang.Object r1 = com.huawei.hms.api.HuaweiApiClientImpl.B
            monitor-enter(r1)
            android.content.Context r2 = r4.b     // Catch: java.lang.Throwable -> L3d
            r3 = 1
            boolean r0 = r2.bindService(r0, r4, r3)     // Catch: java.lang.Throwable -> L3d
            if (r0 == 0) goto L2e
            r4.i()     // Catch: java.lang.Throwable -> L3d
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L3d
            return
        L2e:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L3d
            r4.c(r3)
            java.lang.String r0 = "HuaweiApiClientImpl"
            java.lang.String r1 = "In connect, bind core service fail"
            com.huawei.hms.support.log.HMSLog.e(r0, r1)
            r4.b()
            return
        L3d:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L3d
            throw r0
    }

    private void a(int r5) {
            r4 = this;
            r0 = 2
            r1 = 0
            if (r5 != r0) goto L17
            java.lang.Object r2 = com.huawei.hms.api.HuaweiApiClientImpl.B
            monitor-enter(r2)
            android.os.Handler r3 = r4.x     // Catch: java.lang.Throwable -> L14
            if (r3 == 0) goto L12
            android.os.Handler r3 = r4.x     // Catch: java.lang.Throwable -> L14
            r3.removeMessages(r5)     // Catch: java.lang.Throwable -> L14
            r4.x = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r5 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L14
            throw r5
        L17:
            r2 = 3
            if (r5 != r2) goto L2d
            java.lang.Object r2 = com.huawei.hms.api.HuaweiApiClientImpl.C
            monitor-enter(r2)
            android.os.Handler r3 = r4.y     // Catch: java.lang.Throwable -> L2a
            if (r3 == 0) goto L28
            android.os.Handler r3 = r4.y     // Catch: java.lang.Throwable -> L2a
            r3.removeMessages(r5)     // Catch: java.lang.Throwable -> L2a
            r4.y = r1     // Catch: java.lang.Throwable -> L2a
        L28:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L2a
            goto L2d
        L2a:
            r5 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L2a
            throw r5
        L2d:
            java.lang.Object r5 = com.huawei.hms.api.HuaweiApiClientImpl.B
            monitor-enter(r5)
            android.os.Handler r2 = r4.x     // Catch: java.lang.Throwable -> L3d
            if (r2 == 0) goto L3b
            android.os.Handler r2 = r4.x     // Catch: java.lang.Throwable -> L3d
            r2.removeMessages(r0)     // Catch: java.lang.Throwable -> L3d
            r4.x = r1     // Catch: java.lang.Throwable -> L3d
        L3b:
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L3d
            return
        L3d:
            r0 = move-exception
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L3d
            throw r0
    }

    static void a(com.huawei.hms.api.HuaweiApiClientImpl r0, int r1) {
            r0.c(r1)
            return
    }

    static void a(com.huawei.hms.api.HuaweiApiClientImpl r0, com.huawei.hms.support.api.ResolveResult r1) {
            r0.b(r1)
            return
    }

    private void a(com.huawei.hms.support.api.ResolveResult<com.huawei.hms.support.api.entity.core.ConnectResp> r7) {
            r6 = this;
            java.lang.String r0 = "HuaweiApiClientImpl"
            java.lang.String r1 = "Enter onConnectionResult"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            com.huawei.hms.core.aidl.d r1 = r6.f
            if (r1 == 0) goto L139
            java.util.concurrent.atomic.AtomicInteger r1 = r6.k
            int r1 = r1.get()
            r2 = 2
            if (r1 == r2) goto L16
            goto L139
        L16:
            r1 = 3
            r6.a(r1)
            java.lang.Object r2 = r7.getValue()
            com.huawei.hms.support.api.entity.core.ConnectResp r2 = (com.huawei.hms.support.api.entity.core.ConnectResp) r2
            if (r2 == 0) goto L26
            java.lang.String r2 = r2.sessionId
            r6.g = r2
        L26:
            com.huawei.hms.support.api.client.SubAppInfo r2 = r6.o
            r3 = 0
            if (r2 != 0) goto L2d
            r2 = r3
            goto L31
        L2d:
            java.lang.String r2 = r2.getSubAppID()
        L31:
            boolean r4 = android.text.TextUtils.isEmpty(r2)
            if (r4 != 0) goto L39
            r6.d = r2
        L39:
            com.huawei.hms.support.api.client.Status r2 = r7.getStatus()
            int r2 = r2.getStatusCode()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Enter onConnectionResult, connect to server result: "
            r4.append(r5)
            r4.append(r2)
            java.lang.String r4 = r4.toString()
            com.huawei.hms.support.log.HMSLog.i(r0, r4)
            com.huawei.hms.support.api.client.Status r4 = com.huawei.hms.support.api.client.Status.SUCCESS
            com.huawei.hms.support.api.client.Status r5 = r7.getStatus()
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto Le7
            java.lang.Object r2 = r7.getValue()
            if (r2 == 0) goto L76
            com.huawei.hms.api.ProtocolNegotiate r2 = com.huawei.hms.api.ProtocolNegotiate.getInstance()
            java.lang.Object r7 = r7.getValue()
            com.huawei.hms.support.api.entity.core.ConnectResp r7 = (com.huawei.hms.support.api.entity.core.ConnectResp) r7
            java.util.List<java.lang.Integer> r7 = r7.protocolVersion
            r2.negotiate(r7)
        L76:
            r6.c(r1)
            r6.u = r3
            com.huawei.hms.api.HuaweiApiClient$ConnectionCallbacks r7 = r6.v
            if (r7 == 0) goto L82
            r7.onConnected()
        L82:
            java.lang.ref.WeakReference<android.app.Activity> r7 = r6.h
            if (r7 == 0) goto L89
            r6.n()
        L89:
            java.util.Map r7 = r6.getApiMap()
            java.util.Set r7 = r7.entrySet()
            java.util.Iterator r7 = r7.iterator()
        L95:
            boolean r1 = r7.hasNext()
            if (r1 == 0) goto L138
            java.lang.Object r1 = r7.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            com.huawei.hms.api.Api r2 = (com.huawei.hms.api.Api) r2
            java.util.List r2 = r2.getmConnetctPostList()
            if (r2 == 0) goto L95
            java.lang.Object r2 = r1.getKey()
            com.huawei.hms.api.Api r2 = (com.huawei.hms.api.Api) r2
            java.util.List r2 = r2.getmConnetctPostList()
            boolean r2 = r2.isEmpty()
            if (r2 != 0) goto L95
            java.lang.String r2 = "Enter onConnectionResult, get the ConnetctPostList "
            com.huawei.hms.support.log.HMSLog.i(r0, r2)
            java.lang.Object r1 = r1.getKey()
            com.huawei.hms.api.Api r1 = (com.huawei.hms.api.Api) r1
            java.util.List r1 = r1.getmConnetctPostList()
            java.util.Iterator r1 = r1.iterator()
        Ld0:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L95
            java.lang.Object r2 = r1.next()
            com.huawei.hms.common.api.ConnectionPostProcessor r2 = (com.huawei.hms.common.api.ConnectionPostProcessor) r2
            java.lang.String r3 = "Enter onConnectionResult, processor.run"
            com.huawei.hms.support.log.HMSLog.i(r0, r3)
            java.lang.ref.WeakReference<android.app.Activity> r3 = r6.h
            r2.run(r6, r3)
            goto Ld0
        Le7:
            com.huawei.hms.support.api.client.Status r0 = r7.getStatus()
            r4 = 1
            if (r0 == 0) goto L108
            com.huawei.hms.support.api.client.Status r7 = r7.getStatus()
            int r7 = r7.getStatusCode()
            r0 = 1001(0x3e9, float:1.403E-42)
            if (r7 != r0) goto L108
            r6.o()
            r6.c(r4)
            com.huawei.hms.api.HuaweiApiClient$ConnectionCallbacks r7 = r6.v
            if (r7 == 0) goto L138
            r7.onConnectionSuspended(r1)
            goto L138
        L108:
            r6.o()
            r6.c(r4)
            com.huawei.hms.api.HuaweiApiClient$OnConnectionFailedListener r7 = r6.w
            if (r7 == 0) goto L138
            java.lang.ref.WeakReference<android.app.Activity> r7 = r6.h
            if (r7 == 0) goto L12c
            java.lang.Object r7 = r7.get()
            if (r7 == 0) goto L12c
            com.huawei.hms.api.HuaweiApiAvailability r7 = com.huawei.hms.api.HuaweiApiAvailability.getInstance()
            java.lang.ref.WeakReference<android.app.Activity> r0 = r6.h
            java.lang.Object r0 = r0.get()
            android.app.Activity r0 = (android.app.Activity) r0
            android.app.PendingIntent r3 = r7.getResolveErrorPendingIntent(r0, r2)
        L12c:
            com.huawei.hms.api.ConnectionResult r7 = new com.huawei.hms.api.ConnectionResult
            r7.<init>(r2, r3)
            com.huawei.hms.api.HuaweiApiClient$OnConnectionFailedListener r0 = r6.w
            r0.onConnectionFailed(r7)
            r6.u = r7
        L138:
            return
        L139:
            java.lang.String r7 = "Invalid onConnectionResult"
            com.huawei.hms.support.log.HMSLog.e(r0, r7)
            return
    }

    static boolean a(com.huawei.hms.api.HuaweiApiClientImpl r0, boolean r1) {
            r0.j = r1
            return r1
    }

    static java.util.concurrent.atomic.AtomicInteger b(com.huawei.hms.api.HuaweiApiClientImpl r0) {
            java.util.concurrent.atomic.AtomicInteger r0 = r0.k
            return r0
    }

    private void b() {
            r3 = this;
            r3.o()
            com.huawei.hms.api.HuaweiApiClient$OnConnectionFailedListener r0 = r3.w
            if (r0 == 0) goto L39
            android.content.Context r0 = r3.b
            boolean r0 = com.huawei.hms.utils.UIUtil.isBackground(r0)
            if (r0 == 0) goto L11
            r0 = 7
            goto L12
        L11:
            r0 = 6
        L12:
            r1 = 0
            java.lang.ref.WeakReference<android.app.Activity> r2 = r3.h
            if (r2 == 0) goto L2d
            java.lang.Object r2 = r2.get()
            if (r2 == 0) goto L2d
            com.huawei.hms.api.HuaweiApiAvailability r1 = com.huawei.hms.api.HuaweiApiAvailability.getInstance()
            java.lang.ref.WeakReference<android.app.Activity> r2 = r3.h
            java.lang.Object r2 = r2.get()
            android.app.Activity r2 = (android.app.Activity) r2
            android.app.PendingIntent r1 = r1.getResolveErrorPendingIntent(r2, r0)
        L2d:
            com.huawei.hms.api.ConnectionResult r2 = new com.huawei.hms.api.ConnectionResult
            r2.<init>(r0, r1)
            com.huawei.hms.api.HuaweiApiClient$OnConnectionFailedListener r0 = r3.w
            r0.onConnectionFailed(r2)
            r3.u = r2
        L39:
            return
    }

    private void b(int r4) {
            r3 = this;
            java.lang.ref.WeakReference<android.app.Activity> r0 = r3.h
            if (r0 == 0) goto L31
            java.lang.Object r0 = r0.get()
            if (r0 == 0) goto L31
            com.huawei.hms.api.HuaweiApiAvailability r0 = com.huawei.hms.api.HuaweiApiAvailability.getInstance()
            java.lang.ref.WeakReference<android.app.Activity> r1 = r3.h
            java.lang.Object r1 = r1.get()
            android.app.Activity r1 = (android.app.Activity) r1
            android.app.PendingIntent r0 = r0.getResolveErrorPendingIntent(r1, r4)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "connect 2.0 fail: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "HuaweiApiClientImpl"
            com.huawei.hms.support.log.HMSLog.i(r2, r1)
            goto L32
        L31:
            r0 = 0
        L32:
            com.huawei.hms.api.ConnectionResult r1 = new com.huawei.hms.api.ConnectionResult
            r1.<init>(r4, r0)
            com.huawei.hms.api.HuaweiApiClient$OnConnectionFailedListener r4 = r3.w
            r4.onConnectionFailed(r1)
            r3.u = r1
            return
    }

    static void b(com.huawei.hms.api.HuaweiApiClientImpl r0, com.huawei.hms.support.api.ResolveResult r1) {
            r0.a(r1)
            return
    }

    private void b(com.huawei.hms.support.api.ResolveResult<com.huawei.hms.support.api.entity.core.DisconnectResp> r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Enter onDisconnectionResult, disconnect from server result: "
            r0.append(r1)
            com.huawei.hms.support.api.client.Status r3 = r3.getStatus()
            int r3 = r3.getStatusCode()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "HuaweiApiClientImpl"
            com.huawei.hms.support.log.HMSLog.i(r0, r3)
            r2.o()
            r3 = 1
            r2.c(r3)
            return
    }

    private com.huawei.hms.support.api.entity.core.ConnectInfo c() {
            r5 = this;
            com.huawei.hms.utils.PackageManagerHelper r0 = new com.huawei.hms.utils.PackageManagerHelper
            android.content.Context r1 = r5.b
            r0.<init>(r1)
            android.content.Context r1 = r5.b
            java.lang.String r1 = r1.getPackageName()
            java.lang.String r0 = r0.getPackageSignature(r1)
            if (r0 != 0) goto L15
            java.lang.String r0 = ""
        L15:
            com.huawei.hms.support.api.client.SubAppInfo r1 = r5.o
            if (r1 != 0) goto L1b
            r1 = 0
            goto L1f
        L1b:
            java.lang.String r1 = r1.getSubAppID()
        L1f:
            com.huawei.hms.support.api.entity.core.ConnectInfo r2 = new com.huawei.hms.support.api.entity.core.ConnectInfo
            java.util.List r3 = r5.getApiNameList()
            java.util.List<com.huawei.hms.support.api.entity.auth.Scope> r4 = r5.l
            r2.<init>(r3, r4, r0, r1)
            return r2
    }

    private void c(int r2) {
            r1 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r1.k
            r0.set(r2)
            r0 = 1
            if (r2 == r0) goto Le
            r0 = 3
            if (r2 == r0) goto Le
            r0 = 2
            if (r2 != r0) goto L1d
        Le:
            java.util.concurrent.locks.ReentrantLock r2 = r1.s
            r2.lock()
            java.util.concurrent.locks.Condition r2 = r1.t     // Catch: java.lang.Throwable -> L1e
            r2.signalAll()     // Catch: java.lang.Throwable -> L1e
            java.util.concurrent.locks.ReentrantLock r2 = r1.s
            r2.unlock()
        L1d:
            return
        L1e:
            r2 = move-exception
            java.util.concurrent.locks.ReentrantLock r0 = r1.s
            r0.unlock()
            throw r2
    }

    static void c(com.huawei.hms.api.HuaweiApiClientImpl r0) {
            r0.b()
            return
    }

    private com.huawei.hms.support.api.entity.core.DisconnectInfo d() {
            r3 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Map<com.huawei.hms.api.Api<?>, com.huawei.hms.api.Api$ApiOptions> r1 = r3.n
            if (r1 == 0) goto L25
            java.util.Set r1 = r1.keySet()
            java.util.Iterator r1 = r1.iterator()
        L11:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L25
            java.lang.Object r2 = r1.next()
            com.huawei.hms.api.Api r2 = (com.huawei.hms.api.Api) r2
            java.lang.String r2 = r2.getApiName()
            r0.add(r2)
            goto L11
        L25:
            com.huawei.hms.support.api.entity.core.DisconnectInfo r1 = new com.huawei.hms.support.api.entity.core.DisconnectInfo
            java.util.List<com.huawei.hms.support.api.entity.auth.Scope> r2 = r3.l
            r1.<init>(r2, r0)
            return r1
    }

    static java.lang.ref.WeakReference d(com.huawei.hms.api.HuaweiApiClientImpl r0) {
            java.lang.ref.WeakReference<android.app.Activity> r0 = r0.h
            return r0
    }

    private int e() {
            r3 = this;
            android.content.Context r0 = r3.b
            int r0 = com.huawei.hms.utils.Util.getHmsVersion(r0)
            r1 = 20503000(0x138d9d8, float:3.3951758E-38)
            if (r0 == 0) goto Lf
            if (r0 >= r1) goto Le
            goto Lf
        Le:
            return r0
        Lf:
            int r0 = r3.f()
            boolean r2 = r3.h()
            if (r2 == 0) goto L1e
            if (r0 >= r1) goto L1c
            goto L1d
        L1c:
            r1 = r0
        L1d:
            return r1
        L1e:
            r1 = 20600000(0x13a54c0, float:3.422361E-38)
            if (r0 >= r1) goto L24
            r0 = r1
        L24:
            return r0
    }

    private int f() {
            r4 = this;
            java.util.Map r0 = r4.getApiMap()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            java.util.Set r0 = r0.keySet()
            java.util.Iterator r0 = r0.iterator()
        L10:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L3a
            java.lang.Object r2 = r0.next()
            com.huawei.hms.api.Api r2 = (com.huawei.hms.api.Api) r2
            java.lang.String r2 = r2.getApiName()
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L10
            java.util.Map r3 = com.huawei.hms.api.HuaweiApiAvailability.getApiMap()
            java.lang.Object r2 = r3.get(r2)
            java.lang.Integer r2 = (java.lang.Integer) r2
            if (r2 == 0) goto L10
            int r2 = r2.intValue()
            if (r2 <= r1) goto L10
            r1 = r2
            goto L10
        L3a:
            return r1
    }

    private void g() {
            r1 = this;
            com.huawei.hms.api.HuaweiApiClientImpl$a r0 = new com.huawei.hms.api.HuaweiApiClientImpl$a
            r0.<init>(r1)
            r1.A = r0
            return
    }

    private boolean h() {
            r3 = this;
            java.util.Map<com.huawei.hms.api.Api<?>, com.huawei.hms.api.Api$ApiOptions> r0 = r3.n
            if (r0 == 0) goto L26
            java.util.Set r0 = r0.keySet()
            java.util.Iterator r0 = r0.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L26
            java.lang.Object r1 = r0.next()
            com.huawei.hms.api.Api r1 = (com.huawei.hms.api.Api) r1
            java.lang.String r1 = r1.getApiName()
            java.lang.String r2 = "HuaweiGame.API"
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto Lc
            r0 = 1
            return r0
        L26:
            r0 = 0
            return r0
    }

    private void i() {
            r4 = this;
            android.os.Handler r0 = r4.x
            r1 = 2
            if (r0 == 0) goto L9
            r0.removeMessages(r1)
            goto L19
        L9:
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r2 = android.os.Looper.getMainLooper()
            com.huawei.hms.api.HuaweiApiClientImpl$b r3 = new com.huawei.hms.api.HuaweiApiClientImpl$b
            r3.<init>(r4)
            r0.<init>(r2, r3)
            r4.x = r0
        L19:
            android.os.Handler r0 = r4.x
            r2 = 5000(0x1388, double:2.4703E-320)
            r0.sendEmptyMessageDelayed(r1, r2)
            return
    }

    private void j() {
            r5 = this;
            java.lang.Object r0 = com.huawei.hms.api.HuaweiApiClientImpl.C
            monitor-enter(r0)
            android.os.Handler r1 = r5.y     // Catch: java.lang.Throwable -> L3e
            r2 = 3
            if (r1 == 0) goto Le
            android.os.Handler r1 = r5.y     // Catch: java.lang.Throwable -> L3e
            r1.removeMessages(r2)     // Catch: java.lang.Throwable -> L3e
            goto L1e
        Le:
            android.os.Handler r1 = new android.os.Handler     // Catch: java.lang.Throwable -> L3e
            android.os.Looper r3 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L3e
            com.huawei.hms.api.HuaweiApiClientImpl$c r4 = new com.huawei.hms.api.HuaweiApiClientImpl$c     // Catch: java.lang.Throwable -> L3e
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L3e
            r1.<init>(r3, r4)     // Catch: java.lang.Throwable -> L3e
            r5.y = r1     // Catch: java.lang.Throwable -> L3e
        L1e:
            android.os.Handler r1 = r5.y     // Catch: java.lang.Throwable -> L3e
            r3 = 3000(0xbb8, double:1.482E-320)
            boolean r1 = r1.sendEmptyMessageDelayed(r2, r3)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r2 = "HuaweiApiClientImpl"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3e
            r3.<init>()     // Catch: java.lang.Throwable -> L3e
            java.lang.String r4 = "sendEmptyMessageDelayed for onConnectionResult 3 seconds. the result is : "
            r3.append(r4)     // Catch: java.lang.Throwable -> L3e
            r3.append(r1)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> L3e
            com.huawei.hms.support.log.HMSLog.d(r2, r1)     // Catch: java.lang.Throwable -> L3e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3e
            return
        L3e:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3e
            throw r1
    }

    private void k() {
            r3 = this;
            java.lang.String r0 = "HuaweiApiClientImpl"
            java.lang.String r1 = "Enter sendConnectApiServceRequest."
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            com.huawei.hms.support.api.entity.core.ConnectInfo r0 = r3.c()
            com.huawei.hms.support.api.client.PendingResult r0 = com.huawei.hms.support.api.core.ConnectService.connect(r3, r0)
            com.huawei.hms.api.HuaweiApiClientImpl$f r1 = new com.huawei.hms.api.HuaweiApiClientImpl$f
            r2 = 0
            r1.<init>(r3, r2)
            r0.setResultCallback(r1)
            return
    }

    private void l() {
            r3 = this;
            com.huawei.hms.support.api.entity.core.DisconnectInfo r0 = r3.d()
            com.huawei.hms.support.api.ResolvePendingResult r0 = com.huawei.hms.support.api.core.ConnectService.disconnect(r3, r0)
            com.huawei.hms.api.HuaweiApiClientImpl$g r1 = new com.huawei.hms.api.HuaweiApiClientImpl$g
            r2 = 0
            r1.<init>(r3, r2)
            r0.setResultCallback(r1)
            return
    }

    private void m() {
            r3 = this;
            java.lang.String r0 = "HuaweiApiClientImpl"
            java.lang.String r1 = "Enter sendForceConnectApiServceRequest."
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            com.huawei.hms.support.api.entity.core.ConnectInfo r0 = r3.c()
            com.huawei.hms.support.api.client.PendingResult r0 = com.huawei.hms.support.api.core.ConnectService.forceConnect(r3, r0)
            com.huawei.hms.api.HuaweiApiClientImpl$f r1 = new com.huawei.hms.api.HuaweiApiClientImpl$f
            r2 = 0
            r1.<init>(r3, r2)
            r0.setResultCallback(r1)
            return
    }

    private void n() {
            r3 = this;
            boolean r0 = r3.j
            if (r0 == 0) goto Lc
            java.lang.String r0 = "HuaweiApiClientImpl"
            java.lang.String r1 = "Connect notice has been shown."
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            return
        Lc:
            com.huawei.hms.api.HuaweiApiAvailability r0 = com.huawei.hms.api.HuaweiApiAvailability.getInstance()
            android.content.Context r1 = r3.b
            int r0 = r0.isHuaweiMobileNoticeAvailable(r1)
            if (r0 != 0) goto L28
            r0 = 0
            java.lang.String r1 = "5.3.0.301"
            com.huawei.hms.support.api.client.PendingResult r0 = com.huawei.hms.support.api.core.ConnectService.getNotice(r3, r0, r1)
            com.huawei.hms.api.HuaweiApiClientImpl$h r1 = new com.huawei.hms.api.HuaweiApiClientImpl$h
            r2 = 0
            r1.<init>(r3, r2)
            r0.setResultCallback(r1)
        L28:
            return
    }

    private void o() {
            r1 = this;
            android.content.Context r0 = r1.b
            com.huawei.hms.utils.Util.unBindServiceCatchException(r0, r1)
            r0 = 0
            r1.f = r0
            return
    }

    public int asyncRequest(android.os.Bundle r6, java.lang.String r7, int r8, com.huawei.hms.support.api.client.ResultCallback<com.huawei.hms.support.api.client.BundleResult> r9) {
            r5 = this;
            java.lang.String r0 = "HuaweiApiClientImpl"
            java.lang.String r1 = "Enter asyncRequest."
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            if (r9 == 0) goto L7e
            if (r7 == 0) goto L7e
            if (r6 != 0) goto Le
            goto L7e
        Le:
            boolean r1 = r5.innerIsConnected()
            if (r1 != 0) goto L1d
            java.lang.String r6 = "client is unConnect."
            com.huawei.hms.support.log.HMSLog.e(r0, r6)
            r6 = 907135003(0x3611c81b, float:2.172316E-6)
            return r6
        L1d:
            com.huawei.hms.core.aidl.b r1 = new com.huawei.hms.core.aidl.b
            r1.<init>(r7, r8)
            int r7 = r1.c()
            com.huawei.hms.core.aidl.e r7 = com.huawei.hms.core.aidl.a.a(r7)
            r1.a(r6)
            com.huawei.hms.core.aidl.RequestHeader r6 = new com.huawei.hms.core.aidl.RequestHeader
            java.lang.String r8 = r5.getAppID()
            java.lang.String r2 = r5.getPackageName()
            java.lang.String r3 = r5.getSessionId()
            r4 = 50300301(0x2ff858d, float:3.7545537E-37)
            r6.<init>(r8, r2, r4, r3)
            java.util.List r8 = r5.getApiNameList()
            r6.setApiNameList(r8)
            android.os.Bundle r8 = new android.os.Bundle
            r8.<init>()
            android.os.Bundle r6 = r7.a(r6, r8)
            r1.b = r6
            com.huawei.hms.core.aidl.d r6 = r5.getService()     // Catch: android.os.RemoteException -> L61
            com.huawei.hms.api.HuaweiApiClientImpl$d r7 = new com.huawei.hms.api.HuaweiApiClientImpl$d     // Catch: android.os.RemoteException -> L61
            r7.<init>(r5, r9)     // Catch: android.os.RemoteException -> L61
            r6.a(r1, r7)     // Catch: android.os.RemoteException -> L61
            r6 = 0
            return r6
        L61:
            r6 = move-exception
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "remote exception:"
            r7.append(r8)
            java.lang.String r6 = r6.getMessage()
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            com.huawei.hms.support.log.HMSLog.e(r0, r6)
            r6 = 907135001(0x3611c819, float:2.1723156E-6)
            return r6
        L7e:
            java.lang.String r6 = "arguments is invalid."
            com.huawei.hms.support.log.HMSLog.e(r0, r6)
            r6 = 907135000(0x3611c818, float:2.1723154E-6)
            return r6
    }

    @Override
    public void checkUpdate(android.app.Activity r4, com.huawei.hms.api.CheckUpdatelistener r5) {
            r3 = this;
            android.content.Context r0 = r3.b
            boolean r0 = com.huawei.hms.utils.Util.isAvailableLibExist(r0)
            java.lang.String r1 = "HuaweiApiClientImpl"
            if (r0 == 0) goto L4a
            java.lang.String r0 = "Enter checkUpdate"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            if (r5 != 0) goto L17
            java.lang.String r4 = "listener is null!"
            com.huawei.hms.support.log.HMSLog.e(r1, r4)
            return
        L17:
            if (r4 == 0) goto L31
            boolean r0 = r4.isFinishing()
            if (r0 == 0) goto L20
            goto L31
        L20:
            r3.z = r5
            com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r5 = r3.A
            if (r5 != 0) goto L29
            r3.g()
        L29:
            com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r5 = r3.A
            r0 = 0
            r1 = 1
            com.huawei.updatesdk.UpdateSdkAPI.checkClientOTAUpdate(r4, r5, r1, r0, r1)
            goto L4f
        L31:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "checkUpdate, activity is illegal: "
            r0.append(r2)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.huawei.hms.support.log.HMSLog.e(r1, r4)
            r4 = -1
            r5.onResult(r4)
            return
        L4a:
            java.lang.String r4 = "available lib does not exist."
            com.huawei.hms.support.log.HMSLog.i(r1, r4)
        L4f:
            return
    }

    @Override
    public void connect(int r1) {
            r0 = this;
            r1 = 0
            r0.connect(r1)
            return
    }

    @Override
    public void connect(android.app.Activity r6) {
            r5 = this;
            java.lang.String r0 = "HuaweiApiClientImpl"
            java.lang.String r1 = "====== HMSSDK version: 50300301 ======"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            java.util.concurrent.atomic.AtomicInteger r1 = r5.k
            int r1 = r1.get()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Enter connect, Connection Status: "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            com.huawei.hms.support.log.HMSLog.i(r0, r2)
            r2 = 3
            if (r1 == r2) goto Lb1
            r2 = 5
            if (r1 == r2) goto Lb1
            r3 = 2
            if (r1 == r3) goto Lb1
            r4 = 4
            if (r1 != r4) goto L2f
            goto Lb1
        L2f:
            if (r6 == 0) goto L3f
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            r1.<init>(r6)
            r5.h = r1
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            r1.<init>(r6)
            r5.i = r1
        L3f:
            java.lang.String r6 = r5.c
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 == 0) goto L4e
            android.content.Context r6 = r5.b
            java.lang.String r6 = com.huawei.hms.utils.Util.getAppId(r6)
            goto L50
        L4e:
            java.lang.String r6 = r5.c
        L50:
            r5.d = r6
            int r6 = r5.e()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r4 = "connect minVersion:"
            r1.append(r4)
            r1.append(r6)
            java.lang.String r1 = r1.toString()
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            com.huawei.hms.api.HuaweiApiAvailability.setServicesVersionCode(r6)
            android.content.Context r1 = r5.b
            int r6 = com.huawei.hms.api.HuaweiMobileServicesUtil.isHuaweiMobileServicesAvailable(r1, r6)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r4 = "In connect, isHuaweiMobileServicesAvailable result: "
            r1.append(r4)
            r1.append(r6)
            java.lang.String r1 = r1.toString()
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            android.content.Context r0 = r5.b
            com.huawei.hms.utils.HMSPackageManager r0 = com.huawei.hms.utils.HMSPackageManager.getInstance(r0)
            int r0 = r0.getHmsVersionCode()
            r5.q = r0
            if (r6 != 0) goto Laa
            r5.c(r2)
            com.huawei.hms.core.aidl.d r6 = r5.f
            if (r6 != 0) goto La0
            r5.a()
            goto Lb1
        La0:
            r5.c(r3)
            r5.k()
            r5.j()
            goto Lb1
        Laa:
            com.huawei.hms.api.HuaweiApiClient$OnConnectionFailedListener r0 = r5.w
            if (r0 == 0) goto Lb1
            r5.b(r6)
        Lb1:
            return
    }

    @Override
    public void connectForeground() {
            r4 = this;
            java.lang.String r0 = "HuaweiApiClientImpl"
            java.lang.String r1 = "====== HMSSDK version: 50300301 ======"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            java.util.concurrent.atomic.AtomicInteger r1 = r4.k
            int r1 = r1.get()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Enter forceConnect, Connection Status: "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            com.huawei.hms.support.log.HMSLog.i(r0, r2)
            r0 = 3
            if (r1 == r0) goto L44
            r0 = 5
            if (r1 == r0) goto L44
            r0 = 2
            if (r1 == r0) goto L44
            r0 = 4
            if (r1 != r0) goto L2e
            goto L44
        L2e:
            java.lang.String r0 = r4.c
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L3d
            android.content.Context r0 = r4.b
            java.lang.String r0 = com.huawei.hms.utils.Util.getAppId(r0)
            goto L3f
        L3d:
            java.lang.String r0 = r4.c
        L3f:
            r4.d = r0
            r4.m()
        L44:
            return
    }

    @Override
    public void disableLifeCycleManagement(android.app.Activity r2) {
            r1 = this;
            int r0 = r1.a
            if (r0 < 0) goto L11
            com.huawei.hms.common.internal.AutoLifecycleFragment r2 = com.huawei.hms.common.internal.AutoLifecycleFragment.getInstance(r2)
            if (r2 != 0) goto Lb
            return
        Lb:
            int r0 = r1.a
            r2.stopAutoManage(r0)
            return
        L11:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "disableLifeCycleManagement failed"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public com.huawei.hms.support.api.client.PendingResult<com.huawei.hms.support.api.client.Status> discardAndReconnect() {
            r2 = this;
            com.huawei.hms.api.HuaweiApiClientImpl$e r0 = new com.huawei.hms.api.HuaweiApiClientImpl$e
            r1 = 0
            r0.<init>(r2, r1, r1)
            return r0
    }

    @Override
    public void disconnect() {
            r4 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r4.k
            int r0 = r0.get()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Enter disconnect, Connection Status: "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "HuaweiApiClientImpl"
            com.huawei.hms.support.log.HMSLog.i(r2, r1)
            r1 = 2
            r2 = 4
            if (r0 == r1) goto L35
            r3 = 3
            if (r0 == r3) goto L2e
            r3 = 5
            if (r0 == r3) goto L27
            goto L38
        L27:
            r4.a(r1)
            r4.c(r2)
            goto L38
        L2e:
            r4.c(r2)
            r4.l()
            goto L38
        L35:
            r4.c(r2)
        L38:
            return
    }

    @Override
    public java.util.Map<com.huawei.hms.api.Api<?>, com.huawei.hms.api.Api.ApiOptions> getApiMap() {
            r1 = this;
            java.util.Map<com.huawei.hms.api.Api<?>, com.huawei.hms.api.Api$ApiOptions> r0 = r1.n
            return r0
    }

    @Override
    public java.util.List<java.lang.String> getApiNameList() {
            r3 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Map<com.huawei.hms.api.Api<?>, com.huawei.hms.api.Api$ApiOptions> r1 = r3.n
            if (r1 == 0) goto L25
            java.util.Set r1 = r1.keySet()
            java.util.Iterator r1 = r1.iterator()
        L11:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L25
            java.lang.Object r2 = r1.next()
            com.huawei.hms.api.Api r2 = (com.huawei.hms.api.Api) r2
            java.lang.String r2 = r2.getApiName()
            r0.add(r2)
            goto L11
        L25:
            return r0
    }

    @Override
    public java.lang.String getAppID() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    @Override
    public com.huawei.hms.api.ConnectionResult getConnectionResult(com.huawei.hms.api.Api<?> r3) {
            r2 = this;
            boolean r3 = r2.isConnected()
            r0 = 0
            if (r3 == 0) goto L10
            r2.u = r0
            com.huawei.hms.api.ConnectionResult r3 = new com.huawei.hms.api.ConnectionResult
            r1 = 0
            r3.<init>(r1, r0)
            return r3
        L10:
            com.huawei.hms.api.ConnectionResult r3 = r2.u
            if (r3 == 0) goto L15
            return r3
        L15:
            com.huawei.hms.api.ConnectionResult r3 = new com.huawei.hms.api.ConnectionResult
            r1 = 13
            r3.<init>(r1, r0)
            return r3
    }

    @Override
    public android.content.Context getContext() {
            r1 = this;
            android.content.Context r0 = r1.b
            return r0
    }

    @Override
    public java.lang.String getCpID() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }

    @Override
    public java.lang.String getPackageName() {
            r1 = this;
            android.content.Context r0 = r1.b
            java.lang.String r0 = r0.getPackageName()
            return r0
    }

    @Override
    public java.util.List<com.huawei.hms.support.api.entity.auth.PermissionInfo> getPermissionInfos() {
            r1 = this;
            java.util.List<com.huawei.hms.support.api.entity.auth.PermissionInfo> r0 = r1.m
            return r0
    }

    @Override
    public java.util.List<com.huawei.hms.support.api.entity.auth.Scope> getScopes() {
            r1 = this;
            java.util.List<com.huawei.hms.support.api.entity.auth.Scope> r0 = r1.l
            return r0
    }

    @Override
    public com.huawei.hms.core.aidl.d getService() {
            r1 = this;
            com.huawei.hms.core.aidl.d r0 = r1.f
            return r0
    }

    @Override
    public java.lang.String getSessionId() {
            r1 = this;
            java.lang.String r0 = r1.g
            return r0
    }

    @Override
    public final com.huawei.hms.support.api.client.SubAppInfo getSubAppInfo() {
            r1 = this;
            com.huawei.hms.support.api.client.SubAppInfo r0 = r1.o
            return r0
    }

    @Override
    public android.app.Activity getTopActivity() {
            r1 = this;
            java.lang.ref.WeakReference<android.app.Activity> r0 = r1.i
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.lang.Object r0 = r0.get()
            android.app.Activity r0 = (android.app.Activity) r0
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
    public boolean hasConnectedApi(com.huawei.hms.api.Api<?> r1) {
            r0 = this;
            boolean r1 = r0.isConnected()
            return r1
    }

    @Override
    public boolean hasConnectionFailureListener(com.huawei.hms.api.HuaweiApiClient.OnConnectionFailedListener r3) {
            r2 = this;
            java.lang.String r0 = "onConnectionFailedListener should not be null"
            com.huawei.hms.utils.Checker.checkNonNull(r3, r0)
            java.lang.Object r0 = r2.r
            monitor-enter(r0)
            com.huawei.hms.api.HuaweiApiClient$OnConnectionFailedListener r1 = r2.w     // Catch: java.lang.Throwable -> L12
            if (r1 != r3) goto Lf
            r3 = 1
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            return r3
        Lf:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            r3 = 0
            return r3
        L12:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            throw r3
    }

    @Override
    public boolean hasConnectionSuccessListener(com.huawei.hms.api.HuaweiApiClient.ConnectionCallbacks r3) {
            r2 = this;
            java.lang.String r0 = "connectionCallbacksListener should not be null"
            com.huawei.hms.utils.Checker.checkNonNull(r3, r0)
            java.lang.Object r0 = r2.r
            monitor-enter(r0)
            com.huawei.hms.api.HuaweiApiClient$ConnectionCallbacks r1 = r2.v     // Catch: java.lang.Throwable -> L12
            if (r1 != r3) goto Lf
            r3 = 1
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            return r3
        Lf:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            r3 = 0
            return r3
        L12:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            throw r3
    }

    @Override
    public com.huawei.hms.api.ConnectionResult holdUpConnect() {
            r3 = this;
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 == r1) goto L67
            java.util.concurrent.locks.ReentrantLock r0 = r3.s
            r0.lock()
            r0 = 0
            r3.connect(r0)     // Catch: java.lang.Throwable -> L60
        L13:
            boolean r1 = r3.isConnecting()     // Catch: java.lang.Throwable -> L60
            if (r1 == 0) goto L33
            java.util.concurrent.locks.Condition r1 = r3.t     // Catch: java.lang.InterruptedException -> L1f java.lang.Throwable -> L60
            r1.await()     // Catch: java.lang.InterruptedException -> L1f java.lang.Throwable -> L60
            goto L13
        L1f:
            java.lang.Thread r1 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L60
            r1.interrupt()     // Catch: java.lang.Throwable -> L60
            com.huawei.hms.api.ConnectionResult r1 = new com.huawei.hms.api.ConnectionResult     // Catch: java.lang.Throwable -> L60
            r2 = 15
            r1.<init>(r2, r0)     // Catch: java.lang.Throwable -> L60
            java.util.concurrent.locks.ReentrantLock r0 = r3.s
            r0.unlock()
            return r1
        L33:
            boolean r1 = r3.isConnected()     // Catch: java.lang.Throwable -> L60
            if (r1 == 0) goto L47
            r3.u = r0     // Catch: java.lang.Throwable -> L60
            com.huawei.hms.api.ConnectionResult r1 = new com.huawei.hms.api.ConnectionResult     // Catch: java.lang.Throwable -> L60
            r2 = 0
            r1.<init>(r2, r0)     // Catch: java.lang.Throwable -> L60
            java.util.concurrent.locks.ReentrantLock r0 = r3.s
            r0.unlock()
            return r1
        L47:
            com.huawei.hms.api.ConnectionResult r1 = r3.u     // Catch: java.lang.Throwable -> L60
            if (r1 == 0) goto L53
            com.huawei.hms.api.ConnectionResult r0 = r3.u     // Catch: java.lang.Throwable -> L60
            java.util.concurrent.locks.ReentrantLock r1 = r3.s
            r1.unlock()
            return r0
        L53:
            com.huawei.hms.api.ConnectionResult r1 = new com.huawei.hms.api.ConnectionResult     // Catch: java.lang.Throwable -> L60
            r2 = 13
            r1.<init>(r2, r0)     // Catch: java.lang.Throwable -> L60
            java.util.concurrent.locks.ReentrantLock r0 = r3.s
            r0.unlock()
            return r1
        L60:
            r0 = move-exception
            java.util.concurrent.locks.ReentrantLock r1 = r3.s
            r1.unlock()
            throw r0
        L67:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "blockingConnect must not be called on the UI thread"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public com.huawei.hms.api.ConnectionResult holdUpConnect(long r4, java.util.concurrent.TimeUnit r6) {
            r3 = this;
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 == r1) goto L82
            java.util.concurrent.locks.ReentrantLock r0 = r3.s
            r0.lock()
            r0 = 0
            r3.connect(r0)     // Catch: java.lang.Throwable -> L7b
            long r4 = r6.toNanos(r4)     // Catch: java.lang.Throwable -> L7b
        L17:
            boolean r6 = r3.isConnecting()     // Catch: java.lang.Throwable -> L7b
            if (r6 == 0) goto L4e
            r1 = 0
            int r6 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
            if (r6 > 0) goto L33
            r3.disconnect()     // Catch: java.lang.Throwable -> L7b
            com.huawei.hms.api.ConnectionResult r4 = new com.huawei.hms.api.ConnectionResult     // Catch: java.lang.Throwable -> L7b
            r5 = 14
            r4.<init>(r5, r0)     // Catch: java.lang.Throwable -> L7b
            java.util.concurrent.locks.ReentrantLock r5 = r3.s
            r5.unlock()
            return r4
        L33:
            java.util.concurrent.locks.Condition r6 = r3.t     // Catch: java.lang.InterruptedException -> L3a java.lang.Throwable -> L7b
            long r4 = r6.awaitNanos(r4)     // Catch: java.lang.InterruptedException -> L3a java.lang.Throwable -> L7b
            goto L17
        L3a:
            java.lang.Thread r4 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L7b
            r4.interrupt()     // Catch: java.lang.Throwable -> L7b
            com.huawei.hms.api.ConnectionResult r4 = new com.huawei.hms.api.ConnectionResult     // Catch: java.lang.Throwable -> L7b
            r5 = 15
            r4.<init>(r5, r0)     // Catch: java.lang.Throwable -> L7b
            java.util.concurrent.locks.ReentrantLock r5 = r3.s
            r5.unlock()
            return r4
        L4e:
            boolean r4 = r3.isConnected()     // Catch: java.lang.Throwable -> L7b
            if (r4 == 0) goto L62
            r3.u = r0     // Catch: java.lang.Throwable -> L7b
            com.huawei.hms.api.ConnectionResult r4 = new com.huawei.hms.api.ConnectionResult     // Catch: java.lang.Throwable -> L7b
            r5 = 0
            r4.<init>(r5, r0)     // Catch: java.lang.Throwable -> L7b
            java.util.concurrent.locks.ReentrantLock r5 = r3.s
            r5.unlock()
            return r4
        L62:
            com.huawei.hms.api.ConnectionResult r4 = r3.u     // Catch: java.lang.Throwable -> L7b
            if (r4 == 0) goto L6e
            com.huawei.hms.api.ConnectionResult r4 = r3.u     // Catch: java.lang.Throwable -> L7b
            java.util.concurrent.locks.ReentrantLock r5 = r3.s
            r5.unlock()
            return r4
        L6e:
            com.huawei.hms.api.ConnectionResult r4 = new com.huawei.hms.api.ConnectionResult     // Catch: java.lang.Throwable -> L7b
            r5 = 13
            r4.<init>(r5, r0)     // Catch: java.lang.Throwable -> L7b
            java.util.concurrent.locks.ReentrantLock r5 = r3.s
            r5.unlock()
            return r4
        L7b:
            r4 = move-exception
            java.util.concurrent.locks.ReentrantLock r5 = r3.s
            r5.unlock()
            throw r4
        L82:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r5 = "blockingConnect must not be called on the UI thread"
            r4.<init>(r5)
            throw r4
    }

    @Override
    public boolean innerIsConnected() {
            r2 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r2.k
            int r0 = r0.get()
            r1 = 3
            if (r0 == r1) goto L15
            java.util.concurrent.atomic.AtomicInteger r0 = r2.k
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

    @Override
    public boolean isConnected() {
            r4 = this;
            int r0 = r4.q
            if (r0 != 0) goto L10
            android.content.Context r0 = r4.b
            com.huawei.hms.utils.HMSPackageManager r0 = com.huawei.hms.utils.HMSPackageManager.getInstance(r0)
            int r0 = r0.getHmsVersionCode()
            r4.q = r0
        L10:
            int r0 = r4.q
            r1 = 20504000(0x138ddc0, float:3.395456E-38)
            if (r0 >= r1) goto L88
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r4.p
            long r0 = r0 - r2
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto L30
            r2 = 300000(0x493e0, double:1.482197E-318)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L30
            boolean r0 = r4.innerIsConnected()
            return r0
        L30:
            boolean r0 = r4.innerIsConnected()
            if (r0 == 0) goto L86
            com.huawei.hms.support.api.entity.core.CheckConnectInfo r0 = new com.huawei.hms.support.api.entity.core.CheckConnectInfo
            r0.<init>()
            com.huawei.hms.support.api.client.InnerPendingResult r0 = com.huawei.hms.support.api.core.ConnectService.checkconnect(r4, r0)
            java.util.concurrent.TimeUnit r1 = java.util.concurrent.TimeUnit.MILLISECONDS
            r2 = 2000(0x7d0, double:9.88E-321)
            com.huawei.hms.support.api.client.Result r0 = r0.awaitOnAnyThread(r2, r1)
            com.huawei.hms.support.api.ResolveResult r0 = (com.huawei.hms.support.api.ResolveResult) r0
            com.huawei.hms.support.api.client.Status r0 = r0.getStatus()
            boolean r1 = r0.isSuccess()
            r2 = 1
            if (r1 == 0) goto L5b
            long r0 = java.lang.System.currentTimeMillis()
            r4.p = r0
            return r2
        L5b:
            int r0 = r0.getStatusCode()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "isConnected is false, statuscode:"
            r1.append(r3)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r3 = "HuaweiApiClientImpl"
            com.huawei.hms.support.log.HMSLog.i(r3, r1)
            r1 = 907135004(0x3611c81c, float:2.1723163E-6)
            if (r0 == r1) goto L86
            r4.o()
            r4.c(r2)
            long r0 = java.lang.System.currentTimeMillis()
            r4.p = r0
        L86:
            r0 = 0
            return r0
        L88:
            boolean r0 = r4.innerIsConnected()
            return r0
    }

    @Override
    public boolean isConnecting() {
            r2 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r2.k
            int r0 = r0.get()
            r1 = 2
            if (r0 == r1) goto Lf
            r1 = 5
            if (r0 != r1) goto Ld
            goto Lf
        Ld:
            r0 = 0
            goto L10
        Lf:
            r0 = 1
        L10:
            return r0
    }

    @Override
    public void onPause(android.app.Activity r2) {
            r1 = this;
            java.lang.String r2 = "HuaweiApiClientImpl"
            java.lang.String r0 = "onPause"
            com.huawei.hms.support.log.HMSLog.i(r2, r0)
            return
    }

    @Override
    public void onResume(android.app.Activity r3) {
            r2 = this;
            if (r3 == 0) goto L10
            java.lang.String r0 = "HuaweiApiClientImpl"
            java.lang.String r1 = "onResume"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r3)
            r2.i = r0
        L10:
            return
    }

    @Override
    public void onServiceConnected(android.content.ComponentName r2, android.os.IBinder r3) {
            r1 = this;
            java.lang.String r2 = "HuaweiApiClientImpl"
            java.lang.String r0 = "Enter onServiceConnected."
            com.huawei.hms.support.log.HMSLog.i(r2, r0)
            r0 = 2
            r1.a(r0)
            com.huawei.hms.core.aidl.d r3 = com.huawei.hms.core.aidl.d.a.a(r3)
            r1.f = r3
            com.huawei.hms.core.aidl.d r3 = r1.f
            if (r3 != 0) goto L4f
            java.lang.String r3 = "In onServiceConnected, mCoreService must not be null."
            com.huawei.hms.support.log.HMSLog.e(r2, r3)
            r1.o()
            r2 = 1
            r1.c(r2)
            com.huawei.hms.api.HuaweiApiClient$OnConnectionFailedListener r2 = r1.w
            if (r2 == 0) goto L4e
            r2 = 0
            java.lang.ref.WeakReference<android.app.Activity> r3 = r1.h
            r0 = 10
            if (r3 == 0) goto L42
            java.lang.Object r3 = r3.get()
            if (r3 == 0) goto L42
            com.huawei.hms.api.HuaweiApiAvailability r2 = com.huawei.hms.api.HuaweiApiAvailability.getInstance()
            java.lang.ref.WeakReference<android.app.Activity> r3 = r1.h
            java.lang.Object r3 = r3.get()
            android.app.Activity r3 = (android.app.Activity) r3
            android.app.PendingIntent r2 = r2.getResolveErrorPendingIntent(r3, r0)
        L42:
            com.huawei.hms.api.ConnectionResult r3 = new com.huawei.hms.api.ConnectionResult
            r3.<init>(r0, r2)
            com.huawei.hms.api.HuaweiApiClient$OnConnectionFailedListener r2 = r1.w
            r2.onConnectionFailed(r3)
            r1.u = r3
        L4e:
            return
        L4f:
            java.util.concurrent.atomic.AtomicInteger r2 = r1.k
            int r2 = r2.get()
            r3 = 5
            if (r2 != r3) goto L62
            r1.c(r0)
            r1.k()
            r1.j()
            goto L6e
        L62:
            java.util.concurrent.atomic.AtomicInteger r2 = r1.k
            int r2 = r2.get()
            r3 = 3
            if (r2 == r3) goto L6e
            r1.o()
        L6e:
            return
    }

    @Override
    public void onServiceDisconnected(android.content.ComponentName r2) {
            r1 = this;
            java.lang.String r2 = "HuaweiApiClientImpl"
            java.lang.String r0 = "Enter onServiceDisconnected."
            com.huawei.hms.support.log.HMSLog.i(r2, r0)
            r2 = 0
            r1.f = r2
            r2 = 1
            r1.c(r2)
            com.huawei.hms.api.HuaweiApiClient$ConnectionCallbacks r0 = r1.v
            if (r0 == 0) goto L15
            r0.onConnectionSuspended(r2)
        L15:
            return
    }

    @Override
    public void print(java.lang.String r1, java.io.FileDescriptor r2, java.io.PrintWriter r3, java.lang.String[] r4) {
            r0 = this;
            return
    }

    @Override
    public void reconnect() {
            r1 = this;
            r1.disconnect()
            r0 = 0
            r1.connect(r0)
            return
    }

    @Override
    public void removeConnectionFailureListener(com.huawei.hms.api.HuaweiApiClient.OnConnectionFailedListener r3) {
            r2 = this;
            java.lang.String r0 = "onConnectionFailedListener should not be null"
            com.huawei.hms.utils.Checker.checkNonNull(r3, r0)
            java.lang.Object r0 = r2.r
            monitor-enter(r0)
            com.huawei.hms.api.HuaweiApiClient$OnConnectionFailedListener r1 = r2.w     // Catch: java.lang.Throwable -> L19
            if (r1 == r3) goto L14
            java.lang.String r3 = "HuaweiApiClientImpl"
            java.lang.String r1 = "unregisterConnectionFailedListener: this onConnectionFailedListener has not been registered"
            com.huawei.hms.support.log.HMSLog.w(r3, r1)     // Catch: java.lang.Throwable -> L19
            goto L17
        L14:
            r3 = 0
            r2.w = r3     // Catch: java.lang.Throwable -> L19
        L17:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            return
        L19:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            throw r3
    }

    @Override
    public void removeConnectionSuccessListener(com.huawei.hms.api.HuaweiApiClient.ConnectionCallbacks r3) {
            r2 = this;
            java.lang.String r0 = "connectionCallbacksListener should not be null"
            com.huawei.hms.utils.Checker.checkNonNull(r3, r0)
            java.lang.Object r0 = r2.r
            monitor-enter(r0)
            com.huawei.hms.api.HuaweiApiClient$ConnectionCallbacks r1 = r2.v     // Catch: java.lang.Throwable -> L19
            if (r1 == r3) goto L14
            java.lang.String r3 = "HuaweiApiClientImpl"
            java.lang.String r1 = "unregisterConnectionCallback: this connectionCallbacksListener has not been registered"
            com.huawei.hms.support.log.HMSLog.w(r3, r1)     // Catch: java.lang.Throwable -> L19
            goto L17
        L14:
            r3 = 0
            r2.v = r3     // Catch: java.lang.Throwable -> L19
        L17:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            return
        L19:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            throw r3
    }

    public void setApiMap(java.util.Map<com.huawei.hms.api.Api<?>, com.huawei.hms.api.Api.ApiOptions> r1) {
            r0 = this;
            r0.n = r1
            return
    }

    protected void setAutoLifecycleClientId(int r1) {
            r0 = this;
            r0.a = r1
            return
    }

    @Override
    public void setConnectionCallbacks(com.huawei.hms.api.HuaweiApiClient.ConnectionCallbacks r1) {
            r0 = this;
            r0.v = r1
            return
    }

    @Override
    public void setConnectionFailedListener(com.huawei.hms.api.HuaweiApiClient.OnConnectionFailedListener r1) {
            r0 = this;
            r0.w = r1
            return
    }

    public void setHasShowNotice(boolean r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public void setPermissionInfos(java.util.List<com.huawei.hms.support.api.entity.auth.PermissionInfo> r1) {
            r0 = this;
            r0.m = r1
            return
    }

    public void setScopes(java.util.List<com.huawei.hms.support.api.entity.auth.Scope> r1) {
            r0 = this;
            r0.l = r1
            return
    }

    @Override
    public boolean setSubAppInfo(com.huawei.hms.support.api.client.SubAppInfo r5) {
            r4 = this;
            java.lang.String r0 = "HuaweiApiClientImpl"
            java.lang.String r1 = "Enter setSubAppInfo"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            r1 = 0
            if (r5 != 0) goto L10
            java.lang.String r5 = "subAppInfo is null"
            com.huawei.hms.support.log.HMSLog.e(r0, r5)
            return r1
        L10:
            java.lang.String r2 = r5.getSubAppID()
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 == 0) goto L20
            java.lang.String r5 = "subAppId is empty"
            com.huawei.hms.support.log.HMSLog.e(r0, r5)
            return r1
        L20:
            java.lang.String r3 = r4.c
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L2f
            android.content.Context r3 = r4.b
            java.lang.String r3 = com.huawei.hms.utils.Util.getAppId(r3)
            goto L31
        L2f:
            java.lang.String r3 = r4.c
        L31:
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L3d
            java.lang.String r5 = "subAppId is host appid"
            com.huawei.hms.support.log.HMSLog.e(r0, r5)
            return r1
        L3d:
            com.huawei.hms.support.api.client.SubAppInfo r0 = new com.huawei.hms.support.api.client.SubAppInfo
            r0.<init>(r5)
            r4.o = r0
            r5 = 1
            return r5
    }
}
