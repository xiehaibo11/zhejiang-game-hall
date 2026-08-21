package cz.msebera.android.httpclient.client.utils;

@cz.msebera.android.httpclient.annotation.Immutable
public final class DateUtils {
    private static final java.lang.String[] DEFAULT_PATTERNS = null;
    private static final java.util.Date DEFAULT_TWO_DIGIT_YEAR_START = null;
    public static final java.util.TimeZone GMT = null;
    public static final java.lang.String PATTERN_ASCTIME = "EEE MMM d HH:mm:ss yyyy";
    public static final java.lang.String PATTERN_RFC1036 = "EEE, dd-MMM-yy HH:mm:ss zzz";
    public static final java.lang.String PATTERN_RFC1123 = "EEE, dd MMM yyyy HH:mm:ss zzz";

    static final class DateFormatHolder {
        private static final java.lang.ThreadLocal<java.lang.ref.SoftReference<java.util.Map<java.lang.String, java.text.SimpleDateFormat>>> THREADLOCAL_FORMATS = null;


        static {
                cz.msebera.android.httpclient.client.utils.DateUtils$DateFormatHolder$1 r0 = new cz.msebera.android.httpclient.client.utils.DateUtils$DateFormatHolder$1
                r0.<init>()
                cz.msebera.android.httpclient.client.utils.DateUtils.DateFormatHolder.THREADLOCAL_FORMATS = r0
                return
        }

        DateFormatHolder() {
                r0 = this;
                r0.<init>()
                return
        }

        public static void clearThreadLocal() {
                java.lang.ThreadLocal<java.lang.ref.SoftReference<java.util.Map<java.lang.String, java.text.SimpleDateFormat>>> r0 = cz.msebera.android.httpclient.client.utils.DateUtils.DateFormatHolder.THREADLOCAL_FORMATS
                r0.remove()
                return
        }

        public static java.text.SimpleDateFormat formatFor(java.lang.String r3) {
                java.lang.ThreadLocal<java.lang.ref.SoftReference<java.util.Map<java.lang.String, java.text.SimpleDateFormat>>> r0 = cz.msebera.android.httpclient.client.utils.DateUtils.DateFormatHolder.THREADLOCAL_FORMATS
                java.lang.Object r0 = r0.get()
                java.lang.ref.SoftReference r0 = (java.lang.ref.SoftReference) r0
                java.lang.Object r0 = r0.get()
                java.util.Map r0 = (java.util.Map) r0
                if (r0 != 0) goto L1f
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                java.lang.ThreadLocal<java.lang.ref.SoftReference<java.util.Map<java.lang.String, java.text.SimpleDateFormat>>> r1 = cz.msebera.android.httpclient.client.utils.DateUtils.DateFormatHolder.THREADLOCAL_FORMATS
                java.lang.ref.SoftReference r2 = new java.lang.ref.SoftReference
                r2.<init>(r0)
                r1.set(r2)
            L1f:
                java.lang.Object r1 = r0.get(r3)
                java.text.SimpleDateFormat r1 = (java.text.SimpleDateFormat) r1
                if (r1 != 0) goto L3a
                java.text.SimpleDateFormat r1 = new java.text.SimpleDateFormat
                java.util.Locale r2 = java.util.Locale.US
                r1.<init>(r3, r2)
                java.lang.String r2 = "GMT"
                java.util.TimeZone r2 = java.util.TimeZone.getTimeZone(r2)
                r1.setTimeZone(r2)
                r0.put(r3, r1)
            L3a:
                return r1
        }
    }

