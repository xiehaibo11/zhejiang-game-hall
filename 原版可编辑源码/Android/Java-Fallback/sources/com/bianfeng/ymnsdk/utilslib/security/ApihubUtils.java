package com.bianfeng.ymnsdk.utilslib.security;

public class ApihubUtils {
    public ApihubUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String getRfc339() {
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> Ld
            java.lang.Long r0 = java.lang.Long.valueOf(r0)     // Catch: java.lang.Exception -> Ld
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.SystemUtils.getRFC3339(r0)     // Catch: java.lang.Exception -> Ld
            return r0
        Ld:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r1 = ""
            return r1
    }

    public static java.lang.String getSign(java.lang.String r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12, byte[] r13) {
            java.lang.String r0 = "Shield"
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.security.SHA256Utils.getSHA256(r13)     // Catch: java.lang.Exception -> L7b
            java.lang.String r2 = getRfc339()     // Catch: java.lang.Exception -> L7b
            java.lang.String r3 = com.bianfeng.ymnsdk.utilslib.SystemUtils.createTransactionId()     // Catch: java.lang.Exception -> L7b
            java.lang.StringBuffer r4 = new java.lang.StringBuffer     // Catch: java.lang.Exception -> L7b
            r4.<init>(r0)     // Catch: java.lang.Exception -> L7b
            java.lang.String r5 = "\n"
            r4.append(r5)     // Catch: java.lang.Exception -> L7b
            r4.append(r10)     // Catch: java.lang.Exception -> L7b
            r4.append(r5)     // Catch: java.lang.Exception -> L7b
            r4.append(r2)     // Catch: java.lang.Exception -> L7b
            r4.append(r5)     // Catch: java.lang.Exception -> L7b
            r4.append(r3)     // Catch: java.lang.Exception -> L7b
            r4.append(r5)     // Catch: java.lang.Exception -> L7b
            r4.append(r8)     // Catch: java.lang.Exception -> L7b
            r4.append(r5)     // Catch: java.lang.Exception -> L7b
            r4.append(r12)     // Catch: java.lang.Exception -> L7b
            r4.append(r5)     // Catch: java.lang.Exception -> L7b
            r4.append(r9)     // Catch: java.lang.Exception -> L7b
            r4.append(r5)     // Catch: java.lang.Exception -> L7b
            r4.append(r1)     // Catch: java.lang.Exception -> L7b
            java.lang.String r6 = r4.toString()     // Catch: java.lang.Exception -> L7b
            byte[] r6 = r6.getBytes()     // Catch: java.lang.Exception -> L7b
            java.lang.String r6 = com.bianfeng.ymnsdk.utilslib.security.SHA256Utils.sha256_HMAC(r6, r11)     // Catch: java.lang.Exception -> L7b
            java.lang.StringBuffer r7 = new java.lang.StringBuffer     // Catch: java.lang.Exception -> L7b
            r7.<init>(r0)     // Catch: java.lang.Exception -> L7b
            r0 = r7
            java.lang.String r7 = " "
            r0.append(r7)     // Catch: java.lang.Exception -> L7b
            java.lang.String r7 = "RequestKey="
            r0.append(r7)     // Catch: java.lang.Exception -> L7b
            r0.append(r10)     // Catch: java.lang.Exception -> L7b
            java.lang.String r7 = ", RequestTime="
            r0.append(r7)     // Catch: java.lang.Exception -> L7b
            r0.append(r2)     // Catch: java.lang.Exception -> L7b
            java.lang.String r7 = ", Nonce="
            r0.append(r7)     // Catch: java.lang.Exception -> L7b
            r0.append(r3)     // Catch: java.lang.Exception -> L7b
            java.lang.String r7 = ", Signature="
            r0.append(r7)     // Catch: java.lang.Exception -> L7b
            r0.append(r6)     // Catch: java.lang.Exception -> L7b
            java.lang.String r7 = r0.toString()     // Catch: java.lang.Exception -> L7b
            return r7
        L7b:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = ""
            return r0
    }
}
