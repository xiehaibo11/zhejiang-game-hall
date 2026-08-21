package com.qihoo360.loader.utils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class StringUtils {
    private static final char[] HEX_DIGITS = null;

    static {
            r0 = 16
            char[] r0 = new char[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 65, 66, 67, 68, 69, 70} // fill-array
            com.qihoo360.loader.utils.StringUtils.HEX_DIGITS = r0
            return
    }

    public StringUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static char lastChar(java.lang.String r1) {
            int r0 = r1.length()
            int r0 = r0 + (-1)
            char r1 = r1.charAt(r0)
            return r1
    }

    public static final java.lang.String md5base64(byte[] r1) throws java.security.NoSuchAlgorithmException {
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)
            r0.update(r1)
            byte[] r1 = r0.digest()
            r0 = 19
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r0)
            return r1
    }

    public static final java.lang.String toHexString(byte[] r6) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            int r1 = r6.length
            int r1 = r1 * 2
            r0.<init>(r1)
            int r1 = r6.length
            r2 = 0
        La:
            if (r2 >= r1) goto L25
            r3 = r6[r2]
            char[] r4 = com.qihoo360.loader.utils.StringUtils.HEX_DIGITS
            r5 = r3 & 240(0xf0, float:3.36E-43)
            int r5 = r5 >> 4
            char r4 = r4[r5]
            r0.append(r4)
            char[] r4 = com.qihoo360.loader.utils.StringUtils.HEX_DIGITS
            r3 = r3 & 15
            char r3 = r4[r3]
            r0.append(r3)
            int r2 = r2 + 1
            goto La
        L25:
            java.lang.String r6 = r0.toString()
            return r6
    }

    public static java.lang.String toStringWithLines(java.util.List<?> r2) {
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = ", "
            java.lang.String r1 = ", \n"
            java.lang.String r2 = r2.replace(r0, r1)
            return r2
    }

    public static final java.lang.String utf8md5base64(java.lang.String r0) throws java.security.NoSuchAlgorithmException {
            byte[] r0 = r0.getBytes()
            java.lang.String r0 = md5base64(r0)
            return r0
    }
}
