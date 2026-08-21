package com.bianfeng.paylib.utils;

import android.text.TextUtils;
import com.bianfeng.utilslib.Logger;
import com.bianfeng.utilslib.UtilsSdk;

public class YmnURLManager {
    private static final String H5_PAYMENT_URL = "BF_H5SDK_PAYMENT_URL";
    private static final String H5_PAY_URL = "BF_H5SDK_PAY_URL";
    private static final String URL_HOST_PUBLIC_PAYMENT = "https://h5-sdk.starsshine1.com/h5_hall/payment.html";
    private static final String URL_HOST_PUBLIC_PAYMENT_TEST = "https://h5-test.starsshine1.com/payment.html";
    public static String return_url = "https://static.imeete.net/h5_hall/payresult.html";
    private static final String[] url_host_public_pay = {"https://h5.starsshine1.com"};
    public static final String url_host_test_pay = "https://h5-test.starsshine1.com";

    public static String[] getPayUrl() {
        String[] strArr = new String[1];
        String metaDataValue = UtilsSdk.getAppConfig().getMetaDataValue(H5_PAY_URL);
        if (!TextUtils.isEmpty(metaDataValue)) {
            strArr[0] = metaDataValue;
            return strArr;
        }
        if (!checkDebug()) {
            return url_host_public_pay;
        }
        strArr[0] = url_host_test_pay;
        return strArr;
    }

    public static boolean checkDebug() {
        boolean zIsSdcardReady = UtilsSdk.getFileUtils().isSdcardReady();
        boolean zIsSdcardFileExist = UtilsSdk.getFileUtils().isSdcardFileExist("bianfeng/sdk/h5_pay_debug");
        if (zIsSdcardReady && zIsSdcardFileExist) {
            try {
                Logger.getInstance().i("测试域名下的支付");
                return true;
            } catch (Exception unused) {
            }
        }
        return false;
    }

    public static String getPaymentUrl() {
        String metaDataValue = UtilsSdk.getAppConfig().getMetaDataValue(H5_PAYMENT_URL);
        if (!TextUtils.isEmpty(metaDataValue)) {
            return metaDataValue + "?timestamp=" + UtilsSdk.getSystemUtil().getSystemCurrentTime();
        }
        if (checkDebug()) {
            return "https://h5-test.starsshine1.com/payment.html?timestamp=" + UtilsSdk.getSystemUtil().getSystemCurrentTime();
        }
        return URL_HOST_PUBLIC_PAYMENT + "?timestamp=" + UtilsSdk.getSystemUtil().getSystemCurrentTime();
    }
}
