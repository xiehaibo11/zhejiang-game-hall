package com.tkay.basead.b;

public final class c {
    private static com.tkay.basead.b.c a;
    private android.content.Context b;

    public static class a {
        public static final java.lang.String a = "my_offer_cap_pacing";
        public static final java.lang.String b = "offer_id";
        public static final java.lang.String c = "offer_cap";
        public static final java.lang.String d = "offer_pacing";
        public static final java.lang.String e = "show_num";
        public static final java.lang.String f = "show_time";
        public static final java.lang.String g = "record_date";
        public static final java.lang.String h = "CREATE TABLE IF NOT EXISTS my_offer_cap_pacing (offer_id TEXT,offer_cap INTEGER,offer_pacing INTEGER,show_num INTEGER,show_time INTEGER,record_date INTEGER )";

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    private c(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            return
    }

    public static com.tkay.basead.b.c a(android.content.Context r1) {
            com.tkay.basead.b.c r0 = com.tkay.basead.b.c.a
            if (r0 != 0) goto Lb
            com.tkay.basead.b.c r0 = new com.tkay.basead.b.c
            r0.<init>(r1)
            com.tkay.basead.b.c.a = r0
        Lb:
            com.tkay.basead.b.c r1 = com.tkay.basead.b.c.a
            return r1
    }

    private static com.tkay.basead.c.c a(android.database.Cursor r3) {
            com.tkay.basead.c.c r0 = new com.tkay.basead.c.c
            r0.<init>()
            java.lang.String r1 = "offer_id"
            int r1 = r3.getColumnIndex(r1)
            java.lang.String r1 = r3.getString(r1)
            r0.a = r1
            java.lang.String r1 = "show_num"
            int r1 = r3.getColumnIndex(r1)
            int r1 = r3.getInt(r1)
            r0.d = r1
            java.lang.String r1 = "show_time"
            int r1 = r3.getColumnIndex(r1)
            long r1 = r3.getLong(r1)
            r0.e = r1
            java.lang.String r1 = "record_date"
            int r1 = r3.getColumnIndex(r1)
            java.lang.String r1 = r3.getString(r1)
            r0.f = r1
            java.lang.String r1 = "offer_cap"
            int r1 = r3.getColumnIndex(r1)
            int r1 = r3.getInt(r1)
            r0.b = r1
            java.lang.String r1 = "offer_pacing"
            int r1 = r3.getColumnIndex(r1)
            long r1 = r3.getLong(r1)
            r0.c = r1
            return r0
    }

