package com.bianfeng.netlibsdk.utils;

public class NetLogger {
    public NetLogger() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void e(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = " NetLogger: "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.e(r2)
            return
    }

    public static void i(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = " NetLogger: "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r2)
            return
    }

    public static void updateState() {
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.updateState()
            return
    }
}
