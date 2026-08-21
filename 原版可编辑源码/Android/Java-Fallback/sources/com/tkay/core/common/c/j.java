package com.tkay.core.common.c;

public class j extends com.tkay.core.common.c.a<com.tkay.core.common.f.w> {
    private static com.tkay.core.common.c.j c;
    private final java.lang.String b;

    public static class a {
        public static final java.lang.String a = "offer_action_record";
        public static final java.lang.String b = "adsource_id";
        public static final java.lang.String c = "type";
        public static final java.lang.String d = "unit_id";
        public static final java.lang.String e = "click_count";
        public static final java.lang.String f = "show_count";
        public static final java.lang.String g = "expire_time";
        public static final java.lang.String h = "CREATE TABLE IF NOT EXISTS offer_action_record(adsource_id TEXT ,type INTEGER ,unit_id TEXT ,click_count INTEGER ,show_count INTEGER ,expire_time INTEGER )";

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    private j(com.tkay.core.common.c.b r1) {
            r0 = this;
            r0.<init>(r1)
            java.lang.Class<com.tkay.core.common.c.j> r1 = com.tkay.core.common.c.j.class
            java.lang.String r1 = r1.getName()
            r0.b = r1
            return
    }

    private synchronized long a(com.tkay.core.common.f.w r10) {
            r9 = this;
            monitor-enter(r9)
            android.database.sqlite.SQLiteDatabase r0 = r9.b()     // Catch: java.lang.Throwable -> L76
            r1 = -1
            if (r0 == 0) goto L74
            if (r10 != 0) goto Lc
            goto L74
        Lc:
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L76
            r0.<init>()     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L76
            java.lang.String r3 = "type"
            int r4 = r10.e()     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L76
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L76
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L76
            java.lang.String r3 = "unit_id"
            java.lang.String r4 = r10.a()     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L76
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L76
            java.lang.String r3 = "click_count"
            int r4 = r10.d()     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L76
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L76
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L76
            java.lang.String r3 = "show_count"
            int r4 = r10.c()     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L76
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L76
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L76
            java.lang.String r3 = "expire_time"
            long r4 = r10.b()     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L76
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L76
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L76
            java.lang.String r3 = "type = ? and unit_id = ?"
            android.database.sqlite.SQLiteDatabase r4 = r9.b()     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L76
            java.lang.String r5 = "offer_action_record"
            r6 = 2
            java.lang.String[] r6 = new java.lang.String[r6]     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L76
            r7 = 0
            int r8 = r10.e()     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L76
            java.lang.String r8 = java.lang.String.valueOf(r8)     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L76
            r6[r7] = r8     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L76
            r7 = 1
            java.lang.String r10 = r10.a()     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L76
            r6[r7] = r10     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L76
            int r10 = r4.update(r5, r0, r3, r6)     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L76
            long r0 = (long) r10
            monitor-exit(r9)
            return r0
        L72:
            monitor-exit(r9)
            return r1
        L74:
            monitor-exit(r9)
            return r1
        L76:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
    }

    public static com.tkay.core.common.c.j a(com.tkay.core.common.c.b r2) {
            com.tkay.core.common.c.j r0 = com.tkay.core.common.c.j.c
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.c.j> r0 = com.tkay.core.common.c.j.class
            monitor-enter(r0)
            com.tkay.core.common.c.j r1 = com.tkay.core.common.c.j.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.c.j r1 = new com.tkay.core.common.c.j     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.c.j.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tkay.core.common.c.j r2 = com.tkay.core.common.c.j.c
            return r2
    }

