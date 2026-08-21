package com.tencent.bugly.proguard;

public final class x extends android.database.sqlite.SQLiteOpenHelper {
    public static java.lang.String a = "bugly_db";
    public static int b = 16;
    protected android.content.Context c;
    private java.util.List<com.tencent.bugly.proguard.o> d;

    static {
            return
    }

    public x(android.content.Context r4, java.util.List<com.tencent.bugly.proguard.o> r5) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.tencent.bugly.proguard.x.a
            r0.append(r1)
            java.lang.String r1 = "_"
            r0.append(r1)
            com.tencent.bugly.proguard.aa r1 = com.tencent.bugly.proguard.aa.a(r4)
            r1.getClass()
            java.lang.String r0 = r0.toString()
            int r1 = com.tencent.bugly.proguard.x.b
            r2 = 0
            r3.<init>(r4, r0, r2, r1)
            r3.c = r4
            r3.d = r5
            return
    }

    private synchronized boolean a(android.database.sqlite.SQLiteDatabase r6) {
            r5 = this;
            monitor-enter(r5)
            r0 = 0
            java.lang.String r1 = "t_lr"
            java.lang.String r2 = "t_ui"
            java.lang.String r3 = "t_pf"
            java.lang.String[] r1 = new java.lang.String[]{r1, r2, r3}     // Catch: java.lang.Throwable -> L27 java.lang.Throwable -> L29
            r2 = 0
        Ld:
            r3 = 3
            if (r2 >= r3) goto L24
            r3 = r1[r2]     // Catch: java.lang.Throwable -> L27 java.lang.Throwable -> L29
            java.lang.String r4 = "DROP TABLE IF EXISTS "
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L27 java.lang.Throwable -> L29
            java.lang.String r3 = r4.concat(r3)     // Catch: java.lang.Throwable -> L27 java.lang.Throwable -> L29
            java.lang.String[] r4 = new java.lang.String[r0]     // Catch: java.lang.Throwable -> L27 java.lang.Throwable -> L29
            r6.execSQL(r3, r4)     // Catch: java.lang.Throwable -> L27 java.lang.Throwable -> L29
            int r2 = r2 + 1
            goto Ld
        L24:
            monitor-exit(r5)
            r6 = 1
            return r6
        L27:
            r6 = move-exception
            goto L35
        L29:
            r6 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.b(r6)     // Catch: java.lang.Throwable -> L27
            if (r1 != 0) goto L33
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L27
        L33:
            monitor-exit(r5)
            return r0
        L35:
            monitor-exit(r5)
            throw r6
    }

    @Override
    public final synchronized android.database.sqlite.SQLiteDatabase getReadableDatabase() {
            r7 = this;
            monitor-enter(r7)
            r0 = 0
            r1 = 0
            r2 = 0
        L4:
            if (r0 != 0) goto L36
            r3 = 5
            if (r2 >= r3) goto L36
            int r2 = r2 + 1
            android.database.sqlite.SQLiteDatabase r0 = super.getReadableDatabase()     // Catch: java.lang.Throwable -> L10 java.lang.Throwable -> L12
            goto L4
        L10:
            r0 = move-exception
            goto L34
        L12:
            java.lang.String r4 = "[Database] Try to get db(count: %d)."
            r5 = 1
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L10
            java.lang.Integer r6 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L10
            r5[r1] = r6     // Catch: java.lang.Throwable -> L10
            com.tencent.bugly.proguard.al.d(r4, r5)     // Catch: java.lang.Throwable -> L10
            if (r2 != r3) goto L29
            java.lang.String r3 = "[Database] Failed to get db."
            java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L10
            com.tencent.bugly.proguard.al.e(r3, r4)     // Catch: java.lang.Throwable -> L10
        L29:
            r3 = 200(0xc8, double:9.9E-322)
            java.lang.Thread.sleep(r3)     // Catch: java.lang.Throwable -> L10 java.lang.InterruptedException -> L2f
            goto L4
        L2f:
            r3 = move-exception
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L10
            goto L4
        L34:
            monitor-exit(r7)
            throw r0
        L36:
            monitor-exit(r7)
            return r0
    }

    @Override
    public final synchronized android.database.sqlite.SQLiteDatabase getWritableDatabase() {
            r7 = this;
            monitor-enter(r7)
            r0 = 0
            r1 = 0
            r2 = 0
        L4:
            if (r0 != 0) goto L32
            r3 = 5
            if (r2 >= r3) goto L32
            int r2 = r2 + 1
            android.database.sqlite.SQLiteDatabase r0 = super.getWritableDatabase()     // Catch: java.lang.Throwable -> L10 java.lang.Throwable -> L3c
            goto L4
        L10:
            java.lang.String r4 = "[Database] Try to get db(count: %d)."
            r5 = 1
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L3c
            java.lang.Integer r6 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L3c
            r5[r1] = r6     // Catch: java.lang.Throwable -> L3c
            com.tencent.bugly.proguard.al.d(r4, r5)     // Catch: java.lang.Throwable -> L3c
            if (r2 != r3) goto L27
            java.lang.String r3 = "[Database] Failed to get db."
            java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L3c
            com.tencent.bugly.proguard.al.e(r3, r4)     // Catch: java.lang.Throwable -> L3c
        L27:
            r3 = 200(0xc8, double:9.9E-322)
            java.lang.Thread.sleep(r3)     // Catch: java.lang.InterruptedException -> L2d java.lang.Throwable -> L3c
            goto L4
        L2d:
            r3 = move-exception
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L3c
            goto L4
        L32:
            if (r0 != 0) goto L3f
            java.lang.String r2 = "[Database] db error delay error record 1min."
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L3c
            com.tencent.bugly.proguard.al.d(r2, r1)     // Catch: java.lang.Throwable -> L3c
            goto L3f
        L3c:
            r0 = move-exception
            monitor-exit(r7)
            throw r0
        L3f:
            monitor-exit(r7)
            return r0
    }

    @Override
    public final synchronized void onCreate(android.database.sqlite.SQLiteDatabase r5) {
            r4 = this;
            monitor-enter(r4)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            r0.<init>()     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            r1 = 0
            r0.setLength(r1)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String r2 = " CREATE TABLE IF NOT EXISTS t_ui ( _id INTEGER PRIMARY KEY , _tm int , _ut int , _tp int , _dt blob , _pc text ) "
            r0.append(r2)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            com.tencent.bugly.proguard.al.c(r2, r3)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String[] r3 = new java.lang.String[r1]     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            r5.execSQL(r2, r3)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            r0.setLength(r1)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String r2 = " CREATE TABLE IF NOT EXISTS t_lr ( _id INTEGER PRIMARY KEY , _tp int , _tm int , _pc text , _th text , _dt blob ) "
            r0.append(r2)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            com.tencent.bugly.proguard.al.c(r2, r3)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String[] r3 = new java.lang.String[r1]     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            r5.execSQL(r2, r3)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            r0.setLength(r1)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String r2 = " CREATE TABLE IF NOT EXISTS t_pf ( _id integer , _tp text , _tm int , _dt blob,primary key(_id,_tp )) "
            r0.append(r2)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            com.tencent.bugly.proguard.al.c(r2, r3)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String[] r3 = new java.lang.String[r1]     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            r5.execSQL(r2, r3)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            r0.setLength(r1)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String r2 = " CREATE TABLE IF NOT EXISTS t_cr ( _id INTEGER PRIMARY KEY , _tm int , _s1 text , _up int , _me int , _uc int , _dt blob ) "
            r0.append(r2)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            com.tencent.bugly.proguard.al.c(r2, r3)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String[] r3 = new java.lang.String[r1]     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            r5.execSQL(r2, r3)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            r0.setLength(r1)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String r2 = " CREATE TABLE IF NOT EXISTS dl_1002 (_id integer primary key autoincrement, _dUrl varchar(100), _sFile varchar(100), _sLen INTEGER, _tLen INTEGER, _MD5 varchar(100), _DLTIME INTEGER)"
            r0.append(r2)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            com.tencent.bugly.proguard.al.c(r2, r3)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String[] r3 = new java.lang.String[r1]     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            r5.execSQL(r2, r3)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            r0.setLength(r1)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String r2 = "CREATE TABLE IF NOT EXISTS ge_1002 (_id integer primary key autoincrement, _time INTEGER, _datas blob)"
            r0.append(r2)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            com.tencent.bugly.proguard.al.c(r2, r3)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String[] r3 = new java.lang.String[r1]     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            r5.execSQL(r2, r3)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            r0.setLength(r1)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String r2 = " CREATE TABLE IF NOT EXISTS st_1002 ( _id integer , _tp text , _tm int , _dt blob,primary key(_id,_tp )) "
            r0.append(r2)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            com.tencent.bugly.proguard.al.c(r2, r3)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String[] r3 = new java.lang.String[r1]     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            r5.execSQL(r2, r3)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            r0.setLength(r1)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String r2 = " CREATE TABLE IF NOT EXISTS t_sla ( _id TEXT NOT NULL , _tm INTEGER NOT NULL , _dt TEXT NOT NULL , PRIMARY KEY(_id) ) "
            r0.append(r2)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            com.tencent.bugly.proguard.al.c(r0, r2)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            java.lang.String[] r1 = new java.lang.String[r1]     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            r5.execSQL(r0, r1)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Ld6
            goto Le0
        Ld4:
            r5 = move-exception
            goto L109
        Ld6:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.b(r0)     // Catch: java.lang.Throwable -> Ld4
            if (r1 != 0) goto Le0
            r0.printStackTrace()     // Catch: java.lang.Throwable -> Ld4
        Le0:
            java.util.List<com.tencent.bugly.proguard.o> r0 = r4.d     // Catch: java.lang.Throwable -> Ld4
            if (r0 != 0) goto Le6
            monitor-exit(r4)
            return
        Le6:
            java.util.List<com.tencent.bugly.proguard.o> r0 = r4.d     // Catch: java.lang.Throwable -> Ld4
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> Ld4
        Lec:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> Ld4
            if (r1 == 0) goto L107
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> Ld4
            com.tencent.bugly.proguard.o r1 = (com.tencent.bugly.proguard.o) r1     // Catch: java.lang.Throwable -> Ld4
            r1.onDbCreate(r5)     // Catch: java.lang.Throwable -> Ld4 java.lang.Throwable -> Lfc
            goto Lec
        Lfc:
            r1 = move-exception
            boolean r2 = com.tencent.bugly.proguard.al.b(r1)     // Catch: java.lang.Throwable -> Ld4
            if (r2 != 0) goto Lec
            r1.printStackTrace()     // Catch: java.lang.Throwable -> Ld4
            goto Lec
        L107:
            monitor-exit(r4)
            return
        L109:
            monitor-exit(r4)
            throw r5
    }

    @Override
    @android.annotation.TargetApi(11)
    public final synchronized void onDowngrade(android.database.sqlite.SQLiteDatabase r6, int r7, int r8) {
            r5 = this;
            monitor-enter(r5)
            int r0 = com.tencent.bugly.proguard.ab.c()     // Catch: java.lang.Throwable -> L6b
            r1 = 11
            if (r0 < r1) goto L69
            java.lang.String r0 = "[Database] Downgrade %d to %d drop tables."
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L6b
            java.lang.Integer r2 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Throwable -> L6b
            r3 = 0
            r1[r3] = r2     // Catch: java.lang.Throwable -> L6b
            r2 = 1
            java.lang.Integer r4 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L6b
            r1[r2] = r4     // Catch: java.lang.Throwable -> L6b
            com.tencent.bugly.proguard.al.d(r0, r1)     // Catch: java.lang.Throwable -> L6b
            java.util.List<com.tencent.bugly.proguard.o> r0 = r5.d     // Catch: java.lang.Throwable -> L6b
            if (r0 == 0) goto L44
            java.util.List<com.tencent.bugly.proguard.o> r0 = r5.d     // Catch: java.lang.Throwable -> L6b
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L6b
        L29:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L6b
            if (r1 == 0) goto L44
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L6b
            com.tencent.bugly.proguard.o r1 = (com.tencent.bugly.proguard.o) r1     // Catch: java.lang.Throwable -> L6b
            r1.onDbDowngrade(r6, r7, r8)     // Catch: java.lang.Throwable -> L39 java.lang.Throwable -> L6b
            goto L29
        L39:
            r1 = move-exception
            boolean r2 = com.tencent.bugly.proguard.al.b(r1)     // Catch: java.lang.Throwable -> L6b
            if (r2 != 0) goto L29
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L6b
            goto L29
        L44:
            boolean r7 = r5.a(r6)     // Catch: java.lang.Throwable -> L6b
            if (r7 == 0) goto L4f
            r5.onCreate(r6)     // Catch: java.lang.Throwable -> L6b
            monitor-exit(r5)
            return
        L4f:
            java.lang.String r6 = "[Database] Failed to drop, delete db."
            java.lang.Object[] r7 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L6b
            com.tencent.bugly.proguard.al.d(r6, r7)     // Catch: java.lang.Throwable -> L6b
            android.content.Context r6 = r5.c     // Catch: java.lang.Throwable -> L6b
            java.lang.String r7 = com.tencent.bugly.proguard.x.a     // Catch: java.lang.Throwable -> L6b
            java.io.File r6 = r6.getDatabasePath(r7)     // Catch: java.lang.Throwable -> L6b
            if (r6 == 0) goto L69
            boolean r7 = r6.canWrite()     // Catch: java.lang.Throwable -> L6b
            if (r7 == 0) goto L69
            r6.delete()     // Catch: java.lang.Throwable -> L6b
        L69:
            monitor-exit(r5)
            return
        L6b:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    @Override
    public final synchronized void onUpgrade(android.database.sqlite.SQLiteDatabase r6, int r7, int r8) {
            r5 = this;
            monitor-enter(r5)
            java.lang.String r0 = "[Database] Upgrade %d to %d , drop tables!"
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L63
            java.lang.Integer r2 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Throwable -> L63
            r3 = 0
            r1[r3] = r2     // Catch: java.lang.Throwable -> L63
            r2 = 1
            java.lang.Integer r4 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L63
            r1[r2] = r4     // Catch: java.lang.Throwable -> L63
            com.tencent.bugly.proguard.al.d(r0, r1)     // Catch: java.lang.Throwable -> L63
            java.util.List<com.tencent.bugly.proguard.o> r0 = r5.d     // Catch: java.lang.Throwable -> L63
            if (r0 == 0) goto L3c
            java.util.List<com.tencent.bugly.proguard.o> r0 = r5.d     // Catch: java.lang.Throwable -> L63
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L63
        L21:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L63
            if (r1 == 0) goto L3c
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L63
            com.tencent.bugly.proguard.o r1 = (com.tencent.bugly.proguard.o) r1     // Catch: java.lang.Throwable -> L63
            r1.onDbUpgrade(r6, r7, r8)     // Catch: java.lang.Throwable -> L31 java.lang.Throwable -> L63
            goto L21
        L31:
            r1 = move-exception
            boolean r2 = com.tencent.bugly.proguard.al.b(r1)     // Catch: java.lang.Throwable -> L63
            if (r2 != 0) goto L21
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L63
            goto L21
        L3c:
            boolean r7 = r5.a(r6)     // Catch: java.lang.Throwable -> L63
            if (r7 == 0) goto L47
            r5.onCreate(r6)     // Catch: java.lang.Throwable -> L63
            monitor-exit(r5)
            return
        L47:
            java.lang.String r6 = "[Database] Failed to drop, delete db."
            java.lang.Object[] r7 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L63
            com.tencent.bugly.proguard.al.d(r6, r7)     // Catch: java.lang.Throwable -> L63
            android.content.Context r6 = r5.c     // Catch: java.lang.Throwable -> L63
            java.lang.String r7 = com.tencent.bugly.proguard.x.a     // Catch: java.lang.Throwable -> L63
            java.io.File r6 = r6.getDatabasePath(r7)     // Catch: java.lang.Throwable -> L63
            if (r6 == 0) goto L61
            boolean r7 = r6.canWrite()     // Catch: java.lang.Throwable -> L63
            if (r7 == 0) goto L61
            r6.delete()     // Catch: java.lang.Throwable -> L63
        L61:
            monitor-exit(r5)
            return
        L63:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }
}
