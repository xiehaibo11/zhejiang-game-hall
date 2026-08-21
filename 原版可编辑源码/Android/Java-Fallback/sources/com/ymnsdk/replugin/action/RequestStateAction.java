package com.ymnsdk.replugin.action;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class RequestStateAction extends com.ymnsdk.replugin.action.ActionSupport<com.ymnsdk.replugin.entity.PluginState> {
    java.lang.String murl;

    public RequestStateAction(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            java.lang.String r2 = ""
            r1.murl = r2
            com.ymnsdk.replugin.action.HttpHelper r2 = r1.httpHelper
            r0 = 1
            r2.setMethod(r0)
            return
    }

    @Override
    protected java.lang.String getURL() {
            r1 = this;
            java.lang.String r0 = r1.murl
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
    protected com.ymnsdk.replugin.entity.PluginState onSuccess(com.ymnsdk.replugin.action.ActionSupport.ResponseResult r3) throws java.lang.Exception {
            r2 = this;
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r3 = r3.dataAsString()
            java.lang.Class<com.ymnsdk.replugin.entity.PluginState> r1 = com.ymnsdk.replugin.entity.PluginState.class
            java.lang.Object r3 = r0.fromJson(r3, r1)
            com.ymnsdk.replugin.entity.PluginState r3 = (com.ymnsdk.replugin.entity.PluginState) r3
            return r3
    }

    @Override
    protected com.ymnsdk.replugin.entity.PluginState onSuccess(com.ymnsdk.replugin.action.ActionSupport.ResponseResult r1) throws java.lang.Exception {
            r0 = this;
            com.ymnsdk.replugin.entity.PluginState r1 = r0.onSuccess(r1)
            return r1
    }

    public void setURL(java.lang.String r1) {
            r0 = this;
            r0.murl = r1
            return
    }
}
