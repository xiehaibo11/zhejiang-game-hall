package com.loc;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

/* JADX INFO: compiled from: DB.java */
/* JADX INFO: loaded from: classes2.dex */
public final class bc extends SQLiteOpenHelper {
    private static boolean b = true;
    private static boolean c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private ay f2859a;

    public bc(Context context, String str, ay ayVar) {
        super(context, str, (SQLiteDatabase.CursorFactory) null, 1);
        this.f2859a = ayVar;
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onCreate(SQLiteDatabase sQLiteDatabase) {
        this.f2859a.a(sQLiteDatabase);
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
    }
}
