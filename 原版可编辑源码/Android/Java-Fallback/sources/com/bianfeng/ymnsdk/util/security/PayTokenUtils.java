package com.bianfeng.ymnsdk.util.security;

public class PayTokenUtils {
    public PayTokenUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getPayToken(java.lang.String r9, java.lang.String r10) {
            r8 = this;
            java.lang.String r0 = "."
            java.lang.String r1 = "UTF-8"
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Exception -> L61
            byte[] r3 = r9.getBytes()     // Catch: java.lang.Exception -> L61
            r4 = 11
            byte[] r3 = android.util.Base64.encode(r3, r4)     // Catch: java.lang.Exception -> L61
            r2.<init>(r3, r1)     // Catch: java.lang.Exception -> L61
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Exception -> L61
            byte[] r5 = r10.getBytes()     // Catch: java.lang.Exception -> L61
            byte[] r5 = android.util.Base64.encode(r5, r4)     // Catch: java.lang.Exception -> L61
            r3.<init>(r5, r1)     // Catch: java.lang.Exception -> L61
            com.bianfeng.ymnsdk.util.security.SecurityUtil r5 = com.bianfeng.ymnsdk.util.security.SecurityUtil.getInstance()     // Catch: java.lang.Exception -> L61
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L61
            r6.<init>()     // Catch: java.lang.Exception -> L61
            r6.append(r2)     // Catch: java.lang.Exception -> L61
            r6.append(r0)     // Catch: java.lang.Exception -> L61
            r6.append(r3)     // Catch: java.lang.Exception -> L61
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L61
            java.lang.String r7 = com.bianfeng.ymnsdk.util.YmnAppContext.getSdkAppKey()     // Catch: java.lang.Exception -> L61
            byte[] r5 = r5.sha256_HMAC(r6, r7)     // Catch: java.lang.Exception -> L61
            java.lang.String r6 = new java.lang.String     // Catch: java.lang.Exception -> L61
            byte[] r4 = android.util.Base64.encode(r5, r4)     // Catch: java.lang.Exception -> L61
            r6.<init>(r4, r1)     // Catch: java.lang.Exception -> L61
            r1 = r6
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L61
            r4.<init>()     // Catch: java.lang.Exception -> L61
            r4.append(r2)     // Catch: java.lang.Exception -> L61
            r4.append(r0)     // Catch: java.lang.Exception -> L61
            r4.append(r3)     // Catch: java.lang.Exception -> L61
            r4.append(r0)     // Catch: java.lang.Exception -> L61
            r4.append(r1)     // Catch: java.lang.Exception -> L61
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Exception -> L61
            return r0
        L61:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "token错误"
            r1.append(r2)
            java.lang.String r2 = r0.getMessage()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r1)
            r0 = 0
            return r0
    }
}
