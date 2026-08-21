package com.mbridge.msdk.foundation.db;

import android.content.ContentValues;
import android.database.Cursor;
import android.database.SQLException;
import android.database.sqlite.SQLiteDatabase;
import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.RewardPlus;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.interstitial.view.MBInterstitialActivity;
import com.mbridge.msdk.out.ApkDisplayInfo;
import com.mbridge.msdk.out.Campaign;
import com.tkay.basead.b.a;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.common.c.l;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;

/* JADX INFO: compiled from: CampaignDao.java */
/* JADX INFO: loaded from: classes2.dex */
public class f extends a<Campaign> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f3359a = f.class.getName();
    private static f b = null;
    private final String c;
    private final String d;
    private final String e;
    private final String f;
    private final String g;
    private final String h;
    private final String i;
    private final String j;
    private final String k;
    private final String l;
    private final String m;
    private final String n;
    private final String o;
    private final String p;
    private final String q;
    private final String r;

    protected f(h hVar) {
        super(hVar);
        this.c = "rid";
        this.d = "cid";
        this.e = "plct";
        this.f = "plctb";
        this.g = "timestamp";
        this.h = "ridCount";
        this.i = " WHERE ";
        this.j = " AND ";
        this.k = "SELECT ";
        this.l = "*";
        this.m = " FROM ";
        this.n = " AND readyState = '0'";
        this.o = " AND is_bid_campaign = 1";
        this.p = " order by ts ASC";
        this.q = " group by request_id";
        this.r = " group by bid_token";
    }

    public static f a(h hVar) {
        if (b == null) {
            synchronized (f.class) {
                if (b == null) {
                    b = new f(hVar);
                }
            }
        }
        return b;
    }

    public final synchronized void a(String str, int i, int i2) {
        try {
            String str2 = "unitid = " + str + " AND level = " + i + " AND adSource = " + i2;
            if (getWritableDatabase() == null) {
            } else {
                getWritableDatabase().delete(MBInterstitialActivity.INTENT_CAMAPIGN, str2, null);
            }
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
    }

    public final synchronized void a(String str, int i, int i2, boolean z) {
        String string;
        try {
            String str2 = "unitid = " + str + " AND level = " + i + " AND adSource = " + i2;
            StringBuilder sb = new StringBuilder();
            sb.append(str2);
            sb.append(" AND is_bid_campaign = ");
            sb.append(z ? 1 : 0);
            string = sb.toString();
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
        if (getWritableDatabase() == null) {
            return;
        }
        getWritableDatabase().delete(MBInterstitialActivity.INTENT_CAMAPIGN, string, null);
    }

    public final synchronized void a(String str, List<CampaignEx> list) {
        if (list != null) {
            if (list.size() > 0) {
                for (CampaignEx campaignEx : list) {
                    ContentValues contentValues = new ContentValues();
                    contentValues.put("readyState", (Integer) 2);
                    String str2 = "id = '" + campaignEx.getId() + "' AND unitid = " + str + " AND " + TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID + " = '" + campaignEx.getRequestId() + "'";
                    StringBuilder sb = new StringBuilder();
                    sb.append(str2);
                    sb.append(" AND is_bid_campaign = ");
                    sb.append(campaignEx.isBidCampaign() ? 1 : 0);
                    String string = sb.toString();
                    try {
                        SQLiteDatabase writableDatabase = getWritableDatabase();
                        if (writableDatabase != null) {
                            writableDatabase.update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues, string, null);
                        }
                    } catch (SQLException e) {
                        z.d("CampaignDao", e.getLocalizedMessage());
                    }
                }
            }
        }
    }

    public final synchronized void a(String str, List<CampaignEx> list, boolean z) {
        if (list != null) {
            if (list.size() > 0) {
                for (CampaignEx campaignEx : list) {
                    try {
                        if (campaignEx.getLoadTimeoutState() == 0) {
                            StringBuilder sb = new StringBuilder();
                            sb.append("unitid");
                            sb.append(" = '");
                            sb.append(str);
                            sb.append("' AND ");
                            sb.append("id");
                            sb.append(" = '");
                            sb.append(campaignEx.getId());
                            sb.append("' AND ");
                            sb.append(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID);
                            sb.append(" = '");
                            sb.append(campaignEx.getRequestId());
                            sb.append("'");
                            if (z) {
                                sb.append(" AND is_bid_campaign = 1");
                            } else {
                                sb.append(" AND is_bid_campaign = 0");
                            }
                            ContentValues contentValues = new ContentValues();
                            contentValues.put("readyState", (Integer) 2);
                            SQLiteDatabase writableDatabase = getWritableDatabase();
                            if (writableDatabase != null) {
                                writableDatabase.update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues, sb.toString(), null);
                            }
                        }
                    } catch (SQLException e) {
                        z.d("CampaignDao", e.getLocalizedMessage());
                    }
                }
            }
        }
    }

    public final synchronized void a(String str, List<CampaignEx> list, String str2, int i) {
        if (!TextUtils.isEmpty(str) && list != null && list.size() > 0 && !TextUtils.isEmpty(str2)) {
            SQLiteDatabase writableDatabase = getWritableDatabase();
            if (writableDatabase == null) {
                return;
            }
            try {
                for (CampaignEx campaignEx : list) {
                    if (campaignEx != null) {
                        String str3 = "unitid = '" + str + "' AND id = '" + campaignEx.getId() + "' AND " + TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID + " = '" + campaignEx.getRequestId() + "'";
                        ContentValues contentValues = new ContentValues();
                        contentValues.put(str2, Integer.valueOf(i));
                        writableDatabase.update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues, str3, null);
                    }
                }
            } catch (Exception unused) {
            }
        }
    }

    public final synchronized void a(String str, List<CampaignEx> list, List<CampaignEx> list2, boolean z) {
        if (getWritableDatabase() == null) {
            return;
        }
        try {
            if (list != null) {
                try {
                    if (list.size() > 0) {
                        for (CampaignEx campaignEx : list) {
                            try {
                                ContentValues contentValues = new ContentValues();
                                contentValues.put("readyState", (Integer) 0);
                                String str2 = "unitid = '" + str + "' AND id = '" + campaignEx.getId() + "' AND " + TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID + " = '" + campaignEx.getRequestId() + "'";
                                getWritableDatabase().update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues, z ? str2 + " AND is_bid_campaign = 1" : str2 + " AND is_bid_campaign = 0", null);
                            } catch (Exception e) {
                                z.d("CampaignDao", e.getLocalizedMessage());
                            }
                        }
                    }
                } catch (Exception e2) {
                    z.d("CampaignDao", e2.getLocalizedMessage());
                }
            }
            if (list2 != null && list2.size() > 0) {
                for (CampaignEx campaignEx2 : list2) {
                    try {
                        if (campaignEx2.getLoadTimeoutState() == 0) {
                            StringBuilder sb = new StringBuilder();
                            sb.append("unitid");
                            sb.append(" = '");
                            sb.append(str);
                            sb.append("' AND ");
                            sb.append("id");
                            sb.append(" = '");
                            sb.append(campaignEx2.getId());
                            sb.append("' AND ");
                            sb.append(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID);
                            sb.append(" = '");
                            sb.append(campaignEx2.getRequestId());
                            sb.append("'");
                            if (z) {
                                sb.append(" AND is_bid_campaign = 1");
                            } else {
                                sb.append(" AND is_bid_campaign = 0");
                            }
                            ContentValues contentValues2 = new ContentValues();
                            contentValues2.put("readyState", (Integer) 2);
                            getWritableDatabase().update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues2, sb.toString(), null);
                        }
                    } catch (SQLException e3) {
                        z.d("CampaignDao", e3.getLocalizedMessage());
                    }
                }
            }
        } catch (Throwable th) {
            throw th;
        }
    }

    public final synchronized void b(String str, List<CampaignEx> list) {
        if (list != null) {
            if (list.size() > 0) {
                for (CampaignEx campaignEx : list) {
                    try {
                        ContentValues contentValues = new ContentValues();
                        contentValues.put("readyState", (Integer) 0);
                        SQLiteDatabase writableDatabase = getWritableDatabase();
                        if (writableDatabase != null) {
                            writableDatabase.update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues, "unitid = '" + str + "' AND id = '" + campaignEx.getId() + "' AND " + TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID + " = '" + campaignEx.getRequestId() + "'", null);
                        }
                    } catch (Exception e) {
                        z.d("CampaignDao", e.getLocalizedMessage());
                    }
                }
            }
        }
    }

    public final synchronized void a(String str, String str2) {
        try {
            String str3 = "id = '" + str + "' AND unitid = " + str2;
            if (getWritableDatabase() == null) {
            } else {
                getWritableDatabase().delete(MBInterstitialActivity.INTENT_CAMAPIGN, str3, null);
            }
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
    }

    public final synchronized void a(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        try {
            SQLiteDatabase writableDatabase = getWritableDatabase();
            if (writableDatabase != null) {
                writableDatabase.delete(MBInterstitialActivity.INTENT_CAMAPIGN, "unitid = '" + str + "' AND readyState = 2", null);
            }
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
    }

    public final synchronized List<CampaignEx> b(String str) {
        try {
            Cursor cursorRawQuery = getReadableDatabase().rawQuery("SELECT * FROM " + MBInterstitialActivity.INTENT_CAMAPIGN + " WHERE unitid = '" + str + "' AND readyState = 2", null);
            if (cursorRawQuery == null || cursorRawQuery.getCount() <= 0) {
                if (cursorRawQuery != null) {
                    cursorRawQuery.close();
                }
                return null;
            }
            ArrayList arrayList = new ArrayList();
            while (cursorRawQuery.moveToNext()) {
                arrayList.add(a(cursorRawQuery));
            }
            if (cursorRawQuery != null) {
                cursorRawQuery.close();
            }
            return arrayList;
        } catch (Exception unused) {
            return null;
        } catch (Throwable unused2) {
            return null;
        }
    }

    public final synchronized void a(List<CampaignEx> list, String str) {
        if (list != null) {
            if (list.size() > 0) {
                for (CampaignEx campaignEx : list) {
                    try {
                        ContentValues contentValues = new ContentValues();
                        contentValues.put("readyState", (Integer) 2);
                        SQLiteDatabase writableDatabase = getWritableDatabase();
                        if (writableDatabase != null) {
                            writableDatabase.update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues, "unitid = '" + str + "' AND id = '" + campaignEx.getId() + "' AND " + TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID + " = '" + campaignEx.getRequestId() + "'", null);
                        }
                    } catch (SQLException e) {
                        z.d("CampaignDao", e.getLocalizedMessage());
                    }
                }
            }
        }
    }

    public final synchronized void a(String str, String str2, boolean z, String str3) {
        String string;
        try {
            StringBuilder sb = new StringBuilder();
            sb.append("id = '");
            sb.append(str);
            sb.append("' AND ");
            sb.append("unitid");
            sb.append(" = ");
            sb.append(str2);
            sb.append(" AND ");
            sb.append("is_bid_campaign");
            sb.append(" = ");
            sb.append(z ? "1" : "0");
            sb.append(" AND ");
            sb.append(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID);
            sb.append(" = '");
            sb.append(str3);
            sb.append("'");
            string = sb.toString();
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
        if (getWritableDatabase() == null) {
            return;
        }
        ContentValues contentValues = new ContentValues();
        contentValues.put("readyState", (Integer) 2);
        getWritableDatabase().update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues, string, null);
    }

    public final synchronized void b(String str, String str2) {
        try {
            if (getWritableDatabase() == null) {
                return;
            }
            String str3 = "id = '" + str + "' AND " + TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID + " = '" + str2 + "'";
            ContentValues contentValues = new ContentValues();
            contentValues.put("readyState", (Integer) 2);
            getWritableDatabase().update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues, str3, null);
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
    }

    public final synchronized void a(String str, String str2, int i, int i2, boolean z) {
        String str3;
        try {
            String str4 = "id = '" + str + "' AND unitid = " + str2 + " AND level = " + i + " AND adSource = " + i2;
            if (z) {
                str3 = str4 + " AND is_bid_campaign = 1";
            } else {
                str3 = str4 + " AND is_bid_campaign = 0";
            }
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
        if (getWritableDatabase() == null) {
            return;
        }
        getWritableDatabase().delete(MBInterstitialActivity.INTENT_CAMAPIGN, str3, null);
    }

    public final synchronized void c(String str) {
        String str2;
        try {
            str2 = "unitid = " + str;
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
        if (getWritableDatabase() == null) {
            return;
        }
        getWritableDatabase().delete(MBInterstitialActivity.INTENT_CAMAPIGN, str2, null);
    }

    public final synchronized void a(String str, int i, boolean z) {
        String str2;
        try {
            if (z) {
                str2 = "placement_id = " + str + " AND ad_type = " + i;
            } else {
                str2 = "ad_type = " + i;
            }
            if (getWritableDatabase() == null) {
            } else {
                getWritableDatabase().delete(MBInterstitialActivity.INTENT_CAMAPIGN, str2, null);
            }
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
    }

    public final synchronized void d(String str) {
        try {
            String str2 = "unitid = " + str + " AND short_ctime<" + (System.currentTimeMillis() - 604800000);
            if (getWritableDatabase() == null) {
            } else {
                getWritableDatabase().delete(MBInterstitialActivity.INTENT_CAMAPIGN, str2, null);
            }
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
    }

    public final synchronized void a(String str, ContentValues contentValues) {
        try {
            getWritableDatabase().update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues, "id = ?", new String[]{str});
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:71:0x025b  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final synchronized java.lang.String e(java.lang.String r37) {
        /*
            Method dump skipped, instruction units count: 650
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.foundation.db.f.e(java.lang.String):java.lang.String");
    }

    public final synchronized void a() {
        try {
            String str = "ts<" + (System.currentTimeMillis() - 3600000) + " AND ts>0";
            if (getWritableDatabase() != null) {
                getWritableDatabase().delete(MBInterstitialActivity.INTENT_CAMAPIGN, str, null);
            }
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
    }

    public final synchronized void a(long j, String str) {
        String str2;
        String[] strArr;
        try {
            long jCurrentTimeMillis = System.currentTimeMillis();
            str2 = "(plctb>0 and (plctb* 1000+ts)<" + jCurrentTimeMillis + ") or (plctb<=0 and ts<" + (jCurrentTimeMillis - j) + ") and unitid=?";
            strArr = new String[]{str};
        } catch (Exception e) {
            z.d(f3359a, e.getMessage());
        }
        if (getWritableDatabase() != null) {
            getWritableDatabase().delete(MBInterstitialActivity.INTENT_CAMAPIGN, str2, strArr);
        }
    }

    public final synchronized void b(long j, String str) {
        try {
            String str2 = "ts<" + (System.currentTimeMillis() - j) + " and unitid=?";
            String[] strArr = {str};
            if (getWritableDatabase() != null) {
                getWritableDatabase().delete(MBInterstitialActivity.INTENT_CAMAPIGN, str2, strArr);
            }
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
    }

    public final synchronized void a(List<CampaignEx> list, String str, String str2, int i) {
        if (list != null) {
            if (list.size() != 0) {
                if (getWritableDatabase() == null) {
                    return;
                }
                Iterator<CampaignEx> it = list.iterator();
                while (it.hasNext()) {
                    a(it.next(), str, str2, i);
                }
            }
        }
    }

    private synchronized long a(CampaignEx campaignEx, String str, String str2, int i) {
        if (campaignEx == null) {
            return 0L;
        }
        try {
            if (getWritableDatabase() == null) {
                return -1L;
            }
            ContentValues contentValues = new ContentValues();
            if (campaignEx.getPv_urls() != null && campaignEx.getPv_urls().size() > 0) {
                JSONArray jSONArray = new JSONArray();
                Iterator<String> it = campaignEx.getPv_urls().iterator();
                while (it.hasNext()) {
                    jSONArray.put(it.next());
                }
                contentValues.put("pv_urls", jSONArray.toString());
            }
            contentValues.put("id", campaignEx.getId());
            if (TextUtils.isEmpty(str)) {
                str = "";
            }
            contentValues.put(l.a.c, str);
            contentValues.put("unitid", str2);
            contentValues.put("number_rating", Integer.valueOf(campaignEx.getNumberRating()));
            contentValues.put("tab", Integer.valueOf(campaignEx.getTab()));
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
            contentValues.put("wtick", Integer.valueOf(campaignEx.getWtick()));
            contentValues.put(a.C0386a.o, campaignEx.getDeepLinkURL());
            contentValues.put("user_activation", Boolean.toString(campaignEx.getUserActivation()));
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
            contentValues.put("fc_b", Integer.valueOf(campaignEx.getFcb()));
            contentValues.put("ad_url_list", campaignEx.getAd_url_list());
            contentValues.put("video_url", campaignEx.getVideoUrlEncode());
            contentValues.put("video_size", Integer.valueOf(campaignEx.getVideoSize()));
            contentValues.put("video_length", Integer.valueOf(campaignEx.getVideoLength()));
            contentValues.put("video_resolution", campaignEx.getVideoResolution());
            contentValues.put("endcard_click_result", Integer.valueOf(campaignEx.getEndcard_click_result()));
            contentValues.put("watch_mile", Integer.valueOf(campaignEx.getWatchMile()));
            contentValues.put("view_com_time", Integer.valueOf(campaignEx.getVideoCompleteTime()));
            contentValues.put("advImp", campaignEx.getAdvImp());
            contentValues.put("bty", Integer.valueOf(campaignEx.getBty()));
            contentValues.put("t_imp", Integer.valueOf(campaignEx.getTImp()));
            contentValues.put("guidelines", campaignEx.getGuidelines());
            contentValues.put("offer_type", Integer.valueOf(campaignEx.getOfferType()));
            contentValues.put("html_url", campaignEx.getHtmlUrl());
            contentValues.put("end_screen_url", campaignEx.getEndScreenUrl());
            contentValues.put("reward_amount", Integer.valueOf(campaignEx.getRewardAmount()));
            contentValues.put("reward_name", campaignEx.getRewardName());
            contentValues.put("reward_play_status", Integer.valueOf(campaignEx.getRewardPlayStatus()));
            contentValues.put("adv_id", campaignEx.getAdvId());
            contentValues.put("ttc_ct2", Integer.valueOf(campaignEx.getTtc_ct2() * 1000));
            contentValues.put("ttc_type", Integer.valueOf(campaignEx.getTtc_type()));
            contentValues.put("retarget", Integer.valueOf(campaignEx.getRetarget_offer()));
            contentValues.put("native_ad_tracking", campaignEx.getNativeVideoTrackingString());
            contentValues.put("playable_ads_without_video", Integer.valueOf(campaignEx.getPlayable_ads_without_video()));
            contentValues.put("endcard_url", campaignEx.getendcard_url());
            contentValues.put("video_end_type", Integer.valueOf(campaignEx.getVideo_end_type()));
            contentValues.put("loopback", campaignEx.getLoopbackString());
            contentValues.put("md5_file", campaignEx.getVideoMD5Value());
            contentValues.put("nv_t2", Integer.valueOf(campaignEx.getNvT2()));
            contentValues.put("gif_url", campaignEx.getGifUrl());
            if (campaignEx.getRewardTemplateMode() != null) {
                contentValues.put("reward_teamplate", campaignEx.getRewardTemplateMode().a());
            }
            contentValues.put("c_coi", Integer.valueOf(campaignEx.getClickTimeOutInterval()));
            contentValues.put("c_ua", Integer.valueOf(campaignEx.getcUA()));
            contentValues.put("imp_ua", Integer.valueOf(campaignEx.getImpUA()));
            contentValues.put("jm_pd", Integer.valueOf(campaignEx.getJmPd()));
            contentValues.put("is_deleted", Integer.valueOf(campaignEx.getIsDeleted()));
            contentValues.put("is_click", Integer.valueOf(campaignEx.getIsClick()));
            contentValues.put("is_add_sucesful", Integer.valueOf(campaignEx.getIsAddSuccesful()));
            contentValues.put("short_ctime", String.valueOf(System.currentTimeMillis()));
            contentValues.put("ia_icon", campaignEx.getKeyIaIcon());
            contentValues.put("ia_url", campaignEx.getKeyIaUrl());
            contentValues.put("ia_rst", Integer.valueOf(campaignEx.getKeyIaRst()));
            contentValues.put("ia_ori", Integer.valueOf(campaignEx.getKeyIaOri()));
            contentValues.put("ad_type", Integer.valueOf(campaignEx.getAdType()));
            contentValues.put("ia_ext1", campaignEx.getIa_ext1());
            contentValues.put("ia_ext2", campaignEx.getIa_ext2());
            contentValues.put("is_download_zip", Integer.valueOf(campaignEx.getIsDownLoadZip()));
            contentValues.put("ia_cache", campaignEx.getInteractiveCache());
            contentValues.put("gh_id", campaignEx.getGhId());
            contentValues.put("gh_path", campaignEx.getGhPath());
            contentValues.put("bind_id", campaignEx.getBindId());
            contentValues.put("oc_time", Integer.valueOf(campaignEx.getOc_time()));
            contentValues.put("oc_type", Integer.valueOf(campaignEx.getOc_type()));
            contentValues.put("t_list", campaignEx.getT_list());
            CampaignEx.a adchoice = campaignEx.getAdchoice();
            if (adchoice != null) {
                contentValues.put("adchoice", adchoice.c());
                contentValues.put("adchoice_size_height", Integer.valueOf(adchoice.b()));
                contentValues.put("adchoice_size_width", Integer.valueOf(adchoice.a()));
            }
            contentValues.put("plct", Long.valueOf(campaignEx.getPlct()));
            contentValues.put("plctb", Long.valueOf(campaignEx.getPlctb()));
            contentValues.put("ad_html", campaignEx.getAdHtml());
            contentValues.put("ad_zip", campaignEx.getAdZip());
            contentValues.put("banner_url", campaignEx.getBannerUrl());
            contentValues.put("banner_html", campaignEx.getBannerHtml());
            contentValues.put("creative_id", Long.valueOf(campaignEx.getCreativeId()));
            contentValues.put("is_bid_campaign", Boolean.valueOf(campaignEx.isBidCampaign()));
            contentValues.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BID_TOKEN, campaignEx.getBidToken());
            contentValues.put("mraid", campaignEx.getMraid());
            contentValues.put("is_mraid_campaign", Boolean.valueOf(campaignEx.isMraid()));
            contentValues.put("omid", campaignEx.getOmid());
            contentValues.put("mof_tplid", Integer.valueOf(campaignEx.getMof_tplid()));
            contentValues.put("ready_rate", Integer.valueOf(campaignEx.getReady_rate()));
            if (campaignEx.getRewardPlus() != null && campaignEx.getRewardPlus().toJsonObject() != null) {
                contentValues.put("rw_pl", campaignEx.getRewardPlus().toJsonObject().toString());
            }
            if (campaignEx.getApkDisplayInfo() != null && campaignEx.getApkDisplayInfo().toJson() != null) {
                contentValues.put("apk_info", campaignEx.getApkDisplayInfo().toJson().toString());
            }
            contentValues.put("ext_data", campaignEx.getExt_data());
            contentValues.put("nscpt", Integer.valueOf(campaignEx.getNscpt()));
            contentValues.put("mof_template_url", campaignEx.getMof_template_url());
            contentValues.put("req_ext_data", campaignEx.getReq_ext_data());
            contentValues.put("readyState", Integer.valueOf(campaignEx.getReadyState()));
            contentValues.put(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, campaignEx.getRequestId());
            contentValues.put("load_timeout", Integer.valueOf(campaignEx.getLoadTimeoutState()));
            contentValues.put("apk_alt", Integer.valueOf(campaignEx.getApkAlt()));
            contentValues.put("atat_type", Integer.valueOf(campaignEx.getAtatType()));
            contentValues.put("ntbarpasbl", Integer.valueOf(campaignEx.getNtbarpasbl()));
            contentValues.put("ntbarpt", Integer.valueOf(campaignEx.getNtbarpt()));
            contentValues.put("akdlui", campaignEx.getAkdlui());
            contentValues.put("flb", Integer.valueOf(campaignEx.getFlb()));
            contentValues.put("adspace_t", Integer.valueOf(campaignEx.getAdSpaceT()));
            contentValues.put("cbd", Integer.valueOf(campaignEx.getCbd()));
            contentValues.put("vst", Integer.valueOf(campaignEx.getVst()));
            contentValues.put("flb_skiptime", Integer.valueOf(campaignEx.getFlbSkipTime()));
            contentValues.put("vcn", Integer.valueOf(campaignEx.getVcn()));
            contentValues.put("token_r", Integer.valueOf(campaignEx.getTokenRule()));
            contentValues.put("encrypt_p", campaignEx.getEncryptPrice());
            contentValues.put("vck_t", Integer.valueOf(campaignEx.getVideoCheckType()));
            contentValues.put("vctn_t", Integer.valueOf(campaignEx.getVideoCtnType()));
            contentValues.put("rs_ignc_r", campaignEx.getRsIgnoreCheckRuleString());
            contentValues.put("tp_offer", Integer.valueOf(campaignEx.getTpOffer()));
            contentValues.put("fac", Integer.valueOf(campaignEx.getFac()));
            if (campaignEx.getAabEntity() != null) {
                contentValues.put(CampaignEx.JSON_KEY_AAB, campaignEx.getAabEntity().toJson().toString());
            }
            return getWritableDatabase().insert(MBInterstitialActivity.INTENT_CAMAPIGN, null, contentValues);
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
            return -1L;
        }
    }

    public final synchronized long a(CampaignEx campaignEx, String str, int i) {
        String str2;
        if (campaignEx == null) {
            return 0L;
        }
        try {
            if (getWritableDatabase() == null) {
                return -1L;
            }
            ContentValues contentValues = new ContentValues();
            contentValues.put("id", campaignEx.getId());
            if (campaignEx.getPv_urls() != null && campaignEx.getPv_urls().size() > 0) {
                JSONArray jSONArray = new JSONArray();
                Iterator<String> it = campaignEx.getPv_urls().iterator();
                while (it.hasNext()) {
                    jSONArray.put(it.next());
                }
                contentValues.put("pv_urls", jSONArray.toString());
            }
            contentValues.put("unitid", str);
            contentValues.put("number_rating", Integer.valueOf(campaignEx.getNumberRating()));
            contentValues.put(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, campaignEx.getRequestId());
            contentValues.put("tab", Integer.valueOf(campaignEx.getTab()));
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
            contentValues.put("wtick", Integer.valueOf(campaignEx.getWtick()));
            contentValues.put(a.C0386a.o, campaignEx.getDeepLinkURL());
            contentValues.put("user_activation", Boolean.toString(campaignEx.getUserActivation()));
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
            contentValues.put("fc_b", Integer.valueOf(campaignEx.getFcb()));
            contentValues.put("ad_url_list", campaignEx.getAd_url_list());
            contentValues.put("video_url", campaignEx.getVideoUrlEncode());
            contentValues.put("video_size", Integer.valueOf(campaignEx.getVideoSize()));
            contentValues.put("video_length", Integer.valueOf(campaignEx.getVideoLength()));
            contentValues.put("video_resolution", campaignEx.getVideoResolution());
            contentValues.put("endcard_click_result", Integer.valueOf(campaignEx.getEndcard_click_result()));
            contentValues.put("watch_mile", Integer.valueOf(campaignEx.getWatchMile()));
            contentValues.put("view_com_time", Integer.valueOf(campaignEx.getVideoCompleteTime()));
            contentValues.put("advImp", campaignEx.getAdvImp());
            contentValues.put("bty", Integer.valueOf(campaignEx.getBty()));
            contentValues.put("t_imp", Integer.valueOf(campaignEx.getTImp()));
            contentValues.put("guidelines", campaignEx.getGuidelines());
            contentValues.put("offer_type", Integer.valueOf(campaignEx.getOfferType()));
            contentValues.put("html_url", campaignEx.getHtmlUrl());
            contentValues.put("end_screen_url", campaignEx.getEndScreenUrl());
            contentValues.put("reward_amount", Integer.valueOf(campaignEx.getRewardAmount()));
            contentValues.put("reward_name", campaignEx.getRewardName());
            contentValues.put("reward_play_status", Integer.valueOf(campaignEx.getRewardPlayStatus()));
            contentValues.put("adv_id", campaignEx.getAdvId());
            contentValues.put("ttc_ct2", Integer.valueOf(campaignEx.getTtc_ct2() * 1000));
            contentValues.put("ttc_type", Integer.valueOf(campaignEx.getTtc_type()));
            contentValues.put("retarget", Integer.valueOf(campaignEx.getRetarget_offer()));
            contentValues.put("native_ad_tracking", campaignEx.getNativeVideoTrackingString());
            contentValues.put("playable_ads_without_video", Integer.valueOf(campaignEx.getPlayable_ads_without_video()));
            contentValues.put("endcard_url", campaignEx.getendcard_url());
            contentValues.put("video_end_type", Integer.valueOf(campaignEx.getVideo_end_type()));
            contentValues.put("loopback", campaignEx.getLoopbackString());
            contentValues.put("md5_file", campaignEx.getVideoMD5Value());
            contentValues.put("nv_t2", Integer.valueOf(campaignEx.getNvT2()));
            contentValues.put("gif_url", campaignEx.getGifUrl());
            if (campaignEx.getRewardTemplateMode() != null) {
                contentValues.put("reward_teamplate", campaignEx.getRewardTemplateMode().a());
            }
            contentValues.put("c_coi", Integer.valueOf(campaignEx.getClickTimeOutInterval()));
            contentValues.put("c_ua", Integer.valueOf(campaignEx.getcUA()));
            contentValues.put("imp_ua", Integer.valueOf(campaignEx.getImpUA()));
            contentValues.put("jm_pd", Integer.valueOf(campaignEx.getJmPd()));
            contentValues.put("is_deleted", Integer.valueOf(campaignEx.getIsDeleted()));
            contentValues.put("is_click", Integer.valueOf(campaignEx.getIsClick()));
            contentValues.put("is_add_sucesful", Integer.valueOf(campaignEx.getIsAddSuccesful()));
            contentValues.put("short_ctime", String.valueOf(System.currentTimeMillis()));
            contentValues.put("ia_icon", campaignEx.getKeyIaIcon());
            contentValues.put("ia_url", campaignEx.getKeyIaUrl());
            contentValues.put("ia_rst", Integer.valueOf(campaignEx.getKeyIaRst()));
            contentValues.put("ia_ori", Integer.valueOf(campaignEx.getKeyIaOri()));
            contentValues.put("ad_type", Integer.valueOf(campaignEx.getAdType()));
            contentValues.put("ia_ext1", campaignEx.getIa_ext1());
            contentValues.put("ia_ext2", campaignEx.getIa_ext2());
            contentValues.put("is_download_zip", Integer.valueOf(campaignEx.getIsDownLoadZip()));
            contentValues.put("ia_cache", campaignEx.getInteractiveCache());
            contentValues.put("gh_id", campaignEx.getGhId());
            contentValues.put("gh_path", campaignEx.getGhPath());
            contentValues.put("bind_id", campaignEx.getBindId());
            contentValues.put("oc_time", Integer.valueOf(campaignEx.getOc_time()));
            contentValues.put("oc_type", Integer.valueOf(campaignEx.getOc_type()));
            contentValues.put("t_list", campaignEx.getT_list());
            CampaignEx.a adchoice = campaignEx.getAdchoice();
            if (adchoice != null) {
                contentValues.put("adchoice", adchoice.c());
                contentValues.put("adchoice_size_height", Integer.valueOf(adchoice.b()));
                contentValues.put("adchoice_size_width", Integer.valueOf(adchoice.a()));
            }
            contentValues.put("plct", Long.valueOf(campaignEx.getPlct()));
            contentValues.put("plctb", Long.valueOf(campaignEx.getPlctb()));
            contentValues.put("ad_html", campaignEx.getAdHtml());
            contentValues.put("ad_zip", campaignEx.getAdZip());
            contentValues.put("banner_url", campaignEx.getBannerUrl());
            contentValues.put("banner_html", campaignEx.getBannerHtml());
            contentValues.put("creative_id", Long.valueOf(campaignEx.getCreativeId()));
            contentValues.put("is_bid_campaign", Boolean.valueOf(campaignEx.isBidCampaign()));
            contentValues.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BID_TOKEN, campaignEx.getBidToken());
            contentValues.put("mraid", campaignEx.getMraid());
            contentValues.put("is_mraid_campaign", Boolean.valueOf(campaignEx.isMraid()));
            contentValues.put("omid", campaignEx.getOmid());
            contentValues.put("mof_tplid", Integer.valueOf(campaignEx.getMof_tplid()));
            if (campaignEx.getRewardPlus() != null && campaignEx.getRewardPlus().toJsonObject() != null) {
                contentValues.put("rw_pl", campaignEx.getRewardPlus().toJsonObject().toString());
            }
            if (campaignEx.getApkDisplayInfo() != null && campaignEx.getApkDisplayInfo().toJson() != null) {
                contentValues.put("apk_info", campaignEx.getApkDisplayInfo().toJson().toString());
            }
            contentValues.put("ready_rate", Integer.valueOf(campaignEx.getReady_rate()));
            contentValues.put("ext_data", campaignEx.getExt_data());
            contentValues.put("nscpt", Integer.valueOf(campaignEx.getNscpt()));
            contentValues.put("mof_template_url", campaignEx.getMof_template_url());
            contentValues.put("req_ext_data", campaignEx.getReq_ext_data());
            contentValues.put("readyState", Integer.valueOf(campaignEx.getReadyState()));
            contentValues.put("load_timeout", Integer.valueOf(campaignEx.getLoadTimeoutState()));
            contentValues.put(l.a.c, campaignEx.getPlacementId());
            contentValues.put("apk_alt", Integer.valueOf(campaignEx.getApkAlt()));
            contentValues.put("atat_type", Integer.valueOf(campaignEx.getAtatType()));
            contentValues.put("ntbarpasbl", Integer.valueOf(campaignEx.getNtbarpasbl()));
            contentValues.put("ntbarpt", Integer.valueOf(campaignEx.getNtbarpt()));
            contentValues.put("akdlui", campaignEx.getAkdlui());
            contentValues.put("flb", Integer.valueOf(campaignEx.getFlb()));
            contentValues.put("adspace_t", Integer.valueOf(campaignEx.getAdSpaceT()));
            contentValues.put("cbd", Integer.valueOf(campaignEx.getCbd()));
            contentValues.put("vst", Integer.valueOf(campaignEx.getVst()));
            contentValues.put("flb_skiptime", Integer.valueOf(campaignEx.getFlbSkipTime()));
            contentValues.put("vcn", Integer.valueOf(campaignEx.getVcn()));
            contentValues.put("token_r", Integer.valueOf(campaignEx.getTokenRule()));
            contentValues.put("encrypt_p", campaignEx.getEncryptPrice());
            contentValues.put("vck_t", Integer.valueOf(campaignEx.getVideoCheckType()));
            contentValues.put("vctn_t", Integer.valueOf(campaignEx.getVideoCtnType()));
            contentValues.put("rs_ignc_r", campaignEx.getRsIgnoreCheckRuleString());
            contentValues.put("tp_offer", Integer.valueOf(campaignEx.getTpOffer()));
            contentValues.put("fac", Integer.valueOf(campaignEx.getFac()));
            if (campaignEx.getAabEntity() != null) {
                contentValues.put(CampaignEx.JSON_KEY_AAB, campaignEx.getAabEntity().toJson().toString());
            }
            if (a(campaignEx.getId(), campaignEx.getTab(), str, i, campaignEx.getType(), campaignEx.isBidCampaign())) {
                if (campaignEx.isBidCampaign()) {
                    str2 = "unitid = " + str + " AND is_bid_campaign = 1";
                } else {
                    str2 = "id = " + campaignEx.getId() + " AND unitid = " + str + " AND is_bid_campaign = 0";
                }
                return getWritableDatabase().update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues, str2, null);
            }
            return getWritableDatabase().insert(MBInterstitialActivity.INTENT_CAMAPIGN, null, contentValues);
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
            return -1L;
        }
    }

    public final synchronized void b(final List<CampaignEx> list, final String str) {
        if (list != null) {
            if (list.size() != 0) {
                new Thread(new Runnable() { // from class: com.mbridge.msdk.foundation.db.f.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        Iterator it = list.iterator();
                        while (it.hasNext()) {
                            f.this.a((CampaignEx) it.next(), str, 0);
                        }
                    }
                }).start();
            }
        }
    }

    public final synchronized int a(String str, long j) {
        try {
            com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
            if (aVarB == null) {
                aVarB = com.mbridge.msdk.c.b.a().b();
            }
            long jW = aVarB.W() * 1000;
            a(jW, str);
            List<CampaignEx> listA = a(str, 0, 0, 1, false);
            if (listA != null && !listA.isEmpty()) {
                Iterator<CampaignEx> it = listA.iterator();
                while (it.hasNext()) {
                    if (!it.next().isSpareOffer(j, jW)) {
                        return 0;
                    }
                }
                return 1;
            }
            return -1;
        } catch (Exception unused) {
            return 0;
        }
    }

    public final synchronized boolean a(String str, int i, String str2, int i2, int i3, boolean z) {
        String str3;
        if (z) {
            str3 = "SELECT id FROM campaign WHERE unitid = " + str2 + " AND is_bid_campaign = 1";
        } else {
            str3 = "SELECT id FROM campaign WHERE id='" + str + "' AND tab" + ContainerUtils.KEY_VALUE_DELIMITER + i + " AND unitid = '" + str2 + "' AND level = " + i2 + " AND adSource = " + i3 + " AND is_bid_campaign = 0";
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
            try {
                cursorRawQuery.close();
            } catch (Exception unused2) {
            }
        }
        return false;
    }

    public final List<CampaignEx> a(String str, int i, int i2, int i3) {
        String str2;
        String str3 = " WHERE unitid = '" + str + "' AND level = " + i2 + " AND adSource = " + i3;
        if (i > 0) {
            str2 = " LIMIT " + i;
        } else {
            str2 = "";
        }
        return h("SELECT * FROM campaign" + str3 + str2);
    }

    public final synchronized List<CampaignEx> a(String str, int i, int i2, int i3, boolean z) {
        String str2;
        String str3;
        String str4 = " WHERE unitid = '" + str + "' AND level = " + i2 + " AND adSource = " + i3;
        if (z) {
            str2 = str4 + " AND is_bid_campaign = 1";
        } else {
            str2 = str4 + " AND is_bid_campaign = 0";
        }
        str3 = "";
        if (i > 0) {
            str3 = " LIMIT " + i;
        }
        return h("SELECT * FROM campaign" + str2 + str3);
    }

    public final synchronized List<CampaignEx> a(String str, int i, int i2, int i3, String str2) {
        String str3;
        String str4;
        str3 = ((" WHERE unitid = '" + str + "' AND level = " + i2 + " AND adSource = " + i3) + " AND is_bid_campaign = 1") + " AND readyState = '0'";
        if (!TextUtils.isEmpty(str2)) {
            str3 = str3 + " AND request_id = '" + str2 + "'";
        }
        str4 = "";
        if (i > 0) {
            str4 = " LIMIT " + i;
        }
        return h("SELECT * FROM campaign" + (str3 + " order by ts ASC") + str4);
    }

    public final synchronized List<CampaignEx> b(String str, int i, int i2, int i3) {
        String str2;
        String str3;
        str2 = " WHERE unitid = '" + str + "' AND level = " + i2 + " AND adSource = " + i3;
        str3 = "";
        if (i > 0) {
            str3 = " LIMIT " + i;
        }
        return h("SELECT * FROM campaign" + str2 + str3);
    }

    /* JADX WARN: Removed duplicated region for block: B:62:0x06cd A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:69:0x06b1 A[EXC_TOP_SPLITTER, PHI: r10
      0x06b1: PHI (r10v8 android.database.Cursor) = (r10v7 android.database.Cursor), (r10v9 android.database.Cursor) binds: [B:48:0x06c5, B:40:0x06af] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private synchronized java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> h(java.lang.String r10) {
        /*
            Method dump skipped, instruction units count: 1748
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.foundation.db.f.h(java.lang.String):java.util.List");
    }

    /* JADX WARN: Removed duplicated region for block: B:47:0x0121 A[EXC_TOP_SPLITTER, PHI: r1
      0x0121: PHI (r1v8 android.database.Cursor) = (r1v7 android.database.Cursor), (r1v9 android.database.Cursor) binds: [B:33:0x0134, B:23:0x011f] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final java.util.List<com.mbridge.msdk.foundation.entity.c> f(java.lang.String r10) {
        /*
            Method dump skipped, instruction units count: 318
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.foundation.db.f.f(java.lang.String):java.util.List");
    }

    public final int c(String str, String str2) {
        String str3;
        if (!TextUtils.isEmpty(str)) {
            str3 = "unitid = '" + str2 + "' AND " + TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID + " = '" + str + "' AND is_bid_campaign = 1";
        } else {
            str3 = "unitid = '" + str2 + "' AND is_bid_campaign = 1";
        }
        String str4 = str3 + " AND readyState = '0'";
        try {
            ContentValues contentValues = new ContentValues();
            contentValues.put("readyState", (Integer) 2);
            return getWritableDatabase().update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues, str4, null);
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
            return 0;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:44:0x010e A[EXC_TOP_SPLITTER, PHI: r1
      0x010e: PHI (r1v3 android.database.Cursor) = (r1v2 android.database.Cursor), (r1v4 android.database.Cursor) binds: [B:31:0x0121, B:21:0x010c] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.entity.c> g(java.lang.String r11) {
        /*
            Method dump skipped, instruction units count: 299
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.foundation.db.f.g(java.lang.String):java.util.concurrent.ConcurrentHashMap");
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:67:0x07a7 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:71:0x0784 A[EXC_TOP_SPLITTER, PHI: r9
      0x0784: PHI (r9v11 ??) = (r9v10 ??), (r9v13 ??) binds: [B:55:0x07a0, B:39:0x0782] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /* JADX WARN: Type inference failed for: r1v5, types: [android.database.sqlite.SQLiteDatabase] */
    /* JADX WARN: Type inference failed for: r9v10 */
    /* JADX WARN: Type inference failed for: r9v11, types: [android.database.Cursor] */
    /* JADX WARN: Type inference failed for: r9v13, types: [android.database.Cursor] */
    /* JADX WARN: Type inference failed for: r9v5, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r9v7 */
    /* JADX WARN: Type inference failed for: r9v8 */
    /* JADX WARN: Type inference failed for: r9v9, types: [android.database.Cursor] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> a(java.lang.String r9, int r10) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 1963
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.foundation.db.f.a(java.lang.String, int):java.util.List");
    }

    private CampaignEx a(Cursor cursor) {
        if (cursor == null || cursor.getCount() <= 0) {
            return null;
        }
        CampaignEx campaignEx = new CampaignEx();
        try {
            String string = cursor.getString(cursor.getColumnIndex("pv_urls"));
            if (!TextUtils.isEmpty(string)) {
                JSONArray jSONArray = new JSONArray(string);
                ArrayList arrayList = new ArrayList();
                for (int i = 0; i < jSONArray.length(); i++) {
                    arrayList.add(jSONArray.getString(i));
                }
                campaignEx.setPv_urls(arrayList);
            }
        } catch (JSONException unused) {
        }
        campaignEx.setId(cursor.getString(cursor.getColumnIndex("id")));
        campaignEx.setTab(cursor.getInt(cursor.getColumnIndex("tab")));
        campaignEx.setPackageName(cursor.getString(cursor.getColumnIndex("package_name")));
        campaignEx.setAppName(cursor.getString(cursor.getColumnIndex("app_name")));
        campaignEx.setAppDesc(cursor.getString(cursor.getColumnIndex("app_desc")));
        campaignEx.setSize(cursor.getString(cursor.getColumnIndex("app_size")));
        campaignEx.setImageSize(cursor.getString(cursor.getColumnIndex("image_size")));
        campaignEx.setIconUrl(cursor.getString(cursor.getColumnIndex("icon_url")));
        campaignEx.setImageUrl(cursor.getString(cursor.getColumnIndex("image_url")));
        campaignEx.setImpressionURL(cursor.getString(cursor.getColumnIndex("impression_url")));
        campaignEx.setNoticeUrl(cursor.getString(cursor.getColumnIndex("notice_url")));
        campaignEx.setClickURL(cursor.getString(cursor.getColumnIndex("download_url")));
        campaignEx.setWtick(cursor.getInt(cursor.getColumnIndex("wtick")));
        campaignEx.setDeepLinkUrl(cursor.getString(cursor.getColumnIndex(a.C0386a.o)));
        campaignEx.setUserActivation(Boolean.parseBoolean(cursor.getString(cursor.getColumnIndex("user_activation"))));
        campaignEx.setOnlyImpressionURL(cursor.getString(cursor.getColumnIndex("only_impression")));
        campaignEx.setPreClick(cursor.getInt(cursor.getColumnIndex("preclick")) == 1);
        campaignEx.setTemplate(cursor.getInt(cursor.getColumnIndex("template")));
        campaignEx.setLandingType(cursor.getString(cursor.getColumnIndex("landing_type")));
        campaignEx.setLinkType(cursor.getInt(cursor.getColumnIndex("link_type")));
        campaignEx.setClick_mode(cursor.getString(cursor.getColumnIndex("click_mode")));
        campaignEx.setRating(Double.parseDouble(cursor.getString(cursor.getColumnIndex("star"))));
        campaignEx.setNumberRating(cursor.getInt(cursor.getColumnIndex("number_rating")));
        campaignEx.setClickInterval(cursor.getInt(cursor.getColumnIndex("cti")));
        campaignEx.setPreClickInterval(cursor.getInt(cursor.getColumnIndex("cpti")));
        campaignEx.setTimestamp(cursor.getLong(cursor.getColumnIndex("ts")));
        campaignEx.setCacheLevel(cursor.getInt(cursor.getColumnIndex("level")));
        campaignEx.setAdCall(cursor.getString(cursor.getColumnIndex("ad_call")));
        campaignEx.setFcb(cursor.getInt(cursor.getColumnIndex("fc_b")));
        campaignEx.setAd_url_list(cursor.getString(cursor.getColumnIndex("ad_url_list")));
        campaignEx.setVideoLength(cursor.getInt(cursor.getColumnIndex("video_length")));
        campaignEx.setVideoSize(cursor.getInt(cursor.getColumnIndex("video_size")));
        campaignEx.setVideoResolution(cursor.getString(cursor.getColumnIndex("video_resolution")));
        campaignEx.setEndcard_click_result(cursor.getInt(cursor.getColumnIndex("endcard_click_result")));
        campaignEx.setVideoUrlEncode(cursor.getString(cursor.getColumnIndex("video_url")));
        campaignEx.setWatchMile(cursor.getInt(cursor.getColumnIndex("watch_mile")));
        campaignEx.setVideoCompleteTime(cursor.getInt(cursor.getColumnIndex("view_com_time")));
        campaignEx.setTImp(cursor.getInt(cursor.getColumnIndex("t_imp")));
        campaignEx.setBty(cursor.getInt(cursor.getColumnIndex("bty")));
        campaignEx.setAdvImp(cursor.getString(cursor.getColumnIndex("advImp")));
        campaignEx.setGuidelines(cursor.getString(cursor.getColumnIndex("guidelines")));
        campaignEx.setOfferType(cursor.getInt(cursor.getColumnIndex("offer_type")));
        campaignEx.setHtmlUrl(cursor.getString(cursor.getColumnIndex("html_url")));
        campaignEx.setGuidelines(cursor.getString(cursor.getColumnIndex("guidelines")));
        campaignEx.setHtmlUrl(cursor.getString(cursor.getColumnIndex("html_url")));
        campaignEx.setEndScreenUrl(cursor.getString(cursor.getColumnIndex("end_screen_url")));
        campaignEx.setRewardName(cursor.getString(cursor.getColumnIndex("reward_name")));
        campaignEx.setRewardAmount(cursor.getInt(cursor.getColumnIndex("reward_amount")));
        campaignEx.setRewardPlayStatus(cursor.getInt(cursor.getColumnIndex("reward_play_status")));
        campaignEx.setAdvId(cursor.getString(cursor.getColumnIndex("adv_id")));
        campaignEx.setTtc_ct2(cursor.getInt(cursor.getColumnIndex("ttc_ct2")));
        campaignEx.setTtc_type(cursor.getInt(cursor.getColumnIndex("ttc_type")));
        campaignEx.setRetarget_offer(cursor.getInt(cursor.getColumnIndex("retarget")));
        campaignEx.setCampaignUnitId(cursor.getString(cursor.getColumnIndex("unitid")));
        campaignEx.setNativeVideoTracking(CampaignEx.TrackingStr2Object(cursor.getString(cursor.getColumnIndex("native_ad_tracking"))));
        campaignEx.setNativeVideoTrackingString(cursor.getString(cursor.getColumnIndex("native_ad_tracking")));
        campaignEx.setVideo_end_type(cursor.getInt(cursor.getColumnIndex("video_end_type")));
        campaignEx.setendcard_url(cursor.getString(cursor.getColumnIndex("endcard_url")));
        campaignEx.setPlayable_ads_without_video(cursor.getInt(cursor.getColumnIndex("playable_ads_without_video")));
        campaignEx.setLoopbackString(cursor.getString(cursor.getColumnIndex("loopback")));
        campaignEx.setLoopbackMap(CampaignEx.loopbackStrToMap(cursor.getString(cursor.getColumnIndex("loopback"))));
        campaignEx.setMof_template_url(cursor.getString(cursor.getColumnIndex("mof_template_url")));
        campaignEx.setMof_tplid(cursor.getInt(cursor.getColumnIndex("mof_tplid")));
        campaignEx.setRewardTemplateMode(CampaignEx.c.a(cursor.getString(cursor.getColumnIndex("reward_teamplate"))));
        campaignEx.setVideoMD5Value(cursor.getString(cursor.getColumnIndex("md5_file")));
        campaignEx.setGifUrl(cursor.getString(cursor.getColumnIndex("gif_url")));
        campaignEx.setNvT2(cursor.getInt(cursor.getColumnIndex("nv_t2")));
        campaignEx.setClickTimeOutInterval(cursor.getInt(cursor.getColumnIndex("c_coi")));
        campaignEx.setcUA(cursor.getInt(cursor.getColumnIndex("c_ua")));
        campaignEx.setImpUA(cursor.getInt(cursor.getColumnIndex("imp_ua")));
        campaignEx.setJmPd(cursor.getInt(cursor.getColumnIndex("jm_pd")));
        campaignEx.setIsDeleted(cursor.getInt(cursor.getColumnIndex("is_deleted")));
        campaignEx.setIsClick(cursor.getInt(cursor.getColumnIndex("is_click")));
        campaignEx.setIsAddSuccesful(cursor.getInt(cursor.getColumnIndex("is_add_sucesful")));
        campaignEx.setIsDownLoadZip(cursor.getInt(cursor.getColumnIndex("is_download_zip")));
        campaignEx.setInteractiveCache(cursor.getString(cursor.getColumnIndex("ia_cache")));
        campaignEx.setKeyIaOri(cursor.getInt(cursor.getColumnIndex("ia_ori")));
        campaignEx.setAdType(cursor.getInt(cursor.getColumnIndex("ad_type")));
        campaignEx.setIa_ext1(cursor.getString(cursor.getColumnIndex("ia_ext1")));
        campaignEx.setIa_ext2(cursor.getString(cursor.getColumnIndex("ia_ext2")));
        campaignEx.setKeyIaRst(cursor.getInt(cursor.getColumnIndex("ia_rst")));
        campaignEx.setKeyIaUrl(cursor.getString(cursor.getColumnIndex("ia_url")));
        campaignEx.setKeyIaIcon(cursor.getString(cursor.getColumnIndex("ia_icon")));
        campaignEx.setFac(cursor.getInt(cursor.getColumnIndex("fac")));
        campaignEx.setTpOffer(cursor.getInt(cursor.getColumnIndex("tp_offer")));
        campaignEx.setGhId(cursor.getString(cursor.getColumnIndex("gh_id")));
        campaignEx.setGhPath(cursor.getString(cursor.getColumnIndex("gh_path")));
        campaignEx.setBindId(cursor.getString(cursor.getColumnIndex("bind_id")));
        campaignEx.setOc_time(cursor.getInt(cursor.getColumnIndex("oc_time")));
        campaignEx.setOc_type(cursor.getInt(cursor.getColumnIndex("oc_type")));
        campaignEx.setT_list(cursor.getString(cursor.getColumnIndex("t_list")));
        String string2 = cursor.getString(cursor.getColumnIndex("adchoice"));
        if (!TextUtils.isEmpty(string2)) {
            campaignEx.setAdchoice(CampaignEx.a.a(string2));
        }
        campaignEx.setAdchoiceSizeHeight(cursor.getInt(cursor.getColumnIndex("adchoice_size_height")));
        campaignEx.setAdchoiceSizeWidth(cursor.getInt(cursor.getColumnIndex("adchoice_size_width")));
        campaignEx.setPlct(cursor.getLong(cursor.getColumnIndex("plct")));
        campaignEx.setPlctb(cursor.getLong(cursor.getColumnIndex("plctb")));
        campaignEx.setAdZip(cursor.getString(cursor.getColumnIndex("ad_zip")));
        campaignEx.setAdHtml(cursor.getString(cursor.getColumnIndex("ad_html")));
        campaignEx.setBannerUrl(cursor.getString(cursor.getColumnIndex("banner_url")));
        campaignEx.setBannerHtml(cursor.getString(cursor.getColumnIndex("banner_html")));
        campaignEx.setCreativeId(cursor.getLong(cursor.getColumnIndex("creative_id")));
        campaignEx.setIsBidCampaign(cursor.getInt(cursor.getColumnIndex("is_bid_campaign")) == 1);
        campaignEx.setBidToken(cursor.getString(cursor.getColumnIndex(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BID_TOKEN)));
        campaignEx.setMraid(cursor.getString(cursor.getColumnIndex("mraid")));
        campaignEx.setIsMraid(cursor.getInt(cursor.getColumnIndex("is_mraid_campaign")) == 1);
        campaignEx.setOmid(cursor.getString(cursor.getColumnIndex("omid")));
        campaignEx.setReady_rate(cursor.getInt(cursor.getColumnIndex("ready_rate")));
        campaignEx.setExt_data(cursor.getString(cursor.getColumnIndex("ext_data")));
        campaignEx.setNscpt(cursor.getInt(cursor.getColumnIndex("nscpt")));
        campaignEx.setReq_ext_data(cursor.getString(cursor.getColumnIndex("req_ext_data")));
        campaignEx.setReadyState(cursor.getInt(cursor.getColumnIndex("readyState")));
        campaignEx.setLoadTimeoutState(cursor.getInt(cursor.getColumnIndex("load_timeout")));
        campaignEx.setPlacementId(cursor.getString(cursor.getColumnIndex(l.a.c)));
        campaignEx.setApkAlt(cursor.getInt(cursor.getColumnIndex("apk_alt")));
        campaignEx.setAkdlui(cursor.getString(cursor.getColumnIndex("akdlui")));
        campaignEx.setNtbarpasbl(cursor.getInt(cursor.getColumnIndex("ntbarpasbl")));
        campaignEx.setNtbarpt(cursor.getInt(cursor.getColumnIndex("ntbarpt")));
        campaignEx.setAtatType(cursor.getInt(cursor.getColumnIndex("atat_type")));
        campaignEx.setRewardPlus(RewardPlus.parseByString(cursor.getString(cursor.getColumnIndex("rw_pl"))));
        campaignEx.setApkDisplayInfo(ApkDisplayInfo.parseByString(cursor.getString(cursor.getColumnIndex("apk_info"))));
        campaignEx.setFlb(cursor.getInt(cursor.getColumnIndex("flb")));
        campaignEx.setFlbSkipTime(cursor.getInt(cursor.getColumnIndex("flb_skiptime")));
        campaignEx.setCbd(cursor.getInt(cursor.getColumnIndex("cbd")));
        campaignEx.setVst(cursor.getInt(cursor.getColumnIndex("vst")));
        campaignEx.setAdSpaceT(cursor.getInt(cursor.getColumnIndex("adspace_t")));
        campaignEx.setVcn(cursor.getInt(cursor.getColumnIndex("vcn")));
        campaignEx.setTokenRule(cursor.getInt(cursor.getColumnIndex("token_r")));
        campaignEx.setEncryptPrice(cursor.getString(cursor.getColumnIndex("encrypt_p")));
        campaignEx.setVideoCheckType(cursor.getInt(cursor.getColumnIndex("vck_t")));
        campaignEx.setVideoCtnType(cursor.getInt(cursor.getColumnIndex("vctn_t")));
        campaignEx.setRsIgnoreCheckRuleByString(cursor.getString(cursor.getColumnIndex("rs_ignc_r")));
        return campaignEx;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v0 */
    /* JADX WARN: Type inference failed for: r0v1 */
    /* JADX WARN: Type inference failed for: r0v10 */
    /* JADX WARN: Type inference failed for: r0v12 */
    /* JADX WARN: Type inference failed for: r0v14 */
    /* JADX WARN: Type inference failed for: r0v15 */
    /* JADX WARN: Type inference failed for: r0v16 */
    /* JADX WARN: Type inference failed for: r0v17 */
    /* JADX WARN: Type inference failed for: r0v18 */
    /* JADX WARN: Type inference failed for: r0v2, types: [android.database.Cursor] */
    /* JADX WARN: Type inference failed for: r0v4 */
    /* JADX WARN: Type inference failed for: r0v5, types: [com.mbridge.msdk.foundation.entity.CampaignEx] */
    /* JADX WARN: Type inference failed for: r0v6 */
    /* JADX WARN: Type inference failed for: r0v7 */
    /* JADX WARN: Type inference failed for: r0v8 */
    /* JADX WARN: Type inference failed for: r3v0 */
    /* JADX WARN: Type inference failed for: r5v1 */
    /* JADX WARN: Type inference failed for: r5v2 */
    /* JADX WARN: Type inference failed for: r5v6 */
    public final CampaignEx d(String str, String str2) throws Throwable {
        ?? r5;
        Cursor cursorRawQuery;
        ?? A = 0;
        A = 0;
        A = 0;
        A = 0;
        A = 0;
        Cursor cursor = null;
        try {
            try {
                cursorRawQuery = getReadableDatabase().rawQuery("SELECT * FROM campaign where unitid ='" + str2 + "' and id = '" + str + "'", null);
                if (cursorRawQuery != null) {
                    try {
                        if (cursorRawQuery.getCount() > 0) {
                            while (cursorRawQuery.moveToNext()) {
                                A = a(cursorRawQuery);
                            }
                        }
                    } catch (Exception e) {
                        e = e;
                        ?? r3 = A;
                        cursor = cursorRawQuery;
                        r5 = r3;
                        z.d("CampaignDao", e.getLocalizedMessage());
                        if (cursor != null) {
                            try {
                                cursor.close();
                            } catch (Exception unused) {
                            }
                        }
                        A = r5;
                    } catch (Throwable th) {
                        th = th;
                        A = cursorRawQuery;
                        if (A != 0) {
                            try {
                                A.close();
                            } catch (Exception unused2) {
                            }
                        }
                        throw th;
                    }
                }
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (Exception e2) {
            e = e2;
            r5 = 0;
        }
        if (cursorRawQuery != null) {
            try {
                cursorRawQuery.close();
            } catch (Exception unused3) {
            }
        }
        return A;
    }

    public final synchronized void e(String str, String str2) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            String str3 = "unitid = '" + str + "'";
            if (!TextUtils.isEmpty(str2)) {
                str3 = str3 + " AND bid_token != '" + str2 + "'";
            }
            ContentValues contentValues = new ContentValues();
            contentValues.put("readyState", (Integer) 2);
            getWritableDatabase().update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues, (str3 + " AND is_bid_campaign = 1") + " AND bid_token IS NOT NULL", null);
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
    }

    public final synchronized void f(String str, String str2) {
        try {
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
        if (!TextUtils.isEmpty(str2) && !TextUtils.isEmpty(str)) {
            String str3 = "unitid = '" + str + "' AND " + TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BID_TOKEN + " = '" + str2 + "' AND " + TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BID_TOKEN + " IS NOT NULL";
            ContentValues contentValues = new ContentValues();
            contentValues.put("readyState", (Integer) 2);
            getWritableDatabase().update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues, str3, null);
        }
    }

    public final List<CampaignEx> b(String str, int i, boolean z) throws Throwable {
        ArrayList arrayList;
        String str2;
        Cursor cursor = null;
        arrayList = null;
        ArrayList arrayList2 = null;
        cursor = null;
        try {
            try {
                if (z) {
                    str2 = "placement_id = " + str + " AND ad_type = " + i;
                } else {
                    str2 = "ad_type = " + i;
                }
                Cursor cursorRawQuery = getReadableDatabase().rawQuery("SELECT * FROM campaign WHERE " + str2, null);
                if (cursorRawQuery != null) {
                    try {
                        try {
                            if (cursorRawQuery.getCount() > 0) {
                                arrayList = new ArrayList();
                                while (cursorRawQuery.moveToNext()) {
                                    try {
                                        arrayList.add(a(cursorRawQuery));
                                    } catch (Exception e) {
                                        cursor = cursorRawQuery;
                                        e = e;
                                        z.d("CampaignDao", e.getLocalizedMessage());
                                        if (cursor != null) {
                                            try {
                                                cursor.close();
                                            } catch (Exception unused) {
                                            }
                                        }
                                        return arrayList;
                                    }
                                }
                                arrayList2 = arrayList;
                            }
                        } catch (Throwable th) {
                            cursor = cursorRawQuery;
                            th = th;
                            if (cursor != null) {
                                try {
                                    cursor.close();
                                } catch (Exception unused2) {
                                }
                            }
                            throw th;
                        }
                    } catch (Exception e2) {
                        cursor = cursorRawQuery;
                        e = e2;
                        arrayList = null;
                    }
                }
                if (cursorRawQuery == null) {
                    return arrayList2;
                }
                try {
                    cursorRawQuery.close();
                    return arrayList2;
                } catch (Exception unused3) {
                    return arrayList2;
                }
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (Exception e3) {
            e = e3;
            arrayList = null;
        }
    }
}
