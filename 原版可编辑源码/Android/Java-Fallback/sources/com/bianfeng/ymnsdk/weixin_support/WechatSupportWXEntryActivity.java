package com.bianfeng.ymnsdk.weixin_support;

public class WechatSupportWXEntryActivity implements com.tencent.mm.opensdk.openapi.IWXAPIEventHandler {
    public static final int WX_LOGIN_TYPE = 1;

    public WechatSupportWXEntryActivity(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onReq(com.tencent.mm.opensdk.modelbase.BaseReq r2) {
            r1 = this;
            int r2 = r2.getType()
            r0 = 1
            if (r2 == r0) goto L7
        L7:
            return
    }

    @Override
    public void onResp(com.tencent.mm.opensdk.modelbase.BaseResp r5) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onResp"
            r0.append(r1)
            int r1 = r5.getType()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "WXEntryActivity"
            android.util.Log.e(r1, r0)
            int r0 = r5.getType()
            r1 = 1
            if (r0 == r1) goto L22
            return
        L22:
            int r0 = r5.errCode
            r1 = -4
            java.lang.String r2 = "|"
            r3 = 105(0x69, float:1.47E-43)
            if (r0 == r1) goto Lc2
            r1 = -2
            if (r0 == r1) goto Lba
            if (r0 == 0) goto L4b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r5.errCode
            r0.append(r1)
            r0.append(r2)
            java.lang.String r5 = r5.errStr
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.bianfeng.ymnsdk.weixin_support.WechatSupportInterface.sendLoginResult(r3, r5)
            goto Ldb
        L4b:
            boolean r0 = r5 instanceof com.tencent.mm.opensdk.modelmsg.SendAuth.Resp
            if (r0 == 0) goto La0
            com.tencent.mm.opensdk.modelmsg.SendAuth$Resp r5 = (com.tencent.mm.opensdk.modelmsg.SendAuth.Resp) r5
            java.lang.String r0 = r5.state
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L9f
            java.lang.String r1 = "wechat_support_login"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L62
            goto L9f
        L62:
            java.lang.String r5 = r5.code
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "session"
            r0.put(r1, r5)     // Catch: org.json.JSONException -> L7c
            java.lang.String r5 = "appid"
            com.bianfeng.ymnsdk.weixin_support.WechatSupportInterface r1 = com.bianfeng.ymnsdk.weixin_support.WechatSupportInterface.getInstance()     // Catch: org.json.JSONException -> L7c
            java.lang.String r1 = r1.readResponseWxappid()     // Catch: org.json.JSONException -> L7c
            r0.put(r5, r1)     // Catch: org.json.JSONException -> L7c
            goto L95
        L7c:
            r5 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "WechatSupport --- --"
            r1.append(r2)
            java.lang.String r5 = r5.getMessage()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r5)
        L95:
            r5 = 102(0x66, float:1.43E-43)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.weixin_support.WechatSupportInterface.sendLoginResult(r5, r0)
            goto Ldb
        L9f:
            return
        La0:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r5.errCode
            r0.append(r1)
            r0.append(r2)
            java.lang.String r5 = r5.errStr
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.bianfeng.ymnsdk.weixin_support.WechatSupportInterface.sendLoginResult(r3, r5)
            goto Ldb
        Lba:
            r5 = 106(0x6a, float:1.49E-43)
            java.lang.String r0 = "取消登录"
            com.bianfeng.ymnsdk.weixin_support.WechatSupportInterface.sendLoginResult(r5, r0)
            goto Ldb
        Lc2:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r5.errCode
            r0.append(r1)
            r0.append(r2)
            java.lang.String r5 = r5.errStr
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.bianfeng.ymnsdk.weixin_support.WechatSupportInterface.sendLoginResult(r3, r5)
        Ldb:
            return
    }
}
