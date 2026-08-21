package com.heytap.msp.push.encrypt;

public class AESEncrypt {
    private static final java.lang.String ALGORITHM = "AES";
    private static final java.lang.String IV_CONNECT = "%IV1%";
    private static final int KEY_BYTE_SIZE = 256;
    public static final java.lang.String SDK_APP_SECRET = "isvrbeT7qUywVEZ1Ia0/aUVA/TcFaeV0wC8qFLc8rg4=";
    private static final java.lang.String TRANSFORMATION = "AES/CTR/NoPadding";

    public AESEncrypt() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String decrypt(java.lang.String r3, java.lang.String r4) {
            java.lang.String r0 = "%IV1%"
            java.lang.String[] r4 = r4.split(r0)
            r0 = 0
            r0 = r4[r0]
            byte[] r0 = com.heytap.msp.push.encrypt.a.b(r0)
            r1 = 1
            r4 = r4[r1]
            byte[] r4 = com.heytap.msp.push.encrypt.a.b(r4)
            javax.crypto.spec.SecretKeySpec r1 = new javax.crypto.spec.SecretKeySpec
            byte[] r3 = com.heytap.msp.push.encrypt.a.b(r3)
            java.lang.String r2 = "AES"
            r1.<init>(r3, r2)
            java.lang.String r3 = "AES/CTR/NoPadding"
            javax.crypto.Cipher r3 = javax.crypto.Cipher.getInstance(r3)
            javax.crypto.spec.IvParameterSpec r2 = new javax.crypto.spec.IvParameterSpec
            r2.<init>(r4)
            r4 = 2
            r3.init(r4, r1, r2)
            byte[] r3 = r3.doFinal(r0)
            java.lang.String r4 = new java.lang.String
            r4.<init>(r3)
            return r4
    }

    public static java.lang.String encrypt(java.lang.String r1) {
            java.lang.String r0 = "isvrbeT7qUywVEZ1Ia0/aUVA/TcFaeV0wC8qFLc8rg4="
            java.lang.String r1 = encrypt(r0, r1)     // Catch: java.lang.Exception -> L7
            return r1
        L7:
            r1 = move-exception
            java.lang.String r1 = r1.getLocalizedMessage()
            com.heytap.mcssdk.utils.d.b(r1)
            java.lang.String r1 = ""
            return r1
    }

    public static java.lang.String encrypt(java.lang.String r2, java.lang.String r3) {
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec
            byte[] r2 = com.heytap.msp.push.encrypt.a.b(r2)
            java.lang.String r1 = "AES"
            r0.<init>(r2, r1)
            java.lang.String r2 = "AES/CTR/NoPadding"
            javax.crypto.Cipher r2 = javax.crypto.Cipher.getInstance(r2)
            r1 = 1
            r2.init(r1, r0)
            byte[] r0 = r2.getIV()
            java.lang.String r0 = com.heytap.msp.push.encrypt.a.d(r0)
            byte[] r3 = r3.getBytes()
            byte[] r2 = r2.doFinal(r3)
            java.lang.String r2 = com.heytap.msp.push.encrypt.a.d(r2)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r2)
            java.lang.String r2 = "%IV1%"
            r3.append(r2)
            r3.append(r0)
            java.lang.String r2 = r3.toString()
            return r2
    }

    public static java.lang.String genKey() {
            java.lang.String r0 = "AES"
            javax.crypto.KeyGenerator r0 = javax.crypto.KeyGenerator.getInstance(r0)
            r1 = 256(0x100, float:3.59E-43)
            r0.init(r1)
            javax.crypto.SecretKey r0 = r0.generateKey()
            byte[] r0 = r0.getEncoded()
            java.lang.String r0 = com.heytap.msp.push.encrypt.a.d(r0)
            return r0
    }
}
