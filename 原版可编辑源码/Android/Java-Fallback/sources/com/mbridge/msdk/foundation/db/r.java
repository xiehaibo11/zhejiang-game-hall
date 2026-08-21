package com.mbridge.msdk.foundation.db;

public class r extends com.mbridge.msdk.foundation.db.a<com.mbridge.msdk.foundation.entity.j> {
    private static com.mbridge.msdk.foundation.db.r a;

    static {
            return
    }

    private r(com.mbridge.msdk.foundation.db.h r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static com.mbridge.msdk.foundation.db.r a(com.mbridge.msdk.foundation.db.h r2) {
            com.mbridge.msdk.foundation.db.r r0 = com.mbridge.msdk.foundation.db.r.a
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.foundation.db.r> r0 = com.mbridge.msdk.foundation.db.r.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.db.r r1 = com.mbridge.msdk.foundation.db.r.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.foundation.db.r r1 = new com.mbridge.msdk.foundation.db.r     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.foundation.db.r.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.mbridge.msdk.foundation.db.r r2 = com.mbridge.msdk.foundation.db.r.a
            return r2
    }

    public final synchronized java.util.List<com.mbridge.msdk.foundation.entity.k> a(int r6) {
            r5 = this;
            monitor-enter(r5)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L75
            r0.<init>()     // Catch: java.lang.Throwable -> L75
            java.lang.String r1 = "select * from unit_id WHERE ad_type = "
            r0.append(r1)     // Catch: java.lang.Throwable -> L75
            r0.append(r6)     // Catch: java.lang.Throwable -> L75
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L75
            r1 = 0
            android.database.sqlite.SQLiteDatabase r2 = r5.getReadableDatabase()     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L62
            android.database.Cursor r0 = r2.rawQuery(r0, r1)     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L62
            if (r0 == 0) goto L5a
            int r2 = r0.getCount()     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L56
            if (r2 <= 0) goto L5a
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L56
            int r3 = r0.getCount()     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L56
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L56
        L2c:
            boolean r1 = r0.moveToNext()     // Catch: java.lang.Exception -> L51 java.lang.Throwable -> L53
            if (r1 == 0) goto L4f
            java.lang.String r1 = "placement_id"
            int r1 = r0.getColumnIndex(r1)     // Catch: java.lang.Exception -> L51 java.lang.Throwable -> L53
            java.lang.String r1 = r0.getString(r1)     // Catch: java.lang.Exception -> L51 java.lang.Throwable -> L53
            java.lang.String r3 = "unitId"
            int r3 = r0.getColumnIndex(r3)     // Catch: java.lang.Exception -> L51 java.lang.Throwable -> L53
            java.lang.String r3 = r0.getString(r3)     // Catch: java.lang.Exception -> L51 java.lang.Throwable -> L53
            com.mbridge.msdk.foundation.entity.k r4 = new com.mbridge.msdk.foundation.entity.k     // Catch: java.lang.Exception -> L51 java.lang.Throwable -> L53
            r4.<init>(r1, r3, r6)     // Catch: java.lang.Exception -> L51 java.lang.Throwable -> L53
            r2.add(r4)     // Catch: java.lang.Exception -> L51 java.lang.Throwable -> L53
            goto L2c
        L4f:
            r1 = r2
            goto L5a
        L51:
            r6 = move-exception
            goto L58
        L53:
            r6 = move-exception
            r1 = r0
            goto L6f
        L56:
            r6 = move-exception
            r2 = r1
        L58:
            r1 = r0
            goto L64
        L5a:
            if (r0 == 0) goto L6d
            r0.close()     // Catch: java.lang.Exception -> L6d java.lang.Throwable -> L75
            goto L6d
        L60:
            r6 = move-exception
            goto L6f
        L62:
            r6 = move-exception
            r2 = r1
        L64:
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L60
            if (r1 == 0) goto L6c
            r1.close()     // Catch: java.lang.Exception -> L6c java.lang.Throwable -> L75
        L6c:
            r1 = r2
        L6d:
            monitor-exit(r5)
            return r1
        L6f:
            if (r1 == 0) goto L74
            r1.close()     // Catch: java.lang.Exception -> L74 java.lang.Throwable -> L75
        L74:
            throw r6     // Catch: java.lang.Throwable -> L75
        L75:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public final synchronized void a(java.lang.String r7) {
            r6 = this;
            monitor-enter(r6)
            android.database.sqlite.SQLiteDatabase r0 = r6.getWritableDatabase()     // Catch: java.lang.Throwable -> L2b
            if (r0 == 0) goto L29
            android.database.sqlite.SQLiteDatabase r0 = r6.getWritableDatabase()     // Catch: java.lang.Throwable -> L2b
            java.lang.String r1 = "unit_id"
            java.lang.String r2 = "unitId = ?"
            r3 = 1
            java.lang.String[] r3 = new java.lang.String[r3]     // Catch: java.lang.Throwable -> L2b
            r4 = 0
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2b
            r5.<init>()     // Catch: java.lang.Throwable -> L2b
            r5.append(r7)     // Catch: java.lang.Throwable -> L2b
            java.lang.String r7 = ""
            r5.append(r7)     // Catch: java.lang.Throwable -> L2b
            java.lang.String r7 = r5.toString()     // Catch: java.lang.Throwable -> L2b
            r3[r4] = r7     // Catch: java.lang.Throwable -> L2b
            r0.delete(r1, r2, r3)     // Catch: java.lang.Throwable -> L2b
        L29:
            monitor-exit(r6)
            return
        L2b:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    public final synchronized void a(java.lang.String r3, java.lang.String r4, int r5) {
            r2 = this;
            monitor-enter(r2)
            android.database.sqlite.SQLiteDatabase r0 = r2.getWritableDatabase()     // Catch: java.lang.Throwable -> L2d
            if (r0 != 0) goto L9
            monitor-exit(r2)
            return
        L9:
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L2d
            r0.<init>()     // Catch: java.lang.Throwable -> L2d
            java.lang.String r1 = "placement_id"
            r0.put(r1, r3)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r3 = "unitId"
            r0.put(r3, r4)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r3 = "ad_type"
            java.lang.Integer r4 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L2d
            r0.put(r3, r4)     // Catch: java.lang.Throwable -> L2d
            android.database.sqlite.SQLiteDatabase r3 = r2.getWritableDatabase()     // Catch: java.lang.Throwable -> L2d
            java.lang.String r4 = "unit_id"
            r5 = 0
            r3.insert(r4, r5, r0)     // Catch: java.lang.Throwable -> L2d
            monitor-exit(r2)
            return
        L2d:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }
}
