package com.bianfeng.ymnsdk.ymndatalib.utils;

public class YmnDatalibLogger {
    public YmnDatalibLogger() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void i(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "YmnDatalib-->"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r2)
            return
    }
}
