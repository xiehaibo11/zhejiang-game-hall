package com.bianfeng.ymnsdk.utilslib.security;

public class AESGCM256 {
    private static java.lang.String a;
    private static java.lang.String b;
    private static java.lang.String c;
    private static java.lang.String d;
    private static java.lang.String hexString;

    static {
            java.lang.String r0 = "0123456789abcdef"
            com.bianfeng.ymnsdk.utilslib.security.AESGCM256.hexString = r0
            java.lang.String r0 = "66633064336"
            com.bianfeng.ymnsdk.utilslib.security.AESGCM256.a = r0
            java.lang.String r0 = "3032396433616535343"
            com.bianfeng.ymnsdk.utilslib.security.AESGCM256.b = r0
            java.lang.String r0 = "136636666313737323138"
            com.bianfeng.ymnsdk.utilslib.security.AESGCM256.c = r0
            java.lang.String r0 = "1363333366261"
            com.bianfeng.ymnsdk.utilslib.security.AESGCM256.d = r0
            return
    }

    public AESGCM256() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String decode(java.lang.String r5) throws java.io.UnsupportedEncodingException {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            int r1 = r5.length()
            int r1 = r1 / 2
            r0.<init>(r1)
            r1 = 0
        Lc:
            int r2 = r5.length()
            if (r1 >= r2) goto L31
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.security.AESGCM256.hexString
            char r3 = r5.charAt(r1)
            int r2 = r2.indexOf(r3)
            int r2 = r2 << 4
            java.lang.String r3 = com.bianfeng.ymnsdk.utilslib.security.AESGCM256.hexString
            int r4 = r1 + 1
            char r4 = r5.charAt(r4)
            int r3 = r3.indexOf(r4)
            r2 = r2 | r3
            r0.write(r2)
            int r1 = r1 + 2
            goto Lc
        L31:
            java.lang.String r1 = new java.lang.String
            byte[] r2 = r0.toByteArray()
            java.lang.String r3 = "GBK"
            r1.<init>(r2, r3)
            return r1
    }

    public static java.lang.String decrypt(java.lang.String r9, java.lang.String r10) throws java.lang.Exception {
            java.lang.String r10 = getString(r10)
            r0 = 0
            byte[] r1 = android.util.Base64.decode(r9, r0)
            r2 = 12
            byte[] r3 = new byte[r2]
            int r4 = r1.length
            int r4 = r4 - r2
            byte[] r4 = new byte[r4]
            java.lang.System.arraycopy(r1, r0, r3, r0, r2)
            int r5 = r4.length
            java.lang.System.arraycopy(r1, r2, r4, r0, r5)
            java.lang.String r0 = "AES/GCM/NoPadding"
            javax.crypto.Cipher r0 = javax.crypto.Cipher.getInstance(r0)
            javax.crypto.spec.SecretKeySpec r2 = new javax.crypto.spec.SecretKeySpec
            java.lang.String r5 = "UTF-8"
            byte[] r6 = r10.getBytes(r5)
            java.lang.String r7 = "AES"
            r2.<init>(r6, r7)
            r6 = 0
            int r7 = android.os.Build.VERSION.SDK_INT
            r8 = 19
            if (r7 < r8) goto L48
            javax.crypto.spec.GCMParameterSpec r7 = new javax.crypto.spec.GCMParameterSpec
            r8 = 128(0x80, float:1.8E-43)
            r7.<init>(r8, r3)
            r6 = r7
            r7 = 2
            r0.init(r7, r2, r6)
            byte[] r7 = r0.doFinal(r4)
            java.lang.String r8 = new java.lang.String
            r8.<init>(r7, r5)
            return r8
        L48:
            java.lang.String r5 = "ymnsdk"
            java.lang.String r7 = "--------------------\n母包miniversion请设置为19及以上!!!!!!!!!!!!!!!\n--------------------"
            android.util.Log.e(r5, r7)
            java.lang.String r5 = "母包miniversion请设置为19及以上"
            return r5
    }

