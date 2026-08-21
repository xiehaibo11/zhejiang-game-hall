package com.mbridge.msdk.foundation.db;

public final class n extends com.mbridge.msdk.foundation.db.a {
    private static java.lang.String a = "ReplaceTempDao";
    private static com.mbridge.msdk.foundation.db.n b;

    static {
            return
    }

    private n(com.mbridge.msdk.foundation.db.h r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static com.mbridge.msdk.foundation.db.n a(com.mbridge.msdk.foundation.db.h r2) {
            com.mbridge.msdk.foundation.db.n r0 = com.mbridge.msdk.foundation.db.n.b
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.foundation.db.f> r0 = com.mbridge.msdk.foundation.db.f.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.db.n r1 = com.mbridge.msdk.foundation.db.n.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.foundation.db.n r1 = new com.mbridge.msdk.foundation.db.n     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.foundation.db.n.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.mbridge.msdk.foundation.db.n r2 = com.mbridge.msdk.foundation.db.n.b
            return r2
    }

    private boolean b(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "SELECT d_value FROM c_replace_temp WHERE d_key='"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "'"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            android.database.sqlite.SQLiteDatabase r0 = r2.getReadableDatabase()
            r1 = 0
            android.database.Cursor r3 = r0.rawQuery(r3, r1)
            if (r3 == 0) goto L2c
            int r0 = r3.getCount()
            if (r0 <= 0) goto L2c
            r3.close()     // Catch: java.lang.Exception -> L2a
        L2a:
            r3 = 1
            return r3
        L2c:
            if (r3 == 0) goto L31
            r3.close()     // Catch: java.lang.Exception -> L31
        L31:
            r3 = 0
            return r3
    }

    public final org.json.JSONObject a() {
            r8 = this;
            r0 = 604800000(0x240c8400, float:3.046947E-17)
            long r0 = (long) r0
            long r2 = java.lang.System.currentTimeMillis()
            long r2 = r2 - r0
            android.database.sqlite.SQLiteDatabase r0 = r8.getWritableDatabase()     // Catch: java.lang.Exception -> L26
            if (r0 != 0) goto L10
            goto L2a
        L10:
            android.database.sqlite.SQLiteDatabase r0 = r8.getWritableDatabase()     // Catch: java.lang.Exception -> L26
            java.lang.String r1 = "c_replace_temp"
            java.lang.String r4 = "time<?"
            r5 = 1
            java.lang.String[] r5 = new java.lang.String[r5]     // Catch: java.lang.Exception -> L26
            r6 = 0
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Exception -> L26
            r5[r6] = r2     // Catch: java.lang.Exception -> L26
            r0.delete(r1, r4, r5)     // Catch: java.lang.Exception -> L26
            goto L2a
        L26:
            r0 = move-exception
            r0.printStackTrace()
        L2a:
            android.database.sqlite.SQLiteDatabase r0 = r8.getReadableDatabase()
            r1 = 0
            java.lang.String r2 = "SELECT * FROM c_replace_temp"
            android.database.Cursor r0 = r0.rawQuery(r2, r1)
            if (r0 == 0) goto L6e
            int r2 = r0.getCount()     // Catch: java.lang.Throwable -> L69
            if (r2 <= 0) goto L6e
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L69
            r2.<init>()     // Catch: java.lang.Throwable -> L69
        L42:
            boolean r1 = r0.moveToNext()     // Catch: java.lang.Throwable -> L67
            if (r1 == 0) goto L65
            java.lang.String r1 = "d_key"
            int r1 = r0.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L67
            java.lang.String r1 = r0.getString(r1)     // Catch: java.lang.Throwable -> L67
            java.lang.String r3 = "d_value"
            int r3 = r0.getColumnIndex(r3)     // Catch: java.lang.Throwable -> L67
            java.lang.String r3 = r0.getString(r3)     // Catch: java.lang.Throwable -> L67
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L67
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L67
            r2.put(r1, r4)     // Catch: java.lang.Throwable -> L67
            goto L42
        L65:
            r1 = r2
            goto L8a
        L67:
            r1 = move-exception
            goto L74
        L69:
            r2 = move-exception
            r7 = r2
            r2 = r1
            r1 = r7
            goto L74
        L6e:
            if (r0 == 0) goto L8a
            r0.close()     // Catch: java.lang.Throwable -> L69
            goto L8a
        L74:
            java.lang.String r3 = com.mbridge.msdk.foundation.db.n.a     // Catch: java.lang.Throwable -> L83
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Throwable -> L83
            com.mbridge.msdk.foundation.tools.z.d(r3, r1)     // Catch: java.lang.Throwable -> L83
            if (r0 == 0) goto L90
            r0.close()     // Catch: java.lang.Exception -> L90
            goto L90
        L83:
            r1 = move-exception
            if (r0 == 0) goto L89
            r0.close()     // Catch: java.lang.Exception -> L89
        L89:
            throw r1
        L8a:
            if (r0 == 0) goto L8f
            r0.close()     // Catch: java.lang.Exception -> L8f
        L8f:
            r2 = r1
        L90:
            return r2
    }

    public final org.json.JSONObject a(java.lang.String r4) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "SELECT * FROM c_replace_temp WHERE d_key = '"
            r0.append(r2)
            r0.append(r4)
            java.lang.String r4 = "'"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            android.database.sqlite.SQLiteDatabase r0 = r3.getReadableDatabase()
            android.database.Cursor r4 = r0.rawQuery(r4, r1)
            if (r4 == 0) goto L4d
            int r0 = r4.getCount()     // Catch: java.lang.Throwable -> L4b
            if (r0 <= 0) goto L4d
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L4b
            r0.<init>()     // Catch: java.lang.Throwable -> L4b
            r1 = r0
        L34:
            boolean r0 = r4.moveToNext()     // Catch: java.lang.Throwable -> L4b
            if (r0 == 0) goto L69
            java.lang.String r0 = "d_value"
            int r0 = r4.getColumnIndex(r0)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r0 = r4.getString(r0)     // Catch: java.lang.Throwable -> L4b
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L4b
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L4b
            r1 = r2
            goto L34
        L4b:
            r0 = move-exception
            goto L53
        L4d:
            if (r4 == 0) goto L69
            r4.close()     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L69
            goto L69
        L53:
            java.lang.String r2 = com.mbridge.msdk.foundation.db.n.a     // Catch: java.lang.Throwable -> L62
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L62
            com.mbridge.msdk.foundation.tools.z.d(r2, r0)     // Catch: java.lang.Throwable -> L62
            if (r4 == 0) goto L6c
        L5e:
            r4.close()     // Catch: java.lang.Exception -> L6c
            goto L6c
        L62:
            r0 = move-exception
            if (r4 == 0) goto L68
            r4.close()     // Catch: java.lang.Exception -> L68
        L68:
            throw r0
        L69:
            if (r4 == 0) goto L6c
            goto L5e
        L6c:
            return r1
    }

