package com.bianfeng.netlibsdk;

public abstract class BaseRequest extends com.bianfeng.netlibsdk.Request<java.lang.String> {
    protected static final java.lang.String PROTOCOL_CHARSET = "utf-8";
    private com.bianfeng.netlibsdk.BaseRequest.Listener listener;

    public interface Listener<T> {
        void onFail(java.lang.String r1);

        void onSuccess(T r1);
    }

    public BaseRequest() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void deliverError(com.bianfeng.netlibsdk.utils.NetException r5) {
            r4 = this;
            com.bianfeng.netlibsdk.BaseRequest$Listener r0 = r4.listener
            if (r0 != 0) goto L5
            return
        L5:
            com.bianfeng.netlibsdk.NetworkResponse r0 = r5.response
            if (r0 == 0) goto L37
            com.bianfeng.netlibsdk.BaseRequest$Listener r5 = r4.listener
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r2 = r0.statusCode
            r1.append(r2)
            java.lang.String r2 = "|"
            r1.append(r2)
            byte[] r3 = r0.data
            r1.append(r3)
            r1.append(r2)
            java.util.List<com.bianfeng.netlibsdk.Header> r3 = r0.allHeaders
            r1.append(r3)
            r1.append(r2)
            boolean r0 = r0.notModified
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r5.onFail(r0)
            goto L40
        L37:
            com.bianfeng.netlibsdk.BaseRequest$Listener r0 = r4.listener
            java.lang.String r5 = r5.getMessage()
            r0.onFail(r5)
        L40:
            return
    }

    @Override
    protected void deliverResponse(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = (java.lang.String) r1
            r0.deliverResponse(r1)
            return
    }

    protected void deliverResponse(java.lang.String r4) {
            r3 = this;
            com.bianfeng.netlibsdk.BaseRequest$Listener r0 = r3.listener
            if (r0 != 0) goto L5
            return
        L5:
            r3.log(r4)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()
            boolean r0 = r0.isJsonArrayObject(r4)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r1 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()
            boolean r1 = r1.isJsonObject(r4)
            if (r0 != 0) goto L34
            if (r1 == 0) goto L1d
            goto L34
        L1d:
            com.bianfeng.netlibsdk.BaseRequest$Listener r0 = r3.listener
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "601|字符串不是json对象或json数组"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.onFail(r4)
            goto L62
        L34:
            com.bianfeng.netlibsdk.BaseRequest$Listener r0 = r3.listener     // Catch: java.lang.Exception -> L44
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r1 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()     // Catch: java.lang.Exception -> L44
            com.bianfeng.netlibsdk.BaseRequest$Listener r2 = r3.listener     // Catch: java.lang.Exception -> L44
            java.lang.Object r4 = r1.fromJson(r4, r2)     // Catch: java.lang.Exception -> L44
            r0.onSuccess(r4)     // Catch: java.lang.Exception -> L44
            goto L62
        L44:
            r4 = move-exception
            r4.printStackTrace()
            com.bianfeng.netlibsdk.BaseRequest$Listener r0 = r3.listener
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "601|参数解析出错 "
            r1.append(r2)
            java.lang.Throwable r4 = r4.getCause()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.onFail(r4)
        L62:
            return
    }

    protected void log(java.lang.String r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "BaseRequest url:"
            r0.append(r1)
            java.lang.String r2 = r3.getUrl()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = r3.getRequestBody()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "BaseRequest data:"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r4)
            return
    }

    @Override
    protected com.bianfeng.netlibsdk.Response<java.lang.String> parseNetworkResponse(com.bianfeng.netlibsdk.NetworkResponse r4) throws com.bianfeng.netlibsdk.utils.NetException {
            r3 = this;
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Exception -> L14
            byte[] r1 = r4.data     // Catch: java.lang.Exception -> L14
            java.util.Map<java.lang.String, java.lang.String> r4 = r4.headers     // Catch: java.lang.Exception -> L14
            java.lang.String r2 = "utf-8"
            java.lang.String r4 = com.bianfeng.netlibsdk.HttpHeaderParser.parseCharset(r4, r2)     // Catch: java.lang.Exception -> L14
            r0.<init>(r1, r4)     // Catch: java.lang.Exception -> L14
            com.bianfeng.netlibsdk.Response r4 = com.bianfeng.netlibsdk.Response.success(r0)     // Catch: java.lang.Exception -> L14
            return r4
        L14:
            r4 = move-exception
            com.bianfeng.netlibsdk.utils.NetException r0 = new com.bianfeng.netlibsdk.utils.NetException
            r0.<init>(r4)
            throw r0
    }

    public <T> void setListener(com.bianfeng.netlibsdk.BaseRequest.Listener<T> r1) {
            r0 = this;
            r0.listener = r1
            return
    }
}
