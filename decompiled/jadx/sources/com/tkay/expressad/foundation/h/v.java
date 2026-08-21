package com.tkay.expressad.foundation.h;

import android.content.Context;
import android.content.SharedPreferences;

/* JADX INFO: loaded from: classes3.dex */
public final class v {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f6960a = "H+tU+FeXHM==";
    public static final String b = "cv";
    private static final String c = "tkay_share_date";

    private static void a() {
        SharedPreferences.Editor editorEdit = com.tkay.expressad.foundation.b.b.b().d().getApplicationContext().getSharedPreferences(b, 0).edit();
        editorEdit.clear();
        editorEdit.commit();
    }

    private static void a(String str) {
        SharedPreferences.Editor editorEdit = com.tkay.expressad.foundation.b.b.b().d().getApplicationContext().getSharedPreferences(b, 0).edit();
        editorEdit.remove(str);
        editorEdit.apply();
    }

    private static void c(Context context, String str, Object obj) {
        String simpleName = obj.getClass().getSimpleName();
        SharedPreferences.Editor editorEdit = context.getApplicationContext().getSharedPreferences(b, 0).edit();
        if ("String".equals(simpleName)) {
            editorEdit.putString(str, (String) obj);
        } else if ("Integer".equals(simpleName)) {
            editorEdit.putInt(str, ((Integer) obj).intValue());
        } else if ("Boolean".equals(simpleName)) {
            editorEdit.putBoolean(str, ((Boolean) obj).booleanValue());
        } else if ("Float".equals(simpleName)) {
            editorEdit.putFloat(str, ((Float) obj).floatValue());
        } else if ("Long".equals(simpleName)) {
            editorEdit.putLong(str, ((Long) obj).longValue());
        }
        editorEdit.apply();
    }

    private static Object d(Context context, String str, Object obj) {
        String simpleName = obj != null ? obj.getClass().getSimpleName() : "";
        SharedPreferences sharedPreferences = context.getSharedPreferences(b, 0);
        if ("String".equals(simpleName)) {
            return sharedPreferences.getString(str, (String) obj);
        }
        if ("Integer".equals(simpleName)) {
            return Integer.valueOf(sharedPreferences.getInt(str, ((Integer) obj).intValue()));
        }
        if ("Boolean".equals(simpleName)) {
            return Boolean.valueOf(sharedPreferences.getBoolean(str, ((Boolean) obj).booleanValue()));
        }
        if ("Float".equals(simpleName)) {
            return Float.valueOf(sharedPreferences.getFloat(str, ((Float) obj).floatValue()));
        }
        return "Long".equals(simpleName) ? Long.valueOf(sharedPreferences.getLong(str, ((Long) obj).longValue())) : obj;
    }

    public static void a(Context context, String str, Object obj) {
        String simpleName = obj.getClass().getSimpleName();
        if (context == null) {
            return;
        }
        SharedPreferences.Editor editorEdit = context.getApplicationContext().getSharedPreferences(c, 0).edit();
        if ("String".equals(simpleName)) {
            editorEdit.putString(str, (String) obj);
        } else if ("Integer".equals(simpleName)) {
            editorEdit.putInt(str, ((Integer) obj).intValue());
        } else if ("Boolean".equals(simpleName)) {
            editorEdit.putBoolean(str, ((Boolean) obj).booleanValue());
        } else if ("Float".equals(simpleName)) {
            editorEdit.putFloat(str, ((Float) obj).floatValue());
        } else if ("Long".equals(simpleName)) {
            editorEdit.putLong(str, ((Long) obj).longValue());
        }
        editorEdit.apply();
    }

    public static Object b(Context context, String str, Object obj) {
        if (context == null) {
            return obj;
        }
        String simpleName = obj != null ? obj.getClass().getSimpleName() : "";
        SharedPreferences sharedPreferences = context.getSharedPreferences(c, 0);
        if ("String".equals(simpleName)) {
            return sharedPreferences.getString(str, (String) obj);
        }
        if ("Integer".equals(simpleName)) {
            return Integer.valueOf(sharedPreferences.getInt(str, ((Integer) obj).intValue()));
        }
        if ("Boolean".equals(simpleName)) {
            return Boolean.valueOf(sharedPreferences.getBoolean(str, ((Boolean) obj).booleanValue()));
        }
        if ("Float".equals(simpleName)) {
            return Float.valueOf(sharedPreferences.getFloat(str, ((Float) obj).floatValue()));
        }
        return "Long".equals(simpleName) ? Long.valueOf(sharedPreferences.getLong(str, ((Long) obj).longValue())) : obj;
    }

    private static void a(Context context, String str) {
        SharedPreferences.Editor editorEdit = context.getApplicationContext().getSharedPreferences(c, 0).edit();
        editorEdit.remove(str);
        editorEdit.apply();
    }

    private static void a(Context context, String... strArr) {
        SharedPreferences.Editor editorEdit = context.getApplicationContext().getSharedPreferences(c, 0).edit();
        for (String str : strArr) {
            editorEdit.remove(str);
        }
        editorEdit.apply();
    }
}
