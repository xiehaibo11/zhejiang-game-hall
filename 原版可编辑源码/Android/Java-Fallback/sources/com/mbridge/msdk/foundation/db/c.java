package com.mbridge.msdk.foundation.db;

public class c extends com.mbridge.msdk.foundation.db.a<com.mbridge.msdk.click.CommonJumpLoader.JumpLoaderResult> {
    public static final java.lang.String a = null;
    private static com.mbridge.msdk.foundation.db.c b;
    private com.mbridge.msdk.c.a c;
    private int d;

    static {
            java.lang.Class<com.mbridge.msdk.foundation.db.c> r0 = com.mbridge.msdk.foundation.db.c.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.foundation.db.c.a = r0
            return
    }

    private c(com.mbridge.msdk.foundation.db.h r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 100
            r0.d = r1
            return
    }

    public static com.mbridge.msdk.foundation.db.c a(com.mbridge.msdk.foundation.db.h r2) {
            com.mbridge.msdk.foundation.db.c r0 = com.mbridge.msdk.foundation.db.c.b
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.foundation.db.c> r0 = com.mbridge.msdk.foundation.db.c.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.db.c r1 = com.mbridge.msdk.foundation.db.c.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.foundation.db.c r1 = new com.mbridge.msdk.foundation.db.c     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.foundation.db.c.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.mbridge.msdk.foundation.db.c r2 = com.mbridge.msdk.foundation.db.c.b
            return r2
    }

