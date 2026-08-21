package com.bianfeng.seppellita.utils;

import com.bianfeng.ymnsdk.utilslib.log.UtilsLogger;

public class SeppellitaLogger {
    public static void i(String str) {
        UtilsLogger.i("seppellita---->" + str);
    }

    public static void e(String str) {
        UtilsLogger.e("seppellita---->" + str);
    }
}
