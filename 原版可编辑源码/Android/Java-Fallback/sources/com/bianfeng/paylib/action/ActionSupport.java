package com.bianfeng.paylib.action;

public abstract class ActionSupport<T> extends java.util.Observable implements com.bianfeng.paylib.action.HttpListener {
    protected com.bianfeng.paylib.action.ActionAttachment attachment;
    protected android.content.Context context;
    protected java.util.TreeMap<java.lang.String, java.lang.String> gContent;
    protected com.bianfeng.paylib.action.HttpHelper httpHelper;
    protected java.lang.String pContent;


    public class ResponseResult<T> {
        private int code;
        private org.json.JSONObject data;
        private java.lang.String msg;
        private T processedResult;
        private java.lang.String srcRes;
        final com.bianfeng.paylib.action.ActionSupport this$0;

        public ResponseResult(com.bianfeng.paylib.action.ActionSupport r1, int r2, java.lang.String r3) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r1 = 999(0x3e7, float:1.4E-42)
                r0.code = r1
                r0.code = r2
                r0.msg = r3
                return
        }

        public ResponseResult(com.bianfeng.paylib.action.ActionSupport r1, java.lang.String r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r1 = 999(0x3e7, float:1.4E-42)
                r0.code = r1
                r0.srcRes = r2
                return
        }

