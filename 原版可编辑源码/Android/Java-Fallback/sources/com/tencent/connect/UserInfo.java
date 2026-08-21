package com.tencent.connect;

public class UserInfo extends com.tencent.connect.common.BaseApi {
    public static final java.lang.String GRAPH_OPEN_ID = "oauth2.0/m_me";

    public UserInfo(android.content.Context r1, com.tencent.connect.auth.QQToken r2) {
            r0 = this;
            r0.<init>(r2)
            return
    }

    public UserInfo(android.content.Context r1, com.tencent.connect.auth.c r2, com.tencent.connect.auth.QQToken r3) {
            r0 = this;
            r0.<init>(r2, r3)
            return
    }

    public void getOpenId(com.tencent.tauth.IUiListener r7) {
            r6 = this;
            android.os.Bundle r3 = r6.a()
            com.tencent.connect.common.BaseApi$TempRequestListener r5 = new com.tencent.connect.common.BaseApi$TempRequestListener
            r5.<init>(r6, r7)
            com.tencent.connect.auth.QQToken r0 = r6.c
            android.content.Context r1 = com.tencent.open.utils.g.a()
            java.lang.String r2 = "oauth2.0/m_me"
            java.lang.String r4 = "GET"
            com.tencent.open.utils.HttpUtils.requestAsync(r0, r1, r2, r3, r4, r5)
            return
    }

    public void getUserInfo(com.tencent.tauth.IUiListener r7) {
            r6 = this;
            android.os.Bundle r3 = r6.a()
            com.tencent.connect.common.BaseApi$TempRequestListener r5 = new com.tencent.connect.common.BaseApi$TempRequestListener
            r5.<init>(r6, r7)
            com.tencent.connect.auth.QQToken r0 = r6.c
            android.content.Context r1 = com.tencent.open.utils.g.a()
            java.lang.String r2 = "user/get_simple_userinfo"
            java.lang.String r4 = "GET"
            com.tencent.open.utils.HttpUtils.requestAsync(r0, r1, r2, r3, r4, r5)
            return
    }
}
