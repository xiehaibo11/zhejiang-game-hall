package com.loc;

import android.database.sqlite.SQLiteDatabase;

public class fj implements ay {
    @Override
    public final String a() {
        return "alsn20170807.db";
    }

    @Override
    public final void a(SQLiteDatabase sQLiteDatabase) {
        try {
            sQLiteDatabase.execSQL("CREATE TABLE IF NOT EXISTS c (_id integer primary key autoincrement, a2 varchar(100), a4 varchar(2000), a3 LONG );");
        } catch (Throwable th) {
            fr.a(th, "SdCardDbCreator", "onCreate");
        }
    }
}
