package com.kwad.sdk.core.videocache.d;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import com.kwad.sdk.core.videocache.m;
import com.kwad.sdk.utils.ao;

final class a extends SQLiteOpenHelper implements b {
    private static final String[] axb = {"_id", "url", "length", "mime"};

    a(Context context) {
        super(context, "AndroidVideoCache.db", (SQLiteDatabase.CursorFactory) null, 1);
        ao.checkNotNull(context);
    }

    private static ContentValues a(m mVar) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("url", mVar.url);
        contentValues.put("length", Long.valueOf(mVar.awV));
        contentValues.put("mime", mVar.awW);
        return contentValues;
    }

    private static m i(Cursor cursor) {
        return new m(cursor.getString(cursor.getColumnIndexOrThrow("url")), cursor.getLong(cursor.getColumnIndexOrThrow("length")), cursor.getString(cursor.getColumnIndexOrThrow("mime")));
    }

    @Override
    public final void a(String str, m mVar) {
        ao.e(str, mVar);
        boolean z = dW(str) != null;
        ContentValues contentValuesA = a(mVar);
        if (z) {
            getWritableDatabase().update("SourceInfo", contentValuesA, "url=?", new String[]{str});
        } else {
            getWritableDatabase().insert("SourceInfo", null, contentValuesA);
        }
    }

    @Override
    public final m dW(String str) throws Throwable {
        Throwable th;
        Cursor cursorQuery;
        ao.fE(str);
        m mVarI = null;
        try {
            cursorQuery = getReadableDatabase().query("SourceInfo", axb, "url=?", new String[]{str}, null, null, null);
            if (cursorQuery != null) {
                try {
                    if (cursorQuery.moveToFirst()) {
                        mVarI = i(cursorQuery);
                    }
                } catch (Throwable th2) {
                    th = th2;
                    com.kwad.sdk.crash.utils.b.closeQuietly(cursorQuery);
                    throw th;
                }
            }
            com.kwad.sdk.crash.utils.b.closeQuietly(cursorQuery);
            return mVarI;
        } catch (Throwable th3) {
            th = th3;
            cursorQuery = null;
        }
    }

    @Override
    public final void onCreate(SQLiteDatabase sQLiteDatabase) {
        ao.checkNotNull(sQLiteDatabase);
        sQLiteDatabase.execSQL("CREATE TABLE SourceInfo (_id INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,url TEXT NOT NULL,mime TEXT,length INTEGER);");
    }

    @Override
    public final void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        throw new IllegalStateException("Should not be called. There is no any migration");
    }
}
