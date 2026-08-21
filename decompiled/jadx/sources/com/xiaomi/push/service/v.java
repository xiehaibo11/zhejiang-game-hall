package com.xiaomi.push.service;

import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public class v {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static v f8393a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Context f1020a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private List<String> f1021a = new ArrayList();
    private final List<String> b = new ArrayList();
    private final List<String> c = new ArrayList();

    private v(Context context) {
        Context applicationContext = context.getApplicationContext();
        this.f1020a = applicationContext;
        if (applicationContext == null) {
            this.f1020a = context;
        }
        SharedPreferences sharedPreferences = this.f1020a.getSharedPreferences("mipush_app_info", 0);
        for (String str : sharedPreferences.getString("unregistered_pkg_names", "").split(Constants.ACCEPT_TIME_SEPARATOR_SP)) {
            if (TextUtils.isEmpty(str)) {
                this.f1021a.add(str);
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
        if (f8393a == null) {
            f8393a = new v(context);
        }
        return f8393a;
    }

    public void a(String str) {
        synchronized (this.f1021a) {
            if (!this.f1021a.contains(str)) {
                this.f1021a.add(str);
                this.f1020a.getSharedPreferences("mipush_app_info", 0).edit().putString("unregistered_pkg_names", com.xiaomi.push.bp.a(this.f1021a, Constants.ACCEPT_TIME_SEPARATOR_SP)).commit();
            }
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m698a(String str) {
        boolean zContains;
        synchronized (this.f1021a) {
            zContains = this.f1021a.contains(str);
        }
        return zContains;
    }

    public void b(String str) {
        synchronized (this.b) {
            if (!this.b.contains(str)) {
                this.b.add(str);
                this.f1020a.getSharedPreferences("mipush_app_info", 0).edit().putString("disable_push_pkg_names", com.xiaomi.push.bp.a(this.b, Constants.ACCEPT_TIME_SEPARATOR_SP)).commit();
            }
        }
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public boolean m699b(String str) {
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
                this.f1020a.getSharedPreferences("mipush_app_info", 0).edit().putString("disable_push_pkg_names_cache", com.xiaomi.push.bp.a(this.c, Constants.ACCEPT_TIME_SEPARATOR_SP)).commit();
            }
        }
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    public boolean m700c(String str) {
        boolean zContains;
        synchronized (this.c) {
            zContains = this.c.contains(str);
        }
        return zContains;
    }

    public void d(String str) {
        synchronized (this.f1021a) {
            if (this.f1021a.contains(str)) {
                this.f1021a.remove(str);
                this.f1020a.getSharedPreferences("mipush_app_info", 0).edit().putString("unregistered_pkg_names", com.xiaomi.push.bp.a(this.f1021a, Constants.ACCEPT_TIME_SEPARATOR_SP)).commit();
            }
        }
    }

    public void e(String str) {
        synchronized (this.b) {
            if (this.b.contains(str)) {
                this.b.remove(str);
                this.f1020a.getSharedPreferences("mipush_app_info", 0).edit().putString("disable_push_pkg_names", com.xiaomi.push.bp.a(this.b, Constants.ACCEPT_TIME_SEPARATOR_SP)).commit();
            }
        }
    }

    public void f(String str) {
        synchronized (this.c) {
            if (this.c.contains(str)) {
                this.c.remove(str);
                this.f1020a.getSharedPreferences("mipush_app_info", 0).edit().putString("disable_push_pkg_names_cache", com.xiaomi.push.bp.a(this.c, Constants.ACCEPT_TIME_SEPARATOR_SP)).commit();
            }
        }
    }
}
