package com.google.gson.internal.bind.util;

import java.text.ParseException;
import java.text.ParsePosition;
import java.util.Date;
import java.util.GregorianCalendar;
import java.util.Locale;
import java.util.TimeZone;

public class ISO8601Utils {
    private static final String UTC_ID = "UTC";
    private static final TimeZone TIMEZONE_UTC = TimeZone.getTimeZone(UTC_ID);

    public static String format(Date date) {
        return format(date, false, TIMEZONE_UTC);
    }

    public static String format(Date date, boolean z) {
        return format(date, z, TIMEZONE_UTC);
    }

    public static String format(Date date, boolean z, TimeZone timeZone) {
        GregorianCalendar gregorianCalendar = new GregorianCalendar(timeZone, Locale.US);
        gregorianCalendar.setTime(date);
        StringBuilder sb = new StringBuilder(19 + (z ? 4 : 0) + (timeZone.getRawOffset() == 0 ? 1 : 6));
        padInt(sb, gregorianCalendar.get(1), 4);
        sb.append('-');
        padInt(sb, gregorianCalendar.get(2) + 1, 2);
        sb.append('-');
        padInt(sb, gregorianCalendar.get(5), 2);
        sb.append('T');
        padInt(sb, gregorianCalendar.get(11), 2);
        sb.append(':');
        padInt(sb, gregorianCalendar.get(12), 2);
        sb.append(':');
        padInt(sb, gregorianCalendar.get(13), 2);
        if (z) {
            sb.append('.');
            padInt(sb, gregorianCalendar.get(14), 3);
        }
        int offset = timeZone.getOffset(gregorianCalendar.getTimeInMillis());
        if (offset != 0) {
            int i = offset / 60000;
            int iAbs = Math.abs(i / 60);
            int iAbs2 = Math.abs(i % 60);
            sb.append(offset >= 0 ? '+' : '-');
            padInt(sb, iAbs, 2);
            sb.append(':');
            padInt(sb, iAbs2, 2);
        } else {
            sb.append('Z');
        }
        return sb.toString();
    }