    private synchronized boolean c(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            monitor-enter(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L48
            r0.<init>()     // Catch: java.lang.Throwable -> L48
            java.lang.String r1 = "SELECT id FROM campaignclick WHERE id='"
            r0.append(r1)     // Catch: java.lang.Throwable -> L48
            r0.append(r3)     // Catch: java.lang.Throwable -> L48
            java.lang.String r3 = "' AND "
            r0.append(r3)     // Catch: java.lang.Throwable -> L48
            java.lang.String r3 = "unitid"
            r0.append(r3)     // Catch: java.lang.Throwable -> L48
            java.lang.String r3 = "= '"
            r0.append(r3)     // Catch: java.lang.Throwable -> L48
            r0.append(r4)     // Catch: java.lang.Throwable -> L48
            java.lang.String r3 = "'"
            r0.append(r3)     // Catch: java.lang.Throwable -> L48
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L48
            android.database.sqlite.SQLiteDatabase r4 = r2.getReadableDatabase()     // Catch: java.lang.Throwable -> L48
            r0 = 0
            android.database.Cursor r3 = r4.rawQuery(r3, r0)     // Catch: java.lang.Throwable -> L48
            if (r3 == 0) goto L40
            int r4 = r3.getCount()     // Catch: java.lang.Throwable -> L48
            if (r4 <= 0) goto L40
            r3.close()     // Catch: java.lang.Exception -> L3d java.lang.Throwable -> L48
        L3d:
            r3 = 1
            monitor-exit(r2)
            return r3
        L40:
            if (r3 == 0) goto L45
            r3.close()     // Catch: java.lang.Exception -> L45 java.lang.Throwable -> L48
        L45:
            r3 = 0
            monitor-exit(r2)
            return r3
        L48:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final synchronized long a(com.mbridge.msdk.foundation.entity.CampaignEx r7, java.lang.String r8, boolean r9, int r10, int r11) {
            r6 = this;
            monitor-enter(r6)
            if (r7 != 0) goto L7
            r7 = 0
            monitor-exit(r6)
            return r7
        L7:
            r0 = -1
            com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r2 = r7.getJumpResult()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.af.a(r2)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            android.content.ContentValues r3 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r3.<init>()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.String r4 = "id"
            java.lang.String r5 = r7.getId()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r3.put(r4, r5)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.String r4 = "unitid"
            r3.put(r4, r8)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.String r4 = "result"
            r3.put(r4, r2)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.String r2 = "cpti"
            int r4 = r7.getPreClickInterval()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            int r4 = r4 * 1000
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r3.put(r2, r4)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.String r2 = "cti"
            int r4 = r7.getClickInterval()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            int r4 = r4 * 1000
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r3.put(r2, r4)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.String r2 = "package_name"
            java.lang.String r4 = r7.getPackageName()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r3.put(r2, r4)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.String r4 = r4.k()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            com.mbridge.msdk.c.a r2 = r2.b(r4)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            if (r9 == 0) goto Lad
            java.lang.String r9 = "pts"
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r3.put(r9, r4)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            if (r10 == 0) goto L74
            r9 = 1
            if (r10 != r9) goto L7d
        L74:
            java.lang.String r9 = "cps"
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r3.put(r9, r10)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
        L7d:
            if (r2 == 0) goto L94
            int r9 = r2.T()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            if (r9 <= 0) goto L94
            java.lang.String r9 = "n4"
            int r10 = r2.T()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            int r10 = r10 * 1000
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r3.put(r9, r10)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
        L94:
            java.lang.String r9 = "ttc_ct2"
            int r10 = r7.getTtc_ct2()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            int r10 = r10 * 1000
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r3.put(r9, r10)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.String r9 = "ttc_type"
            java.lang.Integer r10 = java.lang.Integer.valueOf(r11)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r3.put(r9, r10)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            goto Lba
        Lad:
            java.lang.String r9 = "ts"
            long r10 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.Long r10 = java.lang.Long.valueOf(r10)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r3.put(r9, r10)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
        Lba:
            if (r2 == 0) goto Ld1
            int r9 = r2.ao()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            if (r9 <= 0) goto Ld1
            java.lang.String r9 = "cpei"
            int r10 = r2.ao()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            int r10 = r10 * 1000
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r3.put(r9, r10)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
        Ld1:
            if (r2 == 0) goto Le8
            int r9 = r2.ap()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            if (r9 <= 0) goto Le8
            java.lang.String r9 = "cpoci"
            int r10 = r2.ap()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            int r10 = r10 * 1000
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r3.put(r9, r10)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
        Le8:
            java.lang.String r9 = r7.getId()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            boolean r9 = r6.c(r9, r8)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r10 = 0
            if (r9 == 0) goto L12f
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r9.<init>()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.String r11 = "id = "
            r9.append(r11)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.String r7 = r7.getId()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r9.append(r7)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.String r7 = " AND "
            r9.append(r7)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.String r7 = "unitid"
            r9.append(r7)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.String r7 = " = "
            r9.append(r7)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r9.append(r8)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.String r7 = r9.toString()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            android.database.sqlite.SQLiteDatabase r8 = r6.getWritableDatabase()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            if (r8 != 0) goto L122
            monitor-exit(r6)
            return r0
        L122:
            android.database.sqlite.SQLiteDatabase r8 = r6.getWritableDatabase()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.String r9 = "campaignclick"
            int r7 = r8.update(r9, r3, r7, r10)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            long r7 = (long) r7
            monitor-exit(r6)
            return r7
        L12f:
            android.database.sqlite.SQLiteDatabase r7 = r6.getWritableDatabase()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.String r8 = "campaignclick"
            long r7 = r7.insert(r8, r10, r3)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            monitor-exit(r6)
            return r7
        L13b:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
        L13e:
            monitor-exit(r6)
            return r0
    }

    public final synchronized java.lang.String a(java.lang.String r7) {
            r6 = this;
            monitor-enter(r6)
            java.lang.String r0 = ""
            com.mbridge.msdk.c.a r1 = r6.c     // Catch: java.lang.Throwable -> L1e2
            if (r1 != 0) goto L19
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L1e2
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r2 = r2.k()     // Catch: java.lang.Throwable -> L1e2
            com.mbridge.msdk.c.a r1 = r1.b(r2)     // Catch: java.lang.Throwable -> L1e2
            r6.c = r1     // Catch: java.lang.Throwable -> L1e2
        L19:
            com.mbridge.msdk.c.a r1 = r6.c     // Catch: java.lang.Throwable -> L1e2
            if (r1 == 0) goto L2d
            com.mbridge.msdk.c.a r1 = r6.c     // Catch: java.lang.Throwable -> L1e2
            int r1 = r1.V()     // Catch: java.lang.Throwable -> L1e2
            if (r1 <= 0) goto L2d
            com.mbridge.msdk.c.a r1 = r6.c     // Catch: java.lang.Throwable -> L1e2
            int r1 = r1.V()     // Catch: java.lang.Throwable -> L1e2
            r6.d = r1     // Catch: java.lang.Throwable -> L1e2
        L2d:
            java.util.HashSet r1 = new java.util.HashSet     // Catch: java.lang.Throwable -> L1e2
            r1.<init>()     // Catch: java.lang.Throwable -> L1e2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1e2
            r2.<init>()     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r3 = "SELECT id FROM campaignclick WHERE (ttc_type = 2 AND ( (cps = 1 AND unitid = '"
            r2.append(r3)     // Catch: java.lang.Throwable -> L1e2
            r2.append(r7)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r3 = "' AND ("
            r2.append(r3)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r3 = "cpti"
            r2.append(r3)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r3 = " + "
            r2.append(r3)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r3 = "pts"
            r2.append(r3)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r3 = ") > "
            r2.append(r3)     // Catch: java.lang.Throwable -> L1e2
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L1e2
            r2.append(r3)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r3 = ") OR  ("
            r2.append(r3)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r3 = "cps"
            r2.append(r3)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r3 = " = "
            r2.append(r3)     // Catch: java.lang.Throwable -> L1e2
            r3 = 0
            r2.append(r3)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r4 = " AND ("
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r4 = "pts"
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r4 = " + "
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r4 = "cpei"
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r4 = ") > "
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L1e2
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r4 = ") OR ("
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r4 = "unitid"
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r4 = " <> '"
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            r2.append(r7)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r4 = "' AND ("
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r4 = "pts"
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r4 = " + "
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r4 = "cpoci"
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r4 = ") > "
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L1e2
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r4 = " AND "
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r4 = "cps"
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r4 = " = "
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            r4 = 1
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r5 = " ))  ) OR ("
            r2.append(r5)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r5 = "ttc_type"
            r2.append(r5)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r5 = " = "
            r2.append(r5)     // Catch: java.lang.Throwable -> L1e2
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r4 = " AND ( ("
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r4 = "unitid"
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r4 = " = '"
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            r2.append(r7)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r4 = "' AND ("
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L1e2
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r4 = " - "
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r4 = "pts"
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r4 = " ) <= "
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r4 = "ttc_ct2"
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r4 = " ) OR ("
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r4 = "unitid"
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r4 = " <> '"
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            r2.append(r7)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r7 = "' AND ("
            r2.append(r7)     // Catch: java.lang.Throwable -> L1e2
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L1e2
            r2.append(r4)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r7 = " - "
            r2.append(r7)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r7 = "pts"
            r2.append(r7)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r7 = ") <= "
            r2.append(r7)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r7 = "n4"
            r2.append(r7)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r7 = " ) ) ) ORDER BY "
            r2.append(r7)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r7 = "pts"
            r2.append(r7)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r7 = " DESC  LIMIT "
            r2.append(r7)     // Catch: java.lang.Throwable -> L1e2
            int r7 = r6.d     // Catch: java.lang.Throwable -> L1e2
            r2.append(r7)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r7 = r2.toString()     // Catch: java.lang.Throwable -> L1e2
            r2 = 0
            android.database.sqlite.SQLiteDatabase r4 = r6.getReadableDatabase()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d0
            android.database.Cursor r2 = r4.rawQuery(r7, r2)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d0
            if (r2 == 0) goto L1a7
            int r7 = r2.getCount()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d0
            if (r7 <= 0) goto L1a7
            r2.moveToFirst()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d0
        L179:
            boolean r7 = r2.isAfterLast()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d0
            if (r7 != 0) goto L1a7
            r7 = 200(0xc8, float:2.8E-43)
            if (r3 >= r7) goto L1a7
            java.lang.String r7 = "id"
            int r7 = r2.getColumnIndex(r7)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d0
            int r7 = r2.getInt(r7)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d0
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d0
            r4.<init>()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d0
            r4.append(r7)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d0
            java.lang.String r7 = ""
            r4.append(r7)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d0
            java.lang.String r7 = r4.toString()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d0
            r1.add(r7)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d0
            r2.moveToNext()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d0
            int r3 = r3 + 1
            goto L179
        L1a7:
            java.util.Iterator r7 = r1.iterator()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d0
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d0
            r1.<init>()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d0
        L1b0:
            boolean r3 = r7.hasNext()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d0
            if (r3 == 0) goto L1c4
            java.lang.Object r3 = r7.next()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d0
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d0
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d0
            r1.put(r3)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d0
            goto L1b0
        L1c4:
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d0
            if (r2 == 0) goto L1da
        L1ca:
            r2.close()     // Catch: java.lang.Exception -> L1da java.lang.Throwable -> L1e2
            goto L1da
        L1ce:
            r7 = move-exception
            goto L1dc
        L1d0:
            java.lang.String r7 = com.mbridge.msdk.foundation.db.c.a     // Catch: java.lang.Throwable -> L1ce
            java.lang.String r1 = "AvoidRepetition report fail"
            com.mbridge.msdk.foundation.tools.z.d(r7, r1)     // Catch: java.lang.Throwable -> L1ce
            if (r2 == 0) goto L1da
            goto L1ca
        L1da:
            monitor-exit(r6)
            return r0
        L1dc:
            if (r2 == 0) goto L1e1
            r2.close()     // Catch: java.lang.Exception -> L1e1 java.lang.Throwable -> L1e2
        L1e1:
            throw r7     // Catch: java.lang.Throwable -> L1e2
        L1e2:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    public final synchronized void a() {
            r5 = this;
            monitor-enter(r5)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            r0.<init>()     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r1 = "(pts not "
            r0.append(r1)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            r1 = 0
            r0.append(r1)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r2 = " AND (  ( "
            r0.append(r2)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r2 = "ttc_type"
            r0.append(r2)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r2 = " = "
            r0.append(r2)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            r2 = 2
            r0.append(r2)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r2 = " AND (  ( "
            r0.append(r2)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r2 = "cps"
            r0.append(r2)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r2 = " = "
            r0.append(r2)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            r2 = 1
            r0.append(r2)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r3 = " AND ("
            r0.append(r3)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            r0.append(r3)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r3 = " - "
            r0.append(r3)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r3 = "pts"
            r0.append(r3)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r3 = ") > "
            r0.append(r3)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r3 = "cpti"
            r0.append(r3)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r3 = " )  OR  ("
            r0.append(r3)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r3 = "cps"
            r0.append(r3)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r3 = " = "
            r0.append(r3)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            r3 = 0
            r0.append(r3)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r3 = " AND ("
            r0.append(r3)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            r0.append(r3)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r3 = " - "
            r0.append(r3)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r3 = "pts"
            r0.append(r3)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r3 = ") > "
            r0.append(r3)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r3 = "cpei"
            r0.append(r3)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r3 = " )  )  ) OR ( "
            r0.append(r3)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r3 = "ttc_type"
            r0.append(r3)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r3 = " = "
            r0.append(r3)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            r0.append(r2)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r2 = " AND  ( "
            r0.append(r2)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            r0.append(r2)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r2 = " - "
            r0.append(r2)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r2 = "pts"
            r0.append(r2)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r2 = " )  > "
            r0.append(r2)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r2 = "ttc_ct2"
            r0.append(r2)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r2 = " ) ) ) OR ( "
            r0.append(r2)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r2 = "pts"
            r0.append(r2)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r2 = " is "
            r0.append(r2)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            r0.append(r1)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r2 = " AND  ( "
            r0.append(r2)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            r0.append(r2)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r2 = " - "
            r0.append(r2)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r2 = "ts"
            r0.append(r2)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r2 = ") > "
            r0.append(r2)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r2 = "cti"
            r0.append(r2)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r2 = ")"
            r0.append(r2)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            android.database.sqlite.SQLiteDatabase r2 = r5.getWritableDatabase()     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            java.lang.String r3 = "campaignclick"
            r2.delete(r3, r0, r1)     // Catch: java.lang.Throwable -> Lff java.lang.Exception -> L101
            goto L10b
        Lff:
            r0 = move-exception
            goto L10d
        L101:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.foundation.db.c.a     // Catch: java.lang.Throwable -> Lff
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> Lff
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)     // Catch: java.lang.Throwable -> Lff
        L10b:
            monitor-exit(r5)
            return
        L10d:
            monitor-exit(r5)
            throw r0
    }

    public final synchronized boolean a(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            monitor-enter(r3)
            r0 = 0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            r1.<init>()     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            java.lang.String r2 = "SELECT id FROM campaignclick WHERE id='"
            r1.append(r2)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            r1.append(r4)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            java.lang.String r4 = "' AND "
            r1.append(r4)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            java.lang.String r4 = "unitid"
            r1.append(r4)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            java.lang.String r4 = "='"
            r1.append(r4)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            r1.append(r5)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            java.lang.String r4 = "' AND "
            r1.append(r4)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            java.lang.String r4 = "cti"
            r1.append(r4)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            java.lang.String r4 = " + "
            r1.append(r4)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            java.lang.String r4 = "ts"
            r1.append(r4)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            java.lang.String r4 = " > "
            r1.append(r4)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            r1.append(r4)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            android.database.sqlite.SQLiteDatabase r5 = r3.getReadableDatabase()     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            r1 = 0
            android.database.Cursor r4 = r5.rawQuery(r4, r1)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            if (r4 == 0) goto L5c
            int r5 = r4.getCount()     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            if (r5 <= 0) goto L5c
            r4.close()     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            r4 = 1
            monitor-exit(r3)
            return r4
        L5c:
            if (r4 == 0) goto L61
            r4.close()     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
        L61:
            monitor-exit(r3)
            return r0
        L63:
            r4 = move-exception
            goto L71
        L65:
            r4 = move-exception
            java.lang.String r5 = com.mbridge.msdk.foundation.db.c.a     // Catch: java.lang.Throwable -> L63
            java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> L63
            com.mbridge.msdk.foundation.tools.z.d(r5, r4)     // Catch: java.lang.Throwable -> L63
            monitor-exit(r3)
            return r0
        L71:
            monitor-exit(r3)
            throw r4
    }

    public final synchronized com.mbridge.msdk.click.CommonJumpLoader.JumpLoaderResult b(java.lang.String r11, java.lang.String r12) {
            r10 = this;
            monitor-enter(r10)
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r10.getReadableDatabase()     // Catch: java.lang.Throwable -> L4f java.lang.Exception -> L51
            java.lang.String r2 = "campaignclick"
            r3 = 0
            java.lang.String r4 = "id=? AND unitid=?"
            r5 = 2
            java.lang.String[] r5 = new java.lang.String[r5]     // Catch: java.lang.Throwable -> L4f java.lang.Exception -> L51
            r6 = 0
            r5[r6] = r11     // Catch: java.lang.Throwable -> L4f java.lang.Exception -> L51
            r11 = 1
            r5[r11] = r12     // Catch: java.lang.Throwable -> L4f java.lang.Exception -> L51
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            android.database.Cursor r11 = r1.query(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L4f java.lang.Exception -> L51
            if (r11 == 0) goto L49
            int r12 = r11.getCount()     // Catch: java.lang.Exception -> L47 java.lang.Throwable -> L5b
            if (r12 <= 0) goto L49
            boolean r12 = r11.moveToFirst()     // Catch: java.lang.Exception -> L47 java.lang.Throwable -> L5b
            if (r12 == 0) goto L49
            java.lang.String r12 = "result"
            int r12 = r11.getColumnIndex(r12)     // Catch: java.lang.Exception -> L47 java.lang.Throwable -> L5b
            java.lang.String r12 = r11.getString(r12)     // Catch: java.lang.Exception -> L47 java.lang.Throwable -> L5b
            boolean r1 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Exception -> L47 java.lang.Throwable -> L5b
            if (r1 != 0) goto L49
            java.lang.Object r12 = com.mbridge.msdk.foundation.tools.af.a(r12)     // Catch: java.lang.Exception -> L47 java.lang.Throwable -> L5b
            com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r12 = (com.mbridge.msdk.click.CommonJumpLoader.JumpLoaderResult) r12     // Catch: java.lang.Exception -> L47 java.lang.Throwable -> L5b
            if (r11 == 0) goto L45
            r11.close()     // Catch: java.lang.Exception -> L45 java.lang.Throwable -> L63
        L45:
            monitor-exit(r10)
            return r12
        L47:
            r12 = move-exception
            goto L53
        L49:
            if (r11 == 0) goto L59
        L4b:
            r11.close()     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L63
            goto L59
        L4f:
            r12 = move-exception
            goto L5d
        L51:
            r12 = move-exception
            r11 = r0
        L53:
            r12.printStackTrace()     // Catch: java.lang.Throwable -> L5b
            if (r11 == 0) goto L59
            goto L4b
        L59:
            monitor-exit(r10)
            return r0
        L5b:
            r12 = move-exception
            r0 = r11
        L5d:
            if (r0 == 0) goto L62
            r0.close()     // Catch: java.lang.Exception -> L62 java.lang.Throwable -> L63
        L62:
            throw r12     // Catch: java.lang.Throwable -> L63
        L63:
            r11 = move-exception
            monitor-exit(r10)
            throw r11
    }
}
