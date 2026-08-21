package com.mbridge.msdk.foundation.db;

public class d extends com.mbridge.msdk.foundation.db.a<com.mbridge.msdk.foundation.entity.e> {
    private static com.mbridge.msdk.foundation.db.d a;

    private d(com.mbridge.msdk.foundation.db.h r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static com.mbridge.msdk.foundation.db.d a(com.mbridge.msdk.foundation.db.h r2) {
            com.mbridge.msdk.foundation.db.d r0 = com.mbridge.msdk.foundation.db.d.a
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.foundation.db.d> r0 = com.mbridge.msdk.foundation.db.d.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.db.d r1 = com.mbridge.msdk.foundation.db.d.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.foundation.db.d r1 = new com.mbridge.msdk.foundation.db.d     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.foundation.db.d.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.mbridge.msdk.foundation.db.d r2 = com.mbridge.msdk.foundation.db.d.a
            return r2
    }

    public final synchronized int a() {
            r4 = this;
            monitor-enter(r4)
            r0 = 0
            r1 = 0
            java.lang.String r2 = "select count(*) from click_time"
            android.database.sqlite.SQLiteDatabase r3 = r4.getReadableDatabase()     // Catch: java.lang.Throwable -> L1f java.lang.Exception -> L21
            android.database.Cursor r0 = r3.rawQuery(r2, r0)     // Catch: java.lang.Throwable -> L1f java.lang.Exception -> L21
            if (r0 == 0) goto L19
            boolean r2 = r0.moveToFirst()     // Catch: java.lang.Throwable -> L1f java.lang.Exception -> L21
            if (r2 == 0) goto L19
            int r1 = r0.getInt(r1)     // Catch: java.lang.Throwable -> L1f java.lang.Exception -> L21
        L19:
            if (r0 == 0) goto L28
        L1b:
            r0.close()     // Catch: java.lang.Throwable -> L30
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
            r0.close()     // Catch: java.lang.Throwable -> L30
        L2f:
            throw r1     // Catch: java.lang.Throwable -> L30
        L30:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    public final synchronized java.util.List<com.mbridge.msdk.foundation.entity.e> a(int r28) {
            r27 = this;
            r0 = r28
            monitor-enter(r27)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L14d
            r1.<init>()     // Catch: java.lang.Throwable -> L14d
            java.lang.String r2 = "select * from click_time LIMIT "
            r1.append(r2)     // Catch: java.lang.Throwable -> L14d
            r1.append(r0)     // Catch: java.lang.Throwable -> L14d
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L14d
            android.database.sqlite.SQLiteDatabase r2 = r27.getWritableDatabase()     // Catch: java.lang.Throwable -> L14d
            r3 = 0
            if (r2 != 0) goto L1d
            monitor-exit(r27)
            return r3
        L1d:
            android.database.sqlite.SQLiteDatabase r2 = r27.getWritableDatabase()     // Catch: java.lang.Throwable -> L139 java.lang.Exception -> L13b
            android.database.Cursor r1 = r2.rawQuery(r1, r3)     // Catch: java.lang.Throwable -> L139 java.lang.Exception -> L13b
            if (r1 == 0) goto L133
            int r2 = r1.getCount()     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            if (r2 <= 0) goto L133
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            r2.<init>()     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            r4 = 0
            r5 = r4
        L34:
            boolean r6 = r1.moveToNext()     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            if (r6 == 0) goto L12a
            if (r5 < r0) goto L3e
            goto L12a
        L3e:
            int r5 = r5 + 1
            java.lang.String r6 = "id"
            int r6 = r1.getColumnIndex(r6)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            int r6 = r1.getInt(r6)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r7 = "campaignId"
            int r7 = r1.getColumnIndex(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r11 = r1.getString(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r7 = "click_type"
            int r7 = r1.getColumnIndex(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            int r19 = r1.getInt(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r7 = "click_duration"
            int r7 = r1.getColumnIndex(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r12 = r1.getString(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r7 = "last_url"
            int r7 = r1.getColumnIndex(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r13 = r1.getString(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r7 = "type"
            int r7 = r1.getColumnIndex(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            int r18 = r1.getInt(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r7 = "code"
            int r7 = r1.getColumnIndex(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            int r14 = r1.getInt(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r7 = "header"
            int r7 = r1.getColumnIndex(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r16 = r1.getString(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r7 = "exception"
            int r7 = r1.getColumnIndex(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r15 = r1.getString(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r7 = "content"
            int r7 = r1.getColumnIndex(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r17 = r1.getString(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r7 = "unit_id"
            int r7 = r1.getColumnIndex(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r20 = r1.getString(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r7 = "rid"
            int r7 = r1.getColumnIndex(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r9 = r1.getString(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r7 = "rid_n"
            int r7 = r1.getColumnIndex(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r10 = r1.getString(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r7 = "landing_type"
            int r7 = r1.getColumnIndex(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            int r21 = r1.getInt(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r7 = "link_type"
            int r7 = r1.getColumnIndex(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            int r22 = r1.getInt(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r7 = "network_type"
            int r7 = r1.getColumnIndex(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            int r24 = r1.getInt(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r7 = "network_str"
            int r7 = r1.getColumnIndex(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r26 = r1.getString(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r7 = "market_result"
            int r7 = r1.getColumnIndex(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            int r25 = r1.getInt(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r7 = "click_time"
            int r7 = r1.getColumnIndex(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r23 = r1.getString(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            com.mbridge.msdk.foundation.entity.e r7 = new com.mbridge.msdk.foundation.entity.e     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            r8 = r7
            r8.<init>(r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            r2.add(r7)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            android.database.sqlite.SQLiteDatabase r7 = r27.getWritableDatabase()     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r8 = "click_time"
            java.lang.String r9 = "id = ?"
            r10 = 1
            java.lang.String[] r10 = new java.lang.String[r10]     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            r11.<init>()     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            r11.append(r6)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r6 = ""
            r11.append(r6)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            java.lang.String r6 = r11.toString()     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            r10[r4] = r6     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            r7.delete(r8, r9, r10)     // Catch: java.lang.Exception -> L131 java.lang.Throwable -> L145
            goto L34
        L12a:
            if (r1 == 0) goto L12f
            r1.close()     // Catch: java.lang.Throwable -> L14d
        L12f:
            monitor-exit(r27)
            return r2
        L131:
            r0 = move-exception
            goto L13d
        L133:
            if (r1 == 0) goto L143
        L135:
            r1.close()     // Catch: java.lang.Throwable -> L14d
            goto L143
        L139:
            r0 = move-exception
            goto L147
        L13b:
            r0 = move-exception
            r1 = r3
        L13d:
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L145
            if (r1 == 0) goto L143
            goto L135
        L143:
            monitor-exit(r27)
            return r3
        L145:
            r0 = move-exception
            r3 = r1
        L147:
            if (r3 == 0) goto L14c
            r3.close()     // Catch: java.lang.Throwable -> L14d
        L14c:
            throw r0     // Catch: java.lang.Throwable -> L14d
        L14d:
            r0 = move-exception
            monitor-exit(r27)
            throw r0
    }
}
