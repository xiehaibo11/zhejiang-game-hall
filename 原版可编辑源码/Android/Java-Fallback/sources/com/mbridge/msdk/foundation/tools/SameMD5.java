package com.mbridge.msdk.foundation.tools;

public class SameMD5 implements com.mbridge.msdk.system.NoProGuard {
    public static final java.lang.String TAG = "MD5";

    public SameMD5() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String ByteArrayToHexString(byte[] r6) {
            java.lang.String r0 = ""
            if (r6 != 0) goto L5
            return r0
        L5:
            int r1 = r6.length
            if (r1 != 0) goto L9
            return r0
        L9:
            int r0 = r6.length
            int r0 = r0 * 2
            byte[] r1 = new byte[r0]
            r2 = 0
            r3 = r2
        L10:
            if (r3 >= r0) goto L19
            r4 = 48
            r1[r3] = r4
            int r3 = r3 + 1
            goto L10
        L19:
            int r3 = r6.length
            r4 = 1
            int r3 = r3 + r4
            byte[] r3 = new byte[r3]
            r3[r2] = r2
            int r5 = r6.length
            java.lang.System.arraycopy(r6, r2, r3, r4, r5)
            java.math.BigInteger r6 = new java.math.BigInteger
            r6.<init>(r3)
            r3 = 16
            java.lang.String r6 = r6.toString(r3)
            byte[] r6 = r6.getBytes()
            int r3 = r6.length
            int r0 = r0 - r3
            int r3 = r6.length
            java.lang.System.arraycopy(r6, r2, r1, r0, r3)
            java.lang.String r6 = new java.lang.String
            r6.<init>(r1)
            return r6
    }

    private static java.lang.String HexEncode(byte[] r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            int r1 = r5.length
            int r1 = r1 * 2
            r0.<init>(r1)
            int r1 = r5.length
            r2 = 0
        La:
            if (r2 >= r1) goto L25
            r3 = r5[r2]
            r4 = r3 & 240(0xf0, float:3.36E-43)
            int r4 = r4 >>> 4
            java.lang.String r4 = java.lang.Integer.toHexString(r4)
            r0.append(r4)
            r3 = r3 & 15
            java.lang.String r3 = java.lang.Integer.toHexString(r3)
            r0.append(r3)
            int r2 = r2 + 1
            goto La
        L25:
            java.lang.String r5 = r0.toString()
            java.util.Locale r0 = java.util.Locale.US
            java.lang.String r5 = r5.toLowerCase(r0)
            return r5
    }

    private static java.lang.String UpHexEncode(byte[] r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            int r1 = r5.length
            int r1 = r1 * 2
            r0.<init>(r1)
            int r1 = r5.length
            r2 = 0
        La:
            if (r2 >= r1) goto L25
            r3 = r5[r2]
            r4 = r3 & 240(0xf0, float:3.36E-43)
            int r4 = r4 >>> 4
            java.lang.String r4 = java.lang.Integer.toHexString(r4)
            r0.append(r4)
            r3 = r3 & 15
            java.lang.String r3 = java.lang.Integer.toHexString(r3)
            r0.append(r3)
            int r2 = r2 + 1
            goto La
        L25:
            java.lang.String r5 = r0.toString()
            java.util.Locale r0 = java.util.Locale.US
            java.lang.String r5 = r5.toUpperCase(r0)
            return r5
    }

