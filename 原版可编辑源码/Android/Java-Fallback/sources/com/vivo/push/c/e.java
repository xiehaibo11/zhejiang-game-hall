package com.vivo.push.c;

public final class e implements com.vivo.push.c.b {
    private static java.security.PrivateKey a;
    private static java.security.PublicKey b;
    private static java.security.KeyStore c;
    private static javax.security.auth.x500.X500Principal d;
    private android.content.Context e;

    static {
            return
    }

    public e(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            r2.e = r3
            b()     // Catch: java.lang.Exception -> Lc
            a(r3)     // Catch: java.lang.Exception -> Lc
            return
        Lc:
            r3 = move-exception
            r3.printStackTrace()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "init error"
            r0.<init>(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "RsaSecurity"
            com.vivo.push.util.p.a(r0, r3)
            return
    }

    private static void a(android.content.Context r6) {
            java.lang.String r0 = "PushRsaKeyAlias"
            java.lang.String r1 = "RsaSecurity"
            if (r6 != 0) goto Lc
            java.lang.String r6 = " generateRSAKeyPairSign context == null "
            com.vivo.push.util.p.d(r1, r6)     // Catch: java.lang.Exception -> L6c
            return
        Lc:
            boolean r2 = b(r0)     // Catch: java.lang.Exception -> L6c
            if (r2 != 0) goto L66
            java.util.Calendar r2 = java.util.Calendar.getInstance()     // Catch: java.lang.Exception -> L6c
            java.util.Calendar r3 = java.util.Calendar.getInstance()     // Catch: java.lang.Exception -> L6c
            r4 = 1
            r5 = 999(0x3e7, float:1.4E-42)
            r3.add(r4, r5)     // Catch: java.lang.Exception -> L6c
            int r4 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L6c
            r5 = 18
            if (r4 < r5) goto L65
            android.security.KeyPairGeneratorSpec$Builder r4 = new android.security.KeyPairGeneratorSpec$Builder     // Catch: java.lang.Exception -> L6c
            android.content.Context r6 = r6.getApplicationContext()     // Catch: java.lang.Exception -> L6c
            r4.<init>(r6)     // Catch: java.lang.Exception -> L6c
            android.security.KeyPairGeneratorSpec$Builder r6 = r4.setAlias(r0)     // Catch: java.lang.Exception -> L6c
            javax.security.auth.x500.X500Principal r0 = com.vivo.push.c.e.d     // Catch: java.lang.Exception -> L6c
            android.security.KeyPairGeneratorSpec$Builder r6 = r6.setSubject(r0)     // Catch: java.lang.Exception -> L6c
            r4 = 1337(0x539, double:6.606E-321)
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r4)     // Catch: java.lang.Exception -> L6c
            android.security.KeyPairGeneratorSpec$Builder r6 = r6.setSerialNumber(r0)     // Catch: java.lang.Exception -> L6c
            java.util.Date r0 = r2.getTime()     // Catch: java.lang.Exception -> L6c
            android.security.KeyPairGeneratorSpec$Builder r6 = r6.setStartDate(r0)     // Catch: java.lang.Exception -> L6c
            java.util.Date r0 = r3.getTime()     // Catch: java.lang.Exception -> L6c
            android.security.KeyPairGeneratorSpec$Builder r6 = r6.setEndDate(r0)     // Catch: java.lang.Exception -> L6c
            android.security.KeyPairGeneratorSpec r6 = r6.build()     // Catch: java.lang.Exception -> L6c
            java.lang.String r0 = "RSA"
            java.lang.String r2 = "AndroidKeyStore"
            java.security.KeyPairGenerator r0 = java.security.KeyPairGenerator.getInstance(r0, r2)     // Catch: java.lang.Exception -> L6c
            r0.initialize(r6)     // Catch: java.lang.Exception -> L6c
            r0.generateKeyPair()     // Catch: java.lang.Exception -> L6c
        L65:
            return
        L66:
            java.lang.String r6 = " generateRSAKeyPairSign this keyAlias PushRsaKeyAlias is Created "
            com.vivo.push.util.p.d(r1, r6)     // Catch: java.lang.Exception -> L6c
            return
        L6c:
            r6 = move-exception
            r6.printStackTrace()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "generateRSAKeyPairSign error"
            r0.<init>(r2)
            java.lang.String r6 = r6.getMessage()
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            com.vivo.push.util.p.a(r1, r6)
            return
    }

