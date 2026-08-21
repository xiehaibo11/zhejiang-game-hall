package com.kwad.sdk.core.videocache.d;

final class a extends android.database.sqlite.SQLiteOpenHelper implements com.kwad.sdk.core.videocache.d.b {
    private static final java.lang.String[] axb = null;

    static {
            java.lang.String r0 = "_id"
            java.lang.String r1 = "url"
            java.lang.String r2 = "length"
            java.lang.String r3 = "mime"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3}
            com.kwad.sdk.core.videocache.d.a.axb = r0
            return
    }

    a(android.content.Context r4) {
            r3 = this;
            java.lang.String r0 = "AndroidVideoCache.db"
            r1 = 0
            r2 = 1
            r3.<init>(r4, r0, r1, r2)
            com.kwad.sdk.utils.ao.checkNotNull(r4)
            return
    }

    private static android.content.ContentValues a(com.kwad.sdk.core.videocache.m r3) {
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            java.lang.String r1 = r3.url
            java.lang.String r2 = "url"
            r0.put(r2, r1)
            long r1 = r3.awV
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "length"
            r0.put(r2, r1)
            java.lang.String r3 = r3.awW
            java.lang.String r1 = "mime"
            r0.put(r1, r3)
            return r0
    }

    private static com.kwad.sdk.core.videocache.m i(android.database.Cursor r5) {
            com.kwad.sdk.core.videocache.m r0 = new com.kwad.sdk.core.videocache.m
            java.lang.String r1 = "url"
            int r1 = r5.getColumnIndexOrThrow(r1)
            java.lang.String r1 = r5.getString(r1)
            java.lang.String r2 = "length"
            int r2 = r5.getColumnIndexOrThrow(r2)
            long r2 = r5.getLong(r2)
            java.lang.String r4 = "mime"
            int r4 = r5.getColumnIndexOrThrow(r4)
            java.lang.String r5 = r5.getString(r4)
            r0.<init>(r1, r2, r5)
            return r0
    }

    @Override
    public final void a(java.lang.String r5, com.kwad.sdk.core.videocache.m r6) {
            r4 = this;
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r5
            r2 = 1
            r0[r2] = r6
            com.kwad.sdk.utils.ao.e(r0)
            com.kwad.sdk.core.videocache.m r0 = r4.dW(r5)
            if (r0 == 0) goto L14
            r0 = r2
            goto L15
        L14:
            r0 = r1
        L15:
            android.content.ContentValues r6 = a(r6)
            java.lang.String r3 = "SourceInfo"
            if (r0 == 0) goto L2b
            android.database.sqlite.SQLiteDatabase r0 = r4.getWritableDatabase()
            java.lang.String[] r2 = new java.lang.String[r2]
            r2[r1] = r5
            java.lang.String r5 = "url=?"
            r0.update(r3, r6, r5, r2)
            return
        L2b:
            android.database.sqlite.SQLiteDatabase r5 = r4.getWritableDatabase()
            r0 = 0
            r5.insert(r3, r0, r6)
            return
    }

    @Override
    public final com.kwad.sdk.core.videocache.m dW(java.lang.String r11) {
            r10 = this;
            com.kwad.sdk.utils.ao.fE(r11)
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r10.getReadableDatabase()     // Catch: java.lang.Throwable -> L2f
            java.lang.String r2 = "SourceInfo"
            java.lang.String[] r3 = com.kwad.sdk.core.videocache.d.a.axb     // Catch: java.lang.Throwable -> L2f
            java.lang.String r4 = "url=?"
            r5 = 1
            java.lang.String[] r5 = new java.lang.String[r5]     // Catch: java.lang.Throwable -> L2f
            r6 = 0
            r5[r6] = r11     // Catch: java.lang.Throwable -> L2f
            r6 = 0
            r7 = 0
            r8 = 0
            android.database.Cursor r11 = r1.query(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L2f
            if (r11 == 0) goto L2b
            boolean r1 = r11.moveToFirst()     // Catch: java.lang.Throwable -> L29
            if (r1 != 0) goto L24
            goto L2b
        L24:
            com.kwad.sdk.core.videocache.m r0 = i(r11)     // Catch: java.lang.Throwable -> L29
            goto L2b
        L29:
            r0 = move-exception
            goto L33
        L2b:
            com.kwad.sdk.crash.utils.b.closeQuietly(r11)
            return r0
        L2f:
            r11 = move-exception
            r9 = r0
            r0 = r11
            r11 = r9
        L33:
            com.kwad.sdk.crash.utils.b.closeQuietly(r11)
            throw r0
    }

    @Override
    public final void onCreate(android.database.sqlite.SQLiteDatabase r2) {
            r1 = this;
            com.kwad.sdk.utils.ao.checkNotNull(r2)
            java.lang.String r0 = "CREATE TABLE SourceInfo (_id INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,url TEXT NOT NULL,mime TEXT,length INTEGER);"
            r2.execSQL(r0)
            return
    }

    @Override
    public final void onUpgrade(android.database.sqlite.SQLiteDatabase r1, int r2, int r3) {
            r0 = this;
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "Should not be called. There is no any migration"
            r1.<init>(r2)
            throw r1
    }
}
