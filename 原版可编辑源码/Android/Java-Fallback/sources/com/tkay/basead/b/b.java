package com.tkay.basead.b;

public final class b extends android.database.sqlite.SQLiteOpenHelper {
    private static com.tkay.basead.b.b a = null;
    private static final int b = 3;

    private b(android.content.Context r2, java.lang.String r3, android.database.sqlite.SQLiteDatabase.CursorFactory r4) {
            r1 = this;
            r0 = 3
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public static com.tkay.basead.b.b a(android.content.Context r3) {
            com.tkay.basead.b.b r0 = com.tkay.basead.b.b.a
            if (r0 != 0) goto Le
            com.tkay.basead.b.b r0 = new com.tkay.basead.b.b
            r1 = 0
            java.lang.String r2 = "tkay_myoffer"
            r0.<init>(r3, r2, r1)
            com.tkay.basead.b.b.a = r0
        Le:
            com.tkay.basead.b.b r3 = com.tkay.basead.b.b.a
            return r3
    }

    private void a(android.database.sqlite.SQLiteDatabase r3) {
            r2 = this;
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS my_offer_cap_pacing (offer_id TEXT,offer_cap INTEGER,offer_pacing INTEGER,show_num INTEGER,show_time INTEGER,record_date INTEGER )"
            r3.execSQL(r0)     // Catch: java.lang.Exception -> Lb
            r0 = 1
            r1 = 3
            r2.onUpgrade(r3, r0, r1)     // Catch: java.lang.Exception -> Lb
            return
        Lb:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    @Override
    public final android.database.sqlite.SQLiteDatabase getReadableDatabase() {
            r1 = this;
            android.database.sqlite.SQLiteDatabase r0 = super.getReadableDatabase()     // Catch: java.lang.Exception -> L5
            goto L6
        L5:
            r0 = 0
        L6:
            return r0
    }

    @Override
    public final synchronized android.database.sqlite.SQLiteDatabase getWritableDatabase() {
            r1 = this;
            monitor-enter(r1)
            android.database.sqlite.SQLiteDatabase r0 = super.getWritableDatabase()     // Catch: java.lang.Throwable -> L6 java.lang.Exception -> L9
            goto La
        L6:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
        L9:
            r0 = 0
        La:
            monitor-exit(r1)
            return r0
    }

    @Override
    public final void onCreate(android.database.sqlite.SQLiteDatabase r3) {
            r2 = this;
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS my_offer_cap_pacing (offer_id TEXT,offer_cap INTEGER,offer_pacing INTEGER,show_num INTEGER,show_time INTEGER,record_date INTEGER )"
            r3.execSQL(r0)     // Catch: java.lang.Exception -> Lb
            r0 = 1
            r1 = 3
            r2.onUpgrade(r3, r0, r1)     // Catch: java.lang.Exception -> Lb
            return
        Lb:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    @Override
    public final void onDowngrade(android.database.sqlite.SQLiteDatabase r1, int r2, int r3) {
            r0 = this;
            return
    }

    @Override
    public final void onUpgrade(android.database.sqlite.SQLiteDatabase r2, int r3, int r4) {
            r1 = this;
        L0:
            if (r3 >= r4) goto Le
            r0 = 2
            if (r3 == r0) goto L6
            goto Lb
        L6:
            java.lang.String r0 = "DROP TABLE IF EXISTS 'CREATE TABLE IF NOT EXISTS my_offer_info (topon_pl_id TEXT,offer_id TEXT,creative_id TEXT,title TEXT,desc TEXT,icon_url TEXT,image_url TEXT,endcard_image_url TEXT,adchoice_url TEXT,cta TEXT,video_url TEXT,click_type INTEGER,preview_url TEXT,deeplink_url TEXT,click_url TEXT,notice_url TEXT,video_start_tk_url TEXT,video_25_tk_url TEXT,video_50_tk_url TEXT,video_75_tk_url TEXT,video_end_tk_url TEXT,endcard_show_tk_url TEXT,endcard_close_tk_url TEXT,impression_tk_url TEXT,click_tk_url TEXT,pkg TEXT,cap INTEGER,pacing INTEGER,offer_type INTERGR,update_time INTEGER )'"
            r2.execSQL(r0)
        Lb:
            int r3 = r3 + 1
            goto L0
        Le:
            return
    }
}
