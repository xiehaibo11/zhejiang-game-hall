package com.bianfeng.fastvo.util;

public class SecurityUtil {
    public SecurityUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void appendNumber(java.lang.StringBuilder r2, int r3, int r4) {
            java.lang.String r4 = java.lang.Integer.toString(r4)
            r0 = 0
        L5:
            int r1 = r4.length()
            int r1 = r3 - r1
            if (r0 >= r1) goto L15
            r1 = 48
            r2.append(r1)
            int r0 = r0 + 1
            goto L5
        L15:
            r2.append(r4)
            return
    }

    public static java.lang.String bytesToHexString(byte[] r6) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            if (r6 == 0) goto L2d
            int r1 = r6.length
            if (r1 > 0) goto Lb
            goto L2d
        Lb:
            r1 = 0
            r2 = 0
        Ld:
            int r3 = r6.length
            if (r2 >= r3) goto L28
            r3 = r6[r2]
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
            java.lang.String r6 = r0.toString()
            return r6
        L2d:
            r6 = 0
            return r6
    }

    private static java.lang.String createGmtOffsetString(int r3) {
            r0 = 60000(0xea60, float:8.4078E-41)
            int r3 = r3 / r0
            if (r3 >= 0) goto La
            r0 = 45
            int r3 = -r3
            goto Lc
        La:
            r0 = 43
        Lc:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r2 = 9
            r1.<init>(r2)
            r1.append(r0)
            int r0 = r3 / 60
            r2 = 2
            appendNumber(r1, r2, r0)
            r0 = 58
            r1.append(r0)
            int r3 = r3 % 60
            appendNumber(r1, r2, r3)
            java.lang.String r3 = r1.toString()
            return r3
    }

    public static java.lang.String getSign(java.lang.String r6) {
            java.util.TimeZone r0 = java.util.TimeZone.getDefault()
            int r0 = r0.getRawOffset()
            java.lang.String r0 = createGmtOffsetString(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.text.SimpleDateFormat r2 = new java.text.SimpleDateFormat
            java.lang.String r3 = "yyyy-MM-dd'T'HH:mm:ss"
            r2.<init>(r3)
            java.util.Date r3 = new java.util.Date
            r3.<init>()
            java.lang.String r2 = r2.format(r3)
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L51
            r1.<init>()     // Catch: java.lang.Exception -> L51
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L51
            r1.append(r2)     // Catch: java.lang.Exception -> L51
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r2 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()     // Catch: java.lang.Exception -> L51
            java.lang.String r2 = r2.getDeviceId()     // Catch: java.lang.Exception -> L51
            java.lang.String r3 = "UTF-8"
            java.lang.String r2 = java.net.URLEncoder.encode(r2, r3)     // Catch: java.lang.Exception -> L51
            r1.append(r2)     // Catch: java.lang.Exception -> L51
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L51
            java.lang.String r1 = com.bianfeng.fastvo.util.SystemUtil.md5(r1)     // Catch: java.lang.Exception -> L51
            goto L57
        L51:
            r1 = move-exception
            r1.printStackTrace()
            java.lang.String r1 = ""
        L57:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "\n"
            java.lang.String r4 = "Shield"
            r2.append(r4)
            r2.append(r3)
            java.lang.String r4 = "50027.fpftrrdlrs"
            r2.append(r4)
            r2.append(r3)
            r2.append(r0)
            r2.append(r3)
            r2.append(r1)
            r2.append(r3)
            java.lang.String r5 = "GET"
            r2.append(r5)
            r2.append(r3)
            java.lang.String r5 = "/storage/oss/sts"
            r2.append(r5)
            r2.append(r3)
            r2.append(r6)
            r2.append(r3)
            java.lang.String r6 = "e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855"
            r2.append(r6)
            java.lang.String r6 = r2.toString()
            java.lang.String r2 = "54d3c9ce57288b607d6f92661a8b6c8f"
            java.lang.String r6 = hmacSha256(r6, r2)
            r2 = 4
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            r2[r3] = r4
            r3 = 1
            r2[r3] = r0
            r0 = 2
            r2[r0] = r1
            r0 = 3
            r2[r0] = r6
            java.lang.String r6 = "Shield RequestKey=%s, RequestTime=%s, Nonce=%s, Signature=%s"
            java.lang.String r6 = java.lang.String.format(r6, r2)
            return r6
    }

    public static java.lang.String hmacSha256(java.lang.String r2, java.lang.String r3) {
            java.lang.String r0 = "HmacSHA256"
            javax.crypto.spec.SecretKeySpec r1 = new javax.crypto.spec.SecretKeySpec     // Catch: java.security.InvalidKeyException -> L1f java.security.NoSuchAlgorithmException -> L24
            byte[] r3 = r3.getBytes()     // Catch: java.security.InvalidKeyException -> L1f java.security.NoSuchAlgorithmException -> L24
            r1.<init>(r3, r0)     // Catch: java.security.InvalidKeyException -> L1f java.security.NoSuchAlgorithmException -> L24
            javax.crypto.Mac r3 = javax.crypto.Mac.getInstance(r0)     // Catch: java.security.InvalidKeyException -> L1f java.security.NoSuchAlgorithmException -> L24
            r3.init(r1)     // Catch: java.security.InvalidKeyException -> L1f java.security.NoSuchAlgorithmException -> L24
            byte[] r2 = r2.getBytes()     // Catch: java.security.InvalidKeyException -> L1f java.security.NoSuchAlgorithmException -> L24
            byte[] r2 = r3.doFinal(r2)     // Catch: java.security.InvalidKeyException -> L1f java.security.NoSuchAlgorithmException -> L24
            java.lang.String r2 = bytesToHexString(r2)     // Catch: java.security.InvalidKeyException -> L1f java.security.NoSuchAlgorithmException -> L24
            return r2
        L1f:
            r2 = move-exception
            r2.printStackTrace()
            goto L28
        L24:
            r2 = move-exception
            r2.printStackTrace()
        L28:
            r2 = 0
            return r2
    }

    public static java.lang.String md5(java.lang.String r1) {
            r0 = 32
            java.lang.String r1 = md5(r1, r0)     // Catch: java.lang.Exception -> L7
            return r1
        L7:
            r1 = move-exception
            r1.printStackTrace()
            r1 = 0
            return r1
    }

    public static java.lang.String md5(java.lang.String r2, int r3) {
            java.lang.String r0 = "MD5.algorithm"
            java.lang.String r1 = "MD5"
            java.lang.String r0 = java.lang.System.getProperty(r0, r1)     // Catch: java.lang.Exception -> L2c
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Exception -> L2c
            java.lang.String r1 = "utf-8"
            byte[] r2 = r2.getBytes(r1)     // Catch: java.lang.Exception -> L2c
            byte[] r2 = r0.digest(r2)     // Catch: java.lang.Exception -> L2c
            r0 = 16
            if (r3 != r0) goto L27
            java.lang.String r2 = bytesToHexString(r2)     // Catch: java.lang.Exception -> L2c
            r3 = 8
            r0 = 24
            java.lang.String r2 = r2.substring(r3, r0)     // Catch: java.lang.Exception -> L2c
            return r2
        L27:
            java.lang.String r2 = bytesToHexString(r2)     // Catch: java.lang.Exception -> L2c
            return r2
        L2c:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
            return r2
    }
}
