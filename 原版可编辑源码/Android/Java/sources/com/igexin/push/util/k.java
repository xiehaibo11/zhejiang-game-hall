package com.igexin.push.util;

import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.text.TextUtils;
import com.igexin.push.core.CoreConsts;
import com.igexin.push.core.x;

public class k {
    public static void a(Context context, Intent intent) {
        try {
            if (intent.hasExtra("us")) {
                String strB = com.igexin.b.b.a.b(intent.getStringExtra("us"), "");
                String str = (String) c(context, "us", "", new String[0]);
                if (!str.equals(strB)) {
                    if (!CoreConsts.n.equals(strB)) {
                        a(context, "us", strB, new String[0]);
                    } else if (!TextUtils.isEmpty(str)) {
                        a(context, "us", "", new String[0]);
                    }
                }
            }
            if (intent.hasExtra("uis")) {
                String str2 = (String) c(context, "uis", "", new String[0]);
                String strB2 = com.igexin.b.b.a.b(intent.getStringExtra("uis"), "");
                if (!str2.equals(strB2)) {
                    a(context, "uis", strB2, new String[0]);
                }
            }
            if (intent.hasExtra("ua")) {
                String strE = x.a().e(context);
                String strB3 = com.igexin.b.b.a.b(intent.getStringExtra("ua"), "");
                if (strE.equals(strB3)) {
                    return;
                }
                a(context, "ua", strB3, new String[0]);
            }
        } catch (Throwable unused) {
        }
    }

    public static void a(Context context, String str, Object obj, String... strArr) {
        SharedPreferences.Editor editorEdit = context.getApplicationContext().getSharedPreferences((strArr == null || strArr.length != 1) ? "getui_sp" : strArr[0], 0).edit();
        if (obj instanceof String) {
            editorEdit.putString(str, (String) obj);
        } else if (obj instanceof Integer) {
            editorEdit.putInt(str, ((Integer) obj).intValue());
        } else if (obj instanceof Boolean) {
            editorEdit.putBoolean(str, ((Boolean) obj).booleanValue());
        } else if (obj instanceof Float) {
            editorEdit.putFloat(str, ((Float) obj).floatValue());
        } else if (obj instanceof Long) {
            editorEdit.putLong(str, ((Long) obj).longValue());
        }
        editorEdit.apply();
    }

    public static void b(Context context, String str, Object obj, String... strArr) {
        SharedPreferences.Editor editorEdit = context.getApplicationContext().getSharedPreferences((strArr == null || strArr.length != 1) ? "getui_sp" : strArr[0], 0).edit();
        if (obj instanceof String) {
            editorEdit.putString(str, (String) obj);
        } else if (obj instanceof Integer) {
            editorEdit.putInt(str, ((Integer) obj).intValue());
        } else if (obj instanceof Boolean) {
            editorEdit.putBoolean(str, ((Boolean) obj).booleanValue());
        } else if (obj instanceof Float) {
            editorEdit.putFloat(str, ((Float) obj).floatValue());
        } else if (obj instanceof Long) {
            editorEdit.putLong(str, ((Long) obj).longValue());
        }
        editorEdit.commit();
    }

    public static Object c(Context context, String str, Object obj, String... strArr) {
        SharedPreferences sharedPreferences = context.getApplicationContext().getSharedPreferences((strArr == null || strArr.length != 1) ? "getui_sp" : strArr[0], 0);
        return obj instanceof String ? sharedPreferences.getString(str, (String) obj) : obj instanceof Integer ? Integer.valueOf(sharedPreferences.getInt(str, ((Integer) obj).intValue())) : obj instanceof Boolean ? Boolean.valueOf(sharedPreferences.getBoolean(str, ((Boolean) obj).booleanValue())) : obj instanceof Float ? Float.valueOf(sharedPreferences.getFloat(str, ((Float) obj).floatValue())) : obj instanceof Long ? Long.valueOf(sharedPreferences.getLong(str, ((Long) obj).longValue())) : obj;
    }
}
