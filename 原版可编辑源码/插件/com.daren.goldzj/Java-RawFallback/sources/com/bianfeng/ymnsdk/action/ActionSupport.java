package com.bianfeng.ymnsdk.action;

public abstract class ActionSupport<T> extends java.util.Observable implements com.bianfeng.ymnsdk.action.HttpListener {
    protected static final java.lang.String TAG = "Ymn_ActionSupport";
    protected com.bianfeng.ymnsdk.action.ActionAttachment attachment;
    protected android.content.Context context;
    protected java.util.TreeMap<java.lang.String, java.lang.String> gContent;
    protected com.bianfeng.ymnsdk.action.HttpHelper httpHelper;
    private java.lang.String mUrl;
    protected java.lang.String pContent;
    private java.lang.String transactionId;


    public class ResponseResult<T> {
        public int code;
        public org.json.JSONObject data;
        public java.lang.Object ext;
        public java.lang.String msg;
        public T processedResult;
        public org.json.JSONObject srcObj;
        public java.lang.String srcRes;
        final com.bianfeng.ymnsdk.action.ActionSupport this$0;

        public ResponseResult(com.bianfeng.ymnsdk.action.ActionSupport r1, int r2, java.lang.String r3) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r1 = 999(0x3e7, float:1.4E-42)
                r0.code = r1
                r0.code = r2
                r0.msg = r3
                return
        }

        public ResponseResult(com.bianfeng.ymnsdk.action.ActionSupport r1, java.lang.String r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r1 = 999(0x3e7, float:1.4E-42)
                r0.code = r1
                r0.srcRes = r2
                return
        }

        public java.lang.String dataAsString() {
                r1 = this;
                org.json.JSONObject r0 = r1.data
                java.lang.String r0 = r0.toString()
                return r0
        }

