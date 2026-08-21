package com.mbridge.msdk.foundation.db;

public class m extends com.mbridge.msdk.foundation.db.a<com.mbridge.msdk.foundation.entity.j> {
    private static com.mbridge.msdk.foundation.db.m a;

    static {
            return
    }

    private m(com.mbridge.msdk.foundation.db.h r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static com.mbridge.msdk.foundation.db.m a(com.mbridge.msdk.foundation.db.h r2) {
            com.mbridge.msdk.foundation.db.m r0 = com.mbridge.msdk.foundation.db.m.a
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.foundation.db.m> r0 = com.mbridge.msdk.foundation.db.m.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.db.m r1 = com.mbridge.msdk.foundation.db.m.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.foundation.db.m r1 = new com.mbridge.msdk.foundation.db.m     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.foundation.db.m.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.mbridge.msdk.foundation.db.m r2 = com.mbridge.msdk.foundation.db.m.a
            return r2
    }

    public final synchronized int a() {
            r4 = this;
            monitor-enter(r4)
            r0 = 0
            r1 = 0
            java.lang.String r2 = "select count(*) from load_stat"
            android.database.sqlite.SQLiteDatabase r3 = r4.getReadableDatabase()     // Catch: java.lang.Throwable -> L1f java.lang.Exception -> L21
            android.database.Cursor r0 = r3.rawQuery(r2, r0)     // Catch: java.lang.Throwable -> L1f java.lang.Exception -> L21
            if (r0 == 0) goto L19
            boolean r2 = r0.moveToFirst()     // Catch: java.lang.Throwable -> L1f java.lang.Exception -> L21
            if (r2 == 0) goto L19
            int r1 = r0.getInt(r1)     // Catch: java.lang.Throwable -> L1f java.lang.Exception -> L21
        L19:
            if (r0 == 0) goto L28
        L1b:
            r0.close()     // Catch: java.lang.Throwable -> L30
            goto L28
        L1f:
            r1 = move-exception
            goto L2a
        L21:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L1f
            if (r0 == 0) goto L28
            goto L1b
        L28:
            monitor-exit(r4)
            return r1
        L2a:
            if (r0 == 0) goto L2f
            r0.close()     // Catch: java.lang.Throwable -> L30
        L2f:
            throw r1     // Catch: java.lang.Throwable -> L30
        L30:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    public final synchronized java.util.List<com.mbridge.msdk.foundation.entity.j> a(int r17) {
            r16 = this;
            r0 = r17
            monitor-enter(r16)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lfa
            r1.<init>()     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r2 = "select * from load_stat LIMIT "
            r1.append(r2)     // Catch: java.lang.Throwable -> Lfa
            r1.append(r0)     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Lfa
            r2 = 0
            android.database.sqlite.SQLiteDatabase r3 = r16.getReadableDatabase()     // Catch: java.lang.Throwable -> Le5 java.lang.Exception -> Le7
            android.database.Cursor r1 = r3.rawQuery(r1, r2)     // Catch: java.lang.Throwable -> Le5 java.lang.Exception -> Le7
            if (r1 == 0) goto Ldf
            int r3 = r1.getCount()     // Catch: java.lang.Throwable -> Ld8 java.lang.Exception -> Ldb
            if (r3 <= 0) goto Ldf
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Ld8 java.lang.Exception -> Ldb
            r3.<init>()     // Catch: java.lang.Throwable -> Ld8 java.lang.Exception -> Ldb
            r2 = 0
            r4 = r2
        L2c:
            boolean r5 = r1.moveToNext()     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            if (r5 == 0) goto Ld4
            if (r4 < r0) goto L36
            goto Ld4
        L36:
            int r4 = r4 + 1
            java.lang.String r5 = "ad_source_id"
            int r5 = r1.getColumnIndex(r5)     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            int r7 = r1.getInt(r5)     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            java.lang.String r5 = "time"
            int r5 = r1.getColumnIndex(r5)     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            java.lang.String r8 = r1.getString(r5)     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            java.lang.String r5 = "adNum"
            int r5 = r1.getColumnIndex(r5)     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            int r9 = r1.getInt(r5)     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            java.lang.String r5 = "unitId"
            int r5 = r1.getColumnIndex(r5)     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            java.lang.String r10 = r1.getString(r5)     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            java.lang.String r5 = "fb"
            int r5 = r1.getColumnIndex(r5)     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            int r11 = r1.getInt(r5)     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            java.lang.String r5 = "timeout"
            int r5 = r1.getColumnIndex(r5)     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            int r12 = r1.getInt(r5)     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            java.lang.String r5 = "network_type"
            int r5 = r1.getColumnIndex(r5)     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            int r13 = r1.getInt(r5)     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            java.lang.String r5 = "network_type_str"
            int r5 = r1.getColumnIndex(r5)     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            java.lang.String r5 = r1.getString(r5)     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            java.lang.String r6 = "hb"
            int r6 = r1.getColumnIndex(r6)     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            int r14 = r1.getInt(r6)     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            com.mbridge.msdk.foundation.entity.j r15 = new com.mbridge.msdk.foundation.entity.j     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            r6 = r15
            r6.<init>(r7, r8, r9, r10, r11, r12, r13)     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            r15.c(r5)     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            r15.a(r14)     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            r3.add(r15)     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            java.lang.String r5 = "id"
            int r5 = r1.getColumnIndex(r5)     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            int r5 = r1.getInt(r5)     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            android.database.sqlite.SQLiteDatabase r6 = r16.getWritableDatabase()     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            if (r6 == 0) goto L2c
            android.database.sqlite.SQLiteDatabase r6 = r16.getWritableDatabase()     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            java.lang.String r7 = "load_stat"
            java.lang.String r8 = "id = ?"
            r9 = 1
            java.lang.String[] r9 = new java.lang.String[r9]     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            r10.<init>()     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            r10.append(r5)     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            java.lang.String r5 = ""
            r10.append(r5)     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            java.lang.String r5 = r10.toString()     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            r9[r2] = r5     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            r6.delete(r7, r8, r9)     // Catch: java.lang.Exception -> Ld6 java.lang.Throwable -> Ld8
            goto L2c
        Ld4:
            r2 = r3
            goto Ldf
        Ld6:
            r0 = move-exception
            goto Ldd
        Ld8:
            r0 = move-exception
            r2 = r1
            goto Lf4
        Ldb:
            r0 = move-exception
            r3 = r2
        Ldd:
            r2 = r1
            goto Le9
        Ldf:
            if (r1 == 0) goto Lf2
            r1.close()     // Catch: java.lang.Throwable -> Lfa
            goto Lf2
        Le5:
            r0 = move-exception
            goto Lf4
        Le7:
            r0 = move-exception
            r3 = r2
        Le9:
            r0.printStackTrace()     // Catch: java.lang.Throwable -> Le5
            if (r2 == 0) goto Lf1
            r2.close()     // Catch: java.lang.Throwable -> Lfa
        Lf1:
            r2 = r3
        Lf2:
            monitor-exit(r16)
            return r2
        Lf4:
            if (r2 == 0) goto Lf9
            r2.close()     // Catch: java.lang.Throwable -> Lfa
        Lf9:
            throw r0     // Catch: java.lang.Throwable -> Lfa
        Lfa:
            r0 = move-exception
            monitor-exit(r16)
            throw r0
    }

    public final synchronized void a(com.mbridge.msdk.foundation.entity.j r4) {
            r3 = this;
            monitor-enter(r3)
            android.database.sqlite.SQLiteDatabase r0 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L83
            if (r0 != 0) goto L9
            monitor-exit(r3)
            return
        L9:
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L83
            r0.<init>()     // Catch: java.lang.Throwable -> L83
            java.lang.String r1 = "time"
            java.lang.String r2 = r4.c()     // Catch: java.lang.Throwable -> L83
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L83
            java.lang.String r1 = "ad_source_id"
            int r2 = r4.b()     // Catch: java.lang.Throwable -> L83
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L83
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L83
            java.lang.String r1 = "adNum"
            int r2 = r4.d()     // Catch: java.lang.Throwable -> L83
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L83
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L83
            java.lang.String r1 = "unitId"
            java.lang.String r2 = r4.e()     // Catch: java.lang.Throwable -> L83
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L83
            java.lang.String r1 = "fb"
            int r2 = r4.f()     // Catch: java.lang.Throwable -> L83
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L83
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L83
            java.lang.String r1 = "hb"
            int r2 = r4.a()     // Catch: java.lang.Throwable -> L83
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L83
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L83
            java.lang.String r1 = "timeout"
            int r2 = r4.g()     // Catch: java.lang.Throwable -> L83
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L83
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L83
            java.lang.String r1 = "network_type"
            int r2 = r4.h()     // Catch: java.lang.Throwable -> L83
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L83
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L83
            java.lang.String r1 = "network_type_str"
            java.lang.String r4 = r4.i()     // Catch: java.lang.Throwable -> L83
            r0.put(r1, r4)     // Catch: java.lang.Throwable -> L83
            android.database.sqlite.SQLiteDatabase r4 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L83
            java.lang.String r1 = "load_stat"
            r2 = 0
            r4.insert(r1, r2, r0)     // Catch: java.lang.Throwable -> L83
            monitor-exit(r3)
            return
        L83:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }
}
