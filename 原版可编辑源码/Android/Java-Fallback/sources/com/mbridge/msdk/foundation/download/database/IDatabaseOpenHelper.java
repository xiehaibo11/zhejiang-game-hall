package com.mbridge.msdk.foundation.download.database;

public interface IDatabaseOpenHelper {
    android.database.sqlite.SQLiteDatabase getReadableDatabase();

    android.database.sqlite.SQLiteDatabase getWritableDatabase();
}