    private synchronized boolean d(java.lang.String r11) {
            r10 = this;
            monitor-enter(r10)
            android.content.Context r0 = r10.b     // Catch: java.lang.Throwable -> L36
            com.tkay.basead.b.b r0 = com.tkay.basead.b.b.a(r0)     // Catch: java.lang.Throwable -> L36
            android.database.sqlite.SQLiteDatabase r1 = r0.getReadableDatabase()     // Catch: java.lang.Throwable -> L36
            java.lang.String r2 = "my_offer_cap_pacing"
            java.lang.String r0 = "offer_id"
            java.lang.String[] r3 = new java.lang.String[]{r0}     // Catch: java.lang.Throwable -> L36
            java.lang.String r4 = "offer_id=?"
            r0 = 1
            java.lang.String[] r5 = new java.lang.String[r0]     // Catch: java.lang.Throwable -> L36
            r9 = 0
            r5[r9] = r11     // Catch: java.lang.Throwable -> L36
            r6 = 0
            r7 = 0
            r8 = 0
            android.database.Cursor r11 = r1.query(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L36
            if (r11 == 0) goto L2f
            int r1 = r11.getCount()     // Catch: java.lang.Throwable -> L36
            if (r1 <= 0) goto L2f
            r11.close()     // Catch: java.lang.Throwable -> L36
            monitor-exit(r10)
            return r0
        L2f:
            if (r11 == 0) goto L34
            r11.close()     // Catch: java.lang.Throwable -> L36
        L34:
            monitor-exit(r10)
            return r9
        L36:
            r11 = move-exception
            monitor-exit(r10)
            throw r11
    }

    public final synchronized long a(com.tkay.basead.c.c r7) {
            r6 = this;
            monitor-enter(r6)
            monitor-enter(r6)     // Catch: java.lang.Throwable -> La9
            if (r7 != 0) goto L9
            r0 = 0
            monitor-exit(r6)     // Catch: java.lang.Throwable -> La9
            monitor-exit(r6)
            return r0
        L9:
            r0 = -1
            android.content.Context r2 = r6.b     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            com.tkay.basead.b.b r2 = com.tkay.basead.b.b.a(r2)     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            android.database.sqlite.SQLiteDatabase r2 = r2.getWritableDatabase()     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            if (r2 != 0) goto L1a
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L9e
            monitor-exit(r6)
            return r0
        L1a:
            android.content.ContentValues r2 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            r2.<init>()     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            java.lang.String r3 = "offer_id"
            java.lang.String r4 = r7.a     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            java.lang.String r3 = "show_num"
            int r4 = r7.d     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            java.lang.String r3 = "show_time"
            long r4 = r7.e     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            java.lang.String r3 = "record_date"
            java.lang.String r4 = r7.f     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            java.lang.String r3 = "offer_cap"
            int r4 = r7.b     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            java.lang.String r3 = "offer_pacing"
            long r4 = r7.c     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            java.lang.String r3 = r7.a     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            boolean r3 = r6.d(r3)     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            r4 = 0
            if (r3 == 0) goto L8b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            java.lang.String r5 = "offer_id = '"
            r3.<init>(r5)     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            java.lang.String r7 = r7.a     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            r3.append(r7)     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            java.lang.String r7 = "'"
            r3.append(r7)     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            java.lang.String r7 = r3.toString()     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            android.content.Context r3 = r6.b     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            com.tkay.basead.b.b r3 = com.tkay.basead.b.b.a(r3)     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            android.database.sqlite.SQLiteDatabase r3 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            java.lang.String r5 = "my_offer_cap_pacing"
            int r7 = r3.update(r5, r2, r7, r4)     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            long r0 = (long) r7
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L9e
            monitor-exit(r6)
            return r0
        L8b:
            android.content.Context r7 = r6.b     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            com.tkay.basead.b.b r7 = com.tkay.basead.b.b.a(r7)     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            android.database.sqlite.SQLiteDatabase r7 = r7.getWritableDatabase()     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            java.lang.String r3 = "my_offer_cap_pacing"
            long r0 = r7.insert(r3, r4, r2)     // Catch: java.lang.Throwable -> L9e java.lang.Exception -> La0
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L9e
            monitor-exit(r6)
            return r0
        L9e:
            r7 = move-exception
            goto La7
        La0:
            r7 = move-exception
            r7.printStackTrace()     // Catch: java.lang.Throwable -> L9e
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L9e
            monitor-exit(r6)
            return r0
        La7:
            monitor-exit(r6)     // Catch: java.lang.Throwable -> La9
            throw r7     // Catch: java.lang.Throwable -> La9
        La9:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    public final synchronized com.tkay.basead.c.c a(java.lang.String r11) {
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
    }

    public final synchronized java.util.List<com.tkay.basead.c.c> b(java.lang.String r11) {
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
    }

    public final synchronized void c(java.lang.String r4) {
            r3 = this;
            monitor-enter(r3)
            monitor-enter(r3)     // Catch: java.lang.Throwable -> L3c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            java.lang.String r1 = "record_date != '"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            r0.append(r4)     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            java.lang.String r4 = "'"
            r0.append(r4)     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            android.content.Context r0 = r3.b     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            com.tkay.basead.b.b r0 = com.tkay.basead.b.b.a(r0)     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            android.database.sqlite.SQLiteDatabase r0 = r0.getWritableDatabase()     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            if (r0 != 0) goto L24
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L35
            monitor-exit(r3)
            return
        L24:
            android.content.Context r0 = r3.b     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            com.tkay.basead.b.b r0 = com.tkay.basead.b.b.a(r0)     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            android.database.sqlite.SQLiteDatabase r0 = r0.getWritableDatabase()     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            java.lang.String r1 = "my_offer_cap_pacing"
            r2 = 0
            r0.delete(r1, r4, r2)     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            goto L37
        L35:
            r4 = move-exception
            goto L3a
        L37:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L35
            monitor-exit(r3)
            return
        L3a:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L3c
            throw r4     // Catch: java.lang.Throwable -> L3c
        L3c:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }
}
