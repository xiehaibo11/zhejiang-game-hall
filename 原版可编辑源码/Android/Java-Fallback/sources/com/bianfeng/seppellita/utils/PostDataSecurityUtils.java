package com.bianfeng.seppellita.utils;

public class PostDataSecurityUtils {
    public PostDataSecurityUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String rncode(java.lang.String r1, java.lang.String r2) {
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L36
            r2.<init>()     // Catch: java.lang.Exception -> L36
            java.lang.String r0 = "压缩之前数据--->"
            r2.append(r0)     // Catch: java.lang.Exception -> L36
            byte[] r0 = r1.getBytes()     // Catch: java.lang.Exception -> L36
            int r0 = r0.length     // Catch: java.lang.Exception -> L36
            r2.append(r0)     // Catch: java.lang.Exception -> L36
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L36
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r2)     // Catch: java.lang.Exception -> L36
            java.lang.String r1 = com.bianfeng.seppellita.utils.GZIPUtils.compress(r1)     // Catch: java.lang.Exception -> L36
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L36
            r2.<init>()     // Catch: java.lang.Exception -> L36
            java.lang.String r0 = "压缩之前数据--后->"
            r2.append(r0)     // Catch: java.lang.Exception -> L36
            int r0 = r1.length()     // Catch: java.lang.Exception -> L36
            r2.append(r0)     // Catch: java.lang.Exception -> L36
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L36
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r2)     // Catch: java.lang.Exception -> L36
            return r1
        L36:
            r1 = move-exception
            r1.printStackTrace()
            java.lang.String r1 = ""
            return r1
    }
}
