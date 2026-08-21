package com.mbridge.msdk.foundation.db;

import android.content.ContentValues;
import android.database.Cursor;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.out.Campaign;
import com.tkay.core.common.c.m;

/* JADX INFO: compiled from: VideoDao.java */
/* JADX INFO: loaded from: classes2.dex */
public class s extends a<Campaign> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static s f3375a;

    private s(h hVar) {
        super(hVar);
    }

    public static s a(h hVar) {
        if (f3375a == null) {
            synchronized (s.class) {
                if (f3375a == null) {
                    f3375a = new s(hVar);
                }
            }
        }
        return f3375a;
    }

    /* JADX WARN: Removed duplicated region for block: B:52:0x00b7 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final synchronized com.mbridge.msdk.foundation.entity.o a(java.lang.String r7) {
        /*
            r6 = this;
            monitor-enter(r6)
            boolean r0 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Lbb
            r1 = 0
            if (r0 == 0) goto La
            monitor-exit(r6)
            return r1
        La:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            r0.<init>()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.String r2 = "SELECT * FROM video WHERE video_url = '"
            r0.append(r2)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            r0.append(r7)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.String r7 = "'"
            r0.append(r7)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.String r7 = r0.toString()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            android.database.sqlite.SQLiteDatabase r0 = r6.getReadableDatabase()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            android.database.Cursor r7 = r0.rawQuery(r7, r1)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            if (r7 == 0) goto L96
            int r0 = r7.getCount()     // Catch: java.lang.Exception -> L91 java.lang.Throwable -> Lb3
            if (r0 <= 0) goto L96
            com.mbridge.msdk.foundation.entity.o r0 = new com.mbridge.msdk.foundation.entity.o     // Catch: java.lang.Exception -> L91 java.lang.Throwable -> Lb3
            r0.<init>()     // Catch: java.lang.Exception -> L91 java.lang.Throwable -> Lb3
        L35:
            boolean r1 = r7.moveToNext()     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            if (r1 == 0) goto L8d
            java.lang.String r1 = "video_url"
            int r1 = r7.getColumnIndex(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            java.lang.String r1 = r7.getString(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            r0.a(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            java.lang.String r1 = "video_state"
            int r1 = r7.getColumnIndex(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            int r1 = r7.getInt(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            r0.b(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            java.lang.String r1 = "pregeress_size"
            int r1 = r7.getColumnIndex(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            long r1 = r7.getLong(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            r0.b(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            java.lang.String r1 = "total_size"
            int r1 = r7.getColumnIndex(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            int r1 = r7.getInt(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            r0.a(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            java.lang.String r1 = "video_path"
            int r1 = r7.getColumnIndex(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            java.lang.String r1 = r7.getString(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            r0.b(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            java.lang.String r1 = "video_download_start"
            int r1 = r7.getColumnIndex(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            long r1 = r7.getLong(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 * r3
            r0.a(r1)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> Lb3
            goto L35
        L8d:
            r1 = r0
            goto L96
        L8f:
            r1 = move-exception
            goto La2
        L91:
            r0 = move-exception
            r5 = r1
            r1 = r0
            r0 = r5
            goto La2
        L96:
            if (r7 == 0) goto Lb1
            r7.close()     // Catch: java.lang.Exception -> Lb1 java.lang.Throwable -> Lbb
            goto Lb1
        L9c:
            r0 = move-exception
            goto Lb5
        L9e:
            r7 = move-exception
            r0 = r1
            r1 = r7
            r7 = r0
        La2:
            java.lang.String r2 = "VideoDao"
            java.lang.String r1 = r1.getLocalizedMessage()     // Catch: java.lang.Throwable -> Lb3
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)     // Catch: java.lang.Throwable -> Lb3
            if (r7 == 0) goto Lb0
            r7.close()     // Catch: java.lang.Exception -> Lb0 java.lang.Throwable -> Lbb
        Lb0:
            r1 = r0
        Lb1:
            monitor-exit(r6)
            return r1
        Lb3:
            r0 = move-exception
            r1 = r7
        Lb5:
            if (r1 == 0) goto Lba
            r1.close()     // Catch: java.lang.Exception -> Lba java.lang.Throwable -> Lbb
        Lba:
            throw r0     // Catch: java.lang.Throwable -> Lbb
        Lbb:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.foundation.db.s.a(java.lang.String):com.mbridge.msdk.foundation.entity.o");
    }

    /* JADX WARN: Removed duplicated region for block: B:34:0x00a0 A[EXC_TOP_SPLITTER, PHI: r0
      0x00a0: PHI (r0v3 android.database.Cursor) = (r0v2 android.database.Cursor), (r0v4 android.database.Cursor) binds: [B:24:0x00ab, B:17:0x009e] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final synchronized com.mbridge.msdk.foundation.entity.o a(java.lang.String r6, java.lang.String r7) {
        /*
            r5 = this;
            monitor-enter(r5)
            boolean r7 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> Lb0
            r0 = 0
            if (r7 == 0) goto La
            monitor-exit(r5)
            return r0
        La:
            com.mbridge.msdk.foundation.entity.o r7 = new com.mbridge.msdk.foundation.entity.o     // Catch: java.lang.Throwable -> Lb0
            r7.<init>()     // Catch: java.lang.Throwable -> Lb0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb0
            r1.<init>()     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r2 = " WHERE video_url = '"
            r1.append(r2)     // Catch: java.lang.Throwable -> Lb0
            r1.append(r6)     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r6 = "'"
            r1.append(r6)     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Throwable -> Lb0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb0
            r1.<init>()     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r2 = "SELECT * FROM video"
            r1.append(r2)     // Catch: java.lang.Throwable -> Lb0
            r1.append(r6)     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Throwable -> Lb0
            android.database.sqlite.SQLiteDatabase r1 = r5.getReadableDatabase()     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            android.database.Cursor r0 = r1.rawQuery(r6, r0)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            if (r0 == 0) goto L9e
            int r6 = r0.getCount()     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            if (r6 <= 0) goto L9e
        L46:
            boolean r6 = r0.moveToNext()     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            if (r6 == 0) goto L9e
            java.lang.String r6 = "video_url"
            int r6 = r0.getColumnIndex(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            java.lang.String r6 = r0.getString(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            r7.a(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            java.lang.String r6 = "video_state"
            int r6 = r0.getColumnIndex(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            int r6 = r0.getInt(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            r7.b(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            java.lang.String r6 = "pregeress_size"
            int r6 = r0.getColumnIndex(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            long r1 = r0.getLong(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            r7.b(r1)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            java.lang.String r6 = "total_size"
            int r6 = r0.getColumnIndex(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            int r6 = r0.getInt(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            r7.a(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            java.lang.String r6 = "video_path"
            int r6 = r0.getColumnIndex(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            java.lang.String r6 = r0.getString(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            r7.b(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            java.lang.String r6 = "video_download_start"
            int r6 = r0.getColumnIndex(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            long r1 = r0.getLong(r6)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 * r3
            r7.a(r1)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> Lab
            goto L46
        L9e:
            if (r0 == 0) goto Lae
        La0:
            r0.close()     // Catch: java.lang.Exception -> Lae java.lang.Throwable -> Lb0
            goto Lae
        La4:
            r6 = move-exception
            if (r0 == 0) goto Laa
            r0.close()     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lb0
        Laa:
            throw r6     // Catch: java.lang.Throwable -> Lb0
        Lab:
            if (r0 == 0) goto Lae
            goto La0
        Lae:
            monitor-exit(r5)
            return r7
        Lb0:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.foundation.db.s.a(java.lang.String, java.lang.String):com.mbridge.msdk.foundation.entity.o");
    }

    public final synchronized void b(String str) {
        try {
            String str2 = "video_url = '" + str + "'";
            if (getWritableDatabase() == null) {
            } else {
                getWritableDatabase().delete("video", str2, null);
            }
        } catch (Exception unused) {
        }
    }

    public final synchronized void a(String str, long j) {
        if (j == 0) {
            return;
        }
        try {
            ContentValues contentValues = new ContentValues();
            contentValues.put("video_download_start", Long.valueOf(j / 1000));
            if (b(str, "")) {
                getWritableDatabase().update("video", contentValues, "video_url = '" + str + "'", null);
            }
        } catch (Exception unused) {
        }
    }

    public final synchronized long a(CampaignEx campaignEx, long j, String str, int i) {
        if (campaignEx == null) {
            return 0L;
        }
        try {
            if (getWritableDatabase() == null) {
                return -1L;
            }
            ContentValues contentValues = new ContentValues();
            contentValues.put("unitid", campaignEx.getCampaignUnitId());
            contentValues.put("id", campaignEx.getId());
            contentValues.put("package_name", campaignEx.getPackageName());
            contentValues.put("app_name", campaignEx.getAppName());
            contentValues.put("app_desc", campaignEx.getAppDesc());
            contentValues.put("app_size", campaignEx.getSize());
            contentValues.put("image_size", campaignEx.getImageSize());
            contentValues.put("icon_url", campaignEx.getIconUrl());
            contentValues.put("image_url", campaignEx.getImageUrl());
            contentValues.put("impression_url", campaignEx.getImpressionURL());
            contentValues.put("notice_url", campaignEx.getNoticeUrl());
            contentValues.put("download_url", campaignEx.getClickURL());
            contentValues.put("only_impression", campaignEx.getOnlyImpressionURL());
            contentValues.put("ts", Long.valueOf(campaignEx.getTimestamp()));
            contentValues.put("template", Integer.valueOf(campaignEx.getTemplate()));
            contentValues.put("click_mode", campaignEx.getClick_mode());
            contentValues.put("landing_type", campaignEx.getLandingType());
            contentValues.put("link_type", Integer.valueOf(campaignEx.getLinkType()));
            contentValues.put("star", Double.valueOf(campaignEx.getRating()));
            contentValues.put("cti", Integer.valueOf(campaignEx.getClickInterval()));
            contentValues.put("cpti", Integer.valueOf(campaignEx.getPreClickInterval()));
            contentValues.put("preclick", Boolean.valueOf(campaignEx.isPreClick()));
            contentValues.put("level", Integer.valueOf(campaignEx.getCacheLevel()));
            contentValues.put("adSource", Integer.valueOf(campaignEx.getType()));
            contentValues.put("ad_call", campaignEx.getAdCall());
            contentValues.put("fc_a", Integer.valueOf(campaignEx.getFca()));
            contentValues.put("ad_url_list", campaignEx.getAd_url_list());
            contentValues.put("video_url", campaignEx.getVideoUrlEncode());
            contentValues.put(m.a.f, Long.valueOf(j));
            contentValues.put("video_state", Integer.valueOf(i));
            contentValues.put("video_download_start", Long.valueOf(System.currentTimeMillis() / 1000));
            contentValues.put("ad_bid_token", campaignEx.getBidToken());
            if (!TextUtils.isEmpty(str)) {
                contentValues.put("video_path", str);
            }
            if (b(campaignEx.getVideoUrlEncode(), campaignEx.getId())) {
                return 0L;
            }
            return getWritableDatabase().insert("video", null, contentValues);
        } catch (Exception unused) {
            return -1L;
        }
    }

    private synchronized boolean b(String str, String str2) {
        String str3;
        if (TextUtils.isEmpty(str2)) {
            str3 = "SELECT id FROM video WHERE video_url = '" + str + "'";
        } else {
            str3 = "SELECT id FROM video WHERE video_url = '" + str + "' AND id = " + str2;
        }
        Cursor cursorRawQuery = getReadableDatabase().rawQuery(str3, null);
        if (cursorRawQuery != null && cursorRawQuery.getCount() > 0) {
            try {
                cursorRawQuery.close();
            } catch (Exception unused) {
            }
            return true;
        }
        if (cursorRawQuery != null) {
            cursorRawQuery.close();
        }
        return false;
    }

    public final synchronized long a(String str, long j, int i) {
        int iUpdate = -1;
        try {
            if (getWritableDatabase() == null) {
                return -1;
            }
            ContentValues contentValues = new ContentValues();
            contentValues.put("pregeress_size", Long.valueOf(j));
            contentValues.put("video_state", Integer.valueOf(i));
            if (b(str, "")) {
                String str2 = "video_url = '" + str + "'";
                synchronized (new Object()) {
                    iUpdate = getWritableDatabase().update("video", contentValues, str2, null);
                }
            }
        } catch (Exception unused) {
        }
        return iUpdate;
    }

    public final synchronized long b(String str, long j) {
        int iUpdate = -1;
        try {
            if (getWritableDatabase() == null) {
                return -1;
            }
            ContentValues contentValues = new ContentValues();
            contentValues.put(m.a.f, Long.valueOf(j));
            if (b(str, "")) {
                String str2 = "video_url = '" + str + "'";
                synchronized (new Object()) {
                    iUpdate = getWritableDatabase().update("video", contentValues, str2, null);
                }
            }
        } catch (Exception unused) {
        }
        return iUpdate;
    }
}
