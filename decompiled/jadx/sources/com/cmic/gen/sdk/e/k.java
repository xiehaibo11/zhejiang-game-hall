package com.cmic.gen.sdk.e;

import android.content.Context;
import android.content.SharedPreferences;
import java.util.Map;

/* JADX INFO: compiled from: SharedPreferencesUtil.java */
/* JADX INFO: loaded from: classes.dex */
public class k {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Context f1672a;

    public static void a(Context context) {
        f1672a = context.getApplicationContext();
    }

    public static int a(String str, int i) {
        return f1672a.getSharedPreferences("ssoconfigs", 0).getInt(d.a(str), i);
    }

    public static int a(String str, String str2, int i) {
        return f1672a.getSharedPreferences(str, 0).getInt(d.a(str2), i);
    }

    public static long a(String str, long j) {
        return f1672a.getSharedPreferences("ssoconfigs", 0).getLong(d.a(str), j);
    }

    public static long a(String str, String str2, long j) {
        return f1672a.getSharedPreferences(str, 0).getLong(d.a(str2), j);
    }

    public static void a(String str, String str2) {
        SharedPreferences sharedPreferences = f1672a.getSharedPreferences("ssoconfigs", 0);
        sharedPreferences.edit().putString(d.a(str), str2).commit();
    }

    public static void a(Map<String, Object> map) {
        if (map == null || map.isEmpty()) {
            return;
        }
        SharedPreferences.Editor editorEdit = f1672a.getSharedPreferences("ssoconfigs", 0).edit();
        for (String str : map.keySet()) {
            Object obj = map.get(str);
            String strA = d.a(str);
            if (obj instanceof String) {
                editorEdit.putString(strA, (String) obj);
            } else if (obj instanceof Integer) {
                editorEdit.putInt(strA, ((Integer) obj).intValue());
            } else if (obj instanceof Long) {
                editorEdit.putLong(strA, ((Long) obj).longValue());
            } else if (obj instanceof Boolean) {
                editorEdit.putBoolean(strA, ((Boolean) obj).booleanValue());
            }
        }
        editorEdit.commit();
    }

    public static String b(String str, String str2) {
        return f1672a.getSharedPreferences("ssoconfigs", 0).getString(d.a(str), str2);
    }

    public static String a(String str, String str2, String str3) {
        return f1672a.getSharedPreferences(str, 0).getString(d.a(str2), str3);
    }

    public static void a(String str) {
        SharedPreferences sharedPreferences = f1672a.getSharedPreferences("ssoconfigs", 0);
        sharedPreferences.edit().remove(d.a(str)).commit();
    }

    public static a a() {
        return new a(f1672a.getSharedPreferences("ssoconfigs", 0).edit());
    }

    public static a b(String str) {
        return new a(f1672a.getSharedPreferences(str, 0).edit());
    }

    /* JADX INFO: compiled from: SharedPreferencesUtil.java */
    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final SharedPreferences.Editor f1673a;

        a(SharedPreferences.Editor editor) {
            this.f1673a = editor;
        }

        public void a(String str, String str2) {
            this.f1673a.putString(d.a(str), str2);
        }

        public void a(String str, long j) {
            this.f1673a.putLong(d.a(str), j);
        }

        public void a(String str, int i) {
            this.f1673a.putInt(d.a(str), i);
        }

        public void a() {
            this.f1673a.apply();
        }

        public void b() {
            this.f1673a.commit();
        }

        public void c() {
            this.f1673a.clear();
        }

        public void a(String str) {
            this.f1673a.remove(d.a(str));
        }
    }
}
