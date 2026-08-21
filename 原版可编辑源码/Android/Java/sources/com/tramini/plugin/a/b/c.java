package com.tramini.plugin.a.b;

import android.content.Context;

public class c extends b {
    private static c a;

    @Override
    protected final String c() {
        return "tramini.db";
    }

    @Override
    protected final int d() {
        return 2;
    }

    @Override
    protected final void e() {
    }

    @Override
    protected final void f() {
    }

    @Override
    protected final void g() {
    }

    private c(Context context) {
        super(context);
    }

    public static c a(Context context) {
        if (a == null) {
            synchronized (c.class) {
                a = new c(context.getApplicationContext());
            }
        }
        return a;
    }

    private void h() {
        try {
            b().execSQL("DROP TABLE IF EXISTS 'il'");
            b().execSQL("DROP TABLE IF EXISTS 'il_all'");
        } catch (Throwable unused) {
        }
    }
}
