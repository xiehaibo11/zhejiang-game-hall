package com.reyun.tracking.utils;

import android.content.ContentValues;
import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.util.Log;
import com.huawei.hms.push.constant.RemoteMessageConst;
import java.io.BufferedReader;
import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.atomic.AtomicInteger;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class i {
    private static ConcurrentHashMap d = new ConcurrentHashMap();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final String f4748a;
    final String b;
    final int c;
    private AtomicInteger e;
    private j f;
    private SQLiteDatabase g;
    private String h;
    private Context i;

    private i() {
        this.f4748a = "ReyunDB";
        this.b = "Reyun.db";
        this.c = 1;
    }

    private i(Context context, String str) {
        this.f4748a = "ReyunDB";
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
        To view partially-correct add '--show-bad-code' argument
    */
    public com.reyun.tracking.utils.k a(java.lang.String r9, int r10) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 209
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.reyun.tracking.utils.i.a(java.lang.String, int):com.reyun.tracking.utils.k");
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
