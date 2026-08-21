package com.tkay.core.common.c;

import android.content.ContentValues;
import android.database.Cursor;
import com.tkay.core.common.f.v;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

public class i extends com.tkay.core.common.c.a<i> {
    private static final String b = i.class.getName();
    private static i c;

    public static class a {
        public List<v> a;
        public Map<String, v> b;
    }

    public static class b {
        public static final String a = "notice_url_fail_info";
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
            b().delete(b.a, null, null);
        } catch (Exception unused) {
        }
    }

    public final synchronized long a(v vVar) {
        if (b() == null || vVar == null) {
            return -1L;
        }
        try {
            ContentValues contentValues = new ContentValues();
            contentValues.put("id", vVar.a);
            contentValues.put("req_type", Integer.valueOf(vVar.b));
            contentValues.put("req_url", vVar.d);
            contentValues.put("req_head", vVar.c);
            contentValues.put(b.f, Long.valueOf(vVar.e));
            contentValues.put(b.g, Long.valueOf(vVar.f));
            contentValues.put("retry_count", Integer.valueOf(vVar.g));
            if (a(vVar.a)) {
                return b().update(b.a, contentValues, "id = ? ", new String[]{vVar.a});
            }
            return b().insert(b.a, null, contentValues);
        } catch (Exception unused) {
            return -1L;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x0033 A[PHI: r11
      0x0033: PHI (r11v3 android.database.Cursor) = (r11v2 android.database.Cursor), (r11v4 android.database.Cursor) binds: [B:14:0x0031, B:11:0x002d] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private boolean a(String str) {
        Cursor cursorQuery;
        try {
            cursorQuery = a().query(b.a, new String[]{"id"}, "id=?", new String[]{str}, "id", null, null);
            if (cursorQuery != null) {
                try {
                    if (cursorQuery.getCount() > 0) {
                        cursorQuery.close();
                        if (cursorQuery != null) {
                            cursorQuery.close();
                        }
                        return true;
                    }
                } catch (Throwable unused) {
                    if (cursorQuery != null) {
                    }
                }
            }
        } catch (Throwable unused2) {
            cursorQuery = null;
        }
        if (cursorQuery != null) {
            cursorQuery.close();
        }
        return false;
    }

    public final synchronized int b(v vVar) {
        if (b() == null || vVar == null) {
            return -1;
        }
        try {
            return b().delete(b.a, "id=?", new String[]{vVar.a});
        } catch (Throwable unused) {
            return -1;
        }
    }

    public final synchronized a c() {
        a aVar = new a();
        List<v> listSynchronizedList = Collections.synchronizedList(new ArrayList(8));
        ConcurrentHashMap concurrentHashMap = new ConcurrentHashMap(8);
        aVar.a = listSynchronizedList;
        aVar.b = concurrentHashMap;
        Cursor cursorQuery = null;
        try {
            try {
                cursorQuery = a().query(b.a, null, null, null, null, null, b.f);
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
            vVar.a = cursorQuery.getString(cursorQuery.getColumnIndex("id"));
            vVar.b = cursorQuery.getInt(cursorQuery.getColumnIndex("req_type"));
            vVar.d = cursorQuery.getString(cursorQuery.getColumnIndex("req_url"));
            vVar.c = cursorQuery.getString(cursorQuery.getColumnIndex("req_head"));
            vVar.e = cursorQuery.getLong(cursorQuery.getColumnIndex(b.f));
            vVar.f = cursorQuery.getLong(cursorQuery.getColumnIndex(b.g));
            vVar.g = cursorQuery.getInt(cursorQuery.getColumnIndex("retry_count"));
            if (System.currentTimeMillis() < vVar.f) {
                listSynchronizedList.add(vVar);
                concurrentHashMap.put(vVar.a, vVar);
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
