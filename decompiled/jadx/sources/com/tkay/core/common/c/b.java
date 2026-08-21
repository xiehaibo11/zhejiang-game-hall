package com.tkay.core.common.c;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

/* JADX INFO: loaded from: classes3.dex */
public abstract class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private a f6096a;

    protected abstract void a(SQLiteDatabase sQLiteDatabase);

    protected abstract void a(SQLiteDatabase sQLiteDatabase, int i, int i2);

    protected abstract void b(SQLiteDatabase sQLiteDatabase);

    protected abstract String c();

    protected abstract int d();

    public b(Context context) {
        this.f6096a = new a(context, c());
    }

    public final SQLiteDatabase a() {
        return this.f6096a.getReadableDatabase();
    }

    public final synchronized SQLiteDatabase b() {
        SQLiteDatabase writableDatabase;
        try {
            writableDatabase = this.f6096a.getWritableDatabase();
        } catch (Exception unused) {
            writableDatabase = null;
        }
        return writableDatabase;
    }

    private class a extends SQLiteOpenHelper {
        public a(Context context, String str) {
            super(context, str, (SQLiteDatabase.CursorFactory) null, 9);
        }

        @Override // android.database.sqlite.SQLiteOpenHelper
        public final void onCreate(SQLiteDatabase sQLiteDatabase) {
            b.this.a(sQLiteDatabase);
        }

        @Override // android.database.sqlite.SQLiteOpenHelper
        public final void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
            b.this.a(sQLiteDatabase, i, i2);
        }

        @Override // android.database.sqlite.SQLiteOpenHelper
        public final void onDowngrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
            b.this.b(sQLiteDatabase);
        }
    }
}
