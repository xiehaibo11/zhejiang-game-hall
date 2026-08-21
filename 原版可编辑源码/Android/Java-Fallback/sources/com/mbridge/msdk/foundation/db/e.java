package com.mbridge.msdk.foundation.db;

public final class e extends com.mbridge.msdk.foundation.db.a {
    private static com.mbridge.msdk.foundation.db.e a;
    private int b;

    private e(com.mbridge.msdk.foundation.db.h r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 100
            r0.b = r1
            return
    }

    public static synchronized com.mbridge.msdk.foundation.db.e a(com.mbridge.msdk.foundation.db.h r3) {
            java.lang.Class<com.mbridge.msdk.foundation.db.e> r0 = com.mbridge.msdk.foundation.db.e.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.db.e r1 = com.mbridge.msdk.foundation.db.e.a     // Catch: java.lang.Throwable -> L1e
            if (r1 != 0) goto L1a
            java.lang.Class<com.mbridge.msdk.foundation.db.c> r1 = com.mbridge.msdk.foundation.db.c.class
            monitor-enter(r1)     // Catch: java.lang.Throwable -> L1e
            com.mbridge.msdk.foundation.db.e r2 = com.mbridge.msdk.foundation.db.e.a     // Catch: java.lang.Throwable -> L17
            if (r2 != 0) goto L15
            com.mbridge.msdk.foundation.db.e r2 = new com.mbridge.msdk.foundation.db.e     // Catch: java.lang.Throwable -> L17
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L17
            com.mbridge.msdk.foundation.db.e.a = r2     // Catch: java.lang.Throwable -> L17
        L15:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L17
            goto L1a
        L17:
            r3 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L17
            throw r3     // Catch: java.lang.Throwable -> L1e
        L1a:
            com.mbridge.msdk.foundation.db.e r3 = com.mbridge.msdk.foundation.db.e.a     // Catch: java.lang.Throwable -> L1e
            monitor-exit(r0)
            return r3
        L1e:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    private synchronized boolean m(java.lang.String r4) {
            r3 = this;
            monitor-enter(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5d
            r0.<init>()     // Catch: java.lang.Throwable -> L5d
            java.lang.String r1 = "SELECT id FROM campaignDAIDao WHERE unique_key='"
            r0.append(r1)     // Catch: java.lang.Throwable -> L5d
            r0.append(r4)     // Catch: java.lang.Throwable -> L5d
            java.lang.String r4 = "'"
            r0.append(r4)     // Catch: java.lang.Throwable -> L5d
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L5d
            r0 = 0
            r1 = 0
            android.database.sqlite.SQLiteDatabase r2 = r3.getReadableDatabase()     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            android.database.Cursor r1 = r2.rawQuery(r4, r1)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            if (r1 == 0) goto L2f
            int r4 = r1.getCount()     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            if (r4 <= 0) goto L2f
            r1.close()     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            r4 = 1
            r0 = r4
            goto L34
        L2f:
            if (r1 == 0) goto L34
            r1.close()     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
        L34:
            if (r1 == 0) goto L4f
            boolean r4 = r1.isClosed()     // Catch: java.lang.Throwable -> L5d
            if (r4 != 0) goto L4f
        L3c:
            r1.close()     // Catch: java.lang.Throwable -> L5d
            goto L4f
        L40:
            r4 = move-exception
            goto L51
        L42:
            r4 = move-exception
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L40
            if (r1 == 0) goto L4f
            boolean r4 = r1.isClosed()     // Catch: java.lang.Throwable -> L5d
            if (r4 != 0) goto L4f
            goto L3c
        L4f:
            monitor-exit(r3)
            return r0
        L51:
            if (r1 == 0) goto L5c
            boolean r0 = r1.isClosed()     // Catch: java.lang.Throwable -> L5d
            if (r0 != 0) goto L5c
            r1.close()     // Catch: java.lang.Throwable -> L5d
        L5c:
            throw r4     // Catch: java.lang.Throwable -> L5d
        L5d:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public final synchronized com.mbridge.msdk.foundation.entity.f a() {
            r13 = this;
            monitor-enter(r13)
            android.database.sqlite.SQLiteDatabase r0 = r13.getReadableDatabase()     // Catch: java.lang.Throwable -> Lc3
            r1 = 0
            if (r0 != 0) goto La
            monitor-exit(r13)
            return r1
        La:
            android.database.sqlite.SQLiteDatabase r2 = r13.getReadableDatabase()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> La1
            java.lang.String r3 = "campaignDAIDao"
            java.lang.String r4 = "save_path"
            java.lang.String r5 = "url"
            java.lang.String r6 = "unique_key"
            java.lang.String r7 = "rid"
            java.lang.String r8 = "package_name"
            java.lang.String r9 = "rid_n"
            java.lang.String r10 = "id"
            java.lang.String r11 = "unitid"
            java.lang.String[] r4 = new java.lang.String[]{r4, r5, r6, r7, r8, r9, r10, r11}     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> La1
            java.lang.String r5 = "status = ?"
            java.lang.String r0 = "10"
            java.lang.String[] r6 = new java.lang.String[]{r0}     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> La1
            r7 = 0
            r8 = 0
            java.lang.String r9 = "unique_key"
            android.database.Cursor r0 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> La1
            if (r0 == 0) goto L90
            boolean r2 = r0.moveToFirst()     // Catch: java.lang.Exception -> L8b java.lang.Throwable -> Lb6
            if (r2 == 0) goto L90
            int r2 = r0.getCount()     // Catch: java.lang.Exception -> L8b java.lang.Throwable -> Lb6
            if (r2 <= 0) goto L90
            com.mbridge.msdk.foundation.entity.f r2 = new com.mbridge.msdk.foundation.entity.f     // Catch: java.lang.Exception -> L8b java.lang.Throwable -> Lb6
            r2.<init>()     // Catch: java.lang.Exception -> L8b java.lang.Throwable -> Lb6
            r1 = 0
            java.lang.String r1 = r0.getString(r1)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> Lb6
            r2.a(r1)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> Lb6
            r1 = 1
            java.lang.String r1 = r0.getString(r1)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> Lb6
            r2.b(r1)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> Lb6
            r1 = 2
            java.lang.String r1 = r0.getString(r1)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> Lb6
            r2.c(r1)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> Lb6
            r1 = 3
            java.lang.String r1 = r0.getString(r1)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> Lb6
            r2.d(r1)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> Lb6
            r1 = 4
            java.lang.String r1 = r0.getString(r1)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> Lb6
            r2.e(r1)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> Lb6
            r1 = 5
            java.lang.String r1 = r0.getString(r1)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> Lb6
            r2.f(r1)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> Lb6
            r1 = 6
            java.lang.String r1 = r0.getString(r1)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> Lb6
            r2.h(r1)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> Lb6
            r1 = 7
            java.lang.String r1 = r0.getString(r1)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> Lb6
            r2.g(r1)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> Lb6
            r1 = r2
            goto L90
        L89:
            r1 = move-exception
            goto La5
        L8b:
            r2 = move-exception
            r12 = r2
            r2 = r1
            r1 = r12
            goto La5
        L90:
            if (r0 == 0) goto Lb4
            boolean r2 = r0.isClosed()     // Catch: java.lang.Throwable -> Lc3
            if (r2 != 0) goto Lb4
            r0.close()     // Catch: java.lang.Throwable -> Lc3
            goto Lb4
        L9c:
            r0 = move-exception
            r12 = r1
            r1 = r0
            r0 = r12
            goto Lb7
        La1:
            r0 = move-exception
            r2 = r1
            r1 = r0
            r0 = r2
        La5:
            r1.printStackTrace()     // Catch: java.lang.Throwable -> Lb6
            if (r0 == 0) goto Lb3
            boolean r1 = r0.isClosed()     // Catch: java.lang.Throwable -> Lc3
            if (r1 != 0) goto Lb3
            r0.close()     // Catch: java.lang.Throwable -> Lc3
        Lb3:
            r1 = r2
        Lb4:
            monitor-exit(r13)
            return r1
        Lb6:
            r1 = move-exception
        Lb7:
            if (r0 == 0) goto Lc2
            boolean r2 = r0.isClosed()     // Catch: java.lang.Throwable -> Lc3
            if (r2 != 0) goto Lc2
            r0.close()     // Catch: java.lang.Throwable -> Lc3
        Lc2:
            throw r1     // Catch: java.lang.Throwable -> Lc3
        Lc3:
            r0 = move-exception
            monitor-exit(r13)
            throw r0
    }

    public final synchronized void a(com.mbridge.msdk.foundation.entity.CampaignEx r5) {
            r4 = this;
            monitor-enter(r4)
            if (r5 == 0) goto Lb1
            java.lang.String r0 = r5.getAkdlui()     // Catch: java.lang.Throwable -> Lae
            boolean r0 = r4.m(r0)     // Catch: java.lang.Throwable -> Lae
            if (r0 != 0) goto Lb1
            android.database.sqlite.SQLiteDatabase r0 = r4.getWritableDatabase()     // Catch: java.lang.Throwable -> Lae
            if (r0 != 0) goto L15
            monitor-exit(r4)
            return
        L15:
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Throwable -> Lae
            r0.<init>()     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = "unique_key"
            java.lang.String r2 = r5.getAkdlui()     // Catch: java.lang.Throwable -> Lae
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = "id"
            java.lang.String r2 = r5.getId()     // Catch: java.lang.Throwable -> Lae
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = "atat_type"
            int r2 = r5.getAtatType()     // Catch: java.lang.Throwable -> Lae
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> Lae
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = "ntbarpasbl"
            int r2 = r5.getNtbarpasbl()     // Catch: java.lang.Throwable -> Lae
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> Lae
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = "ntbarpt"
            int r2 = r5.getNtbarpt()     // Catch: java.lang.Throwable -> Lae
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> Lae
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = "package_name"
            java.lang.String r2 = r5.getPackageName()     // Catch: java.lang.Throwable -> Lae
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = "rid"
            java.lang.String r2 = r5.getRequestId()     // Catch: java.lang.Throwable -> Lae
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = "rid_n"
            java.lang.String r2 = r5.getRequestIdNotice()     // Catch: java.lang.Throwable -> Lae
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = "unitid"
            java.lang.String r2 = r5.getCampaignUnitId()     // Catch: java.lang.Throwable -> Lae
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = "url"
            java.lang.String r2 = r5.getClickURL()     // Catch: java.lang.Throwable -> Lae
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = "status"
            r2 = -1
            java.lang.Integer r3 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> Lae
            r0.put(r1, r3)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = "progress"
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> Lae
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = "save_path"
            java.lang.String r2 = ""
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = "app_name"
            java.lang.String r5 = r5.getAppName()     // Catch: java.lang.Throwable -> Lae
            r0.put(r1, r5)     // Catch: java.lang.Throwable -> Lae
            android.database.sqlite.SQLiteDatabase r5 = r4.getWritableDatabase()     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = "campaignDAIDao"
            r2 = 0
            r5.insert(r1, r2, r0)     // Catch: java.lang.Throwable -> Lae
            goto Lb1
        Lae:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
        Lb1:
            monitor-exit(r4)
            return
    }

    public final synchronized void a(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            r0 = 10
            r1.a(r2, r0)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized void a(java.lang.String r4, int r5) {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = r3.m(r4)     // Catch: java.lang.Throwable -> L41
            if (r0 == 0) goto L3f
            android.database.sqlite.SQLiteDatabase r0 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L41
            if (r0 != 0) goto Lf
            monitor-exit(r3)
            return
        Lf:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L41
            r0.<init>()     // Catch: java.lang.Throwable -> L41
            java.lang.String r1 = "unique_key = '"
            r0.append(r1)     // Catch: java.lang.Throwable -> L41
            r0.append(r4)     // Catch: java.lang.Throwable -> L41
            java.lang.String r4 = "'"
            r0.append(r4)     // Catch: java.lang.Throwable -> L41
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L41
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L41
            r0.<init>()     // Catch: java.lang.Throwable -> L41
            if (r5 == 0) goto L35
            java.lang.String r1 = "status"
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L41
            r0.put(r1, r5)     // Catch: java.lang.Throwable -> L41
        L35:
            android.database.sqlite.SQLiteDatabase r5 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L41
            java.lang.String r1 = "campaignDAIDao"
            r2 = 0
            r5.update(r1, r0, r4, r2)     // Catch: java.lang.Throwable -> L41
        L3f:
            monitor-exit(r3)
            return
        L41:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public final synchronized void a(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = r3.m(r4)     // Catch: java.lang.Throwable -> L41
            if (r0 == 0) goto L3f
            android.database.sqlite.SQLiteDatabase r0 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L41
            if (r0 != 0) goto Lf
            monitor-exit(r3)
            return
        Lf:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L41
            r0.<init>()     // Catch: java.lang.Throwable -> L41
            java.lang.String r1 = "unique_key = '"
            r0.append(r1)     // Catch: java.lang.Throwable -> L41
            r0.append(r4)     // Catch: java.lang.Throwable -> L41
            java.lang.String r4 = "'"
            r0.append(r4)     // Catch: java.lang.Throwable -> L41
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L41
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L41
            r0.<init>()     // Catch: java.lang.Throwable -> L41
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L41
            if (r1 != 0) goto L35
            java.lang.String r1 = "url"
            r0.put(r1, r5)     // Catch: java.lang.Throwable -> L41
        L35:
            android.database.sqlite.SQLiteDatabase r5 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L41
            java.lang.String r1 = "campaignDAIDao"
            r2 = 0
            r5.update(r1, r0, r4, r2)     // Catch: java.lang.Throwable -> L41
        L3f:
            monitor-exit(r3)
            return
        L41:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public final synchronized java.lang.String b(java.lang.String r12) {
            r11 = this;
            monitor-enter(r11)
            java.lang.String r0 = ""
            boolean r1 = r11.m(r12)     // Catch: java.lang.Throwable -> L6a
            if (r1 == 0) goto L68
            android.database.sqlite.SQLiteDatabase r1 = r11.getReadableDatabase()     // Catch: java.lang.Throwable -> L6a
            if (r1 != 0) goto L11
            monitor-exit(r11)
            return r0
        L11:
            r1 = 0
            android.database.sqlite.SQLiteDatabase r2 = r11.getReadableDatabase()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            java.lang.String r3 = "campaignDAIDao"
            java.lang.String r4 = "url"
            java.lang.String[] r4 = new java.lang.String[]{r4}     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            java.lang.String r5 = "unique_key = ?"
            r6 = 1
            java.lang.String[] r6 = new java.lang.String[r6]     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            r10 = 0
            r6[r10] = r12     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            r7 = 0
            r8 = 0
            java.lang.String r9 = "unique_key"
            android.database.Cursor r1 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            if (r1 == 0) goto L41
            int r12 = r1.getCount()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            if (r12 <= 0) goto L41
            boolean r12 = r1.moveToFirst()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            if (r12 == 0) goto L41
            java.lang.String r12 = r1.getString(r10)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            r0 = r12
        L41:
            if (r1 == 0) goto L68
            boolean r12 = r1.isClosed()     // Catch: java.lang.Throwable -> L6a
            if (r12 != 0) goto L68
        L49:
            r1.close()     // Catch: java.lang.Throwable -> L6a
            goto L68
        L4d:
            r12 = move-exception
            goto L5c
        L4f:
            r12 = move-exception
            r12.printStackTrace()     // Catch: java.lang.Throwable -> L4d
            if (r1 == 0) goto L68
            boolean r12 = r1.isClosed()     // Catch: java.lang.Throwable -> L6a
            if (r12 != 0) goto L68
            goto L49
        L5c:
            if (r1 == 0) goto L67
            boolean r0 = r1.isClosed()     // Catch: java.lang.Throwable -> L6a
            if (r0 != 0) goto L67
            r1.close()     // Catch: java.lang.Throwable -> L6a
        L67:
            throw r12     // Catch: java.lang.Throwable -> L6a
        L68:
            monitor-exit(r11)
            return r0
        L6a:
            r12 = move-exception
            monitor-exit(r11)
            throw r12
    }

    public final synchronized void b(java.lang.String r4, int r5) {
            r3 = this;
            monitor-enter(r3)
            if (r5 > 0) goto L9
            boolean r0 = r3.m(r4)     // Catch: java.lang.Throwable -> L43
            if (r0 == 0) goto L41
        L9:
            android.database.sqlite.SQLiteDatabase r0 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L43
            if (r0 != 0) goto L11
            monitor-exit(r3)
            return
        L11:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L43
            r0.<init>()     // Catch: java.lang.Throwable -> L43
            java.lang.String r1 = "unique_key = '"
            r0.append(r1)     // Catch: java.lang.Throwable -> L43
            r0.append(r4)     // Catch: java.lang.Throwable -> L43
            java.lang.String r4 = "'"
            r0.append(r4)     // Catch: java.lang.Throwable -> L43
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L43
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L43
            r0.<init>()     // Catch: java.lang.Throwable -> L43
            if (r5 <= 0) goto L41
            java.lang.String r1 = "progress"
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L43
            r0.put(r1, r5)     // Catch: java.lang.Throwable -> L43
            android.database.sqlite.SQLiteDatabase r5 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L43
            java.lang.String r1 = "campaignDAIDao"
            r2 = 0
            r5.update(r1, r0, r4, r2)     // Catch: java.lang.Throwable -> L43
        L41:
            monitor-exit(r3)
            return
        L43:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public final synchronized void b(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = r3.m(r4)     // Catch: java.lang.Throwable -> L41
            if (r0 == 0) goto L3f
            android.database.sqlite.SQLiteDatabase r0 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L41
            if (r0 != 0) goto Lf
            monitor-exit(r3)
            return
        Lf:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L41
            r0.<init>()     // Catch: java.lang.Throwable -> L41
            java.lang.String r1 = "unique_key = '"
            r0.append(r1)     // Catch: java.lang.Throwable -> L41
            r0.append(r4)     // Catch: java.lang.Throwable -> L41
            java.lang.String r4 = "'"
            r0.append(r4)     // Catch: java.lang.Throwable -> L41
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L41
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L41
            r0.<init>()     // Catch: java.lang.Throwable -> L41
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L41
            if (r1 != 0) goto L35
            java.lang.String r1 = "save_path"
            r0.put(r1, r5)     // Catch: java.lang.Throwable -> L41
        L35:
            android.database.sqlite.SQLiteDatabase r5 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L41
            java.lang.String r1 = "campaignDAIDao"
            r2 = 0
            r5.update(r1, r0, r4, r2)     // Catch: java.lang.Throwable -> L41
        L3f:
            monitor-exit(r3)
            return
        L41:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public final synchronized int c(java.lang.String r11) {
            r10 = this;
            monitor-enter(r10)
            boolean r0 = r10.m(r11)     // Catch: java.lang.Throwable -> L68
            r1 = 0
            if (r0 == 0) goto L66
            android.database.sqlite.SQLiteDatabase r0 = r10.getReadableDatabase()     // Catch: java.lang.Throwable -> L68
            if (r0 != 0) goto L10
            monitor-exit(r10)
            return r1
        L10:
            r0 = 0
            android.database.sqlite.SQLiteDatabase r2 = r10.getReadableDatabase()     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L4d
            java.lang.String r3 = "campaignDAIDao"
            java.lang.String r4 = "status"
            java.lang.String[] r4 = new java.lang.String[]{r4}     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L4d
            java.lang.String r5 = "unique_key = ?"
            r6 = 1
            java.lang.String[] r6 = new java.lang.String[r6]     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L4d
            r6[r1] = r11     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L4d
            r7 = 0
            r8 = 0
            java.lang.String r9 = "unique_key"
            android.database.Cursor r0 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L4d
            if (r0 == 0) goto L3f
            int r11 = r0.getCount()     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L4d
            if (r11 <= 0) goto L3f
            boolean r11 = r0.moveToFirst()     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L4d
            if (r11 == 0) goto L3f
            int r11 = r0.getInt(r1)     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L4d
            r1 = r11
        L3f:
            if (r0 == 0) goto L66
            boolean r11 = r0.isClosed()     // Catch: java.lang.Throwable -> L68
            if (r11 != 0) goto L66
        L47:
            r0.close()     // Catch: java.lang.Throwable -> L68
            goto L66
        L4b:
            r11 = move-exception
            goto L5a
        L4d:
            r11 = move-exception
            r11.printStackTrace()     // Catch: java.lang.Throwable -> L4b
            if (r0 == 0) goto L66
            boolean r11 = r0.isClosed()     // Catch: java.lang.Throwable -> L68
            if (r11 != 0) goto L66
            goto L47
        L5a:
            if (r0 == 0) goto L65
            boolean r1 = r0.isClosed()     // Catch: java.lang.Throwable -> L68
            if (r1 != 0) goto L65
            r0.close()     // Catch: java.lang.Throwable -> L68
        L65:
            throw r11     // Catch: java.lang.Throwable -> L68
        L66:
            monitor-exit(r10)
            return r1
        L68:
            r11 = move-exception
            monitor-exit(r10)
            throw r11
    }

    public final synchronized java.lang.String d(java.lang.String r12) {
            r11 = this;
            monitor-enter(r11)
            java.lang.String r0 = ""
            boolean r1 = r11.m(r12)     // Catch: java.lang.Throwable -> L6a
            if (r1 == 0) goto L68
            android.database.sqlite.SQLiteDatabase r1 = r11.getReadableDatabase()     // Catch: java.lang.Throwable -> L6a
            if (r1 != 0) goto L11
            monitor-exit(r11)
            return r0
        L11:
            r1 = 0
            android.database.sqlite.SQLiteDatabase r2 = r11.getReadableDatabase()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            java.lang.String r3 = "campaignDAIDao"
            java.lang.String r4 = "rid"
            java.lang.String[] r4 = new java.lang.String[]{r4}     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            java.lang.String r5 = "unique_key = ?"
            r6 = 1
            java.lang.String[] r6 = new java.lang.String[r6]     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            r10 = 0
            r6[r10] = r12     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            r7 = 0
            r8 = 0
            java.lang.String r9 = "unique_key"
            android.database.Cursor r1 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            if (r1 == 0) goto L41
            int r12 = r1.getCount()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            if (r12 <= 0) goto L41
            boolean r12 = r1.moveToFirst()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            if (r12 == 0) goto L41
            java.lang.String r12 = r1.getString(r10)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            r0 = r12
        L41:
            if (r1 == 0) goto L68
            boolean r12 = r1.isClosed()     // Catch: java.lang.Throwable -> L6a
            if (r12 != 0) goto L68
        L49:
            r1.close()     // Catch: java.lang.Throwable -> L6a
            goto L68
        L4d:
            r12 = move-exception
            goto L5c
        L4f:
            r12 = move-exception
            r12.printStackTrace()     // Catch: java.lang.Throwable -> L4d
            if (r1 == 0) goto L68
            boolean r12 = r1.isClosed()     // Catch: java.lang.Throwable -> L6a
            if (r12 != 0) goto L68
            goto L49
        L5c:
            if (r1 == 0) goto L67
            boolean r0 = r1.isClosed()     // Catch: java.lang.Throwable -> L6a
            if (r0 != 0) goto L67
            r1.close()     // Catch: java.lang.Throwable -> L6a
        L67:
            throw r12     // Catch: java.lang.Throwable -> L6a
        L68:
            monitor-exit(r11)
            return r0
        L6a:
            r12 = move-exception
            monitor-exit(r11)
            throw r12
    }

    public final synchronized java.lang.String e(java.lang.String r12) {
            r11 = this;
            monitor-enter(r11)
            java.lang.String r0 = ""
            boolean r1 = r11.m(r12)     // Catch: java.lang.Throwable -> L6a
            if (r1 == 0) goto L68
            android.database.sqlite.SQLiteDatabase r1 = r11.getReadableDatabase()     // Catch: java.lang.Throwable -> L6a
            if (r1 != 0) goto L11
            monitor-exit(r11)
            return r0
        L11:
            r1 = 0
            android.database.sqlite.SQLiteDatabase r2 = r11.getReadableDatabase()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            java.lang.String r3 = "campaignDAIDao"
            java.lang.String r4 = "rid_n"
            java.lang.String[] r4 = new java.lang.String[]{r4}     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            java.lang.String r5 = "unique_key = ?"
            r6 = 1
            java.lang.String[] r6 = new java.lang.String[r6]     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            r10 = 0
            r6[r10] = r12     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            r7 = 0
            r8 = 0
            java.lang.String r9 = "unique_key"
            android.database.Cursor r1 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            if (r1 == 0) goto L41
            int r12 = r1.getCount()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            if (r12 <= 0) goto L41
            boolean r12 = r1.moveToFirst()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            if (r12 == 0) goto L41
            java.lang.String r12 = r1.getString(r10)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            r0 = r12
        L41:
            if (r1 == 0) goto L68
            boolean r12 = r1.isClosed()     // Catch: java.lang.Throwable -> L6a
            if (r12 != 0) goto L68
        L49:
            r1.close()     // Catch: java.lang.Throwable -> L6a
            goto L68
        L4d:
            r12 = move-exception
            goto L5c
        L4f:
            r12 = move-exception
            r12.printStackTrace()     // Catch: java.lang.Throwable -> L4d
            if (r1 == 0) goto L68
            boolean r12 = r1.isClosed()     // Catch: java.lang.Throwable -> L6a
            if (r12 != 0) goto L68
            goto L49
        L5c:
            if (r1 == 0) goto L67
            boolean r0 = r1.isClosed()     // Catch: java.lang.Throwable -> L6a
            if (r0 != 0) goto L67
            r1.close()     // Catch: java.lang.Throwable -> L6a
        L67:
            throw r12     // Catch: java.lang.Throwable -> L6a
        L68:
            monitor-exit(r11)
            return r0
        L6a:
            r12 = move-exception
            monitor-exit(r11)
            throw r12
    }

    public final synchronized java.lang.String f(java.lang.String r12) {
            r11 = this;
            monitor-enter(r11)
            java.lang.String r0 = ""
            boolean r1 = r11.m(r12)     // Catch: java.lang.Throwable -> L6a
            if (r1 == 0) goto L68
            android.database.sqlite.SQLiteDatabase r1 = r11.getReadableDatabase()     // Catch: java.lang.Throwable -> L6a
            if (r1 != 0) goto L11
            monitor-exit(r11)
            return r0
        L11:
            r1 = 0
            android.database.sqlite.SQLiteDatabase r2 = r11.getReadableDatabase()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            java.lang.String r3 = "campaignDAIDao"
            java.lang.String r4 = "unitid"
            java.lang.String[] r4 = new java.lang.String[]{r4}     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            java.lang.String r5 = "unique_key = ?"
            r6 = 1
            java.lang.String[] r6 = new java.lang.String[r6]     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            r10 = 0
            r6[r10] = r12     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            r7 = 0
            r8 = 0
            java.lang.String r9 = "unique_key"
            android.database.Cursor r1 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            if (r1 == 0) goto L41
            int r12 = r1.getCount()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            if (r12 <= 0) goto L41
            boolean r12 = r1.moveToFirst()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            if (r12 == 0) goto L41
            java.lang.String r12 = r1.getString(r10)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            r0 = r12
        L41:
            if (r1 == 0) goto L68
            boolean r12 = r1.isClosed()     // Catch: java.lang.Throwable -> L6a
            if (r12 != 0) goto L68
        L49:
            r1.close()     // Catch: java.lang.Throwable -> L6a
            goto L68
        L4d:
            r12 = move-exception
            goto L5c
        L4f:
            r12 = move-exception
            r12.printStackTrace()     // Catch: java.lang.Throwable -> L4d
            if (r1 == 0) goto L68
            boolean r12 = r1.isClosed()     // Catch: java.lang.Throwable -> L6a
            if (r12 != 0) goto L68
            goto L49
        L5c:
            if (r1 == 0) goto L67
            boolean r0 = r1.isClosed()     // Catch: java.lang.Throwable -> L6a
            if (r0 != 0) goto L67
            r1.close()     // Catch: java.lang.Throwable -> L6a
        L67:
            throw r12     // Catch: java.lang.Throwable -> L6a
        L68:
            monitor-exit(r11)
            return r0
        L6a:
            r12 = move-exception
            monitor-exit(r11)
            throw r12
    }

    public final synchronized java.lang.String g(java.lang.String r12) {
            r11 = this;
            monitor-enter(r11)
            java.lang.String r0 = ""
            boolean r1 = r11.m(r12)     // Catch: java.lang.Throwable -> L6a
            if (r1 == 0) goto L68
            android.database.sqlite.SQLiteDatabase r1 = r11.getReadableDatabase()     // Catch: java.lang.Throwable -> L6a
            if (r1 != 0) goto L11
            monitor-exit(r11)
            return r0
        L11:
            r1 = 0
            android.database.sqlite.SQLiteDatabase r2 = r11.getReadableDatabase()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            java.lang.String r3 = "campaignDAIDao"
            java.lang.String r4 = "id"
            java.lang.String[] r4 = new java.lang.String[]{r4}     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            java.lang.String r5 = "unique_key = ?"
            r6 = 1
            java.lang.String[] r6 = new java.lang.String[r6]     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            r10 = 0
            r6[r10] = r12     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            r7 = 0
            r8 = 0
            java.lang.String r9 = "unique_key"
            android.database.Cursor r1 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            if (r1 == 0) goto L41
            int r12 = r1.getCount()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            if (r12 <= 0) goto L41
            boolean r12 = r1.moveToFirst()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            if (r12 == 0) goto L41
            java.lang.String r12 = r1.getString(r10)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            r0 = r12
        L41:
            if (r1 == 0) goto L68
            boolean r12 = r1.isClosed()     // Catch: java.lang.Throwable -> L6a
            if (r12 != 0) goto L68
        L49:
            r1.close()     // Catch: java.lang.Throwable -> L6a
            goto L68
        L4d:
            r12 = move-exception
            goto L5c
        L4f:
            r12 = move-exception
            r12.printStackTrace()     // Catch: java.lang.Throwable -> L4d
            if (r1 == 0) goto L68
            boolean r12 = r1.isClosed()     // Catch: java.lang.Throwable -> L6a
            if (r12 != 0) goto L68
            goto L49
        L5c:
            if (r1 == 0) goto L67
            boolean r0 = r1.isClosed()     // Catch: java.lang.Throwable -> L6a
            if (r0 != 0) goto L67
            r1.close()     // Catch: java.lang.Throwable -> L6a
        L67:
            throw r12     // Catch: java.lang.Throwable -> L6a
        L68:
            monitor-exit(r11)
            return r0
        L6a:
            r12 = move-exception
            monitor-exit(r11)
            throw r12
    }

    public final synchronized java.lang.String h(java.lang.String r12) {
            r11 = this;
            monitor-enter(r11)
            java.lang.String r0 = ""
            boolean r1 = r11.m(r12)     // Catch: java.lang.Throwable -> L6a
            if (r1 == 0) goto L68
            android.database.sqlite.SQLiteDatabase r1 = r11.getReadableDatabase()     // Catch: java.lang.Throwable -> L6a
            if (r1 != 0) goto L11
            monitor-exit(r11)
            return r0
        L11:
            r1 = 0
            android.database.sqlite.SQLiteDatabase r2 = r11.getReadableDatabase()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            java.lang.String r3 = "campaignDAIDao"
            java.lang.String r4 = "package_name"
            java.lang.String[] r4 = new java.lang.String[]{r4}     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            java.lang.String r5 = "unique_key = ?"
            r6 = 1
            java.lang.String[] r6 = new java.lang.String[r6]     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            r10 = 0
            r6[r10] = r12     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            r7 = 0
            r8 = 0
            java.lang.String r9 = "unique_key"
            android.database.Cursor r1 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            if (r1 == 0) goto L41
            int r12 = r1.getCount()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            if (r12 <= 0) goto L41
            boolean r12 = r1.moveToFirst()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            if (r12 == 0) goto L41
            java.lang.String r12 = r1.getString(r10)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            r0 = r12
        L41:
            if (r1 == 0) goto L68
            boolean r12 = r1.isClosed()     // Catch: java.lang.Throwable -> L6a
            if (r12 != 0) goto L68
        L49:
            r1.close()     // Catch: java.lang.Throwable -> L6a
            goto L68
        L4d:
            r12 = move-exception
            goto L5c
        L4f:
            r12 = move-exception
            r12.printStackTrace()     // Catch: java.lang.Throwable -> L4d
            if (r1 == 0) goto L68
            boolean r12 = r1.isClosed()     // Catch: java.lang.Throwable -> L6a
            if (r12 != 0) goto L68
            goto L49
        L5c:
            if (r1 == 0) goto L67
            boolean r0 = r1.isClosed()     // Catch: java.lang.Throwable -> L6a
            if (r0 != 0) goto L67
            r1.close()     // Catch: java.lang.Throwable -> L6a
        L67:
            throw r12     // Catch: java.lang.Throwable -> L6a
        L68:
            monitor-exit(r11)
            return r0
        L6a:
            r12 = move-exception
            monitor-exit(r11)
            throw r12
    }

    public final synchronized java.lang.String i(java.lang.String r12) {
            r11 = this;
            monitor-enter(r11)
            java.lang.String r0 = ""
            boolean r1 = r11.m(r12)     // Catch: java.lang.Throwable -> L6a
            if (r1 == 0) goto L68
            android.database.sqlite.SQLiteDatabase r1 = r11.getReadableDatabase()     // Catch: java.lang.Throwable -> L6a
            if (r1 != 0) goto L11
            monitor-exit(r11)
            return r0
        L11:
            r1 = 0
            android.database.sqlite.SQLiteDatabase r2 = r11.getReadableDatabase()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            java.lang.String r3 = "campaignDAIDao"
            java.lang.String r4 = "save_path"
            java.lang.String[] r4 = new java.lang.String[]{r4}     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            java.lang.String r5 = "unique_key = ?"
            r6 = 1
            java.lang.String[] r6 = new java.lang.String[r6]     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            r10 = 0
            r6[r10] = r12     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            r7 = 0
            r8 = 0
            java.lang.String r9 = "unique_key"
            android.database.Cursor r1 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            if (r1 == 0) goto L41
            int r12 = r1.getCount()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            if (r12 <= 0) goto L41
            boolean r12 = r1.moveToFirst()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            if (r12 == 0) goto L41
            java.lang.String r12 = r1.getString(r10)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            r0 = r12
        L41:
            if (r1 == 0) goto L68
            boolean r12 = r1.isClosed()     // Catch: java.lang.Throwable -> L6a
            if (r12 != 0) goto L68
        L49:
            r1.close()     // Catch: java.lang.Throwable -> L6a
            goto L68
        L4d:
            r12 = move-exception
            goto L5c
        L4f:
            r12 = move-exception
            r12.printStackTrace()     // Catch: java.lang.Throwable -> L4d
            if (r1 == 0) goto L68
            boolean r12 = r1.isClosed()     // Catch: java.lang.Throwable -> L6a
            if (r12 != 0) goto L68
            goto L49
        L5c:
            if (r1 == 0) goto L67
            boolean r0 = r1.isClosed()     // Catch: java.lang.Throwable -> L6a
            if (r0 != 0) goto L67
            r1.close()     // Catch: java.lang.Throwable -> L6a
        L67:
            throw r12     // Catch: java.lang.Throwable -> L6a
        L68:
            monitor-exit(r11)
            return r0
        L6a:
            r12 = move-exception
            monitor-exit(r11)
            throw r12
    }

    public final synchronized int j(java.lang.String r12) {
            r11 = this;
            monitor-enter(r11)
            r0 = -2
            android.database.sqlite.SQLiteDatabase r1 = r11.getReadableDatabase()     // Catch: java.lang.Throwable -> L63
            if (r1 != 0) goto La
            monitor-exit(r11)
            return r0
        La:
            r1 = 0
            android.database.sqlite.SQLiteDatabase r2 = r11.getReadableDatabase()     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L48
            java.lang.String r3 = "campaignDAIDao"
            java.lang.String r4 = "atat_type"
            java.lang.String[] r4 = new java.lang.String[]{r4}     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L48
            java.lang.String r5 = "package_name = ?"
            r6 = 1
            java.lang.String[] r6 = new java.lang.String[r6]     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L48
            r10 = 0
            r6[r10] = r12     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L48
            r7 = 0
            r8 = 0
            java.lang.String r9 = "unique_key"
            android.database.Cursor r1 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L48
            if (r1 == 0) goto L3a
            int r12 = r1.getCount()     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L48
            if (r12 <= 0) goto L3a
            boolean r12 = r1.moveToFirst()     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L48
            if (r12 == 0) goto L3a
            int r12 = r1.getInt(r10)     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L48
            r0 = r12
        L3a:
            if (r1 == 0) goto L55
            boolean r12 = r1.isClosed()     // Catch: java.lang.Throwable -> L63
            if (r12 != 0) goto L55
        L42:
            r1.close()     // Catch: java.lang.Throwable -> L63
            goto L55
        L46:
            r12 = move-exception
            goto L57
        L48:
            r12 = move-exception
            r12.printStackTrace()     // Catch: java.lang.Throwable -> L46
            if (r1 == 0) goto L55
            boolean r12 = r1.isClosed()     // Catch: java.lang.Throwable -> L63
            if (r12 != 0) goto L55
            goto L42
        L55:
            monitor-exit(r11)
            return r0
        L57:
            if (r1 == 0) goto L62
            boolean r0 = r1.isClosed()     // Catch: java.lang.Throwable -> L63
            if (r0 != 0) goto L62
            r1.close()     // Catch: java.lang.Throwable -> L63
        L62:
            throw r12     // Catch: java.lang.Throwable -> L63
        L63:
            r12 = move-exception
            monitor-exit(r11)
            throw r12
    }

    public final synchronized java.lang.String k(java.lang.String r12) {
            r11 = this;
            monitor-enter(r11)
            java.lang.String r0 = ""
            android.database.sqlite.SQLiteDatabase r1 = r11.getReadableDatabase()     // Catch: java.lang.Throwable -> L64
            if (r1 != 0) goto Lb
            monitor-exit(r11)
            return r0
        Lb:
            r1 = 0
            android.database.sqlite.SQLiteDatabase r2 = r11.getReadableDatabase()     // Catch: java.lang.Throwable -> L47 java.lang.Exception -> L49
            java.lang.String r3 = "campaignDAIDao"
            java.lang.String r4 = "app_name"
            java.lang.String[] r4 = new java.lang.String[]{r4}     // Catch: java.lang.Throwable -> L47 java.lang.Exception -> L49
            java.lang.String r5 = "package_name = ?"
            r6 = 1
            java.lang.String[] r6 = new java.lang.String[r6]     // Catch: java.lang.Throwable -> L47 java.lang.Exception -> L49
            r10 = 0
            r6[r10] = r12     // Catch: java.lang.Throwable -> L47 java.lang.Exception -> L49
            r7 = 0
            r8 = 0
            java.lang.String r9 = "unique_key"
            android.database.Cursor r1 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L47 java.lang.Exception -> L49
            if (r1 == 0) goto L3b
            int r12 = r1.getCount()     // Catch: java.lang.Throwable -> L47 java.lang.Exception -> L49
            if (r12 <= 0) goto L3b
            boolean r12 = r1.moveToFirst()     // Catch: java.lang.Throwable -> L47 java.lang.Exception -> L49
            if (r12 == 0) goto L3b
            java.lang.String r12 = r1.getString(r10)     // Catch: java.lang.Throwable -> L47 java.lang.Exception -> L49
            r0 = r12
        L3b:
            if (r1 == 0) goto L56
            boolean r12 = r1.isClosed()     // Catch: java.lang.Throwable -> L64
            if (r12 != 0) goto L56
        L43:
            r1.close()     // Catch: java.lang.Throwable -> L64
            goto L56
        L47:
            r12 = move-exception
            goto L58
        L49:
            r12 = move-exception
            r12.printStackTrace()     // Catch: java.lang.Throwable -> L47
            if (r1 == 0) goto L56
            boolean r12 = r1.isClosed()     // Catch: java.lang.Throwable -> L64
            if (r12 != 0) goto L56
            goto L43
        L56:
            monitor-exit(r11)
            return r0
        L58:
            if (r1 == 0) goto L63
            boolean r0 = r1.isClosed()     // Catch: java.lang.Throwable -> L64
            if (r0 != 0) goto L63
            r1.close()     // Catch: java.lang.Throwable -> L64
        L63:
            throw r12     // Catch: java.lang.Throwable -> L64
        L64:
            r12 = move-exception
            monitor-exit(r11)
            throw r12
    }

    public final synchronized java.lang.String l(java.lang.String r12) {
            r11 = this;
            monitor-enter(r11)
            java.lang.String r0 = ""
            android.database.sqlite.SQLiteDatabase r1 = r11.getReadableDatabase()     // Catch: java.lang.Throwable -> L64
            if (r1 != 0) goto Lb
            monitor-exit(r11)
            return r0
        Lb:
            r1 = 0
            android.database.sqlite.SQLiteDatabase r2 = r11.getReadableDatabase()     // Catch: java.lang.Throwable -> L47 java.lang.Exception -> L49
            java.lang.String r3 = "campaignDAIDao"
            java.lang.String r4 = "unique_key"
            java.lang.String[] r4 = new java.lang.String[]{r4}     // Catch: java.lang.Throwable -> L47 java.lang.Exception -> L49
            java.lang.String r5 = "package_name = ?"
            r6 = 1
            java.lang.String[] r6 = new java.lang.String[r6]     // Catch: java.lang.Throwable -> L47 java.lang.Exception -> L49
            r10 = 0
            r6[r10] = r12     // Catch: java.lang.Throwable -> L47 java.lang.Exception -> L49
            r7 = 0
            r8 = 0
            java.lang.String r9 = "unique_key"
            android.database.Cursor r1 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L47 java.lang.Exception -> L49
            if (r1 == 0) goto L3b
            int r12 = r1.getCount()     // Catch: java.lang.Throwable -> L47 java.lang.Exception -> L49
            if (r12 <= 0) goto L3b
            boolean r12 = r1.moveToFirst()     // Catch: java.lang.Throwable -> L47 java.lang.Exception -> L49
            if (r12 == 0) goto L3b
            java.lang.String r12 = r1.getString(r10)     // Catch: java.lang.Throwable -> L47 java.lang.Exception -> L49
            r0 = r12
        L3b:
            if (r1 == 0) goto L56
            boolean r12 = r1.isClosed()     // Catch: java.lang.Throwable -> L64
            if (r12 != 0) goto L56
        L43:
            r1.close()     // Catch: java.lang.Throwable -> L64
            goto L56
        L47:
            r12 = move-exception
            goto L58
        L49:
            r12 = move-exception
            r12.printStackTrace()     // Catch: java.lang.Throwable -> L47
            if (r1 == 0) goto L56
            boolean r12 = r1.isClosed()     // Catch: java.lang.Throwable -> L64
            if (r12 != 0) goto L56
            goto L43
        L56:
            monitor-exit(r11)
            return r0
        L58:
            if (r1 == 0) goto L63
            boolean r0 = r1.isClosed()     // Catch: java.lang.Throwable -> L64
            if (r0 != 0) goto L63
            r1.close()     // Catch: java.lang.Throwable -> L64
        L63:
            throw r12     // Catch: java.lang.Throwable -> L64
        L64:
            r12 = move-exception
            monitor-exit(r11)
            throw r12
    }
}
