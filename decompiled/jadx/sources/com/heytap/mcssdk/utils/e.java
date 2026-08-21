package com.heytap.mcssdk.utils;

import android.content.Context;
import android.content.SharedPreferences;
import android.os.Build;
import com.heytap.mcssdk.PushService;

/* JADX INFO: loaded from: classes.dex */
public class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f1926a = "shared_msg_sdk";
    private static final String b = "hasDefaultChannelCreated";
    private static final String c = "lastUpLoadInfoSDKVersionName";
    private static final String d = "lastUploadInfoUniqueID";
    private static final String e = "decryptTag";
    private Context f;
    private SharedPreferences g;
    private Object h;

    private static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static e f1927a = new e();

        private a() {
        }
    }

    private e() {
        this.h = new Object();
        Context context = PushService.getInstance().getContext();
        if (context != null) {
            this.f = a(context);
        }
        Context context2 = this.f;
        if (context2 != null) {
            this.g = context2.getSharedPreferences(f1926a, 0);
        }
    }

    private Context a(Context context) {
        boolean zA = com.heytap.mcssdk.utils.a.a();
        d.b("fbeVersion is " + zA);
        return (!zA || Build.VERSION.SDK_INT < 24) ? context.getApplicationContext() : context.createDeviceProtectedStorageContext();
    }

    public static e f() {
        return a.f1927a;
    }

    private SharedPreferences g() {
        SharedPreferences sharedPreferences = this.g;
        if (sharedPreferences != null) {
            return sharedPreferences;
        }
        synchronized (this.h) {
            if (this.g != null || this.f == null) {
                return this.g;
            }
            SharedPreferences sharedPreferences2 = this.f.getSharedPreferences(f1926a, 0);
            this.g = sharedPreferences2;
            return sharedPreferences2;
        }
    }

    public int a(String str, int i) {
        SharedPreferences sharedPreferencesG = g();
        return sharedPreferencesG != null ? sharedPreferencesG.getInt(str, i) : i;
    }

    public long a(String str, long j) {
        SharedPreferences sharedPreferencesG = g();
        return sharedPreferencesG != null ? sharedPreferencesG.getLong(str, j) : j;
    }

    public void a(String str) {
        SharedPreferences sharedPreferencesG = g();
        if (sharedPreferencesG != null) {
            sharedPreferencesG.edit().putString(d, str).commit();
        }
    }

    public void a(boolean z) {
        SharedPreferences sharedPreferencesG = g();
        if (sharedPreferencesG != null) {
            sharedPreferencesG.edit().putBoolean(b, z).commit();
        }
    }

    public boolean a() {
        SharedPreferences sharedPreferencesG = g();
        if (sharedPreferencesG != null) {
            return sharedPreferencesG.getBoolean(b, false);
        }
        return false;
    }

    public void b() {
        SharedPreferences sharedPreferencesG = g();
        if (sharedPreferencesG != null) {
            sharedPreferencesG.edit().putString(c, com.pushsdk.a.f).commit();
        }
    }

    public void b(String str) {
        SharedPreferences sharedPreferencesG = g();
        if (sharedPreferencesG != null) {
            sharedPreferencesG.edit().putString(e, str).commit();
        }
    }

    public void b(String str, int i) {
        SharedPreferences sharedPreferencesG = g();
        if (sharedPreferencesG != null) {
            SharedPreferences.Editor editorEdit = sharedPreferencesG.edit();
            editorEdit.putInt(str, i);
            editorEdit.apply();
        }
    }

    public void b(String str, long j) {
        SharedPreferences sharedPreferencesG = g();
        if (sharedPreferencesG != null) {
            SharedPreferences.Editor editorEdit = sharedPreferencesG.edit();
            editorEdit.putLong(str, j);
            editorEdit.apply();
        }
    }

    public int c(String str) {
        SharedPreferences sharedPreferencesG = g();
        if (sharedPreferencesG != null) {
            return sharedPreferencesG.getInt(str, 0);
        }
        return 0;
    }

    public String c() {
        SharedPreferences sharedPreferencesG = g();
        return sharedPreferencesG != null ? sharedPreferencesG.getString(d, "") : "";
    }

    public long d(String str) {
        SharedPreferences sharedPreferencesG = g();
        return sharedPreferencesG != null ? sharedPreferencesG.getLong(str, com.heytap.mcssdk.constant.a.b.longValue()) : com.heytap.mcssdk.constant.a.b.longValue();
    }

    public String d() {
        SharedPreferences sharedPreferencesG = g();
        return sharedPreferencesG != null ? sharedPreferencesG.getString(c, "") : "";
    }

    public String e() {
        SharedPreferences sharedPreferencesG = g();
        return sharedPreferencesG != null ? sharedPreferencesG.getString(e, "DES") : "DES";
    }
}
