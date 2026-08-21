package com.tramini.plugin.a.b;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

public abstract class b {
    private a a;

    protected abstract String c();

    protected abstract int d();

    protected abstract void e();

    protected abstract void f();

    protected abstract void g();

    public b(Context context) {
        this.a = new a(context, c());
    }

    public final SQLiteDatabase a() {
        return this.a.getReadableDatabase();
    }

    public final synchronized SQLiteDatabase b() {
        SQLiteDatabase writableDatabase;
        try {
            writableDatabase = this.a.getWritableDatabase();
        } catch (Exception unused) {
            writableDatabase = null;
        }
        return writableDatabase;
    }

    private class a extends SQLiteOpenHelper {
        @Override
        public final void onCreate(SQLiteDatabase sQLiteDatabase) {
        }

        @Override
        public final void onDowngrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        }

        @Override
        public final void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        }

        public a(Context context, String str) {
            super(context, str, (SQLiteDatabase.CursorFactory) null, 2);
        }
    }
}
