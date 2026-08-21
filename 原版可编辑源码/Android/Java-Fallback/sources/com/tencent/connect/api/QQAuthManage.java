package com.tencent.connect.api;

public class QQAuthManage extends com.tencent.connect.common.BaseApi {


    public static class Resp extends com.tencent.open.apireq.BaseResp {
        public Resp() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public QQAuthManage(com.tencent.connect.auth.c r1, com.tencent.connect.auth.QQToken r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    private int a(android.app.Activity r3) {
            r2 = this;
            boolean r0 = com.tencent.open.utils.k.c(r3)
            java.lang.String r1 = "QQAuthManage"
            if (r0 != 0) goto L10
            java.lang.String r3 = "gotoManagePage: not installed all qq"
            com.tencent.open.log.SLog.i(r1, r3)
            r3 = -1000(0xfffffffffffffc18, float:NaN)
            return r3
        L10:
            boolean r0 = com.tencent.open.utils.k.b(r3)
            if (r0 != 0) goto L1e
            java.lang.String r3 = "gotoManagePage: only support mobile qq"
            com.tencent.open.log.SLog.i(r1, r3)
            r3 = -1002(0xfffffffffffffc16, float:NaN)
            return r3
        L1e:
            java.lang.String r0 = "8.6.0"
            int r3 = com.tencent.open.utils.k.c(r3, r0)
            if (r3 >= 0) goto L2e
            java.lang.String r3 = "gotoManagePage: low version"
            com.tencent.open.log.SLog.i(r1, r3)
            r3 = -1001(0xfffffffffffffc17, float:NaN)
            return r3
        L2e:
            r3 = 0
            return r3
    }

    private void a(android.app.Activity r4, com.tencent.open.apireq.IApiCallback r5) {
            r3 = this;
            java.lang.String r0 = "QQAuthManage"
            java.lang.String r1 = "doGotoMangePage"
            com.tencent.open.log.SLog.i(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "mqqapi://opensdk/open_auth_manage"
            r0.<init>(r1)
            r3.a(r0, r4)
            android.content.Intent r1 = new android.content.Intent
            r1.<init>()
            java.lang.String r0 = r0.toString()
            android.net.Uri r0 = android.net.Uri.parse(r0)
            r1.setData(r0)
            java.lang.String r0 = r4.getPackageName()
            java.lang.String r2 = "pkg_name"
            r1.putExtra(r2, r0)
            java.lang.String r0 = "com.tencent.mobileqq"
            r1.setPackage(r0)
            r0 = 335544320(0x14000000, float:6.4623485E-27)
            r1.setFlags(r0)
            r4.startActivity(r1)
            com.tencent.connect.api.QQAuthManage$Resp r4 = new com.tencent.connect.api.QQAuthManage$Resp
            r4.<init>()
            r5.onResp(r4)
            return
    }

    static void a(com.tencent.connect.api.QQAuthManage r0, android.app.Activity r1, com.tencent.open.apireq.IApiCallback r2) {
            r0.a(r1, r2)
            return
    }

    public void gotoManagePage(android.app.Activity r4, com.tencent.open.apireq.IApiCallback r5) {
            r3 = this;
            java.lang.String r0 = "QQAuthManage"
            java.lang.String r1 = "gotoManagePage"
            com.tencent.open.log.SLog.i(r0, r1)
            com.tencent.connect.api.QQAuthManage$Resp r1 = new com.tencent.connect.api.QQAuthManage$Resp
            r1.<init>()
            r2 = 0
            boolean r2 = com.tencent.connect.a.a(r0, r2)
            if (r2 == 0) goto L1c
            r4 = -1003(0xfffffffffffffc15, float:NaN)
            r1.setCode(r4)
            r5.onResp(r1)
            return
        L1c:
            int r2 = r3.a(r4)
            if (r2 == 0) goto L29
            r1.setCode(r2)
            r5.onResp(r1)
            return
        L29:
            com.tencent.connect.auth.QQToken r2 = r3.c
            boolean r2 = r2.isSessionValid()
            if (r2 == 0) goto L45
            com.tencent.connect.auth.QQToken r2 = r3.c
            java.lang.String r2 = r2.getOpenId()
            if (r2 != 0) goto L3a
            goto L45
        L3a:
            com.tencent.connect.auth.c r0 = r3.b
            com.tencent.connect.api.QQAuthManage$1 r2 = new com.tencent.connect.api.QQAuthManage$1
            r2.<init>(r3, r4, r5, r1)
            r0.a(r2)
            return
        L45:
            java.lang.String r4 = "gotoManagePage: not login"
            com.tencent.open.log.SLog.i(r0, r4)
            r4 = -2001(0xfffffffffffff82f, float:NaN)
            r1.setCode(r4)
            r5.onResp(r1)
            return
    }
}
