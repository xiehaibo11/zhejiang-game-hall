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
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String getSign(java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, byte[] r10) {
            java.lang.String r0 = "Shield"
            java.lang.String r10 = com.bianfeng.ymnsdk.utilslib.security.SHA256Utils.getSHA256(r10)     // Catch: java.lang.Exception -> L7a
            java.lang.String r1 = getRfc339()     // Catch: java.lang.Exception -> L7a
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.SystemUtils.createTransactionId()     // Catch: java.lang.Exception -> L7a
            java.lang.StringBuffer r3 = new java.lang.StringBuffer     // Catch: java.lang.Exception -> L7a
            r3.<init>(r0)     // Catch: java.lang.Exception -> L7a
            java.lang.String r4 = "\n"
            r3.append(r4)     // Catch: java.lang.Exception -> L7a
            r3.append(r7)     // Catch: java.lang.Exception -> L7a
            r3.append(r4)     // Catch: java.lang.Exception -> L7a
            r3.append(r1)     // Catch: java.lang.Exception -> L7a
            r3.append(r4)     // Catch: java.lang.Exception -> L7a
            r3.append(r2)     // Catch: java.lang.Exception -> L7a
            r3.append(r4)     // Catch: java.lang.Exception -> L7a
            r3.append(r5)     // Catch: java.lang.Exception -> L7a
            r3.append(r4)     // Catch: java.lang.Exception -> L7a
            r3.append(r9)     // Catch: java.lang.Exception -> L7a
            r3.append(r4)     // Catch: java.lang.Exception -> L7a
            r3.append(r6)     // Catch: java.lang.Exception -> L7a
            r3.append(r4)     // Catch: java.lang.Exception -> L7a
            r3.append(r10)     // Catch: java.lang.Exception -> L7a
            java.lang.String r5 = r3.toString()     // Catch: java.lang.Exception -> L7a
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Exception -> L7a
            java.lang.String r5 = com.bianfeng.ymnsdk.utilslib.security.SHA256Utils.sha256_HMAC(r5, r8)     // Catch: java.lang.Exception -> L7a
            java.lang.StringBuffer r6 = new java.lang.StringBuffer     // Catch: java.lang.Exception -> L7a
            r6.<init>(r0)     // Catch: java.lang.Exception -> L7a
            java.lang.String r8 = " "
            r6.append(r8)     // Catch: java.lang.Exception -> L7a
            java.lang.String r8 = "RequestKey="
            r6.append(r8)     // Catch: java.lang.Exception -> L7a
            r6.append(r7)     // Catch: java.lang.Exception -> L7a
            java.lang.String r7 = ", RequestTime="
            r6.append(r7)     // Catch: java.lang.Exception -> L7a
            r6.append(r1)     // Catch: java.lang.Exception -> L7a
            java.lang.String r7 = ", Nonce="
            r6.append(r7)     // Catch: java.lang.Exception -> L7a
            r6.append(r2)     // Catch: java.lang.Exception -> L7a
            java.lang.String r7 = ", Signature="
            r6.append(r7)     // Catch: java.lang.Exception -> L7a
            r6.append(r5)     // Catch: java.lang.Exception -> L7a
            java.lang.String r5 = r6.toString()     // Catch: java.lang.Exception -> L7a
            return r5
        L7a:
            r5 = move-exception
            r5.printStackTrace()
            java.lang.String r5 = ""
            return r5
    }
}
