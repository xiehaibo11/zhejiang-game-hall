package cz.msebera.android.httpclient.protocol;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class HttpDateGenerator {
    public static final java.util.TimeZone GMT = null;
    public static final java.lang.String PATTERN_RFC1123 = "EEE, dd MMM yyyy HH:mm:ss zzz";

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private long dateAsLong;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private java.lang.String dateAsText;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private final java.text.DateFormat dateformat;

    static {
            java.lang.String r0 = "GMT"
            java.util.TimeZone r0 = java.util.TimeZone.getTimeZone(r0)
            cz.msebera.android.httpclient.protocol.HttpDateGenerator.GMT = r0
            return
    }

    public HttpDateGenerator() {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.dateAsLong = r0
            r0 = 0
            r3.dateAsText = r0
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.util.Locale r1 = java.util.Locale.US
            java.lang.String r2 = "EEE, dd MMM yyyy HH:mm:ss zzz"
            r0.<init>(r2, r1)
            r3.dateformat = r0
            java.text.DateFormat r0 = r3.dateformat
            java.util.TimeZone r1 = cz.msebera.android.httpclient.protocol.HttpDateGenerator.GMT
            r0.setTimeZone(r1)
            return
    }

    public synchronized java.lang.String getCurrentDate() {
            r7 = this;
            monitor-enter(r7)
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L22
            long r2 = r7.dateAsLong     // Catch: java.lang.Throwable -> L22
            long r2 = r0 - r2
            r4 = 1000(0x3e8, double:4.94E-321)
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 <= 0) goto L1e
            java.text.DateFormat r2 = r7.dateformat     // Catch: java.lang.Throwable -> L22
            java.util.Date r3 = new java.util.Date     // Catch: java.lang.Throwable -> L22
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L22
            java.lang.String r2 = r2.format(r3)     // Catch: java.lang.Throwable -> L22
            r7.dateAsText = r2     // Catch: java.lang.Throwable -> L22
            r7.dateAsLong = r0     // Catch: java.lang.Throwable -> L22
        L1e:
            java.lang.String r0 = r7.dateAsText     // Catch: java.lang.Throwable -> L22
            monitor-exit(r7)
            return r0
        L22:
            r0 = move-exception
            monitor-exit(r7)
            throw r0
    }
}