    private static java.security.PrivateKey b(android.content.Context r4) {
            java.lang.String r0 = "PushRsaKeyAlias"
            java.lang.String r1 = "RsaSecurity"
            r2 = 0
            java.security.PrivateKey r3 = com.vivo.push.c.e.a     // Catch: java.lang.Exception -> L30
            if (r3 == 0) goto Lc
            java.security.PrivateKey r4 = com.vivo.push.c.e.a     // Catch: java.lang.Exception -> L30
            return r4
        Lc:
            if (r4 != 0) goto L14
            java.lang.String r4 = " getPrivateKeySigin context == null "
            com.vivo.push.util.p.d(r1, r4)     // Catch: java.lang.Exception -> L30
            return r2
        L14:
            boolean r3 = b(r0)     // Catch: java.lang.Exception -> L30
            if (r3 != 0) goto L1d
            a(r4)     // Catch: java.lang.Exception -> L30
        L1d:
            java.security.KeyStore r4 = com.vivo.push.c.e.c     // Catch: java.lang.Exception -> L30
            java.security.KeyStore$Entry r4 = r4.getEntry(r0, r2)     // Catch: java.lang.Exception -> L30
            boolean r0 = r4 instanceof java.security.KeyStore.PrivateKeyEntry     // Catch: java.lang.Exception -> L30
            if (r0 == 0) goto L49
            java.security.KeyStore$PrivateKeyEntry r4 = (java.security.KeyStore.PrivateKeyEntry) r4     // Catch: java.lang.Exception -> L30
            java.security.PrivateKey r4 = r4.getPrivateKey()     // Catch: java.lang.Exception -> L30
            com.vivo.push.c.e.a = r4     // Catch: java.lang.Exception -> L30
            return r4
        L30:
            r4 = move-exception
            r4.printStackTrace()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r3 = "getPrivateKeySigin error"
            r0.<init>(r3)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.vivo.push.util.p.a(r1, r4)
        L49:
            return r2
    }

    private static void b() {
            java.lang.String r0 = "AndroidKeyStore"
            java.security.KeyStore r0 = java.security.KeyStore.getInstance(r0)     // Catch: java.lang.Exception -> L16
            com.vivo.push.c.e.c = r0     // Catch: java.lang.Exception -> L16
            r1 = 0
            r0.load(r1)     // Catch: java.lang.Exception -> L16
            javax.security.auth.x500.X500Principal r0 = new javax.security.auth.x500.X500Principal     // Catch: java.lang.Exception -> L16
            java.lang.String r1 = "CN=Push SDK, OU=VIVO, O=VIVO PUSH, C=CN"
            r0.<init>(r1)     // Catch: java.lang.Exception -> L16
            com.vivo.push.c.e.d = r0     // Catch: java.lang.Exception -> L16
            return
        L16:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "initKeyStore error"
            r1.<init>(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "RsaSecurity"
            com.vivo.push.util.p.a(r1, r0)
            return
    }

    private static boolean b(java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.security.KeyStore r0 = com.vivo.push.c.e.c     // Catch: java.lang.Exception -> L16
            if (r0 != 0) goto Lf
            b()     // Catch: java.lang.Exception -> L16
        Lf:
            java.security.KeyStore r0 = com.vivo.push.c.e.c     // Catch: java.lang.Exception -> L16
            boolean r3 = r0.containsAlias(r3)     // Catch: java.lang.Exception -> L16
            return r3
        L16:
            r3 = move-exception
            r3.printStackTrace()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "getPrivateKeySigin error"
            r0.<init>(r2)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "RsaSecurity"
            com.vivo.push.util.p.a(r0, r3)
            return r1
    }

    @Override
    public final java.lang.String a(java.lang.String r5) {
            r4 = this;
            java.lang.String r0 = "RsaSecurity"
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L4d
            if (r1 != 0) goto L66
            android.content.Context r1 = r4.e     // Catch: java.lang.Exception -> L4d
            java.security.PrivateKey r1 = b(r1)     // Catch: java.lang.Exception -> L4d
            if (r1 == 0) goto L66
            java.lang.String r1 = "UTF-8"
            byte[] r1 = r5.getBytes(r1)     // Catch: java.lang.Exception -> L4d
            android.content.Context r2 = r4.e     // Catch: java.lang.Exception -> L4d
            java.security.PrivateKey r2 = b(r2)     // Catch: java.lang.Exception -> L4d
            java.lang.String r3 = "SHA256withRSA"
            java.security.Signature r3 = java.security.Signature.getInstance(r3)     // Catch: java.lang.Exception -> L4d
            r3.initSign(r2)     // Catch: java.lang.Exception -> L4d
            r3.update(r1)     // Catch: java.lang.Exception -> L4d
            byte[] r1 = r3.sign()     // Catch: java.lang.Exception -> L4d
            r2 = 2
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r2)     // Catch: java.lang.Exception -> L4d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4d
            r2.<init>()     // Catch: java.lang.Exception -> L4d
            int r5 = r5.hashCode()     // Catch: java.lang.Exception -> L4d
            r2.append(r5)     // Catch: java.lang.Exception -> L4d
            java.lang.String r5 = " = "
            r2.append(r5)     // Catch: java.lang.Exception -> L4d
            r2.append(r1)     // Catch: java.lang.Exception -> L4d
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Exception -> L4d
            com.vivo.push.util.p.d(r0, r5)     // Catch: java.lang.Exception -> L4d
            return r1
        L4d:
            r5 = move-exception
            r5.printStackTrace()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "signClientSDK error"
            r1.<init>(r2)
            java.lang.String r5 = r5.getMessage()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            com.vivo.push.util.p.a(r0, r5)
        L66:
            r5 = 0
            return r5
    }

