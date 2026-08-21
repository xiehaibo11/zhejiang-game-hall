package com.google.gson.internal.bind.util;

import java.text.ParseException;
import java.text.ParsePosition;
import java.util.Date;
import java.util.GregorianCalendar;
import java.util.Locale;
import java.util.TimeZone;

public class ISO8601Utils {
    private static final TimeZone TIMEZONE_UTC = null;
    private static final String UTC_ID = "UTC";

    public ISO8601Utils() {
    }

    static {
        TIMEZONE_UTC = TimeZone.getTimeZone(UTC_ID);
    }

    public static String format(Date r2) {
        return format(r2, false, TIMEZONE_UTC);
    }

    public static String format(Date r1, boolean r2) {
        return format(r1, r2, TIMEZONE_UTC);
    }

    public static String format(Date r6, boolean r7, TimeZone r8) {
        GregorianCalendar r0 = new GregorianCalendar(r8, Locale.US);
        r0.setTime(r6);
        if (r7 == false) goto L5;
        int r1 = 4;
    L6:
        int r2 = 19 + r1;
        if (r8.getRawOffset() != 0) goto L9;
        int r12 = 1;
    L10:
        StringBuilder r13 = new StringBuilder(r2 + r12);
        padInt(r13, r0.get(1), 4);
        char r62 = '-';
        r13.append('-');
        padInt(r13, r0.get(2) + 1, 2);
        r13.append('-');
        padInt(r13, r0.get(5), 2);
        r13.append('T');
        padInt(r13, r0.get(11), 2);
        r13.append(':');
        padInt(r13, r0.get(12), 2);
        r13.append(':');
        padInt(r13, r0.get(13), 2);
        if (r7 == false) goto L13;
        r13.append('.');
        padInt(r13, r0.get(14), 3);
    L13:
        int r72 = r8.getOffset(r0.getTimeInMillis());
        if (r72 == 0) goto L20;
        int r82 = r72 / 60000;
        int r02 = Math.abs(r82 / 60);
        int r83 = Math.abs(r82 % 60);
        if (r72 < 0) goto L19;
        r62 = '+';
    L19:
        r13.append(r62);
        padInt(r13, r02, 2);
        r13.append(':');
        padInt(r13, r83, 2);
    L22:
        return r13.toString();
    L20:
        r13.append('Z');
        goto L22
    L9:
        r12 = 6;
        goto L10
    L5:
        r1 = 0;
        goto L6
    }

