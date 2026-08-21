package com.tkay.core.common.c;

public class m extends com.tkay.core.common.c.a<com.tkay.core.common.a.i> {
    private static volatile com.tkay.core.common.c.m c;
    private final java.lang.String b;

    public static class a {
        public static final java.lang.String a = "video_res_cache_info";
        public static final java.lang.String b = "video_url";
        public static final java.lang.String c = "file_path";
        public static final java.lang.String d = "ready_rate";
        public static final java.lang.String e = "download_size";
        public static final java.lang.String f = "total_size";
        public static final java.lang.String g = "update_time";
        public static final java.lang.String h = "CREATE TABLE IF NOT EXISTS video_res_cache_info(video_url TEXT, file_path TEXT, ready_rate INTEGER, download_size INTEGER, total_size INTEGER, update_time INTEGER )";

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    private m(com.tkay.core.common.c.b r1) {
            r0 = this;
            r0.<init>(r1)
            java.lang.Class<com.tkay.core.common.c.m> r1 = com.tkay.core.common.c.m.class
            java.lang.String r1 = r1.getSimpleName()
            r0.b = r1
            return
    }

    public static com.tkay.core.common.c.m a(com.tkay.core.common.c.b r2) {
            com.tkay.core.common.c.m r0 = com.tkay.core.common.c.m.c
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.c.k> r0 = com.tkay.core.common.c.k.class
            monitor-enter(r0)
            com.tkay.core.common.c.m r1 = com.tkay.core.common.c.m.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.c.m r1 = new com.tkay.core.common.c.m     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.c.m.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tkay.core.common.c.m r2 = com.tkay.core.common.c.m.c
            return r2
    }

    private void d(java.lang.String r10) {
            r9 = this;
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r9.a()     // Catch: java.lang.Throwable -> L2d
            java.lang.String r2 = "video_res_cache_info"
            r3 = 0
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            android.database.Cursor r0 = r1.query(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L2d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2d
            java.lang.String r2 = "logDBCurItemNumber "
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L2d
            r1.append(r10)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r10 = ":"
            r1.append(r10)     // Catch: java.lang.Throwable -> L2d
            int r10 = r0.getCount()     // Catch: java.lang.Throwable -> L2d
            r1.append(r10)     // Catch: java.lang.Throwable -> L2d
            if (r0 == 0) goto L41
            r0.close()
            return
        L2d:
            r10 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L42
            java.lang.String r2 = "logDBCurItemNumber fail:"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L42
            java.lang.String r10 = r10.getMessage()     // Catch: java.lang.Throwable -> L42
            r1.append(r10)     // Catch: java.lang.Throwable -> L42
            if (r0 == 0) goto L41
            r0.close()
        L41:
            return
        L42:
            r10 = move-exception
            if (r0 == 0) goto L48
            r0.close()
        L48:
            throw r10
    }

    private boolean e(java.lang.String r12) {
            r11 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r12)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            r0 = 0
            android.database.sqlite.SQLiteDatabase r2 = r11.a()     // Catch: java.lang.Throwable -> L37
            java.lang.String r3 = "video_res_cache_info"
            java.lang.String r4 = "video_url"
            java.lang.String[] r4 = new java.lang.String[]{r4}     // Catch: java.lang.Throwable -> L37
            java.lang.String r5 = "video_url=?"
            r10 = 1
            java.lang.String[] r6 = new java.lang.String[r10]     // Catch: java.lang.Throwable -> L37
            r6[r1] = r12     // Catch: java.lang.Throwable -> L37
            r7 = 0
            r8 = 0
            r9 = 0
            android.database.Cursor r0 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L37
            if (r0 == 0) goto L34
            int r12 = r0.getCount()     // Catch: java.lang.Throwable -> L37
            if (r12 <= 0) goto L34
            r0.close()     // Catch: java.lang.Throwable -> L37
            if (r0 == 0) goto L33
            r0.close()
        L33:
            return r10
        L34:
            if (r0 == 0) goto L3c
            goto L39
        L37:
            if (r0 == 0) goto L3c
        L39:
            r0.close()
        L3c:
            return r1
    }

