package com.tkay.core.common.c;

import android.content.ContentValues;
import android.database.Cursor;

/* JADX INFO: loaded from: classes3.dex */
public class k extends com.tkay.core.common.c.a<com.tkay.core.common.a.h> {
    private static volatile k c;
    private final String b;

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final String f6107a = "offer_data_cache";
        public static final String b = "bid_id";
        public static final String c = "adsource_id";
        public static final String d = "network_firm_id";
        public static final String e = "offer_data";
        public static final String f = "CREATE TABLE IF NOT EXISTS offer_data_cache(bid_id TEXT ,adsource_id TEXT ,network_firm_id INTEGER ,offer_data TEXT)";
    }

    private k(b bVar) {
        super(bVar);
        this.b = k.class.getName();
    }

    public static k a(b bVar) {
        if (c == null) {
            synchronized (k.class) {
                if (c == null) {
                    c = new k(bVar);
                }
            }
        }
        return c;
    }

    public final synchronized void a(String str) {
        try {
            b().delete(a.f6107a, "bid_id = ? ", new String[]{str});
        } catch (Throwable th) {
            com.tkay.core.common.k.c.a("Error_SQL_DELETE", th.getMessage(), com.tkay.core.common.b.m.a().q());
        }
    }

    public final synchronized long a(com.tkay.core.common.a.h hVar) {
        if (b() == null) {
            return -1L;
        }
        try {
            ContentValues contentValues = new ContentValues();
            contentValues.put(a.b, hVar.a());
            contentValues.put("adsource_id", hVar.b());
            contentValues.put(a.d, hVar.a());
            contentValues.put(a.e, hVar.d());
            if (b(hVar)) {
                if (hVar.c() == 67) {
                    StringBuilder sb = new StringBuilder("OfferDataCache update(Directly) new BidId:");
                    sb.append(hVar.a());
                    sb.append(",old adSourceId:");
                    sb.append(hVar.b());
                    return b().update(a.f6107a, contentValues, "adsource_id = ? ", new String[]{hVar.b()});
                }
                new StringBuilder("OfferDataCache update(Adx) BidId:").append(hVar.a());
                return b().update(a.f6107a, contentValues, "bid_id = ? ", new String[]{hVar.a()});
            }
            StringBuilder sb2 = new StringBuilder("OfferDataCache insert BidId:");
            sb2.append(hVar.a());
            sb2.append(",adSourceId:");
            sb2.append(hVar.b());
            return b().insert(a.f6107a, null, contentValues);
        } catch (Exception unused) {
            return -1L;
        }
    }

    public final synchronized String b(String str) {
        Cursor cursorQuery;
        try {
            cursorQuery = a().query(a.f6107a, new String[]{a.e}, "bid_id=?", new String[]{str}, null, null, null);
            if (cursorQuery != null) {
                try {
                    if (cursorQuery.getCount() > 0) {
                        cursorQuery.moveToNext();
                        String string = cursorQuery.getString(0);
                        cursorQuery.close();
                        if (cursorQuery != null) {
                            cursorQuery.close();
                        }
                        return string;
                    }
                } catch (Throwable unused) {
                    if (cursorQuery != null) {
                    }
                    return "";
                }
            }
        } catch (Throwable unused2) {
            cursorQuery = null;
        }
        if (cursorQuery != null) {
            cursorQuery.close();
        }
        return "";
    }

    /* JADX WARN: Removed duplicated region for block: B:24:0x0063 A[Catch: all -> 0x0067, PHI: r1
      0x0063: PHI (r1v2 android.database.Cursor) = (r1v1 android.database.Cursor), (r1v3 android.database.Cursor) binds: [B:23:0x0061, B:21:0x005e] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TRY_LEAVE, TryCatch #1 {, blocks: (B:18:0x0059, B:24:0x0063), top: B:33:0x0007 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private synchronized boolean b(com.tkay.core.common.a.h r14) {
        /*
            r13 = this;
            monitor-enter(r13)
            r0 = 0
            if (r14 != 0) goto L6
            monitor-exit(r13)
            return r0
        L6:
            r1 = 0
            int r2 = r14.c()     // Catch: java.lang.Throwable -> L61
            r3 = 67
            r4 = 1
            if (r2 != r3) goto L2e
            android.database.sqlite.SQLiteDatabase r5 = r13.a()     // Catch: java.lang.Throwable -> L61
            java.lang.String r6 = "offer_data_cache"
            java.lang.String r2 = "offer_data"
            java.lang.String[] r7 = new java.lang.String[]{r2}     // Catch: java.lang.Throwable -> L61
            java.lang.String r8 = "adsource_id=?"
            java.lang.String[] r9 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> L61
            java.lang.String r14 = r14.b()     // Catch: java.lang.Throwable -> L61
            r9[r0] = r14     // Catch: java.lang.Throwable -> L61
            r10 = 0
            r11 = 0
            r12 = 0
            android.database.Cursor r14 = r5.query(r6, r7, r8, r9, r10, r11, r12)     // Catch: java.lang.Throwable -> L61
            goto L4b
        L2e:
            android.database.sqlite.SQLiteDatabase r5 = r13.a()     // Catch: java.lang.Throwable -> L61
            java.lang.String r6 = "offer_data_cache"
            java.lang.String r2 = "offer_data"
            java.lang.String[] r7 = new java.lang.String[]{r2}     // Catch: java.lang.Throwable -> L61
            java.lang.String r8 = "bid_id=?"
            java.lang.String[] r9 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> L61
            java.lang.String r14 = r14.a()     // Catch: java.lang.Throwable -> L61
            r9[r0] = r14     // Catch: java.lang.Throwable -> L61
            r10 = 0
            r11 = 0
            r12 = 0
            android.database.Cursor r14 = r5.query(r6, r7, r8, r9, r10, r11, r12)     // Catch: java.lang.Throwable -> L61
        L4b:
            r1 = r14
            if (r1 == 0) goto L5e
            int r14 = r1.getCount()     // Catch: java.lang.Throwable -> L61
            if (r14 <= 0) goto L5e
            r1.close()     // Catch: java.lang.Throwable -> L61
            if (r1 == 0) goto L5c
            r1.close()     // Catch: java.lang.Throwable -> L67
        L5c:
            monitor-exit(r13)
            return r4
        L5e:
            if (r1 == 0) goto L6a
            goto L63
        L61:
            if (r1 == 0) goto L6a
        L63:
            r1.close()     // Catch: java.lang.Throwable -> L67
            goto L6a
        L67:
            r14 = move-exception
            monitor-exit(r13)
            throw r14
        L6a:
            monitor-exit(r13)
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.c.k.b(com.tkay.core.common.a.h):boolean");
    }
}
