package com.sigmob.sdk.base.common;

public class g implements java.io.Serializable {
    private static final long serialVersionUID = 1;
    private final com.sigmob.sdk.base.common.g.a a;
    private final java.lang.String b;
    private final com.sigmob.sdk.base.common.a c;
    private final java.lang.String d;
    private java.lang.String e;
    private java.lang.Long f;
    private java.lang.Long g;
    private java.lang.Integer h;
    private java.lang.Integer i;
    private java.lang.String j;
    private boolean k;





    public enum a extends java.lang.Enum<com.sigmob.sdk.base.common.g.a> {
        public static final com.sigmob.sdk.base.common.g.a a = null;
        public static final com.sigmob.sdk.base.common.g.a b = null;
        private static final com.sigmob.sdk.base.common.g.a[] c = null;

        static {
                com.sigmob.sdk.base.common.g$a r0 = new com.sigmob.sdk.base.common.g$a
                r1 = 0
                java.lang.String r2 = "TRACKING_URL"
                r0.<init>(r2, r1)
                com.sigmob.sdk.base.common.g.a.a = r0
                com.sigmob.sdk.base.common.g$a r0 = new com.sigmob.sdk.base.common.g$a
                r2 = 1
                java.lang.String r3 = "QUARTILE_EVENT"
                r0.<init>(r3, r2)
                com.sigmob.sdk.base.common.g.a.b = r0
                r3 = 2
                com.sigmob.sdk.base.common.g$a[] r3 = new com.sigmob.sdk.base.common.g.a[r3]
                com.sigmob.sdk.base.common.g$a r4 = com.sigmob.sdk.base.common.g.a.a
                r3[r1] = r4
                r3[r2] = r0
                com.sigmob.sdk.base.common.g.a.c = r3
                return
        }

        a(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.sigmob.sdk.base.common.g.a valueOf(java.lang.String r1) {
                java.lang.Class<com.sigmob.sdk.base.common.g$a> r0 = com.sigmob.sdk.base.common.g.a.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.sigmob.sdk.base.common.g$a r1 = (com.sigmob.sdk.base.common.g.a) r1
                return r1
        }

        public static com.sigmob.sdk.base.common.g.a[] values() {
                com.sigmob.sdk.base.common.g$a[] r0 = com.sigmob.sdk.base.common.g.a.c
                java.lang.Object r0 = r0.clone()
                com.sigmob.sdk.base.common.g$a[] r0 = (com.sigmob.sdk.base.common.g.a[]) r0
                return r0
        }
    }

    public g(com.sigmob.sdk.base.common.g.a r1, java.lang.String r2, java.lang.String r3, com.sigmob.sdk.base.common.a r4, java.lang.String r5) {
            r0 = this;
            r0.<init>()
            r0.d = r5
            r0.a = r1
            r0.j = r2
            r0.b = r3
            r0.c = r4
            java.lang.String r1 = "native"
            r0.e = r1
            return
    }

