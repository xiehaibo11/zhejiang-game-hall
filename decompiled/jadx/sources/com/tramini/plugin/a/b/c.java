package com.tramini.plugin.a.b;

import android.content.Context;

/* JADX INFO: loaded from: classes4.dex */
public class c extends b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static c f7834a;

    @Override // com.tramini.plugin.a.b.b
    protected final String c() {
        return "tramini.db";
    }

    @Override // com.tramini.plugin.a.b.b
    protected final int d() {
        return 2;
    }

    @Override // com.tramini.plugin.a.b.b
    protected final void e() {
    }

    @Override // com.tramini.plugin.a.b.b
    protected final void f() {
    }

    @Override // com.tramini.plugin.a.b.b
    protected final void g() {
    }

    private c(Context context) {
        super(context);
    }

    public static c a(Context context) {
        if (f7834a == null) {
            synchronized (c.class) {
                f7834a = new c(context.getApplicationContext());
            }
        }
        return f7834a;
    }

    private void h() {
        try {
            b().execSQL("DROP TABLE IF EXISTS 'il'");
            b().execSQL("DROP TABLE IF EXISTS 'il_all'");
        } catch (Throwable unused) {
        }
    }
}
