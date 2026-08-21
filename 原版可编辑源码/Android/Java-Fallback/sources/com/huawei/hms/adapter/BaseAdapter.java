package com.huawei.hms.adapter;

public class BaseAdapter {
    private static final java.lang.String TAG = "BaseAdapter";
    private java.lang.ref.WeakReference<android.app.Activity> activityWeakReference;
    private java.lang.ref.WeakReference<com.huawei.hms.support.api.client.ApiClient> api;
    private android.content.Context appContext;
    private com.huawei.hms.adapter.BaseAdapter.BaseCallBack baseCallBackReplay;
    private com.huawei.hms.adapter.BaseAdapter.BaseCallBack callback;
    private java.lang.String jsonHeaderReplay;
    private java.lang.String jsonObjectReplay;
    private com.huawei.hms.adapter.sysobs.SystemObserver observer;
    private android.os.Parcelable parcelableReplay;
    private com.huawei.hms.common.internal.RequestHeader requestHeader;
    private com.huawei.hms.common.internal.ResponseHeader responseHeader;
    private java.lang.String transactionId;


    public interface BaseCallBack {
        void onComplete(java.lang.String r1, java.lang.String r2, android.os.Parcelable r3);

        void onError(java.lang.String r1);
    }

    public class BaseRequestResultCallback implements com.huawei.hms.support.api.client.ResultCallback<com.huawei.hms.support.api.ResolveResult<com.huawei.hms.adapter.CoreBaseResponse>> {
        private java.util.concurrent.atomic.AtomicBoolean isFirstRsp;
        final com.huawei.hms.adapter.BaseAdapter this$0;

        public BaseRequestResultCallback(com.huawei.hms.adapter.BaseAdapter r2) {
                r1 = this;
                r1.this$0 = r2
                r1.<init>()
                java.util.concurrent.atomic.AtomicBoolean r2 = new java.util.concurrent.atomic.AtomicBoolean
                r0 = 1
                r2.<init>(r0)
                r1.isFirstRsp = r2
                return
        }

        private void handleSolutionIntent(com.huawei.hms.adapter.BaseAdapter.BaseCallBack r3, com.huawei.hms.adapter.CoreBaseResponse r4) {
                r2 = this;
                java.lang.String r0 = "BaseAdapter"
                java.lang.String r1 = "baseCallBack.onComplete"
                com.huawei.hms.support.log.HMSLog.i(r0, r1)
                android.app.PendingIntent r0 = r4.getPendingIntent()
                if (r0 == 0) goto L19
                java.lang.String r1 = r4.getJsonHeader()
                java.lang.String r4 = r4.getJsonBody()
                r3.onComplete(r1, r4, r0)
                return
            L19:
                android.content.Intent r0 = r4.getIntent()
                if (r0 == 0) goto L2b
                java.lang.String r1 = r4.getJsonHeader()
                java.lang.String r4 = r4.getJsonBody()
                r3.onComplete(r1, r4, r0)
                return
            L2b:
                java.lang.String r0 = r4.getJsonHeader()
                java.lang.String r4 = r4.getJsonBody()
                r1 = 0
                r3.onComplete(r0, r4, r1)
                return
        }

