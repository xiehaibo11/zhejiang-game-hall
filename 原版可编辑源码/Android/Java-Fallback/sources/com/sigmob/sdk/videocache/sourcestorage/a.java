package com.sigmob.sdk.videocache.sourcestorage;

class a extends android.database.sqlite.SQLiteOpenHelper implements com.sigmob.sdk.videocache.sourcestorage.c {
    private static final java.lang.String a = "SourceInfo";
    private static final java.lang.String b = "_id";
    private static final java.lang.String c = "url";
    private static final java.lang.String d = "length";
    private static final java.lang.String e = "mime";
    private static final java.lang.String[] f = null;
    private static final java.lang.String g = "CREATE TABLE SourceInfo (_id INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,url TEXT NOT NULL,mime TEXT,length INTEGER);";

    static {
            java.lang.String r0 = "_id"
            java.lang.String r1 = "url"
            java.lang.String r2 = "length"
            java.lang.String r3 = "mime"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3}
            com.sigmob.sdk.videocache.sourcestorage.a.f = r0
            return
    }

    a(android.content.Context r4) {
            r3 = this;
            java.lang.String r0 = "AndroidVideoCache.db"
            r1 = 0
            r2 = 1
            r3.<init>(r4, r0, r1, r2)
            com.sigmob.sdk.videocache.n.a(r4)
            return
    }

    private android.content.ContentValues a(com.sigmob.sdk.videocache.t r4) {
            r3 = this;
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            java.lang.String r1 = r4.a
            java.lang.String r2 = "url"
            r0.put(r2, r1)
            long r1 = r4.b
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "length"
            r0.put(r2, r1)
            java.lang.String r4 = r4.c
            java.lang.String r1 = "mime"
            r0.put(r1, r4)
            return r0
    }

    private com.sigmob.sdk.videocache.t a(android.database.Cursor r6) {
            r5 = this;
            com.sigmob.sdk.videocache.t r0 = new com.sigmob.sdk.videocache.t
            java.lang.String r1 = "url"
            int r1 = r6.getColumnIndexOrThrow(r1)
            java.lang.String r1 = r6.getString(r1)
            java.lang.String r2 = "length"
            int r2 = r6.getColumnIndexOrThrow(r2)
            long r2 = r6.getLong(r2)
            java.lang.String r4 = "mime"
            int r4 = r6.getColumnIndexOrThrow(r4)
            java.lang.String r6 = r6.getString(r4)
            r0.<init>(r1, r2, r6)
            return r0
    }

    @Override
    public com.sigmob.sdk.videocache.t a(java.lang.String r11) {
            r10 = this;
            com.sigmob.sdk.videocache.n.a(r11)
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r10.getReadableDatabase()     // Catch: java.lang.Throwable -> L31
            java.lang.String r2 = "SourceInfo"
            java.lang.String[] r3 = com.sigmob.sdk.videocache.sourcestorage.a.f     // Catch: java.lang.Throwable -> L31
            java.lang.String r4 = "url=?"
            r5 = 1
            java.lang.String[] r5 = new java.lang.String[r5]     // Catch: java.lang.Throwable -> L31
            r6 = 0
            r5[r6] = r11     // Catch: java.lang.Throwable -> L31
            r6 = 0
            r7 = 0
            r8 = 0
            android.database.Cursor r11 = r1.query(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L31
            if (r11 == 0) goto L2b
            boolean r1 = r11.moveToFirst()     // Catch: java.lang.Throwable -> L29
            if (r1 != 0) goto L24
            goto L2b
        L24:
            com.sigmob.sdk.videocache.t r0 = r10.a(r11)     // Catch: java.lang.Throwable -> L29
            goto L2b
        L29:
            r0 = move-exception
            goto L35
        L2b:
            if (r11 == 0) goto L30
            r11.close()
        L30:
            return r0
        L31:
            r11 = move-exception
            r9 = r0
            r0 = r11
            r11 = r9
        L35:
            if (r11 == 0) goto L3a
            r11.close()
        L3a:
            throw r0
    }

    @Override
    public void a() {
            r0 = this;
            r0.close()
            return
    }

    @Override
    public void a(java.lang.String r5, com.sigmob.sdk.videocache.t r6) {
            r4 = this;
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r5
            r2 = 1
            r0[r2] = r6
            com.sigmob.sdk.videocache.n.a(r0)
            com.sigmob.sdk.videocache.t r0 = r4.a(r5)
            if (r0 == 0) goto L14
            r0 = r2
            goto L15
        L14:
            r0 = r1
        L15:
            android.content.ContentValues r6 = r4.a(r6)
            java.lang.String r3 = "SourceInfo"
            if (r0 == 0) goto L2b
            android.database.sqlite.SQLiteDatabase r0 = r4.getWritableDatabase()
            java.lang.String[] r2 = new java.lang.String[r2]
            r2[r1] = r5
            java.lang.String r5 = "url=?"
            r0.update(r3, r6, r5, r2)
            goto L33
        L2b:
            android.database.sqlite.SQLiteDatabase r5 = r4.getWritableDatabase()
            r0 = 0
            r5.insert(r3, r0, r6)
        L33:
            return
    }

    @Override
    public void onCreate(android.database.sqlite.SQLiteDatabase r2) {
            r1 = this;
            com.sigmob.sdk.videocache.n.a(r2)
            java.lang.String r0 = "CREATE TABLE SourceInfo (_id INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,url TEXT NOT NULL,mime TEXT,length INTEGER);"
            r2.execSQL(r0)
            return
    }

    @Override
    public void onUpgrade(android.database.sqlite.SQLiteDatabase r1, int r2, int r3) {
            r0 = this;
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "Should not be called. There is no any migration"
            r1.<init>(r2)
            throw r1
    }
}
