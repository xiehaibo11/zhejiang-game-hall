package com.tkay.core.common.c;

import android.content.ContentValues;
import android.database.Cursor;
import com.tkay.core.common.f.v;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes3.dex */
public class i extends com.tkay.core.common.c.a<i> {
    private static final String b = i.class.getName();
    private static i c;

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public List<v> f6104a;
        public Map<String, v> b;
    }

    public static class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final String f6105a = "notice_url_fail_info";
        public static final String b = "id";
        public static final String c = "req_type";
        public static final String d = "req_url";
        public static final String e = "req_head";
        public static final String f = "first_fail_time";
        public static final String g = "offer_out_date_time";
        public static final String h = "retry_count";
        public static final String i = "CREATE TABLE IF NOT EXISTS notice_url_fail_info(id TEXT, req_type INTEGER, req_url TEXT, req_head TEXT, first_fail_time INTEGER, offer_out_date_time INTEGER, retry_count INTEGER )";
    }

    private i(com.tkay.core.common.c.b bVar) {
        super(bVar);
    }

    public static i a(com.tkay.core.common.c.b bVar) {
        if (c == null) {
            synchronized (i.class) {
                if (c == null) {
                    c = new i(bVar);
                }
            }
        }
        return c;
    }

    private synchronized void d() {
        try {
            if (b() == null) {
                return;
            }
            b().delete(b.f6105a, null, null);
        } catch (Exception unused) {
        }
    }

    public final synchronized long a(v vVar) {
        if (b() == null || vVar == null) {
            return -1L;
        }
        try {
            ContentValues contentValues = new ContentValues();
            contentValues.put("id", vVar.f6166a);
            contentValues.put("req_type", Integer.valueOf(vVar.b));
            contentValues.put("req_url", vVar.d);
            contentValues.put("req_head", vVar.c);
            contentValues.put(b.f, Long.valueOf(vVar.e));
            contentValues.put(b.g, Long.valueOf(vVar.f));
            contentValues.put("retry_count", Integer.valueOf(vVar.g));
            if (a(vVar.f6166a)) {
                return b().update(b.f6105a, contentValues, "id = ? ", new String[]{vVar.f6166a});
            }
            return b().insert(b.f6105a, null, contentValues);
        } catch (Exception unused) {
            return -1L;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x0033 A[PHI: r11
      0x0033: PHI (r11v3 android.database.Cursor) = (r11v2 android.database.Cursor), (r11v4 android.database.Cursor) binds: [B:14:0x0031, B:11:0x002d] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private boolean a(java.lang.String r11) {
        /*
            r10 = this;
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r10.a()     // Catch: java.lang.Throwable -> L30
            java.lang.String r2 = "notice_url_fail_info"
            java.lang.String r3 = "id"
            java.lang.String[] r3 = new java.lang.String[]{r3}     // Catch: java.lang.Throwable -> L30
            java.lang.String r4 = "id=?"
            r9 = 1
            java.lang.String[] r5 = new java.lang.String[r9]     // Catch: java.lang.Throwable -> L30
            r5[r0] = r11     // Catch: java.lang.Throwable -> L30
            java.lang.String r6 = "id"
            r7 = 0
            r8 = 0
            android.database.Cursor r11 = r1.query(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L30
            if (r11 == 0) goto L2d
            int r1 = r11.getCount()     // Catch: java.lang.Throwable -> L31
            if (r1 <= 0) goto L2d
            r11.close()     // Catch: java.lang.Throwable -> L31
            if (r11 == 0) goto L2c
            r11.close()
        L2c:
            return r9
        L2d:
            if (r11 == 0) goto L36
            goto L33
        L30:
            r11 = 0
        L31:
            if (r11 == 0) goto L36
        L33:
            r11.close()
        L36:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.c.i.a(java.lang.String):boolean");
    }

    public final synchronized int b(v vVar) {
        if (b() == null || vVar == null) {
            return -1;
        }
        try {
            return b().delete(b.f6105a, "id=?", new String[]{vVar.f6166a});
        } catch (Throwable unused) {
            return -1;
        }
    }

    public final synchronized a c() {
        a aVar = new a();
        List<v> listSynchronizedList = Collections.synchronizedList(new ArrayList(8));
        ConcurrentHashMap concurrentHashMap = new ConcurrentHashMap(8);
        aVar.f6104a = listSynchronizedList;
        aVar.b = concurrentHashMap;
        Cursor cursorQuery = null;
        try {
            try {
                cursorQuery = a().query(b.f6105a, null, null, null, null, null, b.f);
            } finally {
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
            }
        } catch (Exception unused) {
            if (cursorQuery != null) {
            }
        } catch (OutOfMemoryError unused2) {
            System.gc();
            if (cursorQuery != null) {
            }
        } catch (Throwable unused3) {
            if (cursorQuery != null) {
            }
        }
        if (cursorQuery == null || cursorQuery.getCount() <= 0) {
            if (cursorQuery != null) {
            }
            return aVar;
        }
        ArrayList<v> arrayList = new ArrayList(4);
        while (cursorQuery.moveToNext()) {
            v vVar = new v();
            vVar.f6166a = cursorQuery.getString(cursorQuery.getColumnIndex("id"));
            vVar.b = cursorQuery.getInt(cursorQuery.getColumnIndex("req_type"));
            vVar.d = cursorQuery.getString(cursorQuery.getColumnIndex("req_url"));
            vVar.c = cursorQuery.getString(cursorQuery.getColumnIndex("req_head"));
            vVar.e = cursorQuery.getLong(cursorQuery.getColumnIndex(b.f));
            vVar.f = cursorQuery.getLong(cursorQuery.getColumnIndex(b.g));
            vVar.g = cursorQuery.getInt(cursorQuery.getColumnIndex("retry_count"));
            if (System.currentTimeMillis() < vVar.f) {
                listSynchronizedList.add(vVar);
                concurrentHashMap.put(vVar.f6166a, vVar);
            } else {
                arrayList.add(vVar);
            }
        }
        cursorQuery.close();
        if (arrayList.size() > 0) {
            for (v vVar2 : arrayList) {
                new StringBuilder("delete out date-- ").append(vVar2.a());
                b(vVar2);
            }
        }
        return aVar;
        cursorQuery.close();
        return aVar;
    }
}