        public void onResult(com.huawei.hms.support.api.ResolveResult<com.huawei.hms.adapter.CoreBaseResponse> r6) {
                r5 = this;
                com.huawei.hms.adapter.BaseAdapter r0 = r5.this$0
                com.huawei.hms.adapter.BaseAdapter$BaseCallBack r0 = com.huawei.hms.adapter.BaseAdapter.access$000(r0)
                java.lang.String r1 = "BaseAdapter"
                if (r0 != 0) goto L10
                java.lang.String r6 = "onResult baseCallBack null"
                com.huawei.hms.support.log.HMSLog.e(r1, r6)
                return
            L10:
                r2 = -1
                if (r6 != 0) goto L22
                java.lang.String r6 = "result null"
                com.huawei.hms.support.log.HMSLog.e(r1, r6)
                com.huawei.hms.adapter.BaseAdapter r6 = r5.this$0
                java.lang.String r6 = com.huawei.hms.adapter.BaseAdapter.access$100(r6, r2)
                r0.onError(r6)
                return
            L22:
                java.lang.Object r6 = r6.getValue()
                com.huawei.hms.adapter.CoreBaseResponse r6 = (com.huawei.hms.adapter.CoreBaseResponse) r6
                if (r6 != 0) goto L39
                java.lang.String r6 = "response null"
                com.huawei.hms.support.log.HMSLog.e(r1, r6)
                com.huawei.hms.adapter.BaseAdapter r6 = r5.this$0
                java.lang.String r6 = com.huawei.hms.adapter.BaseAdapter.access$100(r6, r2)
                r0.onError(r6)
                return
            L39:
                java.lang.String r3 = r6.getJsonHeader()
                boolean r3 = android.text.TextUtils.isEmpty(r3)
                if (r3 == 0) goto L52
                java.lang.String r6 = "jsonHeader null"
                com.huawei.hms.support.log.HMSLog.e(r1, r6)
                com.huawei.hms.adapter.BaseAdapter r6 = r5.this$0
                java.lang.String r6 = com.huawei.hms.adapter.BaseAdapter.access$100(r6, r2)
                r0.onError(r6)
                return
            L52:
                java.lang.String r2 = r6.getJsonHeader()
                com.huawei.hms.adapter.BaseAdapter r3 = r5.this$0
                com.huawei.hms.common.internal.ResponseHeader r3 = com.huawei.hms.adapter.BaseAdapter.access$200(r3)
                com.huawei.hms.utils.JsonUtil.jsonToEntity(r2, r3)
                java.util.concurrent.atomic.AtomicBoolean r2 = r5.isFirstRsp
                r3 = 1
                r4 = 0
                boolean r2 = r2.compareAndSet(r3, r4)
                if (r2 == 0) goto L78
                com.huawei.hms.adapter.BaseAdapter r2 = r5.this$0
                android.content.Context r3 = com.huawei.hms.adapter.BaseAdapter.access$300(r2)
                com.huawei.hms.adapter.BaseAdapter r4 = r5.this$0
                com.huawei.hms.common.internal.ResponseHeader r4 = com.huawei.hms.adapter.BaseAdapter.access$200(r4)
                com.huawei.hms.adapter.BaseAdapter.access$400(r2, r3, r4)
            L78:
                com.huawei.hms.adapter.BaseAdapter r2 = r5.this$0
                com.huawei.hms.common.internal.ResponseHeader r2 = com.huawei.hms.adapter.BaseAdapter.access$200(r2)
                java.lang.String r2 = r2.getResolution()
                java.lang.String r3 = "intent"
                boolean r2 = r3.equals(r2)
                if (r2 == 0) goto L10c
                com.huawei.hms.adapter.BaseAdapter r2 = r5.this$0
                android.app.Activity r2 = com.huawei.hms.adapter.BaseAdapter.access$500(r2)
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r4 = "activity is "
                r3.append(r4)
                r3.append(r2)
                java.lang.String r3 = r3.toString()
                com.huawei.hms.support.log.HMSLog.i(r1, r3)
                if (r2 == 0) goto L103
                boolean r3 = r2.isFinishing()
                if (r3 == 0) goto Lad
                goto L103
            Lad:
                android.app.PendingIntent r3 = r6.getPendingIntent()
                r4 = -9
                if (r3 == 0) goto Ld1
                com.huawei.hms.adapter.BaseAdapter r6 = r5.this$0
                android.content.Context r6 = com.huawei.hms.adapter.BaseAdapter.access$300(r6)
                boolean r6 = com.huawei.hms.utils.Util.isAvailableLibExist(r6)
                if (r6 == 0) goto Lc7
                com.huawei.hms.adapter.BaseAdapter r6 = r5.this$0
                com.huawei.hms.adapter.BaseAdapter.access$600(r6, r2, r3)
                goto Ld0
            Lc7:
                com.huawei.hms.adapter.BaseAdapter r6 = r5.this$0
                java.lang.String r6 = com.huawei.hms.adapter.BaseAdapter.access$100(r6, r4)
                r0.onError(r6)
            Ld0:
                return
            Ld1:
                android.content.Intent r6 = r6.getIntent()
                if (r6 == 0) goto Lf3
                com.huawei.hms.adapter.BaseAdapter r1 = r5.this$0
                android.content.Context r1 = com.huawei.hms.adapter.BaseAdapter.access$300(r1)
                boolean r1 = com.huawei.hms.utils.Util.isAvailableLibExist(r1)
                if (r1 == 0) goto Le9
                com.huawei.hms.adapter.BaseAdapter r0 = r5.this$0
                com.huawei.hms.adapter.BaseAdapter.access$600(r0, r2, r6)
                goto Lf2
            Le9:
                com.huawei.hms.adapter.BaseAdapter r6 = r5.this$0
                java.lang.String r6 = com.huawei.hms.adapter.BaseAdapter.access$100(r6, r4)
                r0.onError(r6)
            Lf2:
                return
            Lf3:
                java.lang.String r6 = "hasResolution is true but NO_SOLUTION"
                com.huawei.hms.support.log.HMSLog.e(r1, r6)
                com.huawei.hms.adapter.BaseAdapter r6 = r5.this$0
                r1 = -4
                java.lang.String r6 = com.huawei.hms.adapter.BaseAdapter.access$100(r6, r1)
                r0.onError(r6)
                goto L10f
            L103:
                java.lang.String r2 = "activity null"
                com.huawei.hms.support.log.HMSLog.e(r1, r2)
                r5.handleSolutionIntent(r0, r6)
                return
            L10c:
                r5.handleSolutionIntent(r0, r6)
            L10f:
                return
        }

