package com.bianfeng.ymnsdk.actionv2;

public class a extends com.bianfeng.ymnsdk.actionv2.ActionSupportV3<com.bianfeng.ymnsdk.feature.protocol.IUserFeature.UserInfo> {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private com.bianfeng.ymnsdk.feature.protocol.IPlugin f;

    public a(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            java.lang.String r0 = "uid"
            r1.a = r0
            java.lang.String r0 = "pid"
            r1.b = r0
            java.lang.String r0 = "gid"
            r1.c = r0
            java.lang.String r0 = "username"
            r1.d = r0
            java.lang.String r0 = "session"
            r1.e = r0
            return
    }

    @Override
    protected java.lang.String getURL() {
            r2 = this;
            java.lang.String r0 = "sync/login_data"
            java.lang.String r0 = r2.formatUrl(r0)
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r1 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            r1.loginNewRequest(r0)
            return r0
    }

    @Override
    public org.json.JSONObject onPrepareData(com.bianfeng.ymnsdk.feature.protocol.IPlugin r2, java.lang.Object... r3) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r1 = this;
            r1.f = r2
            r0 = 0
            return r0
    }

    @Override
    protected com.bianfeng.ymnsdk.feature.protocol.IUserFeature.UserInfo onSuccess(com.bianfeng.ymnsdk.actionv2.ActionSupportV3.ResponseResult r4) throws java.lang.Exception {
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
            java.lang.Object r1 = r4.ext
            java.lang.String r1 = r1.toString()
            r0.setResponseExt(r1)
            return r0
    }

    @Override
    protected com.bianfeng.ymnsdk.feature.protocol.IUserFeature.UserInfo onSuccess(com.bianfeng.ymnsdk.actionv2.ActionSupportV3.ResponseResult r1) throws java.lang.Exception {
            r0 = this;
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature$UserInfo r1 = r0.onSuccess(r1)
            return r1
    }
}
