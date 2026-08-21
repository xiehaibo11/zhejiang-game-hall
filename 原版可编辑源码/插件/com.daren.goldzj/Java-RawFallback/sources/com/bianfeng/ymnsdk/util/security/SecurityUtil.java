package com.bianfeng.ymnsdk.util.security;

public class SecurityUtil {
    private static final java.lang.String SIGN_APP_SECREAT = "c986f7b40c468a3a3b1087d0eb08628b";
    private static volatile com.bianfeng.ymnsdk.util.security.SecurityUtil util;
    private com.bianfeng.ymnsdk.util.security.DecodeUtil decodeUtil;
    private com.bianfeng.ymnsdk.util.security.SHA256_HMACUtil hmacUtil;
    private com.bianfeng.ymnsdk.util.security.PayTokenUtils payTokenUtils;
    private com.bianfeng.ymnsdk.util.security.RSASignature rsaSignature;
    private com.bianfeng.ymnsdk.util.security.URLDecoderUtils urlDecoderUtils;

    private SecurityUtil() {
            r1 = this;
            r1.<init>()
            com.bianfeng.ymnsdk.util.security.URLDecoderUtils r0 = new com.bianfeng.ymnsdk.util.security.URLDecoderUtils
            r0.<init>()
            r1.urlDecoderUtils = r0
            com.bianfeng.ymnsdk.util.security.SHA256_HMACUtil r0 = new com.bianfeng.ymnsdk.util.security.SHA256_HMACUtil
            r0.<init>()
            r1.hmacUtil = r0
            com.bianfeng.ymnsdk.util.security.RSASignature r0 = new com.bianfeng.ymnsdk.util.security.RSASignature
            r0.<init>()
            r1.rsaSignature = r0
            com.bianfeng.ymnsdk.util.security.DecodeUtil r0 = new com.bianfeng.ymnsdk.util.security.DecodeUtil
            r0.<init>()
            r1.decodeUtil = r0
            com.bianfeng.ymnsdk.util.security.PayTokenUtils r0 = new com.bianfeng.ymnsdk.util.security.PayTokenUtils
            r0.<init>()
            r1.payTokenUtils = r0
            return
    }

    public static com.bianfeng.ymnsdk.util.security.SecurityUtil getInstance() {
            com.bianfeng.ymnsdk.util.security.SecurityUtil r0 = com.bianfeng.ymnsdk.util.security.SecurityUtil.util
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.ymnsdk.util.security.SecurityUtil> r0 = com.bianfeng.ymnsdk.util.security.SecurityUtil.class
            monitor-enter(r0)
            com.bianfeng.ymnsdk.util.security.SecurityUtil r1 = com.bianfeng.ymnsdk.util.security.SecurityUtil.util     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.ymnsdk.util.security.SecurityUtil r1 = new com.bianfeng.ymnsdk.util.security.SecurityUtil     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.ymnsdk.util.security.SecurityUtil.util = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.ymnsdk.util.security.SecurityUtil r0 = com.bianfeng.ymnsdk.util.security.SecurityUtil.util
            return r0
    }

