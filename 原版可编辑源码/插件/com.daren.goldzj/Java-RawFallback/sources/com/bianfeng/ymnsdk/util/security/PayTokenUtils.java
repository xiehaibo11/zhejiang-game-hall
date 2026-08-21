package com.bianfeng.ymnsdk.util.security;

public class PayTokenUtils {
    public PayTokenUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getPayToken(java.lang.String r7, java.lang.String r8) {
            r6 = this;
            java.lang.String r0 = "."
            java.lang.String r1 = "UTF-8"
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Exception -> L60
            byte[] r7 = r7.getBytes()     // Catch: java.lang.Exception -> L60
            r3 = 11
            byte[] r7 = android.util.Base64.encode(r7, r3)     // Catch: java.lang.Exception -> L60
            r2.<init>(r7, r1)     // Catch: java.lang.Exception -> L60
            java.lang.String r7 = new java.lang.String     // Catch: java.lang.Exception -> L60
            byte[] r8 = r8.getBytes()     // Catch: java.lang.Exception -> L60
            byte[] r8 = android.util.Base64.encode(r8, r3)     // Catch: java.lang.Exception -> L60
            r7.<init>(r8, r1)     // Catch: java.lang.Exception -> L60
            com.bianfeng.ymnsdk.util.security.SecurityUtil r8 = com.bianfeng.ymnsdk.util.security.SecurityUtil.getInstance()     // Catch: java.lang.Exception -> L60
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L60
            r4.<init>()     // Catch: java.lang.Exception -> L60
            r4.append(r2)     // Catch: java.lang.Exception -> L60
            r4.append(r0)     // Catch: java.lang.Exception -> L60
            r4.append(r7)     // Catch: java.lang.Exception -> L60
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L60
            java.lang.String r5 = com.bianfeng.ymnsdk.util.YmnAppContext.getSdkAppKey()     // Catch: java.lang.Exception -> L60
            byte[] r8 = r8.sha256_HMAC(r4, r5)     // Catch: java.lang.Exception -> L60
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Exception -> L60
            byte[] r8 = android.util.Base64.encode(r8, r3)     // Catch: java.lang.Exception -> L60
            r4.<init>(r8, r1)     // Catch: java.lang.Exception -> L60
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L60
            r8.<init>()     // Catch: java.lang.Exception -> L60
            r8.append(r2)     // Catch: java.lang.Exception -> L60
            r8.append(r0)     // Catch: java.lang.Exception -> L60
            r8.append(r7)     // Catch: java.lang.Exception -> L60
            r8.append(r0)     // Catch: java.lang.Exception -> L60
            r8.append(r4)     // Catch: java.lang.Exception -> L60
            java.lang.String r7 = r8.toString()     // Catch: java.lang.Exception -> L60
            return r7
        L60:
            r7 = move-exception
            r7.printStackTrace()
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "token错误"
            r8.append(r0)
            java.lang.String r7 = r7.getMessage()
            r8.append(r7)
            java.lang.String r7 = r8.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r7)
            r7 = 0
            return r7
    }
}
