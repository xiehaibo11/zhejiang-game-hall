package com.google.gson.internal;

public class PreJava9DateFormatProvider {
    public PreJava9DateFormatProvider() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String getDateFormatPattern(int r3) {
            if (r3 == 0) goto L2b
            r0 = 1
            if (r3 == r0) goto L28
            r0 = 2
            if (r3 == r0) goto L25
            r0 = 3
            if (r3 != r0) goto Le
            java.lang.String r0 = "M/d/yy"
            return r0
        Le:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unknown DateFormat style: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L25:
            java.lang.String r0 = "MMM d, y"
            return r0
        L28:
            java.lang.String r0 = "MMMM d, y"
            return r0
        L2b:
            java.lang.String r0 = "EEEE, MMMM d, y"
            return r0
    }

    private static java.lang.String getDatePartOfDateTimePattern(int r3) {
            if (r3 == 0) goto L2b
            r0 = 1
            if (r3 == r0) goto L28
            r0 = 2
            if (r3 == r0) goto L25
            r0 = 3
            if (r3 != r0) goto Le
            java.lang.String r0 = "M/d/yy"
            return r0
        Le:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unknown DateFormat style: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L25:
            java.lang.String r0 = "MMM d, yyyy"
            return r0
        L28:
            java.lang.String r0 = "MMMM d, yyyy"
            return r0
        L2b:
            java.lang.String r0 = "EEEE, MMMM d, yyyy"
            return r0
    }

    private static java.lang.String getTimePartOfDateTimePattern(int r3) {
            if (r3 == 0) goto L28
            r0 = 1
            if (r3 == r0) goto L28
            r0 = 2
            if (r3 == r0) goto L25
            r0 = 3
            if (r3 != r0) goto Le
            java.lang.String r0 = "h:mm a"
            return r0
        Le:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unknown DateFormat style: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L25:
            java.lang.String r0 = "h:mm:ss a"
            return r0
        L28:
            java.lang.String r0 = "h:mm:ss a z"
            return r0
    }

    public static java.text.DateFormat getUSDateFormat(int r3) {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = getDateFormatPattern(r3)
            java.util.Locale r2 = java.util.Locale.US
            r0.<init>(r1, r2)
            return r0
    }

    public static java.text.DateFormat getUSDateTimeFormat(int r3, int r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = getDatePartOfDateTimePattern(r3)
            r0.append(r1)
            java.lang.String r1 = " "
            r0.append(r1)
            java.lang.String r1 = getTimePartOfDateTimePattern(r4)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.text.SimpleDateFormat r1 = new java.text.SimpleDateFormat
            java.util.Locale r2 = java.util.Locale.US
            r1.<init>(r0, r2)
            return r1
    }
}
