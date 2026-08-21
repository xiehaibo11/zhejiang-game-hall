package com.ymnsdk.replugin.action;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class RequestAppPluginInfoAction extends com.ymnsdk.replugin.action.ActionSupport<com.ymnsdk.replugin.entity.AppPluginInfo> {
    java.lang.String requestParams;

    public RequestAppPluginInfoAction(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            java.lang.String r2 = ""
            r1.requestParams = r2
            com.ymnsdk.replugin.action.HttpHelper r2 = r1.httpHelper
            r0 = 1
            r2.setMethod(r0)
            return
    }

    @Override
    protected java.lang.String getURL() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.ymnsdk.replugin.action.URLManager.getHost()
            r0.append(r1)
            java.lang.String r1 = "/app/"
            r0.append(r1)
            java.lang.String r1 = r2.requestParams
            r0.append(r1)
            java.lang.String r1 = "/manifest.json"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public org.json.JSONObject onPrepareData(java.lang.Object... r1) throws java.lang.Exception {
            r0 = this;
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            return r1
    }

    @Override
    protected com.ymnsdk.replugin.entity.AppPluginInfo onSuccess(com.ymnsdk.replugin.action.ActionSupport.ResponseResult r3) throws java.lang.Exception {
            r2 = this;
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r3 = r3.dataAsString()
            java.lang.Class<com.ymnsdk.replugin.entity.AppPluginInfo> r1 = com.ymnsdk.replugin.entity.AppPluginInfo.class
            java.lang.Object r3 = r0.fromJson(r3, r1)
            com.ymnsdk.replugin.entity.AppPluginInfo r3 = (com.ymnsdk.replugin.entity.AppPluginInfo) r3
            return r3
    }

    @Override
    protected com.ymnsdk.replugin.entity.AppPluginInfo onSuccess(com.ymnsdk.replugin.action.ActionSupport.ResponseResult r1) throws java.lang.Exception {
            r0 = this;
            com.ymnsdk.replugin.entity.AppPluginInfo r1 = r0.onSuccess(r1)
            return r1
    }

    public void setRequestParams(java.lang.String r1) {
            r0 = this;
            r0.requestParams = r1
            return
    }
}
