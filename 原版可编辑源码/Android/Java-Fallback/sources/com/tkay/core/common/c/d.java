package com.tkay.core.common.c;

public class d extends com.tkay.core.common.c.a<com.tkay.core.common.f.af> {
    private static final java.lang.String b = null;
    private static volatile com.tkay.core.common.c.d c;

    public static class a {
        public static final java.lang.String a = "sdkconfig";
        public static final java.lang.String b = "key";
        public static final java.lang.String c = "type";
        public static final java.lang.String d = "value";
        public static final java.lang.String e = "lastupdatetime";
        public static final java.lang.String f = "CREATE TABLE IF NOT EXISTS sdkconfig(key TEXT ,type TEXT ,lastupdatetime TEXT ,value TEXT )";

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            java.lang.Class<com.tkay.core.common.c.d> r0 = com.tkay.core.common.c.d.class
            java.lang.String r0 = r0.getName()
            com.tkay.core.common.c.d.b = r0
            return
    }

    private d(com.tkay.core.common.c.b r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private synchronized long a(com.tkay.core.common.f.af r10) {
            r9 = this;
            monitor-enter(r9)
            android.database.sqlite.SQLiteDatabase r0 = r9.b()     // Catch: java.lang.Throwable -> L7f
            r1 = -1
            if (r0 == 0) goto L7d
            if (r10 != 0) goto Lc
            goto L7d
        Lc:
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7f
            r0.<init>()     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7f
            java.lang.String r3 = "key"
            java.lang.String r4 = r10.b()     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7f
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7f
            java.lang.String r3 = "type"
            java.lang.String r4 = r10.c()     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7f
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7f
            java.lang.String r3 = "value"
            java.lang.String r4 = r10.d()     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7f
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7f
            java.lang.String r3 = "lastupdatetime"
            java.lang.String r4 = r10.a()     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7f
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7f
            java.lang.String r3 = r10.b()     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7f
            java.lang.String r4 = r10.a()     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7f
            java.lang.String r5 = r10.c()     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7f
            boolean r3 = r9.b(r3, r4, r5)     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7f
            if (r3 == 0) goto L6e
            java.lang.String r3 = "key = ? AND type = ? AND lastupdatetime = ?  "
            android.database.sqlite.SQLiteDatabase r4 = r9.b()     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7f
            java.lang.String r5 = "sdkconfig"
            r6 = 3
            java.lang.String[] r6 = new java.lang.String[r6]     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7f
            r7 = 0
            java.lang.String r8 = r10.b()     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7f
            r6[r7] = r8     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7f
            r7 = 1
            java.lang.String r8 = r10.c()     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7f
            r6[r7] = r8     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7f
            r7 = 2
            java.lang.String r10 = r10.a()     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7f
            r6[r7] = r10     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7f
            int r10 = r4.update(r5, r0, r3, r6)     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7f
            long r0 = (long) r10
            monitor-exit(r9)
            return r0
        L6e:
            android.database.sqlite.SQLiteDatabase r10 = r9.b()     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7f
            java.lang.String r3 = "sdkconfig"
            r4 = 0
            long r0 = r10.insert(r3, r4, r0)     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> L7f
            monitor-exit(r9)
            return r0
        L7b:
            monitor-exit(r9)
            return r1
        L7d:
            monitor-exit(r9)
            return r1
        L7f:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
    }

    public static com.tkay.core.common.c.d a(com.tkay.core.common.c.b r2) {
            com.tkay.core.common.c.d r0 = com.tkay.core.common.c.d.c
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.c.d> r0 = com.tkay.core.common.c.d.class
            monitor-enter(r0)
            com.tkay.core.common.c.d r1 = com.tkay.core.common.c.d.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.c.d r1 = new com.tkay.core.common.c.d     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.c.d.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tkay.core.common.c.d r2 = com.tkay.core.common.c.d.c
            return r2
    }

    private synchronized java.util.List<com.tkay.core.common.f.af> a(android.database.Cursor r4) {
            r3 = this;
            monitor-enter(r3)
            if (r4 == 0) goto L59
            int r0 = r4.getCount()     // Catch: java.lang.Throwable -> L56
            if (r0 <= 0) goto L59
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L56
            r0.<init>()     // Catch: java.lang.Throwable -> L56
        Le:
            boolean r1 = r4.moveToNext()     // Catch: java.lang.Throwable -> L56
            if (r1 == 0) goto L51
            com.tkay.core.common.f.af r1 = new com.tkay.core.common.f.af     // Catch: java.lang.Throwable -> L56
            r1.<init>()     // Catch: java.lang.Throwable -> L56
            java.lang.String r2 = "key"
            int r2 = r4.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L56
            java.lang.String r2 = r4.getString(r2)     // Catch: java.lang.Throwable -> L56
            r1.b(r2)     // Catch: java.lang.Throwable -> L56
            java.lang.String r2 = "type"
            int r2 = r4.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L56
            java.lang.String r2 = r4.getString(r2)     // Catch: java.lang.Throwable -> L56
            r1.c(r2)     // Catch: java.lang.Throwable -> L56
            java.lang.String r2 = "value"
            int r2 = r4.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L56
            java.lang.String r2 = r4.getString(r2)     // Catch: java.lang.Throwable -> L56
            r1.d(r2)     // Catch: java.lang.Throwable -> L56
            java.lang.String r2 = "lastupdatetime"
            int r2 = r4.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L56
            java.lang.String r2 = r4.getString(r2)     // Catch: java.lang.Throwable -> L56
            r1.a(r2)     // Catch: java.lang.Throwable -> L56
            r0.add(r1)     // Catch: java.lang.Throwable -> L56
            goto Le
        L51:
            r4.close()     // Catch: java.lang.Throwable -> L56
            monitor-exit(r3)
            return r0
        L56:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
        L59:
            r4 = 0
            monitor-exit(r3)
            return r4
    }

    private synchronized void a(java.lang.String r6) {
            r5 = this;
            monitor-enter(r5)
            android.database.sqlite.SQLiteDatabase r0 = r5.b()     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L24
            if (r0 != 0) goto L9
            monitor-exit(r5)
            return
        L9:
            java.lang.String r0 = "lastupdatetime< ? and type = ?"
            android.database.sqlite.SQLiteDatabase r1 = r5.b()     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L24
            java.lang.String r2 = "sdkconfig"
            r3 = 2
            java.lang.String[] r3 = new java.lang.String[r3]     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L24
            r4 = 0
            r3[r4] = r6     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L24
            r6 = 1
            java.lang.String r4 = com.tkay.core.common.f.af.a.a     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L24
            r3[r6] = r4     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L24
            r1.delete(r2, r0, r3)     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L24
            monitor-exit(r5)
            return
        L21:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
        L24:
            monitor-exit(r5)
            return
    }

    private synchronized java.util.List<com.tkay.core.common.f.af> b(java.lang.String r10) {
            r9 = this;
            monitor-enter(r9)
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r9.a()     // Catch: java.lang.Throwable -> L23 java.lang.OutOfMemoryError -> L27 java.lang.Exception -> L38
            java.lang.String r2 = "sdkconfig"
            r3 = 0
            java.lang.String r4 = "type = ?"
            r5 = 1
            java.lang.String[] r5 = new java.lang.String[r5]     // Catch: java.lang.Throwable -> L23 java.lang.OutOfMemoryError -> L27 java.lang.Exception -> L38
            r6 = 0
            r5[r6] = r10     // Catch: java.lang.Throwable -> L23 java.lang.OutOfMemoryError -> L27 java.lang.Exception -> L38
            r6 = 0
            r7 = 0
            r8 = 0
            android.database.Cursor r10 = r1.query(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L23 java.lang.OutOfMemoryError -> L27 java.lang.Exception -> L38
            java.util.List r0 = r9.a(r10)     // Catch: java.lang.Throwable -> L24 java.lang.OutOfMemoryError -> L28 java.lang.Exception -> L39
            if (r10 == 0) goto L21
            r10.close()     // Catch: java.lang.Throwable -> L3c
        L21:
            monitor-exit(r9)
            return r0
        L23:
            r10 = r0
        L24:
            if (r10 == 0) goto L3f
            goto L3b
        L27:
            r10 = r0
        L28:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> L31
            if (r10 == 0) goto L3f
        L2d:
            r10.close()     // Catch: java.lang.Throwable -> L3c
            goto L3f
        L31:
            r0 = move-exception
            if (r10 == 0) goto L37
            r10.close()     // Catch: java.lang.Throwable -> L3c
        L37:
            throw r0     // Catch: java.lang.Throwable -> L3c
        L38:
            r10 = r0
        L39:
            if (r10 == 0) goto L3f
        L3b:
            goto L2d
        L3c:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
        L3f:
            monitor-exit(r9)
            return r0
    }

    private synchronized boolean b(java.lang.String r10, java.lang.String r11) {
            r9 = this;
            monitor-enter(r9)
            android.database.sqlite.SQLiteDatabase r0 = r9.a()     // Catch: java.lang.Throwable -> L33
            java.lang.String r1 = "sdkconfig"
            java.lang.String r2 = "key"
            java.lang.String[] r2 = new java.lang.String[]{r2}     // Catch: java.lang.Throwable -> L33
            java.lang.String r3 = "key=? AND type=?"
            r4 = 2
            java.lang.String[] r4 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> L33
            r8 = 0
            r4[r8] = r10     // Catch: java.lang.Throwable -> L33
            r10 = 1
            r4[r10] = r11     // Catch: java.lang.Throwable -> L33
            r5 = 0
            r6 = 0
            r7 = 0
            android.database.Cursor r11 = r0.query(r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L33
            if (r11 == 0) goto L2c
            int r0 = r11.getCount()     // Catch: java.lang.Throwable -> L33
            if (r0 <= 0) goto L2c
            r11.close()     // Catch: java.lang.Throwable -> L33
            monitor-exit(r9)
            return r10
        L2c:
            if (r11 == 0) goto L31
            r11.close()     // Catch: java.lang.Throwable -> L33
        L31:
            monitor-exit(r9)
            return r8
        L33:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
    }

    private synchronized boolean b(java.lang.String r10, java.lang.String r11, java.lang.String r12) {
            r9 = this;
            monitor-enter(r9)
            android.database.sqlite.SQLiteDatabase r0 = r9.a()     // Catch: java.lang.Throwable -> L36
            java.lang.String r1 = "sdkconfig"
            java.lang.String r2 = "key"
            java.lang.String[] r2 = new java.lang.String[]{r2}     // Catch: java.lang.Throwable -> L36
            java.lang.String r3 = "key=? AND type=? AND lastupdatetime=?"
            r4 = 3
            java.lang.String[] r4 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> L36
            r8 = 0
            r4[r8] = r10     // Catch: java.lang.Throwable -> L36
            r10 = 1
            r4[r10] = r12     // Catch: java.lang.Throwable -> L36
            r12 = 2
            r4[r12] = r11     // Catch: java.lang.Throwable -> L36
            r5 = 0
            r6 = 0
            r7 = 0
            android.database.Cursor r11 = r0.query(r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L36
            if (r11 == 0) goto L2f
            int r12 = r11.getCount()     // Catch: java.lang.Throwable -> L36
            if (r12 <= 0) goto L2f
            r11.close()     // Catch: java.lang.Throwable -> L36
            monitor-exit(r9)
            return r10
        L2f:
            if (r11 == 0) goto L34
            r11.close()     // Catch: java.lang.Throwable -> L36
        L34:
            monitor-exit(r9)
            return r8
        L36:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
    }

    private synchronized java.util.List<com.tkay.core.common.f.af> c(java.lang.String r10, java.lang.String r11, java.lang.String r12) {
            r9 = this;
            monitor-enter(r9)
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r9.a()     // Catch: java.lang.Throwable -> L29 java.lang.OutOfMemoryError -> L2d java.lang.Exception -> L3e
            java.lang.String r2 = "sdkconfig"
            r3 = 0
            java.lang.String r4 = "key = ? and type = ? and lastupdatetime = ?"
            r5 = 3
            java.lang.String[] r5 = new java.lang.String[r5]     // Catch: java.lang.Throwable -> L29 java.lang.OutOfMemoryError -> L2d java.lang.Exception -> L3e
            r6 = 0
            r5[r6] = r10     // Catch: java.lang.Throwable -> L29 java.lang.OutOfMemoryError -> L2d java.lang.Exception -> L3e
            r10 = 1
            r5[r10] = r12     // Catch: java.lang.Throwable -> L29 java.lang.OutOfMemoryError -> L2d java.lang.Exception -> L3e
            r10 = 2
            r5[r10] = r11     // Catch: java.lang.Throwable -> L29 java.lang.OutOfMemoryError -> L2d java.lang.Exception -> L3e
            r6 = 0
            r7 = 0
            r8 = 0
            android.database.Cursor r10 = r1.query(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L29 java.lang.OutOfMemoryError -> L2d java.lang.Exception -> L3e
            java.util.List r11 = r9.a(r10)     // Catch: java.lang.Throwable -> L2a java.lang.OutOfMemoryError -> L2e java.lang.Exception -> L3f
            if (r10 == 0) goto L27
            r10.close()     // Catch: java.lang.Throwable -> L42
        L27:
            monitor-exit(r9)
            return r11
        L29:
            r10 = r0
        L2a:
            if (r10 == 0) goto L45
            goto L41
        L2d:
            r10 = r0
        L2e:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> L37
            if (r10 == 0) goto L45
        L33:
            r10.close()     // Catch: java.lang.Throwable -> L42
            goto L45
        L37:
            r11 = move-exception
            if (r10 == 0) goto L3d
            r10.close()     // Catch: java.lang.Throwable -> L42
        L3d:
            throw r11     // Catch: java.lang.Throwable -> L42
        L3e:
            r10 = r0
        L3f:
            if (r10 == 0) goto L45
        L41:
            goto L33
        L42:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
        L45:
            monitor-exit(r9)
            return r0
    }

    private synchronized void c(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            monitor-enter(r2)
            java.lang.String r0 = com.tkay.core.common.f.af.a.a     // Catch: java.lang.Throwable -> L58
            java.util.List r0 = r2.c(r3, r4, r0)     // Catch: java.lang.Throwable -> L58
            if (r0 == 0) goto L3e
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L58
            if (r1 <= 0) goto L3e
            java.util.Iterator r3 = r0.iterator()     // Catch: java.lang.Throwable -> L58
        L13:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L58
            if (r4 == 0) goto L3c
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L58
            com.tkay.core.common.f.af r4 = (com.tkay.core.common.f.af) r4     // Catch: java.lang.Throwable -> L58
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L58
            r0.<init>()     // Catch: java.lang.Throwable -> L58
            java.lang.String r1 = r4.d()     // Catch: java.lang.Throwable -> L58
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Throwable -> L58
            int r1 = r1 + 1
            r0.append(r1)     // Catch: java.lang.Throwable -> L58
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L58
            r4.d(r0)     // Catch: java.lang.Throwable -> L58
            r2.a(r4)     // Catch: java.lang.Throwable -> L58
            goto L13
        L3c:
            monitor-exit(r2)
            return
        L3e:
            com.tkay.core.common.f.af r0 = new com.tkay.core.common.f.af     // Catch: java.lang.Throwable -> L58
            r0.<init>()     // Catch: java.lang.Throwable -> L58
            r0.a(r4)     // Catch: java.lang.Throwable -> L58
            java.lang.String r4 = "1"
            r0.d(r4)     // Catch: java.lang.Throwable -> L58
            java.lang.String r4 = com.tkay.core.common.f.af.a.a     // Catch: java.lang.Throwable -> L58
            r0.c(r4)     // Catch: java.lang.Throwable -> L58
            r0.b(r3)     // Catch: java.lang.Throwable -> L58
            r2.a(r0)     // Catch: java.lang.Throwable -> L58
            monitor-exit(r2)
            return
        L58:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    private synchronized java.util.List<com.tkay.core.common.f.af> d(java.lang.String r10, java.lang.String r11) {
            r9 = this;
            monitor-enter(r9)
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r9.a()     // Catch: java.lang.Throwable -> L26 java.lang.OutOfMemoryError -> L2a java.lang.Exception -> L3b
            java.lang.String r2 = "sdkconfig"
            r3 = 0
            java.lang.String r4 = "key != ? and type = ?"
            r5 = 2
            java.lang.String[] r5 = new java.lang.String[r5]     // Catch: java.lang.Throwable -> L26 java.lang.OutOfMemoryError -> L2a java.lang.Exception -> L3b
            r6 = 0
            r5[r6] = r10     // Catch: java.lang.Throwable -> L26 java.lang.OutOfMemoryError -> L2a java.lang.Exception -> L3b
            r10 = 1
            r5[r10] = r11     // Catch: java.lang.Throwable -> L26 java.lang.OutOfMemoryError -> L2a java.lang.Exception -> L3b
            r6 = 0
            r7 = 0
            r8 = 0
            android.database.Cursor r10 = r1.query(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L26 java.lang.OutOfMemoryError -> L2a java.lang.Exception -> L3b
            java.util.List r11 = r9.a(r10)     // Catch: java.lang.Throwable -> L27 java.lang.OutOfMemoryError -> L2b java.lang.Exception -> L3c
            if (r10 == 0) goto L24
            r10.close()     // Catch: java.lang.Throwable -> L3f
        L24:
            monitor-exit(r9)
            return r11
        L26:
            r10 = r0
        L27:
            if (r10 == 0) goto L42
            goto L3e
        L2a:
            r10 = r0
        L2b:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> L34
            if (r10 == 0) goto L42
        L30:
            r10.close()     // Catch: java.lang.Throwable -> L3f
            goto L42
        L34:
            r11 = move-exception
            if (r10 == 0) goto L3a
            r10.close()     // Catch: java.lang.Throwable -> L3f
        L3a:
            throw r11     // Catch: java.lang.Throwable -> L3f
        L3b:
            r10 = r0
        L3c:
            if (r10 == 0) goto L42
        L3e:
            goto L30
        L3f:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
        L42:
            monitor-exit(r9)
            return r0
    }

    public final synchronized long a(java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            r7 = this;
            monitor-enter(r7)
            android.database.sqlite.SQLiteDatabase r0 = r7.b()     // Catch: java.lang.Throwable -> L61
            r1 = -1
            if (r0 != 0) goto Lb
            monitor-exit(r7)
            return r1
        Lb:
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L61
            r0.<init>()     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L61
            java.lang.String r3 = "key"
            r0.put(r3, r8)     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L61
            java.lang.String r3 = "type"
            r0.put(r3, r10)     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L61
            java.lang.String r3 = "value"
            r0.put(r3, r9)     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L61
            java.lang.String r9 = "lastupdatetime"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L61
            r3.<init>()     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L61
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L61
            r3.append(r4)     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L61
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L61
            r0.put(r9, r3)     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L61
            boolean r9 = r7.b(r8, r10)     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L61
            if (r9 == 0) goto L52
            java.lang.String r9 = "key = ? AND type = ?"
            android.database.sqlite.SQLiteDatabase r3 = r7.b()     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L61
            java.lang.String r4 = "sdkconfig"
            r5 = 2
            java.lang.String[] r5 = new java.lang.String[r5]     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L61
            r6 = 0
            r5[r6] = r8     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L61
            r8 = 1
            r5[r8] = r10     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L61
            int r8 = r3.update(r4, r0, r9, r5)     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L61
            long r8 = (long) r8
            monitor-exit(r7)
            return r8
        L52:
            android.database.sqlite.SQLiteDatabase r8 = r7.b()     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L61
            java.lang.String r9 = "sdkconfig"
            r10 = 0
            long r8 = r8.insert(r9, r10, r0)     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L61
            monitor-exit(r7)
            return r8
        L5f:
            monitor-exit(r7)
            return r1
        L61:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
    }

    public final synchronized java.util.List<com.tkay.core.common.f.af> a(java.lang.String r10, java.lang.String r11) {
            r9 = this;
            monitor-enter(r9)
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r9.a()     // Catch: java.lang.Throwable -> L26 java.lang.OutOfMemoryError -> L2a java.lang.Exception -> L3b
            java.lang.String r2 = "sdkconfig"
            r3 = 0
            java.lang.String r4 = "key = ? and type = ?"
            r5 = 2
            java.lang.String[] r5 = new java.lang.String[r5]     // Catch: java.lang.Throwable -> L26 java.lang.OutOfMemoryError -> L2a java.lang.Exception -> L3b
            r6 = 0
            r5[r6] = r10     // Catch: java.lang.Throwable -> L26 java.lang.OutOfMemoryError -> L2a java.lang.Exception -> L3b
            r10 = 1
            r5[r10] = r11     // Catch: java.lang.Throwable -> L26 java.lang.OutOfMemoryError -> L2a java.lang.Exception -> L3b
            r6 = 0
            r7 = 0
            r8 = 0
            android.database.Cursor r10 = r1.query(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L26 java.lang.OutOfMemoryError -> L2a java.lang.Exception -> L3b
            java.util.List r11 = r9.a(r10)     // Catch: java.lang.Throwable -> L27 java.lang.OutOfMemoryError -> L2b java.lang.Exception -> L3c
            if (r10 == 0) goto L24
            r10.close()     // Catch: java.lang.Throwable -> L3f
        L24:
            monitor-exit(r9)
            return r11
        L26:
            r10 = r0
        L27:
            if (r10 == 0) goto L42
            goto L3e
        L2a:
            r10 = r0
        L2b:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> L34
            if (r10 == 0) goto L42
        L30:
            r10.close()     // Catch: java.lang.Throwable -> L3f
            goto L42
        L34:
            r11 = move-exception
            if (r10 == 0) goto L3a
            r10.close()     // Catch: java.lang.Throwable -> L3f
        L3a:
            throw r11     // Catch: java.lang.Throwable -> L3f
        L3b:
            r10 = r0
        L3c:
            if (r10 == 0) goto L42
        L3e:
            goto L30
        L3f:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
        L42:
            monitor-exit(r9)
            return r0
    }
}
