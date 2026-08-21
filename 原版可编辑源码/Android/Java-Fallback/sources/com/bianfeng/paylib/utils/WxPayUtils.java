package com.bianfeng.paylib.utils;

public class WxPayUtils {
    public WxPayUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void pay(android.content.Context r1, java.lang.String r2) {
            com.bianfeng.thridlibrary.GsonUtils r1 = com.bianfeng.thridlibrary.ThridSdk.getGson()
            java.lang.Class<com.bianfeng.paylib.entity.WxPayEntity> r0 = com.bianfeng.paylib.entity.WxPayEntity.class
            java.lang.Object r1 = r1.fromJson(r2, r0)
            com.bianfeng.paylib.entity.WxPayEntity r1 = (com.bianfeng.paylib.entity.WxPayEntity) r1
            return
    }
}
