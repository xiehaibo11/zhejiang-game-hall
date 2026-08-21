package com.tramini.plugin.a.b;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

/* JADX INFO: loaded from: classes4.dex */
public abstract class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private a f7832a;

    protected abstract String c();

    protected abstract int d();

    protected abstract void e();

    protected abstract void f();

    protected abstract void g();

    public b(Context context) {
        this.f7832a = new a(context, c());
    }

    public final SQLiteDatabase a() {
        return this.f7832a.getReadableDatabase();
    }

    public final synchronized SQLiteDatabase b() {
        SQLiteDatabase writableDatabase;
        try {
            writableDatabase = this.f7832a.getWritableDatabase();
        } catch (Exception unused) {
            writableDatabase = null;
        }
        return writableDatabase;
    }

    private class a extends SQLiteOpenHelper {
        @Override // android.database.sqlite.SQLiteOpenHelper
        public final void onCreate(SQLiteDatabase sQLiteDatabase) {
        }

        @Override // android.database.sqlite.SQLiteOpenHelper
        public final void onDowngrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        }

        @Override // android.database.sqlite.SQLiteOpenHelper
        public final void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        }

        public a(Context context, String str) {
            super(context, str, (SQLiteDatabase.CursorFactory) null, 2);
        }
    }
}
