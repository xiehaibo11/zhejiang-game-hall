package com.qq.e.comm.managers.plugin;

class c {
    private static final byte[] c = null;
    private java.security.PublicKey a;
    private final boolean b;

    static class a {
    }

    private static final class b {
        public static final com.qq.e.comm.managers.plugin.c a = null;

        static {
                com.qq.e.comm.managers.plugin.c r0 = new com.qq.e.comm.managers.plugin.c
                r1 = 0
                r0.<init>(r1)
                com.qq.e.comm.managers.plugin.c.b.a = r0
                return
        }
    }

    static {
            r0 = 20
            byte[] r0 = new byte[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [82, 83, 65, 47, 69, 67, 66, 47, 80, 75, 67, 83, 49, 80, 97, 100, 100, 105, 110, 103} // fill-array
            com.qq.e.comm.managers.plugin.c.c = r0
            return
    }

    private c() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQDKta2b5Vw5YkWHCAj4rJCwS227\r/35FZ29e4I6pS2B8zSq2RgBpXUuMg7oZF1Qt3x0iyg8PeyblyNeCRB6gIMehFThe\r1Y7m1FaQyaZp+CJYOTLM4/THKp9UndrEgJ/5a83vP1375YCV2lMvWARrNlBep4RN\rnESUJhQz58Gr/F39TwIDAQAB"
            java.security.PublicKey r0 = r1.a(r0)     // Catch: java.lang.Throwable -> Ld
            r1.a = r0     // Catch: java.lang.Throwable -> Ld
            r0 = 1
            goto Le
        Ld:
            r0 = 0
        Le:
            r1.b = r0
            return
    }

    c(com.qq.e.comm.managers.plugin.c.a r1) {
            r0 = this;
            r0.<init>()
            return
    }

    private java.security.PublicKey a(java.lang.String r3) throws java.lang.Exception {
            r2 = this;
            r0 = 0
            byte[] r3 = android.util.Base64.decode(r3, r0)     // Catch: java.lang.NullPointerException -> L15 java.security.spec.InvalidKeySpecException -> L1d java.security.NoSuchAlgorithmException -> L25
            java.lang.String r0 = "RSA"
            java.security.KeyFactory r0 = java.security.KeyFactory.getInstance(r0)     // Catch: java.lang.NullPointerException -> L15 java.security.spec.InvalidKeySpecException -> L1d java.security.NoSuchAlgorithmException -> L25
            java.security.spec.X509EncodedKeySpec r1 = new java.security.spec.X509EncodedKeySpec     // Catch: java.lang.NullPointerException -> L15 java.security.spec.InvalidKeySpecException -> L1d java.security.NoSuchAlgorithmException -> L25
            r1.<init>(r3)     // Catch: java.lang.NullPointerException -> L15 java.security.spec.InvalidKeySpecException -> L1d java.security.NoSuchAlgorithmException -> L25
            java.security.PublicKey r3 = r0.generatePublic(r1)     // Catch: java.lang.NullPointerException -> L15 java.security.spec.InvalidKeySpecException -> L1d java.security.NoSuchAlgorithmException -> L25
            return r3
        L15:
            java.lang.Exception r3 = new java.lang.Exception
            java.lang.String r0 = "公钥数据为空"
            r3.<init>(r0)
            throw r3
        L1d:
            java.lang.Exception r3 = new java.lang.Exception
            java.lang.String r0 = "公钥非法"
            r3.<init>(r0)
            throw r3
        L25:
            java.lang.Exception r3 = new java.lang.Exception
            java.lang.String r0 = "无此算法"
            r3.<init>(r0)
            throw r3
    }

    public boolean a(java.lang.String r5, java.io.File r6) {
            r4 = this;
            r0 = 0
            if (r6 == 0) goto L4f
            boolean r1 = r6.exists()
            if (r1 != 0) goto La
            goto L4f
        La:
            boolean r1 = r6.exists()
            if (r1 != 0) goto L11
            goto L48
        L11:
            r1 = 0
            java.lang.String r2 = "MD5"
            java.security.MessageDigest r2 = java.security.MessageDigest.getInstance(r2)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L43
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L43
            r3.<init>(r6)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L43
            r6 = 16384(0x4000, float:2.2959E-41)
            byte[] r6 = new byte[r6]     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L3a
        L21:
            int r1 = r3.read(r6)     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L3a
            if (r1 <= 0) goto L2b
            r2.update(r6, r0, r1)     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L3a
            goto L21
        L2b:
            byte[] r6 = r2.digest()     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L3a
            java.lang.String r6 = com.qq.e.comm.managers.plugin.d.a(r6)     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L3a
            r3.close()     // Catch: java.lang.Exception -> L4a
            goto L4a
        L37:
            r5 = move-exception
            r1 = r3
            goto L3d
        L3a:
            r1 = r3
            goto L43
        L3c:
            r5 = move-exception
        L3d:
            if (r1 == 0) goto L42
            r1.close()     // Catch: java.lang.Exception -> L42
        L42:
            throw r5
        L43:
            if (r1 == 0) goto L48
            r1.close()     // Catch: java.lang.Exception -> L48
        L48:
            java.lang.String r6 = ""
        L4a:
            boolean r5 = r4.a(r5, r6)
            return r5
        L4f:
            return r0
    }

    public boolean a(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            java.lang.String r0 = "UTF-8"
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            r2 = 0
            if (r1 == 0) goto La
            return r2
        La:
            boolean r1 = r4.b
            if (r1 != 0) goto L10
            r5 = 1
            return r5
        L10:
            java.security.PublicKey r1 = r4.a
            if (r1 == 0) goto L3c
            byte[] r5 = android.util.Base64.decode(r5, r2)
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Throwable -> L37
            byte[] r2 = com.qq.e.comm.managers.plugin.c.c     // Catch: java.lang.Throwable -> L37
            r1.<init>(r2, r0)     // Catch: java.lang.Throwable -> L37
            javax.crypto.Cipher r1 = javax.crypto.Cipher.getInstance(r1)     // Catch: java.lang.Throwable -> L37
            r2 = 2
            java.security.PublicKey r3 = r4.a     // Catch: java.lang.Throwable -> L37
            r1.init(r2, r3)     // Catch: java.lang.Throwable -> L37
            byte[] r5 = r1.doFinal(r5)     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Throwable -> L37
            r1.<init>(r5, r0)     // Catch: java.lang.Throwable -> L37
            java.lang.String r5 = r1.trim()     // Catch: java.lang.Throwable -> L37
            goto L3d
        L37:
            java.lang.String r5 = "ErrorWhileVerifySigNature"
            com.qq.e.comm.util.GDTLogger.d(r5)
        L3c:
            r5 = 0
        L3d:
            boolean r0 = r6.equals(r5)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Verify Result"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r2 = "src="
            r1.append(r2)
            r1.append(r6)
            java.lang.String r6 = " & target="
            r1.append(r6)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            com.qq.e.comm.util.GDTLogger.d(r5)
            return r0
    }
}