    static {
            java.lang.String r0 = "EEE, dd MMM yyyy HH:mm:ss zzz"
            java.lang.String r1 = "EEE, dd-MMM-yy HH:mm:ss zzz"
            java.lang.String r2 = "EEE MMM d HH:mm:ss yyyy"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2}
            cz.msebera.android.httpclient.client.utils.DateUtils.DEFAULT_PATTERNS = r0
            java.lang.String r0 = "GMT"
            java.util.TimeZone r0 = java.util.TimeZone.getTimeZone(r0)
            cz.msebera.android.httpclient.client.utils.DateUtils.GMT = r0
            java.util.Calendar r0 = java.util.Calendar.getInstance()
            java.util.TimeZone r1 = cz.msebera.android.httpclient.client.utils.DateUtils.GMT
            r0.setTimeZone(r1)
            r2 = 2000(0x7d0, float:2.803E-42)
            r3 = 0
            r4 = 1
            r5 = 0
            r6 = 0
            r7 = 0
            r1 = r0
            r1.set(r2, r3, r4, r5, r6, r7)
            r1 = 14
            r2 = 0
            r0.set(r1, r2)
            java.util.Date r0 = r0.getTime()
            cz.msebera.android.httpclient.client.utils.DateUtils.DEFAULT_TWO_DIGIT_YEAR_START = r0
            return
    }

    private DateUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void clearThreadLocal() {
            cz.msebera.android.httpclient.client.utils.DateUtils.DateFormatHolder.clearThreadLocal()
            return
    }

    public static java.lang.String formatDate(java.util.Date r1) {
            java.lang.String r0 = "EEE, dd MMM yyyy HH:mm:ss zzz"
            java.lang.String r1 = formatDate(r1, r0)
            return r1
    }

    public static java.lang.String formatDate(java.util.Date r1, java.lang.String r2) {
            java.lang.String r0 = "Date"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "Pattern"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.text.SimpleDateFormat r2 = cz.msebera.android.httpclient.client.utils.DateUtils.DateFormatHolder.formatFor(r2)
            java.lang.String r1 = r2.format(r1)
            return r1
    }

    public static java.util.Date parseDate(java.lang.String r1) {
            r0 = 0
            java.util.Date r1 = parseDate(r1, r0, r0)
            return r1
    }

    public static java.util.Date parseDate(java.lang.String r1, java.lang.String[] r2) {
            r0 = 0
            java.util.Date r1 = parseDate(r1, r2, r0)
            return r1
    }

    public static java.util.Date parseDate(java.lang.String r5, java.lang.String[] r6, java.util.Date r7) {
            java.lang.String r0 = "Date value"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            if (r6 == 0) goto L8
            goto La
        L8:
            java.lang.String[] r6 = cz.msebera.android.httpclient.client.utils.DateUtils.DEFAULT_PATTERNS
        La:
            if (r7 == 0) goto Ld
            goto Lf
        Ld:
            java.util.Date r7 = cz.msebera.android.httpclient.client.utils.DateUtils.DEFAULT_TWO_DIGIT_YEAR_START
        Lf:
            int r0 = r5.length()
            r1 = 1
            if (r0 <= r1) goto L2d
            java.lang.String r0 = "'"
            boolean r2 = r5.startsWith(r0)
            if (r2 == 0) goto L2d
            boolean r0 = r5.endsWith(r0)
            if (r0 == 0) goto L2d
            int r0 = r5.length()
            int r0 = r0 - r1
            java.lang.String r5 = r5.substring(r1, r0)
        L2d:
            int r0 = r6.length
            r1 = 0
            r2 = 0
        L30:
            if (r2 >= r0) goto L4e
            r3 = r6[r2]
            java.text.SimpleDateFormat r3 = cz.msebera.android.httpclient.client.utils.DateUtils.DateFormatHolder.formatFor(r3)
            r3.set2DigitYearStart(r7)
            java.text.ParsePosition r4 = new java.text.ParsePosition
            r4.<init>(r1)
            java.util.Date r3 = r3.parse(r5, r4)
            int r4 = r4.getIndex()
            if (r4 == 0) goto L4b
            return r3
        L4b:
            int r2 = r2 + 1
            goto L30
        L4e:
            r5 = 0
            return r5
    }
}