    public static java.lang.String encode(java.lang.String r5) {
            byte[] r0 = r5.getBytes()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            int r2 = r0.length
            int r2 = r2 * 2
            r1.<init>(r2)
            r2 = 0
        Ld:
            int r3 = r0.length
            if (r2 >= r3) goto L2f
            java.lang.String r3 = com.bianfeng.ymnsdk.utilslib.security.AESGCM256.hexString
            r4 = r0[r2]
            r4 = r4 & 240(0xf0, float:3.36E-43)
            int r4 = r4 >> 4
            char r3 = r3.charAt(r4)
            r1.append(r3)
            java.lang.String r3 = com.bianfeng.ymnsdk.utilslib.security.AESGCM256.hexString
            r4 = r0[r2]
            r4 = r4 & 15
            char r3 = r3.charAt(r4)
            r1.append(r3)
            int r2 = r2 + 1
            goto Ld
        L2f:
            java.lang.String r2 = r1.toString()
            return r2
    }

    public static java.lang.String encrypt(java.lang.String r10, java.lang.String r11) throws java.lang.Exception {
            java.lang.String r11 = getString(r11)
            byte[] r0 = generateRandomIV()
            java.lang.String r1 = "UTF-8"
            byte[] r2 = r10.getBytes(r1)
            java.lang.String r3 = "AES/GCM/NoPadding"
            javax.crypto.Cipher r3 = javax.crypto.Cipher.getInstance(r3)
            javax.crypto.spec.SecretKeySpec r4 = new javax.crypto.spec.SecretKeySpec
            byte[] r1 = r11.getBytes(r1)
            java.lang.String r5 = "AES"
            r4.<init>(r1, r5)
            r1 = r4
            r4 = 0
            int r5 = android.os.Build.VERSION.SDK_INT
            r6 = 19
            if (r5 < r6) goto L57
            javax.crypto.spec.GCMParameterSpec r5 = new javax.crypto.spec.GCMParameterSpec
            r6 = 128(0x80, float:1.8E-43)
            r5.<init>(r6, r0)
            r4 = r5
            r5 = 1
            r3.init(r5, r1, r4)
            byte[] r5 = r3.doFinal(r2)
            int r6 = r0.length
            int r7 = r5.length
            int r6 = r6 + r7
            byte[] r6 = new byte[r6]
            int r7 = r0.length
            r8 = 0
            java.lang.System.arraycopy(r0, r8, r6, r8, r7)
            int r7 = r0.length
            int r9 = r5.length
            java.lang.System.arraycopy(r5, r8, r6, r7, r9)
            java.lang.String r7 = android.util.Base64.encodeToString(r6, r8)
            java.lang.String r7 = r7.trim()
            java.lang.String r8 = "\n"
            java.lang.String r9 = ""
            java.lang.String r7 = r7.replace(r8, r9)
            return r7
        L57:
            java.lang.String r5 = "ymnsdk"
            java.lang.String r6 = "--------------------\n母包miniversion请设置为19及以上!!!!!!!!!!!!!!!\n--------------------"
            android.util.Log.e(r5, r6)
            java.lang.String r5 = "母包miniversion请设置为19及以上"
            return r5
    }

    private static byte[] generateRandomIV() {
            r0 = 12
            byte[] r0 = new byte[r0]
            return r0
    }

    private static java.lang.String getString(java.lang.String r2) throws java.io.UnsupportedEncodingException {
            if (r2 == 0) goto La
            boolean r0 = r2.isEmpty()
            if (r0 == 0) goto L9
            goto La
        L9:
            return r2
        La:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.security.AESGCM256.a
            r0.append(r1)
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.security.AESGCM256.c
            r0.append(r1)
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.security.AESGCM256.b
            r0.append(r1)
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.security.AESGCM256.d
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r0 = decode(r0)
            return r0
    }
}
