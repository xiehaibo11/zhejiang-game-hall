package com.bianfeng.seppellita.utils;

import com.bianfeng.ymnsdk.utilslib.security.Md5Utils;

/* JADX INFO: loaded from: classes.dex */
public class AutUtils {
    public static String getSign(String str, String str2, String str3) {
        return Md5Utils.md5(str + "&" + str2 + "&" + str3);
    }
}
