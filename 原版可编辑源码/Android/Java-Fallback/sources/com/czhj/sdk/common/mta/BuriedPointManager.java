package com.czhj.sdk.common.mta;

public class BuriedPointManager {
    private static final int a = 500000;
    private static com.czhj.sdk.common.mta.BuriedPointManager f;
    private final java.util.concurrent.locks.ReadWriteLock b;
    private java.util.HashMap<java.lang.Integer, java.lang.String> c;
    private java.util.List<java.lang.String> d;
    private volatile boolean e;
    private java.util.Set<java.lang.Integer> g;
    private android.database.sqlite.SQLiteDatabase h;
    private int i;
    private com.czhj.sdk.common.ThreadPool.RepeatingHandlerRunnable j;




    private BuriedPointManager() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.locks.ReentrantReadWriteLock r0 = new java.util.concurrent.locks.ReentrantReadWriteLock
            r0.<init>()
            r1.b = r0
            r0 = 0
            r1.c = r0
            r1.d = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.g = r0
            return
    }

    static com.czhj.sdk.common.ThreadPool.RepeatingHandlerRunnable a(com.czhj.sdk.common.mta.BuriedPointManager r0) {
            com.czhj.sdk.common.ThreadPool.RepeatingHandlerRunnable r0 = r0.j
            return r0
    }

    private synchronized java.util.HashMap<java.lang.Integer, java.lang.String> a(int r11) {
            r10 = this;
            monitor-enter(r10)
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Throwable -> L84
            r0.<init>()     // Catch: java.lang.Throwable -> L84
            r1 = 0
            android.database.sqlite.SQLiteDatabase r2 = r10.h     // Catch: java.lang.Throwable -> L72
            java.lang.String r3 = "select * from point where item not null order by point_id"
            android.database.Cursor r1 = r2.rawQuery(r3, r1)     // Catch: java.lang.Throwable -> L72
            r2 = 0
            if (r1 == 0) goto L6c
            boolean r3 = r1.moveToFirst()     // Catch: java.lang.Throwable -> L72
            if (r3 == 0) goto L6c
            java.lang.String r3 = "item"
            int r3 = r1.getColumnIndex(r3)     // Catch: java.lang.Throwable -> L72
            java.lang.String r4 = "point_id"
            int r4 = r1.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L72
            java.lang.String r5 = "encryption"
            int r5 = r1.getColumnIndex(r5)     // Catch: java.lang.Throwable -> L72
        L2a:
            if (r2 >= r11) goto L6c
            java.lang.String r6 = r1.getString(r3)     // Catch: java.lang.Throwable -> L72
            int r7 = r1.getInt(r4)     // Catch: java.lang.Throwable -> L72
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Throwable -> L72
            int r8 = r1.getInt(r5)     // Catch: java.lang.Throwable -> L72
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L72
            boolean r9 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L72
            if (r9 != 0) goto L62
            int r8 = r8.intValue()     // Catch: java.lang.Throwable -> L72
            r9 = 1
            if (r8 != r9) goto L5f
            java.lang.String r8 = "sigandroid_mtadb"
            java.lang.String r8 = com.czhj.sdk.common.utils.AESUtil.DecryptString(r6, r8)     // Catch: java.lang.Throwable -> L72
            boolean r8 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L72
            if (r8 != 0) goto L62
            java.lang.String r8 = "sigandroid_mtadb"
            java.lang.String r6 = com.czhj.sdk.common.utils.AESUtil.DecryptString(r6, r8)     // Catch: java.lang.Throwable -> L72
        L5f:
            r0.put(r7, r6)     // Catch: java.lang.Throwable -> L72
        L62:
            boolean r6 = r1.moveToNext()     // Catch: java.lang.Throwable -> L72
            if (r6 != 0) goto L69
            goto L6c
        L69:
            int r2 = r2 + 1
            goto L2a
        L6c:
            if (r1 == 0) goto L7b
        L6e:
            r1.close()     // Catch: java.lang.Throwable -> L84
            goto L7b
        L72:
            r11 = move-exception
            java.lang.String r2 = "getlogs fail"
            com.czhj.sdk.logger.SigmobLog.e(r2, r11)     // Catch: java.lang.Throwable -> L7d
            if (r1 == 0) goto L7b
            goto L6e
        L7b:
            monitor-exit(r10)
            return r0
        L7d:
            r11 = move-exception
            if (r1 == 0) goto L83
            r1.close()     // Catch: java.lang.Throwable -> L84
        L83:
            throw r11     // Catch: java.lang.Throwable -> L84
        L84:
            r11 = move-exception
            monitor-exit(r10)
            throw r11
    }

    static java.util.HashMap a(com.czhj.sdk.common.mta.BuriedPointManager r0, java.util.HashMap r1) {
            r0.c = r1
            return r1
    }

    private void a() {
            r5 = this;
            android.database.sqlite.SQLiteDatabase r0 = r5.h     // Catch: java.lang.Throwable -> L15
            java.lang.String r1 = "point"
            long r0 = android.database.DatabaseUtils.queryNumEntries(r0, r1)     // Catch: java.lang.Throwable -> L15
            r2 = 500000(0x7a120, double:2.47033E-318)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 > 0) goto L10
            return
        L10:
            long r0 = r0 - r2
            r5.a(r0)     // Catch: java.lang.Throwable -> L15
            goto L1b
        L15:
            r0 = move-exception
            java.lang.String r1 = "clearLogDB fail"
            com.czhj.sdk.logger.SigmobLog.e(r1, r0)     // Catch: java.lang.Throwable -> L1c
        L1b:
            return
        L1c:
            r0 = move-exception
            throw r0
    }

    private void a(long r6) {
            r5 = this;
            java.lang.String r0 = "point"
            android.database.sqlite.SQLiteDatabase r1 = r5.h     // Catch: java.lang.Throwable -> L78
            long r1 = android.database.DatabaseUtils.queryNumEntries(r1, r0)     // Catch: java.lang.Throwable -> L78
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L78
            r3.<init>()     // Catch: java.lang.Throwable -> L78
            java.lang.String r4 = "begin numRows "
            r3.append(r4)     // Catch: java.lang.Throwable -> L78
            r3.append(r1)     // Catch: java.lang.Throwable -> L78
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> L78
            com.czhj.sdk.logger.SigmobLog.d(r1)     // Catch: java.lang.Throwable -> L78
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L78
            r1.<init>()     // Catch: java.lang.Throwable -> L78
            java.lang.String r2 = "delete from "
            r1.append(r2)     // Catch: java.lang.Throwable -> L78
            r1.append(r0)     // Catch: java.lang.Throwable -> L78
            java.lang.String r2 = " where point_id in ( "
            r1.append(r2)     // Catch: java.lang.Throwable -> L78
            java.lang.String r2 = " select point_id from "
            r1.append(r2)     // Catch: java.lang.Throwable -> L78
            r1.append(r0)     // Catch: java.lang.Throwable -> L78
            java.lang.String r2 = " order by point_id "
            r1.append(r2)     // Catch: java.lang.Throwable -> L78
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L78
            r2.<init>()     // Catch: java.lang.Throwable -> L78
            java.lang.String r3 = " limit "
            r2.append(r3)     // Catch: java.lang.Throwable -> L78
            r2.append(r6)     // Catch: java.lang.Throwable -> L78
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> L78
            r1.append(r6)     // Catch: java.lang.Throwable -> L78
            java.lang.String r6 = " )"
            r1.append(r6)     // Catch: java.lang.Throwable -> L78
            android.database.sqlite.SQLiteDatabase r6 = r5.h     // Catch: java.lang.Throwable -> L78
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Throwable -> L78
            r6.execSQL(r7)     // Catch: java.lang.Throwable -> L78
            android.database.sqlite.SQLiteDatabase r6 = r5.h     // Catch: java.lang.Throwable -> L78
            long r6 = android.database.DatabaseUtils.queryNumEntries(r6, r0)     // Catch: java.lang.Throwable -> L78
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L78
            r0.<init>()     // Catch: java.lang.Throwable -> L78
            java.lang.String r1 = "end numRows "
            r0.append(r1)     // Catch: java.lang.Throwable -> L78
            r0.append(r6)     // Catch: java.lang.Throwable -> L78
            java.lang.String r6 = r0.toString()     // Catch: java.lang.Throwable -> L78
            com.czhj.sdk.logger.SigmobLog.d(r6)     // Catch: java.lang.Throwable -> L78
            goto L7e
        L78:
            r6 = move-exception
            java.lang.String r7 = "clearLogDB fail"
            com.czhj.sdk.logger.SigmobLog.e(r7, r6)     // Catch: java.lang.Throwable -> L7f
        L7e:
            return
        L7f:
            r6 = move-exception
            throw r6
    }

    private void a(java.lang.String r2, boolean r3) {
            r1 = this;
            r0 = 1
            r1.e = r0
            com.czhj.sdk.common.mta.BuriedPointManager$3 r0 = new com.czhj.sdk.common.mta.BuriedPointManager$3
            r0.<init>(r1, r3)
            com.czhj.sdk.common.network.BuriedPointRequest.BuriedPointSend(r2, r0)
            return
    }

    private void a(java.util.Set<java.lang.Integer> r6) {
            r5 = this;
            java.lang.String r0 = "point"
            java.util.Iterator r6 = r6.iterator()     // Catch: java.lang.Throwable -> L7c
            boolean r1 = r6.hasNext()     // Catch: java.lang.Throwable -> L7c
            if (r1 != 0) goto Ld
            return
        Ld:
            android.database.sqlite.SQLiteDatabase r1 = r5.h     // Catch: java.lang.Throwable -> L7c
            long r1 = android.database.DatabaseUtils.queryNumEntries(r1, r0)     // Catch: java.lang.Throwable -> L7c
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7c
            r3.<init>()     // Catch: java.lang.Throwable -> L7c
            java.lang.String r4 = "begin numRows "
            r3.append(r4)     // Catch: java.lang.Throwable -> L7c
            r3.append(r1)     // Catch: java.lang.Throwable -> L7c
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> L7c
            com.czhj.sdk.logger.SigmobLog.d(r1)     // Catch: java.lang.Throwable -> L7c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7c
            r1.<init>()     // Catch: java.lang.Throwable -> L7c
            java.lang.String r2 = "delete from "
            r1.append(r2)     // Catch: java.lang.Throwable -> L7c
            r1.append(r0)     // Catch: java.lang.Throwable -> L7c
            java.lang.String r2 = " where point_id in ( "
            r1.append(r2)     // Catch: java.lang.Throwable -> L7c
        L39:
            java.lang.Object r2 = r6.next()     // Catch: java.lang.Throwable -> L7c
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.Throwable -> L7c
            r1.append(r2)     // Catch: java.lang.Throwable -> L7c
            boolean r2 = r6.hasNext()     // Catch: java.lang.Throwable -> L7c
            if (r2 != 0) goto L71
            java.lang.String r6 = " )"
            r1.append(r6)     // Catch: java.lang.Throwable -> L7c
            android.database.sqlite.SQLiteDatabase r6 = r5.h     // Catch: java.lang.Throwable -> L7c
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L7c
            r6.execSQL(r1)     // Catch: java.lang.Throwable -> L7c
            android.database.sqlite.SQLiteDatabase r6 = r5.h     // Catch: java.lang.Throwable -> L7c
            long r0 = android.database.DatabaseUtils.queryNumEntries(r6, r0)     // Catch: java.lang.Throwable -> L7c
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7c
            r6.<init>()     // Catch: java.lang.Throwable -> L7c
            java.lang.String r2 = "end numRows "
            r6.append(r2)     // Catch: java.lang.Throwable -> L7c
            r6.append(r0)     // Catch: java.lang.Throwable -> L7c
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L7c
            com.czhj.sdk.logger.SigmobLog.d(r6)     // Catch: java.lang.Throwable -> L7c
            goto L82
        L71:
            r2 = 44
            r1.append(r2)     // Catch: java.lang.Throwable -> L7c
            r2 = 32
            r1.append(r2)     // Catch: java.lang.Throwable -> L7c
            goto L39
        L7c:
            r6 = move-exception
            java.lang.String r0 = "clearLogDB fail"
            com.czhj.sdk.logger.SigmobLog.e(r0, r6)     // Catch: java.lang.Throwable -> L83
        L82:
            return
        L83:
            r6 = move-exception
            throw r6
    }

    static boolean a(com.czhj.sdk.common.mta.BuriedPointManager r0, boolean r1) {
            r0.e = r1
            return r1
    }

    private void b() {
            r5 = this;
            java.lang.String r0 = "point"
            android.database.sqlite.SQLiteDatabase r1 = r5.h     // Catch: java.lang.Throwable -> L52
            long r1 = android.database.DatabaseUtils.queryNumEntries(r1, r0)     // Catch: java.lang.Throwable -> L52
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L52
            r3.<init>()     // Catch: java.lang.Throwable -> L52
            java.lang.String r4 = "begin numRows "
            r3.append(r4)     // Catch: java.lang.Throwable -> L52
            r3.append(r1)     // Catch: java.lang.Throwable -> L52
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> L52
            com.czhj.sdk.logger.SigmobLog.d(r1)     // Catch: java.lang.Throwable -> L52
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L52
            r1.<init>()     // Catch: java.lang.Throwable -> L52
            java.lang.String r2 = "delete from "
            r1.append(r2)     // Catch: java.lang.Throwable -> L52
            r1.append(r0)     // Catch: java.lang.Throwable -> L52
            java.lang.String r2 = " where item is null"
            r1.append(r2)     // Catch: java.lang.Throwable -> L52
            android.database.sqlite.SQLiteDatabase r2 = r5.h     // Catch: java.lang.Throwable -> L52
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L52
            r2.execSQL(r1)     // Catch: java.lang.Throwable -> L52
            android.database.sqlite.SQLiteDatabase r1 = r5.h     // Catch: java.lang.Throwable -> L52
            long r0 = android.database.DatabaseUtils.queryNumEntries(r1, r0)     // Catch: java.lang.Throwable -> L52
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L52
            r2.<init>()     // Catch: java.lang.Throwable -> L52
            java.lang.String r3 = "end numRows "
            r2.append(r3)     // Catch: java.lang.Throwable -> L52
            r2.append(r0)     // Catch: java.lang.Throwable -> L52
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L52
            com.czhj.sdk.logger.SigmobLog.d(r0)     // Catch: java.lang.Throwable -> L52
            goto L58
        L52:
            r0 = move-exception
            java.lang.String r1 = "clearLogDB fail"
            com.czhj.sdk.logger.SigmobLog.e(r1, r0)     // Catch: java.lang.Throwable -> L59
        L58:
            return
        L59:
            r0 = move-exception
            throw r0
    }

    static void b(com.czhj.sdk.common.mta.BuriedPointManager r0) {
            r0.b()
            return
    }

    private java.lang.String c() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.List<java.lang.String> r1 = r3.d
            if (r1 == 0) goto L38
            int r1 = r1.size()
            if (r1 <= 0) goto L38
            java.util.List<java.lang.String> r1 = r3.d
            int r1 = r1.size()
            r3.i = r1
            java.util.List<java.lang.String> r1 = r3.d
            java.util.Iterator r1 = r1.iterator()
        L1d:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L38
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            r0.append(r2)
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1d
            java.lang.String r2 = ","
            r0.append(r2)
            goto L1d
        L38:
            java.lang.String r0 = r0.toString()
            return r0
    }

    static void c(com.czhj.sdk.common.mta.BuriedPointManager r0) {
            r0.a()
            return
    }

    private void d() {
            r1 = this;
            java.util.concurrent.locks.ReadWriteLock r0 = r1.b
            java.util.concurrent.locks.Lock r0 = r0.writeLock()
            r0.lock()
            java.util.HashMap<java.lang.Integer, java.lang.String> r0 = r1.c
            if (r0 == 0) goto L23
            int r0 = r0.size()
            if (r0 != 0) goto L14
            goto L23
        L14:
            java.util.HashMap<java.lang.Integer, java.lang.String> r0 = r1.c
            java.util.Set r0 = r0.keySet()
            r1.a(r0)
            r0 = 0
            r1.e = r0
            r0 = 0
            r1.c = r0
        L23:
            java.util.concurrent.locks.ReadWriteLock r0 = r1.b
            java.util.concurrent.locks.Lock r0 = r0.writeLock()
            r0.unlock()
            return
    }

    static void d(com.czhj.sdk.common.mta.BuriedPointManager r0) {
            r0.d()
            return
    }

    public static java.lang.String deflateAndBase64(java.lang.String r3) throws java.io.IOException {
            if (r3 == 0) goto L2f
            int r0 = r3.length()
            if (r0 != 0) goto L9
            goto L2f
        L9:
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            java.util.zip.DeflaterOutputStream r1 = new java.util.zip.DeflaterOutputStream
            r1.<init>(r0)
            java.lang.String r2 = "UTF-8"
            java.nio.charset.Charset r2 = java.nio.charset.Charset.forName(r2)
            byte[] r3 = r3.getBytes(r2)
            r1.write(r3)
            r1.flush()
            r1.close()
            byte[] r3 = r0.toByteArray()
            r0 = 2
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r0)
        L2f:
            return r3
    }

    private void e() {
            r3 = this;
            java.util.List<java.lang.String> r0 = r3.d
            if (r0 == 0) goto L2b
            int r0 = r0.size()
            if (r0 <= 0) goto L2b
            java.util.List<java.lang.String> r0 = r3.d
            int r0 = r0.size()
            int r1 = r3.i
            if (r0 <= r1) goto L23
            java.util.List<java.lang.String> r0 = r3.d
            int r2 = r0.size()
            int r2 = r2 + (-1)
            java.util.List r0 = r0.subList(r1, r2)
            r3.d = r0
            goto L28
        L23:
            java.util.List<java.lang.String> r0 = r3.d
            r0.clear()
        L28:
            r0 = 0
            r3.i = r0
        L2b:
            return
    }

    public static com.czhj.sdk.common.mta.BuriedPointManager getInstance() {
            java.lang.Class<com.czhj.sdk.common.mta.BuriedPointManager> r0 = com.czhj.sdk.common.mta.BuriedPointManager.class
            monitor-enter(r0)
            com.czhj.sdk.common.mta.BuriedPointManager r1 = com.czhj.sdk.common.mta.BuriedPointManager.f     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.czhj.sdk.common.mta.BuriedPointManager r1 = new com.czhj.sdk.common.mta.BuriedPointManager     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.czhj.sdk.common.mta.BuriedPointManager.f = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.czhj.sdk.common.mta.BuriedPointManager r1 = com.czhj.sdk.common.mta.BuriedPointManager.f     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            throw r1
    }

    public void addWaitSend(java.lang.String r2) {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.d
            if (r0 != 0) goto Lb
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r1.d = r0
        Lb:
            java.util.List<java.lang.String> r0 = r1.d
            r0.add(r2)
            return
    }

    public void clearLogDB() {
            r2 = this;
            com.czhj.sdk.common.ThreadPool.ThreadPoolFactory$BackgroundThreadPool r0 = com.czhj.sdk.common.ThreadPool.ThreadPoolFactory.BackgroundThreadPool.getInstance()
            com.czhj.sdk.common.mta.BuriedPointManager$2 r1 = new com.czhj.sdk.common.mta.BuriedPointManager$2
            r1.<init>(r2)
            r0.submit(r1)
            return
    }

    public java.util.Set<java.lang.Integer> getLogBlackList() {
            r1 = this;
            java.util.Set<java.lang.Integer> r0 = r1.g
            return r0
    }

    public java.lang.String sendPoint() {
            r5 = this;
            r0 = 0
            java.util.concurrent.locks.ReadWriteLock r1 = r5.b     // Catch: java.lang.Throwable -> Lc6
            java.util.concurrent.locks.Lock r1 = r1.readLock()     // Catch: java.lang.Throwable -> Lc6
            r1.lock()     // Catch: java.lang.Throwable -> Lc6
            boolean r1 = r5.e     // Catch: java.lang.Throwable -> Lc6
            if (r1 != 0) goto L34
            java.util.HashMap<java.lang.Integer, java.lang.String> r1 = r5.c     // Catch: java.lang.Throwable -> Lc6
            if (r1 == 0) goto L1b
            java.util.HashMap<java.lang.Integer, java.lang.String> r1 = r5.c     // Catch: java.lang.Throwable -> Lc6
            int r1 = r1.size()     // Catch: java.lang.Throwable -> Lc6
            if (r1 <= 0) goto L1b
            goto L34
        L1b:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc6
            r1.<init>()     // Catch: java.lang.Throwable -> Lc6
            com.czhj.sdk.common.models.Config r2 = com.czhj.sdk.common.models.Config.sharedInstance()     // Catch: java.lang.Throwable -> Lc6
            int r2 = r2.getMax_send_log_records()     // Catch: java.lang.Throwable -> Lc6
            java.util.HashMap r2 = r5.a(r2)     // Catch: java.lang.Throwable -> Lc6
            r5.c = r2     // Catch: java.lang.Throwable -> Lc6
            int r2 = r2.size()     // Catch: java.lang.Throwable -> Lc6
            if (r2 != 0) goto L3e
        L34:
            java.util.concurrent.locks.ReadWriteLock r1 = r5.b
            java.util.concurrent.locks.Lock r1 = r1.readLock()
            r1.unlock()
            return r0
        L3e:
            java.lang.String r2 = "["
            r1.append(r2)     // Catch: java.lang.Throwable -> Lc6
            java.util.HashMap<java.lang.Integer, java.lang.String> r2 = r5.c     // Catch: java.lang.Throwable -> Lc6
            java.util.Collection r2 = r2.values()     // Catch: java.lang.Throwable -> Lc6
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> Lc6
        L4d:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> Lc6
            if (r3 == 0) goto L68
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> Lc6
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> Lc6
            r1.append(r3)     // Catch: java.lang.Throwable -> Lc6
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> Lc6
            if (r3 == 0) goto L4d
            java.lang.String r3 = ","
            r1.append(r3)     // Catch: java.lang.Throwable -> Lc6
            goto L4d
        L68:
            java.lang.String r2 = "]"
            r1.append(r2)     // Catch: java.lang.Throwable -> Lc6
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Lc6
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc6
            r2.<init>()     // Catch: java.lang.Throwable -> Lc6
            java.lang.String r3 = "_batch_value="
            r2.append(r3)     // Catch: java.lang.Throwable -> Lc6
            r2.append(r1)     // Catch: java.lang.Throwable -> Lc6
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lc6
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.io.IOException -> Lbd java.lang.Throwable -> Lc6
            r3.<init>()     // Catch: java.io.IOException -> Lbd java.lang.Throwable -> Lc6
            java.lang.String r4 = "_batch_value: "
            r3.append(r4)     // Catch: java.io.IOException -> Lbd java.lang.Throwable -> Lc6
            r3.append(r1)     // Catch: java.io.IOException -> Lbd java.lang.Throwable -> Lc6
            java.lang.String r1 = r3.toString()     // Catch: java.io.IOException -> Lbd java.lang.Throwable -> Lc6
            com.czhj.sdk.logger.SigmobLog.d(r1)     // Catch: java.io.IOException -> Lbd java.lang.Throwable -> Lc6
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.io.IOException -> Lbd java.lang.Throwable -> Lc6
            r1.<init>()     // Catch: java.io.IOException -> Lbd java.lang.Throwable -> Lc6
            java.lang.String r3 = "BPLog_Count: "
            r1.append(r3)     // Catch: java.io.IOException -> Lbd java.lang.Throwable -> Lc6
            java.util.HashMap<java.lang.Integer, java.lang.String> r3 = r5.c     // Catch: java.io.IOException -> Lbd java.lang.Throwable -> Lc6
            int r3 = r3.size()     // Catch: java.io.IOException -> Lbd java.lang.Throwable -> Lc6
            r1.append(r3)     // Catch: java.io.IOException -> Lbd java.lang.Throwable -> Lc6
            java.lang.String r1 = r1.toString()     // Catch: java.io.IOException -> Lbd java.lang.Throwable -> Lc6
            com.czhj.sdk.logger.SigmobLog.d(r1)     // Catch: java.io.IOException -> Lbd java.lang.Throwable -> Lc6
            java.lang.String r1 = deflateAndBase64(r2)     // Catch: java.io.IOException -> Lbd java.lang.Throwable -> Lc6
            java.lang.String r0 = com.czhj.sdk.common.mta.PointEntitySuper.toURLEncoded(r1)     // Catch: java.io.IOException -> Lbd java.lang.Throwable -> Lc6
            r1 = 1
            r5.a(r0, r1)     // Catch: java.io.IOException -> Lbd java.lang.Throwable -> Lc6
            goto Lcc
        Lbd:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Throwable -> Lc6
            com.czhj.sdk.logger.SigmobLog.e(r1)     // Catch: java.lang.Throwable -> Lc6
            goto Lcc
        Lc6:
            r1 = move-exception
            java.lang.String r2 = "sendPoint fail "
            com.czhj.sdk.logger.SigmobLog.e(r2, r1)     // Catch: java.lang.Throwable -> Ld6
        Lcc:
            java.util.concurrent.locks.ReadWriteLock r1 = r5.b
            java.util.concurrent.locks.Lock r1 = r1.readLock()
            r1.unlock()
            return r0
        Ld6:
            r0 = move-exception
            java.util.concurrent.locks.ReadWriteLock r1 = r5.b
            java.util.concurrent.locks.Lock r1 = r1.readLock()
            r1.unlock()
            throw r0
    }

    public void start() {
            r4 = this;
            android.database.sqlite.SQLiteDatabase r0 = r4.h
            if (r0 == 0) goto L8
            com.czhj.sdk.common.ThreadPool.RepeatingHandlerRunnable r0 = r4.j
            if (r0 != 0) goto L3d
        L8:
            com.czhj.sdk.common.Database.SQLiteMTAHelper r0 = com.czhj.sdk.common.Database.SQLiteMTAHelper.getInstance()
            android.database.sqlite.SQLiteDatabase r0 = r0.getWritableDatabase()
            r4.h = r0
            r4.clearLogDB()
            android.os.HandlerThread r0 = new android.os.HandlerThread
            java.lang.String r1 = "sendLog"
            r0.<init>(r1)
            r0.start()
            android.os.Looper r0 = r0.getLooper()
            com.czhj.sdk.common.mta.BuriedPointManager$1 r1 = new com.czhj.sdk.common.mta.BuriedPointManager$1
            android.os.Handler r2 = new android.os.Handler
            r2.<init>(r0)
            r1.<init>(r4, r2)
            r4.j = r1
            com.czhj.sdk.common.models.Config r0 = com.czhj.sdk.common.models.Config.sharedInstance()
            int r0 = r0.getSend_log_interval()
            int r0 = r0 * 1000
            long r2 = (long) r0
            r1.startRepeating(r2)
        L3d:
            return
    }
}
