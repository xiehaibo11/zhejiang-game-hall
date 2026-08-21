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
    public org.json.JSONObject onPrepareData(com.bianfeng.ymnsdk.feature.protocol.IPlugin r6, java.lang.Object... r7) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r5 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "platform_id"
            java.lang.String r2 = r6.getPluginId()     // Catch: java.lang.Exception -> L56
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L56
            java.lang.String r1 = "platform_name"
            java.lang.String r2 = r6.getPluginName()     // Catch: java.lang.Exception -> L56
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L56
            java.lang.String r1 = "platform_ver"
            int r2 = r6.getPluginVersion()     // Catch: java.lang.Exception -> L56
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L56
            java.lang.String r1 = "isDebug"
            boolean r2 = r6.isDebugMode()     // Catch: java.lang.Exception -> L56
            r3 = 1
            r4 = 0
            if (r2 == 0) goto L2c
            r2 = 1
            goto L2d
        L2c:
            r2 = 0
        L2d:
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Exception -> L56
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L56
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L56
            r1.<init>()     // Catch: java.lang.Exception -> L56
            java.lang.String r2 = "pid"
            r4 = r7[r4]     // Catch: java.lang.Exception -> L56
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: java.lang.Exception -> L56
            r1.put(r2, r4)     // Catch: java.lang.Exception -> L56
            java.lang.String r2 = "gid"
            r3 = r7[r3]     // Catch: java.lang.Exception -> L56
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> L56
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L56
            java.lang.String r2 = "data"
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L56
            return r0
        L56:
            r1 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r2 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            r2.<init>(r1)
            throw r2
    }

    @Override
    protected com.bianfeng.ymnsdk.entity.UrlConfig onSuccess(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r3) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r2 = this;
            java.lang.String r0 = r3.dataAsString()
            java.lang.Class<com.bianfeng.ymnsdk.entity.UrlConfig> r1 = com.bianfeng.ymnsdk.entity.UrlConfig.class
            java.lang.Object r0 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.fromJson(r0, r1)
            com.bianfeng.ymnsdk.entity.UrlConfig r0 = (com.bianfeng.ymnsdk.entity.UrlConfig) r0
            return r0
    }

    @Override
    protected com.bianfeng.ymnsdk.entity.UrlConfig onSuccess(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r1) throws java.lang.Exception {
            r0 = this;
            com.bianfeng.ymnsdk.entity.UrlConfig r1 = r0.onSuccess(r1)
            return r1
    }
}
