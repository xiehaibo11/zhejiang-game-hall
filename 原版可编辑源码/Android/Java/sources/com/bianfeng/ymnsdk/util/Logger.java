package com.bianfeng.ymnsdk.util;

import com.bianfeng.ymnsdk.utilslib.log.UtilsLogger;

public class Logger {
    public static void updateState() {
        UtilsLogger.updateState();
    }

    public static void setLogToCache(boolean b) {
        UtilsLogger.setLogToCache(b);
    }

    public static StringBuilder getCacheLog() {
        return UtilsLogger.getCacheLog();
    }

    public static int v(String tag, String msg) {
        return UtilsLogger.v(tag, msg);
    }

    public static int v(String msg) {
        return UtilsLogger.v(msg);
    }

    public static int d(String tag, String msg) {
        return UtilsLogger.d(tag, msg);
    }

    public static int d(String msg) {
        return UtilsLogger.d(msg);
    }

    public static int dRich(String msg) {
        return UtilsLogger.dRich(rich(msg));
    }

    public static int i(String tag, String msg) {
        return UtilsLogger.i(tag, msg);
    }

    public static int i(String msg) {
        return UtilsLogger.i(msg);
    }

    public static int w(String tag, String msg) {
        return UtilsLogger.w(tag, msg);
    }

    public static int w(String msg) {
        return UtilsLogger.w(msg);
    }

    public static int wRich(String msg) {
        return UtilsLogger.w(rich(msg));
    }

    public static int e(String tag, String msg) {
        return UtilsLogger.e(tag, msg);
    }

    public static int e(String msg) {
        return UtilsLogger.e(msg);
    }

    public static int eRich(String msg) {
        return UtilsLogger.e(rich(msg));
    }

    public static int printlog(int priority, String tag, String msg) {
        return UtilsLogger.printlog(priority, tag, msg);
    }

    public static String rich(String msg) {
        return UtilsLogger.rich(msg);
    }
}
