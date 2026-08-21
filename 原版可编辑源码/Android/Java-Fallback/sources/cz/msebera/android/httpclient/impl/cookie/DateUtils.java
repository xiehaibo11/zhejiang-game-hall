package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public final class DateUtils {
    public static final java.util.TimeZone GMT = null;
    public static final java.lang.String PATTERN_ASCTIME = "EEE MMM d HH:mm:ss yyyy";
    public static final java.lang.String PATTERN_RFC1036 = "EEE, dd-MMM-yy HH:mm:ss zzz";
    public static final java.lang.String PATTERN_RFC1123 = "EEE, dd MMM yyyy HH:mm:ss zzz";

    static {
            java.lang.String r0 = "GMT"
            java.util.TimeZone r0 = java.util.TimeZone.getTimeZone(r0)
            cz.msebera.android.httpclient.impl.cookie.DateUtils.GMT = r0
            return
    }

    private DateUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String formatDate(java.util.Date r0) {
            java.lang.String r0 = cz.msebera.android.httpclient.client.utils.DateUtils.formatDate(r0)
            return r0
    }

    public static java.lang.String formatDate(java.util.Date r0, java.lang.String r1) {
            java.lang.String r0 = cz.msebera.android.httpclient.client.utils.DateUtils.formatDate(r0, r1)
            return r0
    }

    public static java.util.Date parseDate(java.lang.String r1) throws cz.msebera.android.httpclient.impl.cookie.DateParseException {
            r0 = 0
            java.util.Date r1 = parseDate(r1, r0, r0)
            return r1
    }

    public static java.util.Date parseDate(java.lang.String r1, java.lang.String[] r2) throws cz.msebera.android.httpclient.impl.cookie.DateParseException {
            r0 = 0
            java.util.Date r1 = parseDate(r1, r2, r0)
            return r1
    }

    public static java.util.Date parseDate(java.lang.String r1, java.lang.String[] r2, java.util.Date r3) throws cz.msebera.android.httpclient.impl.cookie.DateParseException {
            java.util.Date r2 = cz.msebera.android.httpclient.client.utils.DateUtils.parseDate(r1, r2, r3)
            if (r2 == 0) goto L7
            return r2
        L7:
            cz.msebera.android.httpclient.impl.cookie.DateParseException r2 = new cz.msebera.android.httpclient.impl.cookie.DateParseException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "Unable to parse the date "
            r3.append(r0)
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            r2.<init>(r1)
            throw r2
    }
}
