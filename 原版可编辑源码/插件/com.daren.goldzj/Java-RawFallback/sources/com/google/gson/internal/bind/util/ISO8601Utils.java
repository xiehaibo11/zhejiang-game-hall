package com.google.gson.internal.bind.util;

public class ISO8601Utils {
    private static final java.util.TimeZone TIMEZONE_UTC = null;
    private static final java.lang.String UTC_ID = "UTC";

    static {
            java.lang.String r0 = "UTC"
            java.util.TimeZone r0 = java.util.TimeZone.getTimeZone(r0)
            com.google.gson.internal.bind.util.ISO8601Utils.TIMEZONE_UTC = r0
            return
    }

    public ISO8601Utils() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean checkOffset(java.lang.String r1, int r2, char r3) {
            int r0 = r1.length()
            if (r2 >= r0) goto Le
            char r1 = r1.charAt(r2)
            if (r1 != r3) goto Le
            r1 = 1
            goto Lf
        Le:
            r1 = 0
        Lf:
            return r1
    }

    public static java.lang.String format(java.util.Date r2) {
            java.util.TimeZone r0 = com.google.gson.internal.bind.util.ISO8601Utils.TIMEZONE_UTC
            r1 = 0
            java.lang.String r2 = format(r2, r1, r0)
            return r2
    }

    public static java.lang.String format(java.util.Date r1, boolean r2) {
            java.util.TimeZone r0 = com.google.gson.internal.bind.util.ISO8601Utils.TIMEZONE_UTC
            java.lang.String r1 = format(r1, r2, r0)
            return r1
    }

