package com.huawei.hms.activity;

public class ForegroundBusDelegate implements com.huawei.hms.activity.IBridgeActivityDelegate {
    private static final java.lang.String EXTRA_DELEGATE_NAME = "intent.extra.hms.core.DELEGATE_NAME";
    private static final java.lang.String EXTRA_DELEGATE_VALUE = "com.huawei.hms.core.activity.ForegroundBus";
    public static final java.lang.String HMS_FOREGROUND_REQ_BODY = "HMS_FOREGROUND_REQ_BODY";
    public static final java.lang.String HMS_FOREGROUND_REQ_HEADER = "HMS_FOREGROUND_REQ_HEADER";
    public static final java.lang.String HMS_FOREGROUND_REQ_INNER = "HMS_FOREGROUND_REQ_INNER";
    public static final java.lang.String HMS_FOREGROUND_RESP_HEADER = "HMS_FOREGROUND_RESP_HEADER";
    private static final int REQUEST_CODE_BUS = 431057;
    private static final java.lang.String TAG = "ForegroundBusDelegate";
    private static final java.lang.String UI_JUMP_ACTIVITY_NAME = "com.huawei.hms.core.activity.UiJumpActivity";
    private java.lang.String foregroundBody;
    private com.huawei.hms.common.internal.RequestHeader foregroundHeader;
    private com.huawei.hms.activity.internal.ForegroundInnerHeader innerHeader;
    private java.lang.ref.WeakReference<android.app.Activity> mThisWeakRef;
    private com.huawei.hms.common.internal.ResponseHeader responseHeader;

    static class 1 {
    }

    private class MyAvailableCallBack implements com.huawei.hms.adapter.AvailableAdapter.AvailableCallBack {
        final com.huawei.hms.activity.ForegroundBusDelegate this$0;

