package com.tencent.connect;

public class UnionInfo extends com.tencent.connect.common.BaseApi {
    public static final java.lang.String URL_GET_UNION_ID = "https://openmobile.qq.com/oauth2.0/me";

    public UnionInfo(android.content.Context r1, com.tencent.connect.auth.QQToken r2) {
            r0 = this;
            r0.<init>(r2)
            return
    }

    public void getUnionId(com.tencent.tauth.IUiListener r7) {
            r6 = this;
            android.os.Bundle r3 = r6.a()
            java.lang.String r0 = "unionid"
            java.lang.String r1 = "1"
            r3.putString(r0, r1)
            com.tencent.connect.common.BaseApi$TempRequestListener r5 = new com.tencent.connect.common.BaseApi$TempRequestListener
            r5.<init>(r6, r7)
            com.tencent.connect.auth.QQToken r0 = r6.c
            android.content.Context r1 = com.tencent.open.utils.g.a()
            java.lang.String r2 = "https://openmobile.qq.com/oauth2.0/me"
            java.lang.String r4 = "GET"
            com.tencent.open.utils.HttpUtils.requestAsync(r0, r1, r2, r3, r4, r5)
            return
    }
}