    public static java.lang.String format(java.util.Date r6, boolean r7, java.util.TimeZone r8) {
            java.util.GregorianCalendar r0 = new java.util.GregorianCalendar
            java.util.Locale r1 = java.util.Locale.US
            r0.<init>(r8, r1)
            r0.setTime(r6)
            r6 = 4
            if (r7 == 0) goto Lf
            r1 = 4
            goto L10
        Lf:
            r1 = 0
        L10:
            r2 = 19
            int r2 = r2 + r1
            int r1 = r8.getRawOffset()
            r3 = 1
            if (r1 != 0) goto L1c
            r1 = 1
            goto L1d
        L1c:
            r1 = 6
        L1d:
            int r2 = r2 + r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r2)
            int r2 = r0.get(r3)
            padInt(r1, r2, r6)
            r6 = 45
            r1.append(r6)
            r2 = 2
            int r4 = r0.get(r2)
            int r4 = r4 + r3
            padInt(r1, r4, r2)
            r1.append(r6)
            r3 = 5
            int r3 = r0.get(r3)
            padInt(r1, r3, r2)
            r3 = 84
            r1.append(r3)
            r3 = 11
            int r3 = r0.get(r3)
            padInt(r1, r3, r2)
            r3 = 58
            r1.append(r3)
            r4 = 12
            int r4 = r0.get(r4)
            padInt(r1, r4, r2)
            r1.append(r3)
            r4 = 13
            int r4 = r0.get(r4)
            padInt(r1, r4, r2)
            if (r7 == 0) goto L7c
            r7 = 46
            r1.append(r7)
            r7 = 14
            int r7 = r0.get(r7)
            r4 = 3
            padInt(r1, r7, r4)
        L7c:
            long r4 = r0.getTimeInMillis()
            int r7 = r8.getOffset(r4)
            if (r7 == 0) goto La9
            r8 = 60000(0xea60, float:8.4078E-41)
            int r8 = r7 / r8
            int r0 = r8 / 60
            int r0 = java.lang.Math.abs(r0)
            int r8 = r8 % 60
            int r8 = java.lang.Math.abs(r8)
            if (r7 >= 0) goto L9a
            goto L9c
        L9a:
            r6 = 43
        L9c:
            r1.append(r6)
            padInt(r1, r0, r2)
            r1.append(r3)
            padInt(r1, r8, r2)
            goto Lae
        La9:
            r6 = 90
            r1.append(r6)
        Lae:
            java.lang.String r6 = r1.toString()
            return r6
    }

    private static int indexOfNonDigit(java.lang.String r2, int r3) {
        L0:
            int r0 = r2.length()
            if (r3 >= r0) goto L17
            char r0 = r2.charAt(r3)
            r1 = 48
            if (r0 < r1) goto L16
            r1 = 57
            if (r0 <= r1) goto L13
            goto L16
        L13:
            int r3 = r3 + 1
            goto L0
        L16:
            return r3
        L17:
            int r2 = r2.length()
            return r2
    }

    private static void padInt(java.lang.StringBuilder r1, int r2, int r3) {
            java.lang.String r2 = java.lang.Integer.toString(r2)
            int r0 = r2.length()
            int r3 = r3 - r0
        L9:
            if (r3 <= 0) goto L13
            r0 = 48
            r1.append(r0)
            int r3 = r3 + (-1)
            goto L9
        L13:
            r1.append(r2)
            return
    }

    public static java.util.Date parse(java.lang.String r17, java.text.ParsePosition r18) throws java.text.ParseException {
            r1 = r17
            r2 = r18
            int r0 = r18.getIndex()     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            int r3 = r0 + 4
            int r0 = parseInt(r1, r0, r3)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r4 = 45
            boolean r5 = checkOffset(r1, r3, r4)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            if (r5 == 0) goto L18
            int r3 = r3 + 1
        L18:
            int r5 = r3 + 2
            int r3 = parseInt(r1, r3, r5)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            boolean r6 = checkOffset(r1, r5, r4)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            if (r6 == 0) goto L26
            int r5 = r5 + 1
        L26:
            int r6 = r5 + 2
            int r5 = parseInt(r1, r5, r6)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r7 = 84
            boolean r7 = checkOffset(r1, r6, r7)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r8 = 0
            r9 = 1
            if (r7 != 0) goto L4d
            int r10 = r17.length()     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            if (r10 > r6) goto L4d
            java.util.GregorianCalendar r4 = new java.util.GregorianCalendar     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            int r3 = r3 - r9
            r4.<init>(r0, r3, r5)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r4.setLenient(r8)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r2.setIndex(r6)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            java.util.Date r0 = r4.getTime()     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            return r0
        L4d:
            r10 = 43
            r11 = 90
            r12 = 2
            if (r7 == 0) goto Lc3
            int r6 = r6 + 1
            int r7 = r6 + 2
            int r6 = parseInt(r1, r6, r7)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r13 = 58
            boolean r14 = checkOffset(r1, r7, r13)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            if (r14 == 0) goto L66
            int r7 = r7 + 1
        L66:
            int r14 = r7 + 2
            int r7 = parseInt(r1, r7, r14)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            boolean r13 = checkOffset(r1, r14, r13)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            if (r13 == 0) goto L74
            int r14 = r14 + 1
        L74:
            int r13 = r17.length()     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            if (r13 <= r14) goto Lc6
            char r13 = r1.charAt(r14)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            if (r13 == r11) goto Lc6
            if (r13 == r10) goto Lc6
            if (r13 == r4) goto Lc6
            int r13 = r14 + 2
            int r14 = parseInt(r1, r14, r13)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r15 = 59
            if (r14 <= r15) goto L94
            r15 = 63
            if (r14 >= r15) goto L94
            r14 = 59
        L94:
            r15 = 46
            boolean r15 = checkOffset(r1, r13, r15)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            if (r15 == 0) goto Lc0
            int r13 = r13 + 1
            int r15 = r13 + 1
            int r15 = indexOfNonDigit(r1, r15)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            int r8 = r13 + 3
            int r8 = java.lang.Math.min(r15, r8)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            int r16 = parseInt(r1, r13, r8)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            int r8 = r8 - r13
            if (r8 == r9) goto Lb9
            if (r8 == r12) goto Lb6
        Lb3:
            r8 = r16
            goto Lbc
        Lb6:
            int r16 = r16 * 10
            goto Lb3
        Lb9:
            int r16 = r16 * 100
            goto Lb3
        Lbc:
            r13 = r8
            r8 = r14
            r14 = r15
            goto Lc8
        Lc0:
            r8 = r14
            r14 = r13
            goto Lc7
        Lc3:
            r14 = r6
            r6 = 0
            r7 = 0
        Lc6:
            r8 = 0
        Lc7:
            r13 = 0
        Lc8:
            int r15 = r17.length()     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            if (r15 <= r14) goto L1b3
            char r15 = r1.charAt(r14)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r12 = 5
            if (r15 != r11) goto Lda
            java.util.TimeZone r4 = com.google.gson.internal.bind.util.ISO8601Utils.TIMEZONE_UTC     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            int r14 = r14 + r9
            goto L182
        Lda:
            if (r15 == r10) goto Lfb
            if (r15 != r4) goto Ldf
            goto Lfb
        Ldf:
            java.lang.IndexOutOfBoundsException r0 = new java.lang.IndexOutOfBoundsException     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r3.<init>()     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            java.lang.String r4 = "Invalid time zone indicator '"
            r3.append(r4)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r3.append(r15)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            java.lang.String r4 = "'"
            r3.append(r4)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            java.lang.String r3 = r3.toString()     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r0.<init>(r3)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            throw r0     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
        Lfb:
            java.lang.String r4 = r1.substring(r14)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            int r10 = r4.length()     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            if (r10 < r12) goto L106
            goto L117
        L106:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r10.<init>()     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r10.append(r4)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            java.lang.String r4 = "00"
            r10.append(r4)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            java.lang.String r4 = r10.toString()     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
        L117:
            int r10 = r4.length()     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            int r14 = r14 + r10
            java.lang.String r10 = "+0000"
            boolean r10 = r10.equals(r4)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            if (r10 != 0) goto L180
            java.lang.String r10 = "+00:00"
            boolean r10 = r10.equals(r4)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            if (r10 == 0) goto L12d
            goto L180
        L12d:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r10.<init>()     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            java.lang.String r11 = "GMT"
            r10.append(r11)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r10.append(r4)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            java.lang.String r4 = r10.toString()     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            java.util.TimeZone r10 = java.util.TimeZone.getTimeZone(r4)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            java.lang.String r11 = r10.getID()     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            boolean r15 = r11.equals(r4)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            if (r15 != 0) goto L17e
            java.lang.String r15 = ":"
            java.lang.String r12 = ""
            java.lang.String r11 = r11.replace(r15, r12)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            boolean r11 = r11.equals(r4)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            if (r11 == 0) goto L15b
            goto L17e
        L15b:
            java.lang.IndexOutOfBoundsException r0 = new java.lang.IndexOutOfBoundsException     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r3.<init>()     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            java.lang.String r5 = "Mismatching time zone indicator: "
            r3.append(r5)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r3.append(r4)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            java.lang.String r4 = " given, resolves to "
            r3.append(r4)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            java.lang.String r4 = r10.getID()     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r3.append(r4)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            java.lang.String r3 = r3.toString()     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r0.<init>(r3)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            throw r0     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
        L17e:
            r4 = r10
            goto L182
        L180:
            java.util.TimeZone r4 = com.google.gson.internal.bind.util.ISO8601Utils.TIMEZONE_UTC     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
        L182:
            java.util.GregorianCalendar r10 = new java.util.GregorianCalendar     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r10.<init>(r4)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r4 = 0
            r10.setLenient(r4)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r10.set(r9, r0)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            int r3 = r3 - r9
            r0 = 2
            r10.set(r0, r3)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r0 = 5
            r10.set(r0, r5)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r0 = 11
            r10.set(r0, r6)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r0 = 12
            r10.set(r0, r7)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r0 = 13
            r10.set(r0, r8)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r0 = 14
            r10.set(r0, r13)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            r2.setIndex(r14)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            java.util.Date r0 = r10.getTime()     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            return r0
        L1b3:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            java.lang.String r3 = "No time zone indicator"
            r0.<init>(r3)     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
            throw r0     // Catch: java.lang.IllegalArgumentException -> L1bb java.lang.NumberFormatException -> L1bd java.lang.IndexOutOfBoundsException -> L1bf
        L1bb:
            r0 = move-exception
            goto L1c0
        L1bd:
            r0 = move-exception
            goto L1c0
        L1bf:
            r0 = move-exception
        L1c0:
            if (r1 != 0) goto L1c4
            r1 = 0
            goto L1d8
        L1c4:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r4 = 34
            r3.append(r4)
            r3.append(r1)
            r3.append(r4)
            java.lang.String r1 = r3.toString()
        L1d8:
            java.lang.String r3 = r0.getMessage()
            if (r3 == 0) goto L1e4
            boolean r4 = r3.isEmpty()
            if (r4 == 0) goto L202
        L1e4:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "("
            r3.append(r4)
            java.lang.Class r4 = r0.getClass()
            java.lang.String r4 = r4.getName()
            r3.append(r4)
            java.lang.String r4 = ")"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
        L202:
            java.text.ParseException r4 = new java.text.ParseException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Failed to parse date ["
            r5.append(r6)
            r5.append(r1)
            java.lang.String r1 = "]: "
            r5.append(r1)
            r5.append(r3)
            java.lang.String r1 = r5.toString()
            int r2 = r18.getIndex()
            r4.<init>(r1, r2)
            r4.initCause(r0)
            throw r4
    }

    private static int parseInt(java.lang.String r5, int r6, int r7) throws java.lang.NumberFormatException {
            if (r6 < 0) goto L68
            int r0 = r5.length()
            if (r7 > r0) goto L68
            if (r6 > r7) goto L68
            r0 = 0
            java.lang.String r1 = "Invalid number: "
            r2 = 10
            if (r6 >= r7) goto L38
            int r0 = r6 + 1
            char r3 = r5.charAt(r6)
            int r3 = java.lang.Character.digit(r3, r2)
            if (r3 < 0) goto L1f
            int r3 = -r3
            goto L3a
        L1f:
            java.lang.NumberFormatException r0 = new java.lang.NumberFormatException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r5 = r5.substring(r6, r7)
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r0.<init>(r5)
            throw r0
        L38:
            r0 = r6
            r3 = 0
        L3a:
            if (r0 >= r7) goto L66
            int r4 = r0 + 1
            char r0 = r5.charAt(r0)
            int r0 = java.lang.Character.digit(r0, r2)
            if (r0 < 0) goto L4d
            int r3 = r3 * 10
            int r3 = r3 - r0
            r0 = r4
            goto L3a
        L4d:
            java.lang.NumberFormatException r0 = new java.lang.NumberFormatException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r5 = r5.substring(r6, r7)
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r0.<init>(r5)
            throw r0
        L66:
            int r5 = -r3
            return r5
        L68:
            java.lang.NumberFormatException r6 = new java.lang.NumberFormatException
            r6.<init>(r5)
            throw r6
    }
}
