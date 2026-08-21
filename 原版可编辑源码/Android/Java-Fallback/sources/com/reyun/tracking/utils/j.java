package com.reyun.tracking.utils;

class j extends android.database.sqlite.SQLiteOpenHelper {
    final com.reyun.tracking.utils.i a;

    public j(com.reyun.tracking.utils.i r3, android.content.Context r4) {
            r2 = this;
            r2.a = r3
            java.lang.String r3 = "Reyun.db"
            r0 = 0
            r1 = 1
            r2.<init>(r4, r3, r0, r1)
            return
    }

    @Override
    public android.database.sqlite.SQLiteDatabase getReadableDatabase() {
            r1 = this;
            android.database.sqlite.SQLiteDatabase r0 = super.getReadableDatabase()     // Catch: java.lang.Exception -> L5
            goto La
        L5:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
        La:
            return r0
    }

    @Override
    public android.database.sqlite.SQLiteDatabase getWritableDatabase() {
            r1 = this;
            android.database.sqlite.SQLiteDatabase r0 = super.getWritableDatabase()     // Catch: java.lang.Exception -> L5
            goto La
        L5:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
        La:
            return r0
    }

    @Override
    public void onCreate(android.database.sqlite.SQLiteDatabase r1) {
            r0 = this;
            return
    }

    @Override
    public void onOpen(android.database.sqlite.SQLiteDatabase r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "CREATE TABLE IF NOT EXISTS "
            r0.append(r1)
            com.reyun.tracking.utils.i r1 = r2.a
            java.lang.String r1 = com.reyun.tracking.utils.i.a(r1)
            r0.append(r1)
            java.lang.String r1 = "(_id INTEGER PRIMARY KEY AUTOINCREMENT, what char, value BLOB, priority INTEGER);"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.execSQL(r0)
            return
    }

    @Override
    public void onUpgrade(android.database.sqlite.SQLiteDatabase r1, int r2, int r3) {
            r0 = this;
            return
    }
}
