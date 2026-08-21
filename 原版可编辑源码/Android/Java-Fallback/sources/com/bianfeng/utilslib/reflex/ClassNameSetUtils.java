package com.bianfeng.utilslib.reflex;

public class ClassNameSetUtils {
    private static com.bianfeng.utilslib.reflex.ClassNameSetUtils utils;

    private ClassNameSetUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.utilslib.reflex.ClassNameSetUtils getInstance() {
            com.bianfeng.utilslib.reflex.ClassNameSetUtils r0 = com.bianfeng.utilslib.reflex.ClassNameSetUtils.utils
            if (r0 != 0) goto Lb
            com.bianfeng.utilslib.reflex.ClassNameSetUtils r0 = new com.bianfeng.utilslib.reflex.ClassNameSetUtils
            r0.<init>()
            com.bianfeng.utilslib.reflex.ClassNameSetUtils.utils = r0
        Lb:
            com.bianfeng.utilslib.reflex.ClassNameSetUtils r0 = com.bianfeng.utilslib.reflex.ClassNameSetUtils.utils
            return r0
    }

    public java.lang.String gePayCallback() {
            r1 = this;
            java.lang.String r0 = "com.bianfeng.splitscreenlib.pay.YmnPayCallBack"
            return r0
    }

    public java.lang.String getH5PayCallback() {
            r1 = this;
            java.lang.String r0 = "com.bianfeng.paylib.YmnWebpaysdkCallback"
            return r0
    }

    public java.lang.String getH5PayWebCallback() {
            r1 = this;
            java.lang.String r0 = "com.bianfeng.paylib.YmnWebpayWebsdkCallback"
            return r0
    }

    public java.lang.String getH5Version() {
            r1 = this;
            java.lang.String r0 = "com.bianfeng.splitscreenlib.utils.YmnH5Version"
            return r0
    }

    public java.lang.String getLoginCallback() {
            r1 = this;
            java.lang.String r0 = "com.bianfeng.splitscreenlib.login.YmnLoginCallBack"
            return r0
    }

    public java.lang.String getTestClassName() {
            r1 = this;
            java.lang.String r0 = "com.bianfeng.utilslib_app.TestUtilslibCallback"
            return r0
    }
}
