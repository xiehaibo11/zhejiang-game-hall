package com.bianfeng.seppellita.utils;

public class AutUtils {
    public AutUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getSign(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = "&"
            r0.append(r1)
            r0.append(r2)
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = r0.toString()
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.security.Md5Utils.md5(r1)
            return r1
    }
}
