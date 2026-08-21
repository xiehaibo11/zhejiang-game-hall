package com.google.gson.internal.bind.util;

import com.sigmob.sdk.archives.tar.e;
import com.ss.android.download.api.constant.BaseConstants;
import com.tkay.expressad.foundation.g.a;
import com.xiaomi.mipush.sdk.Constants;
import java.text.ParseException;
import java.text.ParsePosition;
import java.util.Calendar;
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

    public static String format(Date date, boolean millis) {
        return format(date, millis, TIMEZONE_UTC);
    }

    public static String format(Date date, boolean millis, TimeZone tz) {
        Calendar calendar = new GregorianCalendar(tz, Locale.US);
        calendar.setTime(date);
        int capacity = "yyyy-MM-ddThh:mm:ss".length();
        StringBuilder formatted = new StringBuilder(capacity + (millis ? ".sss".length() : 0) + (tz.getRawOffset() == 0 ? "Z" : "+hh:mm").length());
        padInt(formatted, calendar.get(1), "yyyy".length());
        formatted.append('-');
        padInt(formatted, calendar.get(2) + 1, "MM".length());
        formatted.append('-');
        padInt(formatted, calendar.get(5), "dd".length());
        formatted.append('T');
        padInt(formatted, calendar.get(11), "hh".length());
        formatted.append(':');
        padInt(formatted, calendar.get(12), "mm".length());
        formatted.append(':');
        padInt(formatted, calendar.get(13), a.ac.length());
        if (millis) {
            formatted.append('.');
            padInt(formatted, calendar.get(14), "sss".length());
        }
        int offset = tz.getOffset(calendar.getTimeInMillis());
        if (offset != 0) {
            int hours = Math.abs((offset / BaseConstants.Time.MINUTE) / 60);
            int minutes = Math.abs((offset / BaseConstants.Time.MINUTE) % 60);
            formatted.append(offset >= 0 ? '+' : '-');
            padInt(formatted, hours, "hh".length());
            formatted.append(':');
            padInt(formatted, minutes, "mm".length());
        } else {
            formatted.append('Z');
        }
        return formatted.toString();
    }

    /* JADX WARN: Removed duplicated region for block: B:112:0x0225  */
    /* JADX WARN: Removed duplicated region for block: B:113:0x0227  */
    /* JADX WARN: Removed duplicated region for block: B:116:0x0241  */
    /* JADX WARN: Removed duplicated region for block: B:118:0x0247  */
    /* JADX WARN: Removed duplicated region for block: B:23:0x0063  */
    /* JADX WARN: Removed duplicated region for block: B:58:0x00e8  */
    /* JADX WARN: Removed duplicated region for block: B:61:0x00f0 A[Catch: IllegalArgumentException -> 0x020e, NumberFormatException -> 0x0210, IndexOutOfBoundsException -> 0x0212, TryCatch #6 {NumberFormatException -> 0x0210, IllegalArgumentException -> 0x020e, IndexOutOfBoundsException -> 0x0212, blocks: (B:59:0x00ea, B:61:0x00f0, B:63:0x00fa, B:91:0x01d1, B:69:0x010e, B:70:0x0129, B:71:0x012a, B:75:0x0147, B:77:0x0154, B:89:0x01cc, B:80:0x0163, B:82:0x0183, B:85:0x0198, B:86:0x01be, B:74:0x0136, B:93:0x0204, B:94:0x020d), top: B:121:0x00ea }] */
    /* JADX WARN: Removed duplicated region for block: B:93:0x0204 A[Catch: IllegalArgumentException -> 0x020e, NumberFormatException -> 0x0210, IndexOutOfBoundsException -> 0x0212, TryCatch #6 {NumberFormatException -> 0x0210, IllegalArgumentException -> 0x020e, IndexOutOfBoundsException -> 0x0212, blocks: (B:59:0x00ea, B:61:0x00f0, B:63:0x00fa, B:91:0x01d1, B:69:0x010e, B:70:0x0129, B:71:0x012a, B:75:0x0147, B:77:0x0154, B:89:0x01cc, B:80:0x0163, B:82:0x0183, B:85:0x0198, B:86:0x01be, B:74:0x0136, B:93:0x0204, B:94:0x020d), top: B:121:0x00ea }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static Date parse(String date, ParsePosition pos) throws ParseException {
        Exception fail;
        String input;
        String msg;
        String timezoneOffset;
        int offset;
        TimeZone timezone;
        int offset2;
        char c;
        try {
            int offset3 = pos.getIndex();
            int offset4 = offset3 + 4;
            int year = parseInt(date, offset3, offset4);
            if (checkOffset(date, offset4, '-')) {
                offset4++;
            }
            int offset5 = offset4 + 2;
            int month = parseInt(date, offset4, offset5);
            if (checkOffset(date, offset5, '-')) {
                offset5++;
            }
            int offset6 = offset5 + 2;
            int day = parseInt(date, offset5, offset6);
            int hour = 0;
            int minutes = 0;
            int seconds = 0;
            int milliseconds = 0;
            boolean hasT = checkOffset(date, offset6, 'T');
            if (!hasT) {
                try {
                    if (date.length() <= offset6) {
                        Calendar calendar = new GregorianCalendar(year, month - 1, day);
                        pos.setIndex(offset6);
                        return calendar.getTime();
                    }
                    if (!hasT) {
                        int offset7 = offset6 + 1;
                        int offset8 = offset7 + 2;
                        hour = parseInt(date, offset7, offset8);
                        if (checkOffset(date, offset8, ':')) {
                            offset8++;
                        }
                        int offset9 = offset8 + 2;
                        minutes = parseInt(date, offset8, offset9);
                        if (!checkOffset(date, offset9, ':')) {
                            offset6 = offset9;
                        } else {
                            offset6 = offset9 + 1;
                        }
                        if (date.length() > offset6 && (c = date.charAt(offset6)) != 'Z' && c != '+' && c != '-') {
                            int offset10 = offset6 + 2;
                            int seconds2 = parseInt(date, offset6, offset10);
                            seconds = (seconds2 <= 59 || seconds2 >= 63) ? seconds2 : 59;
                            if (checkOffset(date, offset10, '.')) {
                                int offset11 = offset10 + 1;
                                offset6 = indexOfNonDigit(date, offset11 + 1);
                                int parseEndOffset = Math.min(offset6, offset11 + 3);
                                int fraction = parseInt(date, offset11, parseEndOffset);
                                int i = parseEndOffset - offset11;
                                if (i == 1) {
                                    milliseconds = fraction * 100;
                                } else if (i == 2) {
                                    milliseconds = fraction * 10;
                                } else {
                                    milliseconds = fraction;
                                }
                            } else {
                                offset6 = offset10;
                            }
                        }
                    }
                    try {
                        if (date.length() > offset6) {
                            throw new IllegalArgumentException("No time zone indicator");
                        }
                        char timezoneIndicator = date.charAt(offset6);
                        if (timezoneIndicator == 'Z') {
                            timezone = TIMEZONE_UTC;
                            offset2 = offset6 + 1;
                        } else {
                            if (timezoneIndicator != '+' && timezoneIndicator != '-') {
                                throw new IndexOutOfBoundsException("Invalid time zone indicator '" + timezoneIndicator + "'");
                            }
                            String timezoneOffset2 = date.substring(offset6);
                            if (timezoneOffset2.length() >= 5) {
                                timezoneOffset = timezoneOffset2;
                            } else {
                                timezoneOffset = timezoneOffset2 + e.V;
                            }
                            int offset12 = offset6 + timezoneOffset.length();
                            if ("+0000".equals(timezoneOffset) || "+00:00".equals(timezoneOffset)) {
                                offset = offset12;
                                timezone = TIMEZONE_UTC;
                                offset2 = offset;
                            } else {
                                String timezoneId = "GMT" + timezoneOffset;
                                timezone = TimeZone.getTimeZone(timezoneId);
                                String act = timezone.getID();
                                if (act.equals(timezoneId)) {
                                    offset = offset12;
                                } else {
                                    offset = offset12;
                                    String cleaned = act.replace(Constants.COLON_SEPARATOR, "");
                                    if (!cleaned.equals(timezoneId)) {
                                        throw new IndexOutOfBoundsException("Mismatching time zone indicator: " + timezoneId + " given, resolves to " + timezone.getID());
                                    }
                                }
                                offset2 = offset;
                            }
                        }
                        Calendar calendar2 = new GregorianCalendar(timezone);
                        calendar2.setLenient(false);
                        calendar2.set(1, year);
                        calendar2.set(2, month - 1);
                        calendar2.set(5, day);
                        calendar2.set(11, hour);
                        calendar2.set(12, minutes);
                        calendar2.set(13, seconds);
                        calendar2.set(14, milliseconds);
                        pos.setIndex(offset2);
                        return calendar2.getTime();
                    } catch (NumberFormatException e) {
                        e = e;
                        fail = e;
                        if (date == null) {
                        }
                        msg = fail.getMessage();
                        if (msg == null) {
                            msg = "(" + fail.getClass().getName() + ")";
                        }
                        ParseException ex = new ParseException("Failed to parse date [" + input + "]: " + msg, pos.getIndex());
                        ex.initCause(fail);
                        throw ex;
                    } catch (IllegalArgumentException e2) {
                        e = e2;
                        fail = e;
                        if (date == null) {
                        }
                        msg = fail.getMessage();
                        if (msg == null) {
                        }
                        ParseException ex2 = new ParseException("Failed to parse date [" + input + "]: " + msg, pos.getIndex());
                        ex2.initCause(fail);
                        throw ex2;
                    } catch (IndexOutOfBoundsException e3) {
                        e = e3;
                        fail = e;
                        if (date == null) {
                        }
                        msg = fail.getMessage();
                        if (msg == null) {
                        }
                        ParseException ex22 = new ParseException("Failed to parse date [" + input + "]: " + msg, pos.getIndex());
                        ex22.initCause(fail);
                        throw ex22;
                    }
                } catch (NumberFormatException e4) {
                    e = e4;
                    fail = e;
                    if (date == null) {
                    }
                    msg = fail.getMessage();
                    if (msg == null) {
                    }
                    ParseException ex222 = new ParseException("Failed to parse date [" + input + "]: " + msg, pos.getIndex());
                    ex222.initCause(fail);
                    throw ex222;
                } catch (IllegalArgumentException e5) {
                    e = e5;
                    fail = e;
                    if (date == null) {
                    }
                    msg = fail.getMessage();
                    if (msg == null) {
                    }
                    ParseException ex2222 = new ParseException("Failed to parse date [" + input + "]: " + msg, pos.getIndex());
                    ex2222.initCause(fail);
                    throw ex2222;
                } catch (IndexOutOfBoundsException e6) {
                    e = e6;
                    fail = e;
                    if (date == null) {
                    }
                    msg = fail.getMessage();
                    if (msg == null) {
                    }
                    ParseException ex22222 = new ParseException("Failed to parse date [" + input + "]: " + msg, pos.getIndex());
                    ex22222.initCause(fail);
                    throw ex22222;
                }
            }
            if (!hasT) {
            }
            if (date.length() > offset6) {
            }
        } catch (NumberFormatException e7) {
            e = e7;
        } catch (IllegalArgumentException e8) {
            e = e8;
        } catch (IndexOutOfBoundsException e9) {
            e = e9;
        }
        if (date == null) {
            input = null;
        } else {
            input = '\"' + date + '\"';
        }
        msg = fail.getMessage();
        if (msg == null || msg.isEmpty()) {
            msg = "(" + fail.getClass().getName() + ")";
        }
        ParseException ex222222 = new ParseException("Failed to parse date [" + input + "]: " + msg, pos.getIndex());
        ex222222.initCause(fail);
        throw ex222222;
    }

    private static boolean checkOffset(String value, int offset, char expected) {
        return offset < value.length() && value.charAt(offset) == expected;
    }

    private static int parseInt(String value, int beginIndex, int endIndex) throws NumberFormatException {
        if (beginIndex < 0 || endIndex > value.length() || beginIndex > endIndex) {
            throw new NumberFormatException(value);
        }
        int digit = beginIndex;
        int result = 0;
        if (digit < endIndex) {
            int i = digit + 1;
            int digit2 = Character.digit(value.charAt(digit), 10);
            if (digit2 < 0) {
                throw new NumberFormatException("Invalid number: " + value.substring(beginIndex, endIndex));
            }
            result = -digit2;
            digit = i;
        }
        while (digit < endIndex) {
            int i2 = digit + 1;
            int digit3 = Character.digit(value.charAt(digit), 10);
            if (digit3 < 0) {
                throw new NumberFormatException("Invalid number: " + value.substring(beginIndex, endIndex));
            }
            result = (result * 10) - digit3;
            digit = i2;
        }
        return -result;
    }

    private static void padInt(StringBuilder buffer, int value, int length) {
        String strValue = Integer.toString(value);
        for (int i = length - strValue.length(); i > 0; i--) {
            buffer.append('0');
        }
        buffer.append(strValue);
    }

    private static int indexOfNonDigit(String string, int offset) {
        for (int i = offset; i < string.length(); i++) {
            char c = string.charAt(i);
            if (c < '0' || c > '9') {
                return i;
            }
        }
        int i2 = string.length();
        return i2;
    }
}
