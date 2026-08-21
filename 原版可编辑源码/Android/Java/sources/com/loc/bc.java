package com.loc;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

public final class bc extends SQLiteOpenHelper {
    private static boolean b = true;
    private static boolean c;
    private ay a;

    public bc(Context context, String str, ay ayVar) {
        super(context, str, (SQLiteDatabase.CursorFactory) null, 1);
        this.a = ayVar;
    }

    @Override
    public final void onCreate(SQLiteDatabase sQLiteDatabase) {
        this.a.a(sQLiteDatabase);
    }

    @Override
    public final void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
    }
}
