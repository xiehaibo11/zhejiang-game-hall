package com.mbridge.msdk.foundation.db;

public class k extends com.mbridge.msdk.foundation.db.a<com.mbridge.msdk.foundation.entity.g> {
    private static com.mbridge.msdk.foundation.db.k a;

    private k(com.mbridge.msdk.foundation.db.h r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static com.mbridge.msdk.foundation.db.k a(com.mbridge.msdk.foundation.db.h r2) {
            com.mbridge.msdk.foundation.db.k r0 = com.mbridge.msdk.foundation.db.k.a
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.foundation.db.k> r0 = com.mbridge.msdk.foundation.db.k.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.db.k r1 = com.mbridge.msdk.foundation.db.k.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.foundation.db.k r1 = new com.mbridge.msdk.foundation.db.k     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.foundation.db.k.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.mbridge.msdk.foundation.db.k r2 = com.mbridge.msdk.foundation.db.k.a
            return r2
    }

    private synchronized boolean a(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            monitor-enter(r3)
            r0 = 0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4a
            r1.<init>()     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4a
            java.lang.String r2 = "select id from fq_info where unitId='"
            r1.append(r2)     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4a
            r1.append(r4)     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4a
            java.lang.String r4 = "' and "
            r1.append(r4)     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4a
            java.lang.String r4 = "id"
            r1.append(r4)     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4a
            java.lang.String r4 = "='"
            r1.append(r4)     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4a
            r1.append(r5)     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4a
            java.lang.String r4 = "'"
            r1.append(r4)     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4a
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4a
            android.database.sqlite.SQLiteDatabase r5 = r3.getReadableDatabase()     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4a
            r1 = 0
            android.database.Cursor r4 = r5.rawQuery(r4, r1)     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4a
            if (r4 == 0) goto L41
            int r5 = r4.getCount()     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4a
            if (r5 <= 0) goto L41
            r4.close()     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4a
            r4 = 1
            monitor-exit(r3)
            return r4
        L41:
            if (r4 == 0) goto L46
            r4.close()     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4a
        L46:
            monitor-exit(r3)
            return r0
        L48:
            r4 = move-exception
            goto L50
        L4a:
            r4 = move-exception
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L48
            monitor-exit(r3)
            return r0
        L50:
            monitor-exit(r3)
            throw r4
    }

    public final synchronized void a(com.mbridge.msdk.foundation.entity.g r5) {
            r4 = this;
            monitor-enter(r4)
            android.database.sqlite.SQLiteDatabase r0 = r4.getWritableDatabase()     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            if (r0 != 0) goto L9
            monitor-exit(r4)
            return
        L9:
            if (r5 == 0) goto L90
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            r0.<init>()     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.String r1 = "id"
            java.lang.String r2 = r5.a()     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.String r1 = "time"
            long r2 = r5.d()     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.String r1 = "unitId"
            java.lang.String r2 = r5.b()     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.String r1 = "type"
            int r2 = r5.c()     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.String r1 = r5.b()     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.String r2 = r5.a()     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            boolean r1 = r4.a(r1, r2)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            r2 = 0
            if (r1 == 0) goto L80
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            r1.<init>()     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.String r3 = "id = "
            r1.append(r3)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.String r3 = r5.a()     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            r1.append(r3)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.String r3 = " AND "
            r1.append(r3)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.String r3 = "unitId"
            r1.append(r3)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.String r3 = " = "
            r1.append(r3)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.String r5 = r5.b()     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            r1.append(r5)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            android.database.sqlite.SQLiteDatabase r1 = r4.getWritableDatabase()     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.String r3 = "fq_info"
            r1.update(r3, r0, r5, r2)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            goto L90
        L80:
            android.database.sqlite.SQLiteDatabase r5 = r4.getWritableDatabase()     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.String r1 = "fq_info"
            r5.insert(r1, r2, r0)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            goto L90
        L8a:
            r5 = move-exception
            goto L92
        L8c:
            r5 = move-exception
            r5.printStackTrace()     // Catch: java.lang.Throwable -> L8a
        L90:
            monitor-exit(r4)
            return
        L92:
            monitor-exit(r4)
            throw r5
    }

    public final synchronized void a(java.lang.String r5) {
            r4 = this;
            monitor-enter(r4)
            r0 = 86400000(0x5265c00, double:4.2687272E-316)
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L51
            long r2 = r2 - r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L51
            r0.<init>()     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L51
            java.lang.String r1 = "time<"
            r0.append(r1)     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L51
            r0.append(r2)     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L51
            java.lang.String r1 = " and "
            r0.append(r1)     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L51
            java.lang.String r1 = "unitId"
            r0.append(r1)     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L51
            java.lang.String r1 = "=? and "
            r0.append(r1)     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L51
            java.lang.String r1 = "type"
            r0.append(r1)     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L51
            java.lang.String r1 = " <> "
            r0.append(r1)     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L51
            int r1 = com.mbridge.msdk.foundation.same.a.E     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L51
            r0.append(r1)     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L51
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L51
            r1 = 1
            java.lang.String[] r1 = new java.lang.String[r1]     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L51
            r2 = 0
            r1[r2] = r5     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L51
            android.database.sqlite.SQLiteDatabase r5 = r4.getWritableDatabase()     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L51
            if (r5 == 0) goto L51
            android.database.sqlite.SQLiteDatabase r5 = r4.getWritableDatabase()     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L51
            java.lang.String r2 = "fq_info"
            r5.delete(r2, r0, r1)     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L51
            goto L51
        L4e:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
        L51:
            monitor-exit(r4)
            return
    }
}
