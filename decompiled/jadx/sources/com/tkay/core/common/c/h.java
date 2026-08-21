package com.tkay.core.common.c;

import android.content.ContentValues;
import com.tkay.core.common.f.o;

/* JADX INFO: loaded from: classes3.dex */
public class h extends com.tkay.core.common.c.a<o> {
    private static final String b = h.class.getName();
    private static volatile h c;
    private int d;

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final String f6103a = "inspect_info";
        public static final String b = "inspect_id";
        public static final String c = "update_time";
        public static final String d = "CREATE TABLE IF NOT EXISTS inspect_info(inspect_id TEXT, update_time INTEGER )";
    }

    private h(b bVar) {
        super(bVar);
        this.d = 100;
    }

    public static h a(b bVar) {
        if (c == null) {
            synchronized (h.class) {
                if (c == null) {
                    c = new h(bVar);
                }
            }
        }
        return c;
    }

    public final synchronized long a(String str) {
        if (b() == null) {
            return -1L;
        }
        try {
            ContentValues contentValues = new ContentValues();
            contentValues.put(a.b, str);
            contentValues.put("update_time", Long.valueOf(System.currentTimeMillis()));
            if (b(str)) {
                return b().update(a.f6103a, contentValues, "inspect_id = ? ", new String[]{str});
            }
            return b().insert(a.f6103a, null, contentValues);
        } catch (Exception unused) {
            return -1L;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:20:0x0038 A[Catch: all -> 0x003c, PHI: r1
      0x0038: PHI (r1v2 android.database.Cursor) = (r1v1 android.database.Cursor), (r1v3 android.database.Cursor) binds: [B:19:0x0036, B:17:0x0033] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TRY_LEAVE, TryCatch #1 {, blocks: (B:14:0x002e, B:20:0x0038), top: B:29:0x0007 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private synchronized boolean b(java.lang.String r12) {
        /*
            r11 = this;
            monitor-enter(r11)
            r0 = 0
            if (r12 != 0) goto L6
            monitor-exit(r11)
            return r0
        L6:
            r1 = 0
            android.database.sqlite.SQLiteDatabase r2 = r11.a()     // Catch: java.lang.Throwable -> L36
            java.lang.String r3 = "inspect_info"
            java.lang.String r4 = "inspect_id"
            java.lang.String[] r4 = new java.lang.String[]{r4}     // Catch: java.lang.Throwable -> L36
            java.lang.String r5 = "inspect_id=?"
            r10 = 1
            java.lang.String[] r6 = new java.lang.String[r10]     // Catch: java.lang.Throwable -> L36
            r6[r0] = r12     // Catch: java.lang.Throwable -> L36
            r7 = 0
            r8 = 0
            r9 = 0
            android.database.Cursor r1 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L36
            if (r1 == 0) goto L33
            int r12 = r1.getCount()     // Catch: java.lang.Throwable -> L36
            if (r12 <= 0) goto L33
            r1.close()     // Catch: java.lang.Throwable -> L36
            if (r1 == 0) goto L31
            r1.close()     // Catch: java.lang.Throwable -> L3c
        L31:
            monitor-exit(r11)
            return r10
        L33:
            if (r1 == 0) goto L3f
            goto L38
        L36:
            if (r1 == 0) goto L3f
        L38:
            r1.close()     // Catch: java.lang.Throwable -> L3c
            goto L3f
        L3c:
            r12 = move-exception
            monitor-exit(r11)
            throw r12
        L3f:
            monitor-exit(r11)
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.c.h.b(java.lang.String):boolean");
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x003a A[Catch: all -> 0x004e, DONT_GENERATE, PHI: r0 r1
      0x003a: PHI (r0v6 android.database.Cursor) = 
      (r0v2 android.database.Cursor)
      (r0v3 android.database.Cursor)
      (r0v4 android.database.Cursor)
      (r0v9 android.database.Cursor)
     binds: [B:11:0x0038, B:15:0x0041, B:21:0x004b, B:9:0x0035] A[DONT_GENERATE, DONT_INLINE]
      0x003a: PHI (r1v5 long) = (r1v2 long), (r1v3 long), (r1v4 long), (r1v8 long) binds: [B:11:0x0038, B:15:0x0041, B:21:0x004b, B:9:0x0035] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TRY_LEAVE, TryCatch #4 {, blocks: (B:12:0x003a, B:19:0x0047, B:20:0x004a, B:14:0x003e), top: B:34:0x0004, inners: #0 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final synchronized void c() {
        /*
            r12 = this;
            monitor-enter(r12)
            r0 = 0
            r1 = -1
            android.database.sqlite.SQLiteDatabase r3 = r12.a()     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3e java.lang.Exception -> L4b
            java.lang.String r4 = "inspect_info"
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            java.lang.String r10 = "update_time DESC"
            int r11 = r12.d     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3e java.lang.Exception -> L4b
            java.lang.String r11 = java.lang.String.valueOf(r11)     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3e java.lang.Exception -> L4b
            android.database.Cursor r0 = r3.query(r4, r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3e java.lang.Exception -> L4b
            if (r0 == 0) goto L35
            int r3 = r0.getCount()     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3e java.lang.Exception -> L4b
            int r4 = r12.d     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3e java.lang.Exception -> L4b
            if (r3 < r4) goto L35
            r0.moveToLast()     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3e java.lang.Exception -> L4b
            java.lang.String r3 = "update_time"
            int r3 = r0.getColumnIndex(r3)     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3e java.lang.Exception -> L4b
            long r1 = r0.getLong(r3)     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3e java.lang.Exception -> L4b
            r0.close()     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3e java.lang.Exception -> L4b
        L35:
            if (r0 == 0) goto L51
            goto L4d
        L38:
            if (r0 == 0) goto L51
        L3a:
            r0.close()     // Catch: java.lang.Throwable -> L4e
            goto L51
        L3e:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> L44
            if (r0 == 0) goto L51
            goto L4d
        L44:
            r1 = move-exception
            if (r0 == 0) goto L4a
            r0.close()     // Catch: java.lang.Throwable -> L4e
        L4a:
            throw r1     // Catch: java.lang.Throwable -> L4e
        L4b:
            if (r0 == 0) goto L51
        L4d:
            goto L3a
        L4e:
            r0 = move-exception
            monitor-exit(r12)
            throw r0
        L51:
            r3 = 0
            int r0 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r0 <= 0) goto L6e
            android.database.sqlite.SQLiteDatabase r0 = r12.b()     // Catch: java.lang.Throwable -> L6e
            java.lang.String r3 = "inspect_info"
            java.lang.String r4 = "update_time<?"
            r5 = 1
            java.lang.String[] r5 = new java.lang.String[r5]     // Catch: java.lang.Throwable -> L6e
            r6 = 0
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L6e
            r5[r6] = r1     // Catch: java.lang.Throwable -> L6e
            r0.delete(r3, r4, r5)     // Catch: java.lang.Throwable -> L6e
            monitor-exit(r12)
            return
        L6e:
            monitor-exit(r12)
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.c.h.c():void");
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x0059 A[Catch: all -> 0x006f, PHI: r1
      0x0059: PHI (r1v6 android.database.Cursor) = 
      (r1v3 android.database.Cursor)
      (r1v4 android.database.Cursor)
      (r1v5 android.database.Cursor)
      (r1v8 android.database.Cursor)
     binds: [B:20:0x0057, B:25:0x0061, B:32:0x006c, B:17:0x0053] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TRY_LEAVE, TryCatch #7 {, blocks: (B:14:0x004e, B:21:0x0059, B:29:0x0067, B:30:0x006a, B:24:0x005e), top: B:44:0x0002, inners: #0 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final synchronized java.util.List<com.tkay.core.common.f.o> d() {
        /*
            r10 = this;
            monitor-enter(r10)
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r10.a()     // Catch: java.lang.Throwable -> L56 java.lang.OutOfMemoryError -> L5d java.lang.Exception -> L6b
            java.lang.String r2 = "inspect_info"
            r3 = 0
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            android.database.Cursor r1 = r1.query(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L56 java.lang.OutOfMemoryError -> L5d java.lang.Exception -> L6b
            if (r1 == 0) goto L53
            int r2 = r1.getCount()     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
            if (r2 <= 0) goto L53
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
            r2.<init>()     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
        L20:
            boolean r3 = r1.moveToNext()     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
            if (r3 == 0) goto L49
            com.tkay.core.common.f.o r3 = new com.tkay.core.common.f.o     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
            r3.<init>()     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
            java.lang.String r4 = "inspect_id"
            int r4 = r1.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
            java.lang.String r4 = r1.getString(r4)     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
            java.lang.String r5 = "update_time"
            int r5 = r1.getColumnIndex(r5)     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
            long r5 = r1.getLong(r5)     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
            r3.a(r4)     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
            r3.a(r5)     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
            r2.add(r3)     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
            goto L20
        L49:
            r1.close()     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
            if (r1 == 0) goto L51
            r1.close()     // Catch: java.lang.Throwable -> L6f
        L51:
            monitor-exit(r10)
            return r2
        L53:
            if (r1 == 0) goto L72
            goto L6e
        L56:
            r1 = r0
        L57:
            if (r1 == 0) goto L72
        L59:
            r1.close()     // Catch: java.lang.Throwable -> L6f
            goto L72
        L5d:
            r1 = r0
        L5e:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> L64
            if (r1 == 0) goto L72
            goto L6e
        L64:
            r0 = move-exception
            if (r1 == 0) goto L6a
            r1.close()     // Catch: java.lang.Throwable -> L6f
        L6a:
            throw r0     // Catch: java.lang.Throwable -> L6f
        L6b:
            r1 = r0
        L6c:
            if (r1 == 0) goto L72
        L6e:
            goto L59
        L6f:
            r0 = move-exception
            monitor-exit(r10)
            throw r0
        L72:
            monitor-exit(r10)
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.c.h.d():java.util.List");
    }
}
