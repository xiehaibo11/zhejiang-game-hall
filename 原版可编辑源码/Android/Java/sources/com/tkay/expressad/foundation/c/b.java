package com.tkay.expressad.foundation.c;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

public abstract class b {
    private a a;

    protected abstract void a(SQLiteDatabase sQLiteDatabase);

    protected abstract void b(SQLiteDatabase sQLiteDatabase);

    protected abstract String c();

    protected abstract int d();

    protected abstract void e();

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

        public a(Context context, String str) {
            super(context, str, (SQLiteDatabase.CursorFactory) null, 67);
        }

        @Override
        public final void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
            b.this.a(sQLiteDatabase);
        }

        @Override
        public final void onDowngrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
            b.this.b(sQLiteDatabase);
        }
    }
}
