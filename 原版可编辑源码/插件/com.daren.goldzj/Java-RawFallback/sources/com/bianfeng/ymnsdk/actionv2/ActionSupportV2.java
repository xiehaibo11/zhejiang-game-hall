package com.bianfeng.ymnsdk.actionv2;

public abstract class ActionSupportV2<T> extends java.util.Observable implements com.bianfeng.ymnsdk.action.HttpListener {
    protected static final java.lang.String TAG = "ActionSupportV2";
    protected com.bianfeng.ymnsdk.action.ActionAttachment attachment;
    protected android.content.Context context;
    protected java.util.TreeMap<java.lang.String, java.lang.String> gContent;
    protected com.bianfeng.ymnsdk.actionv2.HttpHelperV2 httpHelper;
    protected java.lang.String pContent;
    private com.bianfeng.ymnsdk.entity.PayTokenEntity.PayloadEntity payloadEntity;
    private java.lang.String trace;
    private java.lang.String url;


    public static class ResponseResult<T> {
        private int code;
        private org.json.JSONObject data;
        private java.lang.String msg;
        private T processedResult;
        private java.lang.String srcRes;

        public ResponseResult(int r2, java.lang.String r3) {
                r1 = this;
                r1.<init>()
                r0 = 999(0x3e7, float:1.4E-42)
                r1.code = r0
                r1.code = r2
                r1.msg = r3
                return
        }

        public ResponseResult(java.lang.String r2) {
                r1 = this;
                r1.<init>()
                r0 = 999(0x3e7, float:1.4E-42)
                r1.code = r0
                r1.srcRes = r2
                return
        }

        static java.lang.Object access$102(com.bianfeng.ymnsdk.actionv2.ActionSupportV2.ResponseResult r0, java.lang.Object r1) {
                r0.processedResult = r1
                return r1
        }

        public java.lang.String dataAsString() {
                r1 = this;
                org.json.JSONObject r0 = r1.data
                java.lang.String r0 = r0.toString()
                return r0
        }

        public int getCode() {
                r1 = this;
                int r0 = r1.code
                return r0
        }

        public org.json.JSONObject getData() {
                r1 = this;
                org.json.JSONObject r0 = r1.data
                return r0
        }

        public java.lang.String getMsg() {
                r1 = this;
                java.lang.String r0 = r1.msg
                return r0
        }

        public T getProcessedResult() {
                r1 = this;
                T r0 = r1.processedResult
                return r0
        }

        public java.lang.String getSrcRes() {
                r1 = this;
                java.lang.String r0 = r1.srcRes
                return r0
        }

        public boolean isOk() {
                r1 = this;
                int r0 = r1.code
                if (r0 != 0) goto L6
                r0 = 1
                goto L7
            L6:
                r0 = 0
            L7:
                return r0
        }

        public boolean isResponsed() {
                r1 = this;
                java.lang.String r0 = r1.srcRes
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                r0 = r0 ^ 1
                return r0
        }

        public java.lang.String messageFail() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                int r1 = r2.code
                r0.append(r1)
                java.lang.String r1 = "|"
                r0.append(r1)
                java.lang.String r1 = r2.msg
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }

        public java.util.Map<java.lang.String, java.lang.String> processedResultAsMap() {
                r1 = this;
                T r0 = r1.processedResult     // Catch: java.lang.Exception -> Lb
                java.lang.String r0 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.toJson(r0)     // Catch: java.lang.Exception -> Lb
                java.util.Map r0 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.getMapFrom(r0)     // Catch: java.lang.Exception -> Lb
                return r0
            Lb:
                r0 = move-exception
                r0.printStackTrace()
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                return r0
        }

        public void setCode(int r1) {
                r0 = this;
                r0.code = r1
                return
        }

        public void setData(org.json.JSONObject r1) {
                r0 = this;
                r0.data = r1
                return
        }

        public void setMsg(java.lang.String r1) {
                r0 = this;
                r0.msg = r1
                return
        }

        public void setProcessedResult(T r1) {
                r0 = this;
                r0.processedResult = r1
                return
        }

