package com.mbridge.msdk.foundation.db;

import android.content.ContentValues;
import android.database.Cursor;
import com.mbridge.msdk.foundation.entity.CampaignEx;

/* JADX INFO: compiled from: CampaignReportDao.java */
/* JADX INFO: loaded from: classes2.dex */
public class g extends f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f3361a = g.class.getName();
    private static g b = null;

    private g(h hVar) {
        super(hVar);
    }

    public static g b(h hVar) {
        if (b == null) {
            synchronized (g.class) {
                if (b == null) {
                    b = new g(hVar);
                }
            }
        }
        return b;
    }

    public final synchronized long a(CampaignEx campaignEx) {
        if (campaignEx == null) {
            return 0L;
        }
        try {
            if (getWritableDatabase() == null) {
                return -1L;
            }
            ContentValues contentValues = new ContentValues();
            contentValues.put("id", campaignEx.getId());
            contentValues.put("unitid", campaignEx.getCampaignUnitId());
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
            contentValues.put("gh_id", campaignEx.getGhId());
            contentValues.put("gh_path", campaignEx.getGhPath());
            contentValues.put("bind_id", campaignEx.getBindId());
            contentValues.put("flb", Integer.valueOf(campaignEx.getFlb()));
            contentValues.put("adspace_t", Integer.valueOf(campaignEx.getAdSpaceT()));
            contentValues.put("cbd", Integer.valueOf(campaignEx.getCbd()));
            contentValues.put("vst", Integer.valueOf(campaignEx.getVst()));
            contentValues.put("flb_skiptime", Integer.valueOf(campaignEx.getFlbSkipTime()));
            return getWritableDatabase().insert("report_campaign", null, contentValues);
        } catch (Exception unused) {
            return -1L;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r4v0 */
    /* JADX WARN: Type inference failed for: r4v1 */
    /* JADX WARN: Type inference failed for: r4v129 */
    /* JADX WARN: Type inference failed for: r4v130 */
    /* JADX WARN: Type inference failed for: r4v132 */
    /* JADX WARN: Type inference failed for: r4v133 */
    /* JADX WARN: Type inference failed for: r4v134 */
    /* JADX WARN: Type inference failed for: r4v2, types: [android.database.Cursor] */
    /* JADX WARN: Type inference failed for: r4v4 */
    /* JADX WARN: Type inference failed for: r4v5 */
    /* JADX WARN: Type inference failed for: r4v6, types: [com.mbridge.msdk.foundation.entity.CampaignEx] */
    /* JADX WARN: Type inference failed for: r4v7 */
    public final CampaignEx h(String str) throws Throwable {
        CampaignEx campaignEx;
        Cursor cursorRawQuery;
        ?? r4 = 0;
        r4 = 0;
        r4 = 0;
        r4 = 0;
        Cursor cursor = null;
        try {
            try {
                cursorRawQuery = getReadableDatabase().rawQuery("SELECT * FROM report_campaign where package_name ='" + str + "'", null);
                if (cursorRawQuery != null) {
                    try {
                        try {
                            if (cursorRawQuery.getCount() > 0 && cursorRawQuery.moveToNext()) {
                                campaignEx = new CampaignEx();
                                try {
                                    campaignEx.setId(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("id")));
                                    campaignEx.setTab(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("tab")));
                                    campaignEx.setPackageName(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("package_name")));
                                    campaignEx.setAppName(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("app_name")));
                                    campaignEx.setAppDesc(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("app_desc")));
                                    campaignEx.setSize(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("app_size")));
                                    campaignEx.setImageSize(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("image_size")));
                                    campaignEx.setIconUrl(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("icon_url")));
                                    campaignEx.setImageUrl(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("image_url")));
                                    campaignEx.setImpressionURL(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("impression_url")));
                                    campaignEx.setNoticeUrl(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("notice_url")));
                                    campaignEx.setClickURL(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("download_url")));
                                    campaignEx.setWtick(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("wtick")));
                                    campaignEx.setOnlyImpressionURL(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("only_impression")));
                                    boolean z = true;
                                    if (cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("preclick")) != 1) {
                                        z = false;
                                    }
                                    campaignEx.setPreClick(z);
                                    campaignEx.setTemplate(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("template")));
                                    campaignEx.setLandingType(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("landing_type")));
                                    campaignEx.setLinkType(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("link_type")));
                                    campaignEx.setClick_mode(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("click_mode")));
                                    campaignEx.setRating(Double.parseDouble(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("star"))));
                                    campaignEx.setNumberRating(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("number_rating")));
                                    campaignEx.setClickInterval(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("cti")));
                                    campaignEx.setPreClickInterval(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("cpti")));
                                    campaignEx.setTimestamp(cursorRawQuery.getLong(cursorRawQuery.getColumnIndex("ts")));
                                    campaignEx.setCacheLevel(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("level")));
                                    campaignEx.setAdCall(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("ad_call")));
                                    campaignEx.setFca(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("fc_a")));
                                    campaignEx.setAd_url_list(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("ad_url_list")));
                                    campaignEx.setVideoLength(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("video_length")));
                                    campaignEx.setVideoSize(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("video_size")));
                                    campaignEx.setVideoResolution(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("video_resolution")));
                                    campaignEx.setEndcard_click_result(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("endcard_click_result")));
                                    campaignEx.setVideoUrlEncode(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("video_url")));
                                    campaignEx.setWatchMile(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("watch_mile")));
                                    campaignEx.setVideoCompleteTime(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("view_com_time")));
                                    campaignEx.setTImp(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("t_imp")));
                                    campaignEx.setBty(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("bty")));
                                    campaignEx.setAdvImp(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("advImp")));
                                    campaignEx.setGuidelines(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("guidelines")));
                                    campaignEx.setOfferType(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("offer_type")));
                                    campaignEx.setHtmlUrl(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("html_url")));
                                    campaignEx.setGuidelines(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("guidelines")));
                                    campaignEx.setHtmlUrl(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("html_url")));
                                    campaignEx.setEndScreenUrl(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("end_screen_url")));
                                    campaignEx.setRewardName(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("reward_name")));
                                    campaignEx.setRewardAmount(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("reward_amount")));
                                    campaignEx.setRewardPlayStatus(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("reward_play_status")));
                                    campaignEx.setAdvId(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("adv_id")));
                                    campaignEx.setTtc_ct2(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("ttc_ct2")));
                                    campaignEx.setTtc_type(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("ttc_type")));
                                    campaignEx.setRetarget_offer(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("retarget")));
                                    campaignEx.setCampaignUnitId(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("unitid")));
                                    campaignEx.setNativeVideoTracking(CampaignEx.TrackingStr2Object(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("native_ad_tracking"))));
                                    campaignEx.setNativeVideoTrackingString(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("native_ad_tracking")));
                                    campaignEx.setVideo_end_type(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("video_end_type")));
                                    campaignEx.setendcard_url(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("endcard_url")));
                                    campaignEx.setPlayable_ads_without_video(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("playable_ads_without_video")));
                                    campaignEx.setLoopbackString(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("loopback")));
                                    campaignEx.setLoopbackMap(CampaignEx.loopbackStrToMap(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("loopback"))));
                                    campaignEx.setRewardTemplateMode(CampaignEx.c.a(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("reward_teamplate"))));
                                    campaignEx.setVideoMD5Value(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("md5_file")));
                                    campaignEx.setGifUrl(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("gif_url")));
                                    campaignEx.setNvT2(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("nv_t2")));
                                    campaignEx.setClickTimeOutInterval(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("c_coi")));
                                    campaignEx.setcUA(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("c_ua")));
                                    campaignEx.setImpUA(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("imp_ua")));
                                    campaignEx.setGhId(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("gh_id")));
                                    campaignEx.setGhPath(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("gh_path")));
                                    campaignEx.setBindId(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("bind_id")));
                                    campaignEx.setFlb(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("flb")));
                                    campaignEx.setCbd(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("cbd")));
                                    campaignEx.setVst(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("vst")));
                                    campaignEx.setAdSpaceT(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("adspace_t")));
                                    campaignEx.setFlbSkipTime(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("flb_skiptime")));
                                    r4 = campaignEx;
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
                                    r4 = campaignEx;
                                }
                            }
                        } catch (Throwable th) {
                            th = th;
                            r4 = cursorRawQuery;
                            if (r4 != 0) {
                                try {
                                    r4.close();
                                } catch (Exception unused2) {
                                }
                            }
                            throw th;
                        }
                    } catch (Exception e2) {
                        e = e2;
                        campaignEx = null;
                    }
                }
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (Exception e3) {
            e = e3;
            campaignEx = null;
        }
        if (cursorRawQuery != null) {
            try {
                cursorRawQuery.close();
            } catch (Exception unused3) {
            }
        }
        return r4;
    }

    public final synchronized void i(String str) {
        try {
            String str2 = "package_name = '" + str + "'";
            if (getWritableDatabase() == null) {
            } else {
                getWritableDatabase().delete("report_campaign", str2, null);
            }
        } catch (Exception unused) {
        }
    }
}
