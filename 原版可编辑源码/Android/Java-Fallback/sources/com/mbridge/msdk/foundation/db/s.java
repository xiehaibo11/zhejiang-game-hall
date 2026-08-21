package com.mbridge.msdk.foundation.db;

public class s extends com.mbridge.msdk.foundation.db.a<com.mbridge.msdk.out.Campaign> {
    private static com.mbridge.msdk.foundation.db.s a;

    static {
            return
    }

    private s(com.mbridge.msdk.foundation.db.h r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static com.mbridge.msdk.foundation.db.s a(com.mbridge.msdk.foundation.db.h r2) {
            com.mbridge.msdk.foundation.db.s r0 = com.mbridge.msdk.foundation.db.s.a
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.foundation.db.s> r0 = com.mbridge.msdk.foundation.db.s.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.db.s r1 = com.mbridge.msdk.foundation.db.s.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.foundation.db.s r1 = new com.mbridge.msdk.foundation.db.s     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.foundation.db.s.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.mbridge.msdk.foundation.db.s r2 = com.mbridge.msdk.foundation.db.s.a
            return r2
    }

    private synchronized boolean b(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L60
            if (r0 == 0) goto L1e
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L60
            r4.<init>()     // Catch: java.lang.Throwable -> L60
            java.lang.String r0 = "SELECT id FROM video WHERE video_url = '"
            r4.append(r0)     // Catch: java.lang.Throwable -> L60
            r4.append(r3)     // Catch: java.lang.Throwable -> L60
            java.lang.String r3 = "'"
            r4.append(r3)     // Catch: java.lang.Throwable -> L60
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L60
            goto L41
        L1e:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L60
            r0.<init>()     // Catch: java.lang.Throwable -> L60
            java.lang.String r1 = "SELECT id FROM video WHERE video_url = '"
            r0.append(r1)     // Catch: java.lang.Throwable -> L60
            r0.append(r3)     // Catch: java.lang.Throwable -> L60
            java.lang.String r3 = "' AND "
            r0.append(r3)     // Catch: java.lang.Throwable -> L60
            java.lang.String r3 = "id"
            r0.append(r3)     // Catch: java.lang.Throwable -> L60
            java.lang.String r3 = " = "
            r0.append(r3)     // Catch: java.lang.Throwable -> L60
            r0.append(r4)     // Catch: java.lang.Throwable -> L60
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L60
        L41:
            android.database.sqlite.SQLiteDatabase r4 = r2.getReadableDatabase()     // Catch: java.lang.Throwable -> L60
            r0 = 0
            android.database.Cursor r3 = r4.rawQuery(r3, r0)     // Catch: java.lang.Throwable -> L60
            if (r3 == 0) goto L58
            int r4 = r3.getCount()     // Catch: java.lang.Throwable -> L60
            if (r4 <= 0) goto L58
            r3.close()     // Catch: java.lang.Exception -> L55 java.lang.Throwable -> L60
        L55:
            r3 = 1
            monitor-exit(r2)
            return r3
        L58:
            if (r3 == 0) goto L5d
            r3.close()     // Catch: java.lang.Throwable -> L60
        L5d:
            r3 = 0
            monitor-exit(r2)
            return r3
        L60:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final synchronized long a(com.mbridge.msdk.foundation.entity.CampaignEx r10, long r11, java.lang.String r13, int r14) {
            r9 = this;
            monitor-enter(r9)
            r0 = 0
            if (r10 != 0) goto L7
            monitor-exit(r9)
            return r0
        L7:
            r2 = -1
            android.database.sqlite.SQLiteDatabase r4 = r9.getWritableDatabase()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            if (r4 != 0) goto L11
            monitor-exit(r9)
            return r2
        L11:
            android.content.ContentValues r4 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.<init>()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "unitid"
            java.lang.String r6 = r10.getCampaignUnitId()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "id"
            java.lang.String r6 = r10.getId()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "package_name"
            java.lang.String r6 = r10.getPackageName()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "app_name"
            java.lang.String r6 = r10.getAppName()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "app_desc"
            java.lang.String r6 = r10.getAppDesc()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "app_size"
            java.lang.String r6 = r10.getSize()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "image_size"
            java.lang.String r6 = r10.getImageSize()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "icon_url"
            java.lang.String r6 = r10.getIconUrl()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "image_url"
            java.lang.String r6 = r10.getImageUrl()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "impression_url"
            java.lang.String r6 = r10.getImpressionURL()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "notice_url"
            java.lang.String r6 = r10.getNoticeUrl()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "download_url"
            java.lang.String r6 = r10.getClickURL()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "only_impression"
            java.lang.String r6 = r10.getOnlyImpressionURL()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "ts"
            long r6 = r10.getTimestamp()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.Long r6 = java.lang.Long.valueOf(r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "template"
            int r6 = r10.getTemplate()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "click_mode"
            java.lang.String r6 = r10.getClick_mode()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "landing_type"
            java.lang.String r6 = r10.getLandingType()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "link_type"
            int r6 = r10.getLinkType()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "star"
            double r6 = r10.getRating()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.Double r6 = java.lang.Double.valueOf(r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "cti"
            int r6 = r10.getClickInterval()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "cpti"
            int r6 = r10.getPreClickInterval()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "preclick"
            boolean r6 = r10.isPreClick()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "level"
            int r6 = r10.getCacheLevel()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "adSource"
            int r6 = r10.getType()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "ad_call"
            java.lang.String r6 = r10.getAdCall()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "fc_a"
            int r6 = r10.getFca()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "ad_url_list"
            java.lang.String r6 = r10.getAd_url_list()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "video_url"
            java.lang.String r6 = r10.getVideoUrlEncode()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r5 = "total_size"
            java.lang.Long r11 = java.lang.Long.valueOf(r11)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r5, r11)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r11 = "video_state"
            java.lang.Integer r12 = java.lang.Integer.valueOf(r14)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r11, r12)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r11 = "video_download_start"
            long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r7 = 1000(0x3e8, double:4.94E-321)
            long r5 = r5 / r7
            java.lang.Long r12 = java.lang.Long.valueOf(r5)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r11, r12)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r11 = "ad_bid_token"
            java.lang.String r12 = r10.getBidToken()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            r4.put(r11, r12)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            boolean r11 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            if (r11 != 0) goto L170
            java.lang.String r11 = "video_path"
            r4.put(r11, r13)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
        L170:
            java.lang.String r11 = r10.getVideoUrlEncode()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r10 = r10.getId()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            boolean r10 = r9.b(r11, r10)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            if (r10 == 0) goto L180
            monitor-exit(r9)
            return r0
        L180:
            android.database.sqlite.SQLiteDatabase r10 = r9.getWritableDatabase()     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            java.lang.String r11 = "video"
            r12 = 0
            long r10 = r10.insert(r11, r12, r4)     // Catch: java.lang.Throwable -> L18d java.lang.Exception -> L190
            monitor-exit(r9)
            return r10
        L18d:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
        L190:
            monitor-exit(r9)
            return r2
    }

    public final synchronized long a(java.lang.String r4, long r5, int r7) {
            r3 = this;
            monitor-enter(r3)
            r0 = -1
            android.database.sqlite.SQLiteDatabase r1 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L59
            if (r1 != 0) goto Lb
            long r4 = (long) r0
            monitor-exit(r3)
            return r4
        Lb:
            android.content.ContentValues r1 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L59
            r1.<init>()     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L59
            java.lang.String r2 = "pregeress_size"
            java.lang.Long r5 = java.lang.Long.valueOf(r5)     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L59
            r1.put(r2, r5)     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L59
            java.lang.String r5 = "video_state"
            java.lang.Integer r6 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L59
            r1.put(r5, r6)     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L59
            java.lang.String r5 = ""
            boolean r5 = r3.b(r4, r5)     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L59
            if (r5 == 0) goto L59
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L59
            r5.<init>()     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L59
            java.lang.String r6 = "video_url = '"
            r5.append(r6)     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L59
            r5.append(r4)     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L59
            java.lang.String r4 = "'"
            r5.append(r4)     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L59
            java.lang.String r4 = r5.toString()     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L59
            java.lang.Object r5 = new java.lang.Object     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L59
            r5.<init>()     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L59
            monitor-enter(r5)     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L59
            android.database.sqlite.SQLiteDatabase r6 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L53
            java.lang.String r7 = "video"
            r2 = 0
            int r0 = r6.update(r7, r1, r4, r2)     // Catch: java.lang.Throwable -> L53
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L53
            goto L59
        L53:
            r4 = move-exception
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L53
            throw r4     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L59
        L56:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
        L59:
            long r4 = (long) r0
            monitor-exit(r3)
            return r4
    }

    public final synchronized com.mbridge.msdk.foundation.entity.o a(java.lang.String r7) {
            r6 = this;
            monitor-enter(r6)
            boolean r0 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Lbb
            r1 = 0
            if (r0 == 0) goto La
            monitor-exit(r6)
            return r1
        La:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            r0.<init>()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.String r2 = "SELECT * FROM video WHERE video_url = '"
            r0.append(r2)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            r0.append(r7)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.String r7 = "'"
            r0.append(r7)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.String r7 = r0.toString()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            android.database.sqlite.SQLiteDatabase r0 = r6.getReadableDatabase()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            android.database.Cursor r7 = r0.rawQuery(r7, r1)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            if (r7 == 0) goto L96
            int r0 = r7.getCount()     // Catch: java.lang.Exception -> L91 java.lang.Throwable -> Lb3
            if (r0 <= 0) goto L96
            com.mbridge.msdk.foundation.entity.o r0 = new com.mbridge.msdk.foundation.entity.o     // Catch: java.lang.Exception -> L91 java.lang.Throwable -> Lb3
            r0.<init>()     // Catch: java.lang.Exception -> L91 java.lang.Throwable -> Lb3
        L35:
            boolean r1 = r7.moveToNext()     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            if (r1 == 0) goto L8d
            java.lang.String r1 = "video_url"
            int r1 = r7.getColumnIndex(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            java.lang.String r1 = r7.getString(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            r0.a(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            java.lang.String r1 = "video_state"
            int r1 = r7.getColumnIndex(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            int r1 = r7.getInt(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            r0.b(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            java.lang.String r1 = "pregeress_size"
            int r1 = r7.getColumnIndex(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            long r1 = r7.getLong(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            r0.b(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            java.lang.String r1 = "total_size"
            int r1 = r7.getColumnIndex(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            int r1 = r7.getInt(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            r0.a(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            java.lang.String r1 = "video_path"
            int r1 = r7.getColumnIndex(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            java.lang.String r1 = r7.getString(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            r0.b(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            java.lang.String r1 = "video_download_start"
            int r1 = r7.getColumnIndex(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            long r1 = r7.getLong(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 * r3
            r0.a(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            goto L35
        L8d:
            r1 = r0
            goto L96
        L8f:
            r1 = move-exception
            goto La2
        L91:
            r0 = move-exception
            r5 = r1
            r1 = r0
            r0 = r5
            goto La2
        L96:
            if (r7 == 0) goto Lb1
            r7.close()     // Catch: java.lang.Exception -> Lb1 java.lang.Throwable -> Lbb
            goto Lb1
        L9c:
            r0 = move-exception
            goto Lb5
        L9e:
            r7 = move-exception
            r0 = r1
            r1 = r7
            r7 = r0
        La2:
            java.lang.String r2 = "VideoDao"
            java.lang.String r1 = r1.getLocalizedMessage()     // Catch: java.lang.Throwable -> Lb3
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)     // Catch: java.lang.Throwable -> Lb3
            if (r7 == 0) goto Lb0
            r7.close()     // Catch: java.lang.Exception -> Lb0 java.lang.Throwable -> Lbb
        Lb0:
            r1 = r0
        Lb1:
            monitor-exit(r6)
            return r1
        Lb3:
            r0 = move-exception
            r1 = r7
        Lb5:
            if (r1 == 0) goto Lba
            r1.close()     // Catch: java.lang.Exception -> Lba java.lang.Throwable -> Lbb
        Lba:
            throw r0     // Catch: java.lang.Throwable -> Lbb
        Lbb:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    public final synchronized com.mbridge.msdk.foundation.entity.o a(java.lang.String r6, java.lang.String r7) {
            r5 = this;
            monitor-enter(r5)
            boolean r7 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> Lb0
            r0 = 0
            if (r7 == 0) goto La
            monitor-exit(r5)
            return r0
        La:
            com.mbridge.msdk.foundation.entity.o r7 = new com.mbridge.msdk.foundation.entity.o     // Catch: java.lang.Throwable -> Lb0
            r7.<init>()     // Catch: java.lang.Throwable -> Lb0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb0
            r1.<init>()     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r2 = " WHERE video_url = '"
            r1.append(r2)     // Catch: java.lang.Throwable -> Lb0
            r1.append(r6)     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r6 = "'"
            r1.append(r6)     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Throwable -> Lb0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb0
            r1.<init>()     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r2 = "SELECT * FROM video"
            r1.append(r2)     // Catch: java.lang.Throwable -> Lb0
            r1.append(r6)     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Throwable -> Lb0
            android.database.sqlite.SQLiteDatabase r1 = r5.getReadableDatabase()     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            android.database.Cursor r0 = r1.rawQuery(r6, r0)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            if (r0 == 0) goto L9e
            int r6 = r0.getCount()     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            if (r6 <= 0) goto L9e
        L46:
            boolean r6 = r0.moveToNext()     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            if (r6 == 0) goto L9e
            java.lang.String r6 = "video_url"
            int r6 = r0.getColumnIndex(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            java.lang.String r6 = r0.getString(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            r7.a(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            java.lang.String r6 = "video_state"
            int r6 = r0.getColumnIndex(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            int r6 = r0.getInt(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            r7.b(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            java.lang.String r6 = "pregeress_size"
            int r6 = r0.getColumnIndex(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            long r1 = r0.getLong(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            r7.b(r1)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            java.lang.String r6 = "total_size"
            int r6 = r0.getColumnIndex(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            int r6 = r0.getInt(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            r7.a(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            java.lang.String r6 = "video_path"
            int r6 = r0.getColumnIndex(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            java.lang.String r6 = r0.getString(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            r7.b(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            java.lang.String r6 = "video_download_start"
            int r6 = r0.getColumnIndex(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            long r1 = r0.getLong(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 * r3
            r7.a(r1)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            goto L46
        L9e:
            if (r0 == 0) goto Lae
        La0:
            r0.close()     // Catch: java.lang.Exception -> Lae java.lang.Throwable -> Lb0
            goto Lae
        La4:
            r6 = move-exception
            if (r0 == 0) goto Laa
            r0.close()     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lb0
        Laa:
            throw r6     // Catch: java.lang.Throwable -> Lb0
        Lab:
            if (r0 == 0) goto Lae
            goto La0
        Lae:
            monitor-exit(r5)
            return r7
        Lb0:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public final synchronized void a(java.lang.String r5, long r6) {
            r4 = this;
            monitor-enter(r4)
            r0 = 0
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 != 0) goto L9
            monitor-exit(r4)
            return
        L9:
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L43 java.lang.Exception -> L46
            r0.<init>()     // Catch: java.lang.Throwable -> L43 java.lang.Exception -> L46
            java.lang.String r1 = "video_download_start"
            r2 = 1000(0x3e8, double:4.94E-321)
            long r6 = r6 / r2
            java.lang.Long r6 = java.lang.Long.valueOf(r6)     // Catch: java.lang.Throwable -> L43 java.lang.Exception -> L46
            r0.put(r1, r6)     // Catch: java.lang.Throwable -> L43 java.lang.Exception -> L46
            java.lang.String r6 = ""
            boolean r6 = r4.b(r5, r6)     // Catch: java.lang.Throwable -> L43 java.lang.Exception -> L46
            if (r6 == 0) goto L46
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L43 java.lang.Exception -> L46
            r6.<init>()     // Catch: java.lang.Throwable -> L43 java.lang.Exception -> L46
            java.lang.String r7 = "video_url = '"
            r6.append(r7)     // Catch: java.lang.Throwable -> L43 java.lang.Exception -> L46
            r6.append(r5)     // Catch: java.lang.Throwable -> L43 java.lang.Exception -> L46
            java.lang.String r5 = "'"
            r6.append(r5)     // Catch: java.lang.Throwable -> L43 java.lang.Exception -> L46
            java.lang.String r5 = r6.toString()     // Catch: java.lang.Throwable -> L43 java.lang.Exception -> L46
            android.database.sqlite.SQLiteDatabase r6 = r4.getWritableDatabase()     // Catch: java.lang.Throwable -> L43 java.lang.Exception -> L46
            java.lang.String r7 = "video"
            r1 = 0
            r6.update(r7, r0, r5, r1)     // Catch: java.lang.Throwable -> L43 java.lang.Exception -> L46
            goto L46
        L43:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
        L46:
            monitor-exit(r4)
            return
    }

    public final synchronized long b(java.lang.String r5, long r6) {
            r4 = this;
            monitor-enter(r4)
            r0 = -1
            android.database.sqlite.SQLiteDatabase r1 = r4.getWritableDatabase()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L50
            if (r1 != 0) goto Lb
            long r5 = (long) r0
            monitor-exit(r4)
            return r5
        Lb:
            android.content.ContentValues r1 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L50
            r1.<init>()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L50
            java.lang.String r2 = "total_size"
            java.lang.Long r6 = java.lang.Long.valueOf(r6)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L50
            r1.put(r2, r6)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L50
            java.lang.String r6 = ""
            boolean r6 = r4.b(r5, r6)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L50
            if (r6 == 0) goto L50
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L50
            r6.<init>()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L50
            java.lang.String r7 = "video_url = '"
            r6.append(r7)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L50
            r6.append(r5)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L50
            java.lang.String r5 = "'"
            r6.append(r5)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L50
            java.lang.String r5 = r6.toString()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L50
            java.lang.Object r6 = new java.lang.Object     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L50
            r6.<init>()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L50
            monitor-enter(r6)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L50
            android.database.sqlite.SQLiteDatabase r7 = r4.getWritableDatabase()     // Catch: java.lang.Throwable -> L4a
            java.lang.String r2 = "video"
            r3 = 0
            int r0 = r7.update(r2, r1, r5, r3)     // Catch: java.lang.Throwable -> L4a
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L4a
            goto L50
        L4a:
            r5 = move-exception
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L4a
            throw r5     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L50
        L4d:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
        L50:
            long r5 = (long) r0
            monitor-exit(r4)
            return r5
    }

    public final synchronized void b(java.lang.String r4) {
            r3 = this;
            monitor-enter(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            r0.<init>()     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            java.lang.String r1 = "video_url = '"
            r0.append(r1)     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            r0.append(r4)     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            java.lang.String r4 = "'"
            r0.append(r4)     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            android.database.sqlite.SQLiteDatabase r0 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            if (r0 != 0) goto L1f
            monitor-exit(r3)
            return
        L1f:
            android.database.sqlite.SQLiteDatabase r0 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            java.lang.String r1 = "video"
            r2 = 0
            r0.delete(r1, r4, r2)     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            goto L2d
        L2a:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
        L2d:
            monitor-exit(r3)
            return
    }
}
