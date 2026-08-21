package com.tkay.core.common.c;

import android.content.ContentValues;
import android.database.Cursor;
import com.tkay.core.common.f.n;

/* JADX INFO: loaded from: classes3.dex */
public class g extends com.tkay.core.common.c.a<n> {
    private static final String b = g.class.getName();
    private static g c;
    private int d;

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final String f6102a = "request_info";
        public static final String b = "id";
        public static final String c = "req_type";
        public static final String d = "req_url";
        public static final String e = "req_head";
        public static final String f = "req_content";
        public static final String g = "time";
        public static final String h = "extra";
        public static final String i = "CREATE TABLE IF NOT EXISTS request_info(id TEXT, req_type INTEGER, req_url TEXT, req_head TEXT, req_content TEXT, time INTEGER, extra TEXT )";
    }

    private g(b bVar) {
        super(bVar);
        this.d = 1000;
    }

    public static g a(b bVar) {
        if (c == null) {
            synchronized (g.class) {
                if (c == null) {
                    c = new g(bVar);
                }
            }
        }
        return c;
    }

    private synchronized void d() {
        try {
            if (b() == null) {
                return;
            }
            b().delete(a.f6102a, null, null);
        } catch (Exception unused) {
        }
    }

    public final synchronized long a(n nVar) {
        Cursor cursorQuery;
        if (b() == null) {
            return -1L;
        }
        Cursor cursor = null;
        try {
            cursorQuery = a().query(a.f6102a, null, null, null, null, null, null);
        } catch (Exception unused) {
            cursorQuery = null;
        } catch (Throwable th) {
            th = th;
        }
        try {
            try {
                if (cursorQuery.getCount() >= this.d) {
                    d();
                }
            } catch (Exception unused2) {
                if (cursorQuery != null) {
                }
                ContentValues contentValues = new ContentValues();
                contentValues.put("id", nVar.f6160a);
                contentValues.put("req_type", Integer.valueOf(nVar.b));
                contentValues.put("req_url", nVar.d);
                contentValues.put("req_head", nVar.c);
                contentValues.put(a.f, nVar.e);
                contentValues.put("time", Long.valueOf(nVar.f));
                contentValues.put("extra", nVar.g);
                return b().insert(a.f6102a, null, contentValues);
            } catch (Throwable th2) {
                th = th2;
                cursor = cursorQuery;
                if (cursor != null) {
                    try {
                        cursor.close();
                    } catch (Exception unused3) {
                    }
                }
                throw th;
            }
            ContentValues contentValues2 = new ContentValues();
            contentValues2.put("id", nVar.f6160a);
            contentValues2.put("req_type", Integer.valueOf(nVar.b));
            contentValues2.put("req_url", nVar.d);
            contentValues2.put("req_head", nVar.c);
            contentValues2.put(a.f, nVar.e);
            contentValues2.put("time", Long.valueOf(nVar.f));
            contentValues2.put("extra", nVar.g);
            return b().insert(a.f6102a, null, contentValues2);
        } catch (Exception unused4) {
            return -1L;
        }
        if (cursorQuery != null) {
            try {
                cursorQuery.close();
            } catch (Exception unused5) {
            }
        }
    }

    public final synchronized int b(n nVar) {
        if (b() == null || nVar == null) {
            return -1;
        }
        try {
            return b().delete(a.f6102a, "id=?", new String[]{nVar.f6160a});
        } catch (Throwable unused) {
            return -1;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:27:0x00a0 A[Catch: all -> 0x00af, PHI: r1
      0x00a0: PHI (r1v5 android.database.Cursor) = (r1v3 android.database.Cursor), (r1v4 android.database.Cursor), (r1v6 android.database.Cursor) binds: [B:22:0x0097, B:26:0x009e, B:33:0x00ac] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TryCatch #7 {, blocks: (B:14:0x008a, B:18:0x0091, B:27:0x00a0, B:30:0x00a7, B:31:0x00aa, B:25:0x009b), top: B:45:0x0002, inners: #0 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final synchronized java.util.List<com.tkay.core.common.f.n> c() {
        /*
            r10 = this;
            monitor-enter(r10)
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r10.a()     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            java.lang.String r2 = "request_info"
            r3 = 0
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            java.lang.String r8 = "time"
            java.lang.String r9 = "10"
            android.database.Cursor r1 = r1.query(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            if (r1 == 0) goto L8f
            int r2 = r1.getCount()     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            if (r2 <= 0) goto L8f
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            r2.<init>()     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
        L22:
            boolean r3 = r1.moveToNext()     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            if (r3 == 0) goto L85
            com.tkay.core.common.f.n r3 = new com.tkay.core.common.f.n     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            r3.<init>()     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            java.lang.String r4 = "id"
            int r4 = r1.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            java.lang.String r4 = r1.getString(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            r3.f6160a = r4     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            java.lang.String r4 = "req_type"
            int r4 = r1.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            int r4 = r1.getInt(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            r3.b = r4     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            java.lang.String r4 = "req_url"
            int r4 = r1.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            java.lang.String r4 = r1.getString(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            r3.d = r4     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            java.lang.String r4 = "req_head"
            int r4 = r1.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            java.lang.String r4 = r1.getString(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            r3.c = r4     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            java.lang.String r4 = "req_content"
            int r4 = r1.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            java.lang.String r4 = r1.getString(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            r3.e = r4     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            java.lang.String r4 = "time"
            int r4 = r1.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            long r4 = r1.getLong(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            r3.f = r4     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            java.lang.String r4 = "extra"
            int r4 = r1.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            java.lang.String r4 = r1.getString(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            r3.g = r4     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            r2.add(r3)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            goto L22
        L85:
            r1.close()     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            if (r1 == 0) goto L8d
            r1.close()     // Catch: java.lang.Throwable -> Laf
        L8d:
            monitor-exit(r10)
            return r2
        L8f:
            if (r1 == 0) goto L94
            r1.close()     // Catch: java.lang.Throwable -> Laf
        L94:
            monitor-exit(r10)
            return r0
        L96:
            r1 = r0
        L97:
            if (r1 == 0) goto Lb2
            goto Lae
        L9a:
            r1 = r0
        L9b:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> La4
            if (r1 == 0) goto Lb2
        La0:
            r1.close()     // Catch: java.lang.Throwable -> Laf
            goto Lb2
        La4:
            r0 = move-exception
            if (r1 == 0) goto Laa
            r1.close()     // Catch: java.lang.Throwable -> Laf
        Laa:
            throw r0     // Catch: java.lang.Throwable -> Laf
        Lab:
            r1 = r0
        Lac:
            if (r1 == 0) goto Lb2
        Lae:
            goto La0
        Laf:
            r0 = move-exception
            monitor-exit(r10)
            throw r0
        Lb2:
            monitor-exit(r10)
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.c.g.c():java.util.List");
    }
}
