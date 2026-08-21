package com.tkay.core.common.c;

import android.content.ContentValues;
import android.database.Cursor;
import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;

/* JADX INFO: loaded from: classes3.dex */
public class m extends com.tkay.core.common.c.a<com.tkay.core.common.a.i> {
    private static volatile m c;
    private final String b;

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final String f6109a = "video_res_cache_info";
        public static final String b = "video_url";
        public static final String c = "file_path";
        public static final String d = "ready_rate";
        public static final String e = "download_size";
        public static final String f = "total_size";
        public static final String g = "update_time";
        public static final String h = "CREATE TABLE IF NOT EXISTS video_res_cache_info(video_url TEXT, file_path TEXT, ready_rate INTEGER, download_size INTEGER, total_size INTEGER, update_time INTEGER )";
    }

    private m(b bVar) {
        super(bVar);
        this.b = m.class.getSimpleName();
    }

    public static m a(b bVar) {
        if (c == null) {
            synchronized (k.class) {
                if (c == null) {
                    c = new m(bVar);
                }
            }
        }
        return c;
    }

    public final synchronized void a(String str, String str2, long j, long j2, int i) {
        if (!TextUtils.isEmpty(str)) {
            if (!TextUtils.isEmpty(str2)) {
                try {
                    ContentValues contentValues = new ContentValues();
                    contentValues.put("video_url", str);
                    contentValues.put(a.c, str2);
                    contentValues.put("ready_rate", Integer.valueOf(i));
                    contentValues.put(a.e, Long.valueOf(j2));
                    contentValues.put(a.f, Long.valueOf(j));
                    contentValues.put("update_time", Long.valueOf(System.currentTimeMillis()));
                    if (e(str)) {
                        b().update(a.f6109a, contentValues, "video_url = ? ", new String[]{str});
                    } else {
                        b().insert(a.f6109a, null, contentValues);
                    }
                } catch (Throwable unused) {
                }
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x0075 A[PHI: r1
      0x0075: PHI (r1v2 android.database.Cursor) = (r1v1 android.database.Cursor), (r1v4 android.database.Cursor) binds: [B:13:0x0073, B:10:0x006f] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final com.tkay.core.common.a.i a(java.lang.String r10) {
        /*
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
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.c.m.a(java.lang.String):com.tkay.core.common.a.i");
    }

    public final void b(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        try {
            ContentValues contentValues = new ContentValues();
            contentValues.put("update_time", Long.valueOf(System.currentTimeMillis()));
            b().update(a.f6109a, contentValues, "video_url = ? ", new String[]{str});
        } catch (Throwable unused) {
        }
    }

    public final long c() {
        Cursor cursorRawQuery = null;
        try {
            cursorRawQuery = a().rawQuery("SELECT sum(download_size) FROM video_res_cache_info", null);
            if (cursorRawQuery.moveToNext()) {
                long j = cursorRawQuery.getLong(0);
                cursorRawQuery.close();
                return j;
            }
            if (cursorRawQuery == null) {
                return 0L;
            }
        } catch (Throwable th) {
            try {
                new StringBuilder("getDownloadedVideoSize fail:").append(th.getMessage());
                if (cursorRawQuery == null) {
                    return 0L;
                }
            } finally {
                if (cursorRawQuery != null) {
                    cursorRawQuery.close();
                }
            }
        }
        cursorRawQuery.close();
        return 0L;
    }

    /* JADX WARN: Code restructure failed: missing block: B:12:0x00af, code lost:
    
        r0 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:13:0x00b0, code lost:
    
        new java.lang.StringBuilder("removeHalfVideoInfoByUpdateTime fail:").append(r0.getMessage());
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final java.util.List<com.tkay.core.common.a.i> d() {
        /*
            Method dump skipped, instruction units count: 222
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.c.m.d():java.util.List");
    }

    private void d(String str) {
        Cursor cursorQuery = null;
        try {
            cursorQuery = a().query(a.f6109a, null, null, null, null, null, null);
            StringBuilder sb = new StringBuilder("logDBCurItemNumber ");
            sb.append(str);
            sb.append(Constants.COLON_SEPARATOR);
            sb.append(cursorQuery.getCount());
        } catch (Throwable th) {
            try {
                new StringBuilder("logDBCurItemNumber fail:").append(th.getMessage());
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
            } finally {
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
            }
        }
    }

    public final void c(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        try {
            b().delete(a.f6109a, "video_url=?", new String[]{str});
        } catch (Throwable th) {
            StringBuilder sb = new StringBuilder("removeVideoResCacheInfo fail:");
            sb.append(th.getMessage());
            sb.append(",videoUrl:");
            sb.append(str);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x0039 A[PHI: r0
      0x0039: PHI (r0v3 android.database.Cursor) = (r0v2 android.database.Cursor), (r0v4 android.database.Cursor) binds: [B:16:0x0037, B:14:0x0034] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private boolean e(java.lang.String r12) {
        /*
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
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.c.m.e(java.lang.String):boolean");
    }
}