    @Override
    public final java.security.PublicKey a() {
            r4 = this;
            java.lang.String r0 = "PushRsaKeyAlias"
            r1 = 0
            java.security.PublicKey r2 = com.vivo.push.c.e.b     // Catch: java.lang.Exception -> L2c
            if (r2 == 0) goto La
            java.security.PublicKey r0 = com.vivo.push.c.e.b     // Catch: java.lang.Exception -> L2c
            return r0
        La:
            boolean r2 = b(r0)     // Catch: java.lang.Exception -> L2c
            if (r2 != 0) goto L15
            android.content.Context r2 = r4.e     // Catch: java.lang.Exception -> L2c
            a(r2)     // Catch: java.lang.Exception -> L2c
        L15:
            java.security.KeyStore r2 = com.vivo.push.c.e.c     // Catch: java.lang.Exception -> L2c
            java.security.KeyStore$Entry r0 = r2.getEntry(r0, r1)     // Catch: java.lang.Exception -> L2c
            boolean r2 = r0 instanceof java.security.KeyStore.PrivateKeyEntry     // Catch: java.lang.Exception -> L2c
            if (r2 == 0) goto L47
            java.security.KeyStore$PrivateKeyEntry r0 = (java.security.KeyStore.PrivateKeyEntry) r0     // Catch: java.lang.Exception -> L2c
            java.security.cert.Certificate r0 = r0.getCertificate()     // Catch: java.lang.Exception -> L2c
            java.security.PublicKey r0 = r0.getPublicKey()     // Catch: java.lang.Exception -> L2c
            com.vivo.push.c.e.b = r0     // Catch: java.lang.Exception -> L2c
            return r0
        L2c:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "getPublicKeySign error"
            r2.<init>(r3)
            java.lang.String r0 = r0.getMessage()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            java.lang.String r2 = "RsaSecurity"
            com.vivo.push.util.p.a(r2, r0)
        L47:
            return r1
    }

    @Override
    public final boolean a(byte[] r2, java.security.PublicKey r3, byte[] r4) {
            r1 = this;
            java.lang.String r0 = "SHA256withRSA"
            java.security.Signature r0 = java.security.Signature.getInstance(r0)     // Catch: java.lang.Exception -> L11
            r0.initVerify(r3)     // Catch: java.lang.Exception -> L11
            r0.update(r2)     // Catch: java.lang.Exception -> L11
            boolean r2 = r0.verify(r4)     // Catch: java.lang.Exception -> L11
            return r2
        L11:
            r2 = move-exception
            r2.printStackTrace()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "verifyClientSDK error"
            r3.<init>(r4)
            java.lang.String r2 = r2.getMessage()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            java.lang.String r3 = "RsaSecurity"
            com.vivo.push.util.p.a(r3, r2)
            r2 = 0
            return r2
    }
}
