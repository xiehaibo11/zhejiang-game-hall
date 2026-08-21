package com.bianfeng.h5library.utils;

import com.bianfeng.ymnsdk.utilslib.UtilsSdk;

/* JADX INFO: loaded from: classes.dex */
public class H5libGsonUtils {
    public static String toJson(Object obj) {
        return UtilsSdk.getGsonUtils().toJson(obj);
    }
}
