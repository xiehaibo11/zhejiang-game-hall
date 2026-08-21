package com.tencent.connect;

public class a {
    public static boolean a(java.lang.String r2, com.tencent.tauth.IUiListener r3) {
            java.lang.String r0 = "用户未授权，暂时无法使用QQ登录及分享等功能"
            r1 = -6
            boolean r2 = a(r2, r3, r1, r0, r0)
            return r2
    }

    public static boolean a(java.lang.String r1, com.tencent.tauth.IUiListener r2, int r3, java.lang.String r4, java.lang.String r5) {
            boolean r0 = com.tencent.tauth.Tencent.isPermissionNotGranted()
            if (r0 == 0) goto L17
            java.lang.String r0 = "permission not granted"
            com.tencent.open.log.SLog.i(r1, r0)
            if (r2 == 0) goto L15
            com.tencent.tauth.UiError r1 = new com.tencent.tauth.UiError
            r1.<init>(r3, r4, r5)
            r2.onError(r1)
        L15:
            r1 = 1
            return r1
        L17:
            r1 = 0
            return r1
    }
}
