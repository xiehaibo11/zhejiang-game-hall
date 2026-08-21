package com.bianfeng.addpermission.common;

public class PolicyConstantsUtils {
    private static java.lang.String NOT_NEED_SPLASH = "ADD_PERMISSION_NOT_NEED_SPLASH";
    private static java.lang.String assetsHtml = "file:android_asset/";
    private static java.lang.String contentTv = "ANDPERMISSION_POLICY_CONTENT";
    private static java.lang.String game = "ANDPERMISSION_POLICY_GAME_URL";
    public static java.lang.String gameFlag = "gameFlag";
    private static java.lang.String user = "ANDPERMISSION_POLICY_USER_URL";
    public static java.lang.String userFlag = "userFlag";

    static {
            return
    }

    public PolicyConstantsUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getContentTv(android.content.Context r1) {
            java.lang.String r0 = com.bianfeng.addpermission.common.PolicyConstantsUtils.contentTv
            java.lang.String r1 = com.bianfeng.addpermission.common.AddPermissionToolUtils.getMetaData(r1, r0)
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto Le
            java.lang.String r1 = ""
        Le:
            return r1
    }

    public static java.lang.String getDialogPolicyTitle(java.lang.String r1) {
            java.lang.String r0 = com.bianfeng.addpermission.common.PolicyConstantsUtils.userFlag
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto Lb
            java.lang.String r1 = "服务协议"
            return r1
        Lb:
            java.lang.String r0 = com.bianfeng.addpermission.common.PolicyConstantsUtils.gameFlag
            boolean r1 = r0.equalsIgnoreCase(r1)
            if (r1 == 0) goto L16
            java.lang.String r1 = "隐私政策"
            return r1
        L16:
            java.lang.String r1 = ""
            return r1
    }

    private static java.lang.String getGameUrl(android.content.Context r2) {
            java.lang.String r0 = com.bianfeng.addpermission.common.PolicyConstantsUtils.game
            java.lang.String r2 = com.bianfeng.addpermission.common.AddPermissionToolUtils.getMetaData(r2, r0)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Lf
            java.lang.String r2 = ""
            return r2
        Lf:
            java.lang.String r0 = "https"
            boolean r0 = r2.contains(r0)
            if (r0 != 0) goto L31
            java.lang.String r0 = "http"
            boolean r0 = r2.contains(r0)
            if (r0 == 0) goto L20
            goto L31
        L20:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.bianfeng.addpermission.common.PolicyConstantsUtils.assetsHtml
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
        L31:
            return r2
    }

    public static java.lang.String getUrl(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = com.bianfeng.addpermission.common.PolicyConstantsUtils.userFlag
            boolean r0 = r0.equalsIgnoreCase(r2)
            if (r0 == 0) goto Ld
            java.lang.String r1 = getUserUrl(r1)
            return r1
        Ld:
            java.lang.String r0 = com.bianfeng.addpermission.common.PolicyConstantsUtils.gameFlag
            boolean r2 = r0.equalsIgnoreCase(r2)
            if (r2 == 0) goto L1a
            java.lang.String r1 = getGameUrl(r1)
            return r1
        L1a:
            java.lang.String r1 = ""
            return r1
    }

    private static java.lang.String getUserUrl(android.content.Context r2) {
            java.lang.String r0 = com.bianfeng.addpermission.common.PolicyConstantsUtils.user
            java.lang.String r2 = com.bianfeng.addpermission.common.AddPermissionToolUtils.getMetaData(r2, r0)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Lf
            java.lang.String r2 = ""
            return r2
        Lf:
            java.lang.String r0 = "https"
            boolean r0 = r2.contains(r0)
            if (r0 != 0) goto L31
            java.lang.String r0 = "http"
            boolean r0 = r2.contains(r0)
            if (r0 == 0) goto L20
            goto L31
        L20:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.bianfeng.addpermission.common.PolicyConstantsUtils.assetsHtml
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
        L31:
            return r2
    }

    public static boolean isNotNeedSplash(android.content.Context r2) {
            java.lang.String r0 = com.bianfeng.addpermission.common.PolicyConstantsUtils.NOT_NEED_SPLASH
            java.lang.String r2 = com.bianfeng.addpermission.common.AddPermissionToolUtils.getMetaData(r2, r0)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 == 0) goto Le
            return r1
        Le:
            java.lang.String r0 = "YES"
            boolean r2 = r0.equalsIgnoreCase(r2)
            if (r2 == 0) goto L18
            r2 = 1
            return r2
        L18:
            return r1
    }
}