        private MyAvailableCallBack(com.huawei.hms.activity.ForegroundBusDelegate r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        MyAvailableCallBack(com.huawei.hms.activity.ForegroundBusDelegate r1, com.huawei.hms.activity.ForegroundBusDelegate.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void onComplete(int r3) {
                r2 = this;
                if (r3 != 0) goto L8
                com.huawei.hms.activity.ForegroundBusDelegate r3 = r2.this$0
                com.huawei.hms.activity.ForegroundBusDelegate.access$100(r3)
                goto L17
            L8:
                java.lang.String r3 = "ForegroundBusDelegate"
                java.lang.String r0 = "version check failed"
                com.huawei.hms.support.log.HMSLog.i(r3, r0)
                com.huawei.hms.activity.ForegroundBusDelegate r3 = r2.this$0
                r0 = 0
                java.lang.String r1 = "apk version is invalid"
                com.huawei.hms.activity.ForegroundBusDelegate.access$200(r3, r0, r1)
            L17:
                return
        }
    }

    public ForegroundBusDelegate() {
            r1 = this;
            r1.<init>()
            com.huawei.hms.activity.internal.ForegroundInnerHeader r0 = new com.huawei.hms.activity.internal.ForegroundInnerHeader
            r0.<init>()
            r1.innerHeader = r0
            return
    }

    static void access$100(com.huawei.hms.activity.ForegroundBusDelegate r0) {
            r0.startApkHubActivity()
            return
    }

    static void access$200(com.huawei.hms.activity.ForegroundBusDelegate r0, int r1, java.lang.String r2) {
            r0.errorReturn(r1, r2)
            return
    }

    private void biReportRequestEntryForegroundBus() {
            r4 = this;
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil r0 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.getInstance()
            com.huawei.hms.common.internal.RequestHeader r1 = r4.foregroundHeader
            java.util.Map r0 = r0.getMapFromForegroundRequestHeader(r1)
            java.lang.String r1 = "direction"
            java.lang.String r2 = "req"
            r0.put(r1, r2)
            com.huawei.hms.common.internal.RequestHeader r1 = r4.foregroundHeader
            int r1 = r1.getKitSdkVersion()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r1 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.versionCodeToName(r1)
            java.lang.String r2 = "version"
            r0.put(r2, r1)
            android.app.Activity r1 = r4.getActivity()
            if (r1 == 0) goto L3b
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil r1 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.getInstance()
            android.app.Activity r2 = r4.getActivity()
            android.content.Context r2 = r2.getApplicationContext()
            java.lang.String r3 = "HMS_SDK_BASE_ACTIVITY_STARTED"
            r1.onNewEvent(r2, r3, r0)
        L3b:
            return
    }

    private void biReportRequestEntryStartCore() {
            r4 = this;
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil r0 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.getInstance()
            com.huawei.hms.common.internal.RequestHeader r1 = r4.foregroundHeader
            java.util.Map r0 = r0.getMapFromForegroundRequestHeader(r1)
            java.lang.String r1 = "direction"
            java.lang.String r2 = "req"
            r0.put(r1, r2)
            com.huawei.hms.common.internal.RequestHeader r1 = r4.foregroundHeader
            int r1 = r1.getKitSdkVersion()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r1 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.versionCodeToName(r1)
            java.lang.String r2 = "version"
            r0.put(r2, r1)
            android.app.Activity r1 = r4.getActivity()
            if (r1 == 0) goto L3b
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil r1 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.getInstance()
            android.app.Activity r2 = r4.getActivity()
            android.content.Context r2 = r2.getApplicationContext()
            java.lang.String r3 = "HMS_SDK_BASE_START_CORE_ACTIVITY"
            r1.onNewEvent(r2, r3, r0)
        L3b:
            return
    }

    private void biReportRequestReturnForegroundBus() {
            r4 = this;
            com.huawei.hms.common.internal.RequestHeader r0 = r4.foregroundHeader
            if (r0 == 0) goto L5f
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil r0 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.getInstance()
            com.huawei.hms.common.internal.RequestHeader r1 = r4.foregroundHeader
            java.util.Map r0 = r0.getMapFromForegroundRequestHeader(r1)
            java.lang.String r1 = "direction"
            java.lang.String r2 = "rsp"
            r0.put(r1, r2)
            com.huawei.hms.common.internal.RequestHeader r1 = r4.foregroundHeader
            int r1 = r1.getKitSdkVersion()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r1 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.versionCodeToName(r1)
            java.lang.String r2 = "version"
            r0.put(r2, r1)
            com.huawei.hms.common.internal.ResponseHeader r1 = r4.responseHeader
            if (r1 == 0) goto L48
            int r1 = r1.getStatusCode()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "statusCode"
            r0.put(r2, r1)
            com.huawei.hms.common.internal.ResponseHeader r1 = r4.responseHeader
            int r1 = r1.getErrorCode()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "result"
            r0.put(r2, r1)
        L48:
            android.app.Activity r1 = r4.getActivity()
            if (r1 == 0) goto L5f
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil r1 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.getInstance()
            android.app.Activity r2 = r4.getActivity()
            android.content.Context r2 = r2.getApplicationContext()
            java.lang.String r3 = "HMS_SDK_BASE_ACTIVITY_STARTED"
            r1.onNewEvent(r2, r3, r0)
        L5f:
            return
    }

    private void biReportRequestReturnStartCore() {
            r4 = this;
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil r0 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.getInstance()
            com.huawei.hms.common.internal.RequestHeader r1 = r4.foregroundHeader
            java.util.Map r0 = r0.getMapFromForegroundRequestHeader(r1)
            java.lang.String r1 = "direction"
            java.lang.String r2 = "rsp"
            r0.put(r1, r2)
            com.huawei.hms.common.internal.RequestHeader r1 = r4.foregroundHeader
            int r1 = r1.getKitSdkVersion()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r1 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.versionCodeToName(r1)
            java.lang.String r2 = "version"
            r0.put(r2, r1)
            com.huawei.hms.common.internal.ResponseHeader r1 = r4.responseHeader
            if (r1 == 0) goto L44
            int r1 = r1.getStatusCode()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "statusCode"
            r0.put(r2, r1)
            com.huawei.hms.common.internal.ResponseHeader r1 = r4.responseHeader
            int r1 = r1.getErrorCode()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "result"
            r0.put(r2, r1)
        L44:
            android.app.Activity r1 = r4.getActivity()
            if (r1 == 0) goto L5b
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil r1 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.getInstance()
            android.app.Activity r2 = r4.getActivity()
            android.content.Context r2 = r2.getApplicationContext()
            java.lang.String r3 = "HMS_SDK_BASE_START_CORE_ACTIVITY"
            r1.onNewEvent(r2, r3, r0)
        L5b:
            return
    }

    private void checkMinVersion() {
            r4 = this;
            android.app.Activity r0 = r4.getActivity()
            java.lang.String r1 = "ForegroundBusDelegate"
            if (r0 != 0) goto Le
            java.lang.String r0 = "checkMinVersion failed, activity must not be null."
            com.huawei.hms.support.log.HMSLog.e(r1, r0)
            return
        Le:
            android.app.Activity r0 = r4.getActivity()
            android.content.Context r0 = r0.getApplicationContext()
            boolean r0 = com.huawei.hms.utils.Util.isAvailableLibExist(r0)
            if (r0 != 0) goto L3e
            com.huawei.hms.api.HuaweiApiAvailability r0 = com.huawei.hms.api.HuaweiApiAvailability.getInstance()
            android.app.Activity r2 = r4.getActivity()
            android.content.Context r2 = r2.getApplicationContext()
            com.huawei.hms.activity.internal.ForegroundInnerHeader r3 = r4.innerHeader
            int r3 = r3.getApkVersion()
            int r0 = r0.isHuaweiMobileServicesAvailable(r2, r3)
            if (r0 == 0) goto L3a
            java.lang.String r0 = "checkMinVersion failed, and no available lib exists."
            com.huawei.hms.support.log.HMSLog.e(r1, r0)
            return
        L3a:
            r4.startApkHubActivity()
            goto L6e
        L3e:
            com.huawei.hms.activity.ForegroundBusDelegate$MyAvailableCallBack r0 = new com.huawei.hms.activity.ForegroundBusDelegate$MyAvailableCallBack
            r1 = 0
            r0.<init>(r4, r1)
            com.huawei.hms.adapter.AvailableAdapter r1 = new com.huawei.hms.adapter.AvailableAdapter
            com.huawei.hms.activity.internal.ForegroundInnerHeader r2 = r4.innerHeader
            int r2 = r2.getApkVersion()
            r1.<init>(r2)
            android.app.Activity r2 = r4.getActivity()
            int r2 = r1.isHuaweiMobileServicesAvailable(r2)
            if (r2 != 0) goto L5d
            r0.onComplete(r2)
            goto L6e
        L5d:
            boolean r3 = r1.isUserResolvableError(r2)
            if (r3 == 0) goto L6b
            android.app.Activity r2 = r4.getActivity()
            resolution(r2, r1, r0)
            goto L6e
        L6b:
            r0.onComplete(r2)
        L6e:
            return
    }

    private void errorReturn(int r5, java.lang.String r6) {
            r4 = this;
            java.lang.String r0 = "ForegroundBusDelegate"
            com.huawei.hms.support.log.HMSLog.e(r0, r6)
            android.app.Activity r0 = r4.getActivity()
            if (r0 != 0) goto Lc
            return
        Lc:
            com.huawei.hms.activity.internal.ForegroundInnerHeader r1 = r4.innerHeader
            java.lang.String r1 = r1.getResponseCallbackKey()
            com.huawei.hms.activity.internal.BusResponseCallback r1 = r4.getResponseCallback(r1)
            r2 = 0
            if (r1 == 0) goto L37
            java.lang.ref.WeakReference<android.app.Activity> r3 = r4.mThisWeakRef
            java.lang.Object r3 = r3.get()
            android.app.Activity r3 = (android.app.Activity) r3
            com.huawei.hms.activity.internal.BusResponseResult r5 = r1.innerError(r3, r5, r6)
            if (r5 != 0) goto L2b
            r0.setResult(r2)
            goto L3a
        L2b:
            int r6 = r5.getCode()
            android.content.Intent r5 = r5.getIntent()
            r0.setResult(r6, r5)
            goto L3a
        L37:
            r0.setResult(r2)
        L3a:
            r4.finishBridgeActivity()
            return
    }

    private void finishBridgeActivity() {
            r2 = this;
            android.app.Activity r0 = r2.getActivity()
            if (r0 == 0) goto L10
            boolean r1 = r0.isFinishing()
            if (r1 == 0) goto Ld
            goto L10
        Ld:
            r0.finish()
        L10:
            return
    }

    private android.app.Activity getActivity() {
            r1 = this;
            java.lang.ref.WeakReference<android.app.Activity> r0 = r1.mThisWeakRef
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.lang.Object r0 = r0.get()
            android.app.Activity r0 = (android.app.Activity) r0
            return r0
    }

    private com.huawei.hms.activity.internal.BusResponseCallback getResponseCallback(java.lang.String r2) {
            r1 = this;
            com.huawei.hms.activity.internal.ForegroundBusResponseMgr r0 = com.huawei.hms.activity.internal.ForegroundBusResponseMgr.getInstance()
            com.huawei.hms.activity.internal.BusResponseCallback r2 = r0.get(r2)
            return r2
    }

    private static void resolution(android.app.Activity r2, com.huawei.hms.adapter.AvailableAdapter r3, com.huawei.hms.adapter.AvailableAdapter.AvailableCallBack r4) {
            if (r2 != 0) goto L9
            java.lang.String r0 = "ForegroundBusDelegate"
            java.lang.String r1 = "null activity, could not start resolution intent"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
        L9:
            r3.startResolution(r2, r4)
            return
    }

    private void startApkHubActivity() {
            r6 = this;
            java.lang.String r0 = "ForegroundBusDelegate"
            java.lang.String r1 = "startApkHubActivity"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            android.app.Activity r1 = r6.getActivity()
            if (r1 != 0) goto L13
            java.lang.String r1 = "startApkHubActivity but activity is null"
            com.huawei.hms.support.log.HMSLog.e(r0, r1)
            return
        L13:
            android.content.Context r2 = r1.getApplicationContext()
            com.huawei.hms.utils.HMSPackageManager r2 = com.huawei.hms.utils.HMSPackageManager.getInstance(r2)
            java.lang.String r2 = r2.getHMSPackageName()
            android.content.Intent r3 = new android.content.Intent
            com.huawei.hms.activity.internal.ForegroundInnerHeader r4 = r6.innerHeader
            java.lang.String r4 = r4.getAction()
            r3.<init>(r4)
            java.lang.String r4 = r6.foregroundBody
            java.lang.String r5 = "HMS_FOREGROUND_REQ_BODY"
            r3.putExtra(r5, r4)
            r3.setPackage(r2)
            boolean r4 = com.huawei.hms.utils.UIUtil.isActivityFullscreen(r1)
            java.lang.String r5 = "intent.extra.isfullscreen"
            r3.putExtra(r5, r4)
            java.lang.String r4 = "com.huawei.hms.core.activity.UiJumpActivity"
            r3.setClassName(r2, r4)
            com.huawei.hms.common.internal.RequestHeader r2 = r6.foregroundHeader
            java.lang.String r2 = r2.toJson()
            java.lang.String r4 = "HMS_FOREGROUND_REQ_HEADER"
            r3.putExtra(r4, r2)
            java.lang.String r2 = "intent.extra.hms.core.DELEGATE_NAME"
            java.lang.String r4 = "com.huawei.hms.core.activity.ForegroundBus"
            r3.putExtra(r2, r4)
            r6.biReportRequestEntryStartCore()     // Catch: android.content.ActivityNotFoundException -> L5e
            r2 = 431057(0x693d1, float:6.0404E-40)
            r1.startActivityForResult(r3, r2)     // Catch: android.content.ActivityNotFoundException -> L5e
            goto L6a
        L5e:
            r1 = move-exception
            java.lang.String r2 = "Launch sign in Intent failed. hms is probably being updated："
            com.huawei.hms.support.log.HMSLog.e(r0, r2, r1)
            r0 = 0
            java.lang.String r1 = "launch bus intent failed"
            r6.errorReturn(r0, r1)
        L6a:
            return
    }

    private void succeedReturn(int r3, android.content.Intent r4) {
            r2 = this;
            java.lang.String r0 = "ForegroundBusDelegate"
            java.lang.String r1 = "succeedReturn"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            android.app.Activity r0 = r2.getActivity()
            if (r0 != 0) goto Le
            return
        Le:
            r0.setResult(r3, r4)
            r2.finishBridgeActivity()
            return
    }

    @Override
    public int getRequestCode() {
            r1 = this;
            r0 = 431057(0x693d1, float:6.0404E-40)
            return r0
    }

    @Override
    public void onBridgeActivityCreate(android.app.Activity r4) {
            r3 = this;
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r4)
            r3.mThisWeakRef = r0
            android.content.Intent r4 = r4.getIntent()
            java.lang.String r0 = "HMS_FOREGROUND_REQ_HEADER"
            java.lang.String r0 = r4.getStringExtra(r0)
            com.huawei.hms.common.internal.RequestHeader r1 = new com.huawei.hms.common.internal.RequestHeader
            r1.<init>()
            r3.foregroundHeader = r1
            boolean r0 = r1.fromJson(r0)
            r1 = 0
            if (r0 != 0) goto L25
            java.lang.String r4 = "header is invalid"
            r3.errorReturn(r1, r4)
            return
        L25:
            java.lang.String r0 = "HMS_FOREGROUND_REQ_BODY"
            java.lang.String r0 = r4.getStringExtra(r0)
            r3.foregroundBody = r0
            com.huawei.hms.activity.internal.ForegroundInnerHeader r0 = r3.innerHeader
            java.lang.String r2 = "HMS_FOREGROUND_REQ_INNER"
            java.lang.String r4 = r4.getStringExtra(r2)
            r0.fromJson(r4)
            com.huawei.hms.activity.internal.ForegroundInnerHeader r4 = r3.innerHeader
            if (r4 != 0) goto L42
            java.lang.String r4 = "inner header is invalid"
            r3.errorReturn(r1, r4)
            return
        L42:
            com.huawei.hms.common.internal.RequestHeader r4 = r3.foregroundHeader
            java.lang.String r4 = r4.getApiName()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 == 0) goto L54
            java.lang.String r4 = "action is invalid"
            r3.errorReturn(r1, r4)
            return
        L54:
            r3.biReportRequestEntryForegroundBus()
            r3.checkMinVersion()
            return
    }

