package com.huawei.hms.activity;

public class ForegroundIntentBuilder {
    private android.app.Activity activity;
    private java.lang.String foregroundBody;
    private com.huawei.hms.common.internal.RequestHeader foregroundHeader;
    private com.huawei.hms.activity.internal.ForegroundInnerHeader innerHeader;

    public ForegroundIntentBuilder(android.app.Activity r2) throws java.lang.IllegalArgumentException {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto L2f
            r1.activity = r2
            com.huawei.hms.common.internal.RequestHeader r0 = new com.huawei.hms.common.internal.RequestHeader
            r0.<init>()
            r1.foregroundHeader = r0
            java.lang.String r2 = r2.getPackageName()
            r0.setPkgName(r2)
            com.huawei.hms.common.internal.RequestHeader r2 = r1.foregroundHeader
            r0 = 50300301(0x2ff858d, float:3.7545537E-37)
            r2.setSdkVersion(r0)
            java.lang.String r2 = ""
            r1.foregroundBody = r2
            com.huawei.hms.activity.internal.ForegroundInnerHeader r2 = new com.huawei.hms.activity.internal.ForegroundInnerHeader
            r2.<init>()
            r1.innerHeader = r2
            r0 = 30000000(0x1c9c380, float:7.411627E-38)
            r2.setApkVersion(r0)
            return
        L2f:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "listener must not be null."
            r2.<init>(r0)
            throw r2
    }

    public static void registerResponseCallback(java.lang.String r1, com.huawei.hms.activity.internal.BusResponseCallback r2) {
            com.huawei.hms.activity.internal.ForegroundBusResponseMgr r0 = com.huawei.hms.activity.internal.ForegroundBusResponseMgr.getInstance()
            r0.registerObserver(r1, r2)
            return
    }

    public static void unregisterResponseCallback(java.lang.String r1) {
            com.huawei.hms.activity.internal.ForegroundBusResponseMgr r0 = com.huawei.hms.activity.internal.ForegroundBusResponseMgr.getInstance()
            r0.unRegisterObserver(r1)
            return
    }

    public android.content.Intent build() {
            r5 = this;
            android.app.Activity r0 = r5.activity
            java.lang.Class<com.huawei.hms.activity.ForegroundBusDelegate> r1 = com.huawei.hms.activity.ForegroundBusDelegate.class
            java.lang.String r1 = r1.getName()
            android.content.Intent r0 = com.huawei.hms.activity.BridgeActivity.getIntentStartBridgeActivity(r0, r1)
            com.huawei.hms.common.internal.RequestHeader r1 = r5.foregroundHeader
            java.lang.String r1 = r1.getAppID()
            java.lang.String r2 = "|"
            if (r1 != 0) goto L31
            com.huawei.hms.common.internal.RequestHeader r1 = r5.foregroundHeader
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            android.app.Activity r4 = r5.activity
            java.lang.String r4 = com.huawei.hms.utils.Util.getAppId(r4)
            r3.append(r4)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            r1.setAppID(r2)
            goto L54
        L31:
            com.huawei.hms.common.internal.RequestHeader r1 = r5.foregroundHeader
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            android.app.Activity r4 = r5.activity
            java.lang.String r4 = com.huawei.hms.utils.Util.getAppId(r4)
            r3.append(r4)
            r3.append(r2)
            com.huawei.hms.common.internal.RequestHeader r2 = r5.foregroundHeader
            java.lang.String r2 = r2.getAppID()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            r1.setAppID(r2)
        L54:
            com.huawei.hms.common.internal.RequestHeader r1 = r5.foregroundHeader
            java.lang.String r1 = r1.getTransactionId()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L6f
            com.huawei.hms.common.internal.RequestHeader r1 = r5.foregroundHeader
            java.lang.String r2 = r1.getAppID()
            java.lang.String r3 = "hub.request"
            java.lang.String r2 = com.huawei.hms.common.internal.TransactionIdCreater.getId(r2, r3)
            r1.setTransactionId(r2)
        L6f:
            com.huawei.hms.common.internal.RequestHeader r1 = r5.foregroundHeader
            java.lang.String r1 = r1.toJson()
            java.lang.String r2 = "HMS_FOREGROUND_REQ_HEADER"
            r0.putExtra(r2, r1)
            java.lang.String r1 = r5.foregroundBody
            java.lang.String r2 = "HMS_FOREGROUND_REQ_BODY"
            r0.putExtra(r2, r1)
            com.huawei.hms.activity.internal.ForegroundInnerHeader r1 = r5.innerHeader
            java.lang.String r1 = r1.toJson()
            java.lang.String r2 = "HMS_FOREGROUND_REQ_INNER"
            r0.putExtra(r2, r1)
            return r0
    }

