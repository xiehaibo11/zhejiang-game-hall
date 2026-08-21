package com.bianfeng.amap.common;

public class AmapLogger {
    public AmapLogger() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void e(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Amap-->"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r2)
            return
    }

    public static void i(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Amap-->"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r2)
            return
    }
}
