package com.igexin.push.extension.distribution.basic.e;

import android.content.ContentValues;
import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

/* JADX INFO: loaded from: classes2.dex */
public class b extends SQLiteOpenHelper {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    SQLiteDatabase f2633a;
    private boolean b;

    public b(Context context) {
        super(context, "pushsdk.db", (SQLiteDatabase.CursorFactory) null, 5);
        this.f2633a = null;
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
        this.f2633a = writableDatabase;
        try {
            writableDatabase.replace(str, str2, contentValues);
        } catch (Exception unused) {
        }
    }

    public void a(String str, String[] strArr, String[] strArr2) {
        SQLiteDatabase sQLiteDatabase;
        String strA;
        SQLiteDatabase writableDatabase = getWritableDatabase();
        this.f2633a = writableDatabase;
        writableDatabase.beginTransaction();
        try {
            if (strArr == null) {
                this.f2633a.delete(str, null, null);
            } else {
                if (strArr.length != 1) {
                    sQLiteDatabase = this.f2633a;
                    strA = a(str, a(strArr, strArr2, strArr.length));
                } else if (strArr2.length == 1) {
                    this.f2633a.delete(str, strArr[0] + " = ?", strArr2);
                } else {
                    sQLiteDatabase = this.f2633a;
                    strA = a(str, a(strArr, strArr2, strArr2.length));
                }
                sQLiteDatabase.execSQL(strA);
            }
            this.f2633a.setTransactionSuccessful();
        } catch (Exception unused) {
        } catch (Throwable th) {
            this.f2633a.endTransaction();
            throw th;
        }
        this.f2633a.endTransaction();
    }

    public boolean a() {
        return this.b;
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public void onCreate(SQLiteDatabase sQLiteDatabase) {
        this.b = false;
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public void onDowngrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        this.b = false;
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        this.b = false;
    }
}
