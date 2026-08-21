package com.bianfeng.ymnsdk.util;

import com.bianfeng.ymnsdk.utilslib.log.UtilsLogger;

public class Logger {
    public Logger() {
    }

    public static int d(String r0, String r1) {
        return UtilsLogger.d(r0, r1);
    }

    public static int dRich(String r0) {
        return UtilsLogger.dRich(rich(r0));
    }

    public static int e(String r0, String r1) {
        return UtilsLogger.e(r0, r1);
    }

    public static int eRich(String r0) {
        return UtilsLogger.e(rich(r0));
    }

    public static StringBuilder getCacheLog() {
        return UtilsLogger.getCacheLog();
    }

    public static int i(String r0, String r1) {
        return UtilsLogger.i(r0, r1);
    }

    public static int printlog(int r0, String r1, String r2) {
        return UtilsLogger.printlog(r0, r1, r2);
    }

    public static String rich(String r0) {
        return UtilsLogger.rich(r0);
    }

    public static void setLogToCache(boolean r0) {
        UtilsLogger.setLogToCache(r0);
    }

    public static void updateState() {
        UtilsLogger.updateState();
    }

    public static int v(String r0, String r1) {
        return UtilsLogger.v(r0, r1);
    }

    public static int w(String r0, String r1) {
        return UtilsLogger.w(r0, r1);
    }

    public static int wRich(String r0) {
        return UtilsLogger.w(rich(r0));
    }

    public static int d(String r0) {
        return UtilsLogger.d(r0);
    }

    public static int e(String r0) {
        return UtilsLogger.e(r0);
    }

    public static int i(String r0) {
        return UtilsLogger.i(r0);
    }

    public static int v(String r0) {
        return UtilsLogger.v(r0);
    }

    public static int w(String r0) {
        return UtilsLogger.w(r0);
    }
}