        @Override
        public void onResult(com.huawei.hms.support.api.ResolveResult<com.huawei.hms.adapter.CoreBaseResponse> r1) {
                r0 = this;
                com.huawei.hms.support.api.ResolveResult r1 = (com.huawei.hms.support.api.ResolveResult) r1
                r0.onResult(r1)
                return
        }
    }

    private static class MPendingResultImpl extends com.huawei.hms.support.api.PendingResultImpl<com.huawei.hms.support.api.ResolveResult<com.huawei.hms.adapter.CoreBaseResponse>, com.huawei.hms.adapter.CoreBaseResponse> {
        public MPendingResultImpl(com.huawei.hms.support.api.client.ApiClient r1, java.lang.String r2, com.huawei.hms.core.aidl.IMessageEntity r3) {
                r0 = this;
                r0.<init>(r1, r2, r3)
                return
        }

        public com.huawei.hms.support.api.ResolveResult<com.huawei.hms.adapter.CoreBaseResponse> onComplete(com.huawei.hms.adapter.CoreBaseResponse r2) {
                r1 = this;
                com.huawei.hms.support.api.ResolveResult r0 = new com.huawei.hms.support.api.ResolveResult
                r0.<init>(r2)
                com.huawei.hms.support.api.client.Status r2 = com.huawei.hms.support.api.client.Status.SUCCESS
                r0.setStatus(r2)
                return r0
        }

        @Override
        public com.huawei.hms.support.api.client.Result onComplete(com.huawei.hms.core.aidl.IMessageEntity r1) {
                r0 = this;
                com.huawei.hms.adapter.CoreBaseResponse r1 = (com.huawei.hms.adapter.CoreBaseResponse) r1
                com.huawei.hms.support.api.ResolveResult r1 = r0.onComplete(r1)
                return r1
        }
    }

    public BaseAdapter(com.huawei.hms.support.api.client.ApiClient r2) {
            r1 = this;
            r1.<init>()
            com.huawei.hms.common.internal.RequestHeader r0 = new com.huawei.hms.common.internal.RequestHeader
            r0.<init>()
            r1.requestHeader = r0
            com.huawei.hms.common.internal.ResponseHeader r0 = new com.huawei.hms.common.internal.ResponseHeader
            r0.<init>()
            r1.responseHeader = r0
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.api = r0
            return
    }

    public BaseAdapter(com.huawei.hms.support.api.client.ApiClient r2, android.app.Activity r3) {
            r1 = this;
            r1.<init>()
            com.huawei.hms.common.internal.RequestHeader r0 = new com.huawei.hms.common.internal.RequestHeader
            r0.<init>()
            r1.requestHeader = r0
            com.huawei.hms.common.internal.ResponseHeader r0 = new com.huawei.hms.common.internal.ResponseHeader
            r0.<init>()
            r1.responseHeader = r0
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.api = r0
            java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference
            r2.<init>(r3)
            r1.activityWeakReference = r2
            android.content.Context r2 = r3.getApplicationContext()
            r1.appContext = r2
            return
    }

