package com.czhj.sdk.common.Database;

import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import com.czhj.sdk.logger.SigmobLog;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ArrayBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes.dex */
public class DBOperator {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final DBOperator f1750a = new DBOperator();
    private final Object c = new Object();
    private final ThreadPoolExecutor b = new ThreadPoolExecutor(0, Integer.MAX_VALUE, 1, TimeUnit.MINUTES, new ArrayBlockingQueue(10));

    public interface DataSQLiteLisenter {
        void onFailed(Error error);

        void onSuccess(List<Map> list);
    }

    private class SQLiteDeleteThread implements Runnable {
        private final String b;
        private final String c;
        private final SQLiteLisenter d;
        private final SQLiteDatabase e;

        SQLiteDeleteThread(SQLiteDatabase sQLiteDatabase, String str, String str2, SQLiteLisenter sQLiteLisenter) {
            this.b = str;
            this.e = sQLiteDatabase;
            this.c = str2;
            this.d = sQLiteLisenter;
        }

        @Override // java.lang.Runnable
        public void run() {
            try {
                this.e.delete(this.b, this.c, null);
                if (this.d != null) {
                    this.d.onSuccess(null);
                }
            } catch (Throwable th) {
                SQLiteLisenter sQLiteLisenter = this.d;
                if (sQLiteLisenter != null) {
                    sQLiteLisenter.onFailed(new Error(th.getMessage()));
                }
            }
        }
    }

    private class SQLiteThread implements Runnable {
        private final String b;
        private final String[] c;
        private final String d;
        private final String[] e;
        private final String f;
        private final String g;
        private final String h;
        private final String i;
        private final SQLiteDatabase j;
        private final DataSQLiteLisenter k;

        SQLiteThread(SQLiteDatabase sQLiteDatabase, String str, String[] strArr, String str2, String[] strArr2, String str3, String str4, String str5, String str6, DataSQLiteLisenter dataSQLiteLisenter) {
            this.b = str;
            this.j = sQLiteDatabase;
            this.c = strArr;
            this.d = str2;
            this.e = strArr2;
            this.f = str3;
            this.g = str4;
            this.h = str5;
            this.i = str6;
            this.k = dataSQLiteLisenter;
        }

        private List<Map> a(Cursor cursor) {
            Object objValueOf;
            ArrayList arrayList = new ArrayList();
            while (cursor.moveToNext()) {
                String[] columnNames = cursor.getColumnNames();
                HashMap map = new HashMap();
                for (String str : columnNames) {
                    int type = cursor.getType(cursor.getColumnIndex(str));
                    if (type == 1) {
                        objValueOf = Long.valueOf(cursor.getLong(cursor.getColumnIndex(str)));
                    } else if (type == 2) {
                        objValueOf = Double.valueOf(cursor.getDouble(cursor.getColumnIndex(str)));
                    } else if (type != 3) {
                        if (type == 4) {
                            map.put(str, cursor.getBlob(cursor.getColumnIndex(str)));
                        }
                    } else {
                        objValueOf = cursor.getString(cursor.getColumnIndex(str));
                    }
                    map.put(str, objValueOf);
                }
                arrayList.add(map);
            }
            return arrayList;
        }

        @Override // java.lang.Runnable
        public void run() {
            Cursor cursorQuery = null;
            try {
                cursorQuery = this.j.query(this.b, this.c, this.d, this.e, this.f, this.g, this.h, this.i);
                List<Map> listA = a(cursorQuery);
                if (this.k != null) {
                    this.k.onSuccess(listA);
                }
                if (cursorQuery == null) {
                }
            } catch (Throwable th) {
                try {
                    if (this.k != null) {
                        this.k.onFailed(new Error(th.getMessage()));
                    }
                } finally {
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                }
            }
        }
    }

    private DBOperator() {
    }

    public static synchronized DBOperator getInstance() {
        return f1750a;
    }

    public int count(SQLiteDatabase sQLiteDatabase, String str) {
        return count(sQLiteDatabase, str, null);
    }

    public int count(SQLiteDatabase sQLiteDatabase, String str, String str2) {
        Cursor cursorQuery;
        try {
            cursorQuery = sQLiteDatabase.query(str, null, str2, null, null, null, null, null);
            try {
                int count = cursorQuery.getCount();
            } catch (Throwable th) {
                th = th;
                try {
                    SigmobLog.e(th.getMessage());
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return 0;
                } finally {
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                }
            }
        } catch (Throwable th2) {
            th = th2;
            cursorQuery = null;
        }
    }

    public void delete(SQLiteDatabase sQLiteDatabase, String str, String str2, SQLiteLisenter sQLiteLisenter) {
        try {
            this.b.submit(new SQLiteDeleteThread(sQLiteDatabase, str, str2, sQLiteLisenter));
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
            sQLiteLisenter.onFailed(new Error(th.getMessage()));
        }
    }

    public void find(SQLiteDatabase sQLiteDatabase, String str, String[] strArr, String str2, String[] strArr2, String str3, String str4, String str5, String str6, DataSQLiteLisenter dataSQLiteLisenter) {
        this.b.submit(new SQLiteThread(sQLiteDatabase, str, strArr, str2, strArr2, str3, str4, str5, str6, dataSQLiteLisenter));
    }
}
