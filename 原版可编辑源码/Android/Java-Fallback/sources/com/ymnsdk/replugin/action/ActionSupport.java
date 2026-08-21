package com.ymnsdk.replugin.action;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public abstract class ActionSupport<T> extends java.util.Observable implements com.ymnsdk.replugin.action.HttpListener {
    protected static final java.lang.String TAG = "Replugin_ActionSupport";
    protected com.ymnsdk.replugin.action.ActionAttachment attachment;
    protected android.content.Context context;
    protected java.util.Map<java.lang.String, java.lang.String> gContent;
    protected com.ymnsdk.replugin.action.HttpHelper httpHelper;
    private java.lang.String mUrl;
    protected java.lang.String pContent;
    private java.lang.String transactionId;


    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    public class ResponseResult<T> {
        public int code;
        public org.json.JSONObject data;
        public java.lang.Object ext;
        public java.lang.String msg;
        public T processedResult;
        public org.json.JSONObject srcObj;
        public java.lang.String srcRes;
        final com.ymnsdk.replugin.action.ActionSupport this$0;

        public ResponseResult(com.ymnsdk.replugin.action.ActionSupport r1, int r2, java.lang.String r3) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r1 = 999(0x3e7, float:1.4E-42)
                r0.code = r1
                r0.code = r2
                r0.msg = r3
                return
        }

        public ResponseResult(com.ymnsdk.replugin.action.ActionSupport r1, java.lang.String r2) {
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

        public boolean isAllow() {
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

        public boolean isNotAllow() {
                r2 = this;
                int r0 = r2.code
                r1 = 1
                if (r0 != r1) goto L6
                goto L7
            L6:
                r1 = 0
            L7:
                return r1
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
                com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()     // Catch: java.lang.Exception -> L13
                com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r1 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()     // Catch: java.lang.Exception -> L13
                T r2 = r3.processedResult     // Catch: java.lang.Exception -> L13
                java.lang.String r1 = r1.toJson(r2)     // Catch: java.lang.Exception -> L13
                java.util.Map r0 = r0.getMapFrom(r1)     // Catch: java.lang.Exception -> L13
                return r0
            L13:
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                return r0
        }
    }

    public ActionSupport(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r1.context = r2
            com.ymnsdk.replugin.action.HttpHelper r0 = new com.ymnsdk.replugin.action.HttpHelper
            r0.<init>(r2)
            r1.httpHelper = r0
            r2 = 2
            r0.setMethod(r2)
            java.util.TreeMap r2 = new java.util.TreeMap
            r2.<init>()
            r1.gContent = r2
            return
    }

    static void access$000(com.ymnsdk.replugin.action.ActionSupport r0, com.ymnsdk.replugin.action.ActionSupport.ResponseResult r1) {
            r0.notifyResponseResult(r1)
            return
    }

    private void notifyResponseResult(com.ymnsdk.replugin.action.ActionSupport.ResponseResult r2) {
            r1 = this;
            r1.setChanged()
            boolean r0 = r2.isResponsed()
            if (r0 == 0) goto L15
            boolean r0 = r2.isOk()     // Catch: java.lang.Exception -> L15
            if (r0 == 0) goto L15
            java.lang.Object r0 = r1.onSuccess(r2)     // Catch: java.lang.Exception -> L15
            r2.processedResult = r0     // Catch: java.lang.Exception -> L15
        L15:
            r1.notifyObservers(r2)
            return
    }

    private void parseResponseResult(com.ymnsdk.replugin.action.ActionSupport.ResponseResult r4) {
            r3 = this;
            java.lang.String r0 = "code"
            java.lang.String r1 = r4.srcRes     // Catch: java.lang.Exception -> L37
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L37
            if (r1 == 0) goto Lb
            goto L43
        Lb:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L37
            java.lang.String r2 = r4.srcRes     // Catch: java.lang.Exception -> L37
            r1.<init>(r2)     // Catch: java.lang.Exception -> L37
            r4.srcObj = r1     // Catch: java.lang.Exception -> L37
            boolean r2 = r1.has(r0)     // Catch: java.lang.Exception -> L37
            if (r2 == 0) goto L31
            int r0 = r1.optInt(r0)     // Catch: java.lang.Exception -> L37
            r4.code = r0     // Catch: java.lang.Exception -> L37
            java.lang.String r0 = "message"
            java.lang.String r0 = r1.optString(r0)     // Catch: java.lang.Exception -> L37
            r4.msg = r0     // Catch: java.lang.Exception -> L37
            java.lang.String r0 = "data"
            org.json.JSONObject r0 = r1.optJSONObject(r0)     // Catch: java.lang.Exception -> L37
            r4.data = r0     // Catch: java.lang.Exception -> L37
            goto L43
        L31:
            r0 = 0
            r4.code = r0     // Catch: java.lang.Exception -> L37
            r4.data = r1     // Catch: java.lang.Exception -> L37
            goto L43
        L37:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 602(0x25a, float:8.44E-43)
            r4.code = r0
            java.lang.String r0 = "parse response json error"
            r4.msg = r0
        L43:
            return
    }

    private void processResponseResult(com.ymnsdk.replugin.action.ActionSupport.ResponseResult r3) {
            r2 = this;
            r2.parseResponseResult(r3)
            android.content.Context r0 = r2.context
            boolean r1 = r0 instanceof android.app.Activity
            if (r1 == 0) goto L14
            android.app.Activity r0 = (android.app.Activity) r0
            com.ymnsdk.replugin.action.ActionSupport$1 r1 = new com.ymnsdk.replugin.action.ActionSupport$1
            r1.<init>(r2, r3)
            r0.runOnUiThread(r1)
            goto L17
        L14:
            r2.notifyResponseResult(r3)
        L17:
            return
    }

    public void actionStart() {
            r1 = this;
            java.lang.String r0 = r1.getURL()     // Catch: java.lang.Exception -> La
            r1.mUrl = r0     // Catch: java.lang.Exception -> La
            r1.doRequest(r0)     // Catch: java.lang.Exception -> La
            goto Le
        La:
            r0 = move-exception
            r0.printStackTrace()
        Le:
            return
    }

    public void doRequest(java.lang.String r6) throws java.lang.Exception {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Map<java.lang.String, java.lang.String> r1 = r5.gContent
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
            com.ymnsdk.replugin.action.HttpHelper r0 = r5.httpHelper
            boolean r0 = r0.isGetMethod()
            if (r0 == 0) goto L77
            java.util.Map<java.lang.String, java.lang.String> r0 = r5.gContent
            if (r0 == 0) goto L80
            com.ymnsdk.replugin.action.HttpHelper r0 = r5.httpHelper
            java.lang.String r1 = ""
            r0.createHttpRequest(r6, r1, r5)
            goto L80
        L77:
            java.lang.String r0 = r5.pContent
            if (r0 == 0) goto L80
            com.ymnsdk.replugin.action.HttpHelper r1 = r5.httpHelper
            r1.createHttpRequest(r6, r0, r5)
        L80:
            return
    }

    public java.lang.String encode(java.lang.String r3) throws java.lang.Exception {
            r2 = this;
            java.lang.String r0 = "UTF-8"
            java.lang.String r3 = java.net.URLEncoder.encode(r3, r0)     // Catch: java.io.UnsupportedEncodingException -> L7
            return r3
        L7:
            r3 = move-exception
            java.lang.Exception r0 = new java.lang.Exception
            java.lang.String r1 = "Replugin_ActionSupport"
            r0.<init>(r1, r3)
            throw r0
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
            java.lang.String r0 = com.ymnsdk.replugin.action.URLManager.getHost()
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
            com.ymnsdk.replugin.action.ActionSupport$ResponseResult r0 = new com.ymnsdk.replugin.action.ActionSupport$ResponseResult
            r0.<init>(r1, r2)
            r1.processResponseResult(r0)
            return
    }

    public void onEndAttachment() {
            r2 = this;
            com.ymnsdk.replugin.action.ActionAttachment r0 = r2.attachment
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
            com.ymnsdk.replugin.action.ActionSupport$ResponseResult r0 = new com.ymnsdk.replugin.action.ActionSupport$ResponseResult
            r0.<init>(r1, r2, r3)
            r1.processResponseResult(r0)
            return
    }

    public abstract org.json.JSONObject onPrepareData(java.lang.Object... r1) throws java.lang.Exception;

    public void onStartAttachment() {
            r2 = this;
            com.ymnsdk.replugin.action.ActionAttachment r0 = r2.attachment
            if (r0 == 0) goto L9
            android.content.Context r1 = r2.context
            r0.onStart(r1)
        L9:
            return
    }

    protected abstract T onSuccess(com.ymnsdk.replugin.action.ActionSupport.ResponseResult r1) throws java.lang.Exception;

    public void putGetData(java.lang.Object... r2) {
            r1 = this;
            org.json.JSONObject r2 = r1.onPrepareData(r2)     // Catch: java.lang.Exception -> L15
            if (r2 == 0) goto L19
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()     // Catch: java.lang.Exception -> L15
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L15
            java.util.Map r2 = r0.getMapFrom(r2)     // Catch: java.lang.Exception -> L15
            r1.gContent = r2     // Catch: java.lang.Exception -> L15
            goto L19
        L15:
            r2 = move-exception
            r2.printStackTrace()
        L19:
            return
    }

    public void putReqData(java.lang.Object... r1) {
            r0 = this;
            org.json.JSONObject r1 = r0.onPrepareData(r1)     // Catch: java.lang.Exception -> Ld
            if (r1 == 0) goto L11
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> Ld
            r0.pContent = r1     // Catch: java.lang.Exception -> Ld
            goto L11
        Ld:
            r1 = move-exception
            r1.printStackTrace()
        L11:
            return
    }

    public void setAttachment(com.ymnsdk.replugin.action.ActionAttachment r1) {
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
