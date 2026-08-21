package com.mbridge.msdk.foundation.db;

import android.content.ContentValues;
import android.database.Cursor;
import com.tkay.core.common.c.l;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: compiled from: UnitIDDao.java */
/* JADX INFO: loaded from: classes2.dex */
public class r extends a<com.mbridge.msdk.foundation.entity.j> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static r f3374a;

    private r(h hVar) {
        super(hVar);
    }

    public static r a(h hVar) {
        if (f3374a == null) {
            synchronized (r.class) {
                if (f3374a == null) {
                    f3374a = new r(hVar);
                }
            }
        }
        return f3374a;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r1v1 */
    /* JADX WARN: Type inference failed for: r1v11 */
    /* JADX WARN: Type inference failed for: r1v15 */
    /* JADX WARN: Type inference failed for: r1v17 */
    /* JADX WARN: Type inference failed for: r1v18 */
    /* JADX WARN: Type inference failed for: r1v2 */
    /* JADX WARN: Type inference failed for: r1v3, types: [android.database.Cursor] */
    /* JADX WARN: Type inference failed for: r1v5 */
    /* JADX WARN: Type inference failed for: r1v6, types: [java.util.List<com.mbridge.msdk.foundation.entity.k>] */
    /* JADX WARN: Type inference failed for: r1v7 */
    /* JADX WARN: Type inference failed for: r1v8 */
    public final synchronized List<com.mbridge.msdk.foundation.entity.k> a(int i) {
        ?? r1;
        ArrayList arrayList;
        Cursor cursorRawQuery;
        r1 = 0;
        r1 = 0;
        r1 = 0;
        Cursor cursor = null;
        try {
            try {
                cursorRawQuery = getReadableDatabase().rawQuery("select * from unit_id WHERE ad_type = " + i, null);
                if (cursorRawQuery != null) {
                    try {
                        try {
                            if (cursorRawQuery.getCount() > 0) {
                                arrayList = new ArrayList(cursorRawQuery.getCount());
                                while (cursorRawQuery.moveToNext()) {
                                    try {
                                        arrayList.add(new com.mbridge.msdk.foundation.entity.k(cursorRawQuery.getString(cursorRawQuery.getColumnIndex(l.a.c)), cursorRawQuery.getString(cursorRawQuery.getColumnIndex("unitId")), i));
                                    } catch (Exception e) {
                                        e = e;
                                        cursor = cursorRawQuery;
                                        e.printStackTrace();
                                        if (cursor != null) {
                                            try {
                                                cursor.close();
                                            } catch (Exception unused) {
                                            }
                                        }
                                        r1 = arrayList;
                                    }
                                }
                                r1 = arrayList;
                            }
                        } catch (Throwable th) {
                            th = th;
                            r1 = cursorRawQuery;
                            if (r1 != 0) {
                                try {
                                    r1.close();
                                } catch (Exception unused2) {
                                }
                            }
                            throw th;
                        }
                    } catch (Exception e2) {
                        e = e2;
                        arrayList = null;
                    }
                }
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (Exception e3) {
            e = e3;
            arrayList = null;
        }
        if (cursorRawQuery != null) {
            try {
                cursorRawQuery.close();
            } catch (Exception unused3) {
            }
        }
        return r1;
    }

    public final synchronized void a(String str) {
        if (getWritableDatabase() != null) {
            getWritableDatabase().delete("unit_id", "unitId = ?", new String[]{str + ""});
        }
    }

    public final synchronized void a(String str, String str2, int i) {
        if (getWritableDatabase() == null) {
            return;
        }
        ContentValues contentValues = new ContentValues();
        contentValues.put(l.a.c, str);
        contentValues.put("unitId", str2);
        contentValues.put("ad_type", Integer.valueOf(i));
        getWritableDatabase().insert("unit_id", null, contentValues);
    }
}
