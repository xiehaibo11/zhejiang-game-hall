package com.mbridge.msdk.foundation.tools;

public final class a {
    private static byte[] a;
    private static byte[] b;

    public static class a extends java.security.Provider {
        public a() {
                r4 = this;
                java.lang.String r0 = "Crypto"
                r1 = 4607182418800017408(0x3ff0000000000000, double:1.0)
                java.lang.String r3 = "HARMONY (SHA1 digest; SecureRandom; SHA1withDSA signature)"
                r4.<init>(r0, r1, r3)
                java.lang.String r0 = "SecureRandom.SHA1PRNG"
                java.lang.String r1 = "org.apache.harmony.security.provider.crypto.SHA1PRNG_SecureRandomImpl"
                r4.put(r0, r1)
                java.lang.String r0 = "SecureRandom.SHA1PRNG ImplementedIn"
                java.lang.String r1 = "Software"
                r4.put(r0, r1)
                return
        }
    }

    static {
            r0 = 32
            byte[] r1 = new byte[r0]
            com.mbridge.msdk.foundation.tools.a.a = r1
            r1 = 16
            byte[] r2 = new byte[r1]
            com.mbridge.msdk.foundation.tools.a.b = r2
            java.lang.String r2 = "ebmclXzZOhtU2sRlZxGL8A"
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 == 0) goto L15
            goto L33
        L15:
            java.lang.String r3 = "sha-384"
            java.security.MessageDigest r3 = java.security.MessageDigest.getInstance(r3)     // Catch: java.lang.Exception -> L2f
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Exception -> L2f
            byte[] r2 = r3.digest(r2)     // Catch: java.lang.Exception -> L2f
            byte[] r3 = com.mbridge.msdk.foundation.tools.a.a     // Catch: java.lang.Exception -> L2f
            r4 = 0
            java.lang.System.arraycopy(r2, r4, r3, r4, r0)     // Catch: java.lang.Exception -> L2f
            byte[] r3 = com.mbridge.msdk.foundation.tools.a.b     // Catch: java.lang.Exception -> L2f
            java.lang.System.arraycopy(r2, r0, r3, r4, r1)     // Catch: java.lang.Exception -> L2f
            goto L33
        L2f:
            r0 = move-exception
            r0.printStackTrace()
        L33:
            return
    }

    public static java.lang.String a(java.lang.String r2) {
            byte[] r0 = com.mbridge.msdk.foundation.tools.a.a
            byte[] r1 = com.mbridge.msdk.foundation.tools.a.b
            java.lang.String r2 = a(r2, r0, r1)
            return r2
    }

    private static java.lang.String a(java.lang.String r2, byte[] r3, byte[] r4) {
            javax.crypto.spec.IvParameterSpec r0 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Exception -> L31
            r0.<init>(r4)     // Catch: java.lang.Exception -> L31
            javax.crypto.spec.SecretKeySpec r4 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Exception -> L31
            java.lang.String r1 = "AES"
            r4.<init>(r3, r1)     // Catch: java.lang.Exception -> L31
            com.mbridge.msdk.foundation.tools.a$a r3 = new com.mbridge.msdk.foundation.tools.a$a     // Catch: java.lang.Exception -> L31
            r3.<init>()     // Catch: java.lang.Exception -> L31
            java.security.Security.addProvider(r3)     // Catch: java.lang.Exception -> L31
            java.lang.String r3 = "AES/CBC/PKCS7PADDING"
            javax.crypto.Cipher r3 = javax.crypto.Cipher.getInstance(r3)     // Catch: java.lang.Exception -> L31
            r1 = 1
            r3.init(r1, r4, r0)     // Catch: java.lang.Exception -> L31
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Exception -> L31
            byte[] r2 = r3.doFinal(r2)     // Catch: java.lang.Exception -> L31
            r3 = 0
            byte[] r2 = android.util.Base64.encode(r2, r3)     // Catch: java.lang.Exception -> L31
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Exception -> L31
            r3.<init>(r2)     // Catch: java.lang.Exception -> L31
            return r3
        L31:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
            return r2
    }
}
