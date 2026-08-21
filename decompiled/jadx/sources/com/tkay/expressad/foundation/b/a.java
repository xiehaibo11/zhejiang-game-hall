package com.tkay.expressad.foundation.b;

import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;
import com.tkay.core.common.b.f;
import com.tkay.expressad.foundation.g.f.m;
import com.tkay.expressad.foundation.h.k;
import com.tkay.expressad.foundation.h.r;
import com.tkay.expressad.out.n;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class a {
    private static final String g = "SDKController";
    private static volatile a h;
    private Context i;
    private String m;
    private int n;
    private String j = "";
    private String k = "";
    private boolean l = false;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final int f6819a = 1;
    public final int b = 2;
    public final int c = 3;
    public final int d = 4;
    public final int e = 5;
    public final int f = 6;

    private static void d() {
    }

    private a() {
    }

    public static a a() {
        if (h == null) {
            synchronized (a.class) {
                if (h == null) {
                    h = new a();
                }
            }
        }
        return h;
    }

    private static String b() {
        return n.f7028a;
    }

    public final void a(Map map, final Context context) {
        if (context != null) {
            this.i = context.getApplicationContext();
            b.b().a(this.i);
            try {
                m.a(this.i);
            } catch (Exception unused) {
            }
            com.tkay.core.common.b.m.a().a(new Runnable() { // from class: com.tkay.expressad.foundation.b.a.1
                @Override // java.lang.Runnable
                public final void run() {
                    k.i(context);
                }
            }, 300L);
            if (map != null) {
                if (map.containsKey(com.tkay.expressad.b.d)) {
                    this.j = (String) map.get(com.tkay.expressad.b.d);
                }
                if (map.containsKey(com.tkay.expressad.b.e)) {
                    this.k = (String) map.get(com.tkay.expressad.b.e);
                }
                b.b().a(this.j);
                b.b().b(this.k);
                b.b().c();
                a(this.i.getApplicationContext());
                r.a(this.i);
                this.l = true;
            }
        }
    }

    private static void a(Context context) {
        String string;
        try {
            SharedPreferences sharedPreferences = context.getSharedPreferences(f.w, 0);
            String str = "";
            if (sharedPreferences != null) {
                String string2 = sharedPreferences.getString(f.o.l, "");
                string = sharedPreferences.getString(f.o.m, "");
                str = string2;
            } else {
                string = "";
            }
            if (TextUtils.isEmpty(com.tkay.expressad.foundation.g.a.co) && TextUtils.isEmpty(com.tkay.expressad.foundation.g.a.cp)) {
                com.tkay.expressad.foundation.g.a.co = str;
                com.tkay.expressad.foundation.g.a.cp = string;
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    private void e() {
        b.b().a(this.j);
        b.b().b(this.k);
        b.b().c();
    }

    private void c() {
        b.b().a(this.j);
        b.b().b(this.k);
        b.b().c();
        a(this.i.getApplicationContext());
        r.a(this.i);
        this.l = true;
    }
}
