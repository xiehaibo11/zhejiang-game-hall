package com.mbridge.msdk.foundation.db;

import android.content.ContentValues;
import android.database.Cursor;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.Campaign;
import com.tkay.core.common.c.m;

public class s extends a<Campaign> {
    private static s a;

    private s(h hVar) {
        super(hVar);
    }

    public static s a(h hVar) {
        if (a == null) {
            synchronized (s.class) {
                if (a == null) {
                    a = new s(hVar);
                }
            }
        }
        return a;
    }

    /* JADX WARN: Removed duplicated region for block: B:52:0x00b7 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final synchronized com.mbridge.msdk.foundation.entity.o a(String str) {
        com.mbridge.msdk.foundation.entity.o oVar;
        Exception e;
        Cursor cursorRawQuery;
        Cursor cursor = null;
        oVar = null;
        com.mbridge.msdk.foundation.entity.o oVar2 = null;
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        try {
            cursorRawQuery = getReadableDatabase().rawQuery("SELECT * FROM video WHERE video_url = '" + str + "'", null);
            if (cursorRawQuery != null) {
                try {
                    try {
                        if (cursorRawQuery.getCount() > 0) {
                            oVar = new com.mbridge.msdk.foundation.entity.o();
                            while (cursorRawQuery.moveToNext()) {
                                try {
                                    oVar.a(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("video_url")));
                                    oVar.b(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("video_state")));
                                    oVar.b(cursorRawQuery.getLong(cursorRawQuery.getColumnIndex("pregeress_size")));
                                    oVar.a(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex(m.a.f)));
                                    oVar.b(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("video_path")));
                                    oVar.a(cursorRawQuery.getLong(cursorRawQuery.getColumnIndex("video_download_start")) * 1000);
                                } catch (Exception e2) {
                                    e = e2;
                                    z.d("VideoDao", e.getLocalizedMessage());
                                    if (cursorRawQuery != null) {
                                        try {
                                            cursorRawQuery.close();
                                        } catch (Exception unused) {
                                        }
                                    }
                                    oVar2 = oVar;
                                }
                            }
                            oVar2 = oVar;
                        }
                    } catch (Throwable th) {
                        th = th;
                        cursor = cursorRawQuery;
                        if (cursor != null) {
                            try {
                                cursor.close();
                            } catch (Exception unused2) {
                            }
                        }
                        throw th;
                    }
                } catch (Exception e3) {
                    e = e3;
                    oVar = null;
                }
            }
            if (cursorRawQuery != null) {
                try {
                    cursorRawQuery.close();
                } catch (Exception unused3) {
                }
            }
        } catch (Exception e4) {
            oVar = null;
            e = e4;
            cursorRawQuery = null;
        } catch (Throwable th2) {
            th = th2;
            if (cursor != null) {
            }
            throw th;
        }
        return oVar2;
    }

    /* JADX WARN: Removed duplicated region for block: B:34:0x00a0 A[EXC_TOP_SPLITTER, PHI: r0
      0x00a0: PHI (r0v3 android.database.Cursor) = (r0v2 android.database.Cursor), (r0v4 android.database.Cursor) binds: [B:24:0x00ab, B:17:0x009e] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final synchronized com.mbridge.msdk.foundation.entity.o a(String str, String str2) {
        Cursor cursorRawQuery = null;
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        com.mbridge.msdk.foundation.entity.o oVar = new com.mbridge.msdk.foundation.entity.o();
        try {
            cursorRawQuery = getReadableDatabase().rawQuery("SELECT * FROM video" + (" WHERE video_url = '" + str + "'"), null);
            if (cursorRawQuery != null && cursorRawQuery.getCount() > 0) {
                while (cursorRawQuery.moveToNext()) {
                    oVar.a(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("video_url")));
                    oVar.b(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("video_state")));
                    oVar.b(cursorRawQuery.getLong(cursorRawQuery.getColumnIndex("pregeress_size")));
                    oVar.a(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex(m.a.f)));
                    oVar.b(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("video_path")));
                    oVar.a(cursorRawQuery.getLong(cursorRawQuery.getColumnIndex("video_download_start")) * 1000);
                }
            }
        } catch (Exception unused) {
            if (cursorRawQuery != null) {
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
        if (cursorRawQuery != null) {
            try {
                cursorRawQuery.close();
            } catch (Exception unused3) {
            }
        }
        return oVar;
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
