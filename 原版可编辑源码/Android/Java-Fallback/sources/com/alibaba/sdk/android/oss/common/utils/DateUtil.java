package com.alibaba.sdk.android.oss.common.utils;

public class DateUtil {
    private static final java.lang.String ALTERNATIVE_ISO8601_DATE_FORMAT = "yyyy-MM-dd'T'HH:mm:ss'Z'";
    private static final java.lang.String ISO8601_DATE_FORMAT = "yyyy-MM-dd'T'HH:mm:ss.SSS'Z'";
    private static final java.lang.String RFC822_DATE_FORMAT = "EEE, dd MMM yyyy HH:mm:ss 'GMT'";
    private static volatile long amendTimeSkewed;

    static {
            return
    }

    public DateUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static synchronized java.lang.String currentFixedSkewedTimeInRFC822Format() {
            java.lang.Class<com.alibaba.sdk.android.oss.common.utils.DateUtil> r0 = com.alibaba.sdk.android.oss.common.utils.DateUtil.class
            monitor-enter(r0)
            java.util.Date r1 = new java.util.Date     // Catch: java.lang.Throwable -> L12
            long r2 = getFixedSkewedTimeMillis()     // Catch: java.lang.Throwable -> L12
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L12
            java.lang.String r1 = formatRfc822Date(r1)     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static java.lang.String formatAlternativeIso8601Date(java.util.Date r1) {
            java.text.DateFormat r0 = getAlternativeIso8601DateFormat()
            java.lang.String r1 = r0.format(r1)
            return r1
    }

    public static java.lang.String formatIso8601Date(java.util.Date r1) {
            java.text.DateFormat r0 = getIso8601DateFormat()
            java.lang.String r1 = r0.format(r1)
            return r1
    }

    public static java.lang.String formatRfc822Date(java.util.Date r1) {
            java.text.DateFormat r0 = getRfc822DateFormat()
            java.lang.String r1 = r0.format(r1)
            return r1
    }

    private static java.text.DateFormat getAlternativeIso8601DateFormat() {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.util.Locale r1 = java.util.Locale.US
            java.lang.String r2 = "yyyy-MM-dd'T'HH:mm:ss'Z'"
            r0.<init>(r2, r1)
            java.util.SimpleTimeZone r1 = new java.util.SimpleTimeZone
            r2 = 0
            java.lang.String r3 = "GMT"
            r1.<init>(r2, r3)
            r0.setTimeZone(r1)
            return r0
    }

    public static long getFixedSkewedTimeMillis() {
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = com.alibaba.sdk.android.oss.common.utils.DateUtil.amendTimeSkewed
            long r0 = r0 + r2
            return r0
    }

    private static java.text.DateFormat getIso8601DateFormat() {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.util.Locale r1 = java.util.Locale.US
            java.lang.String r2 = "yyyy-MM-dd'T'HH:mm:ss.SSS'Z'"
            r0.<init>(r2, r1)
            java.util.SimpleTimeZone r1 = new java.util.SimpleTimeZone
            r2 = 0
            java.lang.String r3 = "GMT"
            r1.<init>(r2, r3)
            r0.setTimeZone(r1)
            return r0
    }

    private static java.text.DateFormat getRfc822DateFormat() {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.util.Locale r1 = java.util.Locale.US
            java.lang.String r2 = "EEE, dd MMM yyyy HH:mm:ss 'GMT'"
            r0.<init>(r2, r1)
            java.util.SimpleTimeZone r1 = new java.util.SimpleTimeZone
            r2 = 0
            java.lang.String r3 = "GMT"
            r1.<init>(r2, r3)
            r0.setTimeZone(r1)
            return r0
    }

    public static java.util.Date parseIso8601Date(java.lang.String r1) throws java.text.ParseException {
            java.text.DateFormat r0 = getIso8601DateFormat()     // Catch: java.text.ParseException -> L9
            java.util.Date r1 = r0.parse(r1)     // Catch: java.text.ParseException -> L9
            return r1
        L9:
            java.text.DateFormat r0 = getAlternativeIso8601DateFormat()
            java.util.Date r1 = r0.parse(r1)
            return r1
    }

    public static java.util.Date parseRfc822Date(java.lang.String r1) throws java.text.ParseException {
            java.text.DateFormat r0 = getRfc822DateFormat()
            java.util.Date r1 = r0.parse(r1)
            return r1
    }

    public static synchronized void setCurrentServerTime(long r3) {
            java.lang.Class<com.alibaba.sdk.android.oss.common.utils.DateUtil> r0 = com.alibaba.sdk.android.oss.common.utils.DateUtil.class
            monitor-enter(r0)
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lc
            long r3 = r3 - r1
            com.alibaba.sdk.android.oss.common.utils.DateUtil.amendTimeSkewed = r3     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r0)
            return
        Lc:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }
}
