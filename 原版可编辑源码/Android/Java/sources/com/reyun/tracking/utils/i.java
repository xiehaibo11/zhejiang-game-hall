package com.reyun.tracking.utils;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.util.Log;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.reyun.tracking.sdk.Tracking;
import java.io.BufferedReader;
import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.atomic.AtomicInteger;
import org.json.JSONArray;
import org.json.JSONObject;

public class i {
    private static ConcurrentHashMap d = new ConcurrentHashMap();
    final String a;
    final String b;
    final int c;
    private AtomicInteger e;
    private j f;
    private SQLiteDatabase g;
    private String h;
    private Context i;

    private i() {
        this.a = "ReyunDB";
        this.b = "Reyun.db";
        this.c = 1;
    }

    private i(Context context, String str) {
        this.a = "ReyunDB";
        this.b = "Reyun.db";
        this.c = 1;
        this.i = context;
        this.f = new j(this, context);
        this.h = str;
        this.e = new AtomicInteger();
    }

    public static i a(Context context, String str) {
        synchronized (i.class) {
            if (d == null) {
                d = new ConcurrentHashMap();
            }
        }
        if (!d.containsKey(str)) {
            d.put(str, new i(context, "tracking"));
        }
        return (i) d.get(str);
    }

    private JSONObject a(byte[] bArr) {
        if (bArr != null) {
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(new ByteArrayInputStream(bArr)), 8192);
            StringBuffer stringBuffer = new StringBuffer();
            while (true) {
                try {
                    String line = bufferedReader.readLine();
                    if (line == null) {
                        return new JSONObject(stringBuffer.toString());
                    }
                    stringBuffer.append(line);
                } catch (IOException e) {
                    e.printStackTrace();
                } catch (Exception e2) {
                    e2.printStackTrace();
                }
            }
        }
        return null;
    }

    private void a(String str, int i, String str2, String[] strArr) {
        if (this.i == null) {
            Log.w("ReyunDB", "mContext is Null when update status from database" + this.e.get());
            return;
        }
        try {
            b();
            if (this.g == null) {
                c();
                return;
            } else {
                ContentValues contentValues = new ContentValues();
                contentValues.put(RemoteMessageConst.Notification.PRIORITY, Integer.valueOf(i));
                this.g.update(str, contentValues, str2, strArr);
            }
        } catch (Exception unused) {
        } catch (Throwable th) {
            c();
            throw th;
        }
        c();
    }

    private void b() {
        SQLiteDatabase sQLiteDatabase = this.g;
        if (sQLiteDatabase != null && sQLiteDatabase.isOpen()) {
            Log.w("ReyunDB", "Database was opened!" + this.e.get());
            return;
        }
        try {
            if (this.e.incrementAndGet() == 1) {
                this.g = this.f.getWritableDatabase();
            }
            if (this.g == null) {
                return;
            }
            if (this.g.isReadOnly()) {
                Log.w("ReyunDB", "Your memory is not enough!");
                return;
            }
            Log.d("ReyunDB", "Database was already opened!" + this.e.get());
        } catch (Exception unused) {
        }
    }

    private void c() {
    }

    public long a(ContentValues contentValues) {
        long jA;
        synchronized (d) {
            jA = a(this.h, contentValues);
        }
        return jA;
    }

    public long a(String str, ContentValues contentValues) {
        if (this.i == null) {
            Log.w("ReyunDB", "mContext is Null when insert data to database" + this.e.get());
            return -1L;
        }
        try {
            b();
            if (this.g == null) {
                return -1L;
            }
            return this.g.insert(str, null, contentValues);
        } catch (Exception unused) {
            return -1L;
        } finally {
            c();
        }
    }

    public k a(int i) {
        k kVarA;
        synchronized (d) {
            kVarA = a(this.h, i);
        }
        return kVarA;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:28:0x00bf A[PHI: r2 r10
      0x00bf: PHI (r2v3 com.reyun.tracking.utils.k) = (r2v7 com.reyun.tracking.utils.k), (r2v6 com.reyun.tracking.utils.k) binds: [B:27:0x00bd, B:20:0x00b3] A[DONT_GENERATE, DONT_INLINE]
      0x00bf: PHI (r10v3 android.database.Cursor) = (r10v2 android.database.Cursor), (r10v5 android.database.Cursor) binds: [B:27:0x00bd, B:20:0x00b3] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Type inference failed for: r10v0, types: [int] */
    /* JADX WARN: Type inference failed for: r2v0 */
    /* JADX WARN: Type inference failed for: r2v1 */
    /* JADX WARN: Type inference failed for: r2v2, types: [android.database.Cursor] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public k a(String str, int i) throws Throwable {
        Cursor cursorRawQuery;
        ?? r2 = 0;
        kVar = null;
        kVar = null;
        k kVar = null;
        if (this.i == null) {
            Log.w("ReyunDB", "mContext is Null when query data from database" + this.e.get());
            return null;
        }
        b();
        SQLiteDatabase sQLiteDatabase = this.g;
        try {
            if (sQLiteDatabase == null) {
                com.reyun.tracking.a.a.c(Tracking.TAG, "queryDataWithLimit mSQLiteDatabase == null");
                return null;
            }
            try {
                cursorRawQuery = sQLiteDatabase.rawQuery("SELECT * FROM " + str + " WHERE priority='0' limit ?", new String[]{String.valueOf((int) i)});
                if (cursorRawQuery != null) {
                    try {
                        ArrayList arrayList = new ArrayList();
                        JSONArray jSONArray = new JSONArray();
                        while (cursorRawQuery.moveToNext()) {
                            int i2 = cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("_id"));
                            byte[] blob = cursorRawQuery.getBlob(cursorRawQuery.getColumnIndex("value"));
                            arrayList.add(String.valueOf(i2));
                            JSONObject jSONObjectA = a(blob);
                            com.reyun.tracking.a.a.c("ReyunDB", "==== query failed record row from + " + str + " id is ======" + i2);
                            jSONArray.put(jSONObjectA);
                        }
                        kVar = new k(this, arrayList, jSONArray.toString());
                    } catch (Exception e) {
                        e = e;
                        e.printStackTrace();
                        if (cursorRawQuery != null) {
                        }
                    }
                }
            } catch (Exception e2) {
                e = e2;
                cursorRawQuery = null;
            } catch (Throwable th) {
                th = th;
                if (r2 != 0) {
                    r2.close();
                }
                c();
                throw th;
            }
            if (cursorRawQuery != null) {
                cursorRawQuery.close();
            }
            c();
            return kVar;
        } catch (Throwable th2) {
            th = th2;
            r2 = i;
        }
    }

    public void a() {
        try {
            if (this.g == null || this.g.isOpen()) {
                if (this.e.decrementAndGet() == 0) {
                    this.g.close();
                }
            } else {
                Log.w("ReyunDB", "Database was closed!" + this.e.get());
            }
        } catch (Exception unused) {
        }
    }

    public void a(String str) {
        synchronized (d) {
            a(this.h, "_id=?", new String[]{str});
        }
    }

    public void a(String str, String str2, String[] strArr) {
        if (this.i == null) {
            Log.w("ReyunDB", "mContext is Null when delete data from database" + this.e.get());
            return;
        }
        try {
            b();
            if (this.g == null) {
                c();
                return;
            }
            this.g.delete(str, str2, strArr);
        } catch (Exception unused) {
        } catch (Throwable th) {
            c();
            throw th;
        }
        c();
    }

    public void b(String str, int i) {
        synchronized (d) {
            a(this.h, i, "_id=?", new String[]{str});
        }
    }
}
