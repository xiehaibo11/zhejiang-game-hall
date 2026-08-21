package com.bianfeng.seppellita.net;

public abstract class BaseSeppellitaRequest extends com.bianfeng.netlibsdk.Request<java.lang.String> {
    public BaseSeppellitaRequest() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.String> addHeaders() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void deliverError(com.bianfeng.netlibsdk.utils.NetException r4) {
            r3 = this;
            com.bianfeng.seppellita.net.UrlManager r0 = com.bianfeng.seppellita.net.UrlManager.getInstance()
            r0.onFail()
            com.bianfeng.netlibsdk.NetworkResponse r0 = r4.response
            if (r0 == 0) goto L37
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            int r1 = r0.statusCode
            r4.append(r1)
            java.lang.String r1 = "|"
            r4.append(r1)
            byte[] r2 = r0.data
            r4.append(r2)
            r4.append(r1)
            java.util.List<com.bianfeng.netlibsdk.Header> r2 = r0.allHeaders
            r4.append(r2)
            r4.append(r1)
            boolean r0 = r0.notModified
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            r3.onFail(r4)
            goto L3e
        L37:
            java.lang.String r4 = r4.getMessage()
            r3.onFail(r4)
        L3e:
            return
    }

    @Override
    protected void deliverResponse(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = (java.lang.String) r1
            r0.deliverResponse(r1)
            return
    }

    protected void deliverResponse(java.lang.String r2) {
            r1 = this;
            com.bianfeng.seppellita.net.UrlManager r0 = com.bianfeng.seppellita.net.UrlManager.getInstance()
            r0.onSuc()
            r1.log(r2)
            r1.onSuc(r2)
            return
    }

    @Override
    public java.lang.String getRequestBody() {
            r1 = this;
            r0 = 0
            return r0
    }

    protected void log(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "BaseSeppellitaRequest url:"
            r0.append(r1)
            java.lang.String r1 = r2.getUrl()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "BaseSeppellitaRequest body:"
            r0.append(r1)
            java.lang.String r1 = r2.getRequestBody()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "BaseSeppellitaRequest data:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r3)
            return
    }

    public abstract void onFail(java.lang.String r1);

    public abstract void onSuc(java.lang.String r1);

    @Override
    public com.bianfeng.netlibsdk.Response<java.lang.String> parseNetworkResponse(com.bianfeng.netlibsdk.NetworkResponse r4) throws com.bianfeng.netlibsdk.utils.NetException {
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
}
