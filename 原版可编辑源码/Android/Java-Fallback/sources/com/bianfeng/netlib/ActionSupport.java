package com.bianfeng.netlib;

public abstract class ActionSupport<T> extends java.util.Observable implements com.bianfeng.netlib.HttpListener {
    protected android.app.Activity context;
    protected java.util.TreeMap<java.lang.String, java.lang.String> gContent;
    protected com.bianfeng.netlib.HttpHelper httpHelper;
    private java.lang.String mUrl;


    public class ResponseResult<T> {
        private int code;
        private org.json.JSONObject data;
        private java.lang.String msg;
        private T processedResult;
        private java.lang.String srcRes;
        final com.bianfeng.netlib.ActionSupport this$0;

        public ResponseResult(com.bianfeng.netlib.ActionSupport r1, int r2, java.lang.String r3) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r1 = 999(0x3e7, float:1.4E-42)
                r0.code = r1
                r0.code = r2
                r0.msg = r3
                return
        }

        public ResponseResult(com.bianfeng.netlib.ActionSupport r1, java.lang.String r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r1 = 999(0x3e7, float:1.4E-42)
                r0.code = r1
                r0.srcRes = r2
                return
        }

        static java.lang.String access$100(com.bianfeng.netlib.ActionSupport.ResponseResult r0) {
                java.lang.String r0 = r0.srcRes
                return r0
        }

        static int access$200(com.bianfeng.netlib.ActionSupport.ResponseResult r0) {
                int r0 = r0.code
                return r0
        }

        static int access$202(com.bianfeng.netlib.ActionSupport.ResponseResult r0, int r1) {
                r0.code = r1
                return r1
        }

        static java.lang.String access$300(com.bianfeng.netlib.ActionSupport.ResponseResult r0) {
                java.lang.String r0 = r0.msg
                return r0
        }

        static java.lang.String access$302(com.bianfeng.netlib.ActionSupport.ResponseResult r0, java.lang.String r1) {
                r0.msg = r1
                return r1
        }

        static java.lang.Object access$402(com.bianfeng.netlib.ActionSupport.ResponseResult r0, java.lang.Object r1) {
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
                com.bianfeng.thridlibrary.GsonUtils r0 = com.bianfeng.thridlibrary.ThridSdk.getGson()
                com.bianfeng.thridlibrary.GsonUtils r1 = com.bianfeng.thridlibrary.ThridSdk.getGson()
                T r2 = r3.processedResult
                java.lang.String r1 = r1.toJson(r2)
                java.util.Map r0 = r0.fromJson(r1)
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

    public ActionSupport(android.app.Activity r2) {
            r1 = this;
            r1.<init>()
            r1.context = r2
            com.bianfeng.netlib.HttpHelper r0 = new com.bianfeng.netlib.HttpHelper
            r0.<init>(r2)
            r1.httpHelper = r0
            r2 = 1
            r0.setMethod(r2)
            return
    }

    static void access$000(com.bianfeng.netlib.ActionSupport r0, com.bianfeng.netlib.ActionSupport.ResponseResult r1) {
            r0.notifyResponseResult(r1)
            return
    }

    private void notifyResponseResult(com.bianfeng.netlib.ActionSupport.ResponseResult r2) {
            r1 = this;
            r1.setChanged()
            boolean r0 = r2.isResponsed()
            if (r0 == 0) goto L1b
            boolean r0 = r2.isOk()     // Catch: java.lang.Exception -> L17
            if (r0 == 0) goto L1b
            java.lang.Object r0 = r1.onSuccess(r2)     // Catch: java.lang.Exception -> L17
            com.bianfeng.netlib.ActionSupport.ResponseResult.access$402(r2, r0)     // Catch: java.lang.Exception -> L17
            goto L1b
        L17:
            r0 = move-exception
            r0.printStackTrace()
        L1b:
            r1.notifyObservers(r2)
            return
    }

    private void parseResponseResult(com.bianfeng.netlib.ActionSupport.ResponseResult r7) {
            r6 = this;
            r6.showDebugLog(r7)     // Catch: java.lang.Exception -> L42
            java.lang.String r0 = com.bianfeng.netlib.ActionSupport.ResponseResult.access$100(r7)     // Catch: java.lang.Exception -> L42
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L42
            r1 = 0
            if (r0 == 0) goto L32
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()     // Catch: java.lang.Exception -> L42
            java.lang.String r2 = "ymnsdk"
            java.lang.String r3 = "do action response error code = %d msg = %s"
            r4 = 2
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L42
            int r5 = com.bianfeng.netlib.ActionSupport.ResponseResult.access$200(r7)     // Catch: java.lang.Exception -> L42
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> L42
            r4[r1] = r5     // Catch: java.lang.Exception -> L42
            r1 = 1
            java.lang.String r5 = com.bianfeng.netlib.ActionSupport.ResponseResult.access$300(r7)     // Catch: java.lang.Exception -> L42
            r4[r1] = r5     // Catch: java.lang.Exception -> L42
            java.lang.String r1 = java.lang.String.format(r3, r4)     // Catch: java.lang.Exception -> L42
            r0.e(r2, r1)     // Catch: java.lang.Exception -> L42
            goto L50
        L32:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L42
            java.lang.String r2 = com.bianfeng.netlib.ActionSupport.ResponseResult.access$100(r7)     // Catch: java.lang.Exception -> L42
            r0.<init>(r2)     // Catch: java.lang.Exception -> L42
            r7.setCode(r1)     // Catch: java.lang.Exception -> L42
            r7.setData(r0)     // Catch: java.lang.Exception -> L42
            goto L50
        L42:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 602(0x25a, float:8.44E-43)
            com.bianfeng.netlib.ActionSupport.ResponseResult.access$202(r7, r0)
            java.lang.String r0 = "parse response json error"
            com.bianfeng.netlib.ActionSupport.ResponseResult.access$302(r7, r0)
        L50:
            return
    }

    private void showDebugLog(com.bianfeng.netlib.ActionSupport.ResponseResult r5) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "[CONTEXT] "
            r1.append(r2)
            android.app.Activity r2 = r4.context
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
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "[RESPONSE] "
            r1.append(r2)
            java.lang.String r5 = com.bianfeng.netlib.ActionSupport.ResponseResult.access$100(r5)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.append(r5)
            com.bianfeng.utilslib.Logger r5 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.String r0 = r0.toString()
            r5.i(r0)
            return
    }