    public static java.lang.String getMD5(java.lang.String r2) {
            java.lang.String r0 = "MD5"
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 == 0) goto L9
            return r2
        L9:
            com.mbridge.msdk.foundation.tools.z.a(r0, r2)     // Catch: java.security.NoSuchAlgorithmException -> L23
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> L23
            r0.reset()     // Catch: java.security.NoSuchAlgorithmException -> L23
            byte[] r2 = r2.getBytes()     // Catch: java.security.NoSuchAlgorithmException -> L23
            r0.update(r2)     // Catch: java.security.NoSuchAlgorithmException -> L23
            byte[] r2 = r0.digest()     // Catch: java.security.NoSuchAlgorithmException -> L23
            java.lang.String r2 = HexEncode(r2)     // Catch: java.security.NoSuchAlgorithmException -> L23
            return r2
        L23:
            r2 = move-exception
            r2.printStackTrace()
            java.lang.String r2 = ""
            return r2
    }

    public static java.lang.String getQftJSMD5(java.lang.String r9) {
            byte[] r9 = getQftJSMD5Bytes(r9)     // Catch: java.lang.Exception -> L91
            r0 = 16
            char[] r0 = new char[r0]     // Catch: java.lang.Exception -> L91
            r1 = 48
            r2 = 0
            r0[r2] = r1     // Catch: java.lang.Exception -> L91
            r1 = 49
            r3 = 1
            r0[r3] = r1     // Catch: java.lang.Exception -> L91
            r1 = 50
            r3 = 2
            r0[r3] = r1     // Catch: java.lang.Exception -> L91
            r1 = 3
            r3 = 51
            r0[r1] = r3     // Catch: java.lang.Exception -> L91
            r1 = 52
            r3 = 4
            r0[r3] = r1     // Catch: java.lang.Exception -> L91
            r1 = 5
            r3 = 53
            r0[r1] = r3     // Catch: java.lang.Exception -> L91
            r1 = 6
            r3 = 54
            r0[r1] = r3     // Catch: java.lang.Exception -> L91
            r1 = 7
            r3 = 55
            r0[r1] = r3     // Catch: java.lang.Exception -> L91
            r1 = 8
            r3 = 56
            r0[r1] = r3     // Catch: java.lang.Exception -> L91
            r1 = 9
            r3 = 57
            r0[r1] = r3     // Catch: java.lang.Exception -> L91
            r1 = 10
            r3 = 97
            r0[r1] = r3     // Catch: java.lang.Exception -> L91
            r1 = 11
            r3 = 98
            r0[r1] = r3     // Catch: java.lang.Exception -> L91
            r1 = 12
            r3 = 99
            r0[r1] = r3     // Catch: java.lang.Exception -> L91
            r1 = 13
            r3 = 100
            r0[r1] = r3     // Catch: java.lang.Exception -> L91
            r1 = 14
            r3 = 101(0x65, float:1.42E-43)
            r0[r1] = r3     // Catch: java.lang.Exception -> L91
            r1 = 102(0x66, float:1.43E-43)
            r3 = 15
            r0[r3] = r1     // Catch: java.lang.Exception -> L91
            java.lang.String r1 = "MD5"
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r1)     // Catch: java.lang.Exception -> L91
            r1.update(r9)     // Catch: java.lang.Exception -> L91
            byte[] r9 = r1.digest()     // Catch: java.lang.Exception -> L91
            int r1 = r9.length     // Catch: java.lang.Exception -> L91
            int r4 = r1 * 2
            char[] r4 = new char[r4]     // Catch: java.lang.Exception -> L91
            r5 = r2
        L73:
            if (r2 >= r1) goto L8b
            r6 = r9[r2]     // Catch: java.lang.Exception -> L91
            int r7 = r5 + 1
            int r8 = r6 >>> 4
            r8 = r8 & r3
            char r8 = r0[r8]     // Catch: java.lang.Exception -> L91
            r4[r5] = r8     // Catch: java.lang.Exception -> L91
            int r5 = r7 + 1
            r6 = r6 & 15
            char r6 = r0[r6]     // Catch: java.lang.Exception -> L91
            r4[r7] = r6     // Catch: java.lang.Exception -> L91
            int r2 = r2 + 1
            goto L73
        L8b:
            java.lang.String r9 = new java.lang.String     // Catch: java.lang.Exception -> L91
            r9.<init>(r4)     // Catch: java.lang.Exception -> L91
            return r9
        L91:
            r9 = move-exception
            r9.printStackTrace()
            java.lang.String r9 = ""
            return r9
    }

    public static byte[] getQftJSMD5Bytes(java.lang.String r7) throws java.io.UnsupportedEncodingException {
            int r0 = r7.length()
            java.lang.String r1 = "UTF-16LE"
            byte[] r7 = r7.getBytes(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "b = "
            r1.append(r2)
            java.lang.String r2 = ByteArrayToHexString(r7)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "----"
            com.mbridge.msdk.foundation.tools.z.b(r2, r1)
            byte[] r1 = new byte[r0]
            r3 = 0
            r4 = r3
        L28:
            int r5 = r7.length
            if (r3 >= r5) goto L42
            r5 = r7[r3]
            r6 = -1
            if (r5 == r6) goto L3f
            r5 = r7[r3]
            r6 = -2
            if (r5 != r6) goto L36
            goto L3f
        L36:
            r5 = r7[r3]
            r1[r4] = r5
            int r4 = r4 + 1
            if (r4 != r0) goto L3f
            goto L42
        L3f:
            int r3 = r3 + 2
            goto L28
        L42:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "source = "
            r7.append(r0)
            java.lang.String r0 = ByteArrayToHexString(r1)
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            com.mbridge.msdk.foundation.tools.z.b(r2, r7)
            return r1
    }

    public static java.lang.String getUPMD5(java.lang.String r1) {
            java.lang.String r0 = "MD5"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)     // Catch: java.security.NoSuchAlgorithmException -> L1c
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> L1c
            r0.reset()     // Catch: java.security.NoSuchAlgorithmException -> L1c
            byte[] r1 = r1.getBytes()     // Catch: java.security.NoSuchAlgorithmException -> L1c
            r0.update(r1)     // Catch: java.security.NoSuchAlgorithmException -> L1c
            byte[] r1 = r0.digest()     // Catch: java.security.NoSuchAlgorithmException -> L1c
            java.lang.String r1 = UpHexEncode(r1)     // Catch: java.security.NoSuchAlgorithmException -> L1c
            return r1
        L1c:
            r1 = move-exception
            r1.printStackTrace()
            java.lang.String r1 = ""
            return r1
    }
}