    private synchronized com.tkay.core.common.f.w a(int r10, java.lang.String r11) {
            r9 = this;
            monitor-enter(r9)
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r9.a()     // Catch: java.lang.Throwable -> L67 java.lang.OutOfMemoryError -> L6b java.lang.Exception -> L7c
            java.lang.String r2 = "offer_action_record"
            r3 = 0
            java.lang.String r4 = "type=? and unit_id = ?"
            r5 = 2
            java.lang.String[] r5 = new java.lang.String[r5]     // Catch: java.lang.Throwable -> L67 java.lang.OutOfMemoryError -> L6b java.lang.Exception -> L7c
            r6 = 0
            java.lang.String r7 = java.lang.String.valueOf(r10)     // Catch: java.lang.Throwable -> L67 java.lang.OutOfMemoryError -> L6b java.lang.Exception -> L7c
            r5[r6] = r7     // Catch: java.lang.Throwable -> L67 java.lang.OutOfMemoryError -> L6b java.lang.Exception -> L7c
            r6 = 1
            r5[r6] = r11     // Catch: java.lang.Throwable -> L67 java.lang.OutOfMemoryError -> L6b java.lang.Exception -> L7c
            r6 = 0
            r7 = 0
            r8 = 0
            android.database.Cursor r1 = r1.query(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L67 java.lang.OutOfMemoryError -> L6b java.lang.Exception -> L7c
            if (r1 == 0) goto L60
            int r2 = r1.getCount()     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            if (r2 <= 0) goto L60
            r1.moveToNext()     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            com.tkay.core.common.f.w r2 = new com.tkay.core.common.f.w     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            r2.<init>(r10, r11)     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            java.lang.String r10 = "click_count"
            int r10 = r1.getColumnIndex(r10)     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            int r10 = r1.getInt(r10)     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            r2.b(r10)     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            java.lang.String r10 = "show_count"
            int r10 = r1.getColumnIndex(r10)     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            int r10 = r1.getInt(r10)     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            r2.a(r10)     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            java.lang.String r10 = "expire_time"
            int r10 = r1.getColumnIndex(r10)     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            long r10 = r1.getLong(r10)     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            r2.a(r10)     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            r1.close()     // Catch: java.lang.Throwable -> L68 java.lang.OutOfMemoryError -> L6c java.lang.Exception -> L7d
            if (r1 == 0) goto L5e
            r1.close()     // Catch: java.lang.Throwable -> L80
        L5e:
            monitor-exit(r9)
            return r2
        L60:
            if (r1 == 0) goto L65
            r1.close()     // Catch: java.lang.Throwable -> L80
        L65:
            monitor-exit(r9)
            return r0
        L67:
            r1 = r0
        L68:
            if (r1 == 0) goto L83
            goto L7f
        L6b:
            r1 = r0
        L6c:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> L75
            if (r1 == 0) goto L83
        L71:
            r1.close()     // Catch: java.lang.Throwable -> L80
            goto L83
        L75:
            r10 = move-exception
            if (r1 == 0) goto L7b
            r1.close()     // Catch: java.lang.Throwable -> L80
        L7b:
            throw r10     // Catch: java.lang.Throwable -> L80
        L7c:
            r1 = r0
        L7d:
            if (r1 == 0) goto L83
        L7f:
            goto L71
        L80:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
        L83:
            monitor-exit(r9)
            return r0
    }

    private synchronized long b(java.lang.String r6, int r7, java.lang.String r8) {
            r5 = this;
            monitor-enter(r5)
            android.database.sqlite.SQLiteDatabase r0 = r5.b()     // Catch: java.lang.Throwable -> L7d
            r1 = -1
            if (r0 != 0) goto Lb
            monitor-exit(r5)
            return r1
        Lb:
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7d
            r0.<init>()     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7d
            java.lang.String r3 = "adsource_id"
            r0.put(r3, r6)     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7d
            java.lang.String r6 = "type"
            java.lang.Integer r3 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7d
            r0.put(r6, r3)     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7d
            java.lang.String r6 = "unit_id"
            r0.put(r6, r8)     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7d
            com.tkay.core.common.f.w r6 = r5.a(r7, r8)     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7d
            if (r6 == 0) goto L51
            java.lang.String r7 = "click_count"
            int r8 = r6.d()     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7d
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7d
            r0.put(r7, r8)     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7d
            java.lang.String r7 = "show_count"
            int r8 = r6.c()     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7d
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7d
            r0.put(r7, r8)     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7d
            java.lang.String r7 = "expire_time"
            long r3 = r6.b()     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7d
            java.lang.Long r6 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7d
            r0.put(r7, r6)     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7d
            goto L6e
        L51:
            java.lang.String r6 = "click_count"
            r7 = 0
            java.lang.Integer r8 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7d
            r0.put(r6, r8)     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7d
            java.lang.String r6 = "show_count"
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7d
            r0.put(r6, r7)     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7d
            java.lang.String r6 = "expire_time"
            r7 = -1
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7d
            r0.put(r6, r7)     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7d
        L6e:
            android.database.sqlite.SQLiteDatabase r6 = r5.b()     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7d
            java.lang.String r7 = "offer_action_record"
            r8 = 0
            long r6 = r6.insert(r7, r8, r0)     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7d
            monitor-exit(r5)
            return r6
        L7b:
            monitor-exit(r5)
            return r1
        L7d:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    private static java.lang.String b(int r3) {
            if (r3 <= 0) goto L1f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            int r1 = r3 * 2
            r2 = 1
            int r1 = r1 - r2
            r0.<init>(r1)
            java.lang.String r1 = "?"
            r0.append(r1)
        L10:
            if (r2 >= r3) goto L1a
            java.lang.String r1 = ",?"
            r0.append(r1)
            int r2 = r2 + 1
            goto L10
        L1a:
            java.lang.String r3 = r0.toString()
            return r3
        L1f:
            java.lang.RuntimeException r3 = new java.lang.RuntimeException
            java.lang.String r0 = "No placeholders"
            r3.<init>(r0)
            throw r3
    }

    private boolean b(int r10, java.lang.String r11) {
            r9 = this;
            android.database.sqlite.SQLiteDatabase r0 = r9.a()
            r1 = 2
            java.lang.String[] r4 = new java.lang.String[r1]
            java.lang.String r10 = java.lang.String.valueOf(r10)
            r8 = 0
            r4[r8] = r10
            r10 = 1
            r4[r10] = r11
            java.lang.String r1 = "offer_action_record"
            r2 = 0
            java.lang.String r3 = "type = ? and unit_id = ?"
            r5 = 0
            r6 = 0
            r7 = 0
            android.database.Cursor r11 = r0.query(r1, r2, r3, r4, r5, r6, r7)
            if (r11 == 0) goto L29
            int r0 = r11.getCount()
            if (r0 <= 0) goto L29
            r11.close()
            return r10
        L29:
            if (r11 == 0) goto L2e
            r11.close()
        L2e:
            return r8
    }

    private boolean c(java.lang.String r10, int r11, java.lang.String r12) {
            r9 = this;
            android.database.sqlite.SQLiteDatabase r0 = r9.a()
            r1 = 3
            java.lang.String[] r4 = new java.lang.String[r1]
            r8 = 0
            r4[r8] = r10
            java.lang.String r10 = java.lang.String.valueOf(r11)
            r11 = 1
            r4[r11] = r10
            r10 = 2
            r4[r10] = r12
            java.lang.String r1 = "offer_action_record"
            r2 = 0
            java.lang.String r3 = "adsource_id = ? and type = ? and unit_id = ?"
            r5 = 0
            r6 = 0
            r7 = 0
            android.database.Cursor r10 = r0.query(r1, r2, r3, r4, r5, r6, r7)
            if (r10 == 0) goto L2c
            int r12 = r10.getCount()
            if (r12 <= 0) goto L2c
            r10.close()
            return r11
        L2c:
            if (r10 == 0) goto L31
            r10.close()
        L31:
            return r8
    }

    public final synchronized java.util.List<com.tkay.core.common.f.w> a(int r11) {
            r10 = this;
            monitor-enter(r10)
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L8f
            r0.<init>()     // Catch: java.lang.Throwable -> L8f
            r1 = 0
            android.database.sqlite.SQLiteDatabase r2 = r10.a()     // Catch: java.lang.Throwable -> L7a java.lang.OutOfMemoryError -> L7d java.lang.Exception -> L8a
            java.lang.String r3 = "offer_action_record"
            r4 = 0
            java.lang.String r5 = "type = ? and expire_time > ?"
            r6 = 2
            java.lang.String[] r6 = new java.lang.String[r6]     // Catch: java.lang.Throwable -> L7a java.lang.OutOfMemoryError -> L7d java.lang.Exception -> L8a
            r7 = 0
            java.lang.String r8 = java.lang.String.valueOf(r11)     // Catch: java.lang.Throwable -> L7a java.lang.OutOfMemoryError -> L7d java.lang.Exception -> L8a
            r6[r7] = r8     // Catch: java.lang.Throwable -> L7a java.lang.OutOfMemoryError -> L7d java.lang.Exception -> L8a
            r7 = 1
            long r8 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L7a java.lang.OutOfMemoryError -> L7d java.lang.Exception -> L8a
            java.lang.String r8 = java.lang.String.valueOf(r8)     // Catch: java.lang.Throwable -> L7a java.lang.OutOfMemoryError -> L7d java.lang.Exception -> L8a
            r6[r7] = r8     // Catch: java.lang.Throwable -> L7a java.lang.OutOfMemoryError -> L7d java.lang.Exception -> L8a
            r7 = 0
            r8 = 0
            r9 = 0
            android.database.Cursor r1 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L7a java.lang.OutOfMemoryError -> L7d java.lang.Exception -> L8a
            if (r1 == 0) goto L74
            int r2 = r1.getCount()     // Catch: java.lang.Throwable -> L7a java.lang.OutOfMemoryError -> L7d java.lang.Exception -> L8a
            if (r2 <= 0) goto L74
        L34:
            boolean r2 = r1.moveToNext()     // Catch: java.lang.Throwable -> L7a java.lang.OutOfMemoryError -> L7d java.lang.Exception -> L8a
            if (r2 == 0) goto L74
            com.tkay.core.common.f.w r2 = new com.tkay.core.common.f.w     // Catch: java.lang.Throwable -> L7a java.lang.OutOfMemoryError -> L7d java.lang.Exception -> L8a
            java.lang.String r3 = "unit_id"
            int r3 = r1.getColumnIndex(r3)     // Catch: java.lang.Throwable -> L7a java.lang.OutOfMemoryError -> L7d java.lang.Exception -> L8a
            java.lang.String r3 = r1.getString(r3)     // Catch: java.lang.Throwable -> L7a java.lang.OutOfMemoryError -> L7d java.lang.Exception -> L8a
            r2.<init>(r11, r3)     // Catch: java.lang.Throwable -> L7a java.lang.OutOfMemoryError -> L7d java.lang.Exception -> L8a
            java.lang.String r3 = "click_count"
            int r3 = r1.getColumnIndex(r3)     // Catch: java.lang.Throwable -> L7a java.lang.OutOfMemoryError -> L7d java.lang.Exception -> L8a
            int r3 = r1.getInt(r3)     // Catch: java.lang.Throwable -> L7a java.lang.OutOfMemoryError -> L7d java.lang.Exception -> L8a
            r2.b(r3)     // Catch: java.lang.Throwable -> L7a java.lang.OutOfMemoryError -> L7d java.lang.Exception -> L8a
            java.lang.String r3 = "show_count"
            int r3 = r1.getColumnIndex(r3)     // Catch: java.lang.Throwable -> L7a java.lang.OutOfMemoryError -> L7d java.lang.Exception -> L8a
            int r3 = r1.getInt(r3)     // Catch: java.lang.Throwable -> L7a java.lang.OutOfMemoryError -> L7d java.lang.Exception -> L8a
            r2.a(r3)     // Catch: java.lang.Throwable -> L7a java.lang.OutOfMemoryError -> L7d java.lang.Exception -> L8a
            java.lang.String r3 = "expire_time"
            int r3 = r1.getColumnIndex(r3)     // Catch: java.lang.Throwable -> L7a java.lang.OutOfMemoryError -> L7d java.lang.Exception -> L8a
            long r3 = r1.getLong(r3)     // Catch: java.lang.Throwable -> L7a java.lang.OutOfMemoryError -> L7d java.lang.Exception -> L8a
            r2.a(r3)     // Catch: java.lang.Throwable -> L7a java.lang.OutOfMemoryError -> L7d java.lang.Exception -> L8a
            r0.add(r2)     // Catch: java.lang.Throwable -> L7a java.lang.OutOfMemoryError -> L7d java.lang.Exception -> L8a
            goto L34
        L74:
            if (r1 == 0) goto L8d
        L76:
            r1.close()     // Catch: java.lang.Throwable -> L8f
            goto L8d
        L7a:
            if (r1 == 0) goto L8d
            goto L76
        L7d:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> L83
            if (r1 == 0) goto L8d
            goto L76
        L83:
            r11 = move-exception
            if (r1 == 0) goto L89
            r1.close()     // Catch: java.lang.Throwable -> L8f
        L89:
            throw r11     // Catch: java.lang.Throwable -> L8f
        L8a:
            if (r1 == 0) goto L8d
            goto L76
        L8d:
            monitor-exit(r10)
            return r0
        L8f:
            r11 = move-exception
            monitor-exit(r10)
            throw r11
    }

    public final synchronized java.util.List<com.tkay.core.common.f.w> a(java.util.List<java.lang.String> r12, int r13) {
            r11 = this;
            monitor-enter(r11)
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Lcf
            r0.<init>()     // Catch: java.lang.Throwable -> Lcf
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lcf
            java.lang.String r2 = "SELECT * FROM offer_action_record WHERE adsource_id IN ("
            r1.<init>(r2)     // Catch: java.lang.Throwable -> Lcf
            int r2 = r12.size()     // Catch: java.lang.Throwable -> Lcf
            java.lang.String r2 = b(r2)     // Catch: java.lang.Throwable -> Lcf
            r1.append(r2)     // Catch: java.lang.Throwable -> Lcf
            java.lang.String r2 = ") and type = ? and expire_time > ?"
            r1.append(r2)     // Catch: java.lang.Throwable -> Lcf
            r1 = 0
            int r2 = r12.size()     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            int r2 = r2 + 2
            java.lang.String[] r7 = new java.lang.String[r2]     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            r12.toArray(r7)     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            int r2 = r12.size()     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            java.lang.String r3 = java.lang.String.valueOf(r13)     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            r7[r2] = r3     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            int r2 = r12.size()     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            int r2 = r2 + 1
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            r7[r2] = r3     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            android.database.sqlite.SQLiteDatabase r3 = r11.a()     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            java.lang.String r4 = "offer_action_record"
            r5 = 0
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            java.lang.String r6 = "adsource_id IN ("
            r2.<init>(r6)     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            int r12 = r12.size()     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            java.lang.String r12 = b(r12)     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            r2.append(r12)     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            java.lang.String r12 = ") and type = ? and expire_time > ?"
            r2.append(r12)     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            r8 = 0
            r9 = 0
            r10 = 0
            android.database.Cursor r1 = r3.query(r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            if (r1 == 0) goto Lb4
            int r12 = r1.getCount()     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            if (r12 <= 0) goto Lb4
        L74:
            boolean r12 = r1.moveToNext()     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            if (r12 == 0) goto Lb4
            com.tkay.core.common.f.w r12 = new com.tkay.core.common.f.w     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            java.lang.String r2 = "unit_id"
            int r2 = r1.getColumnIndex(r2)     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            java.lang.String r2 = r1.getString(r2)     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            r12.<init>(r13, r2)     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            java.lang.String r2 = "click_count"
            int r2 = r1.getColumnIndex(r2)     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            int r2 = r1.getInt(r2)     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            r12.b(r2)     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            java.lang.String r2 = "show_count"
            int r2 = r1.getColumnIndex(r2)     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            int r2 = r1.getInt(r2)     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            r12.a(r2)     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            java.lang.String r2 = "expire_time"
            int r2 = r1.getColumnIndex(r2)     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            long r2 = r1.getLong(r2)     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            r12.a(r2)     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            r0.add(r12)     // Catch: java.lang.Throwable -> Lba java.lang.OutOfMemoryError -> Lbd java.lang.Exception -> Lca
            goto L74
        Lb4:
            if (r1 == 0) goto Lcd
        Lb6:
            r1.close()     // Catch: java.lang.Throwable -> Lcf
            goto Lcd
        Lba:
            if (r1 == 0) goto Lcd
            goto Lb6
        Lbd:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> Lc3
            if (r1 == 0) goto Lcd
            goto Lb6
        Lc3:
            r12 = move-exception
            if (r1 == 0) goto Lc9
            r1.close()     // Catch: java.lang.Throwable -> Lcf
        Lc9:
            throw r12     // Catch: java.lang.Throwable -> Lcf
        Lca:
            if (r1 == 0) goto Lcd
            goto Lb6
        Lcd:
            monitor-exit(r11)
            return r0
        Lcf:
            r12 = move-exception
            monitor-exit(r11)
            throw r12
    }

    public final synchronized void a(int r1, java.lang.String r2, int r3, int r4) {
            r0 = this;
            monitor-enter(r0)
            com.tkay.core.common.f.w r1 = r0.a(r1, r2)     // Catch: java.lang.Throwable -> L1c
            if (r1 == 0) goto L1a
            int r2 = r1.d()     // Catch: java.lang.Throwable -> L1c
            int r2 = r2 + r3
            r1.b(r2)     // Catch: java.lang.Throwable -> L1c
            int r2 = r1.c()     // Catch: java.lang.Throwable -> L1c
            int r2 = r2 + r4
            r1.a(r2)     // Catch: java.lang.Throwable -> L1c
            r0.a(r1)     // Catch: java.lang.Throwable -> L1c
        L1a:
            monitor-exit(r0)
            return
        L1c:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final synchronized void a(int r3, java.lang.String r4, long r5) {
            r2 = this;
            monitor-enter(r2)
            com.tkay.core.common.f.w r3 = r2.a(r3, r4)     // Catch: java.lang.Throwable -> L14
            if (r3 == 0) goto L12
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L14
            long r0 = r0 + r5
            r3.a(r0)     // Catch: java.lang.Throwable -> L14
            r2.a(r3)     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r2)
            return
        L14:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final synchronized void a(java.lang.String r11, int r12, java.lang.String r13) {
            r10 = this;
            monitor-enter(r10)
            android.database.sqlite.SQLiteDatabase r0 = r10.a()     // Catch: java.lang.Throwable -> L3a
            java.lang.String r1 = "offer_action_record"
            r2 = 0
            java.lang.String r3 = "adsource_id = ? and type = ? and unit_id = ?"
            r4 = 3
            java.lang.String[] r4 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> L3a
            r8 = 0
            r4[r8] = r11     // Catch: java.lang.Throwable -> L3a
            java.lang.String r5 = java.lang.String.valueOf(r12)     // Catch: java.lang.Throwable -> L3a
            r9 = 1
            r4[r9] = r5     // Catch: java.lang.Throwable -> L3a
            r5 = 2
            r4[r5] = r13     // Catch: java.lang.Throwable -> L3a
            r5 = 0
            r6 = 0
            r7 = 0
            android.database.Cursor r0 = r0.query(r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L3a
            if (r0 == 0) goto L2e
            int r1 = r0.getCount()     // Catch: java.lang.Throwable -> L3a
            if (r1 <= 0) goto L2e
            r0.close()     // Catch: java.lang.Throwable -> L3a
            r8 = r9
            goto L33
        L2e:
            if (r0 == 0) goto L33
            r0.close()     // Catch: java.lang.Throwable -> L3a
        L33:
            if (r8 != 0) goto L38
            r10.b(r11, r12, r13)     // Catch: java.lang.Throwable -> L3a
        L38:
            monitor-exit(r10)
            return
        L3a:
            r11 = move-exception
            monitor-exit(r10)
            throw r11
    }
}
