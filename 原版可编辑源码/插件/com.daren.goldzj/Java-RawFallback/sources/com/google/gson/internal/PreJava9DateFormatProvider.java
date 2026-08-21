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
            java.lang.String r3 = "M/d/yy"
            return r3
        Le:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unknown DateFormat style: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L25:
            java.lang.String r3 = "MMM d, y"
            return r3
        L28:
            java.lang.String r3 = "MMMM d, y"
            return r3
        L2b:
            java.lang.String r3 = "EEEE, MMMM d, y"
            return r3
    }

    private static java.lang.String getDatePartOfDateTimePattern(int r3) {
            if (r3 == 0) goto L2b
            r0 = 1
            if (r3 == r0) goto L28
            r0 = 2
            if (r3 == r0) goto L25
            r0 = 3
            if (r3 != r0) goto Le
            java.lang.String r3 = "M/d/yy"
            return r3
        Le:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unknown DateFormat style: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L25:
            java.lang.String r3 = "MMM d, yyyy"
            return r3
        L28:
            java.lang.String r3 = "MMMM d, yyyy"
            return r3
        L2b:
            java.lang.String r3 = "EEEE, MMMM d, yyyy"
            return r3
    }

    private static java.lang.String getTimePartOfDateTimePattern(int r3) {
            if (r3 == 0) goto L28
            r0 = 1
            if (r3 == r0) goto L28
            r0 = 2
            if (r3 == r0) goto L25
            r0 = 3
            if (r3 != r0) goto Le
            java.lang.String r3 = "h:mm a"
            return r3
        Le:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unknown DateFormat style: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L25:
            java.lang.String r3 = "h:mm:ss a"
            return r3
        L28:
            java.lang.String r3 = "h:mm:ss a z"
            return r3
    }

    public static java.text.DateFormat getUSDateFormat(int r2) {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r2 = getDateFormatPattern(r2)
            java.util.Locale r1 = java.util.Locale.US
            r0.<init>(r2, r1)
            return r0
    }

    public static java.text.DateFormat getUSDateTimeFormat(int r1, int r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = getDatePartOfDateTimePattern(r1)
            r0.append(r1)
            java.lang.String r1 = " "
            r0.append(r1)
            java.lang.String r1 = getTimePartOfDateTimePattern(r2)
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            java.text.SimpleDateFormat r2 = new java.text.SimpleDateFormat
            java.util.Locale r0 = java.util.Locale.US
            r2.<init>(r1, r0)
            return r2
    }
}
