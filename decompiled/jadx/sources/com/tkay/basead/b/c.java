package com.tkay.basead.b;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;

/* JADX INFO: loaded from: classes3.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static c f5599a;
    private Context b;

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final String f5600a = "my_offer_cap_pacing";
        public static final String b = "offer_id";
        public static final String c = "offer_cap";
        public static final String d = "offer_pacing";
        public static final String e = "show_num";
        public static final String f = "show_time";
        public static final String g = "record_date";
        public static final String h = "CREATE TABLE IF NOT EXISTS my_offer_cap_pacing (offer_id TEXT,offer_cap INTEGER,offer_pacing INTEGER,show_num INTEGER,show_time INTEGER,record_date INTEGER )";
    }

    private c(Context context) {
        this.b = context;
    }

    public static c a(Context context) {
        if (f5599a == null) {
            f5599a = new c(context);
        }
        return f5599a;
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x003d A[Catch: all -> 0x0053, PHI: r11
      0x003d: PHI (r11v8 android.database.Cursor) = 
      (r11v5 android.database.Cursor)
      (r11v6 android.database.Cursor)
      (r11v7 android.database.Cursor)
      (r11v9 android.database.Cursor)
     binds: [B:16:0x003b, B:21:0x0045, B:28:0x0050, B:13:0x0037] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TRY_LEAVE, TryCatch #2 {, blocks: (B:10:0x0032, B:17:0x003d, B:25:0x004b, B:26:0x004e, B:20:0x0042), top: B:38:0x0002, inners: #3 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final synchronized com.tkay.basead.c.c a(java.lang.String r11) {
        /*
            r10 = this;
            monitor-enter(r10)
            r0 = 0
            android.content.Context r1 = r10.b     // Catch: java.lang.Throwable -> L3a java.lang.OutOfMemoryError -> L41 java.lang.Exception -> L4f
            com.tkay.basead.b.b r1 = com.tkay.basead.b.b.a(r1)     // Catch: java.lang.Throwable -> L3a java.lang.OutOfMemoryError -> L41 java.lang.Exception -> L4f
            android.database.sqlite.SQLiteDatabase r2 = r1.getReadableDatabase()     // Catch: java.lang.Throwable -> L3a java.lang.OutOfMemoryError -> L41 java.lang.Exception -> L4f
            java.lang.String r3 = "my_offer_cap_pacing"
            r4 = 0
            java.lang.String r5 = "offer_id=?"
            r1 = 1
            java.lang.String[] r6 = new java.lang.String[r1]     // Catch: java.lang.Throwable -> L3a java.lang.OutOfMemoryError -> L41 java.lang.Exception -> L4f
            r1 = 0
            r6[r1] = r11     // Catch: java.lang.Throwable -> L3a java.lang.OutOfMemoryError -> L41 java.lang.Exception -> L4f
            r7 = 0
            r8 = 0
            r9 = 0
            android.database.Cursor r11 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L3a java.lang.OutOfMemoryError -> L41 java.lang.Exception -> L4f
            if (r11 == 0) goto L37
            int r1 = r11.getCount()     // Catch: java.lang.Throwable -> L3b java.lang.OutOfMemoryError -> L42 java.lang.Exception -> L50
            if (r1 <= 0) goto L37
            r11.moveToNext()     // Catch: java.lang.Throwable -> L3b java.lang.OutOfMemoryError -> L42 java.lang.Exception -> L50
            com.tkay.basead.c.c r1 = a(r11)     // Catch: java.lang.Throwable -> L3b java.lang.OutOfMemoryError -> L42 java.lang.Exception -> L50
            r11.close()     // Catch: java.lang.Throwable -> L3b java.lang.OutOfMemoryError -> L42 java.lang.Exception -> L50
            if (r11 == 0) goto L35
            r11.close()     // Catch: java.lang.Throwable -> L53
        L35:
            monitor-exit(r10)
            return r1
        L37:
            if (r11 == 0) goto L56
            goto L52
        L3a:
            r11 = r0
        L3b:
            if (r11 == 0) goto L56
        L3d:
            r11.close()     // Catch: java.lang.Throwable -> L53
            goto L56
        L41:
            r11 = r0
        L42:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> L48
            if (r11 == 0) goto L56
            goto L52
        L48:
            r0 = move-exception
            if (r11 == 0) goto L4e
            r11.close()     // Catch: java.lang.Throwable -> L53
        L4e:
            throw r0     // Catch: java.lang.Throwable -> L53
        L4f:
            r11 = r0
        L50:
            if (r11 == 0) goto L56
        L52:
            goto L3d
        L53:
            r11 = move-exception
            monitor-exit(r10)
            throw r11
        L56:
            monitor-exit(r10)
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.basead.b.c.a(java.lang.String):com.tkay.basead.c.c");
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x004e A[Catch: all -> 0x0064, PHI: r11
      0x004e: PHI (r11v8 android.database.Cursor) = 
      (r11v5 android.database.Cursor)
      (r11v6 android.database.Cursor)
      (r11v7 android.database.Cursor)
      (r11v10 android.database.Cursor)
     binds: [B:20:0x004c, B:25:0x0056, B:32:0x0061, B:17:0x0048] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TRY_LEAVE, TryCatch #1 {, blocks: (B:14:0x0043, B:21:0x004e, B:29:0x005c, B:30:0x005f, B:24:0x0053), top: B:42:0x0002, inners: #2 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final synchronized java.util.List<com.tkay.basead.c.c> b(java.lang.String r11) {
        /*
            r10 = this;
            monitor-enter(r10)
            r0 = 0
            android.content.Context r1 = r10.b     // Catch: java.lang.Throwable -> L4b java.lang.OutOfMemoryError -> L52 java.lang.Exception -> L60
            com.tkay.basead.b.b r1 = com.tkay.basead.b.b.a(r1)     // Catch: java.lang.Throwable -> L4b java.lang.OutOfMemoryError -> L52 java.lang.Exception -> L60
            android.database.sqlite.SQLiteDatabase r2 = r1.getReadableDatabase()     // Catch: java.lang.Throwable -> L4b java.lang.OutOfMemoryError -> L52 java.lang.Exception -> L60
            java.lang.String r3 = "my_offer_cap_pacing"
            r4 = 0
            java.lang.String r5 = "offer_cap <= show_num AND record_date=? AND offer_cap !=?"
            r1 = 2
            java.lang.String[] r6 = new java.lang.String[r1]     // Catch: java.lang.Throwable -> L4b java.lang.OutOfMemoryError -> L52 java.lang.Exception -> L60
            r1 = 0
            r6[r1] = r11     // Catch: java.lang.Throwable -> L4b java.lang.OutOfMemoryError -> L52 java.lang.Exception -> L60
            r11 = 1
            java.lang.String r1 = "-1"
            r6[r11] = r1     // Catch: java.lang.Throwable -> L4b java.lang.OutOfMemoryError -> L52 java.lang.Exception -> L60
            r7 = 0
            r8 = 0
            r9 = 0
            android.database.Cursor r11 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L4b java.lang.OutOfMemoryError -> L52 java.lang.Exception -> L60
            if (r11 == 0) goto L48
            int r1 = r11.getCount()     // Catch: java.lang.Throwable -> L4c java.lang.OutOfMemoryError -> L53 java.lang.Exception -> L61
            if (r1 <= 0) goto L48
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L4c java.lang.OutOfMemoryError -> L53 java.lang.Exception -> L61
            r1.<init>()     // Catch: java.lang.Throwable -> L4c java.lang.OutOfMemoryError -> L53 java.lang.Exception -> L61
        L30:
            boolean r2 = r11.moveToNext()     // Catch: java.lang.Throwable -> L4c java.lang.OutOfMemoryError -> L53 java.lang.Exception -> L61
            if (r2 == 0) goto L3e
            com.tkay.basead.c.c r2 = a(r11)     // Catch: java.lang.Throwable -> L4c java.lang.OutOfMemoryError -> L53 java.lang.Exception -> L61
            r1.add(r2)     // Catch: java.lang.Throwable -> L4c java.lang.OutOfMemoryError -> L53 java.lang.Exception -> L61
            goto L30
        L3e:
            r11.close()     // Catch: java.lang.Throwable -> L4c java.lang.OutOfMemoryError -> L53 java.lang.Exception -> L61
            if (r11 == 0) goto L46
            r11.close()     // Catch: java.lang.Throwable -> L64
        L46:
            monitor-exit(r10)
            return r1
        L48:
            if (r11 == 0) goto L67
            goto L63
        L4b:
            r11 = r0
        L4c:
            if (r11 == 0) goto L67
        L4e:
            r11.close()     // Catch: java.lang.Throwable -> L64
            goto L67
        L52:
            r11 = r0
        L53:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> L59
            if (r11 == 0) goto L67
            goto L63
        L59:
            r0 = move-exception
            if (r11 == 0) goto L5f
            r11.close()     // Catch: java.lang.Throwable -> L64
        L5f:
            throw r0     // Catch: java.lang.Throwable -> L64
        L60:
            r11 = r0
        L61:
            if (r11 == 0) goto L67
        L63:
            goto L4e
        L64:
            r11 = move-exception
            monitor-exit(r10)
            throw r11
        L67:
            monitor-exit(r10)
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.basead.b.c.b(java.lang.String):java.util.List");
    }

    public final synchronized void c(String str) {
        synchronized (this) {
            try {
                String str2 = "record_date != '" + str + "'";
                if (b.a(this.b).getWritableDatabase() == null) {
                } else {
                    b.a(this.b).getWritableDatabase().delete(a.f5600a, str2, null);
                }
            } catch (Exception unused) {
            }
        }
    }

    public final synchronized long a(com.tkay.basead.c.c cVar) {
        synchronized (this) {
            if (cVar == null) {
                return 0L;
            }
            try {
                if (b.a(this.b).getWritableDatabase() == null) {
                    return -1L;
                }
                ContentValues contentValues = new ContentValues();
                contentValues.put("offer_id", cVar.f5610a);
                contentValues.put(a.e, Integer.valueOf(cVar.d));
                contentValues.put("show_time", Long.valueOf(cVar.e));
                contentValues.put(a.g, cVar.f);
                contentValues.put(a.c, Integer.valueOf(cVar.b));
                contentValues.put(a.d, Long.valueOf(cVar.c));
                if (d(cVar.f5610a)) {
                    return b.a(this.b).getWritableDatabase().update(a.f5600a, contentValues, "offer_id = '" + cVar.f5610a + "'", null);
                }
                return b.a(this.b).getWritableDatabase().insert(a.f5600a, null, contentValues);
            } catch (Exception e) {
                e.printStackTrace();
                return -1L;
            }
        }
    }

    private synchronized boolean d(String str) {
        Cursor cursorQuery = b.a(this.b).getReadableDatabase().query(a.f5600a, new String[]{"offer_id"}, "offer_id=?", new String[]{str}, null, null, null);
        if (cursorQuery != null && cursorQuery.getCount() > 0) {
            cursorQuery.close();
            return true;
        }
        if (cursorQuery != null) {
            cursorQuery.close();
        }
        return false;
    }

    private static com.tkay.basead.c.c a(Cursor cursor) {
        com.tkay.basead.c.c cVar = new com.tkay.basead.c.c();
        cVar.f5610a = cursor.getString(cursor.getColumnIndex("offer_id"));
        cVar.d = cursor.getInt(cursor.getColumnIndex(a.e));
        cVar.e = cursor.getLong(cursor.getColumnIndex("show_time"));
        cVar.f = cursor.getString(cursor.getColumnIndex(a.g));
        cVar.b = cursor.getInt(cursor.getColumnIndex(a.c));
        cVar.c = cursor.getLong(cursor.getColumnIndex(a.d));
        return cVar;
    }
}
