package com.tencent.bugly.proguard;

public final class w {
    public static boolean a;
    private static com.tencent.bugly.proguard.w b;
    private static com.tencent.bugly.proguard.x c;

    class a extends java.lang.Thread {
        final com.tencent.bugly.proguard.w a;
        private int b;
        private com.tencent.bugly.proguard.v c;
        private java.lang.String d;
        private android.content.ContentValues e;
        private boolean f;
        private java.lang.String[] g;
        private java.lang.String h;
        private java.lang.String[] i;
        private java.lang.String j;
        private java.lang.String k;
        private java.lang.String l;
        private java.lang.String m;
        private java.lang.String n;
        private java.lang.String[] o;
        private int p;
        private java.lang.String q;
        private byte[] r;

        public a(com.tencent.bugly.proguard.w r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r1 = 4
                r0.b = r1
                r1 = 0
                r0.c = r1
                return
        }

        public final void a(int r1, java.lang.String r2, byte[] r3) {
                r0 = this;
                r0.p = r1
                r0.q = r2
                r0.r = r3
                return
        }

        @Override
        public final void run() {
                r17 = this;
                r0 = r17
                int r1 = r0.b
                switch(r1) {
                    case 1: goto L5c;
                    case 2: goto L4e;
                    case 3: goto L2c;
                    case 4: goto L1e;
                    case 5: goto L14;
                    case 6: goto L8;
                    default: goto L7;
                }
            L7:
                goto L67
            L8:
                com.tencent.bugly.proguard.w r1 = r0.a
                int r2 = r0.p
                java.lang.String r3 = r0.q
                com.tencent.bugly.proguard.v r4 = r0.c
                com.tencent.bugly.proguard.w.a(r1, r2, r3, r4)
                goto L67
            L14:
                com.tencent.bugly.proguard.w r1 = r0.a
                int r2 = r0.p
                com.tencent.bugly.proguard.v r3 = r0.c
                com.tencent.bugly.proguard.w.a(r1, r2, r3)
                return
            L1e:
                com.tencent.bugly.proguard.w r1 = r0.a
                int r2 = r0.p
                java.lang.String r3 = r0.q
                byte[] r4 = r0.r
                com.tencent.bugly.proguard.v r5 = r0.c
                com.tencent.bugly.proguard.w.a(r1, r2, r3, r4, r5)
                return
            L2c:
                com.tencent.bugly.proguard.w r6 = r0.a
                boolean r7 = r0.f
                java.lang.String r8 = r0.d
                java.lang.String[] r9 = r0.g
                java.lang.String r10 = r0.h
                java.lang.String[] r11 = r0.i
                java.lang.String r12 = r0.j
                java.lang.String r13 = r0.k
                java.lang.String r14 = r0.l
                java.lang.String r15 = r0.m
                com.tencent.bugly.proguard.v r1 = r0.c
                r16 = r1
                android.database.Cursor r1 = com.tencent.bugly.proguard.w.a(r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16)
                if (r1 == 0) goto L67
                r1.close()
                return
            L4e:
                com.tencent.bugly.proguard.w r1 = r0.a
                java.lang.String r2 = r0.d
                java.lang.String r3 = r0.n
                java.lang.String[] r4 = r0.o
                com.tencent.bugly.proguard.v r5 = r0.c
                com.tencent.bugly.proguard.w.a(r1, r2, r3, r4, r5)
                return
            L5c:
                com.tencent.bugly.proguard.w r1 = r0.a
                java.lang.String r2 = r0.d
                android.content.ContentValues r3 = r0.e
                com.tencent.bugly.proguard.v r4 = r0.c
                com.tencent.bugly.proguard.w.a(r1, r2, r3, r4)
            L67:
                return
        }
    }

    static {
            return
    }

    private w(android.content.Context r2, java.util.List<com.tencent.bugly.proguard.o> r3) {
            r1 = this;
            r1.<init>()
            com.tencent.bugly.proguard.x r0 = new com.tencent.bugly.proguard.x
            r0.<init>(r2, r3)
            com.tencent.bugly.proguard.w.c = r0
            return
    }

    static int a(com.tencent.bugly.proguard.w r0, java.lang.String r1, java.lang.String r2, java.lang.String[] r3, com.tencent.bugly.proguard.v r4) {
            int r0 = r0.a(r1, r2, r3, r4)
            return r0
    }

