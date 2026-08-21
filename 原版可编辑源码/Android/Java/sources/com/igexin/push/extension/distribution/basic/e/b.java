package com.igexin.push.extension.distribution.basic.e;

import android.content.ContentValues;
import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

public class b extends SQLiteOpenHelper {
    SQLiteDatabase a;
    private boolean b;

    public b(Context context) {
        super(context, "pushsdk.db", (SQLiteDatabase.CursorFactory) null, 5);
        this.a = null;
        this.b = true;
    }

    private String a(String str, String str2) {
        return "delete from " + str + " where " + str2;
    }

    private String a(String[] strArr, String[] strArr2, int i) {
        StringBuilder sb = new StringBuilder(" ");
        if (strArr.length == 1) {
            for (int i2 = 0; i2 < i; i2++) {
                sb.append(strArr[0]);
                sb.append(" = '");
                sb.append(strArr2[i2]);
                sb.append("'");
                if (i2 < i - 1) {
                    sb.append(" or ");
                }
            }
        } else {
            for (int i3 = 0; i3 < i; i3++) {
                sb.append(strArr[i3]);
                sb.append(" = '");
                sb.append(strArr2[i3]);
                sb.append("'");
                if (i3 < i - 1) {
                    sb.append(" and ");
                }
            }
        }
        return sb.toString();
    }

    public void a(String str, String str2, ContentValues contentValues) {
        SQLiteDatabase writableDatabase = getWritableDatabase();
        this.a = writableDatabase;
        try {
            writableDatabase.replace(str, str2, contentValues);
        } catch (Exception unused) {
        }
    }

    public void a(String str, String[] strArr, String[] strArr2) {
        SQLiteDatabase sQLiteDatabase;
        String strA;
        SQLiteDatabase writableDatabase = getWritableDatabase();
        this.a = writableDatabase;
        writableDatabase.beginTransaction();
        try {
            if (strArr == null) {
                this.a.delete(str, null, null);
            } else {
                if (strArr.length != 1) {
                    sQLiteDatabase = this.a;
                    strA = a(str, a(strArr, strArr2, strArr.length));
                } else if (strArr2.length == 1) {
                    this.a.delete(str, strArr[0] + " = ?", strArr2);
                } else {
                    sQLiteDatabase = this.a;
                    strA = a(str, a(strArr, strArr2, strArr2.length));
                }
                sQLiteDatabase.execSQL(strA);
            }
            this.a.setTransactionSuccessful();
        } catch (Exception unused) {
        } catch (Throwable th) {
            this.a.endTransaction();
            throw th;
        }
        this.a.endTransaction();
    }

    public boolean a() {
        return this.b;
    }

    @Override
    public void onCreate(SQLiteDatabase sQLiteDatabase) {
        this.b = false;
    }

    @Override
    public void onDowngrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        this.b = false;
    }

    @Override
    public void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        this.b = false;
    }
}
