package com.reyun.tracking.utils;

public class i {
    private static java.util.concurrent.ConcurrentHashMap d;
    final java.lang.String a;
    final java.lang.String b;
    final int c;
    private java.util.concurrent.atomic.AtomicInteger e;
    private com.reyun.tracking.utils.j f;
    private android.database.sqlite.SQLiteDatabase g;
    private java.lang.String h;
    private android.content.Context i;

    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.reyun.tracking.utils.i.d = r0
            return
    }

    private i() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "ReyunDB"
            r1.a = r0
            java.lang.String r0 = "Reyun.db"
            r1.b = r0
            r0 = 1
            r1.c = r0
            return
    }

    private i(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "ReyunDB"
            r1.a = r0
            java.lang.String r0 = "Reyun.db"
            r1.b = r0
            r0 = 1
            r1.c = r0
            r1.i = r2
            com.reyun.tracking.utils.j r0 = new com.reyun.tracking.utils.j
            r0.<init>(r1, r2)
            r1.f = r0
            r1.h = r3
            java.util.concurrent.atomic.AtomicInteger r2 = new java.util.concurrent.atomic.AtomicInteger
            r2.<init>()
            r1.e = r2
            return
    }

    public static com.reyun.tracking.utils.i a(android.content.Context r3, java.lang.String r4) {
            java.lang.Class<com.reyun.tracking.utils.i> r0 = com.reyun.tracking.utils.i.class
            monitor-enter(r0)
            java.util.concurrent.ConcurrentHashMap r1 = com.reyun.tracking.utils.i.d     // Catch: java.lang.Throwable -> L2c
            if (r1 != 0) goto Le
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> L2c
            r1.<init>()     // Catch: java.lang.Throwable -> L2c
            com.reyun.tracking.utils.i.d = r1     // Catch: java.lang.Throwable -> L2c
        Le:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2c
            java.util.concurrent.ConcurrentHashMap r0 = com.reyun.tracking.utils.i.d
            boolean r0 = r0.containsKey(r4)
            if (r0 != 0) goto L23
            java.util.concurrent.ConcurrentHashMap r0 = com.reyun.tracking.utils.i.d
            com.reyun.tracking.utils.i r1 = new com.reyun.tracking.utils.i
            java.lang.String r2 = "tracking"
            r1.<init>(r3, r2)
            r0.put(r4, r1)
        L23:
            java.util.concurrent.ConcurrentHashMap r3 = com.reyun.tracking.utils.i.d
            java.lang.Object r3 = r3.get(r4)
            com.reyun.tracking.utils.i r3 = (com.reyun.tracking.utils.i) r3
            return r3
        L2c:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2c
            throw r3
    }

    static java.lang.String a(com.reyun.tracking.utils.i r0) {
            java.lang.String r0 = r0.h
            return r0
    }

    private org.json.JSONObject a(byte[] r3) {
            r2 = this;
            if (r3 == 0) goto L35
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            r0.<init>(r3)
            java.io.BufferedReader r3 = new java.io.BufferedReader
            java.io.InputStreamReader r1 = new java.io.InputStreamReader
            r1.<init>(r0)
            r0 = 8192(0x2000, float:1.148E-41)
            r3.<init>(r1, r0)
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
        L18:
            java.lang.String r1 = r3.readLine()     // Catch: java.lang.Exception -> L2c java.io.IOException -> L31
            if (r1 == 0) goto L22
            r0.append(r1)     // Catch: java.lang.Exception -> L2c java.io.IOException -> L31
            goto L18
        L22:
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2c java.io.IOException -> L31
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L2c java.io.IOException -> L31
            r3.<init>(r0)     // Catch: java.lang.Exception -> L2c java.io.IOException -> L31
            goto L36
        L2c:
            r3 = move-exception
            r3.printStackTrace()
            goto L35
        L31:
            r3 = move-exception
            r3.printStackTrace()
        L35:
            r3 = 0
        L36:
            return r3
    }

    private void a(java.lang.String r3, int r4, java.lang.String r5, java.lang.String[] r6) {
            r2 = this;
            android.content.Context r0 = r2.i
            if (r0 != 0) goto L21
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "mContext is Null when update status from database"
            r3.append(r4)
            java.util.concurrent.atomic.AtomicInteger r4 = r2.e
            int r4 = r4.get()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "ReyunDB"
            android.util.Log.w(r4, r3)
            return
        L21:
            r2.b()     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L45
            android.database.sqlite.SQLiteDatabase r0 = r2.g     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L45
            if (r0 != 0) goto L2c
            r2.c()
            return
        L2c:
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L45
            r0.<init>()     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L45
            java.lang.String r1 = "priority"
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L45
            r0.put(r1, r4)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L45
            android.database.sqlite.SQLiteDatabase r4 = r2.g     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L45
            r4.update(r3, r0, r5, r6)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L45
            goto L45
        L40:
            r3 = move-exception
            r2.c()
            throw r3
        L45:
            r2.c()
            return
    }

    private void b() {
            r3 = this;
            android.database.sqlite.SQLiteDatabase r0 = r3.g
            java.lang.String r1 = "ReyunDB"
            if (r0 == 0) goto L27
            boolean r0 = r0.isOpen()
            if (r0 == 0) goto L27
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "Database was opened!"
            r0.append(r2)
            java.util.concurrent.atomic.AtomicInteger r2 = r3.e
            int r2 = r2.get()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            android.util.Log.w(r1, r0)
            return
        L27:
            java.util.concurrent.atomic.AtomicInteger r0 = r3.e     // Catch: java.lang.Exception -> L65
            int r0 = r0.incrementAndGet()     // Catch: java.lang.Exception -> L65
            r2 = 1
            if (r0 != r2) goto L38
            com.reyun.tracking.utils.j r0 = r3.f     // Catch: java.lang.Exception -> L65
            android.database.sqlite.SQLiteDatabase r0 = r0.getWritableDatabase()     // Catch: java.lang.Exception -> L65
            r3.g = r0     // Catch: java.lang.Exception -> L65
        L38:
            android.database.sqlite.SQLiteDatabase r0 = r3.g     // Catch: java.lang.Exception -> L65
            if (r0 != 0) goto L3d
            return
        L3d:
            android.database.sqlite.SQLiteDatabase r0 = r3.g     // Catch: java.lang.Exception -> L65
            boolean r0 = r0.isReadOnly()     // Catch: java.lang.Exception -> L65
            if (r0 == 0) goto L4b
            java.lang.String r0 = "Your memory is not enough!"
            android.util.Log.w(r1, r0)     // Catch: java.lang.Exception -> L65
            goto L65
        L4b:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L65
            r0.<init>()     // Catch: java.lang.Exception -> L65
            java.lang.String r2 = "Database was already opened!"
            r0.append(r2)     // Catch: java.lang.Exception -> L65
            java.util.concurrent.atomic.AtomicInteger r2 = r3.e     // Catch: java.lang.Exception -> L65
            int r2 = r2.get()     // Catch: java.lang.Exception -> L65
            r0.append(r2)     // Catch: java.lang.Exception -> L65
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L65
            android.util.Log.d(r1, r0)     // Catch: java.lang.Exception -> L65
        L65:
            return
    }

    private void c() {
            r0 = this;
            return
    }

    public long a(android.content.ContentValues r4) {
            r3 = this;
            java.util.concurrent.ConcurrentHashMap r0 = com.reyun.tracking.utils.i.d
            monitor-enter(r0)
            java.lang.String r1 = r3.h     // Catch: java.lang.Throwable -> Lb
            long r1 = r3.a(r1, r4)     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            return r1
        Lb:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            throw r4
    }

    public long a(java.lang.String r5, android.content.ContentValues r6) {
            r4 = this;
            android.content.Context r0 = r4.i
            r1 = -1
            if (r0 != 0) goto L23
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "mContext is Null when insert data to database"
            r5.append(r6)
            java.util.concurrent.atomic.AtomicInteger r6 = r4.e
            int r6 = r6.get()
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            java.lang.String r6 = "ReyunDB"
            android.util.Log.w(r6, r5)
            return r1
        L23:
            r4.b()     // Catch: java.lang.Throwable -> L39 java.lang.Exception -> L3e
            android.database.sqlite.SQLiteDatabase r0 = r4.g     // Catch: java.lang.Throwable -> L39 java.lang.Exception -> L3e
            if (r0 != 0) goto L2e
            r4.c()
            return r1
        L2e:
            android.database.sqlite.SQLiteDatabase r0 = r4.g     // Catch: java.lang.Throwable -> L39 java.lang.Exception -> L3e
            r3 = 0
            long r5 = r0.insert(r5, r3, r6)     // Catch: java.lang.Throwable -> L39 java.lang.Exception -> L3e
            r4.c()
            return r5
        L39:
            r5 = move-exception
            r4.c()
            throw r5
        L3e:
            r4.c()
            return r1
    }

    public com.reyun.tracking.utils.k a(int r3) {
            r2 = this;
            java.util.concurrent.ConcurrentHashMap r0 = com.reyun.tracking.utils.i.d
            monitor-enter(r0)
            java.lang.String r1 = r2.h     // Catch: java.lang.Throwable -> Lb
            com.reyun.tracking.utils.k r3 = r2.a(r1, r3)     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            return r3
        Lb:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            throw r3
    }

    public com.reyun.tracking.utils.k a(java.lang.String r9, int r10) {
            r8 = this;
            android.content.Context r0 = r8.i
            java.lang.String r1 = "ReyunDB"
            r2 = 0
            if (r0 != 0) goto L22
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = "mContext is Null when query data from database"
            r9.append(r10)
            java.util.concurrent.atomic.AtomicInteger r10 = r8.e
            int r10 = r10.get()
            r9.append(r10)
            java.lang.String r9 = r9.toString()
            android.util.Log.w(r1, r9)
            return r2
        L22:
            r8.b()
            android.database.sqlite.SQLiteDatabase r0 = r8.g
            if (r0 != 0) goto L31
            java.lang.String r9 = "TrackingIO"
            java.lang.String r10 = "queryDataWithLimit mSQLiteDatabase == null"
            com.reyun.tracking.a.a.c(r9, r10)
            return r2
        L31:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb6 java.lang.Exception -> Lb8
            r3.<init>()     // Catch: java.lang.Throwable -> Lb6 java.lang.Exception -> Lb8
            java.lang.String r4 = "SELECT * FROM "
            r3.append(r4)     // Catch: java.lang.Throwable -> Lb6 java.lang.Exception -> Lb8
            r3.append(r9)     // Catch: java.lang.Throwable -> Lb6 java.lang.Exception -> Lb8
            java.lang.String r4 = " WHERE priority='0' limit ?"
            r3.append(r4)     // Catch: java.lang.Throwable -> Lb6 java.lang.Exception -> Lb8
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> Lb6 java.lang.Exception -> Lb8
            r4 = 1
            java.lang.String[] r4 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> Lb6 java.lang.Exception -> Lb8
            r5 = 0
            java.lang.String r10 = java.lang.String.valueOf(r10)     // Catch: java.lang.Throwable -> Lb6 java.lang.Exception -> Lb8
            r4[r5] = r10     // Catch: java.lang.Throwable -> Lb6 java.lang.Exception -> Lb8
            android.database.Cursor r10 = r0.rawQuery(r3, r4)     // Catch: java.lang.Throwable -> Lb6 java.lang.Exception -> Lb8
            if (r10 == 0) goto Lb3
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Exception -> Lb1 java.lang.Throwable -> Lc6
            r0.<init>()     // Catch: java.lang.Exception -> Lb1 java.lang.Throwable -> Lc6
            org.json.JSONArray r3 = new org.json.JSONArray     // Catch: java.lang.Exception -> Lb1 java.lang.Throwable -> Lc6
            r3.<init>()     // Catch: java.lang.Exception -> Lb1 java.lang.Throwable -> Lc6
        L61:
            boolean r4 = r10.moveToNext()     // Catch: java.lang.Exception -> Lb1 java.lang.Throwable -> Lc6
            if (r4 == 0) goto La6
            java.lang.String r4 = "_id"
            int r4 = r10.getColumnIndex(r4)     // Catch: java.lang.Exception -> Lb1 java.lang.Throwable -> Lc6
            int r4 = r10.getInt(r4)     // Catch: java.lang.Exception -> Lb1 java.lang.Throwable -> Lc6
            java.lang.String r5 = "value"
            int r5 = r10.getColumnIndex(r5)     // Catch: java.lang.Exception -> Lb1 java.lang.Throwable -> Lc6
            byte[] r5 = r10.getBlob(r5)     // Catch: java.lang.Exception -> Lb1 java.lang.Throwable -> Lc6
            java.lang.String r6 = java.lang.String.valueOf(r4)     // Catch: java.lang.Exception -> Lb1 java.lang.Throwable -> Lc6
            r0.add(r6)     // Catch: java.lang.Exception -> Lb1 java.lang.Throwable -> Lc6
            org.json.JSONObject r5 = r8.a(r5)     // Catch: java.lang.Exception -> Lb1 java.lang.Throwable -> Lc6
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb1 java.lang.Throwable -> Lc6
            r6.<init>()     // Catch: java.lang.Exception -> Lb1 java.lang.Throwable -> Lc6
            java.lang.String r7 = "==== query failed record row from + "
            r6.append(r7)     // Catch: java.lang.Exception -> Lb1 java.lang.Throwable -> Lc6
            r6.append(r9)     // Catch: java.lang.Exception -> Lb1 java.lang.Throwable -> Lc6
            java.lang.String r7 = " id is ======"
            r6.append(r7)     // Catch: java.lang.Exception -> Lb1 java.lang.Throwable -> Lc6
            r6.append(r4)     // Catch: java.lang.Exception -> Lb1 java.lang.Throwable -> Lc6
            java.lang.String r4 = r6.toString()     // Catch: java.lang.Exception -> Lb1 java.lang.Throwable -> Lc6
            com.reyun.tracking.a.a.c(r1, r4)     // Catch: java.lang.Exception -> Lb1 java.lang.Throwable -> Lc6
            r3.put(r5)     // Catch: java.lang.Exception -> Lb1 java.lang.Throwable -> Lc6
            goto L61
        La6:
            java.lang.String r9 = r3.toString()     // Catch: java.lang.Exception -> Lb1 java.lang.Throwable -> Lc6
            com.reyun.tracking.utils.k r1 = new com.reyun.tracking.utils.k     // Catch: java.lang.Exception -> Lb1 java.lang.Throwable -> Lc6
            r1.<init>(r8, r0, r9)     // Catch: java.lang.Exception -> Lb1 java.lang.Throwable -> Lc6
            r2 = r1
            goto Lb3
        Lb1:
            r9 = move-exception
            goto Lba
        Lb3:
            if (r10 == 0) goto Lc2
            goto Lbf
        Lb6:
            r9 = move-exception
            goto Lc8
        Lb8:
            r9 = move-exception
            r10 = r2
        Lba:
            r9.printStackTrace()     // Catch: java.lang.Throwable -> Lc6
            if (r10 == 0) goto Lc2
        Lbf:
            r10.close()
        Lc2:
            r8.c()
            return r2
        Lc6:
            r9 = move-exception
            r2 = r10
        Lc8:
            if (r2 == 0) goto Lcd
            r2.close()
        Lcd:
            r8.c()
            throw r9
    }

    public void a() {
            r3 = this;
            android.database.sqlite.SQLiteDatabase r0 = r3.g     // Catch: java.lang.Exception -> L36
            if (r0 == 0) goto L29
            android.database.sqlite.SQLiteDatabase r0 = r3.g     // Catch: java.lang.Exception -> L36
            boolean r0 = r0.isOpen()     // Catch: java.lang.Exception -> L36
            if (r0 != 0) goto L29
            java.lang.String r0 = "ReyunDB"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L36
            r1.<init>()     // Catch: java.lang.Exception -> L36
            java.lang.String r2 = "Database was closed!"
            r1.append(r2)     // Catch: java.lang.Exception -> L36
            java.util.concurrent.atomic.AtomicInteger r2 = r3.e     // Catch: java.lang.Exception -> L36
            int r2 = r2.get()     // Catch: java.lang.Exception -> L36
            r1.append(r2)     // Catch: java.lang.Exception -> L36
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L36
            android.util.Log.w(r0, r1)     // Catch: java.lang.Exception -> L36
            return
        L29:
            java.util.concurrent.atomic.AtomicInteger r0 = r3.e     // Catch: java.lang.Exception -> L36
            int r0 = r0.decrementAndGet()     // Catch: java.lang.Exception -> L36
            if (r0 != 0) goto L36
            android.database.sqlite.SQLiteDatabase r0 = r3.g     // Catch: java.lang.Exception -> L36
            r0.close()     // Catch: java.lang.Exception -> L36
        L36:
            return
    }

    public void a(java.lang.String r6) {
            r5 = this;
            java.util.concurrent.ConcurrentHashMap r0 = com.reyun.tracking.utils.i.d
            monitor-enter(r0)
            java.lang.String r1 = r5.h     // Catch: java.lang.Throwable -> L12
            java.lang.String r2 = "_id=?"
            r3 = 1
            java.lang.String[] r3 = new java.lang.String[r3]     // Catch: java.lang.Throwable -> L12
            r4 = 0
            r3[r4] = r6     // Catch: java.lang.Throwable -> L12
            r5.a(r1, r2, r3)     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            return
        L12:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            throw r6
    }

    public void a(java.lang.String r2, java.lang.String r3, java.lang.String[] r4) {
            r1 = this;
            android.content.Context r0 = r1.i
            if (r0 != 0) goto L21
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "mContext is Null when delete data from database"
            r2.append(r3)
            java.util.concurrent.atomic.AtomicInteger r3 = r1.e
            int r3 = r3.get()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "ReyunDB"
            android.util.Log.w(r3, r2)
            return
        L21:
            r1.b()     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L37
            android.database.sqlite.SQLiteDatabase r0 = r1.g     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L37
            if (r0 != 0) goto L2c
            r1.c()
            return
        L2c:
            android.database.sqlite.SQLiteDatabase r0 = r1.g     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L37
            r0.delete(r2, r3, r4)     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L37
            goto L37
        L32:
            r2 = move-exception
            r1.c()
            throw r2
        L37:
            r1.c()
            return
    }

    public void b(java.lang.String r6, int r7) {
            r5 = this;
            java.util.concurrent.ConcurrentHashMap r0 = com.reyun.tracking.utils.i.d
            monitor-enter(r0)
            java.lang.String r1 = r5.h     // Catch: java.lang.Throwable -> L12
            java.lang.String r2 = "_id=?"
            r3 = 1
            java.lang.String[] r3 = new java.lang.String[r3]     // Catch: java.lang.Throwable -> L12
            r4 = 0
            r3[r4] = r6     // Catch: java.lang.Throwable -> L12
            r5.a(r1, r7, r2, r3)     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            return
        L12:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            throw r6
    }
}
