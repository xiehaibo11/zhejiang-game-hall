package com.alipay.sdk.executor;

public class AlipayRsa {
    public static final int RESULT_CHECK_SIGN_FAILED = 1;
    public static final int RESULT_CHECK_SIGN_SUCCEED = 2;
    public static final int RESULT_INVALID_PARAM = 0;

    public AlipayRsa() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int checkSign(java.lang.String r0) {
            r0 = 2
            return r0
    }

    public static boolean doCheck(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            java.lang.String r0 = "RSA"
            java.security.KeyFactory r0 = java.security.KeyFactory.getInstance(r0)     // Catch: java.lang.Exception -> L2e
            byte[] r4 = com.alipay.sdk.util.Base64.decode(r4)     // Catch: java.lang.Exception -> L2e
            java.security.spec.X509EncodedKeySpec r1 = new java.security.spec.X509EncodedKeySpec     // Catch: java.lang.Exception -> L2e
            r1.<init>(r4)     // Catch: java.lang.Exception -> L2e
            java.security.PublicKey r4 = r0.generatePublic(r1)     // Catch: java.lang.Exception -> L2e
            java.lang.String r0 = "SHA1WithRSA"
            java.security.Signature r0 = java.security.Signature.getInstance(r0)     // Catch: java.lang.Exception -> L2e
            r0.initVerify(r4)     // Catch: java.lang.Exception -> L2e
            java.lang.String r4 = "utf-8"
            byte[] r2 = r2.getBytes(r4)     // Catch: java.lang.Exception -> L2e
            r0.update(r2)     // Catch: java.lang.Exception -> L2e
            byte[] r2 = com.alipay.sdk.util.Base64.decode(r3)     // Catch: java.lang.Exception -> L2e
            boolean r2 = r0.verify(r2)     // Catch: java.lang.Exception -> L2e
            return r2
        L2e:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
            return r2
    }

    public static org.json.JSONObject string2JSON(java.lang.String r5, java.lang.String r6) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String[] r5 = r5.split(r6)     // Catch: java.lang.Exception -> L2c
            r6 = 0
            r1 = 0
        Lb:
            int r2 = r5.length     // Catch: java.lang.Exception -> L2c
            if (r1 >= r2) goto L30
            r2 = r5[r1]     // Catch: java.lang.Exception -> L2c
            java.lang.String r3 = "="
            java.lang.String[] r2 = r2.split(r3)     // Catch: java.lang.Exception -> L2c
            r3 = r2[r6]     // Catch: java.lang.Exception -> L2c
            r4 = r5[r1]     // Catch: java.lang.Exception -> L2c
            r2 = r2[r6]     // Catch: java.lang.Exception -> L2c
            int r2 = r2.length()     // Catch: java.lang.Exception -> L2c
            int r2 = r2 + 1
            java.lang.String r2 = r4.substring(r2)     // Catch: java.lang.Exception -> L2c
            r0.put(r3, r2)     // Catch: java.lang.Exception -> L2c
            int r1 = r1 + 1
            goto Lb
        L2c:
            r5 = move-exception
            r5.printStackTrace()
        L30:
            return r0
    }
}
