package com.mbridge.msdk.foundation.db;

public class b extends com.mbridge.msdk.foundation.db.a {
    private static volatile com.mbridge.msdk.foundation.db.b a;

    private b(com.mbridge.msdk.foundation.db.h r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static com.mbridge.msdk.foundation.db.b a(android.content.Context r2) {
            com.mbridge.msdk.foundation.db.b r0 = com.mbridge.msdk.foundation.db.b.a
            if (r0 != 0) goto L1b
            java.lang.Class<com.mbridge.msdk.foundation.db.b> r0 = com.mbridge.msdk.foundation.db.b.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.db.b r1 = com.mbridge.msdk.foundation.db.b.a     // Catch: java.lang.Throwable -> L18
            if (r1 != 0) goto L16
            com.mbridge.msdk.foundation.db.b r1 = new com.mbridge.msdk.foundation.db.b     // Catch: java.lang.Throwable -> L18
            com.mbridge.msdk.foundation.db.i r2 = com.mbridge.msdk.foundation.db.i.a(r2)     // Catch: java.lang.Throwable -> L18
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L18
            com.mbridge.msdk.foundation.db.b.a = r1     // Catch: java.lang.Throwable -> L18
        L16:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            goto L1b
        L18:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            throw r2
        L1b:
            com.mbridge.msdk.foundation.db.b r2 = com.mbridge.msdk.foundation.db.b.a
            return r2
    }

    public final int a() {
            r5 = this;
            r0 = 0
            java.lang.String r1 = "is_replace = 0"
            android.database.sqlite.SQLiteDatabase r2 = r5.getWritableDatabase()     // Catch: java.lang.Exception -> L12
            if (r2 != 0) goto La
            return r0
        La:
            java.lang.String r3 = "bid_replace_campaign"
            r4 = 0
            int r0 = r2.delete(r3, r1, r4)     // Catch: java.lang.Exception -> L12
            goto L1c
        L12:
            r1 = move-exception
            java.lang.String r1 = r1.getLocalizedMessage()
            java.lang.String r2 = "BidReplaceCampaignDao"
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)
        L1c:
            return r0
    }

    public final int a(java.lang.String r5) {
            r4 = this;
            r0 = 0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L34
            r1.<init>()     // Catch: java.lang.Exception -> L34
            java.lang.String r2 = "real_request_id = '"
            r1.append(r2)     // Catch: java.lang.Exception -> L34
            r1.append(r5)     // Catch: java.lang.Exception -> L34
            java.lang.String r5 = "' AND "
            r1.append(r5)     // Catch: java.lang.Exception -> L34
            java.lang.String r5 = "is_replace"
            r1.append(r5)     // Catch: java.lang.Exception -> L34
            java.lang.String r5 = " = "
            r1.append(r5)     // Catch: java.lang.Exception -> L34
            r5 = 1
            r1.append(r5)     // Catch: java.lang.Exception -> L34
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Exception -> L34
            android.database.sqlite.SQLiteDatabase r1 = r4.getWritableDatabase()     // Catch: java.lang.Exception -> L34
            if (r1 != 0) goto L2c
            return r0
        L2c:
            java.lang.String r2 = "bid_replace_campaign"
            r3 = 0
            int r0 = r1.delete(r2, r5, r3)     // Catch: java.lang.Exception -> L34
            goto L3e
        L34:
            r5 = move-exception
            java.lang.String r5 = r5.getLocalizedMessage()
            java.lang.String r1 = "BidReplaceCampaignDao"
            com.mbridge.msdk.foundation.tools.z.d(r1, r5)
        L3e:
            return r0
    }