    private synchronized int a(java.lang.String r4, java.lang.String r5, java.lang.String[] r6, com.tencent.bugly.proguard.v r7) {
            r3 = this;
            monitor-enter(r3)
            r0 = 0
            r1 = 0
            com.tencent.bugly.proguard.x r2 = com.tencent.bugly.proguard.w.c     // Catch: java.lang.Throwable -> L1e java.lang.Throwable -> L20
            android.database.sqlite.SQLiteDatabase r0 = r2.getWritableDatabase()     // Catch: java.lang.Throwable -> L1e java.lang.Throwable -> L20
            if (r0 == 0) goto Lf
            int r1 = r0.delete(r4, r5, r6)     // Catch: java.lang.Throwable -> L1e java.lang.Throwable -> L20
        Lf:
            if (r7 == 0) goto L14
            java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L47
        L14:
            boolean r4 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> L47
            if (r4 == 0) goto L36
            if (r0 == 0) goto L36
        L1a:
            r0.close()     // Catch: java.lang.Throwable -> L47
            goto L36
        L1e:
            r4 = move-exception
            goto L38
        L20:
            r4 = move-exception
            boolean r5 = com.tencent.bugly.proguard.al.a(r4)     // Catch: java.lang.Throwable -> L1e
            if (r5 != 0) goto L2a
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L1e
        L2a:
            if (r7 == 0) goto L2f
            java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L47
        L2f:
            boolean r4 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> L47
            if (r4 == 0) goto L36
            if (r0 == 0) goto L36
            goto L1a
        L36:
            monitor-exit(r3)
            return r1
        L38:
            if (r7 == 0) goto L3d
            java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L47
        L3d:
            boolean r5 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> L47
            if (r5 == 0) goto L46
            if (r0 == 0) goto L46
            r0.close()     // Catch: java.lang.Throwable -> L47
        L46:
            throw r4     // Catch: java.lang.Throwable -> L47
        L47:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    static long a(com.tencent.bugly.proguard.w r0, java.lang.String r1, android.content.ContentValues r2, com.tencent.bugly.proguard.v r3) {
            long r0 = r0.a(r1, r2, r3)
            return r0
    }

    static android.database.Cursor a(com.tencent.bugly.proguard.w r0, boolean r1, java.lang.String r2, java.lang.String[] r3, java.lang.String r4, java.lang.String[] r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, com.tencent.bugly.proguard.v r10) {
            android.database.Cursor r0 = r0.a(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            return r0
    }

    private synchronized android.database.Cursor a(boolean r13, java.lang.String r14, java.lang.String[] r15, java.lang.String r16, java.lang.String[] r17, java.lang.String r18, java.lang.String r19, java.lang.String r20, java.lang.String r21, com.tencent.bugly.proguard.v r22) {
            r12 = this;
            monitor-enter(r12)
            r1 = 0
            com.tencent.bugly.proguard.x r0 = com.tencent.bugly.proguard.w.c     // Catch: java.lang.Throwable -> L1e java.lang.Throwable -> L20
            android.database.sqlite.SQLiteDatabase r2 = r0.getWritableDatabase()     // Catch: java.lang.Throwable -> L1e java.lang.Throwable -> L20
            if (r2 == 0) goto L2a
            r3 = r13
            r4 = r14
            r5 = r15
            r6 = r16
            r7 = r17
            r8 = r18
            r9 = r19
            r10 = r20
            r11 = r21
            android.database.Cursor r1 = r2.query(r3, r4, r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L1e java.lang.Throwable -> L20
            goto L2a
        L1e:
            r0 = move-exception
            goto L2c
        L20:
            r0 = move-exception
            boolean r2 = com.tencent.bugly.proguard.al.a(r0)     // Catch: java.lang.Throwable -> L1e
            if (r2 != 0) goto L2a
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L1e
        L2a:
            monitor-exit(r12)
            return r1
        L2c:
            throw r0     // Catch: java.lang.Throwable -> L2d
        L2d:
            r0 = move-exception
            r1 = r0
            monitor-exit(r12)
            throw r1
    }

    public static synchronized com.tencent.bugly.proguard.w a() {
            java.lang.Class<com.tencent.bugly.proguard.w> r0 = com.tencent.bugly.proguard.w.class
            monitor-enter(r0)
            com.tencent.bugly.proguard.w r1 = com.tencent.bugly.proguard.w.b     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static synchronized com.tencent.bugly.proguard.w a(android.content.Context r2, java.util.List<com.tencent.bugly.proguard.o> r3) {
            java.lang.Class<com.tencent.bugly.proguard.w> r0 = com.tencent.bugly.proguard.w.class
            monitor-enter(r0)
            com.tencent.bugly.proguard.w r1 = com.tencent.bugly.proguard.w.b     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.tencent.bugly.proguard.w r1 = new com.tencent.bugly.proguard.w     // Catch: java.lang.Throwable -> L12
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L12
            com.tencent.bugly.proguard.w.b = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.tencent.bugly.proguard.w r2 = com.tencent.bugly.proguard.w.b     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r2
        L12:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    private static com.tencent.bugly.proguard.y a(android.database.Cursor r4) {
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            com.tencent.bugly.proguard.y r1 = new com.tencent.bugly.proguard.y     // Catch: java.lang.Throwable -> L52
            r1.<init>()     // Catch: java.lang.Throwable -> L52
            java.lang.String r2 = "_id"
            int r2 = r4.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L52
            long r2 = r4.getLong(r2)     // Catch: java.lang.Throwable -> L52
            r1.a = r2     // Catch: java.lang.Throwable -> L52
            java.lang.String r2 = "_tp"
            int r2 = r4.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L52
            int r2 = r4.getInt(r2)     // Catch: java.lang.Throwable -> L52
            r1.b = r2     // Catch: java.lang.Throwable -> L52
            java.lang.String r2 = "_pc"
            int r2 = r4.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L52
            java.lang.String r2 = r4.getString(r2)     // Catch: java.lang.Throwable -> L52
            r1.c = r2     // Catch: java.lang.Throwable -> L52
            java.lang.String r2 = "_th"
            int r2 = r4.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L52
            java.lang.String r2 = r4.getString(r2)     // Catch: java.lang.Throwable -> L52
            r1.d = r2     // Catch: java.lang.Throwable -> L52
            java.lang.String r2 = "_tm"
            int r2 = r4.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L52
            long r2 = r4.getLong(r2)     // Catch: java.lang.Throwable -> L52
            r1.e = r2     // Catch: java.lang.Throwable -> L52
            java.lang.String r2 = "_dt"
            int r2 = r4.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L52
            byte[] r4 = r4.getBlob(r2)     // Catch: java.lang.Throwable -> L52
            r1.g = r4     // Catch: java.lang.Throwable -> L52
            return r1
        L52:
            r4 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r4)
            if (r1 != 0) goto L5c
            r4.printStackTrace()
        L5c:
            return r0
    }

    static java.util.Map a(com.tencent.bugly.proguard.w r0, int r1, com.tencent.bugly.proguard.v r2) {
            java.util.Map r0 = r0.a(r1, r2)
            return r0
    }

    private synchronized boolean a(int r6, java.lang.String r7, com.tencent.bugly.proguard.v r8) {
            r5 = this;
            monitor-enter(r5)
            r0 = 0
            r1 = 0
            com.tencent.bugly.proguard.x r2 = com.tencent.bugly.proguard.w.c     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L6b
            android.database.sqlite.SQLiteDatabase r2 = r2.getWritableDatabase()     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L6b
            if (r2 == 0) goto L59
            boolean r3 = com.tencent.bugly.proguard.ap.b(r7)     // Catch: java.lang.Throwable -> L54 java.lang.Throwable -> L56
            if (r3 == 0) goto L1c
            java.lang.String r7 = "_id = "
            java.lang.String r6 = java.lang.String.valueOf(r6)     // Catch: java.lang.Throwable -> L54 java.lang.Throwable -> L56
            java.lang.String r6 = r7.concat(r6)     // Catch: java.lang.Throwable -> L54 java.lang.Throwable -> L56
            goto L37
        L1c:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L54 java.lang.Throwable -> L56
            java.lang.String r4 = "_id = "
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L54 java.lang.Throwable -> L56
            r3.append(r6)     // Catch: java.lang.Throwable -> L54 java.lang.Throwable -> L56
            java.lang.String r6 = " and _tp = \""
            r3.append(r6)     // Catch: java.lang.Throwable -> L54 java.lang.Throwable -> L56
            r3.append(r7)     // Catch: java.lang.Throwable -> L54 java.lang.Throwable -> L56
            java.lang.String r6 = "\""
            r3.append(r6)     // Catch: java.lang.Throwable -> L54 java.lang.Throwable -> L56
            java.lang.String r6 = r3.toString()     // Catch: java.lang.Throwable -> L54 java.lang.Throwable -> L56
        L37:
            java.lang.String r7 = "t_pf"
            int r6 = r2.delete(r7, r6, r0)     // Catch: java.lang.Throwable -> L54 java.lang.Throwable -> L56
            java.lang.String r7 = "[Database] deleted %s data %d"
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L54 java.lang.Throwable -> L56
            java.lang.String r3 = "t_pf"
            r0[r1] = r3     // Catch: java.lang.Throwable -> L54 java.lang.Throwable -> L56
            java.lang.Integer r3 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L54 java.lang.Throwable -> L56
            r4 = 1
            r0[r4] = r3     // Catch: java.lang.Throwable -> L54 java.lang.Throwable -> L56
            com.tencent.bugly.proguard.al.c(r7, r0)     // Catch: java.lang.Throwable -> L54 java.lang.Throwable -> L56
            if (r6 <= 0) goto L59
            r1 = 1
            goto L59
        L54:
            r6 = move-exception
            goto L84
        L56:
            r6 = move-exception
            r0 = r2
            goto L6c
        L59:
            if (r8 == 0) goto L5e
            java.lang.Boolean.valueOf(r1)     // Catch: java.lang.Throwable -> L92
        L5e:
            boolean r6 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> L92
            if (r6 == 0) goto L82
            if (r2 == 0) goto L82
            r2.close()     // Catch: java.lang.Throwable -> L92
            goto L82
        L68:
            r6 = move-exception
            r2 = r0
            goto L84
        L6b:
            r6 = move-exception
        L6c:
            boolean r7 = com.tencent.bugly.proguard.al.a(r6)     // Catch: java.lang.Throwable -> L68
            if (r7 != 0) goto L75
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L68
        L75:
            if (r8 == 0) goto L79
            java.lang.Boolean r6 = java.lang.Boolean.FALSE     // Catch: java.lang.Throwable -> L92
        L79:
            boolean r6 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> L92
            if (r6 == 0) goto L82
            if (r0 == 0) goto L82
            r0.close()     // Catch: java.lang.Throwable -> L92
        L82:
            monitor-exit(r5)
            return r1
        L84:
            if (r8 == 0) goto L88
            java.lang.Boolean r7 = java.lang.Boolean.FALSE     // Catch: java.lang.Throwable -> L92
        L88:
            boolean r7 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> L92
            if (r7 == 0) goto L91
            if (r2 == 0) goto L91
            r2.close()     // Catch: java.lang.Throwable -> L92
        L91:
            throw r6     // Catch: java.lang.Throwable -> L92
        L92:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    private boolean a(int r4, java.lang.String r5, byte[] r6, com.tencent.bugly.proguard.v r7) {
            r3 = this;
            com.tencent.bugly.proguard.y r0 = new com.tencent.bugly.proguard.y     // Catch: java.lang.Throwable -> L1c java.lang.Throwable -> L1e
            r0.<init>()     // Catch: java.lang.Throwable -> L1c java.lang.Throwable -> L1e
            long r1 = (long) r4     // Catch: java.lang.Throwable -> L1c java.lang.Throwable -> L1e
            r0.a = r1     // Catch: java.lang.Throwable -> L1c java.lang.Throwable -> L1e
            r0.f = r5     // Catch: java.lang.Throwable -> L1c java.lang.Throwable -> L1e
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L1c java.lang.Throwable -> L1e
            r0.e = r4     // Catch: java.lang.Throwable -> L1c java.lang.Throwable -> L1e
            r0.g = r6     // Catch: java.lang.Throwable -> L1c java.lang.Throwable -> L1e
            boolean r4 = r3.b(r0)     // Catch: java.lang.Throwable -> L1c java.lang.Throwable -> L1e
            if (r7 == 0) goto L2d
            java.lang.Boolean.valueOf(r4)
            goto L2d
        L1c:
            r4 = move-exception
            goto L2e
        L1e:
            r4 = move-exception
            boolean r5 = com.tencent.bugly.proguard.al.a(r4)     // Catch: java.lang.Throwable -> L1c
            if (r5 != 0) goto L28
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L1c
        L28:
            if (r7 == 0) goto L2c
            java.lang.Boolean r4 = java.lang.Boolean.FALSE
        L2c:
            r4 = 0
        L2d:
            return r4
        L2e:
            if (r7 == 0) goto L32
            java.lang.Boolean r5 = java.lang.Boolean.FALSE
        L32:
            throw r4
    }

    static boolean a(com.tencent.bugly.proguard.w r0, int r1, java.lang.String r2, com.tencent.bugly.proguard.v r3) {
            boolean r0 = r0.a(r1, r2, r3)
            return r0
    }

    static boolean a(com.tencent.bugly.proguard.w r0, int r1, java.lang.String r2, byte[] r3, com.tencent.bugly.proguard.v r4) {
            boolean r0 = r0.a(r1, r2, r3, r4)
            return r0
    }

    private static com.tencent.bugly.proguard.y b(android.database.Cursor r4) {
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            com.tencent.bugly.proguard.y r1 = new com.tencent.bugly.proguard.y     // Catch: java.lang.Throwable -> L3a
            r1.<init>()     // Catch: java.lang.Throwable -> L3a
            java.lang.String r2 = "_id"
            int r2 = r4.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L3a
            long r2 = r4.getLong(r2)     // Catch: java.lang.Throwable -> L3a
            r1.a = r2     // Catch: java.lang.Throwable -> L3a
            java.lang.String r2 = "_tm"
            int r2 = r4.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L3a
            long r2 = r4.getLong(r2)     // Catch: java.lang.Throwable -> L3a
            r1.e = r2     // Catch: java.lang.Throwable -> L3a
            java.lang.String r2 = "_tp"
            int r2 = r4.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L3a
            java.lang.String r2 = r4.getString(r2)     // Catch: java.lang.Throwable -> L3a
            r1.f = r2     // Catch: java.lang.Throwable -> L3a
            java.lang.String r2 = "_dt"
            int r2 = r4.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L3a
            byte[] r4 = r4.getBlob(r2)     // Catch: java.lang.Throwable -> L3a
            r1.g = r4     // Catch: java.lang.Throwable -> L3a
            return r1
        L3a:
            r4 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r4)
            if (r1 != 0) goto L44
            r4.printStackTrace()
        L44:
            return r0
    }

    private synchronized boolean b(com.tencent.bugly.proguard.y r9) {
            r8 = this;
            monitor-enter(r8)
            r0 = 0
            r1 = 0
            com.tencent.bugly.proguard.x r2 = com.tencent.bugly.proguard.w.c     // Catch: java.lang.Throwable -> L4e java.lang.Throwable -> L50
            android.database.sqlite.SQLiteDatabase r0 = r2.getWritableDatabase()     // Catch: java.lang.Throwable -> L4e java.lang.Throwable -> L50
            if (r0 == 0) goto L43
            android.content.ContentValues r2 = d(r9)     // Catch: java.lang.Throwable -> L4e java.lang.Throwable -> L50
            if (r2 == 0) goto L43
            java.lang.String r3 = "t_pf"
            java.lang.String r4 = "_id"
            long r2 = r0.replace(r3, r4, r2)     // Catch: java.lang.Throwable -> L4e java.lang.Throwable -> L50
            r4 = 0
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 < 0) goto L38
            java.lang.String r4 = "[Database] insert %s success."
            r5 = 1
            java.lang.Object[] r6 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L4e java.lang.Throwable -> L50
            java.lang.String r7 = "t_pf"
            r6[r1] = r7     // Catch: java.lang.Throwable -> L4e java.lang.Throwable -> L50
            com.tencent.bugly.proguard.al.c(r4, r6)     // Catch: java.lang.Throwable -> L4e java.lang.Throwable -> L50
            r9.a = r2     // Catch: java.lang.Throwable -> L4e java.lang.Throwable -> L50
            boolean r9 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> L6f
            if (r9 == 0) goto L36
            if (r0 == 0) goto L36
            r0.close()     // Catch: java.lang.Throwable -> L6f
        L36:
            monitor-exit(r8)
            return r5
        L38:
            boolean r9 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> L6f
            if (r9 == 0) goto L41
            if (r0 == 0) goto L41
            r0.close()     // Catch: java.lang.Throwable -> L6f
        L41:
            monitor-exit(r8)
            return r1
        L43:
            boolean r9 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> L6f
            if (r9 == 0) goto L4c
            if (r0 == 0) goto L4c
            r0.close()     // Catch: java.lang.Throwable -> L6f
        L4c:
            monitor-exit(r8)
            return r1
        L4e:
            r9 = move-exception
            goto L65
        L50:
            r9 = move-exception
            boolean r2 = com.tencent.bugly.proguard.al.a(r9)     // Catch: java.lang.Throwable -> L4e
            if (r2 != 0) goto L5a
            r9.printStackTrace()     // Catch: java.lang.Throwable -> L4e
        L5a:
            boolean r9 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> L6f
            if (r9 == 0) goto L63
            if (r0 == 0) goto L63
            r0.close()     // Catch: java.lang.Throwable -> L6f
        L63:
            monitor-exit(r8)
            return r1
        L65:
            boolean r1 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> L6f
            if (r1 == 0) goto L6e
            if (r0 == 0) goto L6e
            r0.close()     // Catch: java.lang.Throwable -> L6f
        L6e:
            throw r9     // Catch: java.lang.Throwable -> L6f
        L6f:
            r9 = move-exception
            monitor-exit(r8)
            throw r9
    }

    private static android.content.ContentValues c(com.tencent.bugly.proguard.y r7) {
            r0 = 0
            if (r7 != 0) goto L4
            return r0
        L4:
            android.content.ContentValues r1 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L4c
            r1.<init>()     // Catch: java.lang.Throwable -> L4c
            long r2 = r7.a     // Catch: java.lang.Throwable -> L4c
            r4 = 0
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 <= 0) goto L1c
            java.lang.String r2 = "_id"
            long r3 = r7.a     // Catch: java.lang.Throwable -> L4c
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L4c
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L4c
        L1c:
            java.lang.String r2 = "_tp"
            int r3 = r7.b     // Catch: java.lang.Throwable -> L4c
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L4c
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r2 = "_pc"
            java.lang.String r3 = r7.c     // Catch: java.lang.Throwable -> L4c
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r2 = "_th"
            java.lang.String r3 = r7.d     // Catch: java.lang.Throwable -> L4c
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r2 = "_tm"
            long r3 = r7.e     // Catch: java.lang.Throwable -> L4c
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L4c
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L4c
            byte[] r2 = r7.g     // Catch: java.lang.Throwable -> L4c
            if (r2 == 0) goto L4b
            java.lang.String r2 = "_dt"
            byte[] r7 = r7.g     // Catch: java.lang.Throwable -> L4c
            r1.put(r2, r7)     // Catch: java.lang.Throwable -> L4c
        L4b:
            return r1
        L4c:
            r7 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r7)
            if (r1 != 0) goto L56
            r7.printStackTrace()
        L56:
            return r0
    }

    private synchronized java.util.List<com.tencent.bugly.proguard.y> c(int r12) {
            r11 = this;
            monitor-enter(r11)
            r0 = 0
            com.tencent.bugly.proguard.x r1 = com.tencent.bugly.proguard.w.c     // Catch: java.lang.Throwable -> Lb7 java.lang.Throwable -> Lbb
            android.database.sqlite.SQLiteDatabase r1 = r1.getWritableDatabase()     // Catch: java.lang.Throwable -> Lb7 java.lang.Throwable -> Lbb
            if (r1 == 0) goto Lad
            java.lang.String r2 = "_id = "
            java.lang.String r3 = java.lang.String.valueOf(r12)     // Catch: java.lang.Throwable -> La7 java.lang.Throwable -> Laa
            java.lang.String r10 = r2.concat(r3)     // Catch: java.lang.Throwable -> La7 java.lang.Throwable -> Laa
            java.lang.String r3 = "t_pf"
            r4 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            r2 = r1
            r5 = r10
            android.database.Cursor r2 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> La7 java.lang.Throwable -> Laa
            if (r2 != 0) goto L33
            if (r2 == 0) goto L28
            r2.close()     // Catch: java.lang.Throwable -> Le5
        L28:
            boolean r12 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> Le5
            if (r12 == 0) goto L31
            if (r1 == 0) goto L31
            r1.close()     // Catch: java.lang.Throwable -> Le5
        L31:
            monitor-exit(r11)
            return r0
        L33:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> Ld5
            r3.<init>()     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> Ld5
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> Ld5
            r4.<init>()     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> Ld5
        L3d:
            boolean r5 = r2.moveToNext()     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> Ld5
            r6 = 0
            if (r5 == 0) goto L69
            com.tencent.bugly.proguard.y r5 = b(r2)     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> Ld5
            if (r5 == 0) goto L4e
            r4.add(r5)     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> Ld5
            goto L3d
        L4e:
            java.lang.String r5 = "_tp"
            int r5 = r2.getColumnIndex(r5)     // Catch: java.lang.Throwable -> L61 java.lang.Throwable -> Ld5
            java.lang.String r5 = r2.getString(r5)     // Catch: java.lang.Throwable -> L61 java.lang.Throwable -> Ld5
            java.lang.String r7 = " or _tp = "
            r3.append(r7)     // Catch: java.lang.Throwable -> L61 java.lang.Throwable -> Ld5
            r3.append(r5)     // Catch: java.lang.Throwable -> L61 java.lang.Throwable -> Ld5
            goto L3d
        L61:
            java.lang.String r5 = "[Database] unknown id."
            java.lang.Object[] r6 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> Ld5
            com.tencent.bugly.proguard.al.d(r5, r6)     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> Ld5
            goto L3d
        L69:
            int r5 = r3.length()     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> Ld5
            if (r5 <= 0) goto L95
            java.lang.String r5 = " and _id = "
            r3.append(r5)     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> Ld5
            r3.append(r12)     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> Ld5
            r12 = 4
            java.lang.String r12 = r10.substring(r12)     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> Ld5
            java.lang.String r3 = "t_pf"
            int r12 = r1.delete(r3, r12, r0)     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> Ld5
            java.lang.String r3 = "[Database] deleted %s illegal data %d."
            r5 = 2
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> Ld5
            java.lang.String r7 = "t_pf"
            r5[r6] = r7     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> Ld5
            r6 = 1
            java.lang.Integer r12 = java.lang.Integer.valueOf(r12)     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> Ld5
            r5[r6] = r12     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> Ld5
            com.tencent.bugly.proguard.al.d(r3, r5)     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> Ld5
        L95:
            if (r2 == 0) goto L9a
            r2.close()     // Catch: java.lang.Throwable -> Le5
        L9a:
            boolean r12 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> Le5
            if (r12 == 0) goto La3
            if (r1 == 0) goto La3
            r1.close()     // Catch: java.lang.Throwable -> Le5
        La3:
            monitor-exit(r11)
            return r4
        La5:
            r12 = move-exception
            goto Lbe
        La7:
            r12 = move-exception
            r2 = r0
            goto Ld6
        Laa:
            r12 = move-exception
            r2 = r0
            goto Lbe
        Lad:
            boolean r12 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> Le5
            if (r12 == 0) goto Ld3
            if (r1 == 0) goto Ld3
        Lb3:
            r1.close()     // Catch: java.lang.Throwable -> Le5
            goto Ld3
        Lb7:
            r12 = move-exception
            r1 = r0
            r2 = r1
            goto Ld6
        Lbb:
            r12 = move-exception
            r1 = r0
            r2 = r1
        Lbe:
            boolean r3 = com.tencent.bugly.proguard.al.a(r12)     // Catch: java.lang.Throwable -> Ld5
            if (r3 != 0) goto Lc7
            r12.printStackTrace()     // Catch: java.lang.Throwable -> Ld5
        Lc7:
            if (r2 == 0) goto Lcc
            r2.close()     // Catch: java.lang.Throwable -> Le5
        Lcc:
            boolean r12 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> Le5
            if (r12 == 0) goto Ld3
            if (r1 == 0) goto Ld3
            goto Lb3
        Ld3:
            monitor-exit(r11)
            return r0
        Ld5:
            r12 = move-exception
        Ld6:
            if (r2 == 0) goto Ldb
            r2.close()     // Catch: java.lang.Throwable -> Le5
        Ldb:
            boolean r0 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> Le5
            if (r0 == 0) goto Le4
            if (r1 == 0) goto Le4
            r1.close()     // Catch: java.lang.Throwable -> Le5
        Le4:
            throw r12     // Catch: java.lang.Throwable -> Le5
        Le5:
            r12 = move-exception
            monitor-exit(r11)
            throw r12
    }

    private static android.content.ContentValues d(com.tencent.bugly.proguard.y r7) {
            r0 = 0
            if (r7 == 0) goto L4c
            java.lang.String r1 = r7.f
            boolean r1 = com.tencent.bugly.proguard.ap.b(r1)
            if (r1 == 0) goto Lc
            goto L4c
        Lc:
            android.content.ContentValues r1 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L42
            r1.<init>()     // Catch: java.lang.Throwable -> L42
            long r2 = r7.a     // Catch: java.lang.Throwable -> L42
            r4 = 0
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 <= 0) goto L24
            java.lang.String r2 = "_id"
            long r3 = r7.a     // Catch: java.lang.Throwable -> L42
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L42
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L42
        L24:
            java.lang.String r2 = "_tp"
            java.lang.String r3 = r7.f     // Catch: java.lang.Throwable -> L42
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L42
            java.lang.String r2 = "_tm"
            long r3 = r7.e     // Catch: java.lang.Throwable -> L42
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L42
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L42
            byte[] r2 = r7.g     // Catch: java.lang.Throwable -> L42
            if (r2 == 0) goto L41
            java.lang.String r2 = "_dt"
            byte[] r7 = r7.g     // Catch: java.lang.Throwable -> L42
            r1.put(r2, r7)     // Catch: java.lang.Throwable -> L42
        L41:
            return r1
        L42:
            r7 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r7)
            if (r1 != 0) goto L4c
            r7.printStackTrace()
        L4c:
            return r0
    }

    public final int a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r0 = 0
            int r2 = r1.a(r2, r3, r0, r0)
            return r2
    }

    public final synchronized long a(java.lang.String r10, android.content.ContentValues r11, com.tencent.bugly.proguard.v r12) {
            r9 = this;
            monitor-enter(r9)
            r0 = 0
            r1 = -1
            com.tencent.bugly.proguard.x r3 = com.tencent.bugly.proguard.w.c     // Catch: java.lang.Throwable -> L3f java.lang.Throwable -> L41
            android.database.sqlite.SQLiteDatabase r0 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L3f java.lang.Throwable -> L41
            if (r0 == 0) goto L30
            if (r11 == 0) goto L30
            java.lang.String r3 = "_id"
            long r3 = r0.replace(r10, r3, r11)     // Catch: java.lang.Throwable -> L3f java.lang.Throwable -> L41
            r5 = 0
            r11 = 0
            r7 = 1
            int r8 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r8 < 0) goto L26
            java.lang.String r5 = "[Database] insert %s success."
            java.lang.Object[] r6 = new java.lang.Object[r7]     // Catch: java.lang.Throwable -> L3f java.lang.Throwable -> L41
            r6[r11] = r10     // Catch: java.lang.Throwable -> L3f java.lang.Throwable -> L41
            com.tencent.bugly.proguard.al.c(r5, r6)     // Catch: java.lang.Throwable -> L3f java.lang.Throwable -> L41
            goto L2f
        L26:
            java.lang.String r5 = "[Database] replace %s error."
            java.lang.Object[] r6 = new java.lang.Object[r7]     // Catch: java.lang.Throwable -> L3f java.lang.Throwable -> L41
            r6[r11] = r10     // Catch: java.lang.Throwable -> L3f java.lang.Throwable -> L41
            com.tencent.bugly.proguard.al.d(r5, r6)     // Catch: java.lang.Throwable -> L3f java.lang.Throwable -> L41
        L2f:
            r1 = r3
        L30:
            if (r12 == 0) goto L35
            java.lang.Long.valueOf(r1)     // Catch: java.lang.Throwable -> L68
        L35:
            boolean r10 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> L68
            if (r10 == 0) goto L57
            if (r0 == 0) goto L57
        L3b:
            r0.close()     // Catch: java.lang.Throwable -> L68
            goto L57
        L3f:
            r10 = move-exception
            goto L59
        L41:
            r10 = move-exception
            boolean r11 = com.tencent.bugly.proguard.al.a(r10)     // Catch: java.lang.Throwable -> L3f
            if (r11 != 0) goto L4b
            r10.printStackTrace()     // Catch: java.lang.Throwable -> L3f
        L4b:
            if (r12 == 0) goto L50
            java.lang.Long.valueOf(r1)     // Catch: java.lang.Throwable -> L68
        L50:
            boolean r10 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> L68
            if (r10 == 0) goto L57
            if (r0 == 0) goto L57
            goto L3b
        L57:
            monitor-exit(r9)
            return r1
        L59:
            if (r12 == 0) goto L5e
            java.lang.Long.valueOf(r1)     // Catch: java.lang.Throwable -> L68
        L5e:
            boolean r11 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> L68
            if (r11 == 0) goto L67
            if (r0 == 0) goto L67
            r0.close()     // Catch: java.lang.Throwable -> L68
        L67:
            throw r10     // Catch: java.lang.Throwable -> L68
        L68:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
    }

    public final android.database.Cursor a(java.lang.String r7, java.lang.String[] r8, java.lang.String r9) {
            r6 = this;
            r4 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            android.database.Cursor r7 = r0.a(r1, r2, r3, r4, r5)
            return r7
    }

    public final android.database.Cursor a(java.lang.String r12, java.lang.String[] r13, java.lang.String r14, java.lang.String r15, java.lang.String r16) {
            r11 = this;
            r1 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            r10 = 0
            r0 = r11
            r2 = r12
            r3 = r13
            r4 = r14
            r8 = r15
            r9 = r16
            android.database.Cursor r0 = r0.a(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            return r0
    }

    public final synchronized java.util.List<com.tencent.bugly.proguard.y> a(int r11) {
            r10 = this;
            monitor-enter(r10)
            com.tencent.bugly.proguard.x r0 = com.tencent.bugly.proguard.w.c     // Catch: java.lang.Throwable -> Lda
            android.database.sqlite.SQLiteDatabase r0 = r0.getWritableDatabase()     // Catch: java.lang.Throwable -> Lda
            r9 = 0
            if (r0 == 0) goto Ld8
            if (r11 < 0) goto L22
            java.lang.String r1 = "_tp = "
            java.lang.String r11 = java.lang.String.valueOf(r11)     // Catch: java.lang.Throwable -> L18 java.lang.Throwable -> L1d
            java.lang.String r11 = r1.concat(r11)     // Catch: java.lang.Throwable -> L18 java.lang.Throwable -> L1d
            r4 = r11
            goto L23
        L18:
            r11 = move-exception
            r1 = r11
            r11 = r9
            goto Lc9
        L1d:
            r11 = move-exception
            r1 = r11
            r11 = r9
            goto Lb0
        L22:
            r4 = r9
        L23:
            java.lang.String r2 = "t_lr"
            r3 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r1 = r0
            android.database.Cursor r11 = r1.query(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L18 java.lang.Throwable -> L1d
            if (r11 != 0) goto L41
            if (r11 == 0) goto L36
            r11.close()     // Catch: java.lang.Throwable -> Lda
        L36:
            boolean r11 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> Lda
            if (r11 == 0) goto L3f
            if (r0 == 0) goto L3f
            r0.close()     // Catch: java.lang.Throwable -> Lda
        L3f:
            monitor-exit(r10)
            return r9
        L41:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Laf java.lang.Throwable -> Lc8
            r1.<init>()     // Catch: java.lang.Throwable -> Laf java.lang.Throwable -> Lc8
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Laf java.lang.Throwable -> Lc8
            r2.<init>()     // Catch: java.lang.Throwable -> Laf java.lang.Throwable -> Lc8
        L4b:
            boolean r3 = r11.moveToNext()     // Catch: java.lang.Throwable -> Laf java.lang.Throwable -> Lc8
            r4 = 0
            if (r3 == 0) goto L77
            com.tencent.bugly.proguard.y r3 = a(r11)     // Catch: java.lang.Throwable -> Laf java.lang.Throwable -> Lc8
            if (r3 == 0) goto L5c
            r2.add(r3)     // Catch: java.lang.Throwable -> Laf java.lang.Throwable -> Lc8
            goto L4b
        L5c:
            java.lang.String r3 = "_id"
            int r3 = r11.getColumnIndex(r3)     // Catch: java.lang.Throwable -> L6f java.lang.Throwable -> Lc8
            long r5 = r11.getLong(r3)     // Catch: java.lang.Throwable -> L6f java.lang.Throwable -> Lc8
            java.lang.String r3 = " or _id = "
            r1.append(r3)     // Catch: java.lang.Throwable -> L6f java.lang.Throwable -> Lc8
            r1.append(r5)     // Catch: java.lang.Throwable -> L6f java.lang.Throwable -> Lc8
            goto L4b
        L6f:
            java.lang.String r3 = "[Database] unknown id."
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> Laf java.lang.Throwable -> Lc8
            com.tencent.bugly.proguard.al.d(r3, r4)     // Catch: java.lang.Throwable -> Laf java.lang.Throwable -> Lc8
            goto L4b
        L77:
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Laf java.lang.Throwable -> Lc8
            int r3 = r1.length()     // Catch: java.lang.Throwable -> Laf java.lang.Throwable -> Lc8
            if (r3 <= 0) goto L9f
            r3 = 4
            java.lang.String r1 = r1.substring(r3)     // Catch: java.lang.Throwable -> Laf java.lang.Throwable -> Lc8
            java.lang.String r3 = "t_lr"
            int r1 = r0.delete(r3, r1, r9)     // Catch: java.lang.Throwable -> Laf java.lang.Throwable -> Lc8
            java.lang.String r3 = "[Database] deleted %s illegal data %d"
            r5 = 2
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> Laf java.lang.Throwable -> Lc8
            java.lang.String r6 = "t_lr"
            r5[r4] = r6     // Catch: java.lang.Throwable -> Laf java.lang.Throwable -> Lc8
            r4 = 1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> Laf java.lang.Throwable -> Lc8
            r5[r4] = r1     // Catch: java.lang.Throwable -> Laf java.lang.Throwable -> Lc8
            com.tencent.bugly.proguard.al.d(r3, r5)     // Catch: java.lang.Throwable -> Laf java.lang.Throwable -> Lc8
        L9f:
            if (r11 == 0) goto La4
            r11.close()     // Catch: java.lang.Throwable -> Lda
        La4:
            boolean r11 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> Lda
            if (r11 == 0) goto Lad
            if (r0 == 0) goto Lad
            r0.close()     // Catch: java.lang.Throwable -> Lda
        Lad:
            monitor-exit(r10)
            return r2
        Laf:
            r1 = move-exception
        Lb0:
            boolean r2 = com.tencent.bugly.proguard.al.a(r1)     // Catch: java.lang.Throwable -> Lc8
            if (r2 != 0) goto Lb9
            r1.printStackTrace()     // Catch: java.lang.Throwable -> Lc8
        Lb9:
            if (r11 == 0) goto Lbe
            r11.close()     // Catch: java.lang.Throwable -> Lda
        Lbe:
            boolean r11 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> Lda
            if (r11 == 0) goto Ld8
            if (r0 == 0) goto Ld8
            r0.close()     // Catch: java.lang.Throwable -> Lda
            goto Ld8
        Lc8:
            r1 = move-exception
        Lc9:
            if (r11 == 0) goto Lce
            r11.close()     // Catch: java.lang.Throwable -> Lda
        Lce:
            boolean r11 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> Lda
            if (r11 == 0) goto Ld7
            if (r0 == 0) goto Ld7
            r0.close()     // Catch: java.lang.Throwable -> Lda
        Ld7:
            throw r1     // Catch: java.lang.Throwable -> Lda
        Ld8:
            monitor-exit(r10)
            return r9
        Lda:
            r11 = move-exception
            monitor-exit(r10)
            throw r11
    }

    public final java.util.Map<java.lang.String, byte[]> a(int r4, com.tencent.bugly.proguard.v r5) {
            r3 = this;
            r0 = 0
            java.util.List r4 = r3.c(r4)     // Catch: java.lang.Throwable -> L2b java.lang.Throwable -> L2d
            if (r4 == 0) goto L37
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> L2b java.lang.Throwable -> L2d
            r1.<init>()     // Catch: java.lang.Throwable -> L2b java.lang.Throwable -> L2d
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> L28 java.lang.Throwable -> L2b
        L10:
            boolean r0 = r4.hasNext()     // Catch: java.lang.Throwable -> L28 java.lang.Throwable -> L2b
            if (r0 == 0) goto L26
            java.lang.Object r0 = r4.next()     // Catch: java.lang.Throwable -> L28 java.lang.Throwable -> L2b
            com.tencent.bugly.proguard.y r0 = (com.tencent.bugly.proguard.y) r0     // Catch: java.lang.Throwable -> L28 java.lang.Throwable -> L2b
            byte[] r2 = r0.g     // Catch: java.lang.Throwable -> L28 java.lang.Throwable -> L2b
            if (r2 == 0) goto L10
            java.lang.String r0 = r0.f     // Catch: java.lang.Throwable -> L28 java.lang.Throwable -> L2b
            r1.put(r0, r2)     // Catch: java.lang.Throwable -> L28 java.lang.Throwable -> L2b
            goto L10
        L26:
            r0 = r1
            goto L37
        L28:
            r4 = move-exception
            r0 = r1
            goto L2e
        L2b:
            r4 = move-exception
            goto L38
        L2d:
            r4 = move-exception
        L2e:
            boolean r1 = com.tencent.bugly.proguard.al.a(r4)     // Catch: java.lang.Throwable -> L2b
            if (r1 != 0) goto L37
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L2b
        L37:
            return r0
        L38:
            throw r4
    }

    public final synchronized void a(java.util.List<com.tencent.bugly.proguard.y> r6) {
            r5 = this;
            monitor-enter(r5)
            if (r6 == 0) goto L8b
            int r0 = r6.size()     // Catch: java.lang.Throwable -> L88
            if (r0 != 0) goto Lb
            goto L8b
        Lb:
            com.tencent.bugly.proguard.x r0 = com.tencent.bugly.proguard.w.c     // Catch: java.lang.Throwable -> L88
            android.database.sqlite.SQLiteDatabase r0 = r0.getWritableDatabase()     // Catch: java.lang.Throwable -> L88
            if (r0 == 0) goto L86
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L88
            r1.<init>()     // Catch: java.lang.Throwable -> L88
            java.util.Iterator r6 = r6.iterator()     // Catch: java.lang.Throwable -> L88
        L1c:
            boolean r2 = r6.hasNext()     // Catch: java.lang.Throwable -> L88
            if (r2 == 0) goto L33
            java.lang.Object r2 = r6.next()     // Catch: java.lang.Throwable -> L88
            com.tencent.bugly.proguard.y r2 = (com.tencent.bugly.proguard.y) r2     // Catch: java.lang.Throwable -> L88
            java.lang.String r3 = " or _id = "
            r1.append(r3)     // Catch: java.lang.Throwable -> L88
            long r2 = r2.a     // Catch: java.lang.Throwable -> L88
            r1.append(r2)     // Catch: java.lang.Throwable -> L88
            goto L1c
        L33:
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Throwable -> L88
            int r2 = r6.length()     // Catch: java.lang.Throwable -> L88
            if (r2 <= 0) goto L42
            r2 = 4
            java.lang.String r6 = r6.substring(r2)     // Catch: java.lang.Throwable -> L88
        L42:
            r2 = 0
            r1.setLength(r2)     // Catch: java.lang.Throwable -> L88
            java.lang.String r1 = "t_lr"
            r3 = 0
            int r6 = r0.delete(r1, r6, r3)     // Catch: java.lang.Throwable -> L69 java.lang.Throwable -> L6b
            java.lang.String r1 = "[Database] deleted %s data %d"
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L69 java.lang.Throwable -> L6b
            java.lang.String r4 = "t_lr"
            r3[r2] = r4     // Catch: java.lang.Throwable -> L69 java.lang.Throwable -> L6b
            r2 = 1
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L69 java.lang.Throwable -> L6b
            r3[r2] = r6     // Catch: java.lang.Throwable -> L69 java.lang.Throwable -> L6b
            com.tencent.bugly.proguard.al.c(r1, r3)     // Catch: java.lang.Throwable -> L69 java.lang.Throwable -> L6b
            boolean r6 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> L88
            if (r6 == 0) goto L86
            r0.close()     // Catch: java.lang.Throwable -> L88
            monitor-exit(r5)
            return
        L69:
            r6 = move-exception
            goto L7e
        L6b:
            r6 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r6)     // Catch: java.lang.Throwable -> L69
            if (r1 != 0) goto L75
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L69
        L75:
            boolean r6 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> L88
            if (r6 == 0) goto L86
            r0.close()     // Catch: java.lang.Throwable -> L88
            monitor-exit(r5)
            return
        L7e:
            boolean r1 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> L88
            if (r1 == 0) goto L85
            r0.close()     // Catch: java.lang.Throwable -> L88
        L85:
            throw r6     // Catch: java.lang.Throwable -> L88
        L86:
            monitor-exit(r5)
            return
        L88:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
        L8b:
            monitor-exit(r5)
            return
    }

    public final boolean a(int r1, java.lang.String r2, byte[] r3, boolean r4) {
            r0 = this;
            if (r4 != 0) goto L13
            com.tencent.bugly.proguard.w$a r4 = new com.tencent.bugly.proguard.w$a
            r4.<init>(r0)
            r4.a(r1, r2, r3)
            com.tencent.bugly.proguard.ak r1 = com.tencent.bugly.proguard.ak.a()
            r1.a(r4)
            r1 = 1
            return r1
        L13:
            r4 = 0
            boolean r1 = r0.a(r1, r2, r3, r4)
            return r1
    }

    public final synchronized boolean a(com.tencent.bugly.proguard.y r9) {
            r8 = this;
            monitor-enter(r8)
            r0 = 0
            r1 = 0
            com.tencent.bugly.proguard.x r2 = com.tencent.bugly.proguard.w.c     // Catch: java.lang.Throwable -> L4e java.lang.Throwable -> L50
            android.database.sqlite.SQLiteDatabase r0 = r2.getWritableDatabase()     // Catch: java.lang.Throwable -> L4e java.lang.Throwable -> L50
            if (r0 == 0) goto L43
            android.content.ContentValues r2 = c(r9)     // Catch: java.lang.Throwable -> L4e java.lang.Throwable -> L50
            if (r2 == 0) goto L43
            java.lang.String r3 = "t_lr"
            java.lang.String r4 = "_id"
            long r2 = r0.replace(r3, r4, r2)     // Catch: java.lang.Throwable -> L4e java.lang.Throwable -> L50
            r4 = 0
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 < 0) goto L38
            java.lang.String r4 = "[Database] insert %s success."
            r5 = 1
            java.lang.Object[] r6 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L4e java.lang.Throwable -> L50
            java.lang.String r7 = "t_lr"
            r6[r1] = r7     // Catch: java.lang.Throwable -> L4e java.lang.Throwable -> L50
            com.tencent.bugly.proguard.al.c(r4, r6)     // Catch: java.lang.Throwable -> L4e java.lang.Throwable -> L50
            r9.a = r2     // Catch: java.lang.Throwable -> L4e java.lang.Throwable -> L50
            boolean r9 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> L6f
            if (r9 == 0) goto L36
            if (r0 == 0) goto L36
            r0.close()     // Catch: java.lang.Throwable -> L6f
        L36:
            monitor-exit(r8)
            return r5
        L38:
            boolean r9 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> L6f
            if (r9 == 0) goto L41
            if (r0 == 0) goto L41
            r0.close()     // Catch: java.lang.Throwable -> L6f
        L41:
            monitor-exit(r8)
            return r1
        L43:
            boolean r9 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> L6f
            if (r9 == 0) goto L4c
            if (r0 == 0) goto L4c
            r0.close()     // Catch: java.lang.Throwable -> L6f
        L4c:
            monitor-exit(r8)
            return r1
        L4e:
            r9 = move-exception
            goto L65
        L50:
            r9 = move-exception
            boolean r2 = com.tencent.bugly.proguard.al.a(r9)     // Catch: java.lang.Throwable -> L4e
            if (r2 != 0) goto L5a
            r9.printStackTrace()     // Catch: java.lang.Throwable -> L4e
        L5a:
            boolean r9 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> L6f
            if (r9 == 0) goto L63
            if (r0 == 0) goto L63
            r0.close()     // Catch: java.lang.Throwable -> L6f
        L63:
            monitor-exit(r8)
            return r1
        L65:
            boolean r1 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> L6f
            if (r1 == 0) goto L6e
            if (r0 == 0) goto L6e
            r0.close()     // Catch: java.lang.Throwable -> L6f
        L6e:
            throw r9     // Catch: java.lang.Throwable -> L6f
        L6f:
            r9 = move-exception
            monitor-exit(r8)
            throw r9
    }

    public final synchronized void b(int r6) {
            r5 = this;
            monitor-enter(r5)
            com.tencent.bugly.proguard.x r0 = com.tencent.bugly.proguard.w.c     // Catch: java.lang.Throwable -> L61
            android.database.sqlite.SQLiteDatabase r0 = r0.getWritableDatabase()     // Catch: java.lang.Throwable -> L61
            if (r0 == 0) goto L5f
            r1 = 0
            if (r6 < 0) goto L1b
            java.lang.String r2 = "_tp = "
            java.lang.String r6 = java.lang.String.valueOf(r6)     // Catch: java.lang.Throwable -> L17 java.lang.Throwable -> L19
            java.lang.String r6 = r2.concat(r6)     // Catch: java.lang.Throwable -> L17 java.lang.Throwable -> L19
            goto L1c
        L17:
            r6 = move-exception
            goto L55
        L19:
            r6 = move-exception
            goto L41
        L1b:
            r6 = r1
        L1c:
            java.lang.String r2 = "t_lr"
            int r6 = r0.delete(r2, r6, r1)     // Catch: java.lang.Throwable -> L17 java.lang.Throwable -> L19
            java.lang.String r1 = "[Database] deleted %s data %d"
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L17 java.lang.Throwable -> L19
            r3 = 0
            java.lang.String r4 = "t_lr"
            r2[r3] = r4     // Catch: java.lang.Throwable -> L17 java.lang.Throwable -> L19
            r3 = 1
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L17 java.lang.Throwable -> L19
            r2[r3] = r6     // Catch: java.lang.Throwable -> L17 java.lang.Throwable -> L19
            com.tencent.bugly.proguard.al.c(r1, r2)     // Catch: java.lang.Throwable -> L17 java.lang.Throwable -> L19
            boolean r6 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> L61
            if (r6 == 0) goto L5f
            if (r0 == 0) goto L5f
            r0.close()     // Catch: java.lang.Throwable -> L61
            monitor-exit(r5)
            return
        L41:
            boolean r1 = com.tencent.bugly.proguard.al.a(r6)     // Catch: java.lang.Throwable -> L17
            if (r1 != 0) goto L4a
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L17
        L4a:
            boolean r6 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> L61
            if (r6 == 0) goto L5f
            if (r0 == 0) goto L5f
            r0.close()     // Catch: java.lang.Throwable -> L61
            monitor-exit(r5)
            return
        L55:
            boolean r1 = com.tencent.bugly.proguard.w.a     // Catch: java.lang.Throwable -> L61
            if (r1 == 0) goto L5e
            if (r0 == 0) goto L5e
            r0.close()     // Catch: java.lang.Throwable -> L61
        L5e:
            throw r6     // Catch: java.lang.Throwable -> L61
        L5f:
            monitor-exit(r5)
            return
        L61:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }
}
