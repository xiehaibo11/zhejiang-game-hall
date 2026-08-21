package com.tencent.open.utils;

public class a {
    private java.security.KeyStore a;
    private android.content.SharedPreferences b;

    public a(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "KEYSTORE_SETTING"
            r1 = 0
            android.content.SharedPreferences r0 = r3.getSharedPreferences(r0, r1)     // Catch: java.lang.Exception -> L2e
            r2.b = r0     // Catch: java.lang.Exception -> L2e
            java.lang.String r0 = "AndroidKeyStore"
            java.security.KeyStore r0 = java.security.KeyStore.getInstance(r0)     // Catch: java.lang.Exception -> L2e
            r2.a = r0     // Catch: java.lang.Exception -> L2e
            r1 = 0
            r0.load(r1)     // Catch: java.lang.Exception -> L2e
            java.security.KeyStore r0 = r2.a     // Catch: java.lang.Exception -> L2e
            java.lang.String r1 = "KEYSTORE_AES"
            boolean r0 = r0.containsAlias(r1)     // Catch: java.lang.Exception -> L2e
            if (r0 != 0) goto L36
            java.lang.String r0 = ""
            r2.c(r0)     // Catch: java.lang.Exception -> L2e
            r2.a(r3)     // Catch: java.lang.Exception -> L2e
            r2.a()     // Catch: java.lang.Exception -> L2e
            goto L36
        L2e:
            r3 = move-exception
            java.lang.String r0 = "KEYSTORE"
            java.lang.String r1 = "Exception"
            com.tencent.open.log.SLog.d(r0, r1, r3)
        L36:
            return
    }

