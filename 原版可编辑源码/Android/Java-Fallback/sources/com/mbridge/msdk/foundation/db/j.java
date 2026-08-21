package com.mbridge.msdk.foundation.db;

public class j extends com.mbridge.msdk.foundation.db.a<com.mbridge.msdk.out.Campaign> {
    private static final java.lang.String a = null;
    private static com.mbridge.msdk.foundation.db.j b;

    static {
            java.lang.Class<com.mbridge.msdk.foundation.db.j> r0 = com.mbridge.msdk.foundation.db.j.class
            java.lang.String r0 = r0.getName()
            com.mbridge.msdk.foundation.db.j.a = r0
            r0 = 0
            com.mbridge.msdk.foundation.db.j.b = r0
            return
    }

    private j(com.mbridge.msdk.foundation.db.h r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static com.mbridge.msdk.foundation.db.j a(com.mbridge.msdk.foundation.db.h r2) {
            com.mbridge.msdk.foundation.db.j r0 = com.mbridge.msdk.foundation.db.j.b
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.foundation.db.j> r0 = com.mbridge.msdk.foundation.db.j.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.db.j r1 = com.mbridge.msdk.foundation.db.j.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.foundation.db.j r1 = new com.mbridge.msdk.foundation.db.j     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.foundation.db.j.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.mbridge.msdk.foundation.db.j r2 = com.mbridge.msdk.foundation.db.j.b
            return r2
    }

    private synchronized void b(java.lang.String r5) {
            r4 = this;
            monitor-enter(r4)
            android.database.sqlite.SQLiteDatabase r0 = r4.getWritableDatabase()     // Catch: java.lang.Throwable -> L42
            if (r0 != 0) goto L9
            monitor-exit(r4)
            return
        L9:
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L42
            r0.<init>()     // Catch: java.lang.Throwable -> L42
            java.lang.String r1 = "first_insert_timestamp"
            r2 = 0
            java.lang.Integer r3 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L42
            r0.put(r1, r3)     // Catch: java.lang.Throwable -> L42
            java.lang.String r1 = "play_time"
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L42
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L42
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L42
            r1.<init>()     // Catch: java.lang.Throwable -> L42
            java.lang.String r2 = "unit_id = '"
            r1.append(r2)     // Catch: java.lang.Throwable -> L42
            r1.append(r5)     // Catch: java.lang.Throwable -> L42
            java.lang.String r5 = "'"
            r1.append(r5)     // Catch: java.lang.Throwable -> L42
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L42
            android.database.sqlite.SQLiteDatabase r1 = r4.getWritableDatabase()     // Catch: java.lang.Throwable -> L42
            java.lang.String r2 = "dailyplaycap"
            r3 = 0
            r1.update(r2, r0, r5, r3)     // Catch: java.lang.Throwable -> L42
            goto L49
        L42:
            java.lang.String r5 = com.mbridge.msdk.foundation.db.j.a     // Catch: java.lang.Throwable -> L4b
            java.lang.String r0 = "resetTimeAndTimestamp error"
            com.mbridge.msdk.foundation.tools.z.b(r5, r0)     // Catch: java.lang.Throwable -> L4b
        L49:
            monitor-exit(r4)
            return
        L4b:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    private synchronized boolean c(java.lang.String r4) {
            r3 = this;
            monitor-enter(r3)
            r0 = 0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L36
            r1.<init>()     // Catch: java.lang.Throwable -> L36
            java.lang.String r2 = "SELECT play_time FROM dailyplaycap WHERE unit_id='"
            r1.append(r2)     // Catch: java.lang.Throwable -> L36
            r1.append(r4)     // Catch: java.lang.Throwable -> L36
            java.lang.String r4 = "'"
            r1.append(r4)     // Catch: java.lang.Throwable -> L36
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L36
            android.database.sqlite.SQLiteDatabase r1 = r3.getReadableDatabase()     // Catch: java.lang.Throwable -> L36
            r2 = 0
            android.database.Cursor r4 = r1.rawQuery(r4, r2)     // Catch: java.lang.Throwable -> L36
            if (r4 == 0) goto L2f
            int r1 = r4.getCount()     // Catch: java.lang.Throwable -> L36
            if (r1 <= 0) goto L2f
            r4.close()     // Catch: java.lang.Throwable -> L36
            r4 = 1
            monitor-exit(r3)
            return r4
        L2f:
            if (r4 == 0) goto L34
            r4.close()     // Catch: java.lang.Throwable -> L36
        L34:
            monitor-exit(r3)
            return r0
        L36:
            monitor-exit(r3)
            return r0
    }

    public final synchronized void a(java.lang.String r17) {
            r16 = this;
            r0 = r17
            monitor-enter(r16)
            r1 = 0
            android.database.sqlite.SQLiteDatabase r2 = r16.getWritableDatabase()     // Catch: java.lang.Throwable -> Ld2 java.lang.Exception -> Ld4
            if (r2 != 0) goto Lc
            monitor-exit(r16)
            return
        Lc:
            android.content.ContentValues r2 = new android.content.ContentValues     // Catch: java.lang.Throwable -> Ld2 java.lang.Exception -> Ld4
            r2.<init>()     // Catch: java.lang.Throwable -> Ld2 java.lang.Exception -> Ld4
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Ld2 java.lang.Exception -> Ld4
            boolean r5 = r16.c(r17)     // Catch: java.lang.Throwable -> Ld2 java.lang.Exception -> Ld4
            r6 = 1
            if (r5 == 0) goto Lac
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld2 java.lang.Exception -> Ld4
            r5.<init>()     // Catch: java.lang.Throwable -> Ld2 java.lang.Exception -> Ld4
            java.lang.String r8 = "SELECT * FROM dailyplaycap where unit_id ='"
            r5.append(r8)     // Catch: java.lang.Throwable -> Ld2 java.lang.Exception -> Ld4
            r5.append(r0)     // Catch: java.lang.Throwable -> Ld2 java.lang.Exception -> Ld4
            java.lang.String r8 = "'"
            r5.append(r8)     // Catch: java.lang.Throwable -> Ld2 java.lang.Exception -> Ld4
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> Ld2 java.lang.Exception -> Ld4
            android.database.sqlite.SQLiteDatabase r8 = r16.getReadableDatabase()     // Catch: java.lang.Throwable -> Ld2 java.lang.Exception -> Ld4
            android.database.Cursor r5 = r8.rawQuery(r5, r1)     // Catch: java.lang.Throwable -> Ld2 java.lang.Exception -> Ld4
            r8 = 0
            if (r5 == 0) goto L72
            int r10 = r5.getCount()     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L6f
            if (r10 <= 0) goto L72
            r5.moveToFirst()     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L6f
            java.lang.String r10 = "first_insert_timestamp"
            int r10 = r5.getColumnIndex(r10)     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L6f
            long r10 = r5.getLong(r10)     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L6f
            java.lang.String r12 = "play_time"
            int r12 = r5.getColumnIndex(r12)     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L6f
            int r12 = r5.getInt(r12)     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L6f
            long r12 = (long) r12     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L6f
            r14 = 86400000(0x5265c00, double:4.2687272E-316)
            long r14 = r3 - r14
            int r14 = (r14 > r10 ? 1 : (r14 == r10 ? 0 : -1))
            if (r14 <= 0) goto L74
            r16.b(r17)     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L6f
            r12 = r8
            goto L74
        L6b:
            r0 = move-exception
            r1 = r5
            goto Ldd
        L6f:
            r0 = move-exception
            r1 = r5
            goto Ld5
        L72:
            r10 = r8
            r12 = r10
        L74:
            int r8 = (r10 > r8 ? 1 : (r10 == r8 ? 0 : -1))
            if (r8 != 0) goto L81
            java.lang.String r8 = "first_insert_timestamp"
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L6f
            r2.put(r8, r3)     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L6f
        L81:
            java.lang.String r3 = "play_time"
            long r12 = r12 + r6
            java.lang.Long r4 = java.lang.Long.valueOf(r12)     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L6f
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L6f
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L6f
            r3.<init>()     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L6f
            java.lang.String r4 = "unit_id = '"
            r3.append(r4)     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L6f
            r3.append(r0)     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L6f
            java.lang.String r0 = "'"
            r3.append(r0)     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L6f
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L6f
            android.database.sqlite.SQLiteDatabase r3 = r16.getWritableDatabase()     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L6f
            java.lang.String r4 = "dailyplaycap"
            r3.update(r4, r2, r0, r1)     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L6f
            r1 = r5
            goto Lcc
        Lac:
            java.lang.String r5 = "first_insert_timestamp"
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> Ld2 java.lang.Exception -> Ld4
            r2.put(r5, r3)     // Catch: java.lang.Throwable -> Ld2 java.lang.Exception -> Ld4
            java.lang.String r3 = "play_time"
            java.lang.Long r4 = java.lang.Long.valueOf(r6)     // Catch: java.lang.Throwable -> Ld2 java.lang.Exception -> Ld4
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> Ld2 java.lang.Exception -> Ld4
            java.lang.String r3 = "unit_id"
            r2.put(r3, r0)     // Catch: java.lang.Throwable -> Ld2 java.lang.Exception -> Ld4
            android.database.sqlite.SQLiteDatabase r0 = r16.getWritableDatabase()     // Catch: java.lang.Throwable -> Ld2 java.lang.Exception -> Ld4
            java.lang.String r3 = "dailyplaycap"
            r0.insert(r3, r1, r2)     // Catch: java.lang.Throwable -> Ld2 java.lang.Exception -> Ld4
        Lcc:
            if (r1 == 0) goto Ldb
        Lce:
            r1.close()     // Catch: java.lang.Throwable -> Ldb
            goto Ldb
        Ld2:
            r0 = move-exception
            goto Ldd
        Ld4:
            r0 = move-exception
        Ld5:
            r0.printStackTrace()     // Catch: java.lang.Throwable -> Ld2
            if (r1 == 0) goto Ldb
            goto Lce
        Ldb:
            monitor-exit(r16)
            return
        Ldd:
            if (r1 == 0) goto Le2
            r1.close()     // Catch: java.lang.Throwable -> Le2
        Le2:
            throw r0     // Catch: java.lang.Throwable -> Le3
        Le3:
            r0 = move-exception
            r1 = r0
            monitor-exit(r16)
            throw r1
    }

    public final boolean a(java.lang.String r11, int r12) {
            r10 = this;
            r0 = 0
            r1 = 0
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L68
            r2.<init>()     // Catch: java.lang.Throwable -> L68
            java.lang.String r3 = "SELECT * FROM dailyplaycap where unit_id ='"
            r2.append(r3)     // Catch: java.lang.Throwable -> L68
            r2.append(r11)     // Catch: java.lang.Throwable -> L68
            java.lang.String r3 = "'"
            r2.append(r3)     // Catch: java.lang.Throwable -> L68
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L68
            android.database.sqlite.SQLiteDatabase r3 = r10.getReadableDatabase()     // Catch: java.lang.Throwable -> L68
            android.database.Cursor r0 = r3.rawQuery(r2, r0)     // Catch: java.lang.Throwable -> L68
            if (r0 == 0) goto L62
            int r2 = r0.getCount()     // Catch: java.lang.Throwable -> L68
            if (r2 <= 0) goto L62
            boolean r2 = r0.moveToFirst()     // Catch: java.lang.Throwable -> L68
            if (r2 == 0) goto L62
            java.lang.String r2 = "first_insert_timestamp"
            int r2 = r0.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L68
            long r2 = r0.getLong(r2)     // Catch: java.lang.Throwable -> L68
            java.lang.String r4 = "play_time"
            int r4 = r0.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L68
            int r4 = r0.getInt(r4)     // Catch: java.lang.Throwable -> L68
            long r4 = (long) r4     // Catch: java.lang.Throwable -> L68
            r6 = 0
            int r6 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r6 == 0) goto L62
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L68
            r8 = 86400000(0x5265c00, double:4.2687272E-316)
            long r6 = r6 - r8
            int r2 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r2 <= 0) goto L59
            r10.b(r11)     // Catch: java.lang.Throwable -> L68
            goto L62
        L59:
            if (r12 <= 0) goto L62
            long r11 = (long) r12
            int r11 = (r4 > r11 ? 1 : (r4 == r11 ? 0 : -1))
            if (r11 < 0) goto L62
            r11 = 1
            r1 = r11
        L62:
            if (r0 == 0) goto L82
        L64:
            r0.close()     // Catch: java.lang.Throwable -> L82
            goto L82
        L68:
            r11 = move-exception
            java.lang.String r12 = com.mbridge.msdk.foundation.db.j.a     // Catch: java.lang.Throwable -> L83
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L83
            r2.<init>()     // Catch: java.lang.Throwable -> L83
            java.lang.String r3 = "isOverCap is error"
            r2.append(r3)     // Catch: java.lang.Throwable -> L83
            r2.append(r11)     // Catch: java.lang.Throwable -> L83
            java.lang.String r11 = r2.toString()     // Catch: java.lang.Throwable -> L83
            com.mbridge.msdk.foundation.tools.z.b(r12, r11)     // Catch: java.lang.Throwable -> L83
            if (r0 == 0) goto L82
            goto L64
        L82:
            return r1
        L83:
            r11 = move-exception
            if (r0 == 0) goto L89
            r0.close()     // Catch: java.lang.Throwable -> L89
        L89:
            throw r11
    }
}
