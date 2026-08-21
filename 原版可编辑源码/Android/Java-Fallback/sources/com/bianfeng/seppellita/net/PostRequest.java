package com.bianfeng.seppellita.net;

public class PostRequest extends com.bianfeng.seppellita.net.BaseSeppellitaRequest {
    private java.lang.String aut;
    private com.bianfeng.seppellita.SepperllitaCallback callback;
    private java.lang.String data;
    private java.util.List<java.lang.String> idList;
    private java.lang.String site;
    private java.lang.String time;

    public PostRequest(com.bianfeng.seppellita.bean.PostDataBean r4) throws com.bianfeng.seppellita.exception.SeppellitaException {
            r3 = this;
            r3.<init>()
            java.util.List r0 = r4.getIdList()
            r3.idList = r0
            java.lang.String r0 = r4.getData()
            java.lang.String r1 = r4.getEncrypt_key()
            java.lang.String r0 = com.bianfeng.seppellita.utils.PostDataSecurityUtils.rncode(r0, r1)
            r3.data = r0
            java.lang.String r0 = r4.getTime()
            r3.time = r0
            java.lang.String r1 = r3.data
            java.lang.String r2 = r4.getApihub_secret()
            java.lang.String r0 = com.bianfeng.seppellita.utils.AutUtils.getSign(r1, r0, r2)
            r3.aut = r0
            java.lang.String r0 = r4.getSite()
            r3.site = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "idList--->"
            r0.append(r1)
            java.util.List<java.lang.String> r1 = r3.idList
            java.lang.String r1 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.toJson(r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "dataBean--->"
            r0.append(r1)
            java.lang.String r4 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.toJson(r4)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r4)
            return
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.String> addHeaders() {
            r3 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = r3.aut
            java.lang.String r2 = "Authorization"
            r0.put(r2, r1)
            java.lang.String r1 = r3.time
            java.lang.String r2 = "RequestTime"
            r0.put(r2, r1)
            java.lang.String r1 = r3.site
            java.lang.String r2 = "Site"
            r0.put(r2, r1)
            return r0
    }

    @Override
    public int getMethod() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public java.lang.String getRequestBody() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "数据--body-"
            r0.append(r1)
            java.lang.String r1 = r2.data
            byte[] r1 = r1.getBytes()
            int r1 = r1.length
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r0)
            java.lang.String r0 = r2.data
            return r0
    }

    @Override
    public java.lang.String getUrl() {
            r1 = this;
            com.bianfeng.seppellita.net.UrlManager r0 = com.bianfeng.seppellita.net.UrlManager.getInstance()
            java.lang.String r0 = r0.getPostUrl()
            return r0
    }

    @Override
    public void onFail(java.lang.String r2) {
            r1 = this;
            com.bianfeng.seppellita.SepperllitaCallback r0 = r1.callback
            if (r0 == 0) goto L7
            r0.onPostFail(r2)
        L7:
            return
    }

    @Override
    public void onSuc(java.lang.String r4) {
            r3 = this;
            com.bianfeng.seppellita.SepperllitaCallback r0 = r3.callback
            if (r0 == 0) goto L5a
            java.lang.Class<com.bianfeng.seppellita.bean.PostResponseBean> r0 = com.bianfeng.seppellita.bean.PostResponseBean.class
            java.lang.Object r4 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.fromJson(r4, r0)     // Catch: java.lang.Exception -> L3c
            com.bianfeng.seppellita.bean.PostResponseBean r4 = (com.bianfeng.seppellita.bean.PostResponseBean) r4     // Catch: java.lang.Exception -> L3c
            int r0 = r4.getCode()     // Catch: java.lang.Exception -> L3c
            if (r0 != 0) goto L1a
            com.bianfeng.seppellita.SepperllitaCallback r4 = r3.callback     // Catch: java.lang.Exception -> L3c
            java.util.List<java.lang.String> r0 = r3.idList     // Catch: java.lang.Exception -> L3c
            r4.onPostSuc(r0)     // Catch: java.lang.Exception -> L3c
            goto L5a
        L1a:
            com.bianfeng.seppellita.SepperllitaCallback r0 = r3.callback     // Catch: java.lang.Exception -> L3c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3c
            r1.<init>()     // Catch: java.lang.Exception -> L3c
            int r2 = r4.getCode()     // Catch: java.lang.Exception -> L3c
            r1.append(r2)     // Catch: java.lang.Exception -> L3c
            java.lang.String r2 = "|"
            r1.append(r2)     // Catch: java.lang.Exception -> L3c
            java.lang.String r4 = r4.getMsg()     // Catch: java.lang.Exception -> L3c
            r1.append(r4)     // Catch: java.lang.Exception -> L3c
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Exception -> L3c
            r0.onInitFail(r4)     // Catch: java.lang.Exception -> L3c
            goto L5a
        L3c:
            r4 = move-exception
            r4.printStackTrace()
            com.bianfeng.seppellita.SepperllitaCallback r0 = r3.callback
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "601|参数解析出错 "
            r1.append(r2)
            java.lang.Throwable r4 = r4.getCause()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.onInitFail(r4)
        L5a:
            return
    }

    public void setCallback(com.bianfeng.seppellita.SepperllitaCallback r1) {
            r0 = this;
            r0.callback = r1
            return
    }
}
