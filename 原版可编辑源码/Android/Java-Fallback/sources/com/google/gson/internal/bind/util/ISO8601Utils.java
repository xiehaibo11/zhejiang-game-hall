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
            char r0 = r1.charAt(r2)
            if (r0 != r3) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    public static java.lang.String format(java.util.Date r2) {
            java.util.TimeZone r0 = com.google.gson.internal.bind.util.ISO8601Utils.TIMEZONE_UTC
            r1 = 0
            java.lang.String r0 = format(r2, r1, r0)
            return r0
    }

    public static java.lang.String format(java.util.Date r1, boolean r2) {
            java.util.TimeZone r0 = com.google.gson.internal.bind.util.ISO8601Utils.TIMEZONE_UTC
            java.lang.String r0 = format(r1, r2, r0)
            return r0
    }

    public static java.lang.String format(java.util.Date r10, boolean r11, java.util.TimeZone r12) {
            java.util.GregorianCalendar r0 = new java.util.GregorianCalendar
            java.util.Locale r1 = java.util.Locale.US
            r0.<init>(r12, r1)
            r0.setTime(r10)
            java.lang.String r1 = "yyyy-MM-ddThh:mm:ss"
            int r1 = r1.length()
            if (r11 == 0) goto L19
            java.lang.String r2 = ".sss"
            int r2 = r2.length()
            goto L1a
        L19:
            r2 = 0
        L1a:
            int r1 = r1 + r2
            int r2 = r12.getRawOffset()
            if (r2 != 0) goto L24
            java.lang.String r2 = "Z"
            goto L26
        L24:
            java.lang.String r2 = "+hh:mm"
        L26:
            int r2 = r2.length()
            int r1 = r1 + r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r1)
            r3 = 1
            int r4 = r0.get(r3)
            java.lang.String r5 = "yyyy"
            int r5 = r5.length()
            padInt(r2, r4, r5)
            r4 = 45
            r2.append(r4)
            r5 = 2
            int r5 = r0.get(r5)
            int r5 = r5 + r3
            java.lang.String r3 = "MM"
            int r3 = r3.length()
            padInt(r2, r5, r3)
            r2.append(r4)
            r3 = 5
            int r3 = r0.get(r3)
            java.lang.String r5 = "dd"
            int r5 = r5.length()
            padInt(r2, r3, r5)
            r3 = 84
            r2.append(r3)
            r3 = 11
            int r3 = r0.get(r3)
            java.lang.String r5 = "hh"
            int r6 = r5.length()
            padInt(r2, r3, r6)
            r3 = 58
            r2.append(r3)
            r6 = 12
            int r6 = r0.get(r6)
            java.lang.String r7 = "mm"
            int r8 = r7.length()
            padInt(r2, r6, r8)
            r2.append(r3)
            r6 = 13
            int r6 = r0.get(r6)
            java.lang.String r8 = "ss"
            int r8 = r8.length()
            padInt(r2, r6, r8)
            if (r11 == 0) goto Lb3
            r6 = 46
            r2.append(r6)
            r6 = 14
            int r6 = r0.get(r6)
            java.lang.String r8 = "sss"
            int r8 = r8.length()
            padInt(r2, r6, r8)
        Lb3:
            long r8 = r0.getTimeInMillis()
            int r6 = r12.getOffset(r8)
            if (r6 == 0) goto Lea
            r8 = 60000(0xea60, float:8.4078E-41)
            int r9 = r6 / r8
            int r9 = r9 / 60
            int r9 = java.lang.Math.abs(r9)
            int r8 = r6 / r8
            int r8 = r8 % 60
            int r8 = java.lang.Math.abs(r8)
            if (r6 >= 0) goto Ld3
            goto Ld5
        Ld3:
            r4 = 43
        Ld5:
            r2.append(r4)
            int r4 = r5.length()
            padInt(r2, r9, r4)
            r2.append(r3)
            int r3 = r7.length()
            padInt(r2, r8, r3)
            goto Lef
        Lea:
            r3 = 90
            r2.append(r3)
        Lef:
            java.lang.String r3 = r2.toString()
            return r3
    }

    private static int indexOfNonDigit(java.lang.String r3, int r4) {
            r0 = r4
        L1:
            int r1 = r3.length()
            if (r0 >= r1) goto L18
            char r1 = r3.charAt(r0)
            r2 = 48
            if (r1 < r2) goto L17
            r2 = 57
            if (r1 <= r2) goto L14
            goto L17
        L14:
            int r0 = r0 + 1
            goto L1
        L17:
            return r0
        L18:
            int r0 = r3.length()
            return r0
    }

    private static void padInt(java.lang.StringBuilder r3, int r4, int r5) {
            java.lang.String r0 = java.lang.Integer.toString(r4)
            int r1 = r0.length()
            int r1 = r5 - r1
        La:
            if (r1 <= 0) goto L14
            r2 = 48
            r3.append(r2)
            int r1 = r1 + (-1)
            goto La
        L14:
            r3.append(r0)
            return
    }

    public static java.util.Date parse(java.lang.String r22, java.text.ParsePosition r23) throws java.text.ParseException {
            r1 = r22
            r2 = r23
            r3 = 0
            int r0 = r23.getIndex()     // Catch: java.lang.IllegalArgumentException -> L214 java.lang.NumberFormatException -> L219 java.lang.IndexOutOfBoundsException -> L21e
            int r4 = r0 + 4
            int r0 = parseInt(r1, r0, r4)     // Catch: java.lang.IllegalArgumentException -> L214 java.lang.NumberFormatException -> L219 java.lang.IndexOutOfBoundsException -> L21e
            r5 = 45
            boolean r6 = checkOffset(r1, r4, r5)     // Catch: java.lang.IllegalArgumentException -> L214 java.lang.NumberFormatException -> L219 java.lang.IndexOutOfBoundsException -> L21e
            if (r6 == 0) goto L19
            int r4 = r4 + 1
        L19:
            int r6 = r4 + 2
            int r4 = parseInt(r1, r4, r6)     // Catch: java.lang.IllegalArgumentException -> L214 java.lang.NumberFormatException -> L219 java.lang.IndexOutOfBoundsException -> L21e
            boolean r7 = checkOffset(r1, r6, r5)     // Catch: java.lang.IllegalArgumentException -> L214 java.lang.NumberFormatException -> L219 java.lang.IndexOutOfBoundsException -> L21e
            if (r7 == 0) goto L27
            int r6 = r6 + 1
        L27:
            int r7 = r6 + 2
            int r6 = parseInt(r1, r6, r7)     // Catch: java.lang.IllegalArgumentException -> L214 java.lang.NumberFormatException -> L219 java.lang.IndexOutOfBoundsException -> L21e
            r8 = 0
            r9 = 0
            r10 = 0
            r11 = 0
            r12 = 84
            boolean r12 = checkOffset(r1, r7, r12)     // Catch: java.lang.IllegalArgumentException -> L214 java.lang.NumberFormatException -> L219 java.lang.IndexOutOfBoundsException -> L21e
            if (r12 != 0) goto L5d
            int r13 = r22.length()     // Catch: java.lang.IllegalArgumentException -> L4e java.lang.NumberFormatException -> L53 java.lang.IndexOutOfBoundsException -> L58
            if (r13 > r7) goto L5d
            java.util.GregorianCalendar r5 = new java.util.GregorianCalendar     // Catch: java.lang.IllegalArgumentException -> L4e java.lang.NumberFormatException -> L53 java.lang.IndexOutOfBoundsException -> L58
            int r13 = r4 + (-1)
            r5.<init>(r0, r13, r6)     // Catch: java.lang.IllegalArgumentException -> L4e java.lang.NumberFormatException -> L53 java.lang.IndexOutOfBoundsException -> L58
            r2.setIndex(r7)     // Catch: java.lang.IllegalArgumentException -> L4e java.lang.NumberFormatException -> L53 java.lang.IndexOutOfBoundsException -> L58
            java.util.Date r13 = r5.getTime()     // Catch: java.lang.IllegalArgumentException -> L4e java.lang.NumberFormatException -> L53 java.lang.IndexOutOfBoundsException -> L58
            return r13
        L4e:
            r0 = move-exception
            r20 = r3
            goto L217
        L53:
            r0 = move-exception
            r20 = r3
            goto L21c
        L58:
            r0 = move-exception
            r20 = r3
            goto L221
        L5d:
            r13 = 43
            r14 = 90
            if (r12 == 0) goto Le8
            int r7 = r7 + 1
            int r15 = r7 + 2
            int r7 = parseInt(r1, r7, r15)     // Catch: java.lang.IllegalArgumentException -> L214 java.lang.NumberFormatException -> L219 java.lang.IndexOutOfBoundsException -> L21e
            r8 = r7
            r7 = 58
            boolean r16 = checkOffset(r1, r15, r7)     // Catch: java.lang.IllegalArgumentException -> L214 java.lang.NumberFormatException -> L219 java.lang.IndexOutOfBoundsException -> L21e
            if (r16 == 0) goto L76
            int r15 = r15 + 1
        L76:
            int r5 = r15 + 2
            int r15 = parseInt(r1, r15, r5)     // Catch: java.lang.IllegalArgumentException -> L214 java.lang.NumberFormatException -> L219 java.lang.IndexOutOfBoundsException -> L21e
            r9 = r15
            boolean r7 = checkOffset(r1, r5, r7)     // Catch: java.lang.IllegalArgumentException -> L214 java.lang.NumberFormatException -> L219 java.lang.IndexOutOfBoundsException -> L21e
            if (r7 == 0) goto L87
            int r5 = r5 + 1
            r7 = r5
            goto L88
        L87:
            r7 = r5
        L88:
            int r5 = r22.length()     // Catch: java.lang.IllegalArgumentException -> L214 java.lang.NumberFormatException -> L219 java.lang.IndexOutOfBoundsException -> L21e
            if (r5 <= r7) goto Le5
            char r5 = r1.charAt(r7)     // Catch: java.lang.IllegalArgumentException -> L214 java.lang.NumberFormatException -> L219 java.lang.IndexOutOfBoundsException -> L21e
            if (r5 == r14) goto Le2
            if (r5 == r13) goto Le2
            r15 = 45
            if (r5 == r15) goto Le2
            int r15 = r7 + 2
            int r7 = parseInt(r1, r7, r15)     // Catch: java.lang.IllegalArgumentException -> L214 java.lang.NumberFormatException -> L219 java.lang.IndexOutOfBoundsException -> L21e
            r10 = 59
            if (r7 <= r10) goto Lac
            r10 = 63
            if (r7 >= r10) goto Lac
            r7 = 59
            r10 = r7
            goto Lad
        Lac:
            r10 = r7
        Lad:
            r7 = 46
            boolean r7 = checkOffset(r1, r15, r7)     // Catch: java.lang.IllegalArgumentException -> L214 java.lang.NumberFormatException -> L219 java.lang.IndexOutOfBoundsException -> L21e
            if (r7 == 0) goto Lde
            int r15 = r15 + 1
            int r7 = r15 + 1
            int r7 = indexOfNonDigit(r1, r7)     // Catch: java.lang.IllegalArgumentException -> L214 java.lang.NumberFormatException -> L219 java.lang.IndexOutOfBoundsException -> L21e
            int r13 = r15 + 3
            int r13 = java.lang.Math.min(r7, r13)     // Catch: java.lang.IllegalArgumentException -> L214 java.lang.NumberFormatException -> L219 java.lang.IndexOutOfBoundsException -> L21e
            int r18 = parseInt(r1, r15, r13)     // Catch: java.lang.IllegalArgumentException -> L214 java.lang.NumberFormatException -> L219 java.lang.IndexOutOfBoundsException -> L21e
            int r14 = r13 - r15
            r20 = r3
            r3 = 1
            if (r14 == r3) goto Ld9
            r3 = 2
            if (r14 == r3) goto Ld5
            r3 = r18
            r11 = r3
            goto Ldc
        Ld5:
            int r3 = r18 * 10
            r11 = r3
            goto Ldc
        Ld9:
            int r3 = r18 * 100
            r11 = r3
        Ldc:
            r3 = r7
            goto Lea
        Lde:
            r20 = r3
            r7 = r15
            goto Lea
        Le2:
            r20 = r3
            goto Lea
        Le5:
            r20 = r3
            goto Lea
        Le8:
            r20 = r3
        Lea:
            int r3 = r22.length()     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            if (r3 <= r7) goto L204
            r3 = 0
            char r5 = r1.charAt(r7)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            r13 = 5
            r14 = 90
            if (r5 != r14) goto L105
            java.util.TimeZone r14 = com.google.gson.internal.bind.util.ISO8601Utils.TIMEZONE_UTC     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            r3 = r14
            r14 = 1
            int r7 = r7 + r14
            r17 = r5
            r21 = r12
            goto L1d1
        L105:
            r14 = 43
            if (r5 == r14) goto L12a
            r14 = 45
            if (r5 != r14) goto L10e
            goto L12a
        L10e:
            java.lang.IndexOutOfBoundsException r13 = new java.lang.IndexOutOfBoundsException     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            java.lang.StringBuilder r14 = new java.lang.StringBuilder     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            r14.<init>()     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            java.lang.String r15 = "Invalid time zone indicator '"
            r14.append(r15)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            r14.append(r5)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            java.lang.String r15 = "'"
            r14.append(r15)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            java.lang.String r14 = r14.toString()     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            r13.<init>(r14)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            throw r13     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
        L12a:
            java.lang.String r14 = r1.substring(r7)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            int r15 = r14.length()     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            if (r15 < r13) goto L136
            r13 = r14
            goto L147
        L136:
            java.lang.StringBuilder r15 = new java.lang.StringBuilder     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            r15.<init>()     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            r15.append(r14)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            java.lang.String r13 = "00"
            r15.append(r13)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            java.lang.String r13 = r15.toString()     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
        L147:
            int r14 = r13.length()     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            int r7 = r7 + r14
            java.lang.String r14 = "+0000"
            boolean r14 = r14.equals(r13)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            if (r14 != 0) goto L1c6
            java.lang.String r14 = "+00:00"
            boolean r14 = r14.equals(r13)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            if (r14 == 0) goto L163
            r17 = r5
            r18 = r7
            r21 = r12
            goto L1cc
        L163:
            java.lang.StringBuilder r14 = new java.lang.StringBuilder     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            r14.<init>()     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            java.lang.String r15 = "GMT"
            r14.append(r15)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            r14.append(r13)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            java.lang.String r14 = r14.toString()     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            java.util.TimeZone r15 = java.util.TimeZone.getTimeZone(r14)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            r3 = r15
            java.lang.String r15 = r3.getID()     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            boolean r17 = r15.equals(r14)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            if (r17 != 0) goto L1bf
            r17 = r5
            java.lang.String r5 = ":"
            r18 = r7
            java.lang.String r7 = ""
            java.lang.String r5 = r15.replace(r5, r7)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            boolean r7 = r5.equals(r14)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            if (r7 == 0) goto L198
            r21 = r12
            goto L1cf
        L198:
            java.lang.IndexOutOfBoundsException r7 = new java.lang.IndexOutOfBoundsException     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            r19 = r5
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            r5.<init>()     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            r21 = r12
            java.lang.String r12 = "Mismatching time zone indicator: "
            r5.append(r12)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            r5.append(r14)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            java.lang.String r12 = " given, resolves to "
            r5.append(r12)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            java.lang.String r12 = r3.getID()     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            r5.append(r12)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            java.lang.String r5 = r5.toString()     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            r7.<init>(r5)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            throw r7     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
        L1bf:
            r17 = r5
            r18 = r7
            r21 = r12
            goto L1cf
        L1c6:
            r17 = r5
            r18 = r7
            r21 = r12
        L1cc:
            java.util.TimeZone r5 = com.google.gson.internal.bind.util.ISO8601Utils.TIMEZONE_UTC     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            r3 = r5
        L1cf:
            r7 = r18
        L1d1:
            java.util.GregorianCalendar r5 = new java.util.GregorianCalendar     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            r5.<init>(r3)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            r12 = 0
            r5.setLenient(r12)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            r12 = 1
            r5.set(r12, r0)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            int r12 = r4 + (-1)
            r13 = 2
            r5.set(r13, r12)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            r12 = 5
            r5.set(r12, r6)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            r12 = 11
            r5.set(r12, r8)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            r12 = 12
            r5.set(r12, r9)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            r12 = 13
            r5.set(r12, r10)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            r12 = 14
            r5.set(r12, r11)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            r2.setIndex(r7)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            java.util.Date r12 = r5.getTime()     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            return r12
        L204:
            r21 = r12
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            java.lang.String r5 = "No time zone indicator"
            r3.<init>(r5)     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
            throw r3     // Catch: java.lang.IllegalArgumentException -> L20e java.lang.NumberFormatException -> L210 java.lang.IndexOutOfBoundsException -> L212
        L20e:
            r0 = move-exception
            goto L217
        L210:
            r0 = move-exception
            goto L21c
        L212:
            r0 = move-exception
            goto L221
        L214:
            r0 = move-exception
            r20 = r3
        L217:
            r3 = r0
            goto L223
        L219:
            r0 = move-exception
            r20 = r3
        L21c:
            r3 = r0
            goto L222
        L21e:
            r0 = move-exception
            r20 = r3
        L221:
            r3 = r0
        L222:
        L223:
            if (r1 != 0) goto L227
            r0 = 0
            goto L23b
        L227:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r4 = 34
            r0.append(r4)
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
        L23b:
            java.lang.String r4 = r3.getMessage()
            if (r4 == 0) goto L247
            boolean r5 = r4.isEmpty()
            if (r5 == 0) goto L265
        L247:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "("
            r5.append(r6)
            java.lang.Class r6 = r3.getClass()
            java.lang.String r6 = r6.getName()
            r5.append(r6)
            java.lang.String r6 = ")"
            r5.append(r6)
            java.lang.String r4 = r5.toString()
        L265:
            java.text.ParseException r5 = new java.text.ParseException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "Failed to parse date ["
            r6.append(r7)
            r6.append(r0)
            java.lang.String r7 = "]: "
            r6.append(r7)
            r6.append(r4)
            java.lang.String r6 = r6.toString()
            int r7 = r23.getIndex()
            r5.<init>(r6, r7)
            r5.initCause(r3)
            throw r5
    }

    private static int parseInt(java.lang.String r6, int r7, int r8) throws java.lang.NumberFormatException {
            if (r7 < 0) goto L68
            int r0 = r6.length()
            if (r8 > r0) goto L68
            if (r7 > r8) goto L68
            r0 = r7
            r1 = 0
            java.lang.String r2 = "Invalid number: "
            r3 = 10
            if (r0 >= r8) goto L3a
            int r4 = r0 + 1
            char r0 = r6.charAt(r0)
            int r0 = java.lang.Character.digit(r0, r3)
            if (r0 < 0) goto L21
            int r1 = -r0
            r0 = r4
            goto L3a
        L21:
            java.lang.NumberFormatException r3 = new java.lang.NumberFormatException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r2)
            java.lang.String r2 = r6.substring(r7, r8)
            r5.append(r2)
            java.lang.String r2 = r5.toString()
            r3.<init>(r2)
            throw r3
        L3a:
            if (r0 >= r8) goto L66
            int r4 = r0 + 1
            char r0 = r6.charAt(r0)
            int r0 = java.lang.Character.digit(r0, r3)
            if (r0 < 0) goto L4d
            int r1 = r1 * 10
            int r1 = r1 - r0
            r0 = r4
            goto L3a
        L4d:
            java.lang.NumberFormatException r3 = new java.lang.NumberFormatException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r2)
            java.lang.String r2 = r6.substring(r7, r8)
            r5.append(r2)
            java.lang.String r2 = r5.toString()
            r3.<init>(r2)
            throw r3
        L66:
            int r2 = -r1
            return r2
        L68:
            java.lang.NumberFormatException r0 = new java.lang.NumberFormatException
            r0.<init>(r6)
            throw r0
    }
}
