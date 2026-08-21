package com.mbridge.msdk.foundation.db;

public class p extends com.mbridge.msdk.foundation.db.a<com.mbridge.msdk.out.Campaign> {
    private static final java.lang.String a = null;
    private static com.mbridge.msdk.foundation.db.p b;


    static {
            java.lang.Class<com.mbridge.msdk.foundation.db.p> r0 = com.mbridge.msdk.foundation.db.p.class
            java.lang.String r0 = r0.getName()
            com.mbridge.msdk.foundation.db.p.a = r0
            r0 = 0
            com.mbridge.msdk.foundation.db.p.b = r0
            return
    }

    private p(com.mbridge.msdk.foundation.db.h r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static com.mbridge.msdk.foundation.db.p a(com.mbridge.msdk.foundation.db.h r2) {
            com.mbridge.msdk.foundation.db.p r0 = com.mbridge.msdk.foundation.db.p.b
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.foundation.db.p> r0 = com.mbridge.msdk.foundation.db.p.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.db.p r1 = com.mbridge.msdk.foundation.db.p.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.foundation.db.p r1 = new com.mbridge.msdk.foundation.db.p     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.foundation.db.p.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.mbridge.msdk.foundation.db.p r2 = com.mbridge.msdk.foundation.db.p.b
            return r2
    }

    private synchronized boolean a(java.lang.String r3) {
            r2 = this;
            monitor-enter(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L36
            r0.<init>()     // Catch: java.lang.Throwable -> L36
            java.lang.String r1 = "SELECT get_time FROM sc WHERE package_name='"
            r0.append(r1)     // Catch: java.lang.Throwable -> L36
            r0.append(r3)     // Catch: java.lang.Throwable -> L36
            java.lang.String r3 = "'"
            r0.append(r3)     // Catch: java.lang.Throwable -> L36
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L36
            android.database.sqlite.SQLiteDatabase r0 = r2.getReadableDatabase()     // Catch: java.lang.Throwable -> L36
            r1 = 0
            android.database.Cursor r3 = r0.rawQuery(r3, r1)     // Catch: java.lang.Throwable -> L36
            if (r3 == 0) goto L2e
            int r0 = r3.getCount()     // Catch: java.lang.Throwable -> L36
            if (r0 <= 0) goto L2e
            r3.close()     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L36
        L2b:
            r3 = 1
            monitor-exit(r2)
            return r3
        L2e:
            if (r3 == 0) goto L33
            r3.close()     // Catch: java.lang.Exception -> L33 java.lang.Throwable -> L36
        L33:
            r3 = 0
            monitor-exit(r2)
            return r3
        L36:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final synchronized long a(com.mbridge.msdk.foundation.entity.CampaignEx r7) {
            r6 = this;
            monitor-enter(r6)
            if (r7 != 0) goto L7
            r0 = 0
            monitor-exit(r6)
            return r0
        L7:
            r0 = -1
            android.database.sqlite.SQLiteDatabase r2 = r6.getWritableDatabase()     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            if (r2 != 0) goto L11
            monitor-exit(r6)
            return r0
        L11:
            android.content.ContentValues r2 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            r2.<init>()     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            java.lang.String r3 = "package_name"
            java.lang.String r4 = r7.getPackageName()     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            java.lang.String r3 = "download_url"
            java.lang.String r4 = r7.getClickURL()     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            java.lang.String r3 = "click_mode"
            java.lang.String r4 = r7.getClick_mode()     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            java.lang.String r3 = "ttc"
            boolean r4 = r7.isPreClick()     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r4)     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            java.lang.String r3 = "get_time"
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            java.lang.String r3 = r7.getPackageName()     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            boolean r3 = r6.a(r3)     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            r4 = 0
            if (r3 == 0) goto L7d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            r3.<init>()     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            java.lang.String r5 = "package_name = '"
            r3.append(r5)     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            java.lang.String r7 = r7.getPackageName()     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            r3.append(r7)     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            java.lang.String r7 = "'"
            r3.append(r7)     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            java.lang.String r7 = r3.toString()     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            android.database.sqlite.SQLiteDatabase r3 = r6.getWritableDatabase()     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            java.lang.String r5 = "sc"
            int r7 = r3.update(r5, r2, r7, r4)     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            long r0 = (long) r7
            monitor-exit(r6)
            return r0
        L7d:
            android.database.sqlite.SQLiteDatabase r7 = r6.getWritableDatabase()     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            java.lang.String r3 = "sc"
            long r0 = r7.insert(r3, r4, r2)     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            monitor-exit(r6)
            return r0
        L89:
            r7 = move-exception
            goto L91
        L8b:
            r7 = move-exception
            r7.printStackTrace()     // Catch: java.lang.Throwable -> L89
            monitor-exit(r6)
            return r0
        L91:
            monitor-exit(r6)
            throw r7
    }

    public final synchronized void a(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3) {
            r2 = this;
            monitor-enter(r2)
            if (r3 == 0) goto L1c
            int r0 = r3.size()     // Catch: java.lang.Throwable -> L19
            if (r0 != 0) goto La
            goto L1c
        La:
            java.lang.Thread r0 = new java.lang.Thread     // Catch: java.lang.Throwable -> L19
            com.mbridge.msdk.foundation.db.p$1 r1 = new com.mbridge.msdk.foundation.db.p$1     // Catch: java.lang.Throwable -> L19
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L19
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L19
            r0.start()     // Catch: java.lang.Throwable -> L19
            monitor-exit(r2)
            return
        L19:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
        L1c:
            monitor-exit(r2)
            return
    }
}