    public static Date parse(String r17, ParsePosition r18) throws ParseException {
        int r0 = r18.getIndex();     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        int r3 = r0 + 4;     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        int r02 = parseInt(r17, r0, r3);     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        if (checkOffset(r17, r3, '-') == false) goto L6;
        r3 = r3 + 1;     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
    L6:
        int r5 = r3 + 2;     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        int r32 = parseInt(r17, r3, r5);     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        if (checkOffset(r17, r5, '-') == false) goto L9;
        r5 = r5 + 1;     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
    L9:
        int r6 = r5 + 2;     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        int r52 = parseInt(r17, r5, r6);     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        boolean r7 = checkOffset(r17, r6, 'T');     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        if (r7 == true) goto L16;
        if (r17.length() > r6) goto L16;
        GregorianCalendar r4 = new GregorianCalendar(r02, r32 - 1, r52);     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        r4.setLenient(false);     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        r18.setIndex(r6);     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        return r4.getTime();
    L16:
        if (r7 == false) goto L44;
        int r62 = r6 + 1;     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        int r72 = r62 + 2;     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        int r63 = parseInt(r17, r62, r72);     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        if (checkOffset(r17, r72, ':') == false) goto L20;
        r72 = r72 + 1;     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
    L20:
        int r14 = r72 + 2;     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        int r73 = parseInt(r17, r72, r14);     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        if (checkOffset(r17, r14, ':') == false) goto L24;
        r14 = r14 + 1;     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
    L24:
        if (r17.length() <= r14) goto L45;
        char r13 = r17.charAt(r14);     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        if (r13 == 'Z') goto L45;
        if (r13 == '+') goto L45;
        if (r13 == '-') goto L45;
        int r132 = r14 + 2;     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        int r142 = parseInt(r17, r14, r132);     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        if (r142 <= 59) goto L35;
        if (r142 >= 63) goto L35;
        r142 = 59;
    L35:
        if (checkOffset(r17, r132, '.') == false) goto L43;
        int r133 = r132 + 1;     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        int r15 = indexOfNonDigit(r17, r133 + 1);     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        int r8 = Math.min(r15, r133 + 3);     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        int r16 = parseInt(r17, r133, r8);     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        int r82 = r8 - r133;     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        if (r82 == 1) goto L41;
        if (r82 != 2) goto L42;
        r16 = r16 * 10;     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
    L42:
        int r134 = r16;
        int r83 = r142;
        r14 = r15;
    L48:
        if (r17.length() <= r14) goto L78;
        char r152 = r17.charAt(r14);     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        if (r152 != 'Z') goto L52;
        TimeZone r42 = TIMEZONE_UTC;     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        int r143 = r14 + 1;     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
    L75:
        GregorianCalendar r10 = new GregorianCalendar(r42);     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        r10.setLenient(false);     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        r10.set(1, r02);     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        r10.set(2, r32 - 1);     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        r10.set(5, r52);     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        r10.set(11, r63);     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        r10.set(12, r73);     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        r10.set(13, r83);     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        r10.set(14, r134);     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        r18.setIndex(r143);     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        return r10.getTime();
    L52:
        if (r152 == '+') goto L57;
        if (r152 == '-') goto L57;
        throw new IndexOutOfBoundsException("Invalid time zone indicator '" + r152 + "'");     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
    L57:
        String r43 = r17.substring(r14);     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        if (r43.length() >= 5) goto L61;
        r43 = r43 + "00";     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
    L61:
        r143 = r14 + r43.length();     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        if ("+0000".equals(r43) == false) goto L64;
    L74:
        r42 = TIMEZONE_UTC;     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        goto L75
    L64:
        if ("+00:00".equals(r43) == true) goto L74;
        String r44 = "GMT" + r43;     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        TimeZone r102 = TimeZone.getTimeZone(r44);     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        String r11 = r102.getID();     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        if (r11.equals(r44) == false) goto L69;
    L73:
        r42 = r102;
        goto L75
    L69:
        if (r11.replace(":", "").equals(r44) == true) goto L73;
        throw new IndexOutOfBoundsException("Mismatching time zone indicator: " + r44 + " given, resolves to " + r102.getID());     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
    L78:
        throw new IllegalArgumentException("No time zone indicator");     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
    L41:
        r16 = r16 * 100;     // Catch: Throwable -> L79 NumberFormatException -> L81 IndexOutOfBoundsException -> L83
        goto L42
    L43:
        r83 = r142;
        r14 = r132;
    L46:
        r134 = 0;
    L45:
        r83 = 0;
        goto L46
    L44:
        r14 = r6;
        r63 = 0;
        r73 = 0;
    L79:
        e = move-exception;
        if (r17 != null) goto L86;
        String r1 = null;
    L87:
        String r33 = e.getMessage();
        if (r33 != null) goto L90;
    L91:
        r33 = "(" + e.getClass().getName() + ")";
    L92:
        ParseException r45 = new ParseException("Failed to parse date [" + r1 + "]: " + r33, r18.getIndex());
        r45.initCause(e);
        throw r45;
    L90:
        if (r33.isEmpty() == false) goto L92;
    L86:
        r1 = '\"' + r17 + '\"';
        goto L87
    }

    private static boolean checkOffset(String r1, int r2, char r3) {
        if (r2 < r1.length()) goto L5;
    L7:
        return false;
    L5:
        if (r1.charAt(r2) != r3) goto L7;
        return true;
    }

    private static int parseInt(String r5, int r6, int r7) throws NumberFormatException {
        if (r6 < 0) goto L23;
        if (r7 > r5.length()) goto L23;
        if (r6 > r7) goto L23;
        if (r6 >= r7) goto L13;
        int r0 = r6 + 1;
        int r3 = Character.digit(r5.charAt(r6), 10);
        if (r3 < 0) goto L12;
        int r32 = -r3;
    L14:
        if (r0 >= r7) goto L21;
        int r4 = r0 + 1;
        int r02 = Character.digit(r5.charAt(r0), 10);
        if (r02 < 0) goto L19;
        r32 = (r32 * 10) - r02;
        r0 = r4;
        goto L14
    L19:
        throw new NumberFormatException("Invalid number: " + r5.substring(r6, r7));
    L21:
        return -r32;
    L12:
        throw new NumberFormatException("Invalid number: " + r5.substring(r6, r7));
    L13:
        r0 = r6;
        r32 = 0;
    L23:
        throw new NumberFormatException(r5);
    }

    private static void padInt(StringBuilder r1, int r2, int r3) {
        String r22 = Integer.toString(r2);
        int r32 = r3 - r22.length();
    L3:
        if (r32 <= 0) goto L5;
        r1.append('0');
        r32 = r32 - 1;
        goto L3
    L5:
        r1.append(r22);
    }

    private static int indexOfNonDigit(String r2, int r3) {
    L3:
        if (r3 >= r2.length()) goto L12;
        char r0 = r2.charAt(r3);
        if (r0 < '0') goto L10;
        if (r0 > '9') goto L10;
        r3 = r3 + 1;
    L10:
        return r3;
    L12:
        return r2.length();
    }
}
