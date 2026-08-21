package com.tkay.expressad.foundation.c;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;

public class c extends b {
    private static volatile c a;

    private static void f() {
    }

    @Override
    protected final String c() {
        return "tkay_expressad.db";
    }

    @Override
    protected final int d() {
        return 67;
    }

    @Override
    protected final void e() {
    }

    private c(Context context) {
        super(context);
    }

    public static c a(Context context) {
        if (a == null) {
            synchronized (c.class) {
                if (a == null) {
                    a = new c(context.getApplicationContext());
                }
            }
        }
        return a;
    }

    @Override
    protected final void a(SQLiteDatabase sQLiteDatabase) {
        c(sQLiteDatabase);
    }

    private static void c(SQLiteDatabase sQLiteDatabase) {
        try {
            sQLiteDatabase.execSQL("DROP TABLE IF EXISTS 'campaign'");
            sQLiteDatabase.execSQL("DROP TABLE IF EXISTS 'frequence'");
            sQLiteDatabase.execSQL("DROP TABLE IF EXISTS 'campaignclick'");
            sQLiteDatabase.execSQL("DROP TABLE IF EXISTS 'click_time'");
            sQLiteDatabase.execSQL("DROP TABLE IF EXISTS 'load_stat'");
            sQLiteDatabase.execSQL("DROP TABLE IF EXISTS 'fq_info'");
            sQLiteDatabase.execSQL("DROP TABLE IF EXISTS 'dailyplaycap'");
            sQLiteDatabase.execSQL("DROP TABLE IF EXISTS 'display_resource_type'");
            sQLiteDatabase.execSQL("DROP TABLE IF EXISTS 'unit_id'");
            sQLiteDatabase.execSQL("DROP TABLE IF EXISTS 'c_replace_temp'");
        } catch (Exception e) {
            if (com.tkay.expressad.b.a) {
                e.printStackTrace();
            }
        }
    }

    @Override
    protected final void b(SQLiteDatabase sQLiteDatabase) {
        c(sQLiteDatabase);
    }
}
