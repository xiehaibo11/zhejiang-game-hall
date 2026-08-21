package com.mbridge.msdk.foundation.db;

public class o extends com.mbridge.msdk.foundation.db.a {
    private static com.mbridge.msdk.foundation.db.o a;

    static {
            return
    }

    private o(com.mbridge.msdk.foundation.db.h r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static com.mbridge.msdk.foundation.db.o a(com.mbridge.msdk.foundation.db.h r2) {
            com.mbridge.msdk.foundation.db.o r0 = com.mbridge.msdk.foundation.db.o.a
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.foundation.db.o> r0 = com.mbridge.msdk.foundation.db.o.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.db.o r1 = com.mbridge.msdk.foundation.db.o.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.foundation.db.o r1 = new com.mbridge.msdk.foundation.db.o     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.foundation.db.o.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.mbridge.msdk.foundation.db.o r2 = com.mbridge.msdk.foundation.db.o.a
            return r2
    }

    private synchronized int b(int r3) {
            r2 = this;
            monitor-enter(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L24
            r0.<init>()     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L24
            java.lang.String r1 = "DELETE from reporterror where count >= "
            r0.append(r1)     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L24
            r0.append(r3)     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L24
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L24
            android.database.sqlite.SQLiteDatabase r0 = r2.getWritableDatabase()     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L24
            r1 = 0
            android.database.Cursor r3 = r0.rawQuery(r3, r1)     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L24
            int r3 = r3.getCount()     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L24
            monitor-exit(r2)
            return r3
        L21:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
        L24:
            r3 = -1
            monitor-exit(r2)
            return r3
    }

    private synchronized boolean b(java.lang.String r4, java.lang.String r5, long r6) {
            r3 = this;
            monitor-enter(r3)
            r0 = 0
            if (r4 != 0) goto L6
            java.lang.String r4 = ""
        L6:
            android.database.sqlite.SQLiteDatabase r1 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L57
            if (r1 != 0) goto Le
            monitor-exit(r3)
            return r0
        Le:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L57
            r1.<init>()     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L57
            java.lang.String r2 = "select * from reporterror where url='"
            r1.append(r2)     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L57
            r1.append(r5)     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L57
            java.lang.String r5 = "' and "
            r1.append(r5)     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L57
            java.lang.String r5 = "data"
            r1.append(r5)     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L57
            java.lang.String r5 = "='"
            r1.append(r5)     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L57
            r1.append(r4)     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L57
            java.lang.String r4 = "' and "
            r1.append(r4)     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L57
            java.lang.String r4 = "time_stamp"
            r1.append(r4)     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L57
            java.lang.String r4 = "="
            r1.append(r4)     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L57
            r1.append(r6)     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L57
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L57
            android.database.sqlite.SQLiteDatabase r5 = r3.getReadableDatabase()     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L57
            r6 = 0
            android.database.Cursor r4 = r5.rawQuery(r4, r6)     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L57
            int r4 = r4.getCount()     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L57
            if (r4 <= 0) goto L53
            r0 = 1
        L53:
            monitor-exit(r3)
            return r0
        L55:
            r4 = move-exception
            goto L5d
        L57:
            r4 = move-exception
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L55
            monitor-exit(r3)
            return r0
        L5d:
            monitor-exit(r3)
            throw r4
    }

    public final synchronized int a() {
            r10 = this;
            monitor-enter(r10)
            java.lang.String r0 = " count(*) "
            java.lang.String[] r3 = new java.lang.String[]{r0}     // Catch: java.lang.Throwable -> L3c
            r0 = 0
            r9 = 0
            android.database.sqlite.SQLiteDatabase r1 = r10.getReadableDatabase()     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            java.lang.String r2 = "reporterror"
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            android.database.Cursor r0 = r1.query(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            if (r0 == 0) goto L25
            boolean r1 = r0.moveToFirst()     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            if (r1 == 0) goto L25
            int r1 = r0.getInt(r9)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            r9 = r1
        L25:
            if (r0 == 0) goto L34
        L27:
            r0.close()     // Catch: java.lang.Throwable -> L3c
            goto L34
        L2b:
            r1 = move-exception
            goto L36
        L2d:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L2b
            if (r0 == 0) goto L34
            goto L27
        L34:
            monitor-exit(r10)
            return r9
        L36:
            if (r0 == 0) goto L3b
            r0.close()     // Catch: java.lang.Throwable -> L3c
        L3b:
            throw r1     // Catch: java.lang.Throwable -> L3c
        L3c:
            r0 = move-exception
            monitor-exit(r10)
            throw r0
    }

    public final synchronized int a(java.lang.String r5) {
            r4 = this;
            monitor-enter(r4)
            r0 = -1
            java.lang.String r1 = "url=?"
            r2 = 1
            java.lang.String[] r2 = new java.lang.String[r2]     // Catch: java.lang.Throwable -> L1e java.lang.Exception -> L21
            r3 = 0
            r2[r3] = r5     // Catch: java.lang.Throwable -> L1e java.lang.Exception -> L21
            android.database.sqlite.SQLiteDatabase r5 = r4.getWritableDatabase()     // Catch: java.lang.Throwable -> L1e java.lang.Exception -> L21
            if (r5 != 0) goto L12
            monitor-exit(r4)
            return r0
        L12:
            android.database.sqlite.SQLiteDatabase r5 = r4.getWritableDatabase()     // Catch: java.lang.Throwable -> L1e java.lang.Exception -> L21
            java.lang.String r3 = "reporterror"
            int r5 = r5.delete(r3, r1, r2)     // Catch: java.lang.Throwable -> L1e java.lang.Exception -> L21
            monitor-exit(r4)
            return r5
        L1e:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
        L21:
            monitor-exit(r4)
            return r0
    }

    public final synchronized int a(java.lang.String r4, java.lang.String r5, long r6) {
            r3 = this;
            monitor-enter(r3)
            r0 = -1
            if (r4 != 0) goto L6
            java.lang.String r4 = ""
        L6:
            android.database.sqlite.SQLiteDatabase r1 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L64
            if (r1 != 0) goto Le
            monitor-exit(r3)
            return r0
        Le:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L64
            r1.<init>()     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L64
            java.lang.String r2 = "DELETE from reporterror where url='"
            r1.append(r2)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L64
            r1.append(r5)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L64
            java.lang.String r5 = "' and "
            r1.append(r5)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L64
            java.lang.String r5 = "data"
            r1.append(r5)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L64
            java.lang.String r5 = "='"
            r1.append(r5)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L64
            r1.append(r4)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L64
            java.lang.String r4 = "' and "
            r1.append(r4)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L64
            java.lang.String r4 = "time_stamp"
            r1.append(r4)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L64
            java.lang.String r4 = "="
            r1.append(r4)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L64
            r1.append(r6)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L64
            java.lang.String r4 = " or "
            r1.append(r4)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L64
            java.lang.String r4 = "count"
            r1.append(r4)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L64
            java.lang.String r4 = " > 5 "
            r1.append(r4)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L64
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L64
            android.database.sqlite.SQLiteDatabase r5 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L64
            r6 = 0
            android.database.Cursor r4 = r5.rawQuery(r4, r6)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L64
            int r4 = r4.getCount()     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L64
            monitor-exit(r3)
            return r4
        L61:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
        L64:
            monitor-exit(r3)
            return r0
    }

    public final synchronized long a(com.mbridge.msdk.foundation.entity.n r8) {
            r7 = this;
            monitor-enter(r7)
            r0 = -1
            android.content.ContentValues r2 = new android.content.ContentValues     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            r2.<init>()     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            java.lang.String r3 = "url"
            java.lang.String r4 = r8.b()     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            java.lang.String r3 = "method"
            java.lang.String r4 = r8.c()     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            java.lang.String r3 = "data"
            java.lang.String r4 = r8.d()     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            java.lang.String r3 = "unitId"
            java.lang.String r4 = r8.a()     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            java.lang.String r3 = "time_stamp"
            long r4 = r8.g()     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            android.database.sqlite.SQLiteDatabase r3 = r7.getWritableDatabase()     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            if (r3 != 0) goto L41
            monitor-exit(r7)
            return r0
        L41:
            java.lang.String r3 = r8.d()     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            java.lang.String r4 = r8.b()     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            long r5 = r8.g()     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            boolean r3 = r7.b(r3, r4, r5)     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            r4 = 0
            if (r3 == 0) goto Lba
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            r2.<init>()     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            java.lang.String r3 = "UPDATE reporterror SET count = "
            r2.append(r3)     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            int r3 = r8.f()     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            r2.append(r3)     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            java.lang.String r3 = " where "
            r2.append(r3)     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            java.lang.String r3 = "url"
            r2.append(r3)     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            java.lang.String r3 = "='"
            r2.append(r3)     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            java.lang.String r3 = r8.b()     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            r2.append(r3)     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            java.lang.String r3 = "' and "
            r2.append(r3)     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            java.lang.String r3 = "data"
            r2.append(r3)     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            java.lang.String r3 = "='"
            r2.append(r3)     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            java.lang.String r3 = r8.d()     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            r2.append(r3)     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            java.lang.String r3 = "' and "
            r2.append(r3)     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            java.lang.String r3 = "time_stamp"
            r2.append(r3)     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            java.lang.String r3 = "="
            r2.append(r3)     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            long r5 = r8.g()     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            r2.append(r5)     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            java.lang.String r8 = r2.toString()     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            android.database.sqlite.SQLiteDatabase r2 = r7.getWritableDatabase()     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            android.database.Cursor r8 = r2.rawQuery(r8, r4)     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            int r8 = r8.getCount()     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            long r0 = (long) r8
            monitor-exit(r7)
            return r0
        Lba:
            java.lang.String r3 = "count"
            int r8 = r8.f()     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            r2.put(r3, r8)     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            android.database.sqlite.SQLiteDatabase r8 = r7.getWritableDatabase()     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            java.lang.String r3 = "reporterror"
            long r0 = r8.insert(r3, r4, r2)     // Catch: java.lang.Throwable -> Ld3 java.lang.Exception -> Ld6
            monitor-exit(r7)
            return r0
        Ld3:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
        Ld6:
            monitor-exit(r7)
            return r0
    }

    public final synchronized java.util.List<com.mbridge.msdk.foundation.entity.n> a(int r13) {
            r12 = this;
            monitor-enter(r12)
            r0 = 5
            r1 = 0
            r12.b(r0)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            android.database.sqlite.SQLiteDatabase r2 = r12.getReadableDatabase()     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            java.lang.String r3 = "reporterror"
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            r0.<init>()     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            r0.append(r13)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            java.lang.String r13 = ""
            r0.append(r13)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            java.lang.String r10 = r0.toString()     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            android.database.Cursor r13 = r2.query(r3, r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            if (r13 == 0) goto L90
            int r0 = r13.getCount()     // Catch: java.lang.Exception -> L8b java.lang.Throwable -> La7
            if (r0 <= 0) goto L90
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Exception -> L8b java.lang.Throwable -> La7
            r0.<init>()     // Catch: java.lang.Exception -> L8b java.lang.Throwable -> La7
        L34:
            boolean r1 = r13.moveToNext()     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> La7
            if (r1 == 0) goto L87
            java.lang.String r1 = "url"
            int r1 = r13.getColumnIndex(r1)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> La7
            java.lang.String r1 = r13.getString(r1)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> La7
            java.lang.String r2 = "data"
            int r2 = r13.getColumnIndex(r2)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> La7
            java.lang.String r2 = r13.getString(r2)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> La7
            java.lang.String r3 = "method"
            int r3 = r13.getColumnIndex(r3)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> La7
            java.lang.String r3 = r13.getString(r3)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> La7
            java.lang.String r4 = "unitId"
            int r4 = r13.getColumnIndex(r4)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> La7
            java.lang.String r4 = r13.getString(r4)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> La7
            java.lang.String r5 = "count"
            int r5 = r13.getColumnIndex(r5)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> La7
            int r5 = r13.getInt(r5)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> La7
            java.lang.String r6 = "time_stamp"
            int r6 = r13.getColumnIndex(r6)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> La7
            long r6 = r13.getLong(r6)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> La7
            com.mbridge.msdk.foundation.entity.n r8 = new com.mbridge.msdk.foundation.entity.n     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> La7
            r8.<init>(r1, r3, r2, r4)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> La7
            int r5 = r5 + 1
            r8.a(r5)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> La7
            r8.a(r6)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> La7
            r0.add(r8)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> La7
            goto L34
        L87:
            r1 = r0
            goto L90
        L89:
            r1 = move-exception
            goto L9c
        L8b:
            r0 = move-exception
            r11 = r1
            r1 = r0
            r0 = r11
            goto L9c
        L90:
            if (r13 == 0) goto La5
            r13.close()     // Catch: java.lang.Throwable -> Laf
            goto La5
        L96:
            r0 = move-exception
            goto La9
        L98:
            r13 = move-exception
            r0 = r1
            r1 = r13
            r13 = r0
        L9c:
            r1.printStackTrace()     // Catch: java.lang.Throwable -> La7
            if (r13 == 0) goto La4
            r13.close()     // Catch: java.lang.Throwable -> Laf
        La4:
            r1 = r0
        La5:
            monitor-exit(r12)
            return r1
        La7:
            r0 = move-exception
            r1 = r13
        La9:
            if (r1 == 0) goto Lae
            r1.close()     // Catch: java.lang.Throwable -> Laf
        Lae:
            throw r0     // Catch: java.lang.Throwable -> Laf
        Laf:
            r13 = move-exception
            monitor-exit(r12)
            throw r13
    }

    public final synchronized int b() {
            r12 = this;
            monitor-enter(r12)
            r0 = 0
            r1 = 0
            java.lang.String r2 = " count(*) "
            java.lang.String[] r5 = new java.lang.String[]{r2}     // Catch: java.lang.Throwable -> L34
            android.database.sqlite.SQLiteDatabase r3 = r12.getReadableDatabase()     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L25
            java.lang.String r4 = "reporterror"
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            r10 = 0
            r11 = 0
            android.database.Cursor r0 = r3.query(r4, r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L25
            int r1 = r0.getCount()     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L25
            if (r0 == 0) goto L2c
        L1f:
            r0.close()     // Catch: java.lang.Throwable -> L34
            goto L2c
        L23:
            r1 = move-exception
            goto L2e
        L25:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L23
            if (r0 == 0) goto L2c
            goto L1f
        L2c:
            monitor-exit(r12)
            return r1
        L2e:
            if (r0 == 0) goto L33
            r0.close()     // Catch: java.lang.Throwable -> L34
        L33:
            throw r1     // Catch: java.lang.Throwable -> L34
        L34:
            r0 = move-exception
            monitor-exit(r12)
            throw r0
    }
}
