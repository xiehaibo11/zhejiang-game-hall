package com.mbridge.msdk.foundation.db;

import android.database.Cursor;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: compiled from: CampaignClickTimeDao.java */
/* JADX INFO: loaded from: classes2.dex */
public class d extends a<com.mbridge.msdk.foundation.entity.e> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static d f3357a;

    private d(h hVar) {
        super(hVar);
    }

    public static d a(h hVar) {
        if (f3357a == null) {
            synchronized (d.class) {
                if (f3357a == null) {
                    f3357a = new d(hVar);
                }
            }
        }
        return f3357a;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r3v0 */
    /* JADX WARN: Type inference failed for: r3v1 */
    /* JADX WARN: Type inference failed for: r3v2, types: [android.database.Cursor] */
    public final synchronized List<com.mbridge.msdk.foundation.entity.e> a(int i) {
        Cursor cursorRawQuery;
        String str = "select * from click_time LIMIT " + i;
        ?? r3 = 0;
        try {
            if (getWritableDatabase() == null) {
                return null;
            }
            try {
                cursorRawQuery = getWritableDatabase().rawQuery(str, null);
                if (cursorRawQuery != null) {
                    try {
                        if (cursorRawQuery.getCount() > 0) {
                            ArrayList arrayList = new ArrayList();
                            int i2 = 0;
                            while (cursorRawQuery.moveToNext() && i2 < i) {
                                i2++;
                                int i3 = cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("id"));
                                String string = cursorRawQuery.getString(cursorRawQuery.getColumnIndex("campaignId"));
                                int i4 = cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("click_type"));
                                String string2 = cursorRawQuery.getString(cursorRawQuery.getColumnIndex("click_duration"));
                                String string3 = cursorRawQuery.getString(cursorRawQuery.getColumnIndex(com.tkay.expressad.foundation.d.f.f));
                                int i5 = cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("type"));
                                int i6 = cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("code"));
                                String string4 = cursorRawQuery.getString(cursorRawQuery.getColumnIndex(com.tkay.expressad.foundation.d.f.j));
                                arrayList.add(new com.mbridge.msdk.foundation.entity.e(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("rid")), cursorRawQuery.getString(cursorRawQuery.getColumnIndex("rid_n")), string, string2, string3, i6, cursorRawQuery.getString(cursorRawQuery.getColumnIndex(com.tkay.expressad.foundation.d.f.i)), string4, cursorRawQuery.getString(cursorRawQuery.getColumnIndex("content")), i5, i4, cursorRawQuery.getString(cursorRawQuery.getColumnIndex("unit_id")), cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("landing_type")), cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("link_type")), cursorRawQuery.getString(cursorRawQuery.getColumnIndex(com.tkay.expressad.foundation.d.f.s)), cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("network_type")), cursorRawQuery.getInt(cursorRawQuery.getColumnIndex(com.tkay.expressad.foundation.d.f.t)), cursorRawQuery.getString(cursorRawQuery.getColumnIndex("network_str"))));
                                getWritableDatabase().delete(com.tkay.expressad.foundation.d.f.s, "id = ?", new String[]{i3 + ""});
                            }
                            if (cursorRawQuery != null) {
                                cursorRawQuery.close();
                            }
                            return arrayList;
                        }
                    } catch (Exception e) {
                        e = e;
                        e.printStackTrace();
                        if (cursorRawQuery != null) {
                        }
                        return null;
                    }
                }
            } catch (Exception e2) {
                e = e2;
                cursorRawQuery = null;
            } catch (Throwable th) {
                th = th;
                if (r3 != 0) {
                    r3.close();
                }
                throw th;
            }
            if (cursorRawQuery != null) {
                cursorRawQuery.close();
            }
            return null;
        } catch (Throwable th2) {
            th = th2;
            r3 = str;
        }
    }

    public final synchronized int a() {
        int i;
        Cursor cursorRawQuery = null;
        i = 0;
        try {
            try {
                cursorRawQuery = getReadableDatabase().rawQuery("select count(*) from click_time", null);
                if (cursorRawQuery != null && cursorRawQuery.moveToFirst()) {
                    i = cursorRawQuery.getInt(0);
                }
            } catch (Exception e) {
                e.printStackTrace();
                if (cursorRawQuery != null) {
                }
            }
        } finally {
            if (cursorRawQuery != null) {
                cursorRawQuery.close();
            }
        }
        return i;
    }
}
