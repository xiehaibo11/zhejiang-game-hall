package com.bianfeng.ymnsdk.actionv2;

public abstract class ActionSupportV3<T> extends java.util.Observable implements com.bianfeng.ymnsdk.action.HttpListener {
    protected static final java.lang.String TAG = "ActionSupport";
    protected com.bianfeng.ymnsdk.action.ActionAttachment attachment;
    protected android.content.Context context;
    protected java.util.TreeMap<java.lang.String, java.lang.String> gContent;
    protected com.bianfeng.ymnsdk.action.HttpHelper httpHelper;
    protected java.lang.String pContent;
    private java.lang.String url;


    public class ResponseResult<T> {
        public int code;
        public org.json.JSONObject data;
        public java.lang.Object ext;
        public java.lang.String msg;
        public T processedResult;
        public org.json.JSONObject srcObj;
        public java.lang.String srcRes;
        final com.bianfeng.ymnsdk.actionv2.ActionSupportV3 this$0;

        public ResponseResult(com.bianfeng.ymnsdk.actionv2.ActionSupportV3 r1, int r2, java.lang.String r3) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r1 = 999(0x3e7, float:1.4E-42)
                r0.code = r1
                r0.code = r2
                r0.msg = r3
                return
        }

        public ResponseResult(com.bianfeng.ymnsdk.actionv2.ActionSupportV3 r1, java.lang.String r2) {
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
                r3 = this;
                com.google.gson.Gson r0 = new com.google.gson.Gson
                r0.<init>()
                T r1 = r3.processedResult
                java.lang.String r1 = r0.toJson(r1)
                java.lang.Class<java.util.Map> r2 = java.util.Map.class
                java.lang.Object r0 = r0.fromJson(r1, r2)
                java.util.Map r0 = (java.util.Map) r0
                return r0
        }
    }

    public ActionSupportV3(android.content.Context r2) {
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

    static void access$000(com.bianfeng.ymnsdk.actionv2.ActionSupportV3 r0, com.bianfeng.ymnsdk.actionv2.ActionSupportV3.ResponseResult r1) {
            r0.notifyResponseResult(r1)
            return
    }

    private void notifyResponseResult(com.bianfeng.ymnsdk.actionv2.ActionSupportV3.ResponseResult r2) {
            r1 = this;
            r1.setChanged()
            boolean r0 = r2.isResponsed()
            if (r0 == 0) goto L23
            boolean r0 = r2.isOk()     // Catch: java.lang.Exception -> L16
            if (r0 == 0) goto L1a
            java.lang.Object r0 = r1.onSuccess(r2)     // Catch: java.lang.Exception -> L16
            r2.processedResult = r0     // Catch: java.lang.Exception -> L16
            goto L1a
        L16:
            r0 = move-exception
            r0.printStackTrace()
        L1a:
            android.content.Context r0 = r1.context
            com.bianfeng.ymnsdk.feature.e.i(r0)
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.notifyRequestSuccess()
            goto L2b
        L23:
            android.content.Context r0 = r1.context
            com.bianfeng.ymnsdk.feature.e.h(r0)
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.notifyRequestFailure()
        L2b:
            r1.notifyObservers(r2)
            return
    }

    private void parseResponseResult(com.bianfeng.ymnsdk.actionv2.ActionSupportV3.ResponseResult r6) {
            r5 = this;
            r5.showDebugLog(r6)     // Catch: java.lang.Exception -> L52
            java.lang.String r0 = r6.srcRes     // Catch: java.lang.Exception -> L52
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L52
            if (r0 == 0) goto L28
            java.lang.String r0 = "ActionSupport"
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
            int r1 = r0.getInt(r1)     // Catch: java.lang.Exception -> L52
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

    private void showDebugLog(com.bianfeng.ymnsdk.actionv2.ActionSupportV3.ResponseResult r5) {
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
            r1.url = r0     // Catch: java.lang.Exception -> Lc
            java.lang.String r0 = r1.url     // Catch: java.lang.Exception -> Lc
            r1.doRequest(r0)     // Catch: java.lang.Exception -> Lc
            goto L10
        Lc:
            r0 = move-exception
            r0.printStackTrace()
        L10:
            return
    }

    public void doRequest(java.lang.String r6) {
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
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "doRequest doRequest"
            r0.append(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.d(r0)
            java.lang.String r0 = r5.pContent
            if (r0 == 0) goto L80
            com.bianfeng.ymnsdk.action.HttpHelper r1 = r5.httpHelper
            r1.createHttpRequest(r6, r0, r5)
        L80:
            return
    }

    protected java.lang.String formatUrl(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = "login"
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
            com.bianfeng.ymnsdk.actionv2.ActionSupportV3$ResponseResult r0 = new com.bianfeng.ymnsdk.actionv2.ActionSupportV3$ResponseResult
            r0.<init>(r1, r2)
            r1.processResponseResult(r0)
            return
    }

    public void onEndAttachment() {
            r2 = this;
            com.bianfeng.ymnsdk.action.ActionAttachment r0 = r2.attachment
            if (r0 == 0) goto L9
            android.content.Context r1 = r2.context
            r0.onEnd(r1)
        L9:
            return
    }

    @Override
    public void onError(int r2, java.lang.String r3) {
            r1 = this;
            com.bianfeng.ymnsdk.actionv2.ActionSupportV3$ResponseResult r0 = new com.bianfeng.ymnsdk.actionv2.ActionSupportV3$ResponseResult
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

    protected abstract T onSuccess(com.bianfeng.ymnsdk.actionv2.ActionSupportV3.ResponseResult r1) throws java.lang.Exception;

    public void processResponseResult(com.bianfeng.ymnsdk.actionv2.ActionSupportV3.ResponseResult r3) {
            r2 = this;
            r2.parseResponseResult(r3)
            android.content.Context r0 = r2.context
            boolean r1 = r0 instanceof android.app.Activity
            if (r1 == 0) goto L14
            android.app.Activity r0 = (android.app.Activity) r0
            com.bianfeng.ymnsdk.actionv2.ActionSupportV3$1 r1 = new com.bianfeng.ymnsdk.actionv2.ActionSupportV3$1
            r1.<init>(r2, r3)
            r0.runOnUiThread(r1)
            goto L17
        L14:
            r2.notifyResponseResult(r3)
        L17:
            return
    }

    public void putReqData(com.bianfeng.ymnsdk.feature.protocol.IPlugin r2, java.lang.Object... r3) {
            r1 = this;
            r0 = 0
            r0 = r3[r0]
            java.lang.String r0 = r0.toString()
            r1.pContent = r0
            r1.onPrepareData(r2, r3)     // Catch: java.lang.Exception -> Ld
            goto L29
        Ld:
            r2 = move-exception
            r2.printStackTrace()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "putReqData"
            r3.append(r0)
            java.lang.String r2 = r2.getMessage()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r2)
        L29:
            return
    }

    public void setAttachment(com.bianfeng.ymnsdk.action.ActionAttachment r1) {
            r0 = this;
            r0.attachment = r1
            return
    }
}
