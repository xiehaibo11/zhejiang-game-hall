package com.kwad.sdk.utils;

import android.text.TextUtils;
import java.text.SimpleDateFormat;
import java.util.Locale;

/* JADX INFO: loaded from: classes2.dex */
public final class bc {
    private static final SimpleDateFormat aJu = new SimpleDateFormat("MM/dd", Locale.US);
    private static final SimpleDateFormat aJv = new SimpleDateFormat("yyyy/MM/dd", Locale.US);
    private static final SimpleDateFormat aJw = new SimpleDateFormat("MM月dd日", Locale.US);
    private static final SimpleDateFormat aJx = new SimpleDateFormat("yyyy年MM月dd日", Locale.US);
    private static final SimpleDateFormat aJy = new SimpleDateFormat("HH:mm", Locale.US);
    private static final SimpleDateFormat aJz = new SimpleDateFormat("MM-dd", Locale.US);
    private static final SimpleDateFormat aJA = new SimpleDateFormat("yyyy-MM-dd", Locale.US);

    public static boolean fI(String str) {
        return !TextUtils.isEmpty(str);
    }

    public static boolean fJ(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        return str.matches(".*\\.kpg.*");
    }

    public static boolean isEquals(String str, String str2) {
        return !TextUtils.isEmpty(str) && str.equals(str2);
    }

    public static boolean isNullString(String str) {
        return TextUtils.isEmpty(str) || "null".equalsIgnoreCase(str);
    }
}
