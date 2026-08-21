package com.tencent.connect.commonchannel;

public class CommonChannelApi extends com.tencent.connect.common.BaseApi {
    public static final java.lang.String SCHEME_HEADER = "mqqapi://open_connect/common_channel";

    public CommonChannelApi(com.tencent.connect.auth.QQToken r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public CommonChannelApi(com.tencent.connect.auth.c r1, com.tencent.connect.auth.QQToken r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    private boolean a(android.os.Bundle r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "src_id"
            boolean r1 = r3.containsKey(r1)
            if (r1 == 0) goto L15
            java.lang.String r1 = "opensdk_ext_data"
            boolean r3 = r3.containsKey(r1)
            if (r3 == 0) goto L15
            r0 = 1
        L15:
            return r0
    }

    public int launchQQ(android.app.Activity r6, android.os.Bundle r7, com.tencent.tauth.IUiListener r8) {
            r5 = this;
            r0 = -5
            if (r8 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "UniversalApi"
            boolean r1 = com.tencent.connect.a.a(r1, r8)
            if (r1 == 0) goto Le
            r6 = -6
            return r6
        Le:
            boolean r1 = r5.a(r7)
            if (r1 != 0) goto L1f
            com.tencent.tauth.UiError r6 = new com.tencent.tauth.UiError
            java.lang.String r7 = "传入参数有误!"
            r6.<init>(r0, r7, r7)
            r8.onError(r6)
            return r0
        L1f:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "mqqapi://open_connect/common_channel"
            r0.<init>(r1)
            r5.a(r0, r6)
            java.lang.String r1 = "opensdk_ext_data"
            java.lang.String r2 = r7.getString(r1)
            java.lang.String r3 = com.tencent.open.utils.m.k(r2)
            java.lang.String r4 = "exsvr_userinfo"
            r5.a(r0, r4, r3)
            java.lang.String r2 = com.tencent.open.utils.m.k(r2)
            r5.a(r0, r1, r2)
            java.lang.String r1 = "src_id"
            r2 = 0
            int r7 = r7.getInt(r1, r2)
            java.lang.String r7 = java.lang.String.valueOf(r7)
            r5.a(r0, r1, r7)
            android.content.Intent r7 = new android.content.Intent
            r7.<init>()
            java.lang.String r0 = r0.toString()
            android.net.Uri r0 = android.net.Uri.parse(r0)
            r7.setData(r0)
            java.lang.String r0 = "com.tencent.mobileqq"
            r7.setPackage(r0)
            r0 = 1
            java.lang.String r1 = "for_result"
            r7.putExtra(r1, r0)
            java.lang.String r0 = r6.getPackageName()
            java.lang.String r1 = "pkg_name"
            r7.putExtra(r1, r0)
            r0 = 335544320(0x14000000, float:6.4623485E-27)
            r7.setFlags(r0)
            com.tencent.connect.common.UIListenerManager r0 = com.tencent.connect.common.UIListenerManager.getInstance()
            r1 = 10114(0x2782, float:1.4173E-41)
            r0.setListenerWithRequestcode(r1, r8)
            r5.a(r6, r1, r7, r2)
            return r2
    }
}
