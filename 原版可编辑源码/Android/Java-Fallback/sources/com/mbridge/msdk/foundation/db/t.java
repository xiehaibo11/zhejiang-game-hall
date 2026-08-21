package com.mbridge.msdk.foundation.db;

public class t extends com.mbridge.msdk.foundation.db.a<com.mbridge.msdk.foundation.entity.p> {
    private static final java.lang.String a = null;
    private static com.mbridge.msdk.foundation.db.t b;

    static {
            java.lang.Class<com.mbridge.msdk.foundation.db.t> r0 = com.mbridge.msdk.foundation.db.t.class
            java.lang.String r0 = r0.getName()
            com.mbridge.msdk.foundation.db.t.a = r0
            r0 = 0
            com.mbridge.msdk.foundation.db.t.b = r0
            return
    }

    private t(com.mbridge.msdk.foundation.db.h r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static com.mbridge.msdk.foundation.db.t a(com.mbridge.msdk.foundation.db.h r2) {
            com.mbridge.msdk.foundation.db.t r0 = com.mbridge.msdk.foundation.db.t.b
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.foundation.db.t> r0 = com.mbridge.msdk.foundation.db.t.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.db.t r1 = com.mbridge.msdk.foundation.db.t.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.foundation.db.t r1 = new com.mbridge.msdk.foundation.db.t     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.foundation.db.t.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.mbridge.msdk.foundation.db.t r2 = com.mbridge.msdk.foundation.db.t.b
            return r2
    }

    public final synchronized int a() {
            r4 = this;
            monitor-enter(r4)
            r0 = 0
            r1 = 0
            java.lang.String r2 = "select count(*) from reward_report"
            android.database.sqlite.SQLiteDatabase r3 = r4.getReadableDatabase()     // Catch: java.lang.Throwable -> L1f java.lang.Exception -> L21
            android.database.Cursor r0 = r3.rawQuery(r2, r0)     // Catch: java.lang.Throwable -> L1f java.lang.Exception -> L21
            if (r0 == 0) goto L19
            boolean r2 = r0.moveToFirst()     // Catch: java.lang.Throwable -> L1f java.lang.Exception -> L21
            if (r2 == 0) goto L19
            int r1 = r0.getInt(r1)     // Catch: java.lang.Throwable -> L1f java.lang.Exception -> L21
        L19:
            if (r0 == 0) goto L28
        L1b:
            r0.close()     // Catch: java.lang.Exception -> L28 java.lang.Throwable -> L30
            goto L28
        L1f:
            r1 = move-exception
            goto L2a
        L21:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L1f
            if (r0 == 0) goto L28
            goto L1b
        L28:
            monitor-exit(r4)
            return r1
        L2a:
            if (r0 == 0) goto L2f
            r0.close()     // Catch: java.lang.Exception -> L2f java.lang.Throwable -> L30
        L2f:
            throw r1     // Catch: java.lang.Throwable -> L30
        L30:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    public final synchronized long a(com.mbridge.msdk.foundation.entity.p r5) {
            r4 = this;
            monitor-enter(r4)
            if (r5 == 0) goto L1ad
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            r0.<init>()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            java.lang.String r1 = "key"
            java.lang.String r2 = r5.o()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            java.lang.String r1 = "networkType"
            int r2 = r5.v()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            java.lang.String r1 = "network_str"
            java.lang.String r2 = r5.w()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            java.lang.String r1 = "isCompleteView"
            int r2 = r5.x()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            java.lang.String r1 = "watchedMillis"
            int r2 = r5.p()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            java.lang.String r1 = "videoLength"
            int r2 = r5.q()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            java.lang.String r1 = r5.r()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            if (r1 != 0) goto L61
            java.lang.String r1 = "offerUrl"
            java.lang.String r2 = r5.r()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
        L61:
            java.lang.String r1 = r5.s()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            if (r1 != 0) goto L7a
            java.lang.String r1 = "reason"
            java.lang.String r2 = r5.s()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            java.lang.String r3 = "utf-8"
            java.lang.String r2 = java.net.URLEncoder.encode(r2, r3)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
        L7a:
            java.lang.String r1 = "result"
            int r2 = r5.y()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            java.lang.String r1 = "duration"
            java.lang.String r2 = r5.t()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            java.lang.String r1 = "videoSize"
            long r2 = r5.u()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            java.lang.String r1 = "type"
            java.lang.String r2 = r5.g()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            java.lang.String r1 = r5.f()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            if (r2 != 0) goto Lb5
            java.lang.String r2 = "endcard_url"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
        Lb5:
            java.lang.String r1 = r5.e()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            if (r2 != 0) goto Lc4
            java.lang.String r2 = "video_url"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
        Lc4:
            java.lang.String r1 = r5.k()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            if (r2 != 0) goto Ld3
            java.lang.String r2 = "rid"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
        Ld3:
            java.lang.String r1 = r5.l()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            if (r2 != 0) goto Le2
            java.lang.String r2 = "rid_n"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
        Le2:
            java.lang.String r1 = r5.i()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            if (r2 != 0) goto Lf1
            java.lang.String r2 = "template_url"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
        Lf1:
            java.lang.String r1 = r5.d()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            if (r2 != 0) goto L100
            java.lang.String r2 = "image_url"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
        L100:
            java.lang.String r1 = r5.h()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            if (r2 != 0) goto L115
            java.lang.String r2 = "ad_type"
            java.lang.String r3 = "utf-8"
            java.lang.String r1 = java.net.URLEncoder.encode(r1, r3)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
        L115:
            java.lang.String r1 = "unitId"
            java.lang.String r2 = r5.m()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            java.lang.String r1 = "campaignId"
            java.lang.String r2 = r5.n()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            java.lang.String r1 = "2000039"
            java.lang.String r2 = r5.o()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            if (r1 == 0) goto L142
            java.lang.String r1 = com.mbridge.msdk.foundation.entity.p.f(r5)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            boolean r2 = com.mbridge.msdk.foundation.tools.ai.b(r1)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            if (r2 == 0) goto L142
            java.lang.String r2 = "h5_click_data"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
        L142:
            java.lang.String r1 = r5.a()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            if (r2 != 0) goto L157
            java.lang.String r2 = "resource_type"
            java.lang.String r3 = "utf-8"
            java.lang.String r1 = java.net.URLEncoder.encode(r1, r3)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
        L157:
            java.lang.String r1 = r5.b()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            if (r2 != 0) goto L16c
            java.lang.String r2 = "device_id"
            java.lang.String r3 = "utf-8"
            java.lang.String r1 = java.net.URLEncoder.encode(r1, r3)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
        L16c:
            java.lang.String r1 = r5.c()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            if (r2 != 0) goto L181
            java.lang.String r2 = "creative"
            java.lang.String r3 = "utf-8"
            java.lang.String r1 = java.net.URLEncoder.encode(r1, r3)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
        L181:
            java.lang.String r1 = "adspace_t"
            int r5 = r5.j()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            r0.put(r1, r5)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            android.database.sqlite.SQLiteDatabase r5 = r4.getWritableDatabase()     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            java.lang.String r1 = "reward_report"
            r2 = 0
            long r0 = r5.insert(r1, r2, r0)     // Catch: java.lang.Throwable -> L19b java.lang.Exception -> L19d
            monitor-exit(r4)
            return r0
        L19b:
            r5 = move-exception
            goto L1ab
        L19d:
            r5 = move-exception
            r5.printStackTrace()     // Catch: java.lang.Throwable -> L19b
            java.lang.String r0 = com.mbridge.msdk.foundation.db.t.a     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Throwable -> L19b
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)     // Catch: java.lang.Throwable -> L19b
            goto L1ad
        L1ab:
            monitor-exit(r4)
            throw r5
        L1ad:
            r0 = -1
            monitor-exit(r4)
            return r0
    }

    public final synchronized java.util.List<com.mbridge.msdk.foundation.entity.p> a(java.lang.String r26) {
            r25 = this;
            r0 = r26
            monitor-enter(r25)
            boolean r1 = android.text.TextUtils.isEmpty(r26)     // Catch: java.lang.Throwable -> L355
            if (r1 != 0) goto L352
            android.database.sqlite.SQLiteDatabase r2 = r25.getReadableDatabase()     // Catch: java.lang.Throwable -> L333 java.lang.Exception -> L336
            java.lang.String r3 = "reward_report"
            r4 = 0
            java.lang.String r5 = "key=?"
            r11 = 1
            java.lang.String[] r6 = new java.lang.String[r11]     // Catch: java.lang.Throwable -> L333 java.lang.Exception -> L336
            r12 = 0
            r6[r12] = r0     // Catch: java.lang.Throwable -> L333 java.lang.Exception -> L336
            r7 = 0
            r8 = 0
            r9 = 0
            android.database.Cursor r13 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L333 java.lang.Exception -> L336
            if (r13 == 0) goto L32c
            int r1 = r13.getCount()     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            if (r1 <= 0) goto L32c
            java.util.ArrayList r14 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            r14.<init>()     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
        L2c:
            boolean r1 = r13.moveToNext()     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            if (r1 == 0) goto L31c
            java.lang.String r1 = "key"
            int r1 = r13.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r3 = r13.getString(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r1 = "networkType"
            int r1 = r13.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            int r4 = r13.getInt(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r1 = "network_str"
            int r1 = r13.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r7 = r13.getString(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r1 = "isCompleteView"
            int r1 = r13.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            r13.getInt(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r1 = "watchedMillis"
            int r1 = r13.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            r13.getInt(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r1 = "videoLength"
            int r1 = r13.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            int r18 = r13.getInt(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r1 = "offerUrl"
            int r1 = r13.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r5 = r13.getString(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r1 = "reason"
            int r1 = r13.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r8 = r13.getString(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r1 = "result"
            int r1 = r13.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            int r6 = r13.getInt(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r1 = "duration"
            int r1 = r13.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r21 = r13.getString(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r1 = "videoSize"
            int r1 = r13.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            int r22 = r13.getInt(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r1 = "campaignId"
            int r1 = r13.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r9 = r13.getString(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r1 = "video_url"
            int r1 = r13.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r1 = r13.getString(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r2 = "unitId"
            int r2 = r13.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r15 = r13.getString(r2)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r2 = "rid"
            int r2 = r13.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r2 = r13.getString(r2)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r10 = "rid_n"
            int r10 = r13.getColumnIndex(r10)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r10 = r13.getString(r10)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r12 = "ad_type"
            int r12 = r13.getColumnIndex(r12)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r12 = r13.getString(r12)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r11 = "resource_type"
            int r11 = r13.getColumnIndex(r11)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r11 = r13.getString(r11)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            r16 = r2
            java.lang.String r2 = "device_id"
            int r2 = r13.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r2 = r13.getString(r2)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            r17 = r2
            java.lang.String r2 = "creative"
            int r2 = r13.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            java.lang.String r2 = r13.getString(r2)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            r19 = r2
            java.lang.String r2 = "adspace_t"
            int r2 = r13.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            int r2 = r13.getInt(r2)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            r20 = r2
            java.lang.String r2 = "2000021"
            boolean r2 = r0.equals(r2)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            if (r2 == 0) goto L132
            com.mbridge.msdk.foundation.entity.p r11 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Exception -> L12f java.lang.Throwable -> L34a
            r12 = r16
            r2 = r11
            r6 = r8
            r2.<init>(r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L12f java.lang.Throwable -> L34a
            r11.n(r9)     // Catch: java.lang.Exception -> L12f java.lang.Throwable -> L34a
            r11.e(r1)     // Catch: java.lang.Exception -> L12f java.lang.Throwable -> L34a
            r11.k(r12)     // Catch: java.lang.Exception -> L12f java.lang.Throwable -> L34a
            r11.l(r10)     // Catch: java.lang.Exception -> L12f java.lang.Throwable -> L34a
            r11.m(r15)     // Catch: java.lang.Exception -> L12f java.lang.Throwable -> L34a
            r7 = r13
            r24 = r14
            goto L2d3
        L12f:
            r0 = move-exception
            goto L338
        L132:
            r2 = r16
            r16 = r15
            java.lang.String r15 = "2000022"
            boolean r15 = r0.equals(r15)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            if (r15 == 0) goto L168
            com.mbridge.msdk.foundation.entity.p r11 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Exception -> L12f java.lang.Throwable -> L34a
            r24 = r14
            r14 = r16
            r15 = r11
            r16 = r3
            r17 = r4
            r19 = r5
            r20 = r6
            r23 = r7
            r15.<init>(r16, r17, r18, r19, r20, r21, r22, r23)     // Catch: java.lang.Exception -> L12f java.lang.Throwable -> L34a
            r11.n(r9)     // Catch: java.lang.Exception -> L12f java.lang.Throwable -> L34a
            r11.e(r1)     // Catch: java.lang.Exception -> L12f java.lang.Throwable -> L34a
            r11.k(r2)     // Catch: java.lang.Exception -> L12f java.lang.Throwable -> L34a
            r11.m(r14)     // Catch: java.lang.Exception -> L12f java.lang.Throwable -> L34a
            r11.p(r8)     // Catch: java.lang.Exception -> L12f java.lang.Throwable -> L34a
            r11.l(r10)     // Catch: java.lang.Exception -> L12f java.lang.Throwable -> L34a
            r11.h(r12)     // Catch: java.lang.Exception -> L12f java.lang.Throwable -> L34a
            goto L184
        L168:
            r24 = r14
            r14 = r16
            java.lang.String r1 = "2000025"
            boolean r1 = r0.equals(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            if (r1 == 0) goto L187
            com.mbridge.msdk.foundation.entity.p r11 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Exception -> L12f java.lang.Throwable -> L34a
            r15 = r11
            r16 = r3
            r17 = r4
            r19 = r5
            r20 = r6
            r23 = r7
            r15.<init>(r16, r17, r18, r19, r20, r21, r22, r23)     // Catch: java.lang.Exception -> L12f java.lang.Throwable -> L34a
        L184:
            r7 = r13
            goto L2d3
        L187:
            java.lang.String r1 = "2000024"
            boolean r1 = r0.equals(r1)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            if (r1 == 0) goto L197
            com.mbridge.msdk.foundation.entity.p r11 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Exception -> L12f java.lang.Throwable -> L34a
            r2 = r11
            r6 = r8
            r2.<init>(r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L12f java.lang.Throwable -> L34a
            goto L184
        L197:
            java.lang.String r1 = "2000039"
            boolean r1 = r1.equals(r0)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            if (r1 == 0) goto L1af
            java.lang.String r1 = "h5_click_data"
            int r1 = r13.getColumnIndex(r1)     // Catch: java.lang.Exception -> L12f java.lang.Throwable -> L34a
            java.lang.String r1 = r13.getString(r1)     // Catch: java.lang.Exception -> L12f java.lang.Throwable -> L34a
            com.mbridge.msdk.foundation.entity.p r11 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Exception -> L12f java.lang.Throwable -> L34a
            r11.<init>(r1)     // Catch: java.lang.Exception -> L12f java.lang.Throwable -> L34a
            goto L184
        L1af:
            java.lang.String r1 = "2000043"
            boolean r1 = r1.equals(r0)     // Catch: java.lang.Throwable -> L325 java.lang.Exception -> L329
            if (r1 == 0) goto L228
            java.lang.String r1 = "type"
            int r1 = r13.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L21c java.lang.Exception -> L223
            java.lang.String r15 = r13.getString(r1)     // Catch: java.lang.Throwable -> L21c java.lang.Exception -> L223
            java.lang.String r1 = "endcard_url"
            int r1 = r13.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L21c java.lang.Exception -> L223
            java.lang.String r5 = r13.getString(r1)     // Catch: java.lang.Throwable -> L21c java.lang.Exception -> L223
            com.mbridge.msdk.foundation.entity.p r7 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Throwable -> L21c java.lang.Exception -> L223
            r1 = r7
            r4 = r2
            r16 = r13
            r3 = r17
            r13 = r19
            r0 = r20
            r2 = r26
            r13 = r3
            r3 = r6
            r6 = r4
            r4 = r21
            r17 = r13
            r13 = r6
            r6 = r9
            r18 = r11
            r11 = r7
            r7 = r14
            r14 = r9
            r9 = r15
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L215 java.lang.Exception -> L217
            r11.k(r13)     // Catch: java.lang.Throwable -> L215 java.lang.Exception -> L217
            r11.l(r10)     // Catch: java.lang.Throwable -> L215 java.lang.Exception -> L217
            boolean r1 = android.text.TextUtils.isEmpty(r14)     // Catch: java.lang.Throwable -> L215 java.lang.Exception -> L217
            if (r1 != 0) goto L1fa
            r11.n(r14)     // Catch: java.lang.Throwable -> L215 java.lang.Exception -> L217
        L1fa:
            r11.b(r0)     // Catch: java.lang.Throwable -> L215 java.lang.Exception -> L217
            r11.h(r12)     // Catch: java.lang.Throwable -> L215 java.lang.Exception -> L217
            r1 = r18
            r11.a(r1)     // Catch: java.lang.Throwable -> L215 java.lang.Exception -> L217
            r2 = r17
            r11.b(r2)     // Catch: java.lang.Throwable -> L215 java.lang.Exception -> L217
            r3 = r19
            r11.c(r3)     // Catch: java.lang.Throwable -> L215 java.lang.Exception -> L217
            r0 = r26
            r7 = r16
            goto L2d3
        L215:
            r0 = move-exception
            goto L21f
        L217:
            r0 = move-exception
            r13 = r16
            goto L338
        L21c:
            r0 = move-exception
            r16 = r13
        L21f:
            r10 = r16
            goto L34c
        L223:
            r0 = move-exception
            r16 = r13
            goto L338
        L228:
            r5 = r9
            r1 = r11
            r16 = r13
            r3 = r19
            r0 = r20
            r13 = r2
            r2 = r17
            java.lang.String r7 = "2000045"
            r9 = r0
            r0 = r26
            boolean r7 = r7.equals(r0)     // Catch: java.lang.Throwable -> L314 java.lang.Exception -> L318
            if (r7 == 0) goto L26b
            com.mbridge.msdk.foundation.entity.p r11 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Throwable -> L314 java.lang.Exception -> L318
            r11.<init>()     // Catch: java.lang.Throwable -> L314 java.lang.Exception -> L318
            r11.o(r0)     // Catch: java.lang.Throwable -> L314 java.lang.Exception -> L318
            r11.c(r4)     // Catch: java.lang.Throwable -> L314 java.lang.Exception -> L318
            r11.d(r6)     // Catch: java.lang.Throwable -> L314 java.lang.Exception -> L318
            r11.n(r5)     // Catch: java.lang.Throwable -> L314 java.lang.Exception -> L318
            java.lang.String r1 = "template_url"
            r7 = r16
            int r1 = r7.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            java.lang.String r1 = r7.getString(r1)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.i(r1)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.p(r8)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.k(r13)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.l(r10)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.m(r14)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            goto L2d3
        L26b:
            r7 = r16
            java.lang.String r11 = "2000044"
            boolean r11 = r11.equals(r0)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            if (r11 == 0) goto L29d
            com.mbridge.msdk.foundation.entity.p r11 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.<init>()     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.o(r0)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.c(r4)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.n(r5)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            java.lang.String r1 = "image_url"
            int r1 = r7.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            java.lang.String r1 = r7.getString(r1)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.d(r1)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.p(r8)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.k(r13)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.l(r10)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.m(r14)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            goto L2d3
        L29d:
            java.lang.String r11 = "2000054"
            boolean r11 = r11.equals(r0)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            if (r11 == 0) goto L2d2
            com.mbridge.msdk.foundation.entity.p r11 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.<init>()     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.o(r0)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.a(r1)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.m(r14)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.b(r2)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.h(r12)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.n(r5)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.k(r13)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.l(r10)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.d(r6)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.p(r8)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.c(r4)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.c(r3)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r11.b(r9)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            goto L2d3
        L2d2:
            r11 = 0
        L2d3:
            if (r11 == 0) goto L2db
            r1 = r24
            r1.add(r11)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            goto L2dd
        L2db:
            r1 = r24
        L2dd:
            java.lang.String r2 = "id"
            int r2 = r7.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            int r2 = r7.getInt(r2)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            android.database.sqlite.SQLiteDatabase r3 = r25.getWritableDatabase()     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            java.lang.String r4 = "reward_report"
            java.lang.String r5 = "id = ?"
            r6 = 1
            java.lang.String[] r8 = new java.lang.String[r6]     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r9.<init>()     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r9.append(r2)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            java.lang.String r2 = ""
            r9.append(r2)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            java.lang.String r2 = r9.toString()     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r9 = 0
            r8[r9] = r2     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r3.delete(r4, r5, r8)     // Catch: java.lang.Throwable -> L30f java.lang.Exception -> L311
            r14 = r1
            r11 = r6
            r13 = r7
            r12 = r9
            goto L2c
        L30f:
            r0 = move-exception
            goto L327
        L311:
            r0 = move-exception
        L312:
            r13 = r7
            goto L338
        L314:
            r0 = move-exception
            r7 = r16
            goto L327
        L318:
            r0 = move-exception
            r7 = r16
            goto L312
        L31c:
            r7 = r13
            r1 = r14
            if (r7 == 0) goto L323
            r7.close()     // Catch: java.lang.Exception -> L323 java.lang.Throwable -> L355
        L323:
            monitor-exit(r25)
            return r1
        L325:
            r0 = move-exception
            r7 = r13
        L327:
            r10 = r7
            goto L34c
        L329:
            r0 = move-exception
            r7 = r13
            goto L338
        L32c:
            r7 = r13
            if (r7 == 0) goto L352
            r7.close()     // Catch: java.lang.Exception -> L352 java.lang.Throwable -> L355
            goto L352
        L333:
            r0 = move-exception
            r10 = 0
            goto L34c
        L336:
            r0 = move-exception
            r13 = 0
        L338:
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L34a
            java.lang.String r1 = com.mbridge.msdk.foundation.db.t.a     // Catch: java.lang.Throwable -> L34a
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L34a
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)     // Catch: java.lang.Throwable -> L34a
            if (r13 == 0) goto L352
            r13.close()     // Catch: java.lang.Exception -> L352 java.lang.Throwable -> L355
            goto L352
        L34a:
            r0 = move-exception
            r10 = r13
        L34c:
            if (r10 == 0) goto L351
            r10.close()     // Catch: java.lang.Exception -> L351 java.lang.Throwable -> L355
        L351:
            throw r0     // Catch: java.lang.Throwable -> L355
        L352:
            monitor-exit(r25)
            r1 = 0
            return r1
        L355:
            r0 = move-exception
            monitor-exit(r25)
            throw r0
    }
}
