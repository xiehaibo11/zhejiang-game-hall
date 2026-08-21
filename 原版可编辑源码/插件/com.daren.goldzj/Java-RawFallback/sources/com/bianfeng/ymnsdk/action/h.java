package com.bianfeng.ymnsdk.action;

public class h extends com.bianfeng.ymnsdk.action.ActionSupport<com.bianfeng.ymnsdk.entity.UrlConfig> {
    public h(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    protected java.lang.String getURL() {
            r1 = this;
            java.lang.String r0 = "server/getList"
            java.lang.String r0 = r1.formatUrl(r0)
            return r0
    }

    @Override
    public org.json.JSONObject onPrepareData(com.bianfeng.ymnsdk.feature.protocol.IPlugin r4, java.lang.Object... r5) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "platform_id"
            java.lang.String r2 = r4.getPluginId()     // Catch: java.lang.Exception -> L50
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L50
            java.lang.String r1 = "platform_name"
            java.lang.String r2 = r4.getPluginName()     // Catch: java.lang.Exception -> L50
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L50
            java.lang.String r1 = "platform_ver"
            int r2 = r4.getPluginVersion()     // Catch: java.lang.Exception -> L50
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L50
            java.lang.String r1 = "isDebug"
            boolean r4 = r4.isDebugMode()     // Catch: java.lang.Exception -> L50
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: java.lang.Exception -> L50
            r0.put(r1, r4)     // Catch: java.lang.Exception -> L50
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L50
            r4.<init>()     // Catch: java.lang.Exception -> L50
            java.lang.String r1 = "pid"
            r2 = 0
            r2 = r5[r2]     // Catch: java.lang.Exception -> L50
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Exception -> L50
            r4.put(r1, r2)     // Catch: java.lang.Exception -> L50
            java.lang.String r1 = "gid"
            r2 = 1
            r5 = r5[r2]     // Catch: java.lang.Exception -> L50
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.Exception -> L50
            r4.put(r1, r5)     // Catch: java.lang.Exception -> L50
            java.lang.String r5 = "data"
            r0.put(r5, r4)     // Catch: java.lang.Exception -> L50
            return r0
        L50:
            r4 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r5 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            r5.<init>(r4)
            throw r5
    }

    @Override
    protected com.bianfeng.ymnsdk.entity.UrlConfig onSuccess(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r2) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r1 = this;
            java.lang.String r2 = r2.dataAsString()
            java.lang.Class<com.bianfeng.ymnsdk.entity.UrlConfig> r0 = com.bianfeng.ymnsdk.entity.UrlConfig.class
            java.lang.Object r2 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.fromJson(r2, r0)
            com.bianfeng.ymnsdk.entity.UrlConfig r2 = (com.bianfeng.ymnsdk.entity.UrlConfig) r2
            return r2
    }

    @Override
    protected com.bianfeng.ymnsdk.entity.UrlConfig onSuccess(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r1) throws java.lang.Exception {
            r0 = this;
            com.bianfeng.ymnsdk.entity.UrlConfig r1 = r0.onSuccess(r1)
            return r1
    }
}