        public void setSrcRes(java.lang.String r1) {
                r0 = this;
                r0.srcRes = r1
                return
        }
    }

    public ActionSupportV2(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r1.context = r2
            com.bianfeng.ymnsdk.actionv2.HttpHelperV2 r0 = new com.bianfeng.ymnsdk.actionv2.HttpHelperV2
            r0.<init>(r2)
            r1.httpHelper = r0
            com.bianfeng.ymnsdk.actionv2.HttpHelperV2 r2 = r1.httpHelper
            r0 = 2
            r2.setMethod(r0)
            java.util.TreeMap r2 = new java.util.TreeMap
            r2.<init>()
            r1.gContent = r2
            return
    }

    static void access$000(com.bianfeng.ymnsdk.actionv2.ActionSupportV2 r0, com.bianfeng.ymnsdk.actionv2.ActionSupportV2.ResponseResult r1) {
            r0.notifyResponseResult(r1)
            return
    }

    private void notifyResponseResult(com.bianfeng.ymnsdk.actionv2.ActionSupportV2.ResponseResult r2) {
            r1 = this;
            r1.setChanged()
            boolean r0 = r2.isResponsed()
            if (r0 == 0) goto L24
            boolean r0 = r2.isOk()     // Catch: java.lang.Exception -> L17
            if (r0 == 0) goto L1b
            java.lang.Object r0 = r1.onSuccess(r2)     // Catch: java.lang.Exception -> L17
            com.bianfeng.ymnsdk.actionv2.ActionSupportV2.ResponseResult.access$102(r2, r0)     // Catch: java.lang.Exception -> L17
            goto L1b
        L17:
            r0 = move-exception
            r0.printStackTrace()
        L1b:
            android.content.Context r0 = r1.context
            com.bianfeng.ymnsdk.feature.e.i(r0)
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.notifyRequestSuccess()
            goto L2c
        L24:
            android.content.Context r0 = r1.context
            com.bianfeng.ymnsdk.feature.e.h(r0)
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.notifyRequestFailure()
        L2c:
            r1.notifyObservers(r2)
            return
    }

    private void parseResponseResult(com.bianfeng.ymnsdk.actionv2.ActionSupportV2.ResponseResult r6) {
            r5 = this;
            r5.showDebugLog(r6)     // Catch: java.lang.Exception -> L65
            java.lang.String r0 = r6.getSrcRes()     // Catch: java.lang.Exception -> L65
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L65
            r2 = 0
            if (r1 == 0) goto L2e
            java.lang.String r0 = "ActionSupportV2"
            java.lang.String r1 = "do action response error code = %d msg = %s"
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L65
            int r4 = r6.getCode()     // Catch: java.lang.Exception -> L65
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> L65
            r3[r2] = r4     // Catch: java.lang.Exception -> L65
            r2 = 1
            java.lang.String r4 = r6.getMsg()     // Catch: java.lang.Exception -> L65
            r3[r2] = r4     // Catch: java.lang.Exception -> L65
            java.lang.String r1 = java.lang.String.format(r1, r3)     // Catch: java.lang.Exception -> L65
            com.bianfeng.ymnsdk.util.Logger.i(r0, r1)     // Catch: java.lang.Exception -> L65
            goto L73
        L2e:
            boolean r1 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.isJsonObject(r0)     // Catch: java.lang.Exception -> L65
            if (r1 == 0) goto L5b
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L65
            java.lang.String r1 = r6.getSrcRes()     // Catch: java.lang.Exception -> L65
            r0.<init>(r1)     // Catch: java.lang.Exception -> L65
            java.lang.String r1 = "trade_request_type"
            java.lang.String r1 = r0.optString(r1)     // Catch: java.lang.Exception -> L65
            java.lang.String r3 = "ERROR"
            boolean r1 = r3.equalsIgnoreCase(r1)     // Catch: java.lang.Exception -> L65
            if (r1 == 0) goto L54
            r1 = 603(0x25b, float:8.45E-43)
            r6.setCode(r1)     // Catch: java.lang.Exception -> L65
            r6.setData(r0)     // Catch: java.lang.Exception -> L65
            goto L73
        L54:
            r6.setCode(r2)     // Catch: java.lang.Exception -> L65
            r6.setData(r0)     // Catch: java.lang.Exception -> L65
            goto L73
        L5b:
            boolean r0 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.isJsonArrayObject(r0)     // Catch: java.lang.Exception -> L65
            if (r0 == 0) goto L73
            r6.setCode(r2)     // Catch: java.lang.Exception -> L65
            goto L73
        L65:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 602(0x25a, float:8.44E-43)
            r6.setCode(r0)
            java.lang.String r0 = "parse response json error"
            r6.setMsg(r0)
        L73:
            return
    }

    private void showDebugLog(com.bianfeng.ymnsdk.actionv2.ActionSupportV2.ResponseResult r5) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "[CONTEXT] "
            r1.append(r2)
            android.content.Context r2 = r4.context
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.String r1 = "\n"
            r0.append(r1)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "[REQUEST] "
            r2.append(r3)
            java.lang.String r3 = r4.url
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            r0.append(r1)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "[CONTENT] "
            r2.append(r3)
            java.lang.String r3 = r4.pContent
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "[RESPONSE] "
            r1.append(r2)
            java.lang.String r5 = r5.getSrcRes()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.dRich(r5)
            return
    }

    public void actionStart() {
            r1 = this;
            java.lang.String r0 = "ActionSupportV2 actionStart "
            com.bianfeng.ymnsdk.util.Logger.i(r0)     // Catch: java.lang.Exception -> L11
            java.lang.String r0 = r1.getURL()     // Catch: java.lang.Exception -> L11
            r1.url = r0     // Catch: java.lang.Exception -> L11
            java.lang.String r0 = r1.url     // Catch: java.lang.Exception -> L11
            r1.doRequest(r0)     // Catch: java.lang.Exception -> L11
            goto L15
        L11:
            r0 = move-exception
            r0.printStackTrace()
        L15:
            return
    }

    public void doRequest(java.lang.String r7) {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.TreeMap<java.lang.String, java.lang.String> r1 = r6.gContent
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        Lf:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L44
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "&"
            r3.append(r4)
            java.lang.Object r4 = r2.getKey()
            java.lang.String r4 = (java.lang.String) r4
            r3.append(r4)
            java.lang.String r4 = "="
            r3.append(r4)
            java.lang.Object r2 = r2.getValue()
            java.lang.String r2 = (java.lang.String) r2
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            r0.append(r2)
            goto Lf
        L44:
            int r1 = r0.length()
            if (r1 <= 0) goto L63
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r7)
            java.lang.String r7 = "?"
            r1.append(r7)
            r7 = 1
            java.lang.String r7 = r0.substring(r7)
            r1.append(r7)
            java.lang.String r7 = r1.toString()
        L63:
            r1 = r7
            com.bianfeng.ymnsdk.actionv2.HttpHelperV2 r0 = r6.httpHelper
            java.lang.String r2 = r6.pContent
            com.bianfeng.ymnsdk.entity.PayTokenEntity$PayloadEntity r3 = r6.payloadEntity
            java.lang.String r4 = r6.trace
            r5 = r6
            r0.request(r1, r2, r3, r4, r5)
            return
    }

    protected java.lang.String formatUrl(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = "trade"
            java.lang.String r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.getHost(r0)
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r0
            r0 = 1
            r1[r0] = r4
            java.lang.String r4 = "%s/%s"
            java.lang.String r4 = java.lang.String.format(r4, r1)
            return r4
    }

    protected abstract java.lang.String getURL();

    @Override
    public void onComplete(java.lang.String r2) {
            r1 = this;
            com.bianfeng.ymnsdk.actionv2.ActionSupportV2$ResponseResult r0 = new com.bianfeng.ymnsdk.actionv2.ActionSupportV2$ResponseResult
            r0.<init>(r2)
            r1.processResponseResult(r0)
            return
    }

    public void onEndAttachment() {
            r2 = this;
            com.bianfeng.ymnsdk.action.ActionAttachment r0 = r2.attachment
            if (r0 == 0) goto Lc
            android.content.Context r1 = r2.context
            r0.onEnd(r1)
            r0 = 0
            r2.attachment = r0
        Lc:
            return
    }

    @Override
    public void onError(int r2, java.lang.String r3) {
            r1 = this;
            com.bianfeng.ymnsdk.actionv2.ActionSupportV2$ResponseResult r0 = new com.bianfeng.ymnsdk.actionv2.ActionSupportV2$ResponseResult
            r0.<init>(r2, r3)
            r1.processResponseResult(r0)
            return
    }

    public abstract org.json.JSONObject onPrepareData(com.bianfeng.ymnsdk.feature.protocol.IPlugin r1, java.lang.Object... r2) throws java.lang.Exception;

    public void onStartAttachment() {
            r2 = this;
            com.bianfeng.ymnsdk.action.ActionAttachment r0 = r2.attachment
            if (r0 == 0) goto L9
            android.content.Context r1 = r2.context
            r0.onStart(r1)
        L9:
            return
    }

    protected abstract T onSuccess(com.bianfeng.ymnsdk.actionv2.ActionSupportV2.ResponseResult r1) throws java.lang.Exception;

    public void processResponseResult(com.bianfeng.ymnsdk.actionv2.ActionSupportV2.ResponseResult r3) {
            r2 = this;
            r2.parseResponseResult(r3)
            android.content.Context r0 = r2.context
            boolean r1 = r0 instanceof android.app.Activity
            if (r1 == 0) goto L14
            android.app.Activity r0 = (android.app.Activity) r0
            com.bianfeng.ymnsdk.actionv2.ActionSupportV2$1 r1 = new com.bianfeng.ymnsdk.actionv2.ActionSupportV2$1
            r1.<init>(r2, r3)
            r0.runOnUiThread(r1)
            goto L17
        L14:
            r2.notifyResponseResult(r3)
        L17:
            return
    }

    protected void putBasicData(org.json.JSONObject r5) throws org.json.JSONException {
            r4 = this;
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            java.lang.String r2 = "client_ip"
            java.lang.String r3 = ""
            r1.put(r2, r3)
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r2 = r0.getDeviceInfo()
            java.lang.String r2 = r2.getDeviceId()
            java.lang.String r3 = "device_id"
            r1.put(r3, r2)
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r2 = r0.getDeviceInfo()
            java.lang.String r2 = r2.getDeviceModel()
            java.lang.String r3 = "device_mobile"
            r1.put(r3, r2)
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r2 = r0.getDeviceInfo()
            java.lang.String r2 = r2.getNetChannelStr()
            java.lang.String r3 = "device_network"
            r1.put(r3, r2)
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r2 = r0.getDeviceInfo()
            java.lang.String r2 = r2.getDeviceOS()
            java.lang.String r3 = "device_os"
            r1.put(r3, r2)
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r2 = r0.getDeviceInfo()
            java.lang.String r2 = r2.getOsVersion()
            java.lang.String r3 = "device_os_version"
            r1.put(r3, r2)
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r2 = r0.getDeviceInfo()
            java.lang.String r2 = r2.getDevicePixel()
            java.lang.String r3 = "device_pixel"
            r1.put(r3, r2)
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r2 = r0.getAppContext()
            java.lang.String r2 = r2.getDeviceType()
            java.lang.String r3 = "device_type"
            r1.put(r3, r2)
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r0 = r0.getDeviceInfo()
            java.lang.String r0 = r0.getDeviceVersionCode()
            java.lang.String r2 = "device_version_code"
            r1.put(r2, r0)
            java.lang.String r0 = "client_info"
            r5.put(r0, r1)
            return
    }

    public void putReqData(com.bianfeng.ymnsdk.feature.protocol.IPlugin r1, java.lang.Object... r2) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r0 = this;
            org.json.JSONObject r1 = r0.onPrepareData(r1, r2)     // Catch: java.lang.Exception -> L10
            if (r1 == 0) goto Lf
            r0.putBasicData(r1)     // Catch: java.lang.Exception -> L10
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L10
            r0.pContent = r1     // Catch: java.lang.Exception -> L10
        Lf:
            return
        L10:
            r1 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r2 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            r2.<init>(r1)
            throw r2
    }

    public void setAttachment(com.bianfeng.ymnsdk.action.ActionAttachment r1) {
            r0 = this;
            r0.attachment = r1
            return
    }

    public void setPayloadEntity(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            com.bianfeng.ymnsdk.entity.PayTokenEntity$PayloadEntity r0 = new com.bianfeng.ymnsdk.entity.PayTokenEntity$PayloadEntity
            r0.<init>(r2, r3)
            r1.payloadEntity = r0
            r1.trace = r4
            return
    }
}
