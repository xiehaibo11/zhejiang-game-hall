package com.bianfeng.ymnsdk.action;

public class g extends com.bianfeng.ymnsdk.action.ActionSupport<org.json.JSONObject> {
    public g(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            com.bianfeng.ymnsdk.action.HttpHelper r2 = r1.httpHelper
            r0 = 1
            r2.setMethod(r0)
            return
    }

    @Override
    protected java.lang.String getURL() {
            r1 = this;
            java.lang.String r0 = "shop/goods"
            java.lang.String r0 = r1.formatUrl(r0)
            return r0
    }

    @Override
    public org.json.JSONObject onPrepareData(com.bianfeng.ymnsdk.feature.protocol.IPlugin r2, java.lang.Object... r3) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r1 = this;
            java.util.TreeMap<java.lang.String, java.lang.String> r2 = r1.gContent
            java.lang.String r3 = com.bianfeng.ymnsdk.util.YmnAppContext.getSdkAppId()
            java.lang.String r0 = "app_id"
            r2.put(r0, r3)
            java.util.TreeMap<java.lang.String, java.lang.String> r2 = r1.gContent
            java.lang.String r3 = com.bianfeng.ymnsdk.util.YmnAppContext.getConfigIdStr()
            java.lang.String r0 = "package_id"
            r2.put(r0, r3)
            r2 = 0
            return r2
    }

    @Override
    protected org.json.JSONObject onSuccess(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r1) throws java.lang.Exception {
            r0 = this;
            org.json.JSONObject r1 = r0.onSuccess(r1)
            return r1
    }

    @Override
    protected org.json.JSONObject onSuccess(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r3) throws java.lang.Exception {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "request products success : "
            r0.append(r1)
            java.lang.String r1 = r3.dataAsString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "Ymn_ActionSupport"
            android.util.Log.i(r1, r0)
            org.json.JSONObject r3 = r3.data
            return r3
    }
}
