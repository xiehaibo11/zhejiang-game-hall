package com.reyun.tracking.utils;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

class j extends SQLiteOpenHelper {
    final i a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public j(i iVar, Context context) {
        super(context, "Reyun.db", (SQLiteDatabase.CursorFactory) null, 1);
        this.a = iVar;
    }

    @Override
    public SQLiteDatabase getReadableDatabase() {
        try {
            return super.getReadableDatabase();
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    @Override
    public SQLiteDatabase getWritableDatabase() {
        try {
            return super.getWritableDatabase();
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    @Override
    public void onCreate(SQLiteDatabase sQLiteDatabase) {
    }

    @Override
    public void onOpen(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.execSQL("CREATE TABLE IF NOT EXISTS " + this.a.h + "(_id INTEGER PRIMARY KEY AUTOINCREMENT, what char, value BLOB, priority INTEGER);");
    }

    @Override
    public void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
    }
}
