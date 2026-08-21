package com.xiaomi.push.providers;

public class TrafficProvider extends android.content.ContentProvider {
    private static final android.content.UriMatcher a = null;
    public static final android.net.Uri a = null;
    private android.database.sqlite.SQLiteOpenHelper a;

    static {
            java.lang.String r0 = "content://com.xiaomi.push.providers.TrafficProvider/traffic"
            android.net.Uri r0 = android.net.Uri.parse(r0)
            com.xiaomi.push.providers.TrafficProvider.a = r0
            android.content.UriMatcher r0 = new android.content.UriMatcher
            r1 = -1
            r0.<init>(r1)
            com.xiaomi.push.providers.TrafficProvider.a = r0
            java.lang.String r1 = "com.xiaomi.push.providers.TrafficProvider"
            java.lang.String r2 = "traffic"
            r3 = 1
            r0.addURI(r1, r2, r3)
            android.content.UriMatcher r0 = com.xiaomi.push.providers.TrafficProvider.a
            java.lang.String r2 = "update_imsi"
            r3 = 2
            r0.addURI(r1, r2, r3)
            return
    }

    public TrafficProvider() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public int bulkInsert(android.net.Uri r1, android.content.ContentValues[] r2) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public int delete(android.net.Uri r1, java.lang.String r2, java.lang.String[] r3) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public java.lang.String getType(android.net.Uri r4) {
            r3 = this;
            android.content.UriMatcher r0 = com.xiaomi.push.providers.TrafficProvider.a
            int r0 = r0.match(r4)
            r1 = 1
            if (r0 != r1) goto Lc
            java.lang.String r4 = "vnd.android.cursor.dir/vnd.xiaomi.push.traffic"
            return r4
        Lc:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unknown URI "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    @Override
    public android.net.Uri insert(android.net.Uri r1, android.content.ContentValues r2) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public boolean onCreate() {
            r2 = this;
            com.xiaomi.push.providers.a r0 = new com.xiaomi.push.providers.a
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1)
            r2.a = r0
            r0 = 1
            return r0
    }

    @Override
    public android.database.Cursor query(android.net.Uri r10, java.lang.String[] r11, java.lang.String r12, java.lang.String[] r13, java.lang.String r14) {
            r9 = this;
            java.lang.Object r0 = com.xiaomi.push.providers.a.a
            monitor-enter(r0)
            android.content.UriMatcher r1 = com.xiaomi.push.providers.TrafficProvider.a     // Catch: java.lang.Throwable -> L37
            int r1 = r1.match(r10)     // Catch: java.lang.Throwable -> L37
            r2 = 1
            if (r1 != r2) goto L20
            android.database.sqlite.SQLiteOpenHelper r10 = r9.a     // Catch: java.lang.Throwable -> L37
            android.database.sqlite.SQLiteDatabase r1 = r10.getReadableDatabase()     // Catch: java.lang.Throwable -> L37
            java.lang.String r2 = "traffic"
            r6 = 0
            r7 = 0
            r3 = r11
            r4 = r12
            r5 = r13
            r8 = r14
            android.database.Cursor r10 = r1.query(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L37
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L37
            return r10
        L20:
            java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L37
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L37
            r12.<init>()     // Catch: java.lang.Throwable -> L37
            java.lang.String r13 = "Unknown URI "
            r12.append(r13)     // Catch: java.lang.Throwable -> L37
            r12.append(r10)     // Catch: java.lang.Throwable -> L37
            java.lang.String r10 = r12.toString()     // Catch: java.lang.Throwable -> L37
            r11.<init>(r10)     // Catch: java.lang.Throwable -> L37
            throw r11     // Catch: java.lang.Throwable -> L37
        L37:
            r10 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L37
            throw r10
    }

    @Override
    public int update(android.net.Uri r1, android.content.ContentValues r2, java.lang.String r3, java.lang.String[] r4) {
            r0 = this;
            android.content.UriMatcher r3 = com.xiaomi.push.providers.TrafficProvider.a
            int r1 = r3.match(r1)
            r3 = 2
            if (r1 == r3) goto La
            goto L1b
        La:
            if (r2 == 0) goto L1b
            java.lang.String r1 = "imsi"
            boolean r3 = r2.containsKey(r1)
            if (r3 == 0) goto L1b
            java.lang.String r1 = r2.getAsString(r1)
            com.xiaomi.push.hb.a(r1)
        L1b:
            r1 = 0
            return r1
    }
}
