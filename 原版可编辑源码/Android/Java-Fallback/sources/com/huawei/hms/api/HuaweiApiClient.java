package com.huawei.hms.api;

public abstract class HuaweiApiClient implements com.huawei.hms.support.api.client.AidlApiClient {

    public static final class Builder {
        private final android.content.Context a;
        private final java.util.List<com.huawei.hms.support.api.entity.auth.Scope> b;
        private final java.util.List<com.huawei.hms.support.api.entity.auth.PermissionInfo> c;
        private final java.util.Map<com.huawei.hms.api.Api<?>, com.huawei.hms.api.Api.ApiOptions> d;
        private com.huawei.hms.api.HuaweiApiClient.OnConnectionFailedListener e;
        private com.huawei.hms.api.HuaweiApiClient.ConnectionCallbacks f;
        private int g;
        private android.app.Activity h;

        public Builder(android.content.Context r3) throws java.lang.NullPointerException {
                r2 = this;
                r2.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r2.b = r0
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r2.c = r0
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                r2.d = r0
                java.lang.String r0 = "context must not be null."
                com.huawei.hms.utils.Checker.checkNonNull(r3, r0)
                android.content.Context r0 = r3.getApplicationContext()
                r2.a = r0
                r1 = -1
                r2.g = r1
                com.huawei.hms.utils.ResourceLoaderUtil.setmContext(r0)
                r2.a(r3)
                return
        }

        private void a(android.content.Context r1) {
                r0 = this;
                com.huawei.hms.utils.HMSBIInitializer r1 = com.huawei.hms.utils.HMSBIInitializer.getInstance(r1)
                r1.initBI()
                return
        }

        private void a(com.huawei.hms.api.HuaweiApiClient r3) {
                r2 = this;
                android.app.Activity r0 = r2.h
                com.huawei.hms.common.internal.AutoLifecycleFragment r0 = com.huawei.hms.common.internal.AutoLifecycleFragment.getInstance(r0)
                if (r0 != 0) goto L10
                java.lang.String r3 = "HuaweiApiClient.builder"
                java.lang.String r0 = "lifecycleFragment must not be NULL here"
                com.huawei.hms.support.log.HMSLog.e(r3, r0)
                goto L15
            L10:
                int r1 = r2.g
                r0.startAutoMange(r1, r3)
            L15:
                return
        }

        public com.huawei.hms.api.HuaweiApiClient.Builder addApi(com.huawei.hms.api.Api<? extends com.huawei.hms.api.Api.ApiOptions.NotRequiredOptions> r5) {
                r4 = this;
                java.util.Map<com.huawei.hms.api.Api<?>, com.huawei.hms.api.Api$ApiOptions> r0 = r4.d
                r1 = 0
                r0.put(r5, r1)
                java.lang.String r5 = r5.getApiName()
                java.lang.String r0 = "HuaweiGame.API"
                boolean r5 = r0.equals(r5)
                if (r5 == 0) goto L36
                com.huawei.hms.support.hianalytics.HiAnalyticsUtil r5 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.getInstance()
                android.content.Context r0 = r4.a
                android.content.Context r0 = r0.getApplicationContext()
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "|"
                r1.append(r2)
                long r2 = java.lang.System.currentTimeMillis()
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                java.lang.String r2 = "15060106"
                r5.onEvent(r0, r2, r1)
            L36:
                return r4
        }

        public <O extends com.huawei.hms.api.Api.ApiOptions.HasOptions> com.huawei.hms.api.HuaweiApiClient.Builder addApi(com.huawei.hms.api.Api<O> r3, O r4) {
                r2 = this;
                java.lang.String r0 = "Api must not be null"
                com.huawei.hms.utils.Checker.checkNonNull(r3, r0)
                java.lang.String r0 = "Null options are not permitted for this Api"
                com.huawei.hms.utils.Checker.checkNonNull(r4, r0)
                java.util.Map<com.huawei.hms.api.Api<?>, com.huawei.hms.api.Api$ApiOptions> r0 = r2.d
                r0.put(r3, r4)
                com.huawei.hms.api.Api$Options r0 = r3.getOptions()
                if (r0 == 0) goto L2f
                com.huawei.hms.api.Api$Options r0 = r3.getOptions()
                java.util.List r0 = r0.getScopeList(r4)
                java.util.List<com.huawei.hms.support.api.entity.auth.Scope> r1 = r2.b
                r1.addAll(r0)
                com.huawei.hms.api.Api$Options r3 = r3.getOptions()
                java.util.List r3 = r3.getPermissionInfoList(r4)
                java.util.List<com.huawei.hms.support.api.entity.auth.PermissionInfo> r4 = r2.c
                r4.addAll(r3)
            L2f:
                return r2
        }

