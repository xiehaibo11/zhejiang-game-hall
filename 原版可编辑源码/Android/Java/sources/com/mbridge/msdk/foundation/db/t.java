package com.mbridge.msdk.foundation.db;

import android.content.ContentValues;
import android.database.Cursor;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.tools.ai;
import com.mbridge.msdk.foundation.tools.z;
import com.tencent.connect.share.QzonePublish;
import java.net.URLEncoder;
import java.util.ArrayList;
import java.util.List;

public class t extends a<com.mbridge.msdk.foundation.entity.p> {
    private static final String a = t.class.getName();
    private static t b = null;

    private t(h hVar) {
        super(hVar);
    }

    public static t a(h hVar) {
        if (b == null) {
            synchronized (t.class) {
                if (b == null) {
                    b = new t(hVar);
                }
            }
        }
        return b;
    }

    /* JADX WARN: Removed duplicated region for block: B:101:0x0346 A[Catch: Exception -> 0x0352, all -> 0x0355, TRY_ENTER, TRY_LEAVE, TryCatch #7 {Exception -> 0x0352, blocks: (B:101:0x0346, B:93:0x032f), top: B:121:0x0007 }] */
    /* JADX WARN: Removed duplicated region for block: B:123:0x034e A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:136:0x02d5 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:70:0x02db  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final synchronized List<com.mbridge.msdk.foundation.entity.p> a(String str) {
        Cursor cursor;
        Cursor cursorQuery;
        Cursor cursor2;
        com.mbridge.msdk.foundation.entity.p pVar;
        ArrayList arrayList;
        ArrayList arrayList2;
        Cursor cursor3;
        com.mbridge.msdk.foundation.entity.p pVar2;
        String str2 = str;
        synchronized (this) {
            try {
                if (!TextUtils.isEmpty(str)) {
                    try {
                        cursorQuery = getReadableDatabase().query("reward_report", null, "key=?", new String[]{str2}, null, null, null);
                        if (cursorQuery != null) {
                            try {
                                if (cursorQuery.getCount() > 0) {
                                    ArrayList arrayList3 = new ArrayList();
                                    while (cursorQuery.moveToNext()) {
                                        String string = cursorQuery.getString(cursorQuery.getColumnIndex("key"));
                                        int i = cursorQuery.getInt(cursorQuery.getColumnIndex("networkType"));
                                        String string2 = cursorQuery.getString(cursorQuery.getColumnIndex("network_str"));
                                        cursorQuery.getInt(cursorQuery.getColumnIndex("isCompleteView"));
                                        cursorQuery.getInt(cursorQuery.getColumnIndex("watchedMillis"));
                                        int i2 = cursorQuery.getInt(cursorQuery.getColumnIndex("videoLength"));
                                        String string3 = cursorQuery.getString(cursorQuery.getColumnIndex("offerUrl"));
                                        String string4 = cursorQuery.getString(cursorQuery.getColumnIndex(com.tkay.expressad.foundation.d.r.ac));
                                        int i3 = cursorQuery.getInt(cursorQuery.getColumnIndex("result"));
                                        String string5 = cursorQuery.getString(cursorQuery.getColumnIndex(com.tkay.expressad.foundation.d.r.ag));
                                        int i4 = cursorQuery.getInt(cursorQuery.getColumnIndex(QzonePublish.PUBLISH_TO_QZONE_VIDEO_SIZE));
                                        String string6 = cursorQuery.getString(cursorQuery.getColumnIndex("campaignId"));
                                        String string7 = cursorQuery.getString(cursorQuery.getColumnIndex("video_url"));
                                        String string8 = cursorQuery.getString(cursorQuery.getColumnIndex("unitId"));
                                        String string9 = cursorQuery.getString(cursorQuery.getColumnIndex("rid"));
                                        String string10 = cursorQuery.getString(cursorQuery.getColumnIndex("rid_n"));
                                        String string11 = cursorQuery.getString(cursorQuery.getColumnIndex("ad_type"));
                                        String string12 = cursorQuery.getString(cursorQuery.getColumnIndex(com.tkay.expressad.foundation.d.r.aB));
                                        String string13 = cursorQuery.getString(cursorQuery.getColumnIndex("device_id"));
                                        String string14 = cursorQuery.getString(cursorQuery.getColumnIndex(com.tkay.expressad.foundation.d.r.aD));
                                        int i5 = cursorQuery.getInt(cursorQuery.getColumnIndex("adspace_t"));
                                        if (str2.equals(com.tkay.expressad.foundation.d.r.b)) {
                                            try {
                                                try {
                                                    pVar = new com.mbridge.msdk.foundation.entity.p(string, i, string3, string4, string2);
                                                    pVar.n(string6);
                                                    pVar.e(string7);
                                                    pVar.k(string9);
                                                    pVar.l(string10);
                                                    pVar.m(string8);
                                                    cursor2 = cursorQuery;
                                                    arrayList = arrayList3;
                                                    if (pVar != null) {
                                                        try {
                                                            arrayList2 = arrayList;
                                                            arrayList2.add(pVar);
                                                        } catch (Exception e) {
                                                            e = e;
                                                            cursorQuery = cursor2;
                                                            e.printStackTrace();
                                                            z.d(a, e.getMessage());
                                                            if (cursorQuery != null) {
                                                            }
                                                            return null;
                                                        } catch (Throwable th) {
                                                            th = th;
                                                            cursor = cursor2;
                                                            if (cursor != null) {
                                                            }
                                                            throw th;
                                                        }
                                                    } else {
                                                        arrayList2 = arrayList;
                                                    }
                                                    int i6 = cursor2.getInt(cursor2.getColumnIndex("id"));
                                                    getWritableDatabase().delete("reward_report", "id = ?", new String[]{i6 + ""});
                                                    arrayList3 = arrayList2;
                                                    cursorQuery = cursor2;
                                                } catch (Exception e2) {
                                                    e = e2;
                                                    e.printStackTrace();
                                                    z.d(a, e.getMessage());
                                                    if (cursorQuery != null) {
                                                        cursorQuery.close();
                                                    }
                                                    return null;
                                                }
                                            } catch (Throwable th2) {
                                                th = th2;
                                                cursor = cursorQuery;
                                                if (cursor != null) {
                                                    try {
                                                        cursor.close();
                                                    } catch (Exception unused) {
                                                    }
                                                }
                                                throw th;
                                            }
                                        } else {
                                            if (str2.equals(com.tkay.expressad.foundation.d.r.d)) {
                                                arrayList = arrayList3;
                                                pVar = new com.mbridge.msdk.foundation.entity.p(string, i, i2, string3, i3, string5, i4, string2);
                                                pVar.n(string6);
                                                pVar.e(string7);
                                                pVar.k(string9);
                                                pVar.m(string8);
                                                pVar.p(string4);
                                                pVar.l(string10);
                                                pVar.h(string11);
                                            } else {
                                                arrayList = arrayList3;
                                                if (str2.equals(com.tkay.expressad.foundation.d.r.g)) {
                                                    pVar = new com.mbridge.msdk.foundation.entity.p(string, i, i2, string3, i3, string5, i4, string2);
                                                } else if (str2.equals(com.tkay.expressad.foundation.d.r.f)) {
                                                    pVar = new com.mbridge.msdk.foundation.entity.p(string, i, string3, string4, string2);
                                                } else if (com.tkay.expressad.foundation.d.r.j.equals(str2)) {
                                                    pVar = new com.mbridge.msdk.foundation.entity.p(cursorQuery.getString(cursorQuery.getColumnIndex("h5_click_data")));
                                                } else {
                                                    if (com.tkay.expressad.foundation.d.r.k.equals(str2)) {
                                                        try {
                                                            cursor3 = cursorQuery;
                                                            pVar = pVar2;
                                                            try {
                                                                pVar2 = new com.mbridge.msdk.foundation.entity.p(str, i3, string5, cursorQuery.getString(cursorQuery.getColumnIndex("endcard_url")), string6, string8, string4, cursorQuery.getString(cursorQuery.getColumnIndex("type")));
                                                                pVar.k(string9);
                                                                pVar.l(string10);
                                                                if (!TextUtils.isEmpty(string6)) {
                                                                    pVar.n(string6);
                                                                }
                                                                pVar.b(i5);
                                                                pVar.h(string11);
                                                                pVar.a(string12);
                                                                pVar.b(string13);
                                                                pVar.c(string14);
                                                                str2 = str;
                                                                cursor2 = cursor3;
                                                            } catch (Exception e3) {
                                                                e = e3;
                                                                cursorQuery = cursor3;
                                                                e.printStackTrace();
                                                                z.d(a, e.getMessage());
                                                                if (cursorQuery != null) {
                                                                }
                                                                return null;
                                                            } catch (Throwable th3) {
                                                                th = th3;
                                                                cursor = cursor3;
                                                                if (cursor != null) {
                                                                }
                                                                throw th;
                                                            }
                                                        } catch (Exception e4) {
                                                            e = e4;
                                                        } catch (Throwable th4) {
                                                            th = th4;
                                                            cursor3 = cursorQuery;
                                                        }
                                                    } else {
                                                        Cursor cursor4 = cursorQuery;
                                                        try {
                                                            str2 = str;
                                                            if (com.tkay.expressad.foundation.d.r.m.equals(str2)) {
                                                                pVar = new com.mbridge.msdk.foundation.entity.p();
                                                                pVar.o(str2);
                                                                pVar.c(i);
                                                                pVar.d(i3);
                                                                pVar.n(string6);
                                                                cursor2 = cursor4;
                                                                pVar.i(cursor2.getString(cursor2.getColumnIndex("template_url")));
                                                                pVar.p(string4);
                                                                pVar.k(string9);
                                                                pVar.l(string10);
                                                                pVar.m(string8);
                                                            } else {
                                                                cursor2 = cursor4;
                                                                if (com.tkay.expressad.foundation.d.r.l.equals(str2)) {
                                                                    pVar = new com.mbridge.msdk.foundation.entity.p();
                                                                    pVar.o(str2);
                                                                    pVar.c(i);
                                                                    pVar.n(string6);
                                                                    pVar.d(cursor2.getString(cursor2.getColumnIndex("image_url")));
                                                                    pVar.p(string4);
                                                                    pVar.k(string9);
                                                                    pVar.l(string10);
                                                                    pVar.m(string8);
                                                                } else if (com.tkay.expressad.foundation.d.r.c.equals(str2)) {
                                                                    pVar = new com.mbridge.msdk.foundation.entity.p();
                                                                    pVar.o(str2);
                                                                    pVar.a(string12);
                                                                    pVar.m(string8);
                                                                    pVar.b(string13);
                                                                    pVar.h(string11);
                                                                    pVar.n(string6);
                                                                    pVar.k(string9);
                                                                    pVar.l(string10);
                                                                    pVar.d(i3);
                                                                    pVar.p(string4);
                                                                    pVar.c(i);
                                                                    pVar.c(string14);
                                                                    pVar.b(i5);
                                                                } else {
                                                                    pVar = null;
                                                                }
                                                            }
                                                        } catch (Exception e5) {
                                                            e = e5;
                                                            cursor2 = cursor4;
                                                            cursorQuery = cursor2;
                                                            e.printStackTrace();
                                                            z.d(a, e.getMessage());
                                                            if (cursorQuery != null) {
                                                            }
                                                            return null;
                                                        } catch (Throwable th5) {
                                                            th = th5;
                                                            cursor2 = cursor4;
                                                            cursor = cursor2;
                                                            if (cursor != null) {
                                                            }
                                                            throw th;
                                                        }
                                                    }
                                                    if (pVar != null) {
                                                    }
                                                    int i62 = cursor2.getInt(cursor2.getColumnIndex("id"));
                                                    getWritableDatabase().delete("reward_report", "id = ?", new String[]{i62 + ""});
                                                    arrayList3 = arrayList2;
                                                    cursorQuery = cursor2;
                                                }
                                            }
                                            cursor2 = cursorQuery;
                                            if (pVar != null) {
                                            }
                                            int i622 = cursor2.getInt(cursor2.getColumnIndex("id"));
                                            getWritableDatabase().delete("reward_report", "id = ?", new String[]{i622 + ""});
                                            arrayList3 = arrayList2;
                                            cursorQuery = cursor2;
                                        }
                                    }
                                    Cursor cursor5 = cursorQuery;
                                    ArrayList arrayList4 = arrayList3;
                                    if (cursor5 != null) {
                                        try {
                                            cursor5.close();
                                        } catch (Exception unused2) {
                                        }
                                    }
                                    return arrayList4;
                                }
                            } catch (Exception e6) {
                                e = e6;
                            } catch (Throwable th6) {
                                th = th6;
                                cursor2 = cursorQuery;
                            }
                        }
                    } catch (Exception e7) {
                        e = e7;
                        cursorQuery = null;
                    } catch (Throwable th7) {
                        th = th7;
                        cursor = null;
                    }
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                }
            } catch (Exception unused3) {
            }
            return null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:31:0x001b A[EXC_TOP_SPLITTER, PHI: r0 r1
      0x001b: PHI (r0v4 android.database.Cursor) = (r0v2 android.database.Cursor), (r0v5 android.database.Cursor) binds: [B:16:0x0025, B:9:0x0019] A[DONT_GENERATE, DONT_INLINE]
      0x001b: PHI (r1v3 int) = (r1v0 int), (r1v5 int) binds: [B:16:0x0025, B:9:0x0019] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final synchronized int a() {
        int i;
        Cursor cursorRawQuery = null;
        i = 0;
        try {
            try {
                cursorRawQuery = getReadableDatabase().rawQuery("select count(*) from reward_report", null);
                if (cursorRawQuery != null && cursorRawQuery.moveToFirst()) {
                    i = cursorRawQuery.getInt(0);
                }
            } catch (Exception e) {
                e.printStackTrace();
                if (cursorRawQuery != null) {
                }
            }
            if (cursorRawQuery != null) {
                try {
                    cursorRawQuery.close();
                } catch (Exception unused) {
                }
            }
        } catch (Throwable th) {
            if (cursorRawQuery != null) {
                try {
                    cursorRawQuery.close();
                } catch (Exception unused2) {
                }
            }
            throw th;
        }
        return i;
    }

    public final synchronized long a(com.mbridge.msdk.foundation.entity.p pVar) {
        if (pVar != null) {
            try {
                ContentValues contentValues = new ContentValues();
                contentValues.put("key", pVar.o());
                contentValues.put("networkType", Integer.valueOf(pVar.v()));
                contentValues.put("network_str", pVar.w());
                contentValues.put("isCompleteView", Integer.valueOf(pVar.x()));
                contentValues.put("watchedMillis", Integer.valueOf(pVar.p()));
                contentValues.put("videoLength", Integer.valueOf(pVar.q()));
                if (!TextUtils.isEmpty(pVar.r())) {
                    contentValues.put("offerUrl", pVar.r());
                }
                if (!TextUtils.isEmpty(pVar.s())) {
                    contentValues.put(com.tkay.expressad.foundation.d.r.ac, URLEncoder.encode(pVar.s(), "utf-8"));
                }
                contentValues.put("result", Integer.valueOf(pVar.y()));
                contentValues.put(com.tkay.expressad.foundation.d.r.ag, pVar.t());
                contentValues.put(QzonePublish.PUBLISH_TO_QZONE_VIDEO_SIZE, Long.valueOf(pVar.u()));
                contentValues.put("type", pVar.g());
                String strF = pVar.f();
                if (!TextUtils.isEmpty(strF)) {
                    contentValues.put("endcard_url", strF);
                }
                String strE = pVar.e();
                if (!TextUtils.isEmpty(strE)) {
                    contentValues.put("video_url", strE);
                }
                String strK = pVar.k();
                if (!TextUtils.isEmpty(strK)) {
                    contentValues.put("rid", strK);
                }
                String strL = pVar.l();
                if (!TextUtils.isEmpty(strL)) {
                    contentValues.put("rid_n", strL);
                }
                String strI = pVar.i();
                if (!TextUtils.isEmpty(strI)) {
                    contentValues.put("template_url", strI);
                }
                String strD = pVar.d();
                if (!TextUtils.isEmpty(strD)) {
                    contentValues.put("image_url", strD);
                }
                String strH = pVar.h();
                if (!TextUtils.isEmpty(strH)) {
                    contentValues.put("ad_type", URLEncoder.encode(strH, "utf-8"));
                }
                contentValues.put("unitId", pVar.m());
                contentValues.put("campaignId", pVar.n());
                if (com.tkay.expressad.foundation.d.r.j.equals(pVar.o())) {
                    String strF2 = com.mbridge.msdk.foundation.entity.p.f(pVar);
                    if (ai.b(strF2)) {
                        contentValues.put("h5_click_data", strF2);
                    }
                }
                String strA = pVar.a();
                if (!TextUtils.isEmpty(strA)) {
                    contentValues.put(com.tkay.expressad.foundation.d.r.aB, URLEncoder.encode(strA, "utf-8"));
                }
                String strB = pVar.b();
                if (!TextUtils.isEmpty(strB)) {
                    contentValues.put("device_id", URLEncoder.encode(strB, "utf-8"));
                }
                String strC = pVar.c();
                if (!TextUtils.isEmpty(strC)) {
                    contentValues.put(com.tkay.expressad.foundation.d.r.aD, URLEncoder.encode(strC, "utf-8"));
                }
                contentValues.put("adspace_t", Integer.valueOf(pVar.j()));
                return getWritableDatabase().insert("reward_report", null, contentValues);
            } catch (Exception e) {
                e.printStackTrace();
                z.d(a, e.getMessage());
                return -1L;
            }
        }
        return -1L;
    }
}
