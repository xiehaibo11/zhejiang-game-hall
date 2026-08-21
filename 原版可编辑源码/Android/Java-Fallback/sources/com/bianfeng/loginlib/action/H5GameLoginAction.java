package com.bianfeng.loginlib.action;

public class H5GameLoginAction extends com.bianfeng.netlib.ActionSupport {
    private java.util.Map<java.lang.String, java.lang.String> map;

    public H5GameLoginAction(android.app.Activity r1) {
            r0 = this;
            r0.<init>(r1)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.map = r1
            return
    }

    @Override
    protected java.lang.String getURL() {
            r1 = this;
            java.lang.String r0 = com.bianfeng.loginlib.utils.UrlManagerUtils.getUrl()
            return r0
    }

    @Override
    protected java.lang.Object onSuccess(com.bianfeng.netlib.ActionSupport.ResponseResult r1) throws java.lang.Exception {
            r0 = this;
            java.util.Map r1 = r0.onSuccess(r1)
            return r1
    }

    @Override
    protected java.util.Map<java.lang.String, java.lang.String> onSuccess(com.bianfeng.netlib.ActionSupport.ResponseResult r3) throws java.lang.Exception {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.map
            org.json.JSONObject r3 = r3.getData()
            java.lang.String r1 = "address"
            java.lang.String r3 = r3.getString(r1)
            r0.put(r1, r3)
            java.util.Map<java.lang.String, java.lang.String> r3 = r2.map
            return r3
    }
}