    public g(com.sigmob.sdk.base.common.g.a r7, java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            r6 = this;
            r4 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r5 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public g(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            com.sigmob.sdk.base.common.g$a r0 = com.sigmob.sdk.base.common.g.a.a
            r1.<init>(r0, r2, r3, r4)
            return
    }

    public static com.czhj.sdk.common.Database.SQLiteBuider.CreateTable a() {
            com.czhj.sdk.common.Database.SQLiteBuider$CreateTable$Builder r0 = new com.czhj.sdk.common.Database.SQLiteBuider$CreateTable$Builder
            r0.<init>()
            java.lang.String r1 = "tracks"
            r0.setTableName(r1)
            java.lang.String r1 = "long"
            java.lang.String r2 = "id"
            r0.setPrimaryKey(r2, r1)
            r2 = 1
            r0.autoincrement(r2)
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
            java.lang.String r3 = "text"
            java.lang.String r4 = "url"
            r2.put(r4, r3)
            java.lang.String r4 = "event"
            r2.put(r4, r3)
            java.lang.String r4 = "request_id"
            r2.put(r4, r3)
            java.lang.String r4 = "timestamp"
            r2.put(r4, r1)
            java.lang.String r1 = "source"
            r2.put(r1, r3)
            java.lang.String r1 = "retryNum"
            java.lang.String r3 = "int"
            r2.put(r1, r3)
            r0.setColumns(r2)
            com.czhj.sdk.common.Database.SQLiteBuider$CreateTable r0 = r0.build()
            return r0
    }

    static java.lang.String a(com.sigmob.sdk.base.common.g r0) {
            java.lang.String r0 = r0.b
            return r0
    }

    public static java.util.List<com.sigmob.sdk.base.common.g> a(int r21, long r22) {
            r1 = r21
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r3 = 0
            com.sigmob.sdk.base.db.a r0 = com.sigmob.sdk.base.db.a.a()     // Catch: java.lang.Throwable -> Lee
            android.database.sqlite.SQLiteDatabase r0 = r0.getReadableDatabase()     // Catch: java.lang.Throwable -> Lee
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lee
            r4.<init>()     // Catch: java.lang.Throwable -> Lee
            java.lang.String r5 = "select * from tracks where timestamp > "
            r4.append(r5)     // Catch: java.lang.Throwable -> Lee
            long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lee
            long r5 = r5 - r22
            r4.append(r5)     // Catch: java.lang.Throwable -> Lee
            java.lang.String r5 = " order by id desc limit "
            r4.append(r5)     // Catch: java.lang.Throwable -> Lee
            r4.append(r1)     // Catch: java.lang.Throwable -> Lee
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> Lee
            android.database.Cursor r3 = r0.rawQuery(r4, r3)     // Catch: java.lang.Throwable -> Lee
            r0 = 0
            if (r3 == 0) goto Leb
            boolean r4 = r3.moveToFirst()     // Catch: java.lang.Throwable -> Lee
            if (r4 == 0) goto Leb
            java.lang.String r4 = "url"
            int r4 = r3.getColumnIndex(r4)     // Catch: java.lang.Throwable -> Lee
            java.lang.String r5 = "id"
            int r5 = r3.getColumnIndex(r5)     // Catch: java.lang.Throwable -> Lee
            java.lang.String r6 = "event"
            int r6 = r3.getColumnIndex(r6)     // Catch: java.lang.Throwable -> Lee
            java.lang.String r7 = "request_id"
            int r7 = r3.getColumnIndex(r7)     // Catch: java.lang.Throwable -> Lee
            java.lang.String r8 = "timestamp"
            int r8 = r3.getColumnIndex(r8)     // Catch: java.lang.Throwable -> Lee
            java.lang.String r9 = "source"
            int r9 = r3.getColumnIndex(r9)     // Catch: java.lang.Throwable -> Lee
            java.lang.String r10 = "retryNum"
            int r10 = r3.getColumnIndex(r10)     // Catch: java.lang.Throwable -> Lee
            r11 = r0
        L67:
            if (r11 >= r1) goto Leb
            java.lang.String r0 = r3.getString(r4)     // Catch: java.lang.Throwable -> Ld4
            long r12 = r3.getLong(r5)     // Catch: java.lang.Throwable -> Ld4
            java.lang.Long r12 = java.lang.Long.valueOf(r12)     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r13 = r3.getString(r6)     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r14 = r3.getString(r7)     // Catch: java.lang.Throwable -> Ld4
            long r15 = r3.getLong(r8)     // Catch: java.lang.Throwable -> Ld4
            java.lang.Long r15 = java.lang.Long.valueOf(r15)     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r1 = r3.getString(r9)     // Catch: java.lang.Throwable -> Ld4
            int r16 = r3.getInt(r10)     // Catch: java.lang.Throwable -> Ld4
            java.lang.Integer r16 = java.lang.Integer.valueOf(r16)     // Catch: java.lang.Throwable -> Ld4
            boolean r17 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Ld4
            if (r17 != 0) goto Ld1
            long r17 = r12.longValue()     // Catch: java.lang.Throwable -> Ld4
            r19 = 0
            int r17 = (r17 > r19 ? 1 : (r17 == r19 ? 0 : -1))
            if (r17 < 0) goto Ld1
            boolean r17 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> Ld4
            if (r17 != 0) goto Ld1
            boolean r17 = android.text.TextUtils.isEmpty(r14)     // Catch: java.lang.Throwable -> Ld4
            if (r17 == 0) goto Lae
            goto Ld1
        Lae:
            r22 = r4
            com.sigmob.sdk.base.common.g r4 = new com.sigmob.sdk.base.common.g     // Catch: java.lang.Throwable -> Lcf
            r4.<init>(r0, r13, r14)     // Catch: java.lang.Throwable -> Lcf
            r4.b(r12)     // Catch: java.lang.Throwable -> Lcf
            int r0 = r16.intValue()     // Catch: java.lang.Throwable -> Lcf
            r4.a(r0)     // Catch: java.lang.Throwable -> Lcf
            r4.a(r15)     // Catch: java.lang.Throwable -> Lcf
            boolean r0 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Lcf
            if (r0 != 0) goto Lcb
            r4.a(r1)     // Catch: java.lang.Throwable -> Lcf
        Lcb:
            r2.add(r4)     // Catch: java.lang.Throwable -> Lcf
            goto Ldc
        Lcf:
            r0 = move-exception
            goto Ld7
        Ld1:
            r22 = r4
            goto Le5
        Ld4:
            r0 = move-exception
            r22 = r4
        Ld7:
            java.lang.String r1 = "getAdTrackList error"
            com.czhj.sdk.logger.SigmobLog.e(r1, r0)     // Catch: java.lang.Throwable -> Lee
        Ldc:
            boolean r0 = r3.moveToNext()     // Catch: java.lang.Throwable -> Lee
            if (r0 != 0) goto Le3
            goto Leb
        Le3:
            int r11 = r11 + 1
        Le5:
            r1 = r21
            r4 = r22
            goto L67
        Leb:
            if (r3 == 0) goto Lf9
            goto Lf6
        Lee:
            r0 = move-exception
            java.lang.String r1 = "getlogs fail"
            com.czhj.sdk.logger.SigmobLog.e(r1, r0)     // Catch: java.lang.Throwable -> Lfa
            if (r3 == 0) goto Lf9
        Lf6:
            r3.close()
        Lf9:
            return r2
        Lfa:
            r0 = move-exception
            if (r3 == 0) goto L100
            r3.close()
        L100:
            throw r0
    }

    private void a(int r1) {
            r0 = this;
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.i = r1
            return
    }

    public static void a(long r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2d
            r0.<init>()     // Catch: java.lang.Throwable -> L2d
            java.lang.String r1 = "timestamp < "
            r0.append(r1)     // Catch: java.lang.Throwable -> L2d
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L2d
            long r1 = r1 - r3
            r0.append(r1)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L2d
            com.czhj.sdk.common.Database.DBOperator r4 = com.czhj.sdk.common.Database.DBOperator.getInstance()     // Catch: java.lang.Throwable -> L2d
            com.sigmob.sdk.base.db.a r0 = com.sigmob.sdk.base.db.a.a()     // Catch: java.lang.Throwable -> L2d
            android.database.sqlite.SQLiteDatabase r0 = r0.getWritableDatabase()     // Catch: java.lang.Throwable -> L2d
            java.lang.String r1 = "tracks"
            com.sigmob.sdk.base.common.g$1 r2 = new com.sigmob.sdk.base.common.g$1     // Catch: java.lang.Throwable -> L2d
            r2.<init>()     // Catch: java.lang.Throwable -> L2d
            r4.delete(r0, r1, r3, r2)     // Catch: java.lang.Throwable -> L2d
            goto L33
        L2d:
            r3 = move-exception
            java.lang.String r4 = "cleanExpiredAdTracker error"
            com.czhj.sdk.logger.SigmobLog.e(r4, r3)
        L33:
            return
    }

    static java.lang.String b(com.sigmob.sdk.base.common.g r0) {
            java.lang.String r0 = r0.j
            return r0
    }

    public static void b(long r5) {
            r0 = 0
            r2 = 0
            com.sigmob.sdk.base.db.a r3 = com.sigmob.sdk.base.db.a.a()     // Catch: java.lang.Throwable -> L90
            android.database.sqlite.SQLiteDatabase r3 = r3.getReadableDatabase()     // Catch: java.lang.Throwable -> L90
            java.lang.String r4 = "select * from tracks"
            android.database.Cursor r4 = r3.rawQuery(r4, r2)     // Catch: java.lang.Throwable -> L90
            if (r4 == 0) goto L21
            int r0 = r4.getCount()     // Catch: java.lang.Throwable -> L1d
            long r0 = (long) r0     // Catch: java.lang.Throwable -> L1d
            r4.close()     // Catch: java.lang.Throwable -> L1d
            r4 = r2
            goto L21
        L1d:
            r5 = move-exception
            r2 = r4
            goto L91
        L21:
            int r0 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r0 <= 0) goto L56
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1d
            r0.<init>()     // Catch: java.lang.Throwable -> L1d
            java.lang.String r1 = "select * from tracks order by id desc limit "
            r0.append(r1)     // Catch: java.lang.Throwable -> L1d
            r0.append(r5)     // Catch: java.lang.Throwable -> L1d
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Throwable -> L1d
            android.database.Cursor r5 = r3.rawQuery(r5, r2)     // Catch: java.lang.Throwable -> L1d
            java.lang.String r6 = "id"
            int r6 = r5.getColumnIndex(r6)     // Catch: java.lang.Throwable -> L86
            if (r5 == 0) goto L57
            boolean r0 = r5.moveToLast()     // Catch: java.lang.Throwable -> L86
            if (r0 == 0) goto L57
            long r0 = r5.getLong(r6)     // Catch: java.lang.Throwable -> L86
            java.lang.Long r6 = java.lang.Long.valueOf(r0)     // Catch: java.lang.Throwable -> L86
            r5.close()     // Catch: java.lang.Throwable -> L86
            r5 = r2
            r2 = r6
            goto L57
        L56:
            r5 = r4
        L57:
            if (r2 == 0) goto L8a
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L86
            r6.<init>()     // Catch: java.lang.Throwable -> L86
            java.lang.String r0 = "id <'"
            r6.append(r0)     // Catch: java.lang.Throwable -> L86
            r6.append(r2)     // Catch: java.lang.Throwable -> L86
            java.lang.String r0 = "'"
            r6.append(r0)     // Catch: java.lang.Throwable -> L86
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L86
            com.czhj.sdk.common.Database.DBOperator r0 = com.czhj.sdk.common.Database.DBOperator.getInstance()     // Catch: java.lang.Throwable -> L86
            com.sigmob.sdk.base.db.a r1 = com.sigmob.sdk.base.db.a.a()     // Catch: java.lang.Throwable -> L86
            android.database.sqlite.SQLiteDatabase r1 = r1.getWritableDatabase()     // Catch: java.lang.Throwable -> L86
            java.lang.String r2 = "tracks"
            com.sigmob.sdk.base.common.g$2 r3 = new com.sigmob.sdk.base.common.g$2     // Catch: java.lang.Throwable -> L86
            r3.<init>()     // Catch: java.lang.Throwable -> L86
            r0.delete(r1, r2, r6, r3)     // Catch: java.lang.Throwable -> L86
            goto L8a
        L86:
            r6 = move-exception
            r2 = r5
            r5 = r6
            goto L91
        L8a:
            if (r5 == 0) goto L9b
            r5.close()
            goto L9b
        L90:
            r5 = move-exception
        L91:
            java.lang.String r6 = "cleanLimitAdTracker "
            com.czhj.sdk.logger.SigmobLog.e(r6, r5)     // Catch: java.lang.Throwable -> L9c
            if (r2 == 0) goto L9b
            r2.close()
        L9b:
            return
        L9c:
            r5 = move-exception
            if (r2 == 0) goto La2
            r2.close()
        La2:
            throw r5
    }

