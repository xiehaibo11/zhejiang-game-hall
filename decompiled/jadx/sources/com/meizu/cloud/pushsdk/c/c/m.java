package com.meizu.cloud.pushsdk.c.c;

import java.io.Closeable;
import java.net.IDN;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Locale;
import java.util.TimeZone;
import java.util.regex.Pattern;

/* JADX INFO: loaded from: classes3.dex */
public class m {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final byte[] f4543a = new byte[0];
    public static final String[] b = new String[0];
    public static final Charset c = Charset.forName("UTF-8");
    public static final TimeZone d = TimeZone.getTimeZone("GMT");
    private static final Pattern e = Pattern.compile("([0-9a-fA-F]*:[0-9a-fA-F:.]*)|([\\d.]+)");

    public static int a(String str, int i, int i2) {
        while (i < i2) {
            char cCharAt = str.charAt(i);
            if (cCharAt != '\t' && cCharAt != '\n' && cCharAt != '\f' && cCharAt != '\r' && cCharAt != ' ') {
                return i;
            }
            i++;
        }
        return i2;
    }

    public static int a(String str, int i, int i2, char c2) {
        while (i < i2) {
            if (str.charAt(i) == c2) {
                return i;
            }
            i++;
        }
        return i2;
    }

    public static int a(String str, int i, int i2, String str2) {
        while (i < i2) {
            if (str2.indexOf(str.charAt(i)) != -1) {
                return i;
            }
            i++;
        }
        return i2;
    }

    public static String a(String str) {
        try {
            String lowerCase = IDN.toASCII(str).toLowerCase(Locale.US);
            if (lowerCase.isEmpty()) {
                return null;
            }
            if (b(lowerCase)) {
                return null;
            }
            return lowerCase;
        } catch (IllegalArgumentException unused) {
            return null;
        }
    }

    public static <T> List<T> a(List<T> list) {
        return Collections.unmodifiableList(new ArrayList(list));
    }

    public static void a(long j, long j2, long j3) {
        if ((j2 | j3) < 0 || j2 > j || j - j2 < j3) {
            throw new ArrayIndexOutOfBoundsException();
        }
    }

    public static void a(Closeable closeable) {
        if (closeable != null) {
            try {
                closeable.close();
            } catch (RuntimeException e2) {
                throw e2;
            } catch (Exception unused) {
            }
        }
    }

    public static int b(String str, int i, int i2) {
        for (int i3 = i2 - 1; i3 >= i; i3--) {
            char cCharAt = str.charAt(i3);
            if (cCharAt != '\t' && cCharAt != '\n' && cCharAt != '\f' && cCharAt != '\r' && cCharAt != ' ') {
                return i3 + 1;
            }
        }
        return i;
    }

    private static boolean b(String str) {
        for (int i = 0; i < str.length(); i++) {
            char cCharAt = str.charAt(i);
            if (cCharAt <= 31 || cCharAt >= 127 || " #%/:?@[\\]".indexOf(cCharAt) != -1) {
                return true;
            }
        }
        return false;
    }
}
