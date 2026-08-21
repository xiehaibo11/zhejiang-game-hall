package com.tkay.basead.b;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import com.tkay.basead.b.c;

/* JADX INFO: loaded from: classes3.dex */
public final class b extends SQLiteOpenHelper {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static b f5598a = null;
    private static final int b = 3;

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onDowngrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
    }

    public static b a(Context context) {
        if (f5598a == null) {
            f5598a = new b(context, "tkay_myoffer", null);
        }
        return f5598a;
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final SQLiteDatabase getReadableDatabase() {
        try {
            return super.getReadableDatabase();
        } catch (Exception unused) {
            return null;
        }
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final synchronized SQLiteDatabase getWritableDatabase() {
        SQLiteDatabase writableDatabase;
        try {
            writableDatabase = super.getWritableDatabase();
        } catch (Exception unused) {
            writableDatabase = null;
        }
        return writableDatabase;
    }

    private b(Context context, String str, SQLiteDatabase.CursorFactory cursorFactory) {
        super(context, str, cursorFactory, 3);
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        while (i < i2) {
            if (i == 2) {
                sQLiteDatabase.execSQL("DROP TABLE IF EXISTS 'CREATE TABLE IF NOT EXISTS my_offer_info (topon_pl_id TEXT,offer_id TEXT,creative_id TEXT,title TEXT,desc TEXT,icon_url TEXT,image_url TEXT,endcard_image_url TEXT,adchoice_url TEXT,cta TEXT,video_url TEXT,click_type INTEGER,preview_url TEXT,deeplink_url TEXT,click_url TEXT,notice_url TEXT,video_start_tk_url TEXT,video_25_tk_url TEXT,video_50_tk_url TEXT,video_75_tk_url TEXT,video_end_tk_url TEXT,endcard_show_tk_url TEXT,endcard_close_tk_url TEXT,impression_tk_url TEXT,click_tk_url TEXT,pkg TEXT,cap INTEGER,pacing INTEGER,offer_type INTERGR,update_time INTEGER )'");
            }
            i++;
        }
    }

    private void a(SQLiteDatabase sQLiteDatabase) {
        try {
            sQLiteDatabase.execSQL(c.a.h);
            onUpgrade(sQLiteDatabase, 1, 3);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onCreate(SQLiteDatabase sQLiteDatabase) {
        try {
            sQLiteDatabase.execSQL(c.a.h);
            onUpgrade(sQLiteDatabase, 1, 3);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