    @Override
    public void onBridgeActivityDestroy() {
            r1 = this;
            r1.biReportRequestReturnForegroundBus()
            r0 = 0
            r1.mThisWeakRef = r0
            return
    }

    @Override
    public boolean onBridgeActivityResult(int r2, int r3, android.content.Intent r4) {
            r1 = this;
            r0 = 431057(0x693d1, float:6.0404E-40)
            if (r2 != r0) goto L4f
            if (r4 == 0) goto L1d
            java.lang.String r2 = "HMS_FOREGROUND_RESP_HEADER"
            boolean r0 = r4.hasExtra(r2)
            if (r0 == 0) goto L1d
            java.lang.String r2 = r4.getStringExtra(r2)
            com.huawei.hms.common.internal.ResponseHeader r0 = new com.huawei.hms.common.internal.ResponseHeader
            r0.<init>()
            r1.responseHeader = r0
            com.huawei.hms.utils.JsonUtil.jsonToEntity(r2, r0)
        L1d:
            r1.biReportRequestReturnStartCore()
            com.huawei.hms.activity.internal.ForegroundInnerHeader r2 = r1.innerHeader
            java.lang.String r2 = r2.getResponseCallbackKey()
            com.huawei.hms.activity.internal.BusResponseCallback r2 = r1.getResponseCallback(r2)
            if (r2 != 0) goto L30
            r1.succeedReturn(r3, r4)
            goto L4d
        L30:
            java.lang.ref.WeakReference<android.app.Activity> r0 = r1.mThisWeakRef
            java.lang.Object r0 = r0.get()
            android.app.Activity r0 = (android.app.Activity) r0
            com.huawei.hms.activity.internal.BusResponseResult r2 = r2.succeedReturn(r0, r3, r4)
            if (r2 != 0) goto L42
            r1.succeedReturn(r3, r4)
            goto L4d
        L42:
            int r3 = r2.getCode()
            android.content.Intent r2 = r2.getIntent()
            r1.succeedReturn(r3, r2)
        L4d:
            r2 = 1
            return r2
        L4f:
            r2 = 0
            return r2
    }

    @Override
    public void onBridgeConfigurationChanged() {
            r0 = this;
            return
    }

    @Override
    public void onKeyUp(int r1, android.view.KeyEvent r2) {
            r0 = this;
            return
    }
}
