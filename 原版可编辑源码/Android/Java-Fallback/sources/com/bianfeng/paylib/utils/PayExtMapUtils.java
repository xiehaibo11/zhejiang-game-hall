package com.bianfeng.paylib.utils;

public class PayExtMapUtils {
    private static java.lang.String privateKey;
    private static java.lang.String sub;
    private static java.lang.String uid;

    public PayExtMapUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getPrivateKey() {
            java.lang.String r0 = com.bianfeng.paylib.utils.PayExtMapUtils.privateKey
            return r0
    }

    public static java.lang.String getSub() {
            java.lang.String r0 = com.bianfeng.paylib.utils.PayExtMapUtils.sub
            return r0
    }

    public static java.lang.String getUid() {
            java.lang.String r0 = com.bianfeng.paylib.utils.PayExtMapUtils.uid
            return r0
    }

    public static java.util.Map<java.lang.String, java.lang.String> updataOrder(java.util.Map<java.lang.String, java.lang.String> r1) {
            com.bianfeng.utilslib.AppConfigUtils r0 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            java.lang.String r0 = r0.getWebPayPrivateKey()
            com.bianfeng.paylib.utils.PayExtMapUtils.privateKey = r0
            java.lang.String r0 = "role_name"
            java.lang.Object r0 = r1.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            com.bianfeng.paylib.utils.PayExtMapUtils.uid = r0
            java.lang.String r0 = "role_id"
            java.lang.Object r0 = r1.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            com.bianfeng.paylib.utils.PayExtMapUtils.sub = r0
            return r1
    }
}