        public <O extends com.huawei.hms.api.Api.ApiOptions.HasOptions> com.huawei.hms.api.HuaweiApiClient.Builder addApiWithScope(com.huawei.hms.api.Api<O> r3, O r4, com.huawei.hms.support.api.entity.auth.Scope... r5) {
                r2 = this;
                java.lang.String r0 = "Api must not be null"
                com.huawei.hms.utils.Checker.checkNonNull(r3, r0)
                java.lang.String r0 = "Null options are not permitted for this Api"
                com.huawei.hms.utils.Checker.checkNonNull(r4, r0)
                java.lang.String r0 = "Scopes must not be null"
                com.huawei.hms.utils.Checker.checkNonNull(r5, r0)
                java.util.Map<com.huawei.hms.api.Api<?>, com.huawei.hms.api.Api$ApiOptions> r0 = r2.d
                r0.put(r3, r4)
                com.huawei.hms.api.Api$Options r0 = r3.getOptions()
                if (r0 == 0) goto L34
                com.huawei.hms.api.Api$Options r0 = r3.getOptions()
                java.util.List r0 = r0.getScopeList(r4)
                java.util.List<com.huawei.hms.support.api.entity.auth.Scope> r1 = r2.b
                r1.addAll(r0)
                com.huawei.hms.api.Api$Options r3 = r3.getOptions()
                java.util.List r3 = r3.getPermissionInfoList(r4)
                java.util.List<com.huawei.hms.support.api.entity.auth.PermissionInfo> r4 = r2.c
                r4.addAll(r3)
            L34:
                java.util.ArrayList r3 = new java.util.ArrayList
                java.util.List r4 = java.util.Arrays.asList(r5)
                r3.<init>(r4)
                java.util.List<com.huawei.hms.support.api.entity.auth.Scope> r4 = r2.b
                r4.addAll(r3)
                return r2
        }

        public com.huawei.hms.api.HuaweiApiClient.Builder addApiWithScope(com.huawei.hms.api.Api<? extends com.huawei.hms.api.Api.ApiOptions.NotRequiredOptions> r3, com.huawei.hms.support.api.entity.auth.Scope... r4) {
                r2 = this;
                java.lang.String r0 = "Api must not be null"
                com.huawei.hms.utils.Checker.checkNonNull(r3, r0)
                java.lang.String r0 = "Scopes must not be null"
                com.huawei.hms.utils.Checker.checkNonNull(r4, r0)
                java.util.Map<com.huawei.hms.api.Api<?>, com.huawei.hms.api.Api$ApiOptions> r0 = r2.d
                r1 = 0
                r0.put(r3, r1)
                java.util.ArrayList r3 = new java.util.ArrayList
                java.util.List r4 = java.util.Arrays.asList(r4)
                r3.<init>(r4)
                java.util.List<com.huawei.hms.support.api.entity.auth.Scope> r4 = r2.b
                r4.addAll(r3)
                return r2
        }

        public com.huawei.hms.api.HuaweiApiClient.Builder addConnectionCallbacks(com.huawei.hms.api.HuaweiApiClient.ConnectionCallbacks r2) {
                r1 = this;
                java.lang.String r0 = "listener must not be null."
                com.huawei.hms.utils.Checker.checkNonNull(r2, r0)
                r1.f = r2
                return r1
        }

        public com.huawei.hms.api.HuaweiApiClient.Builder addOnConnectionFailedListener(com.huawei.hms.api.HuaweiApiClient.OnConnectionFailedListener r2) {
                r1 = this;
                java.lang.String r0 = "listener must not be null."
                com.huawei.hms.utils.Checker.checkNonNull(r2, r0)
                r1.e = r2
                return r1
        }

        public com.huawei.hms.api.HuaweiApiClient.Builder addScope(com.huawei.hms.support.api.entity.auth.Scope r2) {
                r1 = this;
                java.lang.String r0 = "scope must not be null."
                com.huawei.hms.utils.Checker.checkNonNull(r2, r0)
                java.util.List<com.huawei.hms.support.api.entity.auth.Scope> r0 = r1.b
                r0.add(r2)
                return r1
        }

        public com.huawei.hms.api.HuaweiApiClient.Builder allowLifeCycleManagement(android.app.Activity r1, int r2, com.huawei.hms.api.HuaweiApiClient.OnConnectionFailedListener r3) {
                r0 = this;
                if (r2 < 0) goto Lf
                r0.g = r2
                java.lang.String r2 = "activity must not be Null."
                java.lang.Object r1 = com.huawei.hms.common.internal.Preconditions.checkNotNull(r1, r2)
                android.app.Activity r1 = (android.app.Activity) r1
                r0.h = r1
                return r0
            Lf:
                java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
                java.lang.String r2 = "allowLifeCycleManagement id should be positive"
                r1.<init>(r2)
                throw r1
        }

        public com.huawei.hms.api.HuaweiApiClient.Builder allowLifeCycleManagement(android.app.Activity r2, com.huawei.hms.api.HuaweiApiClient.OnConnectionFailedListener r3) {
                r1 = this;
                r0 = 0
                com.huawei.hms.api.HuaweiApiClient$Builder r2 = r1.allowLifeCycleManagement(r2, r0, r3)
                return r2
        }