    /* JADX WARN: Removed duplicated region for block: B:49:0x00ce A[Catch: IllegalArgumentException | IndexOutOfBoundsException | NumberFormatException -> 0x01bb, NumberFormatException -> 0x01bd, IndexOutOfBoundsException -> 0x01bf, TryCatch #2 {IllegalArgumentException | IndexOutOfBoundsException | NumberFormatException -> 0x01bb, blocks: (B:3:0x0004, B:5:0x0016, B:6:0x0018, B:8:0x0024, B:9:0x0026, B:11:0x0036, B:13:0x003c, B:17:0x0054, B:19:0x0064, B:20:0x0066, B:22:0x0072, B:23:0x0074, B:25:0x007a, B:29:0x0084, B:34:0x0094, B:36:0x009c, B:47:0x00c8, B:49:0x00ce, B:51:0x00d5, B:75:0x0182, B:55:0x00df, B:56:0x00fa, B:57:0x00fb, B:61:0x0117, B:63:0x0124, B:66:0x012d, B:68:0x014c, B:71:0x015b, B:72:0x017d, B:74:0x0180, B:60:0x0106, B:77:0x01b3, B:78:0x01ba, B:40:0x00b6, B:41:0x00b9), top: B:94:0x0004 }] */
    /* JADX WARN: Removed duplicated region for block: B:77:0x01b3 A[Catch: IllegalArgumentException | IndexOutOfBoundsException | NumberFormatException -> 0x01bb, NumberFormatException -> 0x01bd, IndexOutOfBoundsException -> 0x01bf, TryCatch #2 {IllegalArgumentException | IndexOutOfBoundsException | NumberFormatException -> 0x01bb, blocks: (B:3:0x0004, B:5:0x0016, B:6:0x0018, B:8:0x0024, B:9:0x0026, B:11:0x0036, B:13:0x003c, B:17:0x0054, B:19:0x0064, B:20:0x0066, B:22:0x0072, B:23:0x0074, B:25:0x007a, B:29:0x0084, B:34:0x0094, B:36:0x009c, B:47:0x00c8, B:49:0x00ce, B:51:0x00d5, B:75:0x0182, B:55:0x00df, B:56:0x00fa, B:57:0x00fb, B:61:0x0117, B:63:0x0124, B:66:0x012d, B:68:0x014c, B:71:0x015b, B:72:0x017d, B:74:0x0180, B:60:0x0106, B:77:0x01b3, B:78:0x01ba, B:40:0x00b6, B:41:0x00b9), top: B:94:0x0004 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static Date parse(String str, ParsePosition parsePosition) throws ParseException {
        String str2;
        int i;
        int i2;
        int i3;
        int i4;
        int i5;
        int length;
        TimeZone timeZone;
        char cCharAt;
        try {
            int index = parsePosition.getIndex();
            int i6 = index + 4;
            int i7 = parseInt(str, index, i6);
            if (checkOffset(str, i6, '-')) {
                i6++;
            }
            int i8 = i6 + 2;
            int i9 = parseInt(str, i6, i8);
            if (checkOffset(str, i8, '-')) {
                i8++;
            }
            int i10 = i8 + 2;
            int i11 = parseInt(str, i8, i10);
            boolean zCheckOffset = checkOffset(str, i10, 'T');
            if (!zCheckOffset && str.length() <= i10) {
                GregorianCalendar gregorianCalendar = new GregorianCalendar(i7, i9 - 1, i11);
                gregorianCalendar.setLenient(false);
                parsePosition.setIndex(i10);
                return gregorianCalendar.getTime();
            }
            if (zCheckOffset) {
                int i12 = i10 + 1;
                int i13 = i12 + 2;
                i2 = parseInt(str, i12, i13);
                if (checkOffset(str, i13, ':')) {
                    i13++;
                }
                i = i13 + 2;
                i3 = parseInt(str, i13, i);
                if (checkOffset(str, i, ':')) {
                    i++;
                }
                if (str.length() > i && (cCharAt = str.charAt(i)) != 'Z' && cCharAt != '+' && cCharAt != '-') {
                    int i14 = i + 2;
                    int i15 = parseInt(str, i, i14);
                    if (i15 > 59 && i15 < 63) {
                        i15 = 59;
                    }
                    if (checkOffset(str, i14, '.')) {
                        int i16 = i14 + 1;
                        int iIndexOfNonDigit = indexOfNonDigit(str, i16 + 1);
                        int iMin = Math.min(iIndexOfNonDigit, i16 + 3);
                        int i17 = parseInt(str, i16, iMin);
                        int i18 = iMin - i16;
                        if (i18 == 1) {
                            i17 *= 100;
                        } else if (i18 == 2) {
                            i17 *= 10;
                        }
                        i5 = i17;
                        i4 = i15;
                        i = iIndexOfNonDigit;
                        if (str.length() <= i) {
                            throw new IllegalArgumentException("No time zone indicator");
                        }
                        char cCharAt2 = str.charAt(i);
                        if (cCharAt2 == 'Z') {
                            timeZone = TIMEZONE_UTC;
                            length = i + 1;
                        } else {
                            if (cCharAt2 != '+' && cCharAt2 != '-') {
                                throw new IndexOutOfBoundsException("Invalid time zone indicator '" + cCharAt2 + "'");
                            }
                            String strSubstring = str.substring(i);
                            if (strSubstring.length() < 5) {
                                strSubstring = strSubstring + "00";
                            }
                            length = i + strSubstring.length();
                            if ("+0000".equals(strSubstring) || "+00:00".equals(strSubstring)) {
                                timeZone = TIMEZONE_UTC;
                            } else {
                                String str3 = "GMT" + strSubstring;
                                TimeZone timeZone2 = TimeZone.getTimeZone(str3);
                                String id = timeZone2.getID();
                                if (!id.equals(str3) && !id.replace(":", "").equals(str3)) {
                                    throw new IndexOutOfBoundsException("Mismatching time zone indicator: " + str3 + " given, resolves to " + timeZone2.getID());
                                }
                                timeZone = timeZone2;
                            }
                        }
                        GregorianCalendar gregorianCalendar2 = new GregorianCalendar(timeZone);
                        gregorianCalendar2.setLenient(false);
                        gregorianCalendar2.set(1, i7);
                        gregorianCalendar2.set(2, i9 - 1);
                        gregorianCalendar2.set(5, i11);
                        gregorianCalendar2.set(11, i2);
                        gregorianCalendar2.set(12, i3);
                        gregorianCalendar2.set(13, i4);
                        gregorianCalendar2.set(14, i5);
                        parsePosition.setIndex(length);
                        return gregorianCalendar2.getTime();
                    }
                    i4 = i15;
                    i = i14;
                }
                i5 = 0;
                if (str.length() <= i) {
                }
            } else {
                i = i10;
                i2 = 0;
                i3 = 0;
            }
            i4 = 0;
            i5 = 0;
            if (str.length() <= i) {
            }
        } catch (IllegalArgumentException | IndexOutOfBoundsException | NumberFormatException e) {
            if (str == null) {
                str2 = null;
            } else {
                str2 = '\"' + str + '\"';
            }
            String message = e.getMessage();
            if (message == null || message.isEmpty()) {
                message = "(" + e.getClass().getName() + ")";
            }
            ParseException parseException = new ParseException("Failed to parse date [" + str2 + "]: " + message, parsePosition.getIndex());
            parseException.initCause(e);
            throw parseException;
        }
    }

    private static boolean checkOffset(String str, int i, char c) {
        return i < str.length() && str.charAt(i) == c;
    }

    private static int parseInt(String str, int i, int i2) throws NumberFormatException {
        int i3;
        int i4;
        if (i < 0 || i2 > str.length() || i > i2) {
            throw new NumberFormatException(str);
        }
        if (i < i2) {
            i3 = i + 1;
            int iDigit = Character.digit(str.charAt(i), 10);
            if (iDigit < 0) {
                throw new NumberFormatException("Invalid number: " + str.substring(i, i2));
            }
            i4 = -iDigit;
        } else {
            i3 = i;
            i4 = 0;
        }
        while (i3 < i2) {
            int i5 = i3 + 1;
            int iDigit2 = Character.digit(str.charAt(i3), 10);
            if (iDigit2 < 0) {
                throw new NumberFormatException("Invalid number: " + str.substring(i, i2));
            }
            i4 = (i4 * 10) - iDigit2;
            i3 = i5;
        }
        return -i4;
    }

    private static void padInt(StringBuilder sb, int i, int i2) {
        String string = Integer.toString(i);
        for (int length = i2 - string.length(); length > 0; length--) {
            sb.append('0');
        }
        sb.append(string);
    }

    private static int indexOfNonDigit(String str, int i) {
        while (i < str.length()) {
            char cCharAt = str.charAt(i);
            if (cCharAt < '0' || cCharAt > '9') {
                return i;
            }
            i++;
        }
        return str.length();
    }
}