    private void b(java.lang.Long r1) {
            r0 = this;
            r0.f = r1
            return
    }

    static java.lang.String c(com.sigmob.sdk.base.common.g r0) {
            java.lang.String r0 = r0.d
            return r0
    }

    static java.lang.Long d(com.sigmob.sdk.base.common.g r0) {
            java.lang.Long r0 = r0.f
            return r0
    }

    public void a(com.sigmob.sdk.base.db.a.a r6) {
            r5 = this;
            com.czhj.sdk.common.Database.SQLiteBuider$Insert$Builder r0 = new com.czhj.sdk.common.Database.SQLiteBuider$Insert$Builder     // Catch: java.lang.Throwable -> L5b
            r0.<init>()     // Catch: java.lang.Throwable -> L5b
            java.lang.String r1 = "tracks"
            r0.setTableName(r1)     // Catch: java.lang.Throwable -> L5b
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> L5b
            r1.<init>()     // Catch: java.lang.Throwable -> L5b
            java.lang.String r2 = "url"
            java.lang.String r3 = r5.j     // Catch: java.lang.Throwable -> L5b
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r2 = "request_id"
            java.lang.String r3 = r5.d     // Catch: java.lang.Throwable -> L5b
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r2 = "event"
            java.lang.String r3 = r5.b     // Catch: java.lang.Throwable -> L5b
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r2 = "source"
            java.lang.String r3 = r5.e     // Catch: java.lang.Throwable -> L5b
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r2 = "retryNum"
            java.lang.Integer r3 = r5.i     // Catch: java.lang.Throwable -> L5b
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r2 = "timestamp"
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L5b
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L5b
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L5b
            r0.setColumnValues(r1)     // Catch: java.lang.Throwable -> L5b
            com.sigmob.sdk.base.db.a r1 = com.sigmob.sdk.base.db.a.a()     // Catch: java.lang.Throwable -> L5b
            com.sigmob.sdk.base.db.a r2 = com.sigmob.sdk.base.db.a.a()     // Catch: java.lang.Throwable -> L5b
            android.database.sqlite.SQLiteDatabase r2 = r2.getWritableDatabase()     // Catch: java.lang.Throwable -> L5b
            com.czhj.sdk.common.Database.SQLiteBuider$Insert r0 = r0.build()     // Catch: java.lang.Throwable -> L5b
            com.sigmob.sdk.base.common.g$3 r3 = new com.sigmob.sdk.base.common.g$3     // Catch: java.lang.Throwable -> L5b
            r3.<init>(r5, r6)     // Catch: java.lang.Throwable -> L5b
            r1.a(r2, r0, r3)     // Catch: java.lang.Throwable -> L5b
            goto L63
        L5b:
            r6 = move-exception
            java.lang.String r6 = r6.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r6)
        L63:
            return
    }

