package com.bianfeng.ymnsdk.util;

import com.bianfeng.ymnsdk.utilslib.log.UtilsLogger;

public class Logger {
    public static int d(String str, String str2) {
        return UtilsLogger.d(str, str2);
    }

    public static int dRich(String str) {
        return UtilsLogger.dRich(rich(str));
    }

    public static int e(String str, String str2) {
        return UtilsLogger.e(str, str2);
    }

    public static int eRich(String str) {
        return UtilsLogger.e(rich(str));
    }

    public static StringBuilder getCacheLog() {
        return UtilsLogger.getCacheLog();
    }

    public static int i(String str, String str2) {
        return UtilsLogger.i(str, str2);
    }

    public static int printlog(int i, String str, String str2) {
        return UtilsLogger.printlog(i, str, str2);
    }

    public static String rich(String str) {
        return UtilsLogger.rich(str);
    }

    public static void setLogToCache(boolean z) {
        UtilsLogger.setLogToCache(z);
    }

    public static void updateState() {
        UtilsLogger.updateState();
    }

    public static int v(String str, String str2) {
        return UtilsLogger.v(str, str2);
    }

    public static int w(String str, String str2) {
        return UtilsLogger.w(str, str2);
    }

    public static int wRich(String str) {
        return UtilsLogger.w(rich(str));
    }

    public static int d(String str) {
        return UtilsLogger.d(str);
    }

    public static int e(String str) {
        return UtilsLogger.e(str);
    }

    public static int i(String str) {
        return UtilsLogger.i(str);
    }

    public static int v(String str) {
        return UtilsLogger.v(str);
    }

    public static int w(String str) {
        return UtilsLogger.w(str);
    }
}
