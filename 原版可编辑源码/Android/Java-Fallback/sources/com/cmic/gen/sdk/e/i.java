package com.cmic.gen.sdk.e;

public class i {
    private static final java.lang.String a = null;
    private static com.cmic.gen.sdk.e.i d;
    private java.security.PublicKey b;
    private java.security.PublicKey c;

    static {
            java.lang.Class<com.cmic.gen.sdk.e.i> r0 = com.cmic.gen.sdk.e.i.class
            java.lang.String r0 = r0.getSimpleName()
            com.cmic.gen.sdk.e.i.a = r0
            r0 = 0
            com.cmic.gen.sdk.e.i.d = r0
            return
    }

    private i() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.b = r0
            r1.c = r0
            if (r0 != 0) goto Ld
            r1.b()     // Catch: java.lang.Exception -> L15
        Ld:
            java.security.PublicKey r0 = r1.c     // Catch: java.lang.Exception -> L15
            if (r0 != 0) goto L19
            r1.c()     // Catch: java.lang.Exception -> L15
            goto L19
        L15:
            r0 = move-exception
            r0.printStackTrace()
        L19:
            return
    }

    public static com.cmic.gen.sdk.e.i a() {
            com.cmic.gen.sdk.e.i r0 = com.cmic.gen.sdk.e.i.d
            if (r0 != 0) goto Lb
            com.cmic.gen.sdk.e.i r0 = new com.cmic.gen.sdk.e.i
            r0.<init>()
            com.cmic.gen.sdk.e.i.d = r0
        Lb:
            com.cmic.gen.sdk.e.i r0 = com.cmic.gen.sdk.e.i.d
            return r0
    }

    private void b() throws java.lang.Exception {
            r3 = this;
            java.lang.String r0 = "MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQDNFGdEpQ1d8cPqekvvEDQyBGnI\nKwvjX9o3OmnnqWMGbIiFYIpc21QeG7aqizuWdXlgS5M9rstDfHQfG/AaPElJ7Yix\nBCau4hdVwFpRmb9NIuqavDeHKP9BKPZ01Ra5/666NGKBqmkRRer3lBCe6EKNUc2U\n/DZg6U/Q3CTPiORt/wIDAQAB"
            r1 = 0
            byte[] r0 = android.util.Base64.decode(r0, r1)     // Catch: java.lang.NullPointerException -> L19
            java.lang.String r1 = "RSA"
            java.security.KeyFactory r1 = java.security.KeyFactory.getInstance(r1)     // Catch: java.lang.NullPointerException -> L19
            java.security.spec.X509EncodedKeySpec r2 = new java.security.spec.X509EncodedKeySpec     // Catch: java.lang.NullPointerException -> L19
            r2.<init>(r0)     // Catch: java.lang.NullPointerException -> L19
            java.security.PublicKey r0 = r1.generatePublic(r2)     // Catch: java.lang.NullPointerException -> L19
            r3.b = r0     // Catch: java.lang.NullPointerException -> L19
            goto L1d
        L19:
            r0 = move-exception
            r0.printStackTrace()
        L1d:
            return
    }

    private void c() throws java.lang.Exception {
            r3 = this;
            java.lang.String r0 = "MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAuyqBGJVxu+5Z2ZwItIhl\noxI53CVpYUR3OWAQyAQNcMhDDf3nGsxLLHP8kGWqrpLn1uAIgI+EIAl0sM+i1leD\nFD+sYU2rkUVZgpwO7ly+THBFw/YcZNwS094NBdhzxmCCFbCKHVNzDLirlV9T2q4k\nJhjaEmyCOtSU6+mdjcHhbcbF6lKYx8tfQlpPmyM5suFY138qtEoB4b+q/j8q22MI\naUotg1Av257RuMh97hAwoi5D7HS5LH0piLIN/au/X08rxbXnWNdgQtFtUeCNy3vw\nkO0ykg5qH942X8poQ+a9GgBUeDBpY4GSIv6/qq+zJxiJxpoL0SGKAP3FlcuLr07f\nxwIDAQAB"
            r1 = 0
            byte[] r0 = android.util.Base64.decode(r0, r1)     // Catch: java.lang.NullPointerException -> L19
            java.lang.String r1 = "RSA"
            java.security.KeyFactory r1 = java.security.KeyFactory.getInstance(r1)     // Catch: java.lang.NullPointerException -> L19
            java.security.spec.X509EncodedKeySpec r2 = new java.security.spec.X509EncodedKeySpec     // Catch: java.lang.NullPointerException -> L19
            r2.<init>(r0)     // Catch: java.lang.NullPointerException -> L19
            java.security.PublicKey r0 = r1.generatePublic(r2)     // Catch: java.lang.NullPointerException -> L19
            r3.c = r0     // Catch: java.lang.NullPointerException -> L19
            return
        L19:
            java.lang.Exception r0 = new java.lang.Exception
            java.lang.String r1 = "公钥输入流为空"
            r0.<init>(r1)
            throw r0
    }

    public java.lang.String a(byte[] r5) {
            r4 = this;
            java.security.PublicKey r0 = r4.b
            java.lang.String r1 = ""
            if (r0 != 0) goto Le
            java.lang.String r5 = com.cmic.gen.sdk.e.i.a
            java.lang.String r0 = "mServerPublicKey == null"
            com.cmic.gen.sdk.e.c.a(r5, r0)
            return r1
        Le:
            java.lang.String r0 = "RSA/ECB/OAEPWithSHA256AndMGF1Padding"
            javax.crypto.Cipher r0 = javax.crypto.Cipher.getInstance(r0)     // Catch: java.lang.Exception -> L23
            r2 = 1
            java.security.PublicKey r3 = r4.b     // Catch: java.lang.Exception -> L23
            r0.init(r2, r3)     // Catch: java.lang.Exception -> L23
            byte[] r5 = r0.doFinal(r5)     // Catch: java.lang.Exception -> L23
            java.lang.String r5 = com.cmic.gen.sdk.e.q.a(r5)     // Catch: java.lang.Exception -> L23
            return r5
        L23:
            r5 = move-exception
            r5.printStackTrace()
            return r1
    }

    public java.lang.String b(byte[] r4) {
            r3 = this;
            java.security.PublicKey r0 = r3.b
            if (r0 != 0) goto Ld
            java.lang.String r4 = com.cmic.gen.sdk.e.i.a
            java.lang.String r0 = "mServerPublicKey == null"
            com.cmic.gen.sdk.e.c.a(r4, r0)
            r4 = 0
            return r4
        Ld:
            java.lang.String r0 = "RSA/ECB/OAEPWithSHA256AndMGF1Padding"
            javax.crypto.Cipher r0 = javax.crypto.Cipher.getInstance(r0)     // Catch: java.lang.Exception -> L23
            r1 = 1
            java.security.PublicKey r2 = r3.c     // Catch: java.lang.Exception -> L23
            r0.init(r1, r2)     // Catch: java.lang.Exception -> L23
            byte[] r4 = r0.doFinal(r4)     // Catch: java.lang.Exception -> L23
            r0 = 0
            java.lang.String r4 = android.util.Base64.encodeToString(r4, r0)     // Catch: java.lang.Exception -> L23
            return r4
        L23:
            r4 = move-exception
            r4.printStackTrace()
            java.lang.String r4 = ""
            return r4
    }
}
