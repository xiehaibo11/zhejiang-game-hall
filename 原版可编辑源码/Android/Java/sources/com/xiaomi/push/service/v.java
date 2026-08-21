package com.xiaomi.push.service;

import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;
import java.util.List;

public class v {
    private static v a;
    private Context a;
    private List<String> a = new ArrayList();
    private final List<String> b = new ArrayList();
    private final List<String> c = new ArrayList();

    private v(Context context) {
        Context applicationContext = context.getApplicationContext();
        this.a = applicationContext;
        if (applicationContext == null) {
            this.a = context;
        }
        SharedPreferences sharedPreferences = this.a.getSharedPreferences("mipush_app_info", 0);
        for (String str : sharedPreferences.getString("unregistered_pkg_names", "").split(Constants.ACCEPT_TIME_SEPARATOR_SP)) {
            if (TextUtils.isEmpty(str)) {
                this.a.add(str);
            }
        }
        for (String str2 : sharedPreferences.getString("disable_push_pkg_names", "").split(Constants.ACCEPT_TIME_SEPARATOR_SP)) {
            if (!TextUtils.isEmpty(str2)) {
                this.b.add(str2);
            }
        }
        for (String str3 : sharedPreferences.getString("disable_push_pkg_names_cache", "").split(Constants.ACCEPT_TIME_SEPARATOR_SP)) {
            if (!TextUtils.isEmpty(str3)) {
                this.c.add(str3);
            }
        }
    }

    public static v a(Context context) {
        if (a == null) {
            a = new v(context);
        }
        return a;
    }

    public void a(String str) {
        synchronized (this.a) {
            if (!this.a.contains(str)) {
                this.a.add(str);
                this.a.getSharedPreferences("mipush_app_info", 0).edit().putString("unregistered_pkg_names", com.xiaomi.push.bp.a(this.a, Constants.ACCEPT_TIME_SEPARATOR_SP)).commit();
            }
        }
    }

    public boolean a(String str) {
        boolean zContains;
        synchronized (this.a) {
            zContains = this.a.contains(str);
        }
        return zContains;
    }

    public void b(String str) {
        synchronized (this.b) {
            if (!this.b.contains(str)) {
                this.b.add(str);
                this.a.getSharedPreferences("mipush_app_info", 0).edit().putString("disable_push_pkg_names", com.xiaomi.push.bp.a(this.b, Constants.ACCEPT_TIME_SEPARATOR_SP)).commit();
            }
        }
    }

    public boolean b(String str) {
        boolean zContains;
        synchronized (this.b) {
            zContains = this.b.contains(str);
        }
        return zContains;
    }

    public void c(String str) {
        synchronized (this.c) {
            if (!this.c.contains(str)) {
                this.c.add(str);
                this.a.getSharedPreferences("mipush_app_info", 0).edit().putString("disable_push_pkg_names_cache", com.xiaomi.push.bp.a(this.c, Constants.ACCEPT_TIME_SEPARATOR_SP)).commit();
            }
        }
    }

    public boolean c(String str) {
        boolean zContains;
        synchronized (this.c) {
            zContains = this.c.contains(str);
        }
        return zContains;
    }

    public void d(String str) {
        synchronized (this.a) {
            if (this.a.contains(str)) {
                this.a.remove(str);
                this.a.getSharedPreferences("mipush_app_info", 0).edit().putString("unregistered_pkg_names", com.xiaomi.push.bp.a(this.a, Constants.ACCEPT_TIME_SEPARATOR_SP)).commit();
            }
        }
    }

    public void e(String str) {
        synchronized (this.b) {
            if (this.b.contains(str)) {
                this.b.remove(str);
                this.a.getSharedPreferences("mipush_app_info", 0).edit().putString("disable_push_pkg_names", com.xiaomi.push.bp.a(this.b, Constants.ACCEPT_TIME_SEPARATOR_SP)).commit();
            }
        }
    }

    public void f(String str) {
        synchronized (this.c) {
            if (this.c.contains(str)) {
                this.c.remove(str);
                this.a.getSharedPreferences("mipush_app_info", 0).edit().putString("disable_push_pkg_names_cache", com.xiaomi.push.bp.a(this.c, Constants.ACCEPT_TIME_SEPARATOR_SP)).commit();
            }
        }
    }
}