        public com.huawei.hms.api.HuaweiApiClient.Builder applyDefaultAccount() {
                r0 = this;
                return r0
        }

        public com.huawei.hms.api.HuaweiApiClient build() {
                r2 = this;
                com.huawei.hms.api.Api r0 = new com.huawei.hms.api.Api
                java.lang.String r1 = "Core.API"
                r0.<init>(r1)
                r2.addApi(r0)
                com.huawei.hms.api.HuaweiApiClientImpl r0 = new com.huawei.hms.api.HuaweiApiClientImpl
                android.content.Context r1 = r2.a
                r0.<init>(r1)
                java.util.List<com.huawei.hms.support.api.entity.auth.Scope> r1 = r2.b
                r0.setScopes(r1)
                java.util.List<com.huawei.hms.support.api.entity.auth.PermissionInfo> r1 = r2.c
                r0.setPermissionInfos(r1)
                java.util.Map<com.huawei.hms.api.Api<?>, com.huawei.hms.api.Api$ApiOptions> r1 = r2.d
                r0.setApiMap(r1)
                com.huawei.hms.api.HuaweiApiClient$ConnectionCallbacks r1 = r2.f
                r0.setConnectionCallbacks(r1)
                com.huawei.hms.api.HuaweiApiClient$OnConnectionFailedListener r1 = r2.e
                r0.setConnectionFailedListener(r1)
                int r1 = r2.g
                r0.setAutoLifecycleClientId(r1)
                int r1 = r2.g
                if (r1 < 0) goto L36
                r2.a(r0)
            L36:
                return r0
        }

        public com.huawei.hms.api.HuaweiApiClient.Builder setAccountName(java.lang.String r1) {
                r0 = this;
                return r0
        }

        public com.huawei.hms.api.HuaweiApiClient.Builder setHandler(android.os.Handler r1) {
                r0 = this;
                return r0
        }

        public com.huawei.hms.api.HuaweiApiClient.Builder setPopupsGravity(int r1) {
                r0 = this;
                return r0
        }

        public com.huawei.hms.api.HuaweiApiClient.Builder setViewForPopups(android.view.View r1) {
                r0 = this;
                return r0
        }
    }

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

    public HuaweiApiClient() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract void checkUpdate(android.app.Activity r1, com.huawei.hms.api.CheckUpdatelistener r2);

    public void connect(int r1) {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            r1.<init>()
            throw r1
    }

    public abstract void connect(android.app.Activity r1);

    public abstract void connectForeground();

    public abstract void disableLifeCycleManagement(android.app.Activity r1);

    public abstract com.huawei.hms.support.api.client.PendingResult<com.huawei.hms.support.api.client.Status> discardAndReconnect();

    public abstract void disconnect();

    public abstract java.util.Map<com.huawei.hms.api.Api<?>, com.huawei.hms.api.Api.ApiOptions> getApiMap();

    public abstract com.huawei.hms.api.ConnectionResult getConnectionResult(com.huawei.hms.api.Api<?> r1);

    public abstract java.util.List<com.huawei.hms.support.api.entity.auth.PermissionInfo> getPermissionInfos();

    public abstract java.util.List<com.huawei.hms.support.api.entity.auth.Scope> getScopes();

    public abstract android.app.Activity getTopActivity();

    public abstract boolean hasConnectedApi(com.huawei.hms.api.Api<?> r1);

    public abstract boolean hasConnectionFailureListener(com.huawei.hms.api.HuaweiApiClient.OnConnectionFailedListener r1);

    public abstract boolean hasConnectionSuccessListener(com.huawei.hms.api.HuaweiApiClient.ConnectionCallbacks r1);

    public abstract com.huawei.hms.api.ConnectionResult holdUpConnect();

    public abstract com.huawei.hms.api.ConnectionResult holdUpConnect(long r1, java.util.concurrent.TimeUnit r3);

    @Override
    public abstract boolean isConnected();

    public abstract boolean isConnecting();

    public abstract void onPause(android.app.Activity r1);

    public abstract void onResume(android.app.Activity r1);

    public abstract void print(java.lang.String r1, java.io.FileDescriptor r2, java.io.PrintWriter r3, java.lang.String[] r4);

    public abstract void reconnect();

    public abstract void removeConnectionFailureListener(com.huawei.hms.api.HuaweiApiClient.OnConnectionFailedListener r1);

    public abstract void removeConnectionSuccessListener(com.huawei.hms.api.HuaweiApiClient.ConnectionCallbacks r1);

    public abstract void setConnectionCallbacks(com.huawei.hms.api.HuaweiApiClient.ConnectionCallbacks r1);

    public abstract void setConnectionFailedListener(com.huawei.hms.api.HuaweiApiClient.OnConnectionFailedListener r1);

    public abstract boolean setSubAppInfo(com.huawei.hms.support.api.client.SubAppInfo r1);
}
