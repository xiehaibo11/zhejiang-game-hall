package com.alibaba.sdk.android.oss.common;

public class OSSSQLiteHelper extends android.database.sqlite.SQLiteOpenHelper {
    private static final java.lang.String CREATE_TABLE_PART_INFO = "create table if not exists part_info(id INTEGER primary key,upload_id VARCHAR(255),num INTEGER,crc64 INTEGER,size INTEGER,etag VARCHAR(255))";
    public static final java.lang.String TABLE_NAME_PART_INFO = "part_info";

    public OSSSQLiteHelper(android.content.Context r4) {
            r3 = this;
            java.lang.String r0 = "oss_android_sdk.db"
            r1 = 0
            r2 = 1
            r3.<init>(r4, r0, r1, r2)
            return
    }

    public OSSSQLiteHelper(android.content.Context r1, java.lang.String r2, android.database.sqlite.SQLiteDatabase.CursorFactory r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            return
    }

    @Override
    public void onCreate(android.database.sqlite.SQLiteDatabase r2) {
            r1 = this;
            java.lang.String r0 = "create table if not exists part_info(id INTEGER primary key,upload_id VARCHAR(255),num INTEGER,crc64 INTEGER,size INTEGER,etag VARCHAR(255))"
            r2.execSQL(r0)
            return
    }

    @Override
    public void onUpgrade(android.database.sqlite.SQLiteDatabase r1, int r2, int r3) {
            r0 = this;
            return
    }
}
