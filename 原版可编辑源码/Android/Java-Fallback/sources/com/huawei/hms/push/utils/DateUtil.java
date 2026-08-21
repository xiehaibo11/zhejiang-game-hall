package com.huawei.hms.push.utils;

public class DateUtil {
    public DateUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String parseMilliSecondToString(java.lang.Long r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            java.text.SimpleDateFormat r1 = new java.text.SimpleDateFormat     // Catch: java.lang.Exception -> L10
            java.lang.String r2 = "yyyy-MM-dd'T'HH:mm:ss.SSS'Z'"
            r1.<init>(r2)     // Catch: java.lang.Exception -> L10
            java.lang.String r3 = r1.format(r3)     // Catch: java.lang.Exception -> L10
            return r3
        L10:
            r3 = move-exception
            java.lang.String r1 = "DateUtil"
            java.lang.String r2 = "parseMilliSecondToString Exception."
            com.huawei.hms.support.log.HMSLog.e(r1, r2, r3)
            return r0
    }

    public static long parseUtcToMillisecond(java.lang.String r5) throws java.text.ParseException {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.util.Locale r1 = java.util.Locale.US
            java.lang.String r2 = "yyyy-MM-dd'T'HH:mm:ss.SSS'Z'"
            r0.<init>(r2, r1)
            java.lang.String r1 = "UTC"
            java.util.TimeZone r1 = java.util.TimeZone.getTimeZone(r1)
            r0.setTimeZone(r1)
            java.lang.String r1 = "."
            int r2 = r5.indexOf(r1)
            r3 = 0
            java.lang.String r2 = r5.substring(r3, r2)
            int r1 = r5.indexOf(r1)
            java.lang.String r5 = r5.substring(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r4 = 4
            java.lang.String r5 = r5.substring(r3, r4)
            r1.append(r5)
            java.lang.String r5 = "Z"
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            java.util.Date r5 = r0.parse(r5)
            long r0 = r5.getTime()
            return r0
    }
}
