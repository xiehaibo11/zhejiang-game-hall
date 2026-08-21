package com.mbridge.msdk.foundation.db;

import android.database.sqlite.SQLiteDatabase;

/* JADX INFO: compiled from: BaseDao.java */
/* JADX INFO: loaded from: classes2.dex */
public class a<T> {
    protected h mHelper;

    public a(h hVar) {
        this.mHelper = null;
        this.mHelper = hVar;
    }

    protected synchronized SQLiteDatabase getReadableDatabase() {
        return this.mHelper.a();
    }

    protected synchronized SQLiteDatabase getWritableDatabase() {
        return this.mHelper.b();
    }
}