    public void actionStart() {
            r4 = this;
            java.lang.String r0 = r4.getURL()     // Catch: java.lang.Exception -> La
            r4.mUrl = r0     // Catch: java.lang.Exception -> La
            r4.doRequest()     // Catch: java.lang.Exception -> La
            goto L28
        La:
            r0 = move-exception
            r1 = 603(0x25b, float:8.45E-43)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "ActionSupport类中actionStart方法，请求错误"
            r2.append(r3)
            java.lang.String r3 = r0.getMessage()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r4.onError(r1, r2)
            r0.printStackTrace()
        L28:
            return
    }

    public void doRequest() throws java.io.UnsupportedEncodingException {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.TreeMap<java.lang.String, java.lang.String> r1 = r6.gContent
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        Lf:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L52
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getValue()
            java.lang.String r3 = (java.lang.String) r3
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 == 0) goto L29
            java.lang.String r3 = ""
        L29:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "&"
            r4.append(r5)
            java.lang.Object r2 = r2.getKey()
            java.lang.String r2 = (java.lang.String) r2
            r4.append(r2)
            java.lang.String r2 = "="
            r4.append(r2)
            java.lang.String r2 = "utf-8"
            java.lang.String r2 = java.net.URLEncoder.encode(r3, r2)
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r0.append(r2)
            goto Lf
        L52:
            int r1 = r0.length()
            if (r1 <= 0) goto L75
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r6.mUrl
            r1.append(r2)
            java.lang.String r2 = "?"
            r1.append(r2)
            r2 = 1
            java.lang.String r0 = r0.substring(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r6.mUrl = r0
        L75:
            com.bianfeng.netlib.HttpHelper r0 = r6.httpHelper
            java.lang.String r1 = r6.mUrl
            r0.request(r1, r6)
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

    protected abstract java.lang.String getURL();

    @Override
    public void onComplete(java.lang.String r2) {
            r1 = this;
            com.bianfeng.netlib.ActionSupport$ResponseResult r0 = new com.bianfeng.netlib.ActionSupport$ResponseResult
            r0.<init>(r1, r2)
            r1.processResponseResult(r0)
            return
    }

    @Override
    public void onError(int r2, java.lang.String r3) {
            r1 = this;
            com.bianfeng.netlib.ActionSupport$ResponseResult r0 = new com.bianfeng.netlib.ActionSupport$ResponseResult
            r0.<init>(r1, r2, r3)
            r1.processResponseResult(r0)
            return
    }

    protected abstract T onSuccess(com.bianfeng.netlib.ActionSupport.ResponseResult r1) throws java.lang.Exception;

    public void processResponseResult(com.bianfeng.netlib.ActionSupport.ResponseResult r3) {
            r2 = this;
            r2.parseResponseResult(r3)
            android.app.Activity r0 = r2.context
            boolean r1 = r0 instanceof android.app.Activity
            if (r1 == 0) goto L12
            com.bianfeng.netlib.ActionSupport$1 r1 = new com.bianfeng.netlib.ActionSupport$1
            r1.<init>(r2, r3)
            r0.runOnUiThread(r1)
            goto L15
        L12:
            r2.notifyResponseResult(r3)
        L15:
            return
    }

    public void putReqData(java.util.TreeMap<java.lang.String, java.lang.String> r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.gContent = r1
        L4:
            return
    }
}