    static com.huawei.hms.adapter.BaseAdapter.BaseCallBack access$000(com.huawei.hms.adapter.BaseAdapter r0) {
            com.huawei.hms.adapter.BaseAdapter$BaseCallBack r0 = r0.getCallBack()
            return r0
    }

    static java.lang.String access$100(com.huawei.hms.adapter.BaseAdapter r0, int r1) {
            java.lang.String r0 = r0.getResponseHeaderForError(r1)
            return r0
    }

    static java.lang.String access$1000(com.huawei.hms.adapter.BaseAdapter r0, int r1) {
            java.lang.String r0 = r0.buildBodyStr(r1)
            return r0
    }

    static com.huawei.hms.common.internal.ResponseWrap access$1100(com.huawei.hms.adapter.BaseAdapter r0, int r1, java.lang.String r2) {
            com.huawei.hms.common.internal.ResponseWrap r0 = r0.buildResponseWrap(r1, r2)
            return r0
    }

    static com.huawei.hms.common.internal.ResponseHeader access$200(com.huawei.hms.adapter.BaseAdapter r0) {
            com.huawei.hms.common.internal.ResponseHeader r0 = r0.responseHeader
            return r0
    }

    static android.content.Context access$300(com.huawei.hms.adapter.BaseAdapter r0) {
            android.content.Context r0 = r0.appContext
            return r0
    }

    static void access$400(com.huawei.hms.adapter.BaseAdapter r0, android.content.Context r1, com.huawei.hms.common.internal.ResponseHeader r2) {
            r0.biReportRequestReturnIpc(r1, r2)
            return
    }

    static android.app.Activity access$500(com.huawei.hms.adapter.BaseAdapter r0) {
            android.app.Activity r0 = r0.getCpActivity()
            return r0
    }

    static void access$600(com.huawei.hms.adapter.BaseAdapter r0, android.app.Activity r1, android.os.Parcelable r2) {
            r0.startResolution(r1, r2)
            return
    }

    static java.lang.String access$700(com.huawei.hms.adapter.BaseAdapter r0) {
            java.lang.String r0 = r0.transactionId
            return r0
    }

    static void access$800(com.huawei.hms.adapter.BaseAdapter r0, android.content.Context r1, com.huawei.hms.common.internal.ResponseHeader r2, long r3) {
            r0.biReportRequestReturnSolution(r1, r2, r3)
            return
    }

    static void access$900(com.huawei.hms.adapter.BaseAdapter r0) {
            r0.replayRequest()
            return
    }

    private com.huawei.hms.support.api.client.PendingResult<com.huawei.hms.support.api.ResolveResult<com.huawei.hms.adapter.CoreBaseResponse>> baseRequest(com.huawei.hms.support.api.client.ApiClient r2, java.lang.String r3, com.huawei.hms.adapter.CoreBaseRequest r4) {
            r1 = this;
            com.huawei.hms.adapter.BaseAdapter$MPendingResultImpl r0 = new com.huawei.hms.adapter.BaseAdapter$MPendingResultImpl
            r0.<init>(r2, r3, r4)
            return r0
    }

    private void biReportRequestEntryIpc(android.content.Context r4, com.huawei.hms.common.internal.RequestHeader r5) {
            r3 = this;
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil r0 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.getInstance()
            java.util.Map r0 = r0.getMapFromRequestHeader(r5)
            java.lang.String r1 = "direction"
            java.lang.String r2 = "req"
            r0.put(r1, r2)
            int r5 = r5.getKitSdkVersion()
            java.lang.String r5 = java.lang.String.valueOf(r5)
            java.lang.String r5 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.versionCodeToName(r5)
            java.lang.String r1 = "version"
            r0.put(r1, r5)
            java.lang.String r5 = "ro.logsystem.usertype"
            java.lang.String r1 = ""
            java.lang.String r5 = com.huawei.hms.utils.Util.getSystemProperties(r5, r1)
            java.lang.String r1 = "phoneType"
            r0.put(r1, r5)
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil r5 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.getInstance()
            java.lang.String r1 = "HMS_SDK_BASE_CALL_AIDL"
            r5.onNewEvent(r4, r1, r0)
            return
    }

