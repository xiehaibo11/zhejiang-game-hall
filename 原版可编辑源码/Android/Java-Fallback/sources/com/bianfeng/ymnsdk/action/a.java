package com.bianfeng.ymnsdk.action;

public class a extends com.bianfeng.ymnsdk.action.ActionSupport<org.json.JSONObject> {
    public a(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            com.bianfeng.ymnsdk.action.HttpHelper r0 = r2.httpHelper
            r1 = 1
            r0.setMethod(r1)
            return
    }

    @Override
    protected java.lang.String getURL() {
            r1 = this;
            java.lang.String r0 = "shop/feecode"
            java.lang.String r0 = r1.formatUrl(r0)
            return r0
    }

    @Override
    public org.json.JSONObject onPrepareData(com.bianfeng.ymnsdk.feature.protocol.IPlugin r4, java.lang.Object... r5) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r3 = this;
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r3.gContent
            java.lang.String r1 = com.bianfeng.ymnsdk.util.YmnAppContext.getSdkAppId()
            java.lang.String r2 = "app_id"
            r0.put(r2, r1)
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r3.gContent
            java.lang.String r1 = com.bianfeng.ymnsdk.util.YmnAppContext.getConfigIdStr()
            java.lang.String r2 = "package_id"
            r0.put(r2, r1)
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r3.gContent
            java.lang.String r1 = r4.getPluginId()
            java.lang.String r2 = "platform_id"
            r0.put(r2, r1)
            r0 = 0
            return r0
    }

    @Override
    protected org.json.JSONObject onSuccess(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r1) throws java.lang.Exception {
            r0 = this;
            org.json.JSONObject r1 = r0.onSuccess(r1)
            return r1
    }

    @Override
    protected org.json.JSONObject onSuccess(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r3) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "request feedcodes success : "
            r0.append(r1)
            java.lang.String r1 = r3.dataAsString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "Ymn_ActionSupport"
            android.util.Log.i(r1, r0)
            org.json.JSONObject r0 = r3.data
            return r0
    }
}
