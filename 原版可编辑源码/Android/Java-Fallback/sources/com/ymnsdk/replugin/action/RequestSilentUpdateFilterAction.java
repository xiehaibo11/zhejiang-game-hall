package com.ymnsdk.replugin.action;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class RequestSilentUpdateFilterAction extends com.ymnsdk.replugin.action.ActionSupport<org.json.JSONObject> {
    java.lang.String mUrl;

    public RequestSilentUpdateFilterAction(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            r1.<init>(r2)
            com.ymnsdk.replugin.action.HttpHelper r2 = r1.httpHelper
            r0 = 2
            r2.setMethod(r0)
            r1.mUrl = r3
            return
    }

    @Override
    protected java.lang.String getURL() {
            r1 = this;
            java.lang.String r0 = r1.mUrl
            return r0
    }

    @Override
    public org.json.JSONObject onPrepareData(java.lang.Object... r3) throws java.lang.Exception {
            r2 = this;
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            r1 = 0
            r3 = r3[r1]
            java.lang.String r3 = r0.toJson(r3)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L11
            r0.<init>(r3)     // Catch: java.lang.Exception -> L11
            return r0
        L11:
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
            return r3
    }

    @Override
    protected org.json.JSONObject onSuccess(com.ymnsdk.replugin.action.ActionSupport.ResponseResult r1) throws java.lang.Exception {
            r0 = this;
            org.json.JSONObject r1 = r0.onSuccess(r1)
            return r1
    }

    @Override
    protected org.json.JSONObject onSuccess(com.ymnsdk.replugin.action.ActionSupport.ResponseResult r2) throws java.lang.Exception {
            r1 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            java.lang.String r2 = r2.dataAsString()
            r0.<init>(r2)
            return r0
    }
}