    private void biReportRequestEntrySolution(android.content.Context r4, com.huawei.hms.common.internal.RequestHeader r5) {
            r3 = this;
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil r0 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.getInstance()
            java.util.Map r0 = r0.getMapFromRequestHeader(r5)
            java.lang.String r1 = "direction"
            java.lang.String r2 = "req"
            r0.put(r1, r2)
            int r5 = r5.getKitSdkVersion()
            java.lang.String r5 = java.lang.String.valueOf(r5)
            java.lang.String r5 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.versionCodeToName(r5)
            java.lang.String r1 = "version"
            r0.put(r1, r5)
            java.lang.String r5 = "ro.logsystem.usertype"
            java.lang.String r1 = ""
            java.lang.String r5 = com.huawei.hms.utils.Util.getSystemProperties(r5, r1)
            java.lang.String r1 = "phoneType"
            r0.put(r1, r5)
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil r5 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.getInstance()
            java.lang.String r1 = "HMS_SDK_BASE_START_RESOLUTION"
            r5.onNewEvent(r4, r1, r0)
            return
    }

    private void biReportRequestReturnIpc(android.content.Context r3, com.huawei.hms.common.internal.ResponseHeader r4) {
            r2 = this;
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil.getInstance()
            java.util.Map r4 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.getMapFromRequestHeader(r4)
            java.lang.String r0 = "direction"
            java.lang.String r1 = "rsp"
            r4.put(r0, r1)
            com.huawei.hms.common.internal.RequestHeader r0 = r2.requestHeader
            int r0 = r0.getKitSdkVersion()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r0 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.versionCodeToName(r0)
            java.lang.String r1 = "version"
            r4.put(r1, r0)
            java.lang.String r0 = "ro.logsystem.usertype"
            java.lang.String r1 = ""
            java.lang.String r0 = com.huawei.hms.utils.Util.getSystemProperties(r0, r1)
            java.lang.String r1 = "phoneType"
            r4.put(r1, r0)
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil r0 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.getInstance()
            java.lang.String r1 = "HMS_SDK_BASE_CALL_AIDL"
            r0.onNewEvent(r3, r1, r4)
            return
    }

    private void biReportRequestReturnSolution(android.content.Context r3, com.huawei.hms.common.internal.ResponseHeader r4, long r5) {
            r2 = this;
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil.getInstance()
            java.util.Map r4 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.getMapFromRequestHeader(r4)
            java.lang.String r0 = "direction"
            java.lang.String r1 = "rsp"
            r4.put(r0, r1)
            java.lang.String r5 = java.lang.String.valueOf(r5)
            java.lang.String r6 = "waitTime"
            r4.put(r6, r5)
            com.huawei.hms.common.internal.RequestHeader r5 = r2.requestHeader
            int r5 = r5.getKitSdkVersion()
            java.lang.String r5 = java.lang.String.valueOf(r5)
            java.lang.String r5 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.versionCodeToName(r5)
            java.lang.String r6 = "version"
            r4.put(r6, r5)
            java.lang.String r5 = "ro.logsystem.usertype"
            java.lang.String r6 = ""
            java.lang.String r5 = com.huawei.hms.utils.Util.getSystemProperties(r5, r6)
            java.lang.String r6 = "phoneType"
            r4.put(r6, r5)
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil r5 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.getInstance()
            java.lang.String r6 = "HMS_SDK_BASE_START_RESOLUTION"
            r5.onNewEvent(r3, r6, r4)
            return
    }

