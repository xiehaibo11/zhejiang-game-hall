package com.huawei.hms.framework.common;

public class StringUtils {
    private static final int INIT_CAPACITY = 1024;
    private static boolean IS_AEGIS_STRING_LIBRARY_LOADED = false;
    private static final java.lang.String SAFE_STRING_PATH = "com.huawei.secure.android.common.util.SafeString";
    private static final java.lang.String TAG = "StringUtils";

    static {
            return
    }

    public StringUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String anonymizeMessage(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return r2
        L7:
            char[] r2 = r2.toCharArray()
            r0 = 0
        Lc:
            int r1 = r2.length
            if (r0 >= r1) goto L1a
            int r1 = r0 % 2
            if (r1 == 0) goto L17
            r1 = 42
            r2[r0] = r1
        L17:
            int r0 = r0 + 1
            goto Lc
        L1a:
            java.lang.String r0 = new java.lang.String
            r0.<init>(r2)
            return r0
    }

    public static java.lang.String byte2Str(byte[] r3) {
            java.lang.String r0 = ""
            if (r3 != 0) goto L5
            return r0
        L5:
            java.lang.String r1 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> Ld
            java.lang.String r2 = "UTF-8"
            r1.<init>(r3, r2)     // Catch: java.io.UnsupportedEncodingException -> Ld
            return r1
        Ld:
            r3 = move-exception
            java.lang.String r1 = "StringUtils.byte2str error: UnsupportedEncodingException"
            com.huawei.hms.framework.common.Logger.w(r1, r3)
            return r0
    }

    private static boolean checkCompatible(java.lang.String r2) {
            java.lang.Class<com.huawei.hms.framework.common.SecurityBase64Utils> r0 = com.huawei.hms.framework.common.SecurityBase64Utils.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            r1 = 0
            if (r0 != 0) goto La
            return r1
        La:
            r0.loadClass(r2)     // Catch: java.lang.ClassNotFoundException -> L18
            java.lang.Class<com.huawei.hms.framework.common.StringUtils> r2 = com.huawei.hms.framework.common.StringUtils.class
            monitor-enter(r2)     // Catch: java.lang.ClassNotFoundException -> L18
            r0 = 1
            com.huawei.hms.framework.common.StringUtils.IS_AEGIS_STRING_LIBRARY_LOADED = r0     // Catch: java.lang.Throwable -> L15
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L15
            return r0
        L15:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L15
            throw r0     // Catch: java.lang.ClassNotFoundException -> L18
        L18:
            return r1
    }

    public static java.lang.String format(java.lang.String r1, java.lang.Object... r2) {
            if (r1 != 0) goto L5
            java.lang.String r1 = ""
            return r1
        L5:
            java.util.Locale r0 = java.util.Locale.ROOT
            java.lang.String r1 = java.lang.String.format(r0, r1, r2)
            return r1
    }

    public static byte[] getBytes(long r0) {
            java.lang.String r0 = java.lang.String.valueOf(r0)
            byte[] r0 = getBytes(r0)
            return r0
    }

    public static byte[] getBytes(java.lang.String r2) {
            r0 = 0
            byte[] r0 = new byte[r0]
            if (r2 != 0) goto L6
            return r0
        L6:
            java.lang.String r1 = "utf-8"
            byte[] r0 = r2.getBytes(r1)     // Catch: java.io.UnsupportedEncodingException -> Ld
            goto L14
        Ld:
            java.lang.String r2 = "StringUtils"
            java.lang.String r1 = "the content has error while it is converted to bytes"
            com.huawei.hms.framework.common.Logger.w(r2, r1)
        L14:
            return r0
    }

    public static java.lang.String getTraceInfo(java.lang.Throwable r5) {
            java.lang.StackTraceElement[] r5 = r5.getStackTrace()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r1 = 1024(0x400, float:1.435E-42)
            r0.<init>(r1)
            int r1 = r5.length
            r2 = 0
        Ld:
            if (r2 >= r1) goto L25
            r3 = r5[r2]
            java.lang.String r4 = "at "
            r0.append(r4)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.String r3 = ";"
            r0.append(r3)
            int r2 = r2 + 1
            goto Ld
        L25:
            java.lang.String r5 = r0.toString()
            return r5
    }