    private void a() throws java.lang.Exception {
            r5 = this;
            r0 = 16
            byte[] r0 = new byte[r0]
            java.security.SecureRandom r1 = new java.security.SecureRandom
            r1.<init>()
            r1.nextBytes(r0)
            r2 = 12
            byte[] r1 = r1.generateSeed(r2)
            r2 = 0
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r2)
            r5.c(r1)
            int r1 = android.os.Build.VERSION.SDK_INT
            r3 = 18
            if (r1 < r3) goto L42
            java.security.KeyStore r1 = r5.a
            java.lang.String r3 = "KEYSTORE_AES"
            java.security.cert.Certificate r1 = r1.getCertificate(r3)
            java.security.PublicKey r1 = r1.getPublicKey()
            java.lang.String r3 = "RSA/ECB/PKCS1Padding"
            javax.crypto.Cipher r3 = javax.crypto.Cipher.getInstance(r3)
            r4 = 1
            r3.init(r4, r1)
            byte[] r0 = r3.doFinal(r0)
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r2)
            r5.d(r0)
            goto L56
        L42:
            java.lang.String r1 = "SHA-256"
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r1)
            r1.update(r0)
            byte[] r0 = r1.digest()
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r2)
            r5.d(r0)
        L56:
            return
    }

    private void a(android.content.Context r7) throws java.lang.Exception {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Build.VERSION.SDK_INT="
            r0.append(r1)
            int r1 = android.os.Build.VERSION.SDK_INT
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KEYSTORE"
            com.tencent.open.log.SLog.d(r1, r0)
            int r0 = android.os.Build.VERSION.SDK_INT
            java.lang.String r1 = "KEYSTORE_AES"
            java.lang.String r2 = "AndroidKeyStore"
            java.lang.String r3 = "RSA"
            r4 = 23
            if (r0 < r4) goto L4f
            java.security.KeyPairGenerator r7 = java.security.KeyPairGenerator.getInstance(r3, r2)
            android.security.keystore.KeyGenParameterSpec$Builder r0 = new android.security.keystore.KeyGenParameterSpec$Builder
            r2 = 3
            r0.<init>(r1, r2)
            java.lang.String r1 = "SHA-256"
            java.lang.String r2 = "SHA-512"
            java.lang.String[] r1 = new java.lang.String[]{r1, r2}
            android.security.keystore.KeyGenParameterSpec$Builder r0 = r0.setDigests(r1)
            java.lang.String r1 = "PKCS1Padding"
            java.lang.String[] r1 = new java.lang.String[]{r1}
            android.security.keystore.KeyGenParameterSpec$Builder r0 = r0.setEncryptionPaddings(r1)
            android.security.keystore.KeyGenParameterSpec r0 = r0.build()
            r7.initialize(r0)
            r7.generateKeyPair()
            goto L9b
        L4f:
            int r0 = android.os.Build.VERSION.SDK_INT
            r4 = 18
            if (r0 < r4) goto L9b
            java.security.KeyPairGenerator r0 = java.security.KeyPairGenerator.getInstance(r3, r2)
            java.util.Calendar r2 = java.util.Calendar.getInstance()
            java.util.Calendar r3 = java.util.Calendar.getInstance()
            r4 = 1
            r5 = 30
            r3.add(r4, r5)
            android.security.KeyPairGeneratorSpec$Builder r4 = new android.security.KeyPairGeneratorSpec$Builder
            r4.<init>(r7)
            android.security.KeyPairGeneratorSpec$Builder r7 = r4.setAlias(r1)
            javax.security.auth.x500.X500Principal r1 = new javax.security.auth.x500.X500Principal
            java.lang.String r4 = "CN=KEYSTORE_AES"
            r1.<init>(r4)
            android.security.KeyPairGeneratorSpec$Builder r7 = r7.setSubject(r1)
            java.math.BigInteger r1 = java.math.BigInteger.TEN
            android.security.KeyPairGeneratorSpec$Builder r7 = r7.setSerialNumber(r1)
            java.util.Date r1 = r2.getTime()
            android.security.KeyPairGeneratorSpec$Builder r7 = r7.setStartDate(r1)
            java.util.Date r1 = r3.getTime()
            android.security.KeyPairGeneratorSpec$Builder r7 = r7.setEndDate(r1)
            android.security.KeyPairGeneratorSpec r7 = r7.build()
            r0.initialize(r7)
            r0.generateKeyPair()
        L9b:
            return
    }

    private byte[] b() {
            r3 = this;
            android.content.SharedPreferences r0 = r3.b
            java.lang.String r1 = "PREF_KEY_IV"
            java.lang.String r2 = ""
            java.lang.String r0 = r0.getString(r1, r2)
            r1 = 0
            byte[] r0 = android.util.Base64.decode(r0, r1)
            return r0
    }

    private javax.crypto.spec.SecretKeySpec c() throws java.lang.Exception {
            r6 = this;
            android.content.SharedPreferences r0 = r6.b
            java.lang.String r1 = "PREF_KEY_AES"
            java.lang.String r2 = ""
            java.lang.String r0 = r0.getString(r1, r2)
            int r1 = android.os.Build.VERSION.SDK_INT
            java.lang.String r2 = "AES/GCM/NoPadding"
            r3 = 0
            r4 = 18
            if (r1 < r4) goto L36
            java.security.KeyStore r1 = r6.a
            r4 = 0
            java.lang.String r5 = "KEYSTORE_AES"
            java.security.Key r1 = r1.getKey(r5, r4)
            java.security.PrivateKey r1 = (java.security.PrivateKey) r1
            java.lang.String r4 = "RSA/ECB/PKCS1Padding"
            javax.crypto.Cipher r4 = javax.crypto.Cipher.getInstance(r4)
            r5 = 2
            r4.init(r5, r1)
            byte[] r0 = android.util.Base64.decode(r0, r3)
            byte[] r0 = r4.doFinal(r0)
            javax.crypto.spec.SecretKeySpec r1 = new javax.crypto.spec.SecretKeySpec
            r1.<init>(r0, r2)
            return r1
        L36:
            byte[] r0 = android.util.Base64.decode(r0, r3)
            javax.crypto.spec.SecretKeySpec r1 = new javax.crypto.spec.SecretKeySpec
            r1.<init>(r0, r2)
            return r1
    }

    private void c(java.lang.String r3) {
            r2 = this;
            android.content.SharedPreferences r0 = r2.b
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.String r1 = "PREF_KEY_IV"
            android.content.SharedPreferences$Editor r3 = r0.putString(r1, r3)
            r3.apply()
            return
    }

    private void d(java.lang.String r3) {
            r2 = this;
            android.content.SharedPreferences r0 = r2.b
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.String r1 = "PREF_KEY_AES"
            android.content.SharedPreferences$Editor r3 = r0.putString(r1, r3)
            r3.apply()
            return
    }

    public java.lang.String a(java.lang.String r6) {
            r5 = this;
            java.lang.String r0 = "AES/GCM/NoPadding"
            javax.crypto.Cipher r0 = javax.crypto.Cipher.getInstance(r0)     // Catch: java.lang.Exception -> L25
            r1 = 1
            javax.crypto.spec.SecretKeySpec r2 = r5.c()     // Catch: java.lang.Exception -> L25
            javax.crypto.spec.IvParameterSpec r3 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Exception -> L25
            byte[] r4 = r5.b()     // Catch: java.lang.Exception -> L25
            r3.<init>(r4)     // Catch: java.lang.Exception -> L25
            r0.init(r1, r2, r3)     // Catch: java.lang.Exception -> L25
            byte[] r6 = r6.getBytes()     // Catch: java.lang.Exception -> L25
            byte[] r6 = r0.doFinal(r6)     // Catch: java.lang.Exception -> L25
            r0 = 0
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r0)     // Catch: java.lang.Exception -> L25
            return r6
        L25:
            r6 = move-exception
            java.lang.String r0 = "KEYSTORE"
            java.lang.String r1 = "Exception"
            com.tencent.open.log.SLog.e(r0, r1, r6)
            java.lang.String r6 = ""
            return r6
    }

    public java.lang.String b(java.lang.String r6) {
            r5 = this;
            byte[] r6 = r6.getBytes()     // Catch: java.lang.Exception -> L2a
            r0 = 0
            byte[] r6 = android.util.Base64.decode(r6, r0)     // Catch: java.lang.Exception -> L2a
            java.lang.String r0 = "AES/GCM/NoPadding"
            javax.crypto.Cipher r0 = javax.crypto.Cipher.getInstance(r0)     // Catch: java.lang.Exception -> L2a
            r1 = 2
            javax.crypto.spec.SecretKeySpec r2 = r5.c()     // Catch: java.lang.Exception -> L2a
            javax.crypto.spec.IvParameterSpec r3 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Exception -> L2a
            byte[] r4 = r5.b()     // Catch: java.lang.Exception -> L2a
            r3.<init>(r4)     // Catch: java.lang.Exception -> L2a
            r0.init(r1, r2, r3)     // Catch: java.lang.Exception -> L2a
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Exception -> L2a
            byte[] r6 = r0.doFinal(r6)     // Catch: java.lang.Exception -> L2a
            r1.<init>(r6)     // Catch: java.lang.Exception -> L2a
            return r1
        L2a:
            r6 = move-exception
            java.lang.String r0 = "KEYSTORE"
            java.lang.String r1 = "Exception"
            com.tencent.open.log.SLog.e(r0, r1, r6)
            java.lang.String r6 = ""
            return r6
    }
}