    public com.huawei.hms.activity.ForegroundIntentBuilder setAction(java.lang.String r2) {
            r1 = this;
            com.huawei.hms.common.internal.RequestHeader r0 = r1.foregroundHeader
            r0.setApiName(r2)
            return r1
    }

    public com.huawei.hms.activity.ForegroundIntentBuilder setApiLevel(int r2) {
            r1 = this;
            com.huawei.hms.common.internal.RequestHeader r0 = r1.foregroundHeader
            r0.setApiLevel(r2)
            return r1
    }

    public com.huawei.hms.activity.ForegroundIntentBuilder setKitSdkVersion(int r2) {
            r1 = this;
            com.huawei.hms.common.internal.RequestHeader r0 = r1.foregroundHeader
            r0.setKitSdkVersion(r2)
            return r1
    }

    public com.huawei.hms.activity.ForegroundIntentBuilder setMinApkVersion(int r2) {
            r1 = this;
            com.huawei.hms.activity.internal.ForegroundInnerHeader r0 = r1.innerHeader
            r0.setApkVersion(r2)
            return r1
    }

    public com.huawei.hms.activity.ForegroundIntentBuilder setRequestBody(java.lang.String r1) {
            r0 = this;
            r0.foregroundBody = r1
            return r0
    }

    public com.huawei.hms.activity.ForegroundIntentBuilder setResponseCallback(java.lang.String r2) {
            r1 = this;
            com.huawei.hms.activity.internal.ForegroundInnerHeader r0 = r1.innerHeader
            r0.setResponseCallbackKey(r2)
            return r1
    }

    public com.huawei.hms.activity.ForegroundIntentBuilder setResponseCallback(java.lang.String r2, com.huawei.hms.activity.internal.BusResponseCallback r3) {
            r1 = this;
            com.huawei.hms.activity.internal.ForegroundInnerHeader r0 = r1.innerHeader
            r0.setResponseCallbackKey(r2)
            com.huawei.hms.activity.internal.ForegroundBusResponseMgr r0 = com.huawei.hms.activity.internal.ForegroundBusResponseMgr.getInstance()
            r0.registerObserver(r2, r3)
            return r1
    }

    public com.huawei.hms.activity.ForegroundIntentBuilder setServiceName(java.lang.String r2) {
            r1 = this;
            com.huawei.hms.common.internal.RequestHeader r0 = r1.foregroundHeader
            r0.setSrvName(r2)
            return r1
    }

    public com.huawei.hms.activity.ForegroundIntentBuilder setSubAppId(java.lang.String r2) {
            r1 = this;
            com.huawei.hms.common.internal.RequestHeader r0 = r1.foregroundHeader
            r0.setAppID(r2)
            return r1
    }

    public com.huawei.hms.activity.ForegroundIntentBuilder setTransactionId(java.lang.String r2) {
            r1 = this;
            com.huawei.hms.common.internal.RequestHeader r0 = r1.foregroundHeader
            r0.setTransactionId(r2)
            return r1
    }
}
