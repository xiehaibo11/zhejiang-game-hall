package com.tkay.core.common.c;

import android.content.ContentValues;
import android.database.Cursor;

public class k extends com.tkay.core.common.c.a<com.tkay.core.common.a.h> {
    private static volatile k c;
    private final String b;

    public static class a {
        public static final String a = "offer_data_cache";
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
            b().delete(a.a, "bid_id = ? ", new String[]{str});
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
                    return b().update(a.a, contentValues, "adsource_id = ? ", new String[]{hVar.b()});
                }
                new StringBuilder("OfferDataCache update(Adx) BidId:").append(hVar.a());
                return b().update(a.a, contentValues, "bid_id = ? ", new String[]{hVar.a()});
            }
            StringBuilder sb2 = new StringBuilder("OfferDataCache insert BidId:");
            sb2.append(hVar.a());
            sb2.append(",adSourceId:");
            sb2.append(hVar.b());
            return b().insert(a.a, null, contentValues);
        } catch (Exception unused) {
            return -1L;
        }
    }

    public final synchronized String b(String str) {
        Cursor cursorQuery;
        try {
            cursorQuery = a().query(a.a, new String[]{a.e}, "bid_id=?", new String[]{str}, null, null, null);
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
    */
    private synchronized boolean b(com.tkay.core.common.a.h hVar) {
        Cursor cursorQuery;
        if (hVar == null) {
            return false;
        }
        Cursor cursor = null;
        try {
            if (hVar.c() == 67) {
                cursorQuery = a().query(a.a, new String[]{a.e}, "adsource_id=?", new String[]{hVar.b()}, null, null, null);
            } else {
                cursorQuery = a().query(a.a, new String[]{a.e}, "bid_id=?", new String[]{hVar.a()}, null, null, null);
            }
            cursor = cursorQuery;
        } catch (Throwable unused) {
            if (cursor != null) {
            }
        }
        if (cursor != null && cursor.getCount() > 0) {
            cursor.close();
            if (cursor != null) {
                cursor.close();
            }
            return true;
        }
        if (cursor != null) {
            cursor.close();
        }
        return false;
    }
}
