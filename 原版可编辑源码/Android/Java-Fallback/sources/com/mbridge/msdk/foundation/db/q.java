package com.mbridge.msdk.foundation.db;

public class q extends com.mbridge.msdk.foundation.db.a {
    private static com.mbridge.msdk.foundation.db.q a;

    static {
            return
    }

    private q(com.mbridge.msdk.foundation.db.h r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static com.mbridge.msdk.foundation.db.q a(com.mbridge.msdk.foundation.db.h r2) {
            com.mbridge.msdk.foundation.db.q r0 = com.mbridge.msdk.foundation.db.q.a
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.foundation.db.q> r0 = com.mbridge.msdk.foundation.db.q.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.db.q r1 = com.mbridge.msdk.foundation.db.q.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.foundation.db.q r1 = new com.mbridge.msdk.foundation.db.q     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.foundation.db.q.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.mbridge.msdk.foundation.db.q r2 = com.mbridge.msdk.foundation.db.q.a
            return r2
    }

    public final synchronized int a() {
            r10 = this;
            monitor-enter(r10)
            java.lang.String r0 = " count(*) "
            java.lang.String[] r3 = new java.lang.String[]{r0}     // Catch: java.lang.Throwable -> L3c
            r0 = 0
            r9 = 0
            android.database.sqlite.SQLiteDatabase r1 = r10.getReadableDatabase()     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            java.lang.String r2 = "settingCampaign"
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
            java.lang.String r1 = "id=?"
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
            java.lang.String r3 = "settingCampaign"
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

    public final synchronized long a(com.mbridge.msdk.foundation.entity.n r6) {
            r5 = this;
            monitor-enter(r5)
            r0 = -1
            android.content.ContentValues r2 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L44
            r2.<init>()     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L44
            java.lang.String r3 = "url"
            java.lang.String r4 = r6.b()     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L44
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L44
            java.lang.String r3 = "method"
            java.lang.String r4 = r6.c()     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L44
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L44
            java.lang.String r3 = "data"
            java.lang.String r4 = r6.d()     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L44
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L44
            java.lang.String r3 = "iex"
            java.lang.String r6 = r6.a()     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L44
            r2.put(r3, r6)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L44
            android.database.sqlite.SQLiteDatabase r6 = r5.getWritableDatabase()     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L44
            if (r6 != 0) goto L34
            monitor-exit(r5)
            return r0
        L34:
            android.database.sqlite.SQLiteDatabase r6 = r5.getWritableDatabase()     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L44
            java.lang.String r3 = "settingCampaign"
            r4 = 0
            long r0 = r6.insert(r3, r4, r2)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L44
            monitor-exit(r5)
            return r0
        L41:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
        L44:
            monitor-exit(r5)
            return r0
    }

    public final synchronized int b() {
            r4 = this;
            monitor-enter(r4)
            r0 = -1
            android.database.sqlite.SQLiteDatabase r1 = r4.getWritableDatabase()     // Catch: java.lang.Throwable -> L17 java.lang.Exception -> L1a
            if (r1 != 0) goto La
            monitor-exit(r4)
            return r0
        La:
            android.database.sqlite.SQLiteDatabase r1 = r4.getWritableDatabase()     // Catch: java.lang.Throwable -> L17 java.lang.Exception -> L1a
            java.lang.String r2 = "settingCampaign"
            r3 = 0
            int r0 = r1.delete(r2, r3, r3)     // Catch: java.lang.Throwable -> L17 java.lang.Exception -> L1a
            monitor-exit(r4)
            return r0
        L17:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
        L1a:
            monitor-exit(r4)
            return r0
    }

    public final synchronized int b(java.lang.String r5) {
            r4 = this;
            monitor-enter(r4)
            r0 = -1
            java.lang.String r1 = "iex=?"
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
            java.lang.String r3 = "settingCampaign"
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

    public final synchronized java.util.List<com.mbridge.msdk.foundation.entity.n> c() {
            r10 = this;
            monitor-enter(r10)
            r0 = 0
            java.lang.String r1 = "select * from settingCampaign ORDER BY iex LIMIT 3"
            android.database.sqlite.SQLiteDatabase r2 = r10.getReadableDatabase()     // Catch: java.lang.Throwable -> L6a java.lang.Exception -> L6f
            android.database.Cursor r1 = r2.rawQuery(r1, r0)     // Catch: java.lang.Throwable -> L6a java.lang.Exception -> L6f
            if (r1 == 0) goto L64
            int r2 = r1.getCount()     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L7e
            if (r2 <= 0) goto L64
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L7e
            r2.<init>()     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L7e
        L19:
            boolean r0 = r1.moveToNext()     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L7e
            if (r0 == 0) goto L5b
            java.lang.String r0 = "url"
            int r0 = r1.getColumnIndex(r0)     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L7e
            java.lang.String r4 = r1.getString(r0)     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L7e
            java.lang.String r0 = "data"
            int r0 = r1.getColumnIndex(r0)     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L7e
            java.lang.String r6 = r1.getString(r0)     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L7e
            java.lang.String r0 = "method"
            int r0 = r1.getColumnIndex(r0)     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L7e
            java.lang.String r5 = r1.getString(r0)     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L7e
            java.lang.String r0 = "iex"
            int r0 = r1.getColumnIndex(r0)     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L7e
            java.lang.String r7 = r1.getString(r0)     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L7e
            java.lang.String r0 = "id"
            int r0 = r1.getColumnIndex(r0)     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L7e
            int r8 = r1.getInt(r0)     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L7e
            com.mbridge.msdk.foundation.entity.n r0 = new com.mbridge.msdk.foundation.entity.n     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L7e
            r3 = r0
            r3.<init>(r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L7e
            r2.add(r0)     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L7e
            goto L19
        L5b:
            r0 = r2
            goto L64
        L5d:
            r0 = move-exception
            goto L73
        L5f:
            r2 = move-exception
            r9 = r2
            r2 = r0
            r0 = r9
            goto L73
        L64:
            if (r1 == 0) goto L7c
            r1.close()     // Catch: java.lang.Throwable -> L85
            goto L7c
        L6a:
            r1 = move-exception
            r9 = r1
            r1 = r0
            r0 = r9
            goto L7f
        L6f:
            r1 = move-exception
            r2 = r0
            r0 = r1
            r1 = r2
        L73:
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L7e
            if (r1 == 0) goto L7b
            r1.close()     // Catch: java.lang.Throwable -> L85
        L7b:
            r0 = r2
        L7c:
            monitor-exit(r10)
            return r0
        L7e:
            r0 = move-exception
        L7f:
            if (r1 == 0) goto L84
            r1.close()     // Catch: java.lang.Throwable -> L85
        L84:
            throw r0     // Catch: java.lang.Throwable -> L85
        L85:
            r0 = move-exception
            monitor-exit(r10)
            throw r0
    }
}
