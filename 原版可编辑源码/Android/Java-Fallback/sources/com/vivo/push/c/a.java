package com.vivo.push.c;

public final class a implements com.vivo.push.c.c {
    private java.security.KeyStore a;
    private javax.crypto.SecretKey b;

    public a() {
            r0 = this;
            r0.<init>()
            r0.a()
            r0.b()
            return
    }

    private void a() {
            r3 = this;
            java.lang.String r0 = "AndroidKeyStore"
            java.security.KeyStore r0 = java.security.KeyStore.getInstance(r0)     // Catch: java.lang.Exception -> Ld
            r3.a = r0     // Catch: java.lang.Exception -> Ld
            r1 = 0
            r0.load(r1)     // Catch: java.lang.Exception -> Ld
            return
        Ld:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "initKeyStore error"
            r1.<init>(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "AesSecurity"
            com.vivo.push.util.p.a(r1, r0)
            return
    }

    private javax.crypto.SecretKey b() {
            r4 = this;
            javax.crypto.SecretKey r0 = r4.b     // Catch: java.lang.Exception -> L53
            if (r0 == 0) goto L7
            javax.crypto.SecretKey r0 = r4.b     // Catch: java.lang.Exception -> L53
            return r0
        L7:
            boolean r0 = r4.c()     // Catch: java.lang.Exception -> L53
            if (r0 != 0) goto L4b
            java.lang.String r0 = "AES"
            java.lang.String r1 = "AndroidKeyStore"
            javax.crypto.KeyGenerator r0 = javax.crypto.KeyGenerator.getInstance(r0, r1)     // Catch: java.lang.Exception -> L53
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L53
            r2 = 23
            if (r1 < r2) goto L44
            android.security.keystore.KeyGenParameterSpec$Builder r1 = new android.security.keystore.KeyGenParameterSpec$Builder     // Catch: java.lang.Exception -> L53
            java.lang.String r2 = "AesKeyAlias"
            r3 = 3
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> L53
            java.lang.String r2 = "GCM"
            java.lang.String[] r2 = new java.lang.String[]{r2}     // Catch: java.lang.Exception -> L53
            android.security.keystore.KeyGenParameterSpec$Builder r1 = r1.setBlockModes(r2)     // Catch: java.lang.Exception -> L53
            java.lang.String r2 = "NoPadding"
            java.lang.String[] r2 = new java.lang.String[]{r2}     // Catch: java.lang.Exception -> L53
            android.security.keystore.KeyGenParameterSpec$Builder r1 = r1.setEncryptionPaddings(r2)     // Catch: java.lang.Exception -> L53
            r2 = 256(0x100, float:3.59E-43)
            android.security.keystore.KeyGenParameterSpec$Builder r1 = r1.setKeySize(r2)     // Catch: java.lang.Exception -> L53
            android.security.keystore.KeyGenParameterSpec r1 = r1.build()     // Catch: java.lang.Exception -> L53
            r0.init(r1)     // Catch: java.lang.Exception -> L53
        L44:
            javax.crypto.SecretKey r0 = r0.generateKey()     // Catch: java.lang.Exception -> L53
        L48:
            r4.b = r0     // Catch: java.lang.Exception -> L53
            goto L50
        L4b:
            javax.crypto.SecretKey r0 = r4.d()     // Catch: java.lang.Exception -> L53
            goto L48
        L50:
            javax.crypto.SecretKey r0 = r4.b     // Catch: java.lang.Exception -> L53
            return r0
        L53:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "getSecretKey error"
            r1.<init>(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "AesSecurity"
            com.vivo.push.util.p.a(r1, r0)
            r0 = 0
            return r0
    }

    private boolean c() {
            r3 = this;
            java.security.KeyStore r0 = r3.a     // Catch: java.lang.Exception -> L10
            if (r0 != 0) goto L7
            r3.a()     // Catch: java.lang.Exception -> L10
        L7:
            java.security.KeyStore r0 = r3.a     // Catch: java.lang.Exception -> L10
            java.lang.String r1 = "AesKeyAlias"
            boolean r0 = r0.containsAlias(r1)     // Catch: java.lang.Exception -> L10
            return r0
        L10:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "hasAESKey error"
            r1.<init>(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "AesSecurity"
            com.vivo.push.util.p.a(r1, r0)
            r0 = 0
            return r0
    }

    private javax.crypto.SecretKey d() {
            r4 = this;
            r0 = 0
            java.security.KeyStore r1 = r4.a     // Catch: java.lang.Exception -> L10
            java.lang.String r2 = "AesKeyAlias"
            java.security.KeyStore$Entry r1 = r1.getEntry(r2, r0)     // Catch: java.lang.Exception -> L10
            java.security.KeyStore$SecretKeyEntry r1 = (java.security.KeyStore.SecretKeyEntry) r1     // Catch: java.lang.Exception -> L10
            javax.crypto.SecretKey r0 = r1.getSecretKey()     // Catch: java.lang.Exception -> L10
            return r0
        L10:
            r1 = move-exception
            r1.printStackTrace()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "getAESSecretKey error"
            r2.<init>(r3)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = "AesSecurity"
            com.vivo.push.util.p.a(r2, r1)
            return r0
    }
}
