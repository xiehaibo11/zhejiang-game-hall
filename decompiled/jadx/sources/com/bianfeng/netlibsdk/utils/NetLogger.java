package com.bianfeng.netlibsdk.utils;

import com.bianfeng.ymnsdk.utilslib.log.UtilsLogger;

/* JADX INFO: loaded from: classes.dex */
public class NetLogger {
    public static void e(String str) {
        UtilsLogger.e(" NetLogger: " + str);
    }

    public static void i(String str) {
        UtilsLogger.i(" NetLogger: " + str);
    }

    public static void updateState() {
        UtilsLogger.updateState();
    }
}
