package com.tkay.expressad.foundation.h;

public final class a {
    private static final java.lang.String a = "ebmclXzZOhtU2sRlZxGL8A";
    private static byte[] b;
    private static byte[] c;

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
            com.tkay.expressad.foundation.h.a.b = r1
            r1 = 16
            byte[] r2 = new byte[r1]
            com.tkay.expressad.foundation.h.a.c = r2
            java.lang.String r2 = "ebmclXzZOhtU2sRlZxGL8A"
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L32
            java.lang.String r3 = "sha-384"
            java.security.MessageDigest r3 = java.security.MessageDigest.getInstance(r3)     // Catch: java.lang.Exception -> L2e
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Exception -> L2e
            byte[] r2 = r3.digest(r2)     // Catch: java.lang.Exception -> L2e
            byte[] r3 = com.tkay.expressad.foundation.h.a.b     // Catch: java.lang.Exception -> L2e
            r4 = 0
            java.lang.System.arraycopy(r2, r4, r3, r4, r0)     // Catch: java.lang.Exception -> L2e
            byte[] r3 = com.tkay.expressad.foundation.h.a.c     // Catch: java.lang.Exception -> L2e
            java.lang.System.arraycopy(r2, r0, r3, r4, r1)     // Catch: java.lang.Exception -> L2e
            return
        L2e:
            r0 = move-exception
            r0.printStackTrace()
        L32:
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(java.lang.String r2) {
            byte[] r0 = com.tkay.expressad.foundation.h.a.b
            byte[] r1 = com.tkay.expressad.foundation.h.a.c
            java.lang.String r2 = a(r2, r0, r1)
            return r2
    }

    private static java.lang.String a(java.lang.String r2, byte[] r3, byte[] r4) {
            javax.crypto.spec.IvParameterSpec r0 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Exception -> L31
            r0.<init>(r4)     // Catch: java.lang.Exception -> L31
            javax.crypto.spec.SecretKeySpec r4 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Exception -> L31
            java.lang.String r1 = "AES"
            r4.<init>(r3, r1)     // Catch: java.lang.Exception -> L31
            com.tkay.expressad.foundation.h.a$a r3 = new com.tkay.expressad.foundation.h.a$a     // Catch: java.lang.Exception -> L31
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

    private static java.lang.String a(byte[] r5) {
            java.lang.String r0 = ""
            r1 = 0
        L3:
            int r2 = r5.length
            if (r1 >= r2) goto L3c
            r2 = r5[r1]
            r2 = r2 & 255(0xff, float:3.57E-43)
            java.lang.String r2 = java.lang.Integer.toHexString(r2)
            int r3 = r2.length()
            r4 = 1
            if (r3 != r4) goto L2a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.lang.String r0 = "0"
            r3.append(r0)
            r3.append(r2)
            java.lang.String r0 = r3.toString()
            goto L39
        L2a:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            r3.append(r2)
            java.lang.String r0 = r3.toString()
        L39:
            int r1 = r1 + 1
            goto L3
        L3c:
            return r0
    }

    private static java.lang.String b(java.lang.String r2, byte[] r3, byte[] r4) {
            javax.crypto.spec.IvParameterSpec r0 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Exception -> L25
            r0.<init>(r4)     // Catch: java.lang.Exception -> L25
            javax.crypto.spec.SecretKeySpec r4 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Exception -> L25
            java.lang.String r1 = "AES"
            r4.<init>(r3, r1)     // Catch: java.lang.Exception -> L25
            java.lang.String r3 = "AES/CBC/PKCS7PADDING"
            javax.crypto.Cipher r3 = javax.crypto.Cipher.getInstance(r3)     // Catch: java.lang.Exception -> L25
            r1 = 2
            r3.init(r1, r4, r0)     // Catch: java.lang.Exception -> L25
            r4 = 0
            byte[] r2 = android.util.Base64.decode(r2, r4)     // Catch: java.lang.Exception -> L25
            byte[] r2 = r3.doFinal(r2)     // Catch: java.lang.Exception -> L25
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Exception -> L25
            r3.<init>(r2)     // Catch: java.lang.Exception -> L25
            return r3
        L25:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
            return r2
    }

    private static void b(java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.String r0 = "sha-384"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Exception -> L25
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Exception -> L25
            byte[] r4 = r0.digest(r4)     // Catch: java.lang.Exception -> L25
            byte[] r0 = com.tkay.expressad.foundation.h.a.b     // Catch: java.lang.Exception -> L25
            r1 = 32
            r2 = 0
            java.lang.System.arraycopy(r4, r2, r0, r2, r1)     // Catch: java.lang.Exception -> L25
            byte[] r0 = com.tkay.expressad.foundation.h.a.c     // Catch: java.lang.Exception -> L25
            r3 = 16
            java.lang.System.arraycopy(r4, r1, r0, r2, r3)     // Catch: java.lang.Exception -> L25
            return
        L25:
            r4 = move-exception
            r4.printStackTrace()
            return
    }

    private static java.lang.String c(java.lang.String r2) {
            byte[] r0 = com.tkay.expressad.foundation.h.a.b
            byte[] r1 = com.tkay.expressad.foundation.h.a.c
            java.lang.String r2 = b(r2, r0, r1)
            return r2
    }

    private static byte[] d(java.lang.String r8) {
            java.lang.String r8 = r8.trim()
            java.lang.String r0 = " "
            java.lang.String r1 = ""
            java.lang.String r8 = r8.replace(r0, r1)
            java.util.Locale r0 = java.util.Locale.US
            java.lang.String r8 = r8.toUpperCase(r0)
            int r0 = r8.length()
            int r0 = r0 / 2
            byte[] r1 = new byte[r0]
            r2 = 0
        L1b:
            if (r2 >= r0) goto L4c
            int r3 = r2 * 2
            int r4 = r3 + 1
            int r5 = r4 + 1
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r7 = "0x"
            r6.<init>(r7)
            java.lang.String r3 = r8.substring(r3, r4)
            r6.append(r3)
            java.lang.String r3 = r8.substring(r4, r5)
            r6.append(r3)
            java.lang.String r3 = r6.toString()
            java.lang.Integer r3 = java.lang.Integer.decode(r3)
            int r3 = r3.intValue()
            r3 = r3 & 255(0xff, float:3.57E-43)
            byte r3 = (byte) r3
            r1[r2] = r3
            int r2 = r2 + 1
            goto L1b
        L4c:
            return r1
    }
}
