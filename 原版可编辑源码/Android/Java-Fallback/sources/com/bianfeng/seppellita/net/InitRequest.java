package com.bianfeng.seppellita.net;

public class InitRequest extends com.bianfeng.seppellita.net.BaseSeppellitaRequest {
    private com.bianfeng.seppellita.SepperllitaCallback callback;
    private java.util.Map<java.lang.String, java.lang.String> map;

    public InitRequest(java.util.Map<java.lang.String, java.lang.String> r1, com.bianfeng.seppellita.SepperllitaCallback r2) {
            r0 = this;
            r0.<init>()
            r0.callback = r2
            r0.map = r1
            return
    }

    @Override
    public int getMethod() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getUrl() {
            r2 = this;
            com.bianfeng.seppellita.net.UrlManager r0 = com.bianfeng.seppellita.net.UrlManager.getInstance()
            java.util.Map<java.lang.String, java.lang.String> r1 = r2.map
            java.lang.String r0 = r0.getInitUrl(r1)
            return r0
    }

    @Override
    public void onFail(java.lang.String r2) {
            r1 = this;
            com.bianfeng.seppellita.SepperllitaCallback r0 = r1.callback
            if (r0 == 0) goto L7
            r0.onInitFail(r2)
        L7:
            return
    }

    @Override
    public void onSuc(java.lang.String r4) {
            r3 = this;
            com.bianfeng.seppellita.SepperllitaCallback r0 = r3.callback
            if (r0 == 0) goto L4a
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()     // Catch: java.lang.Exception -> L2c
            java.lang.Class<com.bianfeng.seppellita.bean.InitBean> r1 = com.bianfeng.seppellita.bean.InitBean.class
            java.lang.Object r4 = r0.fromJson(r4, r1)     // Catch: java.lang.Exception -> L2c
            com.bianfeng.seppellita.bean.InitBean r4 = (com.bianfeng.seppellita.bean.InitBean) r4     // Catch: java.lang.Exception -> L2c
            int r0 = r4.getCode()     // Catch: java.lang.Exception -> L2c
            if (r0 != 0) goto L4a
            com.bianfeng.seppellita.SepperllitaCallback r0 = r3.callback     // Catch: java.lang.Exception -> L2c
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r1 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()     // Catch: java.lang.Exception -> L2c
            com.bianfeng.seppellita.bean.InitBean$DataBean r4 = r4.getData()     // Catch: java.lang.Exception -> L2c
            java.lang.Class<com.bianfeng.seppellita.bean.InitBean$DataBean> r2 = com.bianfeng.seppellita.bean.InitBean.DataBean.class
            java.lang.Object r4 = r1.fromJson(r4, r2)     // Catch: java.lang.Exception -> L2c
            com.bianfeng.seppellita.bean.InitBean$DataBean r4 = (com.bianfeng.seppellita.bean.InitBean.DataBean) r4     // Catch: java.lang.Exception -> L2c
            r0.onInitSuc(r4)     // Catch: java.lang.Exception -> L2c
            goto L4a
        L2c:
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
        L4a:
            return
    }
}
