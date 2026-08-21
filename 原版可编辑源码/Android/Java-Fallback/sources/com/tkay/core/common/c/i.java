package com.tkay.core.common.c;

public class i extends com.tkay.core.common.c.a<com.tkay.core.common.c.i> {
    private static final java.lang.String b = null;
    private static com.tkay.core.common.c.i c;

    public static class a {
        public java.util.List<com.tkay.core.common.f.v> a;
        public java.util.Map<java.lang.String, com.tkay.core.common.f.v> b;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class b {
        public static final java.lang.String a = "notice_url_fail_info";
        public static final java.lang.String b = "id";
        public static final java.lang.String c = "req_type";
        public static final java.lang.String d = "req_url";
        public static final java.lang.String e = "req_head";
        public static final java.lang.String f = "first_fail_time";
        public static final java.lang.String g = "offer_out_date_time";
        public static final java.lang.String h = "retry_count";
        public static final java.lang.String i = "CREATE TABLE IF NOT EXISTS notice_url_fail_info(id TEXT, req_type INTEGER, req_url TEXT, req_head TEXT, first_fail_time INTEGER, offer_out_date_time INTEGER, retry_count INTEGER )";

        public b() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            java.lang.Class<com.tkay.core.common.c.i> r0 = com.tkay.core.common.c.i.class
            java.lang.String r0 = r0.getName()
            com.tkay.core.common.c.i.b = r0
            return
    }