    public final void a(java.lang.String r5, org.json.JSONObject r6) {
            r4 = this;
            android.database.sqlite.SQLiteDatabase r0 = r4.getWritableDatabase()     // Catch: java.lang.Exception -> L56
            if (r0 != 0) goto L7
            return
        L7:
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Exception -> L56
            r0.<init>()     // Catch: java.lang.Exception -> L56
            java.lang.String r1 = "d_key"
            r0.put(r1, r5)     // Catch: java.lang.Exception -> L56
            java.lang.String r1 = "d_value"
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L56
            r0.put(r1, r6)     // Catch: java.lang.Exception -> L56
            java.lang.String r6 = "time"
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L56
            java.lang.Long r1 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Exception -> L56
            r0.put(r6, r1)     // Catch: java.lang.Exception -> L56
            boolean r6 = r4.b(r5)     // Catch: java.lang.Exception -> L56
            r1 = 0
            java.lang.String r2 = "c_replace_temp"
            if (r6 != 0) goto L38
            android.database.sqlite.SQLiteDatabase r5 = r4.getWritableDatabase()     // Catch: java.lang.Exception -> L56
            r5.insert(r2, r1, r0)     // Catch: java.lang.Exception -> L56
            goto L5a
        L38:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L56
            r6.<init>()     // Catch: java.lang.Exception -> L56
            java.lang.String r3 = "d_key = '"
            r6.append(r3)     // Catch: java.lang.Exception -> L56
            r6.append(r5)     // Catch: java.lang.Exception -> L56
            java.lang.String r5 = "'"
            r6.append(r5)     // Catch: java.lang.Exception -> L56
            java.lang.String r5 = r6.toString()     // Catch: java.lang.Exception -> L56
            android.database.sqlite.SQLiteDatabase r6 = r4.getWritableDatabase()     // Catch: java.lang.Exception -> L56
            r6.update(r2, r0, r5, r1)     // Catch: java.lang.Exception -> L56
            goto L5a
        L56:
            r5 = move-exception
            r5.printStackTrace()
        L5a:
            return
    }
}
