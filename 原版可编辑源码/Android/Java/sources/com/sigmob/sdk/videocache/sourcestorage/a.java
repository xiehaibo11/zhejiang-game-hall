package com.sigmob.sdk.videocache.sourcestorage;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import com.sigmob.sdk.videocache.n;
import com.sigmob.sdk.videocache.t;

class a extends SQLiteOpenHelper implements c {
    private static final String a = "SourceInfo";
    private static final String b = "_id";
    private static final String c = "url";
    private static final String d = "length";
    private static final String e = "mime";
    private static final String[] f = {"_id", "url", d, e};
    private static final String g = "CREATE TABLE SourceInfo (_id INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,url TEXT NOT NULL,mime TEXT,length INTEGER);";

    a(Context context) {
        super(context, "AndroidVideoCache.db", (SQLiteDatabase.CursorFactory) null, 1);
        n.a(context);
    }

    private ContentValues a(t tVar) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("url", tVar.a);
        contentValues.put(d, Long.valueOf(tVar.b));
        contentValues.put(e, tVar.c);
        return contentValues;
    }

    private t a(Cursor cursor) {
        return new t(cursor.getString(cursor.getColumnIndexOrThrow("url")), cursor.getLong(cursor.getColumnIndexOrThrow(d)), cursor.getString(cursor.getColumnIndexOrThrow(e)));
    }

    @Override
    public t a(String str) throws Throwable {
        Throwable th;
        Cursor cursorQuery;
        n.a(str);
        t tVarA = null;
        try {
            cursorQuery = getReadableDatabase().query(a, f, "url=?", new String[]{str}, null, null, null);
            if (cursorQuery != null) {
                try {
                    if (cursorQuery.moveToFirst()) {
                        tVarA = a(cursorQuery);
                    }
                } catch (Throwable th2) {
                    th = th2;
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    throw th;
                }
            }
            if (cursorQuery != null) {
                cursorQuery.close();
            }
            return tVarA;
        } catch (Throwable th3) {
            th = th3;
            cursorQuery = null;
        }
    }

    @Override
    public void a() {
        close();
    }

    @Override
    public void a(String str, t tVar) {
        n.a(str, tVar);
        boolean z = a(str) != null;
        ContentValues contentValuesA = a(tVar);
        if (z) {
            getWritableDatabase().update(a, contentValuesA, "url=?", new String[]{str});
        } else {
            getWritableDatabase().insert(a, null, contentValuesA);
        }
    }

    @Override
    public void onCreate(SQLiteDatabase sQLiteDatabase) {
        n.a(sQLiteDatabase);
        sQLiteDatabase.execSQL(g);
    }

    @Override
    public void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        throw new IllegalStateException("Should not be called. There is no any migration");
    }
}
