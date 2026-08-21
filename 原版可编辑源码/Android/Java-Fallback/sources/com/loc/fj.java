package com.loc;

public class fj implements com.loc.ay {
    public fj() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "alsn20170807.db"
            return r0
    }

    @Override
    public final void a(android.database.sqlite.SQLiteDatabase r3) {
            r2 = this;
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS c (_id integer primary key autoincrement, a2 varchar(100), a4 varchar(2000), a3 LONG );"
            r3.execSQL(r0)     // Catch: java.lang.Throwable -> L6
            return
        L6:
            r3 = move-exception
            java.lang.String r0 = "SdCardDbCreator"
            java.lang.String r1 = "onCreate"
            com.loc.fr.a(r3, r0, r1)
            return
    }
}
