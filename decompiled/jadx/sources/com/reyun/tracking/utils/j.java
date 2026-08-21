package com.reyun.tracking.utils;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

/* JADX INFO: loaded from: classes3.dex */
class j extends SQLiteOpenHelper {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ i f4749a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public j(i iVar, Context context) {
        super(context, "Reyun.db", (SQLiteDatabase.CursorFactory) null, 1);
        this.f4749a = iVar;
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public SQLiteDatabase getReadableDatabase() {
        try {
            return super.getReadableDatabase();
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public SQLiteDatabase getWritableDatabase() {
        try {
            return super.getWritableDatabase();
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public void onCreate(SQLiteDatabase sQLiteDatabase) {
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public void onOpen(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.execSQL("CREATE TABLE IF NOT EXISTS " + this.f4749a.h + "(_id INTEGER PRIMARY KEY AUTOINCREMENT, what char, value BLOB, priority INTEGER);");
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
    }
}
