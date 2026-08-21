package com.ss.android.downloadlib.event;

public class rg extends android.database.sqlite.SQLiteOpenHelper {
    static final java.lang.String[] rg = null;

    static {
            java.lang.String r0 = "_id"
            java.lang.String r1 = "ad_id"
            java.lang.String r2 = "req_id"
            java.lang.String r3 = "time"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3}
            com.ss.android.downloadlib.event.rg.rg = r0
            return
    }

    public rg(android.content.Context r4) {
            r3 = this;
            java.lang.String r0 = "click_event"
            r1 = 0
            r2 = 1
            r3.<init>(r4, r0, r1, r2)
            return
    }

    @Override
    public void onCreate(android.database.sqlite.SQLiteDatabase r2) {
            r1 = this;
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS click_event(_id INTEGER PRIMARY KEY AUTOINCREMENT,ad_id INTEGER,req_id TEXT,time INTEGER)"
            r2.execSQL(r0)
            return
    }

    @Override
    public void onUpgrade(android.database.sqlite.SQLiteDatabase r1, int r2, int r3) {
            r0 = this;
            java.lang.String r2 = "DROP TABLE IF EXISTS click_event"
            r1.execSQL(r2)
            r0.onCreate(r1)
            return
    }
}
