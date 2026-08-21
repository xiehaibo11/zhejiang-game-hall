package com.bianfeng.utilslib.reflex;

public class ClassNameSetUtils {
    private static ClassNameSetUtils utils;

    public String gePayCallback() {
        return "com.bianfeng.splitscreenlib.pay.YmnPayCallBack";
    }

    public String getH5PayCallback() {
        return "com.bianfeng.paylib.YmnWebpaysdkCallback";
    }

    public String getH5PayWebCallback() {
        return "com.bianfeng.paylib.YmnWebpayWebsdkCallback";
    }

    public String getH5Version() {
        return "com.bianfeng.splitscreenlib.utils.YmnH5Version";
    }

    public String getLoginCallback() {
        return "com.bianfeng.splitscreenlib.login.YmnLoginCallBack";
    }

    public String getTestClassName() {
        return "com.bianfeng.utilslib_app.TestUtilslibCallback";
    }

    private ClassNameSetUtils() {
    }

    public static ClassNameSetUtils getInstance() {
        if (utils == null) {
            utils = new ClassNameSetUtils();
        }
        return utils;
    }
}