        public java.lang.String getExtData(java.lang.String r3) {
                r2 = this;
                java.lang.Object r0 = r2.ext
                if (r0 == 0) goto Lf
                boolean r1 = r0 instanceof org.json.JSONObject
                if (r1 == 0) goto Lf
                org.json.JSONObject r0 = (org.json.JSONObject) r0
                java.lang.String r3 = r0.optString(r3)
                return r3
            Lf:
                java.lang.String r3 = "unknow"
                return r3
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
                T r0 = r1.processedResult     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L7
                java.util.Map r0 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.getMapFrom(r0)     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L7
                return r0
            L7:
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                return r0
        }
    }

    public ActionSupport(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r1.context = r2
            com.bianfeng.ymnsdk.action.HttpHelper r0 = new com.bianfeng.ymnsdk.action.HttpHelper
            r0.<init>(r2)
            r1.httpHelper = r0
            com.bianfeng.ymnsdk.action.HttpHelper r2 = r1.httpHelper
            r0 = 2
            r2.setMethod(r0)
            java.util.TreeMap r2 = new java.util.TreeMap
            r2.<init>()
            r1.gContent = r2
            return
    }

    static void access$000(com.bianfeng.ymnsdk.action.ActionSupport r0, com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r1) {
            r0.notifyResponseResult(r1)
            return
    }

    private void notifyResponseResult(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r4) {
            r3 = this;
            r3.setChanged()
            boolean r0 = r4.isResponsed()
            if (r0 == 0) goto L38
            boolean r0 = r4.isOk()     // Catch: java.lang.Exception -> L16
            if (r0 == 0) goto L2f
            java.lang.Object r0 = r3.onSuccess(r4)     // Catch: java.lang.Exception -> L16
            r4.processedResult = r0     // Catch: java.lang.Exception -> L16
            goto L2f
        L16:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "notifyResponseResult result.isOk()"
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
        L2f:
            android.content.Context r0 = r3.context
            com.bianfeng.ymnsdk.feature.e.i(r0)
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.notifyRequestSuccess()
            goto L40
        L38:
            android.content.Context r0 = r3.context
            com.bianfeng.ymnsdk.feature.e.h(r0)
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.notifyRequestFailure()
        L40:
            r3.notifyObservers(r4)
            return
    }

    private void parseResponseResult(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r6) {
            r5 = this;
            r5.showDebugLog(r6)     // Catch: java.lang.Exception -> L52
            java.lang.String r0 = r6.srcRes     // Catch: java.lang.Exception -> L52
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L52
            if (r0 == 0) goto L28
            java.lang.String r0 = "Ymn_ActionSupport"
            java.lang.String r1 = "do action response error code = %d msg = %s"
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L52
            r3 = 0
            int r4 = r6.code     // Catch: java.lang.Exception -> L52
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> L52
            r2[r3] = r4     // Catch: java.lang.Exception -> L52
            r3 = 1
            java.lang.String r4 = r6.msg     // Catch: java.lang.Exception -> L52
            r2[r3] = r4     // Catch: java.lang.Exception -> L52
            java.lang.String r1 = java.lang.String.format(r1, r2)     // Catch: java.lang.Exception -> L52
            com.bianfeng.ymnsdk.util.Logger.e(r0, r1)     // Catch: java.lang.Exception -> L52
            goto L5e
        L28:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L52
            java.lang.String r1 = r6.srcRes     // Catch: java.lang.Exception -> L52
            r0.<init>(r1)     // Catch: java.lang.Exception -> L52
            r6.srcObj = r0     // Catch: java.lang.Exception -> L52
            java.lang.String r1 = "code"
            int r1 = r0.optInt(r1)     // Catch: java.lang.Exception -> L52
            r6.code = r1     // Catch: java.lang.Exception -> L52
            java.lang.String r1 = "msg"
            java.lang.String r1 = r0.optString(r1)     // Catch: java.lang.Exception -> L52
            r6.msg = r1     // Catch: java.lang.Exception -> L52
            java.lang.String r1 = "data"
            org.json.JSONObject r1 = r0.optJSONObject(r1)     // Catch: java.lang.Exception -> L52
            r6.data = r1     // Catch: java.lang.Exception -> L52
            java.lang.String r1 = "ext"
            java.lang.Object r0 = r0.opt(r1)     // Catch: java.lang.Exception -> L52
            r6.ext = r0     // Catch: java.lang.Exception -> L52
            goto L5e
        L52:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 602(0x25a, float:8.44E-43)
            r6.code = r0
            java.lang.String r0 = "parse response json error"
            r6.msg = r0
        L5e:
            return
    }

    private void processResponseResult(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r3) {
            r2 = this;
            r2.parseResponseResult(r3)
            android.content.Context r0 = r2.context
            boolean r1 = r0 instanceof android.app.Activity
            if (r1 == 0) goto L14
            android.app.Activity r0 = (android.app.Activity) r0
            com.bianfeng.ymnsdk.action.ActionSupport$1 r1 = new com.bianfeng.ymnsdk.action.ActionSupport$1
            r1.<init>(r2, r3)
            r0.runOnUiThread(r1)
            goto L17
        L14:
            r2.notifyResponseResult(r3)
        L17:
            return
    }

    private void setTransactionIdToBase(org.json.JSONObject r3) throws org.json.JSONException {
            r2 = this;
            java.lang.String r0 = r2.transactionId
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r1 = "transactionId"
            if (r0 == 0) goto L16
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            java.lang.String r0 = r0.getInitTrace()
            r3.put(r1, r0)
            goto L1b
        L16:
            java.lang.String r0 = r2.transactionId
            r3.put(r1, r0)
        L1b:
            return
    }

    private void showDebugLog(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r5) {
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
            java.lang.String r3 = r4.mUrl
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
            java.lang.String r5 = r5.srcRes
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.dRich(r5)
            return
    }

    public void actionStart() {
            r1 = this;
            java.lang.String r0 = r1.getURL()     // Catch: java.lang.Exception -> Lc
            r1.mUrl = r0     // Catch: java.lang.Exception -> Lc
            java.lang.String r0 = r1.mUrl     // Catch: java.lang.Exception -> Lc
            r1.doRequest(r0)     // Catch: java.lang.Exception -> Lc
            goto L10
        Lc:
            r0 = move-exception
            r0.printStackTrace()
        L10:
            return
    }

    public void doRequest(java.lang.String r6) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.TreeMap<java.lang.String, java.lang.String> r1 = r5.gContent
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
            r1.append(r6)
            java.lang.String r6 = "?"
            r1.append(r6)
            r6 = 1
            java.lang.String r6 = r0.substring(r6)
            r1.append(r6)
            java.lang.String r6 = r1.toString()
        L63:
            com.bianfeng.ymnsdk.action.HttpHelper r0 = r5.httpHelper
            boolean r0 = r0.isGetMethod()
            if (r0 == 0) goto L77
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r5.gContent
            if (r0 == 0) goto L8a
            com.bianfeng.ymnsdk.action.HttpHelper r0 = r5.httpHelper
            java.lang.String r1 = ""
            r0.createHttpRequest(r6, r1, r5)
            goto L8a
        L77:
            java.lang.String r0 = r5.pContent
            if (r0 == 0) goto L8a
            com.bianfeng.ymnsdk.action.HttpHelper r0 = r5.httpHelper
            com.bianfeng.ymnsdk.util.security.SecurityUtil r1 = com.bianfeng.ymnsdk.util.security.SecurityUtil.getInstance()
            java.lang.String r2 = r5.pContent
            java.lang.String r1 = r1.urlEncode(r2)
            r0.createHttpRequest(r6, r1, r5)
        L8a:
            return
    }

    protected java.lang.Object formatType(java.lang.Object r3) {
            r2 = this;
            boolean r0 = r3 instanceof java.lang.String
            if (r0 == 0) goto Le
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> Le
            java.lang.String r1 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> Le
            r0.<init>(r1)     // Catch: java.lang.Exception -> Le
            return r0
        Le:
            return r3
    }

    protected java.lang.String formatUrl(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = "ymn"
            java.lang.String r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.getHost(r0)
            r1 = 3
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r0
            r0 = 1
            java.lang.String r2 = "v1"
            r1[r0] = r2
            r0 = 2
            r1[r0] = r4
            java.lang.String r4 = "%s/%s/%s"
            java.lang.String r4 = java.lang.String.format(r4, r1)
            return r4
    }

    protected abstract java.lang.String getURL();

    @Override
    public void onComplete(java.lang.String r2) {
            r1 = this;
            com.bianfeng.ymnsdk.action.ActionSupport$ResponseResult r0 = new com.bianfeng.ymnsdk.action.ActionSupport$ResponseResult
            r0.<init>(r1, r2)
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
            com.bianfeng.ymnsdk.action.ActionSupport$ResponseResult r0 = new com.bianfeng.ymnsdk.action.ActionSupport$ResponseResult
            r0.<init>(r1, r2, r3)
            r1.processResponseResult(r0)
            return
    }

    public abstract org.json.JSONObject onPrepareData(com.bianfeng.ymnsdk.feature.protocol.IPlugin r1, java.lang.Object... r2) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException;

    public void onStartAttachment() {
            r2 = this;
            com.bianfeng.ymnsdk.action.ActionAttachment r0 = r2.attachment
            if (r0 == 0) goto L9
            android.content.Context r1 = r2.context
            r0.onStart(r1)
        L9:
            return
    }

    protected abstract T onSuccess(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r1) throws java.lang.Exception;

    protected void putBasicData(org.json.JSONObject r5) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r4 = this;
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()     // Catch: java.lang.Exception -> Lda
            java.lang.String r1 = "appid"
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r2 = r0.getAppContext()     // Catch: java.lang.Exception -> Lda
            int r2 = r2.getAppId()     // Catch: java.lang.Exception -> Lda
            r5.put(r1, r2)     // Catch: java.lang.Exception -> Lda
            java.lang.String r1 = "channel"
            java.lang.String r2 = r0.getChannelId()     // Catch: java.lang.Exception -> Lda
            r5.put(r1, r2)     // Catch: java.lang.Exception -> Lda
            java.lang.String r1 = "package_id"
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r2 = r0.getAppContext()     // Catch: java.lang.Exception -> Lda
            int r2 = r2.getIdentify_id()     // Catch: java.lang.Exception -> Lda
            r5.put(r1, r2)     // Catch: java.lang.Exception -> Lda
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> Lda
            r1.<init>()     // Catch: java.lang.Exception -> Lda
            java.lang.String r2 = "df_ver"
            com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils r3 = r0.getPlatformUtils()     // Catch: java.lang.Exception -> Lda
            java.lang.String r3 = r3.getDatafun_ver()     // Catch: java.lang.Exception -> Lda
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Lda
            java.lang.String r2 = "app_key"
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r3 = r0.getAppContext()     // Catch: java.lang.Exception -> Lda
            int r3 = r3.getAppId()     // Catch: java.lang.Exception -> Lda
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Lda
            java.lang.String r2 = "group_id"
            java.lang.String r3 = r0.getGroupId()     // Catch: java.lang.Exception -> Lda
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Lda
            java.lang.String r2 = "device_id"
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r3 = r0.getDeviceInfo()     // Catch: java.lang.Exception -> Lda
            java.lang.String r3 = r3.getDeviceId()     // Catch: java.lang.Exception -> Lda
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Lda
            java.lang.String r2 = "version_code"
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r3 = r0.getAppContext()     // Catch: java.lang.Exception -> Lda
            java.lang.String r3 = r3.getVerCode()     // Catch: java.lang.Exception -> Lda
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Lda
            java.lang.String r2 = "version_name"
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r3 = r0.getAppContext()     // Catch: java.lang.Exception -> Lda
            java.lang.String r3 = r3.getVerName()     // Catch: java.lang.Exception -> Lda
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Lda
            java.lang.String r2 = "device_mobile"
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r3 = r0.getDeviceInfo()     // Catch: java.lang.Exception -> Lda
            java.lang.String r3 = r3.getDeviceModel()     // Catch: java.lang.Exception -> Lda
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Lda
            java.lang.String r2 = "device_network"
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r3 = r0.getDeviceInfo()     // Catch: java.lang.Exception -> Lda
            java.lang.String r3 = r3.getNetChannelStr()     // Catch: java.lang.Exception -> Lda
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Lda
            java.lang.String r2 = "device_os"
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r3 = r0.getDeviceInfo()     // Catch: java.lang.Exception -> Lda
            java.lang.String r3 = r3.getDeviceOS()     // Catch: java.lang.Exception -> Lda
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Lda
            java.lang.String r2 = "device_os_version"
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r3 = r0.getDeviceInfo()     // Catch: java.lang.Exception -> Lda
            java.lang.String r3 = r3.getOsVersion()     // Catch: java.lang.Exception -> Lda
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Lda
            java.lang.String r2 = "device_pixel"
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r3 = r0.getDeviceInfo()     // Catch: java.lang.Exception -> Lda
            java.lang.String r3 = r3.getDevicePixel()     // Catch: java.lang.Exception -> Lda
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Lda
            java.lang.String r2 = "device_type"
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r3 = r0.getAppContext()     // Catch: java.lang.Exception -> Lda
            java.lang.String r3 = r3.getDeviceType()     // Catch: java.lang.Exception -> Lda
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Lda
            java.lang.String r2 = "device_version_code"
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r0 = r0.getDeviceInfo()     // Catch: java.lang.Exception -> Lda
            java.lang.String r0 = r0.getDeviceVersionCode()     // Catch: java.lang.Exception -> Lda
            r1.put(r2, r0)     // Catch: java.lang.Exception -> Lda
            r4.setTransactionIdToBase(r1)     // Catch: java.lang.Exception -> Lda
            java.lang.String r0 = "base"
            r5.put(r0, r1)     // Catch: java.lang.Exception -> Lda
            return
        Lda:
            r5 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r0 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            r0.<init>(r5)
            throw r0
    }

    public void putReqData(com.bianfeng.ymnsdk.feature.protocol.IPlugin r4, java.lang.Object... r5) {
            r3 = this;
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r3.gContent     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L2c
            java.lang.String r1 = "os"
            java.lang.String r2 = "android"
            r0.put(r1, r2)     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L2c
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r3.gContent     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L2c
            java.lang.String r1 = "mid"
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r2 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L2c
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r2 = r2.getDeviceInfo()     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L2c
            java.lang.String r2 = r2.getDeviceId()     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L2c
            r0.put(r1, r2)     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L2c
            org.json.JSONObject r4 = r3.onPrepareData(r4, r5)     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L2c
            if (r4 == 0) goto L48
            r3.putBasicData(r4)     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L2c
            java.lang.String r4 = r4.toString()     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L2c
            r3.pContent = r4     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L2c
            goto L48
        L2c:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "putReqData"
            r5.append(r0)
            java.lang.String r0 = r4.getLocalizedMessage()
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r5)
            r4.printStackTrace()
        L48:
            return
    }

    public void setAttachment(com.bianfeng.ymnsdk.action.ActionAttachment r1) {
            r0 = this;
            r0.attachment = r1
            return
    }

    public void setTransactionId(java.lang.String r1) {
            r0 = this;
            r0.transactionId = r1
            return
    }
}