    java.lang.String addContent(java.lang.String r4) {
            r3 = this;
            int r0 = r4.length()
            int r1 = r0 / 16
            int r1 = r1 * 16
            int r0 = r0 - r1
            r1 = 0
        La:
            if (r1 >= r0) goto L20
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r4)
            java.lang.String r4 = "?"
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            int r1 = r1 + 1
            goto La
        L20:
            return r4
    }

    public byte[] aesDecrypt(byte[] r4, java.lang.String r5) {
            r3 = this;
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Exception -> L25
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Exception -> L25
            java.lang.String r1 = "AES"
            r0.<init>(r5, r1)     // Catch: java.lang.Exception -> L25
            java.lang.String r5 = "AES/CBC/PKCS5Padding"
            javax.crypto.Cipher r5 = javax.crypto.Cipher.getInstance(r5)     // Catch: java.lang.Exception -> L25
            javax.crypto.spec.IvParameterSpec r1 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Exception -> L25
            java.lang.String r2 = "0102030405060708"
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Exception -> L25
            r1.<init>(r2)     // Catch: java.lang.Exception -> L25
            r2 = 2
            r5.init(r2, r0, r1)     // Catch: java.lang.Exception -> L25
            byte[] r4 = r5.doFinal(r4)     // Catch: java.lang.Exception -> L25
            return r4
        L25:
            r4 = move-exception
            r4.printStackTrace()
            r4 = 0
            return r4
    }

    @android.annotation.SuppressLint({"TrulyRandom"})
    public byte[] aesEncrypt(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Exception -> L2b
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Exception -> L2b
            java.lang.String r1 = "AES"
            r0.<init>(r5, r1)     // Catch: java.lang.Exception -> L2b
            java.lang.String r5 = "AES/CBC/PKCS5Padding"
            javax.crypto.Cipher r5 = javax.crypto.Cipher.getInstance(r5)     // Catch: java.lang.Exception -> L2b
            java.lang.String r1 = "utf-8"
            byte[] r4 = r4.getBytes(r1)     // Catch: java.lang.Exception -> L2b
            javax.crypto.spec.IvParameterSpec r1 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Exception -> L2b
            java.lang.String r2 = "0102030405060708"
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Exception -> L2b
            r1.<init>(r2)     // Catch: java.lang.Exception -> L2b
            r2 = 1
            r5.init(r2, r0, r1)     // Catch: java.lang.Exception -> L2b
            byte[] r4 = r5.doFinal(r4)     // Catch: java.lang.Exception -> L2b
            return r4
        L2b:
            r4 = move-exception
            r4.printStackTrace()
            r4 = 0
            return r4
    }

    public java.lang.String bytesToHexString(byte[] r7) {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            if (r7 == 0) goto L2d
            int r1 = r7.length
            if (r1 > 0) goto Lb
            goto L2d
        Lb:
            r1 = 0
            r2 = 0
        Ld:
            int r3 = r7.length
            if (r2 >= r3) goto L28
            r3 = r7[r2]
            r3 = r3 & 255(0xff, float:3.57E-43)
            java.lang.String r3 = java.lang.Integer.toHexString(r3)
            int r4 = r3.length()
            r5 = 2
            if (r4 >= r5) goto L22
            r0.append(r1)
        L22:
            r0.append(r3)
            int r2 = r2 + 1
            goto Ld
        L28:
            java.lang.String r7 = r0.toString()
            return r7
        L2d:
            r7 = 0
            return r7
    }

    byte charToByte(char r2) {
            r1 = this;
            java.lang.String r0 = "0123456789ABCDEF"
            int r2 = r0.indexOf(r2)
            byte r2 = (byte) r2
            return r2
    }

    public byte[] decode(byte[] r2) {
            r1 = this;
            com.bianfeng.ymnsdk.util.security.DecodeUtil r0 = r1.decodeUtil
            byte[] r2 = r0.decode(r2)
            return r2
    }

    public boolean doCheck(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.bianfeng.ymnsdk.util.security.RSASignature r0 = r1.rsaSignature
            boolean r2 = r0.doCheck(r2, r3)
            return r2
    }

    public java.lang.String getPaySignatue(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r1 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r1 = r1.getAppContext()
            int r1 = r1.getAppId()
            r0.append(r1)
            java.lang.String r1 = "&"
            r0.append(r1)
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r2 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r2 = r2.getAppContext()
            int r2 = r2.getIdentify_id()
            r0.append(r2)
            r0.append(r1)
            r0.append(r5)
            r0.append(r1)
            r0.append(r4)
            r0.append(r1)
            java.lang.String r4 = com.bianfeng.ymnsdk.util.YmnAppContext.getSdkAppKey()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.String r4 = r3.md5(r4)     // Catch: java.lang.Exception -> L47
            return r4
        L47:
            java.lang.String r4 = ""
            return r4
    }

    public java.lang.String getPayToken(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.bianfeng.ymnsdk.util.security.PayTokenUtils r0 = r1.payTokenUtils
            java.lang.String r2 = r0.getPayToken(r2, r3)
            return r2
    }

    public java.lang.String getSign(java.util.TreeMap<java.lang.String, java.lang.String> r2) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r1 = this;
            java.lang.String r0 = "c986f7b40c468a3a3b1087d0eb08628b"
            java.lang.String r2 = r1.getSign(r2, r0)
            return r2
    }

    public java.lang.String getSign(java.util.TreeMap<java.lang.String, java.lang.String> r5, java.lang.String r6) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Set r5 = r5.entrySet()
            java.util.Iterator r5 = r5.iterator()
        Ld:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L42
            java.lang.Object r1 = r5.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r1.getValue()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r2)
            java.lang.String r2 = "="
            r3.append(r2)
            r3.append(r1)
            java.lang.String r1 = "&"
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            r0.append(r1)
            goto Ld
        L42:
            r0.append(r6)
            java.lang.String r5 = r0.toString()
            java.lang.String r5 = r4.md5(r5)
            return r5
    }

    public byte[] hexStringToBytes(java.lang.String r6) {
            r5 = this;
            if (r6 == 0) goto L3c
            java.lang.String r0 = ""
            boolean r0 = r6.equals(r0)
            if (r0 == 0) goto Lb
            goto L3c
        Lb:
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.lang.String r6 = r6.toUpperCase(r0)
            int r0 = r6.length()
            int r0 = r0 / 2
            char[] r6 = r6.toCharArray()
            byte[] r1 = new byte[r0]
            r2 = 0
        L20:
            if (r2 >= r0) goto L3b
            int r3 = r2 * 2
            char r4 = r6[r3]
            byte r4 = r5.charToByte(r4)
            int r4 = r4 << 4
            int r3 = r3 + 1
            char r3 = r6[r3]
            byte r3 = r5.charToByte(r3)
            r3 = r3 | r4
            byte r3 = (byte) r3
            r1[r2] = r3
            int r2 = r2 + 1
            goto L20
        L3b:
            return r1
        L3c:
            r6 = 0
            return r6
    }

    public java.lang.String md5(java.lang.String r2) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r1 = this;
            r0 = 32
            java.lang.String r2 = r1.md5(r2, r0)     // Catch: java.lang.Exception -> L7
            return r2
        L7:
            r2 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r0 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            r0.<init>(r2)
            throw r0
    }

    public java.lang.String md5(java.lang.String r3, int r4) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r2 = this;
            java.lang.String r0 = "MD5.algorithm"
            java.lang.String r1 = "MD5"
            java.lang.String r0 = java.lang.System.getProperty(r0, r1)     // Catch: java.lang.Exception -> L2c
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Exception -> L2c
            java.lang.String r1 = "utf-8"
            byte[] r3 = r3.getBytes(r1)     // Catch: java.lang.Exception -> L2c
            byte[] r3 = r0.digest(r3)     // Catch: java.lang.Exception -> L2c
            r0 = 16
            if (r4 != r0) goto L27
            java.lang.String r3 = r2.bytesToHexString(r3)     // Catch: java.lang.Exception -> L2c
            r4 = 8
            r0 = 24
            java.lang.String r3 = r3.substring(r4, r0)     // Catch: java.lang.Exception -> L2c
            return r3
        L27:
            java.lang.String r3 = r2.bytesToHexString(r3)     // Catch: java.lang.Exception -> L2c
            return r3
        L2c:
            r3 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r4 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            r4.<init>(r3)
            throw r4
    }

    public void mixByte(byte[] r9) {
            r8 = this;
            r0 = 1
            r1 = 1
        L2:
            int r2 = r9.length
            if (r1 >= r2) goto L30
            int r2 = r1 + (-1)
            r3 = r9[r2]
            r3 = r3 & 240(0xf0, float:3.36E-43)
            r4 = r9[r2]
            r4 = r4 & 15
            r5 = r9[r1]
            r5 = r5 & 240(0xf0, float:3.36E-43)
            r6 = r9[r1]
            r6 = r6 & 15
            r7 = r1 & 1
            if (r7 != r0) goto L25
            r3 = r3 | r6
            byte r3 = (byte) r3
            r9[r1] = r3
            r3 = r5 | r4
            byte r3 = (byte) r3
            r9[r2] = r3
            goto L2d
        L25:
            r4 = r4 | r5
            byte r4 = (byte) r4
            r9[r1] = r4
            r3 = r3 | r6
            byte r3 = (byte) r3
            r9[r2] = r3
        L2d:
            int r1 = r1 + 1
            goto L2
        L30:
            return
    }

    public java.lang.String mixDecrypt(java.lang.String r2) {
            r1 = this;
            byte[] r2 = r1.hexStringToBytes(r2)
            r1.resolveByte(r2)
            java.lang.String r0 = "linxcool_aes_mix"
            byte[] r2 = r1.aesDecrypt(r2, r0)
            java.lang.String r0 = new java.lang.String
            r0.<init>(r2)
            java.lang.String r2 = r1.reduceCotent(r0)
            return r2
    }

    public java.lang.String mixEncrypt(java.lang.String r2) {
            r1 = this;
            java.lang.String r2 = r1.addContent(r2)
            java.lang.String r0 = "linxcool_aes_mix"
            byte[] r2 = r1.aesEncrypt(r2, r0)
            r1.mixByte(r2)
            java.lang.String r2 = r1.bytesToHexString(r2)
            return r2
    }

    java.lang.String reduceCotent(java.lang.String r5) {
            r4 = this;
            java.lang.String r0 = ""
            r1 = 0
        L3:
            int r2 = r5.length()
            if (r1 >= r2) goto L23
            char r2 = r5.charAt(r1)
            r3 = 63
            if (r2 == r3) goto L23
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            r3.append(r2)
            java.lang.String r0 = r3.toString()
            int r1 = r1 + 1
            goto L3
        L23:
            return r0
    }

    public void resolveByte(byte[] r9) {
            r8 = this;
            int r0 = r9.length
            r1 = 1
            int r0 = r0 - r1
        L3:
            if (r0 <= 0) goto L30
            int r2 = r0 + (-1)
            r3 = r9[r2]
            r3 = r3 & 240(0xf0, float:3.36E-43)
            r4 = r9[r2]
            r4 = r4 & 15
            r5 = r9[r0]
            r5 = r5 & 240(0xf0, float:3.36E-43)
            r6 = r9[r0]
            r6 = r6 & 15
            r7 = r0 & 1
            if (r7 != r1) goto L25
            r3 = r3 | r6
            byte r3 = (byte) r3
            r9[r0] = r3
            r3 = r5 | r4
            byte r3 = (byte) r3
            r9[r2] = r3
            goto L2d
        L25:
            r4 = r4 | r5
            byte r4 = (byte) r4
            r9[r0] = r4
            r3 = r3 | r6
            byte r3 = (byte) r3
            r9[r2] = r3
        L2d:
            int r0 = r0 + (-1)
            goto L3
        L30:
            return
    }

    public byte[] sha256_HMAC(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.bianfeng.ymnsdk.util.security.SHA256_HMACUtil r0 = r1.hmacUtil
            byte[] r2 = r0.sha256_HMAC(r2, r3)
            return r2
    }

    public java.lang.String urlDecoder(java.lang.String r2) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r1 = this;
            com.bianfeng.ymnsdk.util.security.URLDecoderUtils r0 = r1.urlDecoderUtils
            java.lang.String r2 = r0.decode(r2)
            return r2
    }

    public java.lang.String urlEncode(java.lang.String r2) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r1 = this;
            com.bianfeng.ymnsdk.util.security.URLDecoderUtils r0 = r1.urlDecoderUtils
            java.lang.String r2 = r0.encode(r2)
            return r2
    }
}
