package com.kwad.sdk.utils;

import android.content.SharedPreferences;
import android.text.TextUtils;
import android.util.Log;
import com.kwad.sdk.service.ServiceProvider;
import java.util.Map;
import java.util.Set;

/* JADX INFO: loaded from: classes2.dex */
@Deprecated
public class bb {
    static final String TAG = bb.class.getSimpleName();

    private static void a(SharedPreferences.Editor editor, String str, Object obj) {
        if (str != null) {
            if (obj instanceof Integer) {
                editor.putInt(str, ((Integer) obj).intValue());
                return;
            }
            if (obj instanceof Long) {
                editor.putLong(str, ((Long) obj).longValue());
                return;
            }
            if (obj instanceof Boolean) {
                editor.putBoolean(str, ((Boolean) obj).booleanValue());
                return;
            }
            if (obj instanceof Float) {
                editor.putFloat(str, ((Float) obj).floatValue());
            } else if (obj instanceof Set) {
                editor.putStringSet(str, (Set) obj);
            } else if (obj instanceof String) {
                editor.putString(str, String.valueOf(obj));
            }
        }
    }

    static void a(String str, String str2, long j) {
        SharedPreferences sharedPreferencesFH = fH(str);
        if (sharedPreferencesFH == null) {
            return;
        }
        sharedPreferencesFH.edit().putLong(str2, j).apply();
    }

    static void a(String str, String str2, String str3, boolean z) {
        SharedPreferences sharedPreferencesFH = fH(str);
        if (sharedPreferencesFH == null) {
            return;
        }
        if (z && !com.kwad.sdk.core.a.c.cT(str3)) {
            str3 = com.kwad.sdk.core.a.c.cR(str3);
        }
        sharedPreferencesFH.edit().putString(str2, str3).apply();
    }

    static <T> void a(String str, Map<String, T> map) {
        SharedPreferences sharedPreferencesFH = fH(str);
        if (sharedPreferencesFH == null) {
            return;
        }
        SharedPreferences.Editor editorEdit = sharedPreferencesFH.edit();
        for (Map.Entry<String, T> entry : map.entrySet()) {
            try {
                a(editorEdit, entry.getKey(), entry.getValue());
            } catch (Throwable th) {
                com.kwad.sdk.core.e.c.e(TAG, Log.getStackTraceString(th));
            }
        }
        editorEdit.apply();
    }

    static void ar(String str, String str2) {
        SharedPreferences sharedPreferencesFH = fH(str);
        if (sharedPreferencesFH == null) {
            return;
        }
        sharedPreferencesFH.edit().remove(str2).apply();
    }

    static long b(String str, String str2, long j) {
        SharedPreferences sharedPreferencesFH = fH(str);
        return sharedPreferencesFH == null ? j : sharedPreferencesFH.getLong(str2, j);
    }

    static void b(String str, String str2, int i) {
        SharedPreferences sharedPreferencesFH = fH(str);
        if (sharedPreferencesFH == null) {
            return;
        }
        sharedPreferencesFH.edit().putInt(str2, i).apply();
    }

    static int c(String str, String str2, int i) {
        SharedPreferences sharedPreferencesFH = fH(str);
        return sharedPreferencesFH == null ? i : sharedPreferencesFH.getInt(str2, i);
    }

    public static SharedPreferences fH(String str) {
        try {
            return ServiceProvider.HD().getSharedPreferences(str, 0);
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
            return null;
        }
    }

    static void g(String str, String str2, String str3) {
        a(str, str2, str3, false);
    }

    static String h(String str, String str2, String str3) {
        String string;
        SharedPreferences sharedPreferencesFH = fH(str);
        return (sharedPreferencesFH == null || (string = sharedPreferencesFH.getString(str2, str3)) == null || TextUtils.isEmpty(string)) ? str3 : (TextUtils.equals(string, str3) || !com.kwad.sdk.core.a.c.cT(string)) ? string : com.kwad.sdk.core.a.c.cS(string);
    }

    static void i(String str, String str2, String str3) {
        if (com.kwad.sdk.core.a.c.cT(str)) {
            return;
        }
        g(str2, str3, com.kwad.sdk.core.a.c.cR(str));
    }

    static void l(String str, String str2, boolean z) {
        SharedPreferences sharedPreferencesFH = fH(str);
        if (sharedPreferencesFH == null) {
            return;
        }
        sharedPreferencesFH.edit().putBoolean(str2, z).apply();
    }

    static boolean m(String str, String str2, boolean z) {
        SharedPreferences sharedPreferencesFH = fH(str);
        return sharedPreferencesFH == null ? z : sharedPreferencesFH.getBoolean(str2, z);
    }
}
