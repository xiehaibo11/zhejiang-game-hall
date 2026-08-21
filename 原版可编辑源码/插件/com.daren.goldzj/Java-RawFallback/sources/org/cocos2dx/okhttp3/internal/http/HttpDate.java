package org.cocos2dx.okhttp3.internal.http;

public final class HttpDate {
    private static final java.text.DateFormat[] BROWSER_COMPATIBLE_DATE_FORMATS = null;
    private static final java.lang.String[] BROWSER_COMPATIBLE_DATE_FORMAT_STRINGS = null;
    public static final long MAX_DATE = 253402300799999L;
    private static final java.lang.ThreadLocal<java.text.DateFormat> STANDARD_DATE_FORMAT = null;


    static {
            org.cocos2dx.okhttp3.internal.http.HttpDate$1 r0 = new org.cocos2dx.okhttp3.internal.http.HttpDate$1
            r0.<init>()
            org.cocos2dx.okhttp3.internal.http.HttpDate.STANDARD_DATE_FORMAT = r0
            java.lang.String r1 = "EEE, dd MMM yyyy HH:mm:ss zzz"
            java.lang.String r2 = "EEEE, dd-MMM-yy HH:mm:ss zzz"
            java.lang.String r3 = "EEE MMM d HH:mm:ss yyyy"
            java.lang.String r4 = "EEE, dd-MMM-yyyy HH:mm:ss z"
            java.lang.String r5 = "EEE, dd-MMM-yyyy HH-mm-ss z"
            java.lang.String r6 = "EEE, dd MMM yy HH:mm:ss z"
            java.lang.String r7 = "EEE dd-MMM-yyyy HH:mm:ss z"
            java.lang.String r8 = "EEE dd MMM yyyy HH:mm:ss z"
            java.lang.String r9 = "EEE dd-MMM-yyyy HH-mm-ss z"
            java.lang.String r10 = "EEE dd-MMM-yy HH:mm:ss z"
            java.lang.String r11 = "EEE dd MMM yy HH:mm:ss z"
            java.lang.String r12 = "EEE,dd-MMM-yy HH:mm:ss z"
            java.lang.String r13 = "EEE,dd-MMM-yyyy HH:mm:ss z"
            java.lang.String r14 = "EEE, dd-MM-yyyy HH:mm:ss z"
            java.lang.String r15 = "EEE MMM d yyyy HH:mm:ss z"
            java.lang.String[] r0 = new java.lang.String[]{r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15}
            org.cocos2dx.okhttp3.internal.http.HttpDate.BROWSER_COMPATIBLE_DATE_FORMAT_STRINGS = r0
            java.lang.String[] r0 = org.cocos2dx.okhttp3.internal.http.HttpDate.BROWSER_COMPATIBLE_DATE_FORMAT_STRINGS
            int r0 = r0.length
            java.text.DateFormat[] r0 = new java.text.DateFormat[r0]
            org.cocos2dx.okhttp3.internal.http.HttpDate.BROWSER_COMPATIBLE_DATE_FORMATS = r0
            return
    }

    private HttpDate() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String format(java.util.Date r1) {
            java.lang.ThreadLocal<java.text.DateFormat> r0 = org.cocos2dx.okhttp3.internal.http.HttpDate.STANDARD_DATE_FORMAT
            java.lang.Object r0 = r0.get()
            java.text.DateFormat r0 = (java.text.DateFormat) r0
            java.lang.String r1 = r0.format(r1)
            return r1
    }

    public static java.util.Date parse(java.lang.String r9) {
            int r0 = r9.length()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            java.text.ParsePosition r0 = new java.text.ParsePosition
            r2 = 0
            r0.<init>(r2)
            java.lang.ThreadLocal<java.text.DateFormat> r3 = org.cocos2dx.okhttp3.internal.http.HttpDate.STANDARD_DATE_FORMAT
            java.lang.Object r3 = r3.get()
            java.text.DateFormat r3 = (java.text.DateFormat) r3
            java.util.Date r3 = r3.parse(r9, r0)
            int r4 = r0.getIndex()
            int r5 = r9.length()
            if (r4 != r5) goto L25
            return r3
        L25:
            java.lang.String[] r3 = org.cocos2dx.okhttp3.internal.http.HttpDate.BROWSER_COMPATIBLE_DATE_FORMAT_STRINGS
            monitor-enter(r3)
            java.lang.String[] r4 = org.cocos2dx.okhttp3.internal.http.HttpDate.BROWSER_COMPATIBLE_DATE_FORMAT_STRINGS     // Catch: java.lang.Throwable -> L5c
            int r4 = r4.length     // Catch: java.lang.Throwable -> L5c
            r5 = 0
        L2c:
            if (r5 >= r4) goto L5a
            java.text.DateFormat[] r6 = org.cocos2dx.okhttp3.internal.http.HttpDate.BROWSER_COMPATIBLE_DATE_FORMATS     // Catch: java.lang.Throwable -> L5c
            r6 = r6[r5]     // Catch: java.lang.Throwable -> L5c
            if (r6 != 0) goto L48
            java.text.SimpleDateFormat r6 = new java.text.SimpleDateFormat     // Catch: java.lang.Throwable -> L5c
            java.lang.String[] r7 = org.cocos2dx.okhttp3.internal.http.HttpDate.BROWSER_COMPATIBLE_DATE_FORMAT_STRINGS     // Catch: java.lang.Throwable -> L5c
            r7 = r7[r5]     // Catch: java.lang.Throwable -> L5c
            java.util.Locale r8 = java.util.Locale.US     // Catch: java.lang.Throwable -> L5c
            r6.<init>(r7, r8)     // Catch: java.lang.Throwable -> L5c
            java.util.TimeZone r7 = org.cocos2dx.okhttp3.internal.Util.UTC     // Catch: java.lang.Throwable -> L5c
            r6.setTimeZone(r7)     // Catch: java.lang.Throwable -> L5c
            java.text.DateFormat[] r7 = org.cocos2dx.okhttp3.internal.http.HttpDate.BROWSER_COMPATIBLE_DATE_FORMATS     // Catch: java.lang.Throwable -> L5c
            r7[r5] = r6     // Catch: java.lang.Throwable -> L5c
        L48:
            r0.setIndex(r2)     // Catch: java.lang.Throwable -> L5c
            java.util.Date r6 = r6.parse(r9, r0)     // Catch: java.lang.Throwable -> L5c
            int r7 = r0.getIndex()     // Catch: java.lang.Throwable -> L5c
            if (r7 == 0) goto L57
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L5c
            return r6
        L57:
            int r5 = r5 + 1
            goto L2c
        L5a:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L5c
            return r1
        L5c:
            r9 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L5c
            throw r9
    }
}
