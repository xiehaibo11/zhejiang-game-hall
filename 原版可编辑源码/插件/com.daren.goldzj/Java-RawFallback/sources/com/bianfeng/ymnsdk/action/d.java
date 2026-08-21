package com.bianfeng.ymnsdk.action;

public class d extends com.bianfeng.ymnsdk.action.ActionSupport<com.bianfeng.ymnsdk.feature.protocol.IUserFeature.UserInfo> {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private com.bianfeng.ymnsdk.feature.protocol.IPlugin f;

    public d(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            java.lang.String r1 = "uid"
            r0.a = r1
            java.lang.String r1 = "pid"
            r0.b = r1
            java.lang.String r1 = "gid"
            r0.c = r1
            java.lang.String r1 = "username"
            r0.d = r1
            java.lang.String r1 = "session"
            r0.e = r1
            return
    }

    @Override
    protected java.lang.String getURL() {
            r2 = this;
            java.lang.String r0 = "login"
            java.lang.String r0 = r2.formatUrl(r0)
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r1 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            r1.loginOldRequestEvent(r0)
            return r0
    }

    @Override
    public org.json.JSONObject onPrepareData(com.bianfeng.ymnsdk.feature.protocol.IPlugin r4, java.lang.Object... r5) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r3 = this;
            r3.f = r4
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "platform_id"
            java.lang.String r2 = r4.getPluginId()     // Catch: java.lang.Exception -> L53
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L53
            java.lang.String r1 = "platform_name"
            java.lang.String r2 = r4.getPluginName()     // Catch: java.lang.Exception -> L53
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L53
            java.lang.String r1 = "platform_ver"
            int r2 = r4.getPluginVersion()     // Catch: java.lang.Exception -> L53
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L53
            java.lang.String r1 = "isDebug"
            boolean r4 = r4.isDebugMode()     // Catch: java.lang.Exception -> L53
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: java.lang.Exception -> L53
            r0.put(r1, r4)     // Catch: java.lang.Exception -> L53
            java.lang.String r4 = "data"
            r1 = 0
            r1 = r5[r1]     // Catch: java.lang.Exception -> L53
            java.lang.Object r1 = r3.formatType(r1)     // Catch: java.lang.Exception -> L53
            r0.put(r4, r1)     // Catch: java.lang.Exception -> L53
            java.lang.String r4 = "ext"
            r1 = 1
            r5 = r5[r1]     // Catch: java.lang.Exception -> L53
            java.lang.Object r5 = r3.formatType(r5)     // Catch: java.lang.Exception -> L53
            r0.put(r4, r5)     // Catch: java.lang.Exception -> L53
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r4 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()     // Catch: java.lang.Exception -> L53
            java.lang.String r4 = r4.getLoginTrace()     // Catch: java.lang.Exception -> L53
            r3.setTransactionId(r4)     // Catch: java.lang.Exception -> L53
            return r0
        L53:
            r4 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r5 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            r5.<init>(r4)
            throw r5
    }

    @Override
    protected com.bianfeng.ymnsdk.feature.protocol.IUserFeature.UserInfo onSuccess(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r4) throws java.lang.Exception {
            r3 = this;
            org.json.JSONObject r0 = r4.data
            com.bianfeng.ymnsdk.feature.protocol.IPlugin r1 = r3.f
            java.lang.String r1 = r1.getPluginId()
            java.lang.String r2 = "platform_id"
            r0.put(r2, r1)
            org.json.JSONObject r0 = r4.data
            com.bianfeng.ymnsdk.feature.protocol.IPlugin r1 = r3.f
            java.lang.String r1 = r1.getPluginName()
            java.lang.String r2 = "platform_name"
            r0.put(r2, r1)
            org.json.JSONObject r0 = r4.data
            com.bianfeng.ymnsdk.feature.protocol.IPlugin r1 = r3.f
            java.lang.String r1 = r1.getPluginName()
            java.lang.String r2 = "thirdparty"
            r0.put(r2, r1)
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature$UserInfo r0 = new com.bianfeng.ymnsdk.feature.protocol.IUserFeature$UserInfo
            r0.<init>()
            r1 = 1
            r0.setYmnLogined(r1)
            org.json.JSONObject r1 = r4.data
            java.lang.String r2 = r3.b
            java.lang.String r1 = r1.optString(r2)
            r0.setYmnUserIdInt(r1)
            org.json.JSONObject r1 = r4.data
            java.lang.String r2 = r3.a
            java.lang.String r1 = r1.optString(r2)
            r0.setYmnUserId(r1)
            org.json.JSONObject r1 = r4.data
            java.lang.String r2 = r3.c
            java.lang.String r1 = r1.optString(r2)
            r0.setPlatformUserId(r1)
            org.json.JSONObject r1 = r4.data
            java.lang.String r2 = r3.e
            java.lang.String r1 = r1.optString(r2)
            r0.setYmnSession(r1)
            org.json.JSONObject r1 = r4.data
            java.lang.String r2 = r3.d
            java.lang.String r1 = r1.optString(r2)
            r0.setYmnUserName(r1)
            java.lang.Object r4 = r4.ext
            java.lang.String r4 = r4.toString()
            r0.setResponseExt(r4)
            return r0
    }

    @Override
    protected com.bianfeng.ymnsdk.feature.protocol.IUserFeature.UserInfo onSuccess(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r1) throws java.lang.Exception {
            r0 = this;
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature$UserInfo r1 = r0.onSuccess(r1)
            return r1
    }
}