    private java.lang.String buildBodyStr(int r4) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "errorCode"
            r0.put(r1, r4)     // Catch: org.json.JSONException -> Lb
            goto L26
        Lb:
            r4 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "buildBodyStr failed: "
            r1.append(r2)
            java.lang.String r4 = r4.getMessage()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            java.lang.String r1 = "BaseAdapter"
            com.huawei.hms.support.log.HMSLog.e(r1, r4)
        L26:
            java.lang.String r4 = r0.toString()
            return r4
    }

    private com.huawei.hms.common.internal.ResponseWrap buildResponseWrap(int r2, java.lang.String r3) {
            r1 = this;
            r1.setResponseHeader(r2)
            com.huawei.hms.common.internal.ResponseWrap r2 = new com.huawei.hms.common.internal.ResponseWrap
            com.huawei.hms.common.internal.ResponseHeader r0 = r1.responseHeader
            r2.<init>(r0)
            r2.setBody(r3)
            return r2
    }

    private com.huawei.hms.adapter.BaseAdapter.BaseCallBack getBaseCallBackReplay() {
            r1 = this;
            com.huawei.hms.adapter.BaseAdapter$BaseCallBack r0 = r1.baseCallBackReplay
            return r0
    }

    private com.huawei.hms.adapter.BaseAdapter.BaseCallBack getCallBack() {
            r2 = this;
            com.huawei.hms.adapter.BaseAdapter$BaseCallBack r0 = r2.callback
            if (r0 != 0) goto Lc
            java.lang.String r0 = "BaseAdapter"
            java.lang.String r1 = "callback null"
            com.huawei.hms.support.log.HMSLog.e(r0, r1)
            r0 = 0
        Lc:
            return r0
    }

    private android.app.Activity getCpActivity() {
            r5 = this;
            java.lang.ref.WeakReference<android.app.Activity> r0 = r5.activityWeakReference
            r1 = 0
            java.lang.String r2 = "BaseAdapter"
            if (r0 != 0) goto L1e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "activityWeakReference is "
            r0.append(r3)
            java.lang.ref.WeakReference<android.app.Activity> r3 = r5.activityWeakReference
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.huawei.hms.support.log.HMSLog.i(r2, r0)
            return r1
        L1e:
            java.lang.ref.WeakReference<com.huawei.hms.support.api.client.ApiClient> r0 = r5.api
            java.lang.Object r0 = r0.get()
            com.huawei.hms.support.api.client.ApiClient r0 = (com.huawei.hms.support.api.client.ApiClient) r0
            if (r0 != 0) goto L3d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "tmpApi is "
            r3.append(r4)
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            com.huawei.hms.support.log.HMSLog.i(r2, r0)
            return r1
        L3d:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "activityWeakReference has "
            r1.append(r3)
            java.lang.ref.WeakReference<android.app.Activity> r3 = r5.activityWeakReference
            java.lang.Object r3 = r3.get()
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            com.huawei.hms.support.log.HMSLog.i(r2, r1)
            java.lang.ref.WeakReference<android.app.Activity> r1 = r5.activityWeakReference
            java.lang.Object r1 = r1.get()
            android.app.Activity r1 = (android.app.Activity) r1
            android.content.Context r0 = r0.getContext()
            android.app.Activity r0 = com.huawei.hms.utils.Util.getActiveActivity(r1, r0)
            return r0
    }

    private java.lang.String getJsonHeaderReplay() {
            r1 = this;
            java.lang.String r0 = r1.jsonHeaderReplay
            return r0
    }

    private java.lang.String getJsonObjectReplay() {
            r1 = this;
            java.lang.String r0 = r1.jsonObjectReplay
            return r0
    }

    private android.os.Parcelable getParcelableReplay() {
            r1 = this;
            android.os.Parcelable r0 = r1.parcelableReplay
            return r0
    }

    private java.lang.String getResponseHeaderForError(int r1) {
            r0 = this;
            r0.setResponseHeader(r1)
            com.huawei.hms.common.internal.ResponseHeader r1 = r0.responseHeader
            java.lang.String r1 = r1.toJson()
            return r1
    }

    private void initObserver() {
            r1 = this;
            com.huawei.hms.adapter.BaseAdapter$1 r0 = new com.huawei.hms.adapter.BaseAdapter$1
            r0.<init>(r1)
            r1.observer = r0
            return
    }

    private void replayRequest() {
            r4 = this;
            java.lang.String r0 = r4.jsonHeaderReplay
            if (r0 == 0) goto L26
            com.huawei.hms.adapter.BaseAdapter$BaseCallBack r0 = r4.baseCallBackReplay
            if (r0 != 0) goto L9
            goto L26
        L9:
            r0 = 0
            r4.responseHeader = r0
            com.huawei.hms.common.internal.ResponseHeader r0 = new com.huawei.hms.common.internal.ResponseHeader
            r0.<init>()
            r4.responseHeader = r0
            java.lang.String r0 = r4.getJsonHeaderReplay()
            java.lang.String r1 = r4.getJsonObjectReplay()
            android.os.Parcelable r2 = r4.getParcelableReplay()
            com.huawei.hms.adapter.BaseAdapter$BaseCallBack r3 = r4.getBaseCallBackReplay()
            r4.baseRequest(r0, r1, r2, r3)
        L26:
            return
    }

    private void setBaseCallBackReplay(com.huawei.hms.adapter.BaseAdapter.BaseCallBack r1) {
            r0 = this;
            r0.baseCallBackReplay = r1
            return
    }

    private void setJsonHeaderReplay(java.lang.String r1) {
            r0 = this;
            r0.jsonHeaderReplay = r1
            return
    }

    private void setJsonObjectReplay(java.lang.String r1) {
            r0 = this;
            r0.jsonObjectReplay = r1
            return
    }

    private void setParcelableReplay(android.os.Parcelable r1) {
            r0 = this;
            r0.parcelableReplay = r1
            return
    }

    private void setReplayData(java.lang.String r1, java.lang.String r2, android.os.Parcelable r3, com.huawei.hms.adapter.BaseAdapter.BaseCallBack r4) {
            r0 = this;
            r0.setJsonHeaderReplay(r1)
            r0.setJsonObjectReplay(r2)
            r0.setParcelableReplay(r3)
            r0.setBaseCallBackReplay(r4)
            return
    }

    private void setResponseHeader(int r3) {
            r2 = this;
            com.huawei.hms.common.internal.ResponseHeader r0 = r2.responseHeader
            com.huawei.hms.common.internal.RequestHeader r1 = r2.requestHeader
            java.lang.String r1 = r1.getTransactionId()
            r0.setTransactionId(r1)
            com.huawei.hms.common.internal.ResponseHeader r0 = r2.responseHeader
            com.huawei.hms.common.internal.RequestHeader r1 = r2.requestHeader
            java.lang.String r1 = r1.getAppID()
            r0.setAppID(r1)
            com.huawei.hms.common.internal.ResponseHeader r0 = r2.responseHeader
            com.huawei.hms.common.internal.RequestHeader r1 = r2.requestHeader
            java.lang.String r1 = r1.getApiName()
            r0.setApiName(r1)
            com.huawei.hms.common.internal.ResponseHeader r0 = r2.responseHeader
            com.huawei.hms.common.internal.RequestHeader r1 = r2.requestHeader
            java.lang.String r1 = r1.getSrvName()
            r0.setSrvName(r1)
            com.huawei.hms.common.internal.ResponseHeader r0 = r2.responseHeader
            com.huawei.hms.common.internal.RequestHeader r1 = r2.requestHeader
            java.lang.String r1 = r1.getPkgName()
            r0.setPkgName(r1)
            com.huawei.hms.common.internal.ResponseHeader r0 = r2.responseHeader
            r1 = 1
            r0.setStatusCode(r1)
            com.huawei.hms.common.internal.ResponseHeader r0 = r2.responseHeader
            r0.setErrorCode(r3)
            com.huawei.hms.common.internal.ResponseHeader r3 = r2.responseHeader
            java.lang.String r0 = "Core error"
            r3.setErrorReason(r0)
            return
    }

    private void startResolution(android.app.Activity r4, android.os.Parcelable r5) {
            r3 = this;
            java.lang.String r0 = "BaseAdapter"
            java.lang.String r1 = "startResolution"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            com.huawei.hms.common.internal.RequestHeader r0 = r3.requestHeader
            if (r0 == 0) goto L10
            android.content.Context r1 = r3.appContext
            r3.biReportRequestEntrySolution(r1, r0)
        L10:
            com.huawei.hms.adapter.sysobs.SystemObserver r0 = r3.observer
            if (r0 != 0) goto L17
            r3.initObserver()
        L17:
            com.huawei.hms.adapter.sysobs.SystemNotifier r0 = com.huawei.hms.adapter.sysobs.SystemManager.getSystemNotifier()
            com.huawei.hms.adapter.sysobs.SystemObserver r1 = r3.observer
            r0.registerObserver(r1)
            java.lang.Class<com.huawei.hms.adapter.ui.BaseResolutionAdapter> r0 = com.huawei.hms.adapter.ui.BaseResolutionAdapter.class
            java.lang.String r0 = r0.getName()
            android.content.Intent r0 = com.huawei.hms.activity.BridgeActivity.getIntentStartBridgeActivity(r4, r0)
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            java.lang.String r2 = "resolution"
            r1.putParcelable(r2, r5)
            r0.putExtras(r1)
            java.lang.String r5 = r3.transactionId
            java.lang.String r1 = "transaction_id"
            r0.putExtra(r1, r5)
            r4.startActivity(r0)
            return
    }

    public void baseRequest(java.lang.String r3, java.lang.String r4, android.os.Parcelable r5, com.huawei.hms.adapter.BaseAdapter.BaseCallBack r6) {
            r2 = this;
            r2.setReplayData(r3, r4, r5, r6)
            java.lang.ref.WeakReference<com.huawei.hms.support.api.client.ApiClient> r0 = r2.api
            java.lang.String r1 = "BaseAdapter"
            if (r0 != 0) goto L17
            java.lang.String r3 = "client is null"
            com.huawei.hms.support.log.HMSLog.e(r1, r3)
            r3 = -2
            java.lang.String r3 = r2.getResponseHeaderForError(r3)
            r6.onError(r3)
            return
        L17:
            r2.callback = r6
            com.huawei.hms.common.internal.RequestHeader r0 = r2.requestHeader
            com.huawei.hms.utils.JsonUtil.jsonToEntity(r3, r0)
            com.huawei.hms.adapter.CoreBaseRequest r0 = new com.huawei.hms.adapter.CoreBaseRequest
            r0.<init>()
            r0.setJsonObject(r4)
            r0.setJsonHeader(r3)
            r0.setParcelable(r5)
            com.huawei.hms.common.internal.RequestHeader r3 = r2.requestHeader
            java.lang.String r3 = r3.getApiName()
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 == 0) goto L46
            java.lang.String r3 = "get uri null"
            com.huawei.hms.support.log.HMSLog.e(r1, r3)
            r3 = -5
            java.lang.String r3 = r2.getResponseHeaderForError(r3)
            r6.onError(r3)
            return
        L46:
            com.huawei.hms.common.internal.RequestHeader r4 = r2.requestHeader
            java.lang.String r4 = r4.getTransactionId()
            r2.transactionId = r4
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 == 0) goto L62
            java.lang.String r3 = "get transactionId null"
            com.huawei.hms.support.log.HMSLog.e(r1, r3)
            r3 = -6
            java.lang.String r3 = r2.getResponseHeaderForError(r3)
            r6.onError(r3)
            return
        L62:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "in baseRequest + uri is :"
            r4.append(r5)
            r4.append(r3)
            java.lang.String r5 = ", transactionId is : "
            r4.append(r5)
            java.lang.String r5 = r2.transactionId
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.huawei.hms.support.log.HMSLog.i(r1, r4)
            android.content.Context r4 = r2.appContext
            com.huawei.hms.common.internal.RequestHeader r5 = r2.requestHeader
            r2.biReportRequestEntryIpc(r4, r5)
            java.lang.ref.WeakReference<com.huawei.hms.support.api.client.ApiClient> r4 = r2.api
            java.lang.Object r4 = r4.get()
            com.huawei.hms.support.api.client.ApiClient r4 = (com.huawei.hms.support.api.client.ApiClient) r4
            com.huawei.hms.support.api.client.PendingResult r3 = r2.baseRequest(r4, r3, r0)
            com.huawei.hms.adapter.BaseAdapter$BaseRequestResultCallback r4 = new com.huawei.hms.adapter.BaseAdapter$BaseRequestResultCallback
            r4.<init>(r2)
            r3.setResultCallback(r4)
            return
    }
}