        static java.lang.Object access$102(com.bianfeng.paylib.action.ActionSupport.ResponseResult r0, java.lang.Object r1) {
                r0.processedResult = r1
                return r1
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
                r3 = this;
                com.bianfeng.thridlibrary.GsonUtils r0 = com.bianfeng.thridlibrary.GsonUtils.getInstance()
                com.bianfeng.thridlibrary.GsonUtils r1 = com.bianfeng.thridlibrary.GsonUtils.getInstance()
                T r2 = r3.processedResult
                java.lang.String r1 = r1.toJson(r2)
                java.util.Map r0 = r0.getFromMap(r1)
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

    public ActionSupport(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r1.context = r2
            com.bianfeng.paylib.action.HttpHelper r0 = new com.bianfeng.paylib.action.HttpHelper
            r0.<init>(r2)
            r1.httpHelper = r0
            r2 = 2
            r0.setMethod(r2)
            java.util.TreeMap r2 = new java.util.TreeMap
            r2.<init>()
            r1.gContent = r2
            return
    }

    static void access$000(com.bianfeng.paylib.action.ActionSupport r0, com.bianfeng.paylib.action.ActionSupport.ResponseResult r1) {
            r0.notifyResponseResult(r1)
            return
    }

    private void notifyResponseResult(com.bianfeng.paylib.action.ActionSupport.ResponseResult r3) {
            r2 = this;
            r2.setChanged()
            boolean r0 = r3.isResponsed()
            if (r0 == 0) goto L1b
            boolean r0 = r3.isOk()     // Catch: java.lang.Exception -> L17
            if (r0 == 0) goto L1b
            java.lang.Object r0 = r2.onSuccess(r3)     // Catch: java.lang.Exception -> L17
            com.bianfeng.paylib.action.ActionSupport.ResponseResult.access$102(r3, r0)     // Catch: java.lang.Exception -> L17
            goto L1b
        L17:
            r0 = move-exception
            r0.printStackTrace()
        L1b:
            com.bianfeng.paylib.action.ActionAttachment r0 = r2.attachment
            if (r0 == 0) goto L24
            android.content.Context r1 = r2.context
            r0.onEnd(r1)
        L24:
            r2.notifyObservers(r3)
            return
    }

    private void parseResponseResult(com.bianfeng.paylib.action.ActionSupport.ResponseResult r6) {
            r5 = this;
            r5.showDebugLog(r6)     // Catch: java.lang.Exception -> L6a
            java.lang.String r0 = r6.getSrcRes()     // Catch: java.lang.Exception -> L6a
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L6a
            r1 = 0
            if (r0 == 0) goto L30
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()     // Catch: java.lang.Exception -> L6a
            java.lang.String r2 = "do action response error code = %d msg = %s"
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L6a
            int r4 = r6.getCode()     // Catch: java.lang.Exception -> L6a
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> L6a
            r3[r1] = r4     // Catch: java.lang.Exception -> L6a
            r1 = 1
            java.lang.String r4 = r6.getMsg()     // Catch: java.lang.Exception -> L6a
            r3[r1] = r4     // Catch: java.lang.Exception -> L6a
            java.lang.String r1 = java.lang.String.format(r2, r3)     // Catch: java.lang.Exception -> L6a
            r0.e(r1)     // Catch: java.lang.Exception -> L6a
            goto L78
        L30:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L6a
            java.lang.String r2 = r6.getSrcRes()     // Catch: java.lang.Exception -> L6a
            r0.<init>(r2)     // Catch: java.lang.Exception -> L6a
            java.lang.String r2 = "trade_request_type"
            java.lang.String r2 = r0.optString(r2)     // Catch: java.lang.Exception -> L6a
            java.lang.String r3 = "ERROR"
            boolean r2 = r3.equalsIgnoreCase(r2)     // Catch: java.lang.Exception -> L6a
            if (r2 == 0) goto L63
            r1 = 603(0x25b, float:8.45E-43)
            r6.setCode(r1)     // Catch: java.lang.Exception -> L6a
            com.bianfeng.utilslib.Logger r1 = com.bianfeng.utilslib.UtilsSdk.getLogger()     // Catch: java.lang.Exception -> L6a
            java.lang.String r2 = "ymnsdk"
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Exception -> L6a
            r1.e(r2, r3)     // Catch: java.lang.Exception -> L6a
            java.lang.String r1 = "trade_request_content"
            java.lang.String r0 = r0.getString(r1)     // Catch: java.lang.Exception -> L6a
            r6.setMsg(r0)     // Catch: java.lang.Exception -> L6a
            goto L78
        L63:
            r6.setCode(r1)     // Catch: java.lang.Exception -> L6a
            r6.setData(r0)     // Catch: java.lang.Exception -> L6a
            goto L78
        L6a:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 602(0x25a, float:8.44E-43)
            r6.setCode(r0)
            java.lang.String r0 = "parse response json error"
            r6.setMsg(r0)
        L78:
            return
    }

    private void showDebugLog(com.bianfeng.paylib.action.ActionSupport.ResponseResult r5) {
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
            java.lang.String r3 = r4.getURL()
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
            com.bianfeng.utilslib.Logger r5 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.String r0 = r0.toString()
            r5.dRich(r0)
            return
    }

    public void actionStart() {
            r1 = this;
            java.lang.String r0 = r1.getURL()     // Catch: java.lang.Exception -> L8
            r1.doRequest(r0)     // Catch: java.lang.Exception -> L8
            goto Lc
        L8:
            r0 = move-exception
            r0.printStackTrace()
        Lc:
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
            com.bianfeng.paylib.action.ActionAttachment r0 = r5.attachment
            if (r0 == 0) goto L6c
            android.content.Context r1 = r5.context
            r0.onStart(r1)
        L6c:
            com.bianfeng.paylib.action.HttpHelper r0 = r5.httpHelper
            java.lang.String r1 = r5.pContent
            r0.request(r6, r1, r5)
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
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.String r2 = "v2"
            r0[r1] = r2
            r1 = 1
            r0[r1] = r4
            java.lang.String r4 = "%s/%s"
            java.lang.String r4 = java.lang.String.format(r4, r0)
            return r4
    }

    protected abstract java.lang.String getURL();

    @Override
    public void onComplete(java.lang.String r2) {
            r1 = this;
            com.bianfeng.paylib.action.ActionSupport$ResponseResult r0 = new com.bianfeng.paylib.action.ActionSupport$ResponseResult
            r0.<init>(r1, r2)
            r1.processResponseResult(r0)
            return
    }

    @Override
    public void onError(int r2, java.lang.String r3) {
            r1 = this;
            com.bianfeng.paylib.action.ActionSupport$ResponseResult r0 = new com.bianfeng.paylib.action.ActionSupport$ResponseResult
            r0.<init>(r1, r2, r3)
            r1.processResponseResult(r0)
            return
    }

    public abstract org.json.JSONObject onPrepareData(java.util.Map<java.lang.String, java.lang.String> r1) throws java.lang.Exception;

    protected abstract T onSuccess(com.bianfeng.paylib.action.ActionSupport.ResponseResult r1) throws java.lang.Exception;

    public void processResponseResult(com.bianfeng.paylib.action.ActionSupport.ResponseResult r3) {
            r2 = this;
            r2.parseResponseResult(r3)
            android.content.Context r0 = r2.context
            boolean r1 = r0 instanceof android.app.Activity
            if (r1 == 0) goto L14
            android.app.Activity r0 = (android.app.Activity) r0
            com.bianfeng.paylib.action.ActionSupport$1 r1 = new com.bianfeng.paylib.action.ActionSupport$1
            r1.<init>(r2, r3)
            r0.runOnUiThread(r1)
            goto L17
        L14:
            r2.notifyResponseResult(r3)
        L17:
            return
    }

    public void putReqData(java.util.Map<java.lang.String, java.lang.String> r3) {
            r2 = this;
            org.json.JSONObject r3 = r2.onPrepareData(r3)     // Catch: java.lang.Exception -> L27
            if (r3 == 0) goto L2b
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L27
            r2.pContent = r3     // Catch: java.lang.Exception -> L27
            com.bianfeng.utilslib.Logger r3 = com.bianfeng.utilslib.UtilsSdk.getLogger()     // Catch: java.lang.Exception -> L27
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L27
            r0.<init>()     // Catch: java.lang.Exception -> L27
            java.lang.String r1 = "putReqData："
            r0.append(r1)     // Catch: java.lang.Exception -> L27
            java.lang.String r1 = r2.pContent     // Catch: java.lang.Exception -> L27
            r0.append(r1)     // Catch: java.lang.Exception -> L27
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L27
            r3.i(r0)     // Catch: java.lang.Exception -> L27
            goto L2b
        L27:
            r3 = move-exception
            r3.printStackTrace()
        L2b:
            return
    }

    public void setAttachment(com.bianfeng.paylib.action.ActionAttachment r1) {
            r0 = this;
            r0.attachment = r1
            return
    }
}