    private i(com.tkay.core.common.c.b r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static com.tkay.core.common.c.i a(com.tkay.core.common.c.b r2) {
            com.tkay.core.common.c.i r0 = com.tkay.core.common.c.i.c
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.c.i> r0 = com.tkay.core.common.c.i.class
            monitor-enter(r0)
            com.tkay.core.common.c.i r1 = com.tkay.core.common.c.i.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.c.i r1 = new com.tkay.core.common.c.i     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.c.i.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tkay.core.common.c.i r2 = com.tkay.core.common.c.i.c
            return r2
    }

    private boolean a(java.lang.String r11) {
            r10 = this;
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r10.a()     // Catch: java.lang.Throwable -> L30
            java.lang.String r2 = "notice_url_fail_info"
            java.lang.String r3 = "id"
            java.lang.String[] r3 = new java.lang.String[]{r3}     // Catch: java.lang.Throwable -> L30
            java.lang.String r4 = "id=?"
            r9 = 1
            java.lang.String[] r5 = new java.lang.String[r9]     // Catch: java.lang.Throwable -> L30
            r5[r0] = r11     // Catch: java.lang.Throwable -> L30
            java.lang.String r6 = "id"
            r7 = 0
            r8 = 0
            android.database.Cursor r11 = r1.query(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L30
            if (r11 == 0) goto L2d
            int r1 = r11.getCount()     // Catch: java.lang.Throwable -> L31
            if (r1 <= 0) goto L2d
            r11.close()     // Catch: java.lang.Throwable -> L31
            if (r11 == 0) goto L2c
            r11.close()
        L2c:
            return r9
        L2d:
            if (r11 == 0) goto L36
            goto L33
        L30:
            r11 = 0
        L31:
            if (r11 == 0) goto L36
        L33:
            r11.close()
        L36:
            return r0
    }

    private synchronized void d() {
            r3 = this;
            monitor-enter(r3)
            android.database.sqlite.SQLiteDatabase r0 = r3.b()     // Catch: java.lang.Throwable -> L15 java.lang.Exception -> L18
            if (r0 != 0) goto L9
            monitor-exit(r3)
            return
        L9:
            android.database.sqlite.SQLiteDatabase r0 = r3.b()     // Catch: java.lang.Throwable -> L15 java.lang.Exception -> L18
            java.lang.String r1 = "notice_url_fail_info"
            r2 = 0
            r0.delete(r1, r2, r2)     // Catch: java.lang.Throwable -> L15 java.lang.Exception -> L18
            monitor-exit(r3)
            return
        L15:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
        L18:
            monitor-exit(r3)
            return
    }

    public final synchronized long a(com.tkay.core.common.f.v r9) {
            r8 = this;
            monitor-enter(r8)
            android.database.sqlite.SQLiteDatabase r0 = r8.b()     // Catch: java.lang.Throwable -> L82
            r1 = -1
            if (r0 == 0) goto L80
            if (r9 != 0) goto Lc
            goto L80
        Lc:
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            r0.<init>()     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            java.lang.String r3 = "id"
            java.lang.String r4 = r9.a     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            java.lang.String r3 = "req_type"
            int r4 = r9.b     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            java.lang.String r3 = "req_url"
            java.lang.String r4 = r9.d     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            java.lang.String r3 = "req_head"
            java.lang.String r4 = r9.c     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            java.lang.String r3 = "first_fail_time"
            long r4 = r9.e     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            java.lang.String r3 = "offer_out_date_time"
            long r4 = r9.f     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            java.lang.String r3 = "retry_count"
            int r4 = r9.g     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            java.lang.String r3 = r9.a     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            boolean r3 = r8.a(r3)     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            if (r3 == 0) goto L71
            java.lang.String r3 = "id = ? "
            android.database.sqlite.SQLiteDatabase r4 = r8.b()     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            java.lang.String r5 = "notice_url_fail_info"
            r6 = 1
            java.lang.String[] r6 = new java.lang.String[r6]     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            r7 = 0
            java.lang.String r9 = r9.a     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            r6[r7] = r9     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            int r9 = r4.update(r5, r0, r3, r6)     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            long r0 = (long) r9
            monitor-exit(r8)
            return r0
        L71:
            android.database.sqlite.SQLiteDatabase r9 = r8.b()     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            java.lang.String r3 = "notice_url_fail_info"
            r4 = 0
            long r0 = r9.insert(r3, r4, r0)     // Catch: java.lang.Exception -> L7e java.lang.Throwable -> L82
            monitor-exit(r8)
            return r0
        L7e:
            monitor-exit(r8)
            return r1
        L80:
            monitor-exit(r8)
            return r1
        L82:
            r9 = move-exception
            monitor-exit(r8)
            throw r9
    }

    public final synchronized int b(com.tkay.core.common.f.v r7) {
            r6 = this;
            monitor-enter(r6)
            android.database.sqlite.SQLiteDatabase r0 = r6.b()     // Catch: java.lang.Throwable -> L25
            r1 = -1
            if (r0 == 0) goto L23
            if (r7 != 0) goto Lb
            goto L23
        Lb:
            android.database.sqlite.SQLiteDatabase r0 = r6.b()     // Catch: java.lang.Throwable -> L21
            java.lang.String r2 = "notice_url_fail_info"
            java.lang.String r3 = "id=?"
            r4 = 1
            java.lang.String[] r4 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> L21
            r5 = 0
            java.lang.String r7 = r7.a     // Catch: java.lang.Throwable -> L21
            r4[r5] = r7     // Catch: java.lang.Throwable -> L21
            int r7 = r0.delete(r2, r3, r4)     // Catch: java.lang.Throwable -> L21
            monitor-exit(r6)
            return r7
        L21:
            monitor-exit(r6)
            return r1
        L23:
            monitor-exit(r6)
            return r1
        L25:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    public final synchronized com.tkay.core.common.c.i.a c() {
            r12 = this;
            monitor-enter(r12)
            com.tkay.core.common.c.i$a r0 = new com.tkay.core.common.c.i$a     // Catch: java.lang.Throwable -> Lfd
            r0.<init>()     // Catch: java.lang.Throwable -> Lfd
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Lfd
            r2 = 8
            r1.<init>(r2)     // Catch: java.lang.Throwable -> Lfd
            java.util.List r1 = java.util.Collections.synchronizedList(r1)     // Catch: java.lang.Throwable -> Lfd
            java.util.concurrent.ConcurrentHashMap r3 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> Lfd
            r3.<init>(r2)     // Catch: java.lang.Throwable -> Lfd
            r0.a = r1     // Catch: java.lang.Throwable -> Lfd
            r0.b = r3     // Catch: java.lang.Throwable -> Lfd
            r2 = 0
            android.database.sqlite.SQLiteDatabase r4 = r12.a()     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            java.lang.String r5 = "notice_url_fail_info"
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            r10 = 0
            java.lang.String r11 = "first_fail_time"
            android.database.Cursor r2 = r4.query(r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            if (r2 == 0) goto Le2
            int r4 = r2.getCount()     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            if (r4 <= 0) goto Le2
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            r5 = 4
            r4.<init>(r5)     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
        L3a:
            boolean r5 = r2.moveToNext()     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            if (r5 == 0) goto Lb0
            com.tkay.core.common.f.v r5 = new com.tkay.core.common.f.v     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            r5.<init>()     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            java.lang.String r6 = "id"
            int r6 = r2.getColumnIndex(r6)     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            java.lang.String r6 = r2.getString(r6)     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            r5.a = r6     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            java.lang.String r6 = "req_type"
            int r6 = r2.getColumnIndex(r6)     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            int r6 = r2.getInt(r6)     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            r5.b = r6     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            java.lang.String r6 = "req_url"
            int r6 = r2.getColumnIndex(r6)     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            java.lang.String r6 = r2.getString(r6)     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            r5.d = r6     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            java.lang.String r6 = "req_head"
            int r6 = r2.getColumnIndex(r6)     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            java.lang.String r6 = r2.getString(r6)     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            r5.c = r6     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            java.lang.String r6 = "first_fail_time"
            int r6 = r2.getColumnIndex(r6)     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            long r6 = r2.getLong(r6)     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            r5.e = r6     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            java.lang.String r6 = "offer_out_date_time"
            int r6 = r2.getColumnIndex(r6)     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            long r6 = r2.getLong(r6)     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            r5.f = r6     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            java.lang.String r6 = "retry_count"
            int r6 = r2.getColumnIndex(r6)     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            int r6 = r2.getInt(r6)     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            r5.g = r6     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            long r8 = r5.f     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            int r6 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r6 >= 0) goto Lac
            r1.add(r5)     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            java.lang.String r6 = r5.a     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            r3.put(r6, r5)     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            goto L3a
        Lac:
            r4.add(r5)     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            goto L3a
        Lb0:
            r2.close()     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            int r1 = r4.size()     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            if (r1 <= 0) goto Ldb
            java.util.Iterator r1 = r4.iterator()     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
        Lbd:
            boolean r3 = r1.hasNext()     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            if (r3 == 0) goto Ldb
            java.lang.Object r3 = r1.next()     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            com.tkay.core.common.f.v r3 = (com.tkay.core.common.f.v) r3     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            java.lang.String r5 = "delete out date-- "
            r4.<init>(r5)     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            java.lang.String r5 = r3.a()     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            r4.append(r5)     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            r12.b(r3)     // Catch: java.lang.Throwable -> Le8 java.lang.OutOfMemoryError -> Leb java.lang.Exception -> Lf8
            goto Lbd
        Ldb:
            if (r2 == 0) goto Le0
            r2.close()     // Catch: java.lang.Throwable -> Lfd
        Le0:
            monitor-exit(r12)
            return r0
        Le2:
            if (r2 == 0) goto Lfb
        Le4:
            r2.close()     // Catch: java.lang.Throwable -> Lfd
            goto Lfb
        Le8:
            if (r2 == 0) goto Lfb
            goto Le4
        Leb:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> Lf1
            if (r2 == 0) goto Lfb
            goto Le4
        Lf1:
            r0 = move-exception
            if (r2 == 0) goto Lf7
            r2.close()     // Catch: java.lang.Throwable -> Lfd
        Lf7:
            throw r0     // Catch: java.lang.Throwable -> Lfd
        Lf8:
            if (r2 == 0) goto Lfb
            goto Le4
        Lfb:
            monitor-exit(r12)
            return r0
        Lfd:
            r0 = move-exception
            monitor-exit(r12)
            throw r0
    }
}
