package com.mbridge.msdk.foundation.db;

public class l extends com.mbridge.msdk.foundation.db.a<com.mbridge.msdk.foundation.entity.h> {
    private static com.mbridge.msdk.foundation.db.l a;

    private l(com.mbridge.msdk.foundation.db.h r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static com.mbridge.msdk.foundation.db.l a(com.mbridge.msdk.foundation.db.h r2) {
            com.mbridge.msdk.foundation.db.l r0 = com.mbridge.msdk.foundation.db.l.a
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.foundation.db.l> r0 = com.mbridge.msdk.foundation.db.l.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.db.l r1 = com.mbridge.msdk.foundation.db.l.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.foundation.db.l r1 = new com.mbridge.msdk.foundation.db.l     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.foundation.db.l.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.mbridge.msdk.foundation.db.l r2 = com.mbridge.msdk.foundation.db.l.a
            return r2
    }

    private synchronized long b(com.mbridge.msdk.foundation.entity.h r7) {
            r6 = this;
            monitor-enter(r6)
            r0 = -1
            android.content.ContentValues r2 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L77
            r2.<init>()     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L77
            java.lang.String r3 = "id"
            java.lang.String r4 = r7.a()     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L77
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L77
            java.lang.String r3 = "fc_a"
            int r4 = r7.b()     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L77
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L77
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L77
            java.lang.String r3 = "fc_b"
            int r4 = r7.c()     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L77
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L77
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L77
            java.lang.String r3 = "ts"
            long r4 = r7.f()     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L77
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L77
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L77
            java.lang.String r3 = "impression_count"
            int r4 = r7.d()     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L77
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L77
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L77
            java.lang.String r3 = "click_count"
            int r4 = r7.e()     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L77
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L77
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L77
            java.lang.String r3 = "ts"
            long r4 = r7.f()     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L77
            java.lang.Long r7 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L77
            r2.put(r3, r7)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L77
            android.database.sqlite.SQLiteDatabase r7 = r6.getWritableDatabase()     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L77
            if (r7 != 0) goto L67
            monitor-exit(r6)
            return r0
        L67:
            android.database.sqlite.SQLiteDatabase r7 = r6.getWritableDatabase()     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L77
            java.lang.String r3 = "frequence"
            r4 = 0
            long r0 = r7.insert(r3, r4, r2)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L77
            monitor-exit(r6)
            return r0
        L74:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
        L77:
            monitor-exit(r6)
            return r0
    }

    public final synchronized void a(com.mbridge.msdk.foundation.entity.h r2) {
            r1 = this;
            monitor-enter(r1)
            java.lang.String r0 = r2.a()     // Catch: java.lang.Throwable -> L10
            boolean r0 = r1.a(r0)     // Catch: java.lang.Throwable -> L10
            if (r0 != 0) goto Le
            r1.b(r2)     // Catch: java.lang.Throwable -> L10
        Le:
            monitor-exit(r1)
            return
        L10:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized boolean a(java.lang.String r5) {
            r4 = this;
            monitor-enter(r4)
            r0 = 0
            r1 = 0
            monitor-enter(r5)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L47
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3b
            r2.<init>()     // Catch: java.lang.Throwable -> L3b
            java.lang.String r3 = "SELECT id FROM frequence WHERE id='"
            r2.append(r3)     // Catch: java.lang.Throwable -> L3b
            r2.append(r5)     // Catch: java.lang.Throwable -> L3b
            java.lang.String r3 = "'"
            r2.append(r3)     // Catch: java.lang.Throwable -> L3b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L3b
            android.database.sqlite.SQLiteDatabase r3 = r4.getReadableDatabase()     // Catch: java.lang.Throwable -> L3b
            android.database.Cursor r1 = r3.rawQuery(r2, r1)     // Catch: java.lang.Throwable -> L3b
            if (r1 == 0) goto L33
            int r2 = r1.getCount()     // Catch: java.lang.Throwable -> L3b
            if (r2 <= 0) goto L33
            r2 = 1
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L3b
            if (r1 == 0) goto L31
            r1.close()     // Catch: java.lang.Throwable -> L45
        L31:
            monitor-exit(r4)
            return r2
        L33:
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L3b
            if (r1 == 0) goto L39
            r1.close()     // Catch: java.lang.Throwable -> L45
        L39:
            monitor-exit(r4)
            return r0
        L3b:
            r2 = move-exception
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L3b
            throw r2     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L47
        L3e:
            r5 = move-exception
            if (r1 == 0) goto L44
            r1.close()     // Catch: java.lang.Throwable -> L45
        L44:
            throw r5     // Catch: java.lang.Throwable -> L45
        L45:
            r5 = move-exception
            goto L4d
        L47:
            if (r1 == 0) goto L4f
            r1.close()     // Catch: java.lang.Throwable -> L45
            goto L4f
        L4d:
            monitor-exit(r4)
            throw r5
        L4f:
            monitor-exit(r4)
            return r0
    }

    public final long[] a() {
            r7 = this;
            java.lang.String r0 = "SELECT id FROM frequence WHERE fc_a<impression_count"
            r1 = 0
            android.database.sqlite.SQLiteDatabase r2 = r7.getReadableDatabase()     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L44
            android.database.Cursor r0 = r2.rawQuery(r0, r1)     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L44
            if (r0 == 0) goto L37
            int r2 = r0.getCount()     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L45
            if (r2 <= 0) goto L37
            int r2 = r0.getCount()     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L45
            long[] r2 = new long[r2]     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L45
            r3 = 0
        L1a:
            boolean r4 = r0.moveToNext()     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L45
            if (r4 == 0) goto L2f
            java.lang.String r4 = "id"
            int r4 = r0.getColumnIndexOrThrow(r4)     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L45
            long r4 = r0.getLong(r4)     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L45
            r2[r3] = r4     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L45
            int r3 = r3 + 1
            goto L1a
        L2f:
            if (r0 == 0) goto L34
            r0.close()
        L34:
            return r2
        L35:
            r1 = move-exception
            goto L3e
        L37:
            if (r0 == 0) goto L4a
            goto L47
        L3a:
            r0 = move-exception
            r6 = r1
            r1 = r0
            r0 = r6
        L3e:
            if (r0 == 0) goto L43
            r0.close()
        L43:
            throw r1
        L44:
            r0 = r1
        L45:
            if (r0 == 0) goto L4a
        L47:
            r0.close()
        L4a:
            return r1
    }

    public final synchronized void b() {
            r4 = this;
            monitor-enter(r4)
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            r2 = 86400000(0x5265c00, double:4.2687272E-316)
            long r0 = r0 - r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            r2.<init>()     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            java.lang.String r3 = "ts<"
            r2.append(r3)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            r2.append(r0)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            android.database.sqlite.SQLiteDatabase r1 = r4.getWritableDatabase()     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            if (r1 == 0) goto L2e
            android.database.sqlite.SQLiteDatabase r1 = r4.getWritableDatabase()     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            java.lang.String r2 = "frequence"
            r3 = 0
            r1.delete(r2, r0, r3)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            goto L2e
        L2b:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
        L2e:
            monitor-exit(r4)
            return
    }

    public final synchronized void b(java.lang.String r3) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.a(r3)     // Catch: java.lang.Throwable -> L27
            if (r0 == 0) goto L25
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L27
            r0.<init>()     // Catch: java.lang.Throwable -> L27
            java.lang.String r1 = "UPDATE frequence Set impression_count=impression_count+1 WHERE id="
            r0.append(r1)     // Catch: java.lang.Throwable -> L27
            r0.append(r3)     // Catch: java.lang.Throwable -> L27
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L27
            android.database.sqlite.SQLiteDatabase r0 = r2.getReadableDatabase()     // Catch: java.lang.Throwable -> L27
            if (r0 == 0) goto L25
            android.database.sqlite.SQLiteDatabase r0 = r2.getReadableDatabase()     // Catch: java.lang.Throwable -> L27
            r0.execSQL(r3)     // Catch: java.lang.Throwable -> L27
        L25:
            monitor-exit(r2)
            return
        L27:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }
}
