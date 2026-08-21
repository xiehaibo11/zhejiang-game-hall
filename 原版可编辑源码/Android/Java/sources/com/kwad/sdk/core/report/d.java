package com.kwad.sdk.core.report;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.os.Build;

public class d extends SQLiteOpenHelper {
    private String aqO;

    public d(Context context, String str, int i, String str2) {
        super(context, str, (SQLiteDatabase.CursorFactory) null, i);
        this.aqO = str2;
    }

    @Override
    public void onCreate(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.execSQL(this.aqO);
    }

    @Override
    public void onOpen(SQLiteDatabase sQLiteDatabase) {
        super.onOpen(sQLiteDatabase);
        if (Build.VERSION.SDK_INT >= 16) {
            setWriteAheadLoggingEnabled(true);
        } else if (Build.VERSION.SDK_INT >= 11) {
            sQLiteDatabase.enableWriteAheadLogging();
        }
    }

    @Override
    public void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
    }
}
