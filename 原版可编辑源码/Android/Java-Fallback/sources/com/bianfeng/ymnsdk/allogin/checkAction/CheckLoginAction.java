package com.bianfeng.ymnsdk.allogin.checkAction;

public class CheckLoginAction extends com.bianfeng.ymnsdk.actionv2.ActionSupportV3<com.bianfeng.ymnsdk.feature.protocol.IUserFeature.UserInfo> {
    private java.lang.String LOGIN_SUC_RS_GID;
    private java.lang.String LOGIN_SUC_RS_PID;
    private java.lang.String LOGIN_SUC_RS_SESSION;
    private java.lang.String LOGIN_SUC_RS_UID;
    private java.lang.String LOGIN_SUC_RS_USERNAME;
    private android.content.Context context;

    public CheckLoginAction(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            java.lang.String r1 = "uid"
            r0.LOGIN_SUC_RS_UID = r1
            java.lang.String r1 = "pid"
            r0.LOGIN_SUC_RS_PID = r1
            java.lang.String r1 = "gid"
            r0.LOGIN_SUC_RS_GID = r1
            java.lang.String r1 = "username"
            r0.LOGIN_SUC_RS_USERNAME = r1
            java.lang.String r1 = "session"
            r0.LOGIN_SUC_RS_SESSION = r1
            return
    }

    @Override
    protected java.lang.String getURL() {
            r2 = this;
            java.lang.String r0 = "check"
            java.lang.String r0 = r2.formatUrl(r0)
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r1 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            r1.loginNewRequest(r0)
            return r0
    }

    @Override
    public org.json.JSONObject onPrepareData(com.bianfeng.ymnsdk.feature.protocol.IPlugin r2, java.lang.Object... r3) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r1 = this;
            r2 = 0
            r2 = r3[r2]
            java.lang.String r2 = (java.lang.String) r2
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1b
            r0.<init>(r2)     // Catch: java.lang.Exception -> L1b
            java.lang.String r2 = "session"
            java.lang.String r2 = r0.getString(r2)     // Catch: java.lang.Exception -> L1b
            java.lang.String r0 = "sid"
            r3.put(r0, r2)     // Catch: java.lang.Exception -> L1b
            goto L1f
        L1b:
            r2 = move-exception
            r2.printStackTrace()
        L1f:
            return r3
    }

    @Override
    protected com.bianfeng.ymnsdk.feature.protocol.IUserFeature.UserInfo onSuccess(com.bianfeng.ymnsdk.actionv2.ActionSupportV3.ResponseResult r4) throws java.lang.Exception {
            r3 = this;
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature$UserInfo r0 = new com.bianfeng.ymnsdk.feature.protocol.IUserFeature$UserInfo
            r0.<init>()
            r1 = 1
            r0.setYmnLogined(r1)
            org.json.JSONObject r1 = r4.data
            java.lang.String r2 = r3.LOGIN_SUC_RS_PID
            java.lang.String r1 = r1.optString(r2)
            r0.setYmnUserIdInt(r1)
            org.json.JSONObject r1 = r4.data
            java.lang.String r2 = r3.LOGIN_SUC_RS_UID
            java.lang.String r1 = r1.optString(r2)
            r0.setYmnUserId(r1)
            org.json.JSONObject r1 = r4.data
            java.lang.String r2 = r3.LOGIN_SUC_RS_GID
            java.lang.String r1 = r1.optString(r2)
            r0.setPlatformUserId(r1)
            org.json.JSONObject r1 = r4.data
            java.lang.String r2 = r3.LOGIN_SUC_RS_SESSION
            java.lang.String r1 = r1.optString(r2)
            r0.setYmnSession(r1)
            org.json.JSONObject r1 = r4.data
            java.lang.String r2 = r3.LOGIN_SUC_RS_USERNAME
            java.lang.String r1 = r1.optString(r2)
            r0.setYmnUserName(r1)
            java.lang.Object r1 = r4.ext
            if (r1 == 0) goto L4d
            java.lang.Object r4 = r4.ext
            java.lang.String r4 = r4.toString()
            r0.setResponseExt(r4)
        L4d:
            return r0
    }

    @Override
    protected com.bianfeng.ymnsdk.feature.protocol.IUserFeature.UserInfo onSuccess(com.bianfeng.ymnsdk.actionv2.ActionSupportV3.ResponseResult r1) throws java.lang.Exception {
            r0 = this;
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature$UserInfo r1 = r0.onSuccess(r1)
            return r1
    }
}
