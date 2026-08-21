package com.igexin.push.extension.distribution.basic.d;

import android.content.SharedPreferences;
import com.igexin.push.extension.distribution.basic.c.e;

/* JADX INFO: loaded from: classes2.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static a f2630a;
    private SharedPreferences b = e.f2629a.getSharedPreferences("gx_sp", 0);

    private a() {
    }

    public static a a() {
        if (f2630a == null) {
            f2630a = new a();
        }
        return f2630a;
    }

    public static String b() {
        return e.f2629a.getSharedPreferences("getui_sp", 0).getString("us", "");
    }

    public static String c() {
        return e.f2629a.getSharedPreferences("getui_sp", 0).getString("uis", "");
    }
}
