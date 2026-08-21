package com.bianfeng.paylib.utils;

public class AliPayUtils {


    public AliPayUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void pay(android.app.Activity r2, java.lang.String r3) {
            com.bianfeng.thridlibrary.GsonUtils r0 = com.bianfeng.thridlibrary.ThridSdk.getGson()
            java.lang.Class<com.bianfeng.paylib.entity.AliPayEntity> r1 = com.bianfeng.paylib.entity.AliPayEntity.class
            java.lang.Object r3 = r0.fromJson(r3, r1)
            com.bianfeng.paylib.entity.AliPayEntity r3 = (com.bianfeng.paylib.entity.AliPayEntity) r3
            java.lang.String r0 = new java.lang.String
            java.lang.String r3 = r3.getToken()
            byte[] r3 = com.bianfeng.paylib.alipaysdk.util.Base64.decode(r3)
            r0.<init>(r3)
            com.bianfeng.paylib.utils.AliPayUtils$1 r3 = new com.bianfeng.paylib.utils.AliPayUtils$1
            r3.<init>()
            com.bianfeng.paylib.alipaysdk.PaySdk.pay(r2, r0, r3)
            return
    }
}
