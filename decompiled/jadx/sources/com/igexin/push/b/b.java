package com.igexin.push.b;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import com.igexin.push.core.b.i;

/* JADX INFO: loaded from: classes2.dex */
public class b extends SQLiteOpenHelper {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private SQLiteDatabase f2465a;

    public b(Context context) {
        super(context, "pushsdk.db", (SQLiteDatabase.CursorFactory) null, 5);
        this.f2465a = null;
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

    private String b(String str, String str2) {
        return "delete from " + str + " where " + str2;
    }

    public int a(String str, String str2) {
        int iDelete;
        SQLiteDatabase writableDatabase = getWritableDatabase();
        this.f2465a = writableDatabase;
        writableDatabase.beginTransaction();
        int i = 0;
        try {
            try {
                iDelete = this.f2465a.delete(str, str2, null);
            } catch (Exception unused) {
            }
            try {
                com.igexin.b.a.c.b.a("DBHelper|del " + iDelete + " msg", new Object[0]);
                this.f2465a.setTransactionSuccessful();
                return iDelete;
            } catch (Exception unused2) {
                i = iDelete;
                this.f2465a.endTransaction();
                return i;
            }
        } finally {
            this.f2465a.endTransaction();
        }
    }

    public Cursor a(String str, String[] strArr, String str2) {
        try {
            SQLiteDatabase readableDatabase = getReadableDatabase();
            this.f2465a = readableDatabase;
            return readableDatabase.query(str, strArr, str2, null, null, null, null);
        } catch (Throwable unused) {
            return null;
        }
    }

    public Cursor a(String str, String[] strArr, String[] strArr2, String[] strArr3, String str2) {
        Cursor cursorQuery;
        SQLiteDatabase readableDatabase = getReadableDatabase();
        this.f2465a = readableDatabase;
        readableDatabase.beginTransaction();
        Cursor cursor = null;
        try {
            if (strArr == null) {
                cursorQuery = this.f2465a.query(str, strArr3, null, null, null, null, str2);
            } else if (strArr.length != 1) {
                cursorQuery = this.f2465a.query(str, strArr3, a(strArr, strArr2, strArr.length), null, null, null, str2);
            } else if (strArr2.length == 1) {
                cursorQuery = this.f2465a.query(str, strArr3, strArr[0] + "= ?", strArr2, null, null, str2);
            } else {
                cursorQuery = this.f2465a.query(str, strArr3, a(strArr, strArr2, strArr2.length), null, null, null, str2);
            }
            cursor = cursorQuery;
            this.f2465a.setTransactionSuccessful();
        } catch (Exception unused) {
        } catch (Throwable th) {
            this.f2465a.endTransaction();
            throw th;
        }
        this.f2465a.endTransaction();
        return cursor;
    }

    public void a(String str, ContentValues contentValues, String[] strArr, String[] strArr2) {
        SQLiteDatabase sQLiteDatabase;
        String strA;
        SQLiteDatabase writableDatabase = getWritableDatabase();
        this.f2465a = writableDatabase;
        writableDatabase.beginTransaction();
        try {
            if (strArr == null) {
                this.f2465a.update(str, contentValues, null, null);
            } else {
                if (strArr.length != 1) {
                    sQLiteDatabase = this.f2465a;
                    strA = a(strArr, strArr2, strArr.length);
                } else if (strArr2.length == 1) {
                    sQLiteDatabase = this.f2465a;
                    strA = strArr[0] + "='" + strArr2[0] + "'";
                } else {
                    sQLiteDatabase = this.f2465a;
                    strA = a(strArr, strArr2, strArr2.length);
                }
                sQLiteDatabase.update(str, contentValues, strA, null);
            }
            this.f2465a.setTransactionSuccessful();
        } catch (Exception unused) {
        } catch (Throwable th) {
            this.f2465a.endTransaction();
            throw th;
        }
        this.f2465a.endTransaction();
    }

    public void a(String str, String[] strArr, String[] strArr2) {
        SQLiteDatabase sQLiteDatabase;
        String strB;
        SQLiteDatabase writableDatabase = getWritableDatabase();
        this.f2465a = writableDatabase;
        writableDatabase.beginTransaction();
        try {
            if (strArr == null) {
                this.f2465a.delete(str, null, null);
            } else {
                if (strArr.length != 1) {
                    sQLiteDatabase = this.f2465a;
                    strB = b(str, a(strArr, strArr2, strArr.length));
                } else if (strArr2.length == 1) {
                    com.igexin.b.a.c.b.a("DBHelper|del " + str + " cnt = " + this.f2465a.delete(str, strArr[0] + " = ?", strArr2), new Object[0]);
                } else {
                    sQLiteDatabase = this.f2465a;
                    strB = b(str, a(strArr, strArr2, strArr2.length));
                }
                sQLiteDatabase.execSQL(strB);
            }
            this.f2465a.setTransactionSuccessful();
        } catch (Exception unused) {
        } catch (Throwable th) {
            this.f2465a.endTransaction();
            throw th;
        }
        this.f2465a.endTransaction();
    }

    public boolean a(String str, ContentValues contentValues) {
        boolean z;
        SQLiteDatabase writableDatabase = getWritableDatabase();
        this.f2465a = writableDatabase;
        writableDatabase.beginTransaction();
        try {
            this.f2465a.insert(str, null, contentValues);
            this.f2465a.setTransactionSuccessful();
            z = true;
        } catch (Exception unused) {
            z = false;
        } catch (Throwable th) {
            this.f2465a.endTransaction();
            throw th;
        }
        this.f2465a.endTransaction();
        return z;
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public void onCreate(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.beginTransaction();
        try {
            sQLiteDatabase.execSQL("create table if not exists config (id integer primary key,value text)");
            sQLiteDatabase.execSQL("create table if not exists runtime (id integer primary key,value text)");
            sQLiteDatabase.execSQL("create table if not exists message (id integer primary key autoincrement,messageid text,taskid text,appid text,info text,msgextra blob,key text,status integer,createtime integer)");
            sQLiteDatabase.execSQL("create table if not exists ral (id integer primary key,data text,type integer,time integer)");
            sQLiteDatabase.setTransactionSuccessful();
        } catch (Exception unused) {
        } catch (Throwable th) {
            sQLiteDatabase.endTransaction();
            throw th;
        }
        sQLiteDatabase.endTransaction();
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public void onDowngrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        onUpgrade(sQLiteDatabase, i2, i);
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        i.a().d(sQLiteDatabase);
        try {
            sQLiteDatabase.execSQL("drop table if exists config");
        } catch (Exception unused) {
        }
        try {
            sQLiteDatabase.execSQL("drop table if exists runtime");
        } catch (Exception unused2) {
        }
        try {
            sQLiteDatabase.execSQL("drop table if exists message");
        } catch (Exception unused3) {
        }
        try {
            sQLiteDatabase.execSQL("drop table if exists ral");
        } catch (Exception unused4) {
        }
        onCreate(sQLiteDatabase);
    }
}
