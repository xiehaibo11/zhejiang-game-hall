package com.bianfeng.paylib.utils;

public class YmnURLManager {
    private static final java.lang.String H5_PAYMENT_URL = "BF_H5SDK_PAYMENT_URL";
    private static final java.lang.String H5_PAY_URL = "BF_H5SDK_PAY_URL";
    private static final java.lang.String URL_HOST_PUBLIC_PAYMENT = "https://h5-sdk.starsshine1.com/h5_hall/payment.html";
    private static final java.lang.String URL_HOST_PUBLIC_PAYMENT_TEST = "https://h5-test.starsshine1.com/payment.html";
    public static java.lang.String return_url = "https://static.imeete.net/h5_hall/payresult.html";
    private static final java.lang.String[] url_host_public_pay = null;
    public static final java.lang.String url_host_test_pay = "https://h5-test.starsshine1.com";

    static {
            r0 = 1
            java.lang.String[] r0 = new java.lang.String[r0]
            r1 = 0
            java.lang.String r2 = "https://h5.starsshine1.com"
            r0[r1] = r2
            com.bianfeng.paylib.utils.YmnURLManager.url_host_public_pay = r0
            return
    }

    public YmnURLManager() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean checkDebug() {
            com.bianfeng.utilslib.FileUtils r0 = com.bianfeng.utilslib.UtilsSdk.getFileUtils()
            boolean r0 = r0.isSdcardReady()
            com.bianfeng.utilslib.FileUtils r1 = com.bianfeng.utilslib.UtilsSdk.getFileUtils()
            java.lang.String r2 = "bianfeng/sdk/h5_pay_debug"
            boolean r1 = r1.isSdcardFileExist(r2)
            r2 = 0
            if (r0 == 0) goto L22
            if (r1 == 0) goto L22
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.Logger.getInstance()     // Catch: java.lang.Exception -> L22
            java.lang.String r1 = "测试域名下的支付"
            r0.i(r1)     // Catch: java.lang.Exception -> L22
            r0 = 1
            return r0
        L22:
            return r2
    }

    public static java.lang.String[] getPayUrl() {
            r0 = 1
            java.lang.String[] r0 = new java.lang.String[r0]
            com.bianfeng.utilslib.AppConfigUtils r1 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            java.lang.String r2 = "BF_H5SDK_PAY_URL"
            java.lang.String r1 = r1.getMetaDataValue(r2)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            r3 = 0
            if (r2 != 0) goto L17
            r0[r3] = r1
            return r0
        L17:
            boolean r1 = checkDebug()
            if (r1 == 0) goto L22
            java.lang.String r1 = "https://h5-test.starsshine1.com"
            r0[r3] = r1
            return r0
        L22:
            java.lang.String[] r0 = com.bianfeng.paylib.utils.YmnURLManager.url_host_public_pay
            return r0
    }

    public static java.lang.String getPaymentUrl() {
            com.bianfeng.utilslib.AppConfigUtils r0 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            java.lang.String r1 = "BF_H5SDK_PAYMENT_URL"
            java.lang.String r0 = r0.getMetaDataValue(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r2 = "?timestamp="
            if (r1 != 0) goto L2d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            r1.append(r2)
            com.bianfeng.utilslib.SystemUtil r0 = com.bianfeng.utilslib.UtilsSdk.getSystemUtil()
            java.lang.String r0 = r0.getSystemCurrentTime()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
        L2d:
            boolean r0 = checkDebug()
            if (r0 == 0) goto L4d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "https://h5-test.starsshine1.com/payment.html?timestamp="
            r0.append(r1)
            com.bianfeng.utilslib.SystemUtil r1 = com.bianfeng.utilslib.UtilsSdk.getSystemUtil()
            java.lang.String r1 = r1.getSystemCurrentTime()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
        L4d:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "https://h5-sdk.starsshine1.com/h5_hall/payment.html"
            r0.append(r1)
            r0.append(r2)
            com.bianfeng.utilslib.SystemUtil r1 = com.bianfeng.utilslib.UtilsSdk.getSystemUtil()
            java.lang.String r1 = r1.getSystemCurrentTime()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
