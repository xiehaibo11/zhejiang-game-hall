package com.huawei.hms.common;

import com.huawei.hms.api.Api.ApiOptions;

public class HuaweiApi<TOption extends com.huawei.hms.api.Api.ApiOptions> {
    private static final java.lang.String TAG = "HuaweiApi";
    private int apiLevel;
    private java.lang.String innerHmsPkg;
    private boolean isFirstReqSent;
    private java.lang.ref.WeakReference<android.app.Activity> mActivity;
    private java.lang.String mAppID;
    private com.huawei.hms.common.internal.AbstractClientBuilder<?, TOption> mClientBuilder;
    private com.huawei.hms.common.internal.ConnectionManagerKey<TOption> mConnectionManagerKey;
    private android.content.Context mContext;
    private java.lang.String mHostAppid;
    private com.huawei.hms.common.internal.HuaweiApiManager mHuaweiApiManager;
    private int mKitSdkVersion;
    private TOption mOption;
    private com.huawei.hms.support.api.client.SubAppInfo mSubAppInfo;

    public HuaweiApi(android.app.Activity r9, com.huawei.hms.api.Api<TOption> r10, TOption r11, com.huawei.hms.common.internal.AbstractClientBuilder r12) {
            r8 = this;
            r8.<init>()
            r0 = 1
            r8.apiLevel = r0
            r0 = 0
            r8.isFirstReqSent = r0
            java.lang.String r0 = "Null activity is not permitted."
            com.huawei.hms.utils.Checker.checkNonNull(r9, r0)
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r9)
            r8.mActivity = r0
            r6 = 0
            r7 = 0
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r1.init(r2, r3, r4, r5, r6, r7)
            return
    }

    public HuaweiApi(android.app.Activity r9, com.huawei.hms.api.Api<TOption> r10, TOption r11, com.huawei.hms.common.internal.AbstractClientBuilder r12, int r13) {
            r8 = this;
            r8.<init>()
            r0 = 1
            r8.apiLevel = r0
            r0 = 0
            r8.isFirstReqSent = r0
            java.lang.String r0 = "Null activity is not permitted."
            com.huawei.hms.utils.Checker.checkNonNull(r9, r0)
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r9)
            r8.mActivity = r0
            r7 = 0
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r1.init(r2, r3, r4, r5, r6, r7)
            return
    }

    public HuaweiApi(android.app.Activity r2, com.huawei.hms.api.Api<TOption> r3, TOption r4, com.huawei.hms.common.internal.AbstractClientBuilder r5, int r6, java.lang.String r7) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.apiLevel = r0
            r0 = 0
            r1.isFirstReqSent = r0
            java.lang.String r0 = "Null activity is not permitted."
            com.huawei.hms.utils.Checker.checkNonNull(r2, r0)
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.mActivity = r0
            r1.init(r2, r3, r4, r5, r6, r7)
            return
    }

    public HuaweiApi(android.content.Context r9, com.huawei.hms.api.Api<TOption> r10, TOption r11, com.huawei.hms.common.internal.AbstractClientBuilder r12) {
            r8 = this;
            r8.<init>()
            r0 = 1
            r8.apiLevel = r0
            r0 = 0
            r8.isFirstReqSent = r0
            java.lang.String r0 = "Null context is not permitted."
            com.huawei.hms.utils.Checker.checkNonNull(r9, r0)
            r6 = 0
            r7 = 0
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r1.init(r2, r3, r4, r5, r6, r7)
            return
    }

    public HuaweiApi(android.content.Context r9, com.huawei.hms.api.Api<TOption> r10, TOption r11, com.huawei.hms.common.internal.AbstractClientBuilder r12, int r13) {
            r8 = this;
            r8.<init>()
            r0 = 1
            r8.apiLevel = r0
            r0 = 0
            r8.isFirstReqSent = r0
            java.lang.String r0 = "Null context is not permitted."
            com.huawei.hms.utils.Checker.checkNonNull(r9, r0)
            r7 = 0
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r1.init(r2, r3, r4, r5, r6, r7)
            return
    }

    public HuaweiApi(android.content.Context r2, com.huawei.hms.api.Api<TOption> r3, TOption r4, com.huawei.hms.common.internal.AbstractClientBuilder r5, int r6, java.lang.String r7) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.apiLevel = r0
            r0 = 0
            r1.isFirstReqSent = r0
            java.lang.String r0 = "Null context is not permitted."
            com.huawei.hms.utils.Checker.checkNonNull(r2, r0)
            r1.init(r2, r3, r4, r5, r6, r7)
            return
    }

    private void init(android.content.Context r2, com.huawei.hms.api.Api<TOption> r3, TOption r4, com.huawei.hms.common.internal.AbstractClientBuilder r5, int r6, java.lang.String r7) {
            r1 = this;
            android.content.Context r0 = r2.getApplicationContext()
            r1.mContext = r0
            com.huawei.hms.common.internal.HuaweiApiManager r0 = com.huawei.hms.common.internal.HuaweiApiManager.getInstance(r0)
            r1.mHuaweiApiManager = r0
            com.huawei.hms.common.internal.ConnectionManagerKey r3 = com.huawei.hms.common.internal.ConnectionManagerKey.createConnectionManagerKey(r2, r3, r4, r7)
            r1.mConnectionManagerKey = r3
            r1.mOption = r4
            r1.mClientBuilder = r5
            java.lang.String r3 = com.huawei.hms.utils.Util.getAppId(r2)
            r1.mHostAppid = r3
            r1.mAppID = r3
            com.huawei.hms.support.api.client.SubAppInfo r3 = new com.huawei.hms.support.api.client.SubAppInfo
            java.lang.String r4 = ""
            r3.<init>(r4)
            r1.mSubAppInfo = r3
            r1.mKitSdkVersion = r6
            boolean r3 = android.text.TextUtils.isEmpty(r7)
            if (r3 != 0) goto L5a
            java.lang.String r3 = r1.mHostAppid
            boolean r3 = r7.equals(r3)
            java.lang.String r4 = "HuaweiApi"
            if (r3 == 0) goto L3f
            java.lang.String r3 = "subAppId is host appid"
            com.huawei.hms.support.log.HMSLog.e(r4, r3)
            goto L5a
        L3f:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "subAppId is "
            r3.append(r5)
            r3.append(r7)
            java.lang.String r3 = r3.toString()
            com.huawei.hms.support.log.HMSLog.i(r4, r3)
            com.huawei.hms.support.api.client.SubAppInfo r3 = new com.huawei.hms.support.api.client.SubAppInfo
            r3.<init>(r7)
            r1.mSubAppInfo = r3
        L5a:
            r1.initBI(r2)
            return
    }

    private void initBI(android.content.Context r1) {
            r0 = this;
            com.huawei.hms.utils.HMSBIInitializer r1 = com.huawei.hms.utils.HMSBIInitializer.getInstance(r1)
            r1.initBI()
            return
    }

    private <TResult, TClient extends com.huawei.hms.common.internal.AnyClient> com.huawei.hmf.tasks.Task<TResult> sendRequest(com.huawei.hms.common.internal.TaskApiCall<TClient, TResult> r3) {
            r2 = this;
            com.huawei.hmf.tasks.CancellationToken r0 = r3.getToken()
            if (r0 != 0) goto Lc
            com.huawei.hmf.tasks.TaskCompletionSource r0 = new com.huawei.hmf.tasks.TaskCompletionSource
            r0.<init>()
            goto L15
        Lc:
            com.huawei.hmf.tasks.TaskCompletionSource r0 = new com.huawei.hmf.tasks.TaskCompletionSource
            com.huawei.hmf.tasks.CancellationToken r1 = r3.getToken()
            r0.<init>(r1)
        L15:
            com.huawei.hms.common.internal.HuaweiApiManager r1 = r2.mHuaweiApiManager
            r1.sendRequest(r2, r3, r0)
            com.huawei.hmf.tasks.Task r3 = r0.getTask()
            return r3
    }

    public com.huawei.hmf.tasks.Task<java.lang.Boolean> disconnectService() {
            r2 = this;
            com.huawei.hmf.tasks.TaskCompletionSource r0 = new com.huawei.hmf.tasks.TaskCompletionSource
            r0.<init>()
            com.huawei.hms.common.internal.HuaweiApiManager r1 = r2.mHuaweiApiManager
            r1.disconnectService(r2, r0)
            com.huawei.hmf.tasks.Task r0 = r0.getTask()
            return r0
    }

    public <TResult, TClient extends com.huawei.hms.common.internal.AnyClient> com.huawei.hmf.tasks.Task<TResult> doWrite(com.huawei.hms.common.internal.TaskApiCall<TClient, TResult> r6) {
            r5 = this;
            r0 = 1
            r5.isFirstReqSent = r0
            if (r6 != 0) goto L20
            java.lang.String r6 = "HuaweiApi"
            java.lang.String r0 = "in doWrite:taskApiCall is null"
            com.huawei.hms.support.log.HMSLog.e(r6, r0)
            com.huawei.hmf.tasks.TaskCompletionSource r6 = new com.huawei.hmf.tasks.TaskCompletionSource
            r6.<init>()
            com.huawei.hms.common.ApiException r0 = new com.huawei.hms.common.ApiException
            com.huawei.hms.support.api.client.Status r1 = com.huawei.hms.support.api.client.Status.FAILURE
            r0.<init>(r1)
            r6.setException(r0)
            com.huawei.hmf.tasks.Task r6 = r6.getTask()
            return r6
        L20:
            com.huawei.hms.support.api.client.SubAppInfo r0 = r5.mSubAppInfo
            java.lang.String r0 = r0.getSubAppID()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L2f
            java.lang.String r0 = r5.mAppID
            goto L35
        L2f:
            com.huawei.hms.support.api.client.SubAppInfo r0 = r5.mSubAppInfo
            java.lang.String r0 = r0.getSubAppID()
        L35:
            android.content.Context r1 = r5.mContext
            java.lang.String r2 = r6.getUri()
            java.lang.String r3 = r6.getTransactionId()
            int r4 = r5.getKitSdkVersion()
            java.lang.String r4 = java.lang.String.valueOf(r4)
            com.huawei.hms.support.hianalytics.b.a(r1, r2, r0, r3, r4)
            com.huawei.hmf.tasks.Task r6 = r5.sendRequest(r6)
            return r6
    }

    public android.app.Activity getActivity() {
            r1 = this;
            java.lang.ref.WeakReference<android.app.Activity> r0 = r1.mActivity
            if (r0 == 0) goto Lb
            java.lang.Object r0 = r0.get()
            android.app.Activity r0 = (android.app.Activity) r0
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public int getApiLevel() {
            r1 = this;
            int r0 = r1.apiLevel
            return r0
    }

    public java.lang.String getAppID() {
            r1 = this;
            java.lang.String r0 = r1.mAppID
            return r0
    }

    public com.huawei.hms.common.internal.AnyClient getClient(android.os.Looper r3, com.huawei.hms.common.internal.HuaweiApiManager.ConnectionManager r4) {
            r2 = this;
            com.huawei.hms.common.internal.AbstractClientBuilder<?, TOption extends com.huawei.hms.api.Api$ApiOptions> r3 = r2.mClientBuilder
            android.content.Context r0 = r2.mContext
            com.huawei.hms.common.internal.ClientSettings r1 = r2.getClientSetting()
            com.huawei.hms.common.internal.AnyClient r3 = r3.buildClient(r0, r1, r4, r4)
            return r3
    }

    protected com.huawei.hms.common.internal.ClientSettings getClientSetting() {
            r8 = this;
            com.huawei.hms.common.internal.ClientSettings r7 = new com.huawei.hms.common.internal.ClientSettings
            android.content.Context r0 = r8.mContext
            java.lang.String r1 = r0.getPackageName()
            android.content.Context r0 = r8.mContext
            java.lang.Class r0 = r0.getClass()
            java.lang.String r2 = r0.getName()
            java.util.List r3 = r8.getScopes()
            java.lang.String r4 = r8.mHostAppid
            com.huawei.hms.support.api.client.SubAppInfo r6 = r8.mSubAppInfo
            r5 = 0
            r0 = r7
            r0.<init>(r1, r2, r3, r4, r5, r6)
            java.lang.String r0 = r8.innerHmsPkg
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L4b
            android.content.Context r0 = r8.mContext
            com.huawei.hms.utils.HMSPackageManager r0 = com.huawei.hms.utils.HMSPackageManager.getInstance(r0)
            java.lang.String r0 = r0.getHMSPackageName()
            r8.innerHmsPkg = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "inner hms is empty,hms pkg name is "
            r0.append(r1)
            java.lang.String r1 = r8.innerHmsPkg
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "HuaweiApi"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
        L4b:
            java.lang.String r0 = r8.innerHmsPkg
            r7.setInnerHmsPkg(r0)
            java.lang.ref.WeakReference<android.app.Activity> r0 = r8.mActivity
            if (r0 == 0) goto L5d
            java.lang.Object r0 = r0.get()
            android.app.Activity r0 = (android.app.Activity) r0
            r7.setCpActivity(r0)
        L5d:
            return r7
    }

    public com.huawei.hms.common.internal.ConnectionManagerKey<TOption> getConnectionManagerKey() {
            r1 = this;
            com.huawei.hms.common.internal.ConnectionManagerKey<TOption extends com.huawei.hms.api.Api$ApiOptions> r0 = r1.mConnectionManagerKey
            return r0
    }

    public android.content.Context getContext() {
            r1 = this;
            android.content.Context r0 = r1.mContext
            return r0
    }

    public int getKitSdkVersion() {
            r1 = this;
            int r0 = r1.mKitSdkVersion
            return r0
    }

    public TOption getOption() {
            r1 = this;
            TOption extends com.huawei.hms.api.Api$ApiOptions r0 = r1.mOption
            return r0
    }

    protected java.util.List<com.huawei.hms.support.api.entity.auth.Scope> getScopes() {
            r1 = this;
            java.util.List r0 = java.util.Collections.emptyList()
            return r0
    }

    public java.lang.String getSubAppID() {
            r1 = this;
            com.huawei.hms.support.api.client.SubAppInfo r0 = r1.mSubAppInfo
            java.lang.String r0 = r0.getSubAppID()
            return r0
    }

    public void setApiLevel(int r1) {
            r0 = this;
            r0.apiLevel = r1
            return
    }

    public void setInnerHms() {
            r2 = this;
            android.content.Context r0 = r2.mContext
            java.lang.String r0 = r0.getPackageName()
            r2.innerHmsPkg = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "init inner hms pkg info:"
            r0.append(r1)
            java.lang.String r1 = r2.innerHmsPkg
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "HuaweiApi"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            return
    }

    public void setKitSdkVersion(int r1) {
            r0 = this;
            r0.mKitSdkVersion = r1
            return
    }

    public void setSubAppId(java.lang.String r2) throws com.huawei.hms.common.ApiException {
            r1 = this;
            com.huawei.hms.support.api.client.SubAppInfo r0 = new com.huawei.hms.support.api.client.SubAppInfo
            r0.<init>(r2)
            boolean r2 = r1.setSubAppInfo(r0)
            if (r2 == 0) goto Lc
            return
        Lc:
            com.huawei.hms.common.ApiException r2 = new com.huawei.hms.common.ApiException
            com.huawei.hms.support.api.client.Status r0 = com.huawei.hms.support.api.client.Status.FAILURE
            r2.<init>(r0)
            throw r2
    }

    @java.lang.Deprecated
    public boolean setSubAppInfo(com.huawei.hms.support.api.client.SubAppInfo r5) {
            r4 = this;
            java.lang.String r0 = "HuaweiApi"
            java.lang.String r1 = "Enter setSubAppInfo"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            com.huawei.hms.support.api.client.SubAppInfo r1 = r4.mSubAppInfo
            r2 = 0
            if (r1 == 0) goto L1c
            java.lang.String r1 = r1.getSubAppID()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L1c
            java.lang.String r5 = "subAppInfo is already set"
            com.huawei.hms.support.log.HMSLog.e(r0, r5)
            return r2
        L1c:
            if (r5 != 0) goto L24
            java.lang.String r5 = "subAppInfo is null"
            com.huawei.hms.support.log.HMSLog.e(r0, r5)
            return r2
        L24:
            java.lang.String r1 = r5.getSubAppID()
            boolean r3 = android.text.TextUtils.isEmpty(r1)
            if (r3 == 0) goto L34
            java.lang.String r5 = "subAppId is empty"
            com.huawei.hms.support.log.HMSLog.e(r0, r5)
            return r2
        L34:
            java.lang.String r3 = r4.mHostAppid
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L42
            java.lang.String r5 = "subAppId is host appid"
            com.huawei.hms.support.log.HMSLog.e(r0, r5)
            return r2
        L42:
            boolean r1 = r4.isFirstReqSent
            if (r1 == 0) goto L4c
            java.lang.String r5 = "Client has sent request to Huawei Mobile Services, setting subAppId is not allowed"
            com.huawei.hms.support.log.HMSLog.e(r0, r5)
            return r2
        L4c:
            com.huawei.hms.support.api.client.SubAppInfo r0 = new com.huawei.hms.support.api.client.SubAppInfo
            r0.<init>(r5)
            r4.mSubAppInfo = r0
            r5 = 1
            return r5
    }
}
