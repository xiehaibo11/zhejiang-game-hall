package org.cocos2dx.okhttp3.internal.http;

import java.text.DateFormat;
import java.text.ParsePosition;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Locale;
import org.cocos2dx.okhttp3.internal.Util;

public final class HttpDate {
    private static final DateFormat[] BROWSER_COMPATIBLE_DATE_FORMATS = null;
    private static final String[] BROWSER_COMPATIBLE_DATE_FORMAT_STRINGS = null;
    public static final long MAX_DATE = 253402300799999L;
    private static final ThreadLocal<DateFormat> STANDARD_DATE_FORMAT = null;

    static {
        STANDARD_DATE_FORMAT = new 1();
        BROWSER_COMPATIBLE_DATE_FORMAT_STRINGS = new String[]{"EEE, dd MMM yyyy HH:mm:ss zzz", "EEEE, dd-MMM-yy HH:mm:ss zzz", "EEE MMM d HH:mm:ss yyyy", "EEE, dd-MMM-yyyy HH:mm:ss z", "EEE, dd-MMM-yyyy HH-mm-ss z", "EEE, dd MMM yy HH:mm:ss z", "EEE dd-MMM-yyyy HH:mm:ss z", "EEE dd MMM yyyy HH:mm:ss z", "EEE dd-MMM-yyyy HH-mm-ss z", "EEE dd-MMM-yy HH:mm:ss z", "EEE dd MMM yy HH:mm:ss z", "EEE,dd-MMM-yy HH:mm:ss z", "EEE,dd-MMM-yyyy HH:mm:ss z", "EEE, dd-MM-yyyy HH:mm:ss z", "EEE MMM d yyyy HH:mm:ss z"};
        BROWSER_COMPATIBLE_DATE_FORMATS = new DateFormat[BROWSER_COMPATIBLE_DATE_FORMAT_STRINGS.length];
    }

    public static Date parse(String r9) {
        if (r9.length() != 0) goto L5;
        return null;
    L5:
        ParsePosition r0 = new ParsePosition(0);
        Date r3 = STANDARD_DATE_FORMAT.get().parse(r9, r0);
        if (r0.getIndex() != r9.length()) goto L8;
        return r3;
    L8:
        String[] r32 = BROWSER_COMPATIBLE_DATE_FORMAT_STRINGS;
        monitor-enter(r32);
        int r4 = BROWSER_COMPATIBLE_DATE_FORMAT_STRINGS.length;     // Catch: Throwable -> L22
        int r5 = 0;
    L11:
        if (r5 >= r4) goto L20;
        DateFormat r6 = BROWSER_COMPATIBLE_DATE_FORMATS[r5];     // Catch: Throwable -> L22
        if (r6 != null) goto L15;
        r6 = new SimpleDateFormat(BROWSER_COMPATIBLE_DATE_FORMAT_STRINGS[r5], Locale.US);     // Catch: Throwable -> L22
        r6.setTimeZone(Util.UTC);     // Catch: Throwable -> L22
        BROWSER_COMPATIBLE_DATE_FORMATS[r5] = r6;     // Catch: Throwable -> L22
    L15:
        r0.setIndex(0);     // Catch: Throwable -> L22
        Date r62 = r6.parse(r9, r0);     // Catch: Throwable -> L22
        if (r0.getIndex() != 0) goto L17;
        r5 = r5 + 1;     // Catch: Throwable -> L22
        goto L11
    L17:
        monitor-exit(r32);     // Catch: Throwable -> L22
        return r62;
    L20:
        monitor-exit(r32);     // Catch: Throwable -> L22
        return null;
    L22:
        th = move-exception;
        throw th;
    }

    public static String format(Date r1) {
        return STANDARD_DATE_FORMAT.get().format(r1);
    }

    private HttpDate() {
    }
}
