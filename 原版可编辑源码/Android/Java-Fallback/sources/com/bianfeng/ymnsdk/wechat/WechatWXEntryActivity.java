package com.bianfeng.ymnsdk.wechat;

public class WechatWXEntryActivity implements com.tencent.mm.opensdk.openapi.IWXAPIEventHandler {
    public static final int WX_LOGIN_TYPE = 1;

    public WechatWXEntryActivity(android.content.Context r1) {
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
            if (r0 == r1) goto L9f
            r1 = -2
            if (r0 == r1) goto L97
            if (r0 == 0) goto L4a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r5.errCode
            r0.append(r1)
            r0.append(r2)
            java.lang.String r5 = r5.errStr
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.bianfeng.ymnsdk.wechat.WechatInterface.sendLoginResult(r3, r5)
            goto Lb8
        L4a:
            boolean r0 = r5 instanceof com.tencent.mm.opensdk.modelmsg.SendAuth.Resp
            if (r0 == 0) goto L7d
            com.tencent.mm.opensdk.modelmsg.SendAuth$Resp r5 = (com.tencent.mm.opensdk.modelmsg.SendAuth.Resp) r5
            java.lang.String r0 = r5.state
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L7c
            java.lang.String r1 = "wechat_login"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L61
            goto L7c
        L61:
            java.lang.String r5 = r5.code
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "session"
            r0.put(r1, r5)     // Catch: org.json.JSONException -> L6e
            goto L72
        L6e:
            r5 = move-exception
            r5.printStackTrace()
        L72:
            r5 = 102(0x66, float:1.43E-43)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.wechat.WechatInterface.sendLoginResult(r5, r0)
            goto Lb8
        L7c:
            return
        L7d:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r5.errCode
            r0.append(r1)
            r0.append(r2)
            java.lang.String r5 = r5.errStr
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.bianfeng.ymnsdk.wechat.WechatInterface.sendLoginResult(r3, r5)
            goto Lb8
        L97:
            r5 = 106(0x6a, float:1.49E-43)
            java.lang.String r0 = "取消登录"
            com.bianfeng.ymnsdk.wechat.WechatInterface.sendLoginResult(r5, r0)
            goto Lb8
        L9f:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r5.errCode
            r0.append(r1)
            r0.append(r2)
            java.lang.String r5 = r5.errStr
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.bianfeng.ymnsdk.wechat.WechatInterface.sendLoginResult(r3, r5)
        Lb8:
            return
    }
}
