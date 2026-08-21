package com.bianfeng.paylib.utils;

import com.bianfeng.utilslib.UtilsSdk;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class PayExtMapUtils {
    private static String privateKey;
    private static String sub;
    private static String uid;

    public static Map<String, String> updataOrder(Map<String, String> map) {
        privateKey = UtilsSdk.getAppConfig().getWebPayPrivateKey();
        uid = map.get("role_name");
        sub = map.get("role_id");
        return map;
    }

    public static String getPrivateKey() {
        return privateKey;
    }

    public static String getSub() {
        return sub;
    }

    public static String getUid() {
        return uid;
    }
}
