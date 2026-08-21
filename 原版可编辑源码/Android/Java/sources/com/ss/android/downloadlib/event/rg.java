package com.ss.android.downloadlib.event;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

public class rg extends SQLiteOpenHelper {
    static final String[] rg = {"_id", "ad_id", "req_id", "time"};

    public rg(Context context) {
        super(context, "click_event", (SQLiteDatabase.CursorFactory) null, 1);
    }

    @Override
    public void onCreate(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.execSQL("CREATE TABLE IF NOT EXISTS click_event(_id INTEGER PRIMARY KEY AUTOINCREMENT,ad_id INTEGER,req_id TEXT,time INTEGER)");
    }

    @Override
    public void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        sQLiteDatabase.execSQL("DROP TABLE IF EXISTS click_event");
        onCreate(sQLiteDatabase);
    }
}
