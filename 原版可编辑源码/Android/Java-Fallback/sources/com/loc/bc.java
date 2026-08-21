package com.loc;

public final class bc extends android.database.sqlite.SQLiteOpenHelper {
    private static boolean b = true;
    private static boolean c;
    private com.loc.ay a;

    static {
            return
    }

    public bc(android.content.Context r3, java.lang.String r4, com.loc.ay r5) {
            r2 = this;
            r0 = 0
            r1 = 1
            r2.<init>(r3, r4, r0, r1)
            r2.a = r5
            return
    }

    @Override
    public final void onCreate(android.database.sqlite.SQLiteDatabase r2) {
            r1 = this;
            com.loc.ay r0 = r1.a
            r0.a(r2)
            return
    }

    @Override
    public final void onUpgrade(android.database.sqlite.SQLiteDatabase r1, int r2, int r3) {
            r0 = this;
            return
    }
}