    public final com.tkay.core.common.a.i a(java.lang.String r10) {
            r9 = this;
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r9.a()     // Catch: java.lang.Throwable -> L72
            java.lang.String r2 = "video_res_cache_info"
            r3 = 0
            java.lang.String r4 = "video_url=?"
            r5 = 1
            java.lang.String[] r5 = new java.lang.String[r5]     // Catch: java.lang.Throwable -> L72
            r6 = 0
            r5[r6] = r10     // Catch: java.lang.Throwable -> L72
            r6 = 0
            r7 = 0
            r8 = 0
            android.database.Cursor r1 = r1.query(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L72
            boolean r2 = r1.moveToNext()     // Catch: java.lang.Throwable -> L73
            if (r2 == 0) goto L6f
            com.tkay.core.common.a.i r2 = new com.tkay.core.common.a.i     // Catch: java.lang.Throwable -> L73
            r2.<init>()     // Catch: java.lang.Throwable -> L73
            r2.a(r10)     // Catch: java.lang.Throwable -> L73
            java.lang.String r10 = "file_path"
            int r10 = r1.getColumnIndex(r10)     // Catch: java.lang.Throwable -> L73
            java.lang.String r10 = r1.getString(r10)     // Catch: java.lang.Throwable -> L73
            r2.b(r10)     // Catch: java.lang.Throwable -> L73
            java.lang.String r10 = "ready_rate"
            int r10 = r1.getColumnIndex(r10)     // Catch: java.lang.Throwable -> L73
            int r10 = r1.getInt(r10)     // Catch: java.lang.Throwable -> L73
            r2.a(r10)     // Catch: java.lang.Throwable -> L73
            java.lang.String r10 = "download_size"
            int r10 = r1.getColumnIndex(r10)     // Catch: java.lang.Throwable -> L73
            long r3 = r1.getLong(r10)     // Catch: java.lang.Throwable -> L73
            r2.b(r3)     // Catch: java.lang.Throwable -> L73
            java.lang.String r10 = "total_size"
            int r10 = r1.getColumnIndex(r10)     // Catch: java.lang.Throwable -> L73
            long r3 = r1.getLong(r10)     // Catch: java.lang.Throwable -> L73
            r2.a(r3)     // Catch: java.lang.Throwable -> L73
            java.lang.String r10 = "update_time"
            int r10 = r1.getColumnIndex(r10)     // Catch: java.lang.Throwable -> L73
            long r3 = r1.getLong(r10)     // Catch: java.lang.Throwable -> L73
            r2.c(r3)     // Catch: java.lang.Throwable -> L73
            r1.close()     // Catch: java.lang.Throwable -> L73
            if (r1 == 0) goto L6e
            r1.close()
        L6e:
            return r2
        L6f:
            if (r1 == 0) goto L78
            goto L75
        L72:
            r1 = r0
        L73:
            if (r1 == 0) goto L78
        L75:
            r1.close()
        L78:
            return r0
    }

    public final synchronized void a(java.lang.String r3, java.lang.String r4, long r5, long r7, int r9) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L6e
            if (r0 != 0) goto L6c
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L6e
            if (r0 == 0) goto Le
            goto L6c
        Le:
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L6a
            r0.<init>()     // Catch: java.lang.Throwable -> L6a
            java.lang.String r1 = "video_url"
            r0.put(r1, r3)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r1 = "file_path"
            r0.put(r1, r4)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r4 = "ready_rate"
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L6a
            r0.put(r4, r9)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r4 = "download_size"
            java.lang.Long r7 = java.lang.Long.valueOf(r7)     // Catch: java.lang.Throwable -> L6a
            r0.put(r4, r7)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r4 = "total_size"
            java.lang.Long r5 = java.lang.Long.valueOf(r5)     // Catch: java.lang.Throwable -> L6a
            r0.put(r4, r5)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r4 = "update_time"
            long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L6a
            java.lang.Long r5 = java.lang.Long.valueOf(r5)     // Catch: java.lang.Throwable -> L6a
            r0.put(r4, r5)     // Catch: java.lang.Throwable -> L6a
            boolean r4 = r2.e(r3)     // Catch: java.lang.Throwable -> L6a
            if (r4 == 0) goto L5e
            java.lang.String r4 = "video_url = ? "
            android.database.sqlite.SQLiteDatabase r5 = r2.b()     // Catch: java.lang.Throwable -> L6a
            java.lang.String r6 = "video_res_cache_info"
            r7 = 1
            java.lang.String[] r7 = new java.lang.String[r7]     // Catch: java.lang.Throwable -> L6a
            r8 = 0
            r7[r8] = r3     // Catch: java.lang.Throwable -> L6a
            r5.update(r6, r0, r4, r7)     // Catch: java.lang.Throwable -> L6a
            monitor-exit(r2)
            return
        L5e:
            android.database.sqlite.SQLiteDatabase r3 = r2.b()     // Catch: java.lang.Throwable -> L6a
            java.lang.String r4 = "video_res_cache_info"
            r5 = 0
            r3.insert(r4, r5, r0)     // Catch: java.lang.Throwable -> L6a
            monitor-exit(r2)
            return
        L6a:
            monitor-exit(r2)
            return
        L6c:
            monitor-exit(r2)
            return
        L6e:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final void b(java.lang.String r7) {
            r6 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 == 0) goto L7
            return
        L7:
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L2a
            r0.<init>()     // Catch: java.lang.Throwable -> L2a
            java.lang.String r1 = "update_time"
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L2a
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L2a
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L2a
            java.lang.String r1 = "video_url = ? "
            android.database.sqlite.SQLiteDatabase r2 = r6.b()     // Catch: java.lang.Throwable -> L2a
            java.lang.String r3 = "video_res_cache_info"
            r4 = 1
            java.lang.String[] r4 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> L2a
            r5 = 0
            r4[r5] = r7     // Catch: java.lang.Throwable -> L2a
            r2.update(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L2a
        L2a:
            return
    }

    public final long c() {
            r4 = this;
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r4.a()     // Catch: java.lang.Throwable -> L25
            java.lang.String r2 = "SELECT sum(download_size) FROM video_res_cache_info"
            android.database.Cursor r0 = r1.rawQuery(r2, r0)     // Catch: java.lang.Throwable -> L25
            boolean r1 = r0.moveToNext()     // Catch: java.lang.Throwable -> L25
            if (r1 == 0) goto L1f
            r1 = 0
            long r1 = r0.getLong(r1)     // Catch: java.lang.Throwable -> L25
            r0.close()     // Catch: java.lang.Throwable -> L25
            if (r0 == 0) goto L1e
            r0.close()
        L1e:
            return r1
        L1f:
            if (r0 == 0) goto L37
        L21:
            r0.close()
            goto L37
        L25:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3a
            java.lang.String r3 = "getDownloadedVideoSize fail:"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L3a
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Throwable -> L3a
            r2.append(r1)     // Catch: java.lang.Throwable -> L3a
            if (r0 == 0) goto L37
            goto L21
        L37:
            r0 = 0
            return r0
        L3a:
            r1 = move-exception
            if (r0 == 0) goto L40
            r0.close()
        L40:
            throw r1
    }

    public final void c(java.lang.String r6) {
            r5 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 == 0) goto L7
            return
        L7:
            android.database.sqlite.SQLiteDatabase r0 = r5.b()     // Catch: java.lang.Throwable -> L19
            java.lang.String r1 = "video_res_cache_info"
            java.lang.String r2 = "video_url=?"
            r3 = 1
            java.lang.String[] r3 = new java.lang.String[r3]     // Catch: java.lang.Throwable -> L19
            r4 = 0
            r3[r4] = r6     // Catch: java.lang.Throwable -> L19
            r0.delete(r1, r2, r3)     // Catch: java.lang.Throwable -> L19
            return
        L19:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "removeVideoResCacheInfo fail:"
            r1.<init>(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = ",videoUrl:"
            r1.append(r0)
            r1.append(r6)
            return
    }

    public final java.util.List<com.tkay.core.common.a.i> d() {
            r11 = this;
            java.lang.String r0 = "update_time"
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2 = 0
            android.database.sqlite.SQLiteDatabase r3 = r11.a()     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r4 = "video_res_cache_info"
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            java.lang.String r10 = "update_time DESC"
            android.database.Cursor r2 = r3.query(r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> Lc4
            int r3 = r2.getCount()     // Catch: java.lang.Throwable -> Lc4
            if (r3 <= 0) goto Lbe
            int r3 = r2.getCount()     // Catch: java.lang.Throwable -> Lc4
            double r3 = (double) r3     // Catch: java.lang.Throwable -> Lc4
            r5 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r3 = r3 * r5
            double r3 = r3 + r5
            r5 = 4611686018427387904(0x4000000000000000, double:2.0)
            double r3 = r3 / r5
            long r3 = java.lang.Math.round(r3)     // Catch: java.lang.Throwable -> Lc4
            int r3 = (int) r3     // Catch: java.lang.Throwable -> Lc4
            r4 = 1
            int r3 = r3 - r4
            boolean r3 = r2.moveToPosition(r3)     // Catch: java.lang.Throwable -> Lc4
            if (r3 == 0) goto Lbe
            int r3 = r2.getColumnIndex(r0)     // Catch: java.lang.Throwable -> Lc4
            long r5 = r2.getLong(r3)     // Catch: java.lang.Throwable -> Lc4
        L40:
            com.tkay.core.common.a.i r3 = new com.tkay.core.common.a.i     // Catch: java.lang.Throwable -> Lc4
            r3.<init>()     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r7 = "video_url"
            int r7 = r2.getColumnIndex(r7)     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r7 = r2.getString(r7)     // Catch: java.lang.Throwable -> Lc4
            r3.a(r7)     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r7 = "file_path"
            int r7 = r2.getColumnIndex(r7)     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r7 = r2.getString(r7)     // Catch: java.lang.Throwable -> Lc4
            r3.b(r7)     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r7 = "ready_rate"
            int r7 = r2.getColumnIndex(r7)     // Catch: java.lang.Throwable -> Lc4
            int r7 = r2.getInt(r7)     // Catch: java.lang.Throwable -> Lc4
            r3.a(r7)     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r7 = "download_size"
            int r7 = r2.getColumnIndex(r7)     // Catch: java.lang.Throwable -> Lc4
            long r7 = r2.getLong(r7)     // Catch: java.lang.Throwable -> Lc4
            r3.b(r7)     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r7 = "total_size"
            int r7 = r2.getColumnIndex(r7)     // Catch: java.lang.Throwable -> Lc4
            long r7 = r2.getLong(r7)     // Catch: java.lang.Throwable -> Lc4
            r3.a(r7)     // Catch: java.lang.Throwable -> Lc4
            int r7 = r2.getColumnIndex(r0)     // Catch: java.lang.Throwable -> Lc4
            long r7 = r2.getLong(r7)     // Catch: java.lang.Throwable -> Lc4
            r3.c(r7)     // Catch: java.lang.Throwable -> Lc4
            r1.add(r3)     // Catch: java.lang.Throwable -> Lc4
            boolean r3 = r2.moveToNext()     // Catch: java.lang.Throwable -> Lc4
            if (r3 != 0) goto L40
            android.database.sqlite.SQLiteDatabase r0 = r11.b()     // Catch: java.lang.Throwable -> Laf
            java.lang.String r3 = "video_res_cache_info"
            java.lang.String r7 = "update_time<=?"
            java.lang.String[] r4 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> Laf
            r8 = 0
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.Throwable -> Laf
            r4[r8] = r5     // Catch: java.lang.Throwable -> Laf
            r0.delete(r3, r7, r4)     // Catch: java.lang.Throwable -> Laf
            goto Lbe
        Laf:
            r0 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r4 = "removeHalfVideoInfoByUpdateTime fail:"
            r3.<init>(r4)     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> Lc4
            r3.append(r0)     // Catch: java.lang.Throwable -> Lc4
        Lbe:
            if (r2 == 0) goto Ld6
        Lc0:
            r2.close()
            goto Ld6
        Lc4:
            r0 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld7
            java.lang.String r4 = "removeHalfVideoResCacheInfoByUpdateTime fail:"
            r3.<init>(r4)     // Catch: java.lang.Throwable -> Ld7
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> Ld7
            r3.append(r0)     // Catch: java.lang.Throwable -> Ld7
            if (r2 == 0) goto Ld6
            goto Lc0
        Ld6:
            return r1
        Ld7:
            r0 = move-exception
            if (r2 == 0) goto Ldd
            r2.close()
        Ldd:
            throw r0
    }
}
