package com.bianfeng.loginlib.utils;

public class UrlManagerUtils {
    private static final java.lang.String H5_LOGIN_URL = "BF_H5SDK_LOGIN_URL";
    private static final java.lang.String login_action = "/channel_games/door";
    private static final java.lang.String mURL = "https://h5.starsshine1.com";
    private static final java.lang.String url_test = "https://h5-test.starsshine1.com";

    public UrlManagerUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean checkDebug() {
            r0 = 0
            com.bianfeng.utilslib.FileUtils r1 = com.bianfeng.utilslib.UtilsSdk.getFileUtils()     // Catch: java.lang.Exception -> L18
            boolean r1 = r1.isSdcardReady()     // Catch: java.lang.Exception -> L18
            if (r1 == 0) goto L18
            com.bianfeng.utilslib.FileUtils r1 = com.bianfeng.utilslib.UtilsSdk.getFileUtils()     // Catch: java.lang.Exception -> L18
            java.lang.String r2 = "bianfeng/sdk/h5_login_debug"
            boolean r1 = r1.isSdcardFileExist(r2)     // Catch: java.lang.Exception -> L18
            if (r1 == 0) goto L18
            r0 = 1
        L18:
            return r0
    }

    public static java.lang.String getUrl() {
            com.bianfeng.utilslib.AppConfigUtils r0 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            java.lang.String r1 = "BF_H5SDK_LOGIN_URL"
            java.lang.String r0 = r0.getMetaDataValue(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L11
            goto L13
        L11:
            java.lang.String r0 = "https://h5.starsshine1.com"
        L13:
            boolean r1 = checkDebug()
            if (r1 == 0) goto L1b
            java.lang.String r0 = "https://h5-test.starsshine1.com"
        L1b:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = "/channel_games/door"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.bianfeng.utilslib.Logger r1 = com.bianfeng.utilslib.Logger.getInstance()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "login-->"
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            r1.i(r2)
            return r0
    }
}
