package com.kwad.sdk.core.report;

public class d extends android.database.sqlite.SQLiteOpenHelper {
    private java.lang.String aqO;

    public d(android.content.Context r2, java.lang.String r3, int r4, java.lang.String r5) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0, r4)
            r1.aqO = r5
            return
    }

    @Override
    public void onCreate(android.database.sqlite.SQLiteDatabase r2) {
            r1 = this;
            java.lang.String r0 = r1.aqO
            r2.execSQL(r0)
            return
    }

    @Override
    public void onOpen(android.database.sqlite.SQLiteDatabase r3) {
            r2 = this;
            super.onOpen(r3)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Le
            r3 = 1
            r2.setWriteAheadLoggingEnabled(r3)
            return
        Le:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 11
            if (r0 < r1) goto L17
            r3.enableWriteAheadLogging()
        L17:
            return
    }

    @Override
    public void onUpgrade(android.database.sqlite.SQLiteDatabase r1, int r2, int r3) {
            r0 = this;
            return
    }
}