    public void a(java.lang.Integer r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public void a(java.lang.Long r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public int c() {
            r1 = this;
            java.lang.Integer r0 = r1.i
            int r0 = r0.intValue()
            return r0
    }

    public void d() {
            r1 = this;
            java.lang.Integer r0 = r1.i
            int r0 = r0.intValue()
            int r0 = r0 + 1
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r1.i = r0
            return
    }

    public void e() {
            r4 = this;
            com.czhj.sdk.common.Database.SQLiteBuider$Update$Builder r0 = new com.czhj.sdk.common.Database.SQLiteBuider$Update$Builder     // Catch: java.lang.Throwable -> L4c
            r0.<init>()     // Catch: java.lang.Throwable -> L4c
            java.lang.String r1 = "tracks"
            r0.setTableName(r1)     // Catch: java.lang.Throwable -> L4c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4c
            r1.<init>()     // Catch: java.lang.Throwable -> L4c
            java.lang.String r2 = " where id="
            r1.append(r2)     // Catch: java.lang.Throwable -> L4c
            java.lang.Long r2 = r4.f     // Catch: java.lang.Throwable -> L4c
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L4c
            r1.append(r2)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L4c
            r0.setWhere(r1)     // Catch: java.lang.Throwable -> L4c
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> L4c
            r1.<init>()     // Catch: java.lang.Throwable -> L4c
            java.lang.String r2 = "retryNum"
            java.lang.Integer r3 = r4.i     // Catch: java.lang.Throwable -> L4c
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L4c
            r0.setColumnValues(r1)     // Catch: java.lang.Throwable -> L4c
            com.czhj.sdk.common.Database.SQLiteBuider$Update r0 = r0.build()     // Catch: java.lang.Throwable -> L4c
            java.lang.String r0 = r0.getSql()     // Catch: java.lang.Throwable -> L4c
            com.sigmob.sdk.base.db.a r1 = com.sigmob.sdk.base.db.a.a()     // Catch: java.lang.Throwable -> L4c
            com.sigmob.sdk.base.db.a r2 = com.sigmob.sdk.base.db.a.a()     // Catch: java.lang.Throwable -> L4c
            android.database.sqlite.SQLiteDatabase r2 = r2.getWritableDatabase()     // Catch: java.lang.Throwable -> L4c
            r3 = 0
            r1.a(r2, r0, r3)     // Catch: java.lang.Throwable -> L4c
            goto L54
        L4c:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L54:
            return
    }

    public java.lang.Long f() {
            r1 = this;
            java.lang.Long r0 = r1.f
            return r0
    }

    public void g() {
            r5 = this;
            java.lang.Long r0 = r5.f
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L34
            r0.<init>()     // Catch: java.lang.Throwable -> L34
            java.lang.String r1 = "id ='"
            r0.append(r1)     // Catch: java.lang.Throwable -> L34
            java.lang.Long r1 = r5.f     // Catch: java.lang.Throwable -> L34
            r0.append(r1)     // Catch: java.lang.Throwable -> L34
            java.lang.String r1 = "'"
            r0.append(r1)     // Catch: java.lang.Throwable -> L34
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L34
            com.czhj.sdk.common.Database.DBOperator r1 = com.czhj.sdk.common.Database.DBOperator.getInstance()     // Catch: java.lang.Throwable -> L34
            com.sigmob.sdk.base.db.a r2 = com.sigmob.sdk.base.db.a.a()     // Catch: java.lang.Throwable -> L34
            android.database.sqlite.SQLiteDatabase r2 = r2.getWritableDatabase()     // Catch: java.lang.Throwable -> L34
            java.lang.String r3 = "tracks"
            com.sigmob.sdk.base.common.g$4 r4 = new com.sigmob.sdk.base.common.g$4     // Catch: java.lang.Throwable -> L34
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L34
            r1.delete(r2, r3, r0, r4)     // Catch: java.lang.Throwable -> L34
            goto L3c
        L34:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L3c:
            return
    }

    public long h() {
            r2 = this;
            java.lang.Long r0 = r2.g
            if (r0 != 0) goto L7
            r0 = 0
            return r0
        L7:
            long r0 = r0.longValue()
            return r0
    }

    public com.sigmob.sdk.base.common.g.a i() {
            r1 = this;
            com.sigmob.sdk.base.common.g$a r0 = r1.a
            return r0
    }

    public java.lang.Integer j() {
            r1 = this;
            java.lang.Integer r0 = r1.h
            if (r0 != 0) goto L9
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
        L9:
            return r0
    }

    public java.lang.String k() {
            r1 = this;
            java.lang.String r0 = r1.j
            return r0
    }

    public void l() {
            r1 = this;
            r0 = 1
            r1.k = r0
            return
    }

    public boolean m() {
            r1 = this;
            boolean r0 = r1.k
            return r0
    }

    public java.lang.String n() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public java.lang.String o() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public com.sigmob.sdk.base.common.a p() {
            r1 = this;
            com.sigmob.sdk.base.common.a r0 = r1.c
            return r0
    }
}