    public final int a(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            java.lang.String r0 = " = '"
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            r2 = 0
            if (r1 == 0) goto La
            return r2
        La:
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 == 0) goto L11
            return r2
        L11:
            android.database.sqlite.SQLiteDatabase r1 = r4.getWritableDatabase()
            if (r1 != 0) goto L18
            return r2
        L18:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L5c
            r1.<init>()     // Catch: java.lang.Exception -> L5c
            java.lang.String r3 = "bid_unit_id"
            r1.append(r3)     // Catch: java.lang.Exception -> L5c
            r1.append(r0)     // Catch: java.lang.Exception -> L5c
            r1.append(r6)     // Catch: java.lang.Exception -> L5c
            java.lang.String r6 = "' AND "
            r1.append(r6)     // Catch: java.lang.Exception -> L5c
            java.lang.String r6 = "expect_bid_token"
            r1.append(r6)     // Catch: java.lang.Exception -> L5c
            r1.append(r0)     // Catch: java.lang.Exception -> L5c
            r1.append(r5)     // Catch: java.lang.Exception -> L5c
            java.lang.String r5 = "'"
            r1.append(r5)     // Catch: java.lang.Exception -> L5c
            android.content.ContentValues r5 = new android.content.ContentValues     // Catch: java.lang.Exception -> L5c
            r5.<init>()     // Catch: java.lang.Exception -> L5c
            java.lang.String r6 = "is_replace"
            r0 = 1
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Exception -> L5c
            r5.put(r6, r0)     // Catch: java.lang.Exception -> L5c
            android.database.sqlite.SQLiteDatabase r6 = r4.getWritableDatabase()     // Catch: java.lang.Exception -> L5c
            java.lang.String r0 = "bid_replace_campaign"
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L5c
            r3 = 0
            int r2 = r6.update(r0, r5, r1, r3)     // Catch: java.lang.Exception -> L5c
            goto L60
        L5c:
            r5 = move-exception
            r5.printStackTrace()
        L60:
            return r2
    }

    public final int a(java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r4 = this;
            java.lang.String r0 = " = '"
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            r2 = 0
            if (r1 == 0) goto La
            return r2
        La:
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 == 0) goto L11
            return r2
        L11:
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            if (r1 == 0) goto L18
            return r2
        L18:
            android.database.sqlite.SQLiteDatabase r1 = r4.getWritableDatabase()
            if (r1 != 0) goto L1f
            return r2
        L1f:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L5e
            r1.<init>()     // Catch: java.lang.Exception -> L5e
            java.lang.String r3 = "bid_unit_id"
            r1.append(r3)     // Catch: java.lang.Exception -> L5e
            r1.append(r0)     // Catch: java.lang.Exception -> L5e
            r1.append(r6)     // Catch: java.lang.Exception -> L5e
            java.lang.String r6 = "' AND "
            r1.append(r6)     // Catch: java.lang.Exception -> L5e
            java.lang.String r6 = "expect_bid_token"
            r1.append(r6)     // Catch: java.lang.Exception -> L5e
            r1.append(r0)     // Catch: java.lang.Exception -> L5e
            r1.append(r5)     // Catch: java.lang.Exception -> L5e
            java.lang.String r5 = "'"
            r1.append(r5)     // Catch: java.lang.Exception -> L5e
            android.content.ContentValues r5 = new android.content.ContentValues     // Catch: java.lang.Exception -> L5e
            r5.<init>()     // Catch: java.lang.Exception -> L5e
            java.lang.String r6 = "expect_encrypt_price"
            r5.put(r6, r7)     // Catch: java.lang.Exception -> L5e
            android.database.sqlite.SQLiteDatabase r6 = r4.getWritableDatabase()     // Catch: java.lang.Exception -> L5e
            java.lang.String r7 = "bid_replace_campaign"
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> L5e
            r1 = 0
            int r2 = r6.update(r7, r5, r0, r1)     // Catch: java.lang.Exception -> L5e
            goto L62
        L5e:
            r5 = move-exception
            r5.printStackTrace()
        L62:
            return r2
    }

    public final void a(java.lang.String r7, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r8) {
            r6 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 == 0) goto L7
            return
        L7:
            if (r8 == 0) goto L91
            int r0 = r8.size()
            if (r0 <= 0) goto L91
            r0 = 0
            java.lang.Object r1 = r8.get(r0)     // Catch: java.lang.Exception -> L8d
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1     // Catch: java.lang.Exception -> L8d
            java.lang.String r1 = r1.getRequestId()     // Catch: java.lang.Exception -> L8d
            java.lang.Object r2 = r8.get(r0)     // Catch: java.lang.Exception -> L8d
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2     // Catch: java.lang.Exception -> L8d
            java.lang.String r2 = r2.getEncryptPrice()     // Catch: java.lang.Exception -> L8d
            java.lang.Object r8 = r8.get(r0)     // Catch: java.lang.Exception -> L8d
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = (com.mbridge.msdk.foundation.entity.CampaignEx) r8     // Catch: java.lang.Exception -> L8d
            java.lang.String r8 = r8.getCampaignUnitId()     // Catch: java.lang.Exception -> L8d
            android.database.sqlite.SQLiteDatabase r3 = r6.getWritableDatabase()     // Catch: java.lang.Exception -> L8d
            if (r3 != 0) goto L35
            return
        L35:
            android.content.ContentValues r4 = new android.content.ContentValues     // Catch: java.lang.Exception -> L8d
            r4.<init>()     // Catch: java.lang.Exception -> L8d
            java.lang.String r5 = "bid_unit_id"
            r4.put(r5, r8)     // Catch: java.lang.Exception -> L8d
            java.lang.String r8 = "expect_bid_token"
            r4.put(r8, r7)     // Catch: java.lang.Exception -> L8d
            java.lang.String r8 = "expect_encrypt_price"
            java.lang.String r5 = ""
            r4.put(r8, r5)     // Catch: java.lang.Exception -> L8d
            java.lang.String r8 = "real_request_id"
            r4.put(r8, r1)     // Catch: java.lang.Exception -> L8d
            java.lang.String r8 = "real_encrypt_price"
            r4.put(r8, r2)     // Catch: java.lang.Exception -> L8d
            java.lang.String r8 = "real_token_rule"
            r2 = 1
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L8d
            r4.put(r8, r2)     // Catch: java.lang.Exception -> L8d
            java.lang.String r8 = "is_replace"
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Exception -> L8d
            r4.put(r8, r0)     // Catch: java.lang.Exception -> L8d
            java.lang.String r8 = "bid_replace_campaign"
            r0 = 0
            r3.insert(r8, r0, r4)     // Catch: java.lang.Exception -> L8d
            java.lang.String r8 = "HBOPTIMIZE"
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L8d
            r0.<init>()     // Catch: java.lang.Exception -> L8d
            java.lang.String r2 = "插入数据到对应关系表 期望 bidToken 值"
            r0.append(r2)     // Catch: java.lang.Exception -> L8d
            r0.append(r7)     // Catch: java.lang.Exception -> L8d
            java.lang.String r7 = "+ 用于替换期望Offer 的RequestId "
            r0.append(r7)     // Catch: java.lang.Exception -> L8d
            r0.append(r1)     // Catch: java.lang.Exception -> L8d
            java.lang.String r7 = r0.toString()     // Catch: java.lang.Exception -> L8d
            com.mbridge.msdk.foundation.tools.z.d(r8, r7)     // Catch: java.lang.Exception -> L8d
            goto L91
        L8d:
            r7 = move-exception
            r7.printStackTrace()
        L91:
            return
    }

    public final java.util.List<com.mbridge.msdk.foundation.entity.d> b(java.lang.String r9, java.lang.String r10) {
            r8 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            boolean r1 = android.text.TextUtils.isEmpty(r9)
            if (r1 == 0) goto Lc
            return r0
        Lc:
            boolean r1 = android.text.TextUtils.isEmpty(r10)
            if (r1 == 0) goto L13
            return r0
        L13:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "SELECT * FROM bid_replace_campaign WHERE "
            r1.append(r2)
            java.lang.String r2 = "bid_unit_id"
            r1.append(r2)
            java.lang.String r2 = " = '"
            r1.append(r2)
            r1.append(r9)
            java.lang.String r9 = "' AND "
            r1.append(r9)
            java.lang.String r9 = "real_request_id"
            r1.append(r9)
            java.lang.String r9 = " = '"
            r1.append(r9)
            r1.append(r10)
            java.lang.String r9 = "'"
            r1.append(r9)
            r9 = 0
            java.lang.Object r10 = new java.lang.Object     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            r10.<init>()     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            monitor-enter(r10)     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            android.database.sqlite.SQLiteDatabase r2 = r8.getReadableDatabase()     // Catch: java.lang.Throwable -> Lca
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Lca
            android.database.Cursor r9 = r2.rawQuery(r1, r9)     // Catch: java.lang.Throwable -> Lca
            monitor-exit(r10)     // Catch: java.lang.Throwable -> Lca
            if (r9 == 0) goto Lc7
            int r10 = r9.getCount()     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            if (r10 <= 0) goto Lc7
        L5d:
            boolean r10 = r9.moveToNext()     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            if (r10 == 0) goto Lc7
            com.mbridge.msdk.foundation.entity.d r10 = new com.mbridge.msdk.foundation.entity.d     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            r10.<init>()     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            java.lang.String r1 = "bid_unit_id"
            int r1 = r9.getColumnIndex(r1)     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            java.lang.String r1 = r9.getString(r1)     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            java.lang.String r2 = "expect_bid_token"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            java.lang.String r3 = "expect_encrypt_price"
            int r3 = r9.getColumnIndex(r3)     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            java.lang.String r3 = r9.getString(r3)     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            java.lang.String r4 = "real_request_id"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            java.lang.String r4 = r9.getString(r4)     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            java.lang.String r5 = "real_encrypt_price"
            int r5 = r9.getColumnIndex(r5)     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            java.lang.String r5 = r9.getString(r5)     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            java.lang.String r6 = "real_token_rule"
            int r6 = r9.getColumnIndex(r6)     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            int r6 = r9.getInt(r6)     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            java.lang.String r7 = "is_replace"
            int r7 = r9.getColumnIndex(r7)     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            int r7 = r9.getInt(r7)     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            r10.a(r1)     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            r10.b(r2)     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            r10.c(r3)     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            r10.d(r4)     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            r10.e(r5)     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            r10.a(r6)     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            r10.b(r7)     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            r0.add(r10)     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
            goto L5d
        Lc7:
            if (r9 == 0) goto Lde
            goto Ldb
        Lca:
            r1 = move-exception
            monitor-exit(r10)     // Catch: java.lang.Throwable -> Lca
            throw r1     // Catch: java.lang.Throwable -> Lcd java.lang.Exception -> Lcf
        Lcd:
            r10 = move-exception
            goto Ldf
        Lcf:
            r10 = move-exception
            java.lang.String r1 = "BidReplaceCampaignDao"
            java.lang.String r10 = r10.getLocalizedMessage()     // Catch: java.lang.Throwable -> Lcd
            com.mbridge.msdk.foundation.tools.z.d(r1, r10)     // Catch: java.lang.Throwable -> Lcd
            if (r9 == 0) goto Lde
        Ldb:
            r9.close()
        Lde:
            return r0
        Ldf:
            if (r9 == 0) goto Le4
            r9.close()
        Le4:
            throw r10
    }
}
