package com.mbridge.msdk.foundation.db;

import android.content.ContentValues;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.tools.ai;
import com.mbridge.msdk.foundation.tools.z;
import com.tencent.connect.share.QzonePublish;
import java.net.URLEncoder;

/* JADX INFO: compiled from: VideoReportDataDao.java */
/* JADX INFO: loaded from: classes2.dex */
public class t extends a<com.mbridge.msdk.foundation.entity.p> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f3376a = t.class.getName();
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
        To view partially-correct add '--show-bad-code' argument
    */
    public final synchronized java.util.List<com.mbridge.msdk.foundation.entity.p> a(java.lang.String r26) {
        /*
            Method dump skipped, instruction units count: 856
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.foundation.db.t.a(java.lang.String):java.util.List");
    }

    /* JADX WARN: Removed duplicated region for block: B:31:0x001b A[EXC_TOP_SPLITTER, PHI: r0 r1
      0x001b: PHI (r0v4 android.database.Cursor) = (r0v2 android.database.Cursor), (r0v5 android.database.Cursor) binds: [B:16:0x0025, B:9:0x0019] A[DONT_GENERATE, DONT_INLINE]
      0x001b: PHI (r1v3 int) = (r1v0 int), (r1v5 int) binds: [B:16:0x0025, B:9:0x0019] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final synchronized int a() {
        /*
            r4 = this;
            monitor-enter(r4)
            r0 = 0
            r1 = 0
            java.lang.String r2 = "select count(*) from reward_report"
            android.database.sqlite.SQLiteDatabase r3 = r4.getReadableDatabase()     // Catch: java.lang.Throwable -> L1f java.lang.Exception -> L21
            android.database.Cursor r0 = r3.rawQuery(r2, r0)     // Catch: java.lang.Throwable -> L1f java.lang.Exception -> L21
            if (r0 == 0) goto L19
            boolean r2 = r0.moveToFirst()     // Catch: java.lang.Throwable -> L1f java.lang.Exception -> L21
            if (r2 == 0) goto L19
            int r1 = r0.getInt(r1)     // Catch: java.lang.Throwable -> L1f java.lang.Exception -> L21
        L19:
            if (r0 == 0) goto L28
        L1b:
            r0.close()     // Catch: java.lang.Exception -> L28 java.lang.Throwable -> L30
            goto L28
        L1f:
            r1 = move-exception
            goto L2a
        L21:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L1f
            if (r0 == 0) goto L28
            goto L1b
        L28:
            monitor-exit(r4)
            return r1
        L2a:
            if (r0 == 0) goto L2f
            r0.close()     // Catch: java.lang.Exception -> L2f java.lang.Throwable -> L30
        L2f:
            throw r1     // Catch: java.lang.Throwable -> L30
        L30:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.foundation.db.t.a():int");
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
                z.d(f3376a, e.getMessage());
                return -1L;
            }
        }
        return -1L;
    }
}
