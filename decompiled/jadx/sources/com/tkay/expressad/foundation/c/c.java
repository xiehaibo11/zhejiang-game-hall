package com.tkay.expressad.foundation.c;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;

/* JADX INFO: loaded from: classes3.dex */
public class c extends b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile c f6827a;

    private static void f() {
    }

    @Override // com.tkay.expressad.foundation.c.b
    protected final String c() {
        return "tkay_expressad.db";
    }

    @Override // com.tkay.expressad.foundation.c.b
    protected final int d() {
        return 67;
    }

    @Override // com.tkay.expressad.foundation.c.b
    protected final void e() {
    }

    private c(Context context) {
        super(context);
    }

    public static c a(Context context) {
        if (f6827a == null) {
            synchronized (c.class) {
                if (f6827a == null) {
                    f6827a = new c(context.getApplicationContext());
                }
            }
        }
        return f6827a;
    }

    @Override // com.tkay.expressad.foundation.c.b
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
            if (com.tkay.expressad.b.f6449a) {
                e.printStackTrace();
            }
        }
    }

    @Override // com.tkay.expressad.foundation.c.b
    protected final void b(SQLiteDatabase sQLiteDatabase) {
        c(sQLiteDatabase);
    }
}