    public static java.lang.String replace(java.lang.String r1, java.lang.CharSequence r2, java.lang.CharSequence r3) {
            boolean r0 = com.huawei.hms.framework.common.StringUtils.IS_AEGIS_STRING_LIBRARY_LOADED
            if (r0 != 0) goto L1e
            java.lang.String r0 = "com.huawei.secure.android.common.util.SafeString"
            boolean r0 = checkCompatible(r0)
            if (r0 == 0) goto Ld
            goto L1e
        Ld:
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L1d
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1d
            java.lang.String r1 = r1.replace(r2, r3)     // Catch: java.lang.Exception -> L1d
        L1d:
            return r1
        L1e:
            java.lang.String r1 = com.huawei.secure.android.common.util.SafeString.replace(r1, r2, r3)
            return r1
    }

    public static byte[] str2Byte(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 == 0) goto La
            byte[] r2 = new byte[r1]
            return r2
        La:
            java.lang.String r0 = "UTF-8"
            byte[] r2 = r2.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L11
            return r2
        L11:
            r2 = move-exception
            java.lang.String r0 = "StringUtils.str2Byte error: UnsupportedEncodingException"
            com.huawei.hms.framework.common.Logger.w(r0, r2)
            byte[] r2 = new byte[r1]
            return r2
    }

    public static boolean strEquals(java.lang.String r0, java.lang.String r1) {
            if (r0 == r1) goto Ld
            if (r0 == 0) goto Lb
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto Lb
            goto Ld
        Lb:
            r0 = 0
            goto Le
        Ld:
            r0 = 1
        Le:
            return r0
    }

    public static int stringToInteger(java.lang.String r2, int r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return r3
        L7:
            int r3 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.NumberFormatException -> Lc
            goto L14
        Lc:
            r2 = move-exception
            java.lang.String r0 = "StringUtils"
            java.lang.String r1 = "String to Integer catch NumberFormatException."
            com.huawei.hms.framework.common.Logger.w(r0, r1, r2)
        L14:
            return r3
    }

    public static long stringToLong(java.lang.String r2, long r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return r3
        L7:
            long r3 = java.lang.Long.parseLong(r2)     // Catch: java.lang.NumberFormatException -> Lc
            goto L14
        Lc:
            r2 = move-exception
            java.lang.String r0 = "StringUtils"
            java.lang.String r1 = "String to Long catch NumberFormatException."
            com.huawei.hms.framework.common.Logger.w(r0, r1, r2)
        L14:
            return r3
    }

    public static java.lang.String substring(java.lang.String r2, int r3) {
            java.lang.String r0 = "com.huawei.secure.android.common.util.SafeString"
            boolean r0 = checkCompatible(r0)
            if (r0 == 0) goto Ld
            java.lang.String r2 = com.huawei.secure.android.common.util.SafeString.substring(r2, r3)
            return r2
        Ld:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            java.lang.String r1 = ""
            if (r0 != 0) goto L22
            int r0 = r2.length()
            if (r0 < r3) goto L22
            if (r3 < 0) goto L22
            java.lang.String r2 = r2.substring(r3)     // Catch: java.lang.Exception -> L22
            return r2
        L22:
            return r1
    }

    public static java.lang.String substring(java.lang.String r2, int r3, int r4) {
            boolean r0 = com.huawei.hms.framework.common.StringUtils.IS_AEGIS_STRING_LIBRARY_LOADED
            if (r0 != 0) goto L25
            java.lang.String r0 = "com.huawei.secure.android.common.util.SafeString"
            boolean r0 = checkCompatible(r0)
            if (r0 == 0) goto Ld
            goto L25
        Ld:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            java.lang.String r1 = ""
            if (r0 != 0) goto L24
            if (r3 < 0) goto L24
            int r0 = r2.length()
            if (r4 > r0) goto L24
            if (r4 < r3) goto L24
            java.lang.String r2 = r2.substring(r3, r4)     // Catch: java.lang.Exception -> L24
            return r2
        L24:
            return r1
        L25:
            java.lang.String r2 = com.huawei.secure.android.common.util.SafeString.substring(r2, r3, r4)
            return r2
    }

    public static java.lang.String toLowerCase(java.lang.String r1) {
            if (r1 != 0) goto L3
            return r1
        L3:
            java.util.Locale r0 = java.util.Locale.ROOT
            java.lang.String r1 = r1.toLowerCase(r0)
            return r1
    }
}
