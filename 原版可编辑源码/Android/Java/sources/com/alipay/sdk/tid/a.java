package com.alipay.sdk.tid;

import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.text.TextUtils;
import com.alipay.sdk.util.c;
import java.lang.ref.WeakReference;

final class a extends SQLiteOpenHelper {
    private static final String a = "msp.db";
    private static final int b = 1;
    private WeakReference<Context> c;

    a(Context context) {
        super(context, a, (SQLiteDatabase.CursorFactory) null, 1);
        this.c = new WeakReference<>(context);
    }

    @Override
    public void onCreate(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.execSQL("create table if not exists tb_tid (name text primary key, tid text, key_tid text, dt datetime);");
    }

    @Override
    public void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        sQLiteDatabase.execSQL("drop table if exists tb_tid");
    }

    void a() {
        SQLiteDatabase writableDatabase = null;
        try {
            try {
                writableDatabase = getWritableDatabase();
                writableDatabase.execSQL("drop table if exists tb_tid");
            } catch (Exception e) {
                c.a(e);
                if (writableDatabase != null && writableDatabase.isOpen()) {
                }
            }
            if (writableDatabase != null && writableDatabase.isOpen()) {
                writableDatabase.close();
            }
        } catch (Throwable th) {
            if (writableDatabase != null && writableDatabase.isOpen()) {
                writableDatabase.close();
            }
            throw th;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:39:0x0062  */
    /* JADX WARN: Removed duplicated region for block: B:47:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    String a(String str, String str2) throws Throwable {
        SQLiteDatabase readableDatabase;
        Cursor cursorRawQuery;
        Cursor cursor = null;
        string = null;
        string = null;
        String string = null;
        cursor = null;
        try {
            readableDatabase = getReadableDatabase();
            try {
                cursorRawQuery = readableDatabase.rawQuery("select tid from tb_tid where name=?", new String[]{c(str, str2)});
                try {
                    string = cursorRawQuery.moveToFirst() ? cursorRawQuery.getString(0) : null;
                    if (cursorRawQuery != null) {
                        cursorRawQuery.close();
                    }
                } catch (Exception unused) {
                    if (cursorRawQuery != null) {
                        cursorRawQuery.close();
                    }
                    if (readableDatabase != null && readableDatabase.isOpen()) {
                    }
                    if (TextUtils.isEmpty(string)) {
                    }
                } catch (Throwable th) {
                    th = th;
                    cursor = cursorRawQuery;
                    if (cursor != null) {
                        cursor.close();
                    }
                    if (readableDatabase != null && readableDatabase.isOpen()) {
                        readableDatabase.close();
                    }
                    throw th;
                }
            } catch (Exception unused2) {
                cursorRawQuery = null;
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (Exception unused3) {
            cursorRawQuery = null;
            readableDatabase = null;
        } catch (Throwable th3) {
            th = th3;
            readableDatabase = null;
        }
        if (readableDatabase != null && readableDatabase.isOpen()) {
            readableDatabase.close();
        }
        return TextUtils.isEmpty(string) ? com.alipay.sdk.encrypt.b.b(string, com.alipay.sdk.util.a.c(this.c.get())) : string;
    }

    String b(String str, String str2) throws Throwable {
        SQLiteDatabase readableDatabase;
        Cursor cursorRawQuery;
        Cursor cursor = null;
        string = null;
        string = null;
        String string = null;
        cursor = null;
        try {
            readableDatabase = getReadableDatabase();
            try {
                cursorRawQuery = readableDatabase.rawQuery("select key_tid from tb_tid where name=?", new String[]{c(str, str2)});
                try {
                    string = cursorRawQuery.moveToFirst() ? cursorRawQuery.getString(0) : null;
                    if (cursorRawQuery != null) {
                        cursorRawQuery.close();
                    }
                } catch (Exception unused) {
                    if (cursorRawQuery != null) {
                        cursorRawQuery.close();
                    }
                    if (readableDatabase != null && readableDatabase.isOpen()) {
                    }
                    return string;
                } catch (Throwable th) {
                    th = th;
                    cursor = cursorRawQuery;
                    if (cursor != null) {
                        cursor.close();
                    }
                    if (readableDatabase != null && readableDatabase.isOpen()) {
                        readableDatabase.close();
                    }
                    throw th;
                }
            } catch (Exception unused2) {
                cursorRawQuery = null;
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (Exception unused3) {
            cursorRawQuery = null;
            readableDatabase = null;
        } catch (Throwable th3) {
            th = th3;
            readableDatabase = null;
        }
        if (readableDatabase != null && readableDatabase.isOpen()) {
            readableDatabase.close();
        }
        return string;
    }

    private String c(String str, String str2) {
        return str + str2;
    }
}
