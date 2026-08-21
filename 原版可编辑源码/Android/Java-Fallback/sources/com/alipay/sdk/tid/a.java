package com.alipay.sdk.tid;

final class a extends android.database.sqlite.SQLiteOpenHelper {
    private static final java.lang.String a = "msp.db";
    private static final int b = 1;
    private java.lang.ref.WeakReference<android.content.Context> c;

    a(android.content.Context r4) {
            r3 = this;
            java.lang.String r0 = "msp.db"
            r1 = 0
            r2 = 1
            r3.<init>(r4, r0, r1, r2)
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r4)
            r3.c = r0
            return
    }

    private java.lang.String c(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = r0.toString()
            return r2
    }

    java.lang.String a(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            java.lang.String r0 = "select tid from tb_tid where name=?"
            r1 = 0
            android.database.sqlite.SQLiteDatabase r2 = r4.getReadableDatabase()     // Catch: java.lang.Throwable -> L39 java.lang.Exception -> L4c
            r3 = 1
            java.lang.String[] r3 = new java.lang.String[r3]     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            java.lang.String r5 = r4.c(r5, r6)     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            r6 = 0
            r3[r6] = r5     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            android.database.Cursor r5 = r2.rawQuery(r0, r3)     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            boolean r0 = r5.moveToFirst()     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L33
            if (r0 == 0) goto L1f
            java.lang.String r1 = r5.getString(r6)     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L33
        L1f:
            if (r5 == 0) goto L24
            r5.close()
        L24:
            if (r2 == 0) goto L5c
            boolean r5 = r2.isOpen()
            if (r5 == 0) goto L5c
        L2c:
            r2.close()
            goto L5c
        L30:
            r6 = move-exception
            r1 = r5
            goto L3b
        L33:
            goto L4e
        L35:
            r6 = move-exception
            goto L3b
        L37:
            r5 = r1
            goto L4e
        L39:
            r6 = move-exception
            r2 = r1
        L3b:
            if (r1 == 0) goto L40
            r1.close()
        L40:
            if (r2 == 0) goto L4b
            boolean r5 = r2.isOpen()
            if (r5 == 0) goto L4b
            r2.close()
        L4b:
            throw r6
        L4c:
            r5 = r1
            r2 = r5
        L4e:
            if (r5 == 0) goto L53
            r5.close()
        L53:
            if (r2 == 0) goto L5c
            boolean r5 = r2.isOpen()
            if (r5 == 0) goto L5c
            goto L2c
        L5c:
            boolean r5 = android.text.TextUtils.isEmpty(r1)
            if (r5 != 0) goto L72
            java.lang.ref.WeakReference<android.content.Context> r5 = r4.c
            java.lang.Object r5 = r5.get()
            android.content.Context r5 = (android.content.Context) r5
            java.lang.String r5 = com.alipay.sdk.util.a.c(r5)
            java.lang.String r1 = com.alipay.sdk.encrypt.b.b(r1, r5)
        L72:
            return r1
    }

    void a() {
            r3 = this;
            r0 = 0
            android.database.sqlite.SQLiteDatabase r0 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L13 java.lang.Exception -> L15
            java.lang.String r1 = "drop table if exists tb_tid"
            r0.execSQL(r1)     // Catch: java.lang.Throwable -> L13 java.lang.Exception -> L15
            if (r0 == 0) goto L24
            boolean r1 = r0.isOpen()
            if (r1 == 0) goto L24
            goto L21
        L13:
            r1 = move-exception
            goto L25
        L15:
            r1 = move-exception
            com.alipay.sdk.util.c.a(r1)     // Catch: java.lang.Throwable -> L13
            if (r0 == 0) goto L24
            boolean r1 = r0.isOpen()
            if (r1 == 0) goto L24
        L21:
            r0.close()
        L24:
            return
        L25:
            if (r0 == 0) goto L30
            boolean r2 = r0.isOpen()
            if (r2 == 0) goto L30
            r0.close()
        L30:
            throw r1
    }

    java.lang.String b(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            java.lang.String r0 = "select key_tid from tb_tid where name=?"
            r1 = 0
            android.database.sqlite.SQLiteDatabase r2 = r4.getReadableDatabase()     // Catch: java.lang.Throwable -> L39 java.lang.Exception -> L4c
            r3 = 1
            java.lang.String[] r3 = new java.lang.String[r3]     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            java.lang.String r5 = r4.c(r5, r6)     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            r6 = 0
            r3[r6] = r5     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            android.database.Cursor r5 = r2.rawQuery(r0, r3)     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            boolean r0 = r5.moveToFirst()     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L33
            if (r0 == 0) goto L1f
            java.lang.String r1 = r5.getString(r6)     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L33
        L1f:
            if (r5 == 0) goto L24
            r5.close()
        L24:
            if (r2 == 0) goto L5c
            boolean r5 = r2.isOpen()
            if (r5 == 0) goto L5c
        L2c:
            r2.close()
            goto L5c
        L30:
            r6 = move-exception
            r1 = r5
            goto L3b
        L33:
            goto L4e
        L35:
            r6 = move-exception
            goto L3b
        L37:
            r5 = r1
            goto L4e
        L39:
            r6 = move-exception
            r2 = r1
        L3b:
            if (r1 == 0) goto L40
            r1.close()
        L40:
            if (r2 == 0) goto L4b
            boolean r5 = r2.isOpen()
            if (r5 == 0) goto L4b
            r2.close()
        L4b:
            throw r6
        L4c:
            r5 = r1
            r2 = r5
        L4e:
            if (r5 == 0) goto L53
            r5.close()
        L53:
            if (r2 == 0) goto L5c
            boolean r5 = r2.isOpen()
            if (r5 == 0) goto L5c
            goto L2c
        L5c:
            return r1
    }

    @Override
    public void onCreate(android.database.sqlite.SQLiteDatabase r2) {
            r1 = this;
            java.lang.String r0 = "create table if not exists tb_tid (name text primary key, tid text, key_tid text, dt datetime);"
            r2.execSQL(r0)
            return
    }

    @Override
    public void onUpgrade(android.database.sqlite.SQLiteDatabase r1, int r2, int r3) {
            r0 = this;
            java.lang.String r2 = "drop table if exists tb_tid"
            r1.execSQL(r2)
            return
    }
}
