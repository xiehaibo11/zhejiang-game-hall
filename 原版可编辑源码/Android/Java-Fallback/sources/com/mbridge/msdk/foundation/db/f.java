package com.mbridge.msdk.foundation.db;

public class f extends com.mbridge.msdk.foundation.db.a<com.mbridge.msdk.out.Campaign> {
    private static final java.lang.String a = null;
    private static com.mbridge.msdk.foundation.db.f b;
    private final java.lang.String c;
    private final java.lang.String d;
    private final java.lang.String e;
    private final java.lang.String f;
    private final java.lang.String g;
    private final java.lang.String h;
    private final java.lang.String i;
    private final java.lang.String j;
    private final java.lang.String k;
    private final java.lang.String l;
    private final java.lang.String m;
    private final java.lang.String n;
    private final java.lang.String o;
    private final java.lang.String p;
    private final java.lang.String q;
    private final java.lang.String r;


    static {
            java.lang.Class<com.mbridge.msdk.foundation.db.f> r0 = com.mbridge.msdk.foundation.db.f.class
            java.lang.String r0 = r0.getName()
            com.mbridge.msdk.foundation.db.f.a = r0
            r0 = 0
            com.mbridge.msdk.foundation.db.f.b = r0
            return
    }

    protected f(com.mbridge.msdk.foundation.db.h r1) {
            r0 = this;
            r0.<init>(r1)
            java.lang.String r1 = "rid"
            r0.c = r1
            java.lang.String r1 = "cid"
            r0.d = r1
            java.lang.String r1 = "plct"
            r0.e = r1
            java.lang.String r1 = "plctb"
            r0.f = r1
            java.lang.String r1 = "timestamp"
            r0.g = r1
            java.lang.String r1 = "ridCount"
            r0.h = r1
            java.lang.String r1 = " WHERE "
            r0.i = r1
            java.lang.String r1 = " AND "
            r0.j = r1
            java.lang.String r1 = "SELECT "
            r0.k = r1
            java.lang.String r1 = "*"
            r0.l = r1
            java.lang.String r1 = " FROM "
            r0.m = r1
            java.lang.String r1 = " AND readyState = '0'"
            r0.n = r1
            java.lang.String r1 = " AND is_bid_campaign = 1"
            r0.o = r1
            java.lang.String r1 = " order by ts ASC"
            r0.p = r1
            java.lang.String r1 = " group by request_id"
            r0.q = r1
            java.lang.String r1 = " group by bid_token"
            r0.r = r1
            return
    }

    private synchronized long a(com.mbridge.msdk.foundation.entity.CampaignEx r6, java.lang.String r7, java.lang.String r8, int r9) {
            r5 = this;
            monitor-enter(r5)
            if (r6 != 0) goto L7
            r6 = 0
            monitor-exit(r5)
            return r6
        L7:
            r0 = -1
            android.database.sqlite.SQLiteDatabase r9 = r5.getWritableDatabase()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            if (r9 != 0) goto L11
            monitor-exit(r5)
            return r0
        L11:
            android.content.ContentValues r9 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.<init>()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.util.List r2 = r6.getPv_urls()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            if (r2 == 0) goto L4c
            java.util.List r2 = r6.getPv_urls()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            if (r2 <= 0) goto L4c
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r2.<init>()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.util.List r3 = r6.getPv_urls()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
        L33:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            if (r4 == 0) goto L43
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r2.put(r4)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            goto L33
        L43:
            java.lang.String r3 = "pv_urls"
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r3, r2)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
        L4c:
            java.lang.String r2 = "id"
            java.lang.String r3 = r6.getId()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r2, r3)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r2 = "placement_id"
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            if (r3 == 0) goto L5f
            java.lang.String r7 = ""
        L5f:
            r9.put(r2, r7)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "unitid"
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "number_rating"
            int r8 = r6.getNumberRating()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "tab"
            int r8 = r6.getTab()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "package_name"
            java.lang.String r8 = r6.getPackageName()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "app_name"
            java.lang.String r8 = r6.getAppName()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "app_desc"
            java.lang.String r8 = r6.getAppDesc()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "app_size"
            java.lang.String r8 = r6.getSize()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "image_size"
            java.lang.String r8 = r6.getImageSize()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "icon_url"
            java.lang.String r8 = r6.getIconUrl()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "image_url"
            java.lang.String r8 = r6.getImageUrl()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "impression_url"
            java.lang.String r8 = r6.getImpressionURL()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "notice_url"
            java.lang.String r8 = r6.getNoticeUrl()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "download_url"
            java.lang.String r8 = r6.getClickURL()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "wtick"
            int r8 = r6.getWtick()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "deeplink_url"
            java.lang.String r8 = r6.getDeepLinkURL()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "user_activation"
            boolean r8 = r6.getUserActivation()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r8 = java.lang.Boolean.toString(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "only_impression"
            java.lang.String r8 = r6.getOnlyImpressionURL()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "ts"
            long r2 = r6.getTimestamp()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Long r8 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "template"
            int r8 = r6.getTemplate()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "click_mode"
            java.lang.String r8 = r6.getClick_mode()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "landing_type"
            java.lang.String r8 = r6.getLandingType()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "link_type"
            int r8 = r6.getLinkType()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "star"
            double r2 = r6.getRating()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Double r8 = java.lang.Double.valueOf(r2)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "cti"
            int r8 = r6.getClickInterval()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "cpti"
            int r8 = r6.getPreClickInterval()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "preclick"
            boolean r8 = r6.isPreClick()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Boolean r8 = java.lang.Boolean.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "level"
            int r8 = r6.getCacheLevel()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "adSource"
            int r8 = r6.getType()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "ad_call"
            java.lang.String r8 = r6.getAdCall()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "fc_a"
            int r8 = r6.getFca()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "fc_b"
            int r8 = r6.getFcb()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "ad_url_list"
            java.lang.String r8 = r6.getAd_url_list()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "video_url"
            java.lang.String r8 = r6.getVideoUrlEncode()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "video_size"
            int r8 = r6.getVideoSize()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "video_length"
            int r8 = r6.getVideoLength()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "video_resolution"
            java.lang.String r8 = r6.getVideoResolution()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "endcard_click_result"
            int r8 = r6.getEndcard_click_result()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "watch_mile"
            int r8 = r6.getWatchMile()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "view_com_time"
            int r8 = r6.getVideoCompleteTime()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "advImp"
            java.lang.String r8 = r6.getAdvImp()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "bty"
            int r8 = r6.getBty()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "t_imp"
            int r8 = r6.getTImp()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "guidelines"
            java.lang.String r8 = r6.getGuidelines()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "offer_type"
            int r8 = r6.getOfferType()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "html_url"
            java.lang.String r8 = r6.getHtmlUrl()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "end_screen_url"
            java.lang.String r8 = r6.getEndScreenUrl()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "reward_amount"
            int r8 = r6.getRewardAmount()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "reward_name"
            java.lang.String r8 = r6.getRewardName()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "reward_play_status"
            int r8 = r6.getRewardPlayStatus()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "adv_id"
            java.lang.String r8 = r6.getAdvId()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "ttc_ct2"
            int r8 = r6.getTtc_ct2()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            int r8 = r8 * 1000
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "ttc_type"
            int r8 = r6.getTtc_type()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "retarget"
            int r8 = r6.getRetarget_offer()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "native_ad_tracking"
            java.lang.String r8 = r6.getNativeVideoTrackingString()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "playable_ads_without_video"
            int r8 = r6.getPlayable_ads_without_video()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "endcard_url"
            java.lang.String r8 = r6.getendcard_url()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "video_end_type"
            int r8 = r6.getVideo_end_type()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "loopback"
            java.lang.String r8 = r6.getLoopbackString()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "md5_file"
            java.lang.String r8 = r6.getVideoMD5Value()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "nv_t2"
            int r8 = r6.getNvT2()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "gif_url"
            java.lang.String r8 = r6.getGifUrl()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            com.mbridge.msdk.foundation.entity.CampaignEx$c r7 = r6.getRewardTemplateMode()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            if (r7 == 0) goto L314
            java.lang.String r7 = "reward_teamplate"
            com.mbridge.msdk.foundation.entity.CampaignEx$c r8 = r6.getRewardTemplateMode()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r8 = r8.a()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
        L314:
            java.lang.String r7 = "c_coi"
            int r8 = r6.getClickTimeOutInterval()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "c_ua"
            int r8 = r6.getcUA()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "imp_ua"
            int r8 = r6.getImpUA()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "jm_pd"
            int r8 = r6.getJmPd()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "is_deleted"
            int r8 = r6.getIsDeleted()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "is_click"
            int r8 = r6.getIsClick()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "is_add_sucesful"
            int r8 = r6.getIsAddSuccesful()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "short_ctime"
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r8 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "ia_icon"
            java.lang.String r8 = r6.getKeyIaIcon()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "ia_url"
            java.lang.String r8 = r6.getKeyIaUrl()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "ia_rst"
            int r8 = r6.getKeyIaRst()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "ia_ori"
            int r8 = r6.getKeyIaOri()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "ad_type"
            int r8 = r6.getAdType()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "ia_ext1"
            java.lang.String r8 = r6.getIa_ext1()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "ia_ext2"
            java.lang.String r8 = r6.getIa_ext2()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "is_download_zip"
            int r8 = r6.getIsDownLoadZip()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "ia_cache"
            java.lang.String r8 = r6.getInteractiveCache()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "gh_id"
            java.lang.String r8 = r6.getGhId()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "gh_path"
            java.lang.String r8 = r6.getGhPath()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "bind_id"
            java.lang.String r8 = r6.getBindId()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "oc_time"
            int r8 = r6.getOc_time()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "oc_type"
            int r8 = r6.getOc_type()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "t_list"
            java.lang.String r8 = r6.getT_list()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            com.mbridge.msdk.foundation.entity.CampaignEx$a r7 = r6.getAdchoice()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            if (r7 == 0) goto L444
            java.lang.String r8 = "adchoice"
            java.lang.String r2 = r7.c()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r8, r2)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r8 = "adchoice_size_height"
            int r2 = r7.b()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r8, r2)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r8 = "adchoice_size_width"
            int r7 = r7.a()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r8, r7)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
        L444:
            java.lang.String r7 = "plct"
            long r2 = r6.getPlct()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Long r8 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "plctb"
            long r2 = r6.getPlctb()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Long r8 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "ad_html"
            java.lang.String r8 = r6.getAdHtml()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "ad_zip"
            java.lang.String r8 = r6.getAdZip()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "banner_url"
            java.lang.String r8 = r6.getBannerUrl()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "banner_html"
            java.lang.String r8 = r6.getBannerHtml()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "creative_id"
            long r2 = r6.getCreativeId()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Long r8 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "is_bid_campaign"
            boolean r8 = r6.isBidCampaign()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Boolean r8 = java.lang.Boolean.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "bid_token"
            java.lang.String r8 = r6.getBidToken()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "mraid"
            java.lang.String r8 = r6.getMraid()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "is_mraid_campaign"
            boolean r8 = r6.isMraid()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Boolean r8 = java.lang.Boolean.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "omid"
            java.lang.String r8 = r6.getOmid()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "mof_tplid"
            int r8 = r6.getMof_tplid()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "ready_rate"
            int r8 = r6.getReady_rate()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            com.mbridge.msdk.foundation.entity.RewardPlus r7 = r6.getRewardPlus()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            if (r7 == 0) goto L4ff
            com.mbridge.msdk.foundation.entity.RewardPlus r7 = r6.getRewardPlus()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            org.json.JSONObject r7 = r7.toJsonObject()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            if (r7 == 0) goto L4ff
            java.lang.String r7 = "rw_pl"
            com.mbridge.msdk.foundation.entity.RewardPlus r8 = r6.getRewardPlus()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            org.json.JSONObject r8 = r8.toJsonObject()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
        L4ff:
            com.mbridge.msdk.out.ApkDisplayInfo r7 = r6.getApkDisplayInfo()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            if (r7 == 0) goto L520
            com.mbridge.msdk.out.ApkDisplayInfo r7 = r6.getApkDisplayInfo()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            org.json.JSONObject r7 = r7.toJson()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            if (r7 == 0) goto L520
            java.lang.String r7 = "apk_info"
            com.mbridge.msdk.out.ApkDisplayInfo r8 = r6.getApkDisplayInfo()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            org.json.JSONObject r8 = r8.toJson()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
        L520:
            java.lang.String r7 = "ext_data"
            java.lang.String r8 = r6.getExt_data()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "nscpt"
            int r8 = r6.getNscpt()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "mof_template_url"
            java.lang.String r8 = r6.getMof_template_url()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "req_ext_data"
            java.lang.String r8 = r6.getReq_ext_data()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "readyState"
            int r8 = r6.getReadyState()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "request_id"
            java.lang.String r8 = r6.getRequestId()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "load_timeout"
            int r8 = r6.getLoadTimeoutState()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "apk_alt"
            int r8 = r6.getApkAlt()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "atat_type"
            int r8 = r6.getAtatType()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "ntbarpasbl"
            int r8 = r6.getNtbarpasbl()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "ntbarpt"
            int r8 = r6.getNtbarpt()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "akdlui"
            java.lang.String r8 = r6.getAkdlui()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "flb"
            int r8 = r6.getFlb()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "adspace_t"
            int r8 = r6.getAdSpaceT()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "cbd"
            int r8 = r6.getCbd()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "vst"
            int r8 = r6.getVst()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "flb_skiptime"
            int r8 = r6.getFlbSkipTime()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "vcn"
            int r8 = r6.getVcn()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "token_r"
            int r8 = r6.getTokenRule()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "encrypt_p"
            java.lang.String r8 = r6.getEncryptPrice()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "vck_t"
            int r8 = r6.getVideoCheckType()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "vctn_t"
            int r8 = r6.getVideoCtnType()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "rs_ignc_r"
            java.lang.String r8 = r6.getRsIgnoreCheckRuleString()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "tp_offer"
            int r8 = r6.getTpOffer()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "fac"
            int r8 = r6.getFac()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r8)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            com.mbridge.msdk.foundation.entity.AabEntity r7 = r6.getAabEntity()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            if (r7 == 0) goto L660
            java.lang.String r7 = "aab"
            com.mbridge.msdk.foundation.entity.AabEntity r6 = r6.getAabEntity()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            org.json.JSONObject r6 = r6.toJson()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            r9.put(r7, r6)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
        L660:
            android.database.sqlite.SQLiteDatabase r6 = r5.getWritableDatabase()     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            java.lang.String r7 = "campaign"
            r8 = 0
            long r6 = r6.insert(r7, r8, r9)     // Catch: java.lang.Throwable -> L66d java.lang.Exception -> L66f
            monitor-exit(r5)
            return r6
        L66d:
            r6 = move-exception
            goto L67b
        L66f:
            r6 = move-exception
            java.lang.String r7 = "CampaignDao"
            java.lang.String r6 = r6.getLocalizedMessage()     // Catch: java.lang.Throwable -> L66d
            com.mbridge.msdk.foundation.tools.z.d(r7, r6)     // Catch: java.lang.Throwable -> L66d
            monitor-exit(r5)
            return r0
        L67b:
            monitor-exit(r5)
            throw r6
    }

    public static com.mbridge.msdk.foundation.db.f a(com.mbridge.msdk.foundation.db.h r2) {
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.foundation.db.f.b
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.foundation.db.f> r0 = com.mbridge.msdk.foundation.db.f.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.db.f r1 = com.mbridge.msdk.foundation.db.f.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.foundation.db.f r1 = new com.mbridge.msdk.foundation.db.f     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.foundation.db.f.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.mbridge.msdk.foundation.db.f r2 = com.mbridge.msdk.foundation.db.f.b
            return r2
    }

    private com.mbridge.msdk.foundation.entity.CampaignEx a(android.database.Cursor r7) {
            r6 = this;
            if (r7 == 0) goto L710
            int r0 = r7.getCount()
            if (r0 <= 0) goto L710
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = new com.mbridge.msdk.foundation.entity.CampaignEx
            r0.<init>()
            r1 = 0
            java.lang.String r2 = "pv_urls"
            int r2 = r7.getColumnIndex(r2)     // Catch: org.json.JSONException -> L3c
            java.lang.String r2 = r7.getString(r2)     // Catch: org.json.JSONException -> L3c
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: org.json.JSONException -> L3c
            if (r3 != 0) goto L3c
            org.json.JSONArray r3 = new org.json.JSONArray     // Catch: org.json.JSONException -> L3c
            r3.<init>(r2)     // Catch: org.json.JSONException -> L3c
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: org.json.JSONException -> L3c
            r2.<init>()     // Catch: org.json.JSONException -> L3c
            r4 = r1
        L29:
            int r5 = r3.length()     // Catch: org.json.JSONException -> L3c
            if (r4 >= r5) goto L39
            java.lang.String r5 = r3.getString(r4)     // Catch: org.json.JSONException -> L3c
            r2.add(r5)     // Catch: org.json.JSONException -> L3c
            int r4 = r4 + 1
            goto L29
        L39:
            r0.setPv_urls(r2)     // Catch: org.json.JSONException -> L3c
        L3c:
            java.lang.String r2 = "id"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setId(r2)
            java.lang.String r2 = "tab"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setTab(r2)
            java.lang.String r2 = "package_name"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setPackageName(r2)
            java.lang.String r2 = "app_name"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setAppName(r2)
            java.lang.String r2 = "app_desc"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setAppDesc(r2)
            java.lang.String r2 = "app_size"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setSize(r2)
            java.lang.String r2 = "image_size"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setImageSize(r2)
            java.lang.String r2 = "icon_url"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setIconUrl(r2)
            java.lang.String r2 = "image_url"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setImageUrl(r2)
            java.lang.String r2 = "impression_url"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setImpressionURL(r2)
            java.lang.String r2 = "notice_url"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setNoticeUrl(r2)
            java.lang.String r2 = "download_url"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setClickURL(r2)
            java.lang.String r2 = "wtick"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setWtick(r2)
            java.lang.String r2 = "deeplink_url"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setDeepLinkUrl(r2)
            java.lang.String r2 = "user_activation"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            boolean r2 = java.lang.Boolean.parseBoolean(r2)
            r0.setUserActivation(r2)
            java.lang.String r2 = "only_impression"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setOnlyImpressionURL(r2)
            java.lang.String r2 = "preclick"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r3 = 1
            if (r2 != r3) goto L11f
            r2 = r3
            goto L120
        L11f:
            r2 = r1
        L120:
            r0.setPreClick(r2)
            java.lang.String r2 = "template"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setTemplate(r2)
            java.lang.String r2 = "landing_type"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setLandingType(r2)
            java.lang.String r2 = "link_type"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setLinkType(r2)
            java.lang.String r2 = "click_mode"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setClick_mode(r2)
            java.lang.String r2 = "star"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            double r4 = java.lang.Double.parseDouble(r2)
            r0.setRating(r4)
            java.lang.String r2 = "number_rating"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setNumberRating(r2)
            java.lang.String r2 = "cti"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setClickInterval(r2)
            java.lang.String r2 = "cpti"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setPreClickInterval(r2)
            java.lang.String r2 = "ts"
            int r2 = r7.getColumnIndex(r2)
            long r4 = r7.getLong(r2)
            r0.setTimestamp(r4)
            java.lang.String r2 = "level"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setCacheLevel(r2)
            java.lang.String r2 = "ad_call"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setAdCall(r2)
            java.lang.String r2 = "fc_b"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setFcb(r2)
            java.lang.String r2 = "ad_url_list"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setAd_url_list(r2)
            java.lang.String r2 = "video_length"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setVideoLength(r2)
            java.lang.String r2 = "video_size"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setVideoSize(r2)
            java.lang.String r2 = "video_resolution"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setVideoResolution(r2)
            java.lang.String r2 = "endcard_click_result"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setEndcard_click_result(r2)
            java.lang.String r2 = "video_url"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setVideoUrlEncode(r2)
            java.lang.String r2 = "watch_mile"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setWatchMile(r2)
            java.lang.String r2 = "view_com_time"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setVideoCompleteTime(r2)
            java.lang.String r2 = "t_imp"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setTImp(r2)
            java.lang.String r2 = "bty"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setBty(r2)
            java.lang.String r2 = "advImp"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setAdvImp(r2)
            java.lang.String r2 = "guidelines"
            int r4 = r7.getColumnIndex(r2)
            java.lang.String r4 = r7.getString(r4)
            r0.setGuidelines(r4)
            java.lang.String r4 = "offer_type"
            int r4 = r7.getColumnIndex(r4)
            int r4 = r7.getInt(r4)
            r0.setOfferType(r4)
            java.lang.String r4 = "html_url"
            int r5 = r7.getColumnIndex(r4)
            java.lang.String r5 = r7.getString(r5)
            r0.setHtmlUrl(r5)
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setGuidelines(r2)
            int r2 = r7.getColumnIndex(r4)
            java.lang.String r2 = r7.getString(r2)
            r0.setHtmlUrl(r2)
            java.lang.String r2 = "end_screen_url"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setEndScreenUrl(r2)
            java.lang.String r2 = "reward_name"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setRewardName(r2)
            java.lang.String r2 = "reward_amount"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setRewardAmount(r2)
            java.lang.String r2 = "reward_play_status"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setRewardPlayStatus(r2)
            java.lang.String r2 = "adv_id"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setAdvId(r2)
            java.lang.String r2 = "ttc_ct2"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setTtc_ct2(r2)
            java.lang.String r2 = "ttc_type"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setTtc_type(r2)
            java.lang.String r2 = "retarget"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setRetarget_offer(r2)
            java.lang.String r2 = "unitid"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setCampaignUnitId(r2)
            java.lang.String r2 = "native_ad_tracking"
            int r4 = r7.getColumnIndex(r2)
            java.lang.String r4 = r7.getString(r4)
            com.mbridge.msdk.foundation.entity.l r4 = com.mbridge.msdk.foundation.entity.CampaignEx.TrackingStr2Object(r4)
            r0.setNativeVideoTracking(r4)
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setNativeVideoTrackingString(r2)
            java.lang.String r2 = "video_end_type"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setVideo_end_type(r2)
            java.lang.String r2 = "endcard_url"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setendcard_url(r2)
            java.lang.String r2 = "playable_ads_without_video"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setPlayable_ads_without_video(r2)
            java.lang.String r2 = "loopback"
            int r4 = r7.getColumnIndex(r2)
            java.lang.String r4 = r7.getString(r4)
            r0.setLoopbackString(r4)
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            java.util.Map r2 = com.mbridge.msdk.foundation.entity.CampaignEx.loopbackStrToMap(r2)
            r0.setLoopbackMap(r2)
            java.lang.String r2 = "mof_template_url"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setMof_template_url(r2)
            java.lang.String r2 = "mof_tplid"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setMof_tplid(r2)
            java.lang.String r2 = "reward_teamplate"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx$c r2 = com.mbridge.msdk.foundation.entity.CampaignEx.c.a(r2)
            r0.setRewardTemplateMode(r2)
            java.lang.String r2 = "md5_file"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setVideoMD5Value(r2)
            java.lang.String r2 = "gif_url"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setGifUrl(r2)
            java.lang.String r2 = "nv_t2"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setNvT2(r2)
            java.lang.String r2 = "c_coi"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setClickTimeOutInterval(r2)
            java.lang.String r2 = "c_ua"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setcUA(r2)
            java.lang.String r2 = "imp_ua"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setImpUA(r2)
            java.lang.String r2 = "jm_pd"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setJmPd(r2)
            java.lang.String r2 = "is_deleted"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setIsDeleted(r2)
            java.lang.String r2 = "is_click"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setIsClick(r2)
            java.lang.String r2 = "is_add_sucesful"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setIsAddSuccesful(r2)
            java.lang.String r2 = "is_download_zip"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setIsDownLoadZip(r2)
            java.lang.String r2 = "ia_cache"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setInteractiveCache(r2)
            java.lang.String r2 = "ia_ori"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setKeyIaOri(r2)
            java.lang.String r2 = "ad_type"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setAdType(r2)
            java.lang.String r2 = "ia_ext1"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setIa_ext1(r2)
            java.lang.String r2 = "ia_ext2"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setIa_ext2(r2)
            java.lang.String r2 = "ia_rst"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setKeyIaRst(r2)
            java.lang.String r2 = "ia_url"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setKeyIaUrl(r2)
            java.lang.String r2 = "ia_icon"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setKeyIaIcon(r2)
            java.lang.String r2 = "fac"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setFac(r2)
            java.lang.String r2 = "tp_offer"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setTpOffer(r2)
            java.lang.String r2 = "gh_id"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setGhId(r2)
            java.lang.String r2 = "gh_path"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setGhPath(r2)
            java.lang.String r2 = "bind_id"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setBindId(r2)
            java.lang.String r2 = "oc_time"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setOc_time(r2)
            java.lang.String r2 = "oc_type"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setOc_type(r2)
            java.lang.String r2 = "t_list"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setT_list(r2)
            java.lang.String r2 = "adchoice"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            boolean r4 = android.text.TextUtils.isEmpty(r2)
            if (r4 != 0) goto L504
            com.mbridge.msdk.foundation.entity.CampaignEx$a r2 = com.mbridge.msdk.foundation.entity.CampaignEx.a.a(r2)
            r0.setAdchoice(r2)
        L504:
            java.lang.String r2 = "adchoice_size_height"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setAdchoiceSizeHeight(r2)
            java.lang.String r2 = "adchoice_size_width"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            r0.setAdchoiceSizeWidth(r2)
            java.lang.String r2 = "plct"
            int r2 = r7.getColumnIndex(r2)
            long r4 = r7.getLong(r2)
            r0.setPlct(r4)
            java.lang.String r2 = "plctb"
            int r2 = r7.getColumnIndex(r2)
            long r4 = r7.getLong(r2)
            r0.setPlctb(r4)
            java.lang.String r2 = "ad_zip"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setAdZip(r2)
            java.lang.String r2 = "ad_html"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setAdHtml(r2)
            java.lang.String r2 = "banner_url"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setBannerUrl(r2)
            java.lang.String r2 = "banner_html"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setBannerHtml(r2)
            java.lang.String r2 = "creative_id"
            int r2 = r7.getColumnIndex(r2)
            long r4 = r7.getLong(r2)
            r0.setCreativeId(r4)
            java.lang.String r2 = "is_bid_campaign"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            if (r2 != r3) goto L587
            r2 = r3
            goto L588
        L587:
            r2 = r1
        L588:
            r0.setIsBidCampaign(r2)
            java.lang.String r2 = "bid_token"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setBidToken(r2)
            java.lang.String r2 = "mraid"
            int r2 = r7.getColumnIndex(r2)
            java.lang.String r2 = r7.getString(r2)
            r0.setMraid(r2)
            java.lang.String r2 = "is_mraid_campaign"
            int r2 = r7.getColumnIndex(r2)
            int r2 = r7.getInt(r2)
            if (r2 != r3) goto L5b2
            r1 = r3
        L5b2:
            r0.setIsMraid(r1)
            java.lang.String r1 = "omid"
            int r1 = r7.getColumnIndex(r1)
            java.lang.String r1 = r7.getString(r1)
            r0.setOmid(r1)
            java.lang.String r1 = "ready_rate"
            int r1 = r7.getColumnIndex(r1)
            int r1 = r7.getInt(r1)
            r0.setReady_rate(r1)
            java.lang.String r1 = "ext_data"
            int r1 = r7.getColumnIndex(r1)
            java.lang.String r1 = r7.getString(r1)
            r0.setExt_data(r1)
            java.lang.String r1 = "nscpt"
            int r1 = r7.getColumnIndex(r1)
            int r1 = r7.getInt(r1)
            r0.setNscpt(r1)
            java.lang.String r1 = "req_ext_data"
            int r1 = r7.getColumnIndex(r1)
            java.lang.String r1 = r7.getString(r1)
            r0.setReq_ext_data(r1)
            java.lang.String r1 = "readyState"
            int r1 = r7.getColumnIndex(r1)
            int r1 = r7.getInt(r1)
            r0.setReadyState(r1)
            java.lang.String r1 = "load_timeout"
            int r1 = r7.getColumnIndex(r1)
            int r1 = r7.getInt(r1)
            r0.setLoadTimeoutState(r1)
            java.lang.String r1 = "placement_id"
            int r1 = r7.getColumnIndex(r1)
            java.lang.String r1 = r7.getString(r1)
            r0.setPlacementId(r1)
            java.lang.String r1 = "apk_alt"
            int r1 = r7.getColumnIndex(r1)
            int r1 = r7.getInt(r1)
            r0.setApkAlt(r1)
            java.lang.String r1 = "akdlui"
            int r1 = r7.getColumnIndex(r1)
            java.lang.String r1 = r7.getString(r1)
            r0.setAkdlui(r1)
            java.lang.String r1 = "ntbarpasbl"
            int r1 = r7.getColumnIndex(r1)
            int r1 = r7.getInt(r1)
            r0.setNtbarpasbl(r1)
            java.lang.String r1 = "ntbarpt"
            int r1 = r7.getColumnIndex(r1)
            int r1 = r7.getInt(r1)
            r0.setNtbarpt(r1)
            java.lang.String r1 = "atat_type"
            int r1 = r7.getColumnIndex(r1)
            int r1 = r7.getInt(r1)
            r0.setAtatType(r1)
            java.lang.String r1 = "rw_pl"
            int r1 = r7.getColumnIndex(r1)
            java.lang.String r1 = r7.getString(r1)
            com.mbridge.msdk.foundation.entity.RewardPlus r1 = com.mbridge.msdk.foundation.entity.RewardPlus.parseByString(r1)
            r0.setRewardPlus(r1)
            java.lang.String r1 = "apk_info"
            int r1 = r7.getColumnIndex(r1)
            java.lang.String r1 = r7.getString(r1)
            com.mbridge.msdk.out.ApkDisplayInfo r1 = com.mbridge.msdk.out.ApkDisplayInfo.parseByString(r1)
            r0.setApkDisplayInfo(r1)
            java.lang.String r1 = "flb"
            int r1 = r7.getColumnIndex(r1)
            int r1 = r7.getInt(r1)
            r0.setFlb(r1)
            java.lang.String r1 = "flb_skiptime"
            int r1 = r7.getColumnIndex(r1)
            int r1 = r7.getInt(r1)
            r0.setFlbSkipTime(r1)
            java.lang.String r1 = "cbd"
            int r1 = r7.getColumnIndex(r1)
            int r1 = r7.getInt(r1)
            r0.setCbd(r1)
            java.lang.String r1 = "vst"
            int r1 = r7.getColumnIndex(r1)
            int r1 = r7.getInt(r1)
            r0.setVst(r1)
            java.lang.String r1 = "adspace_t"
            int r1 = r7.getColumnIndex(r1)
            int r1 = r7.getInt(r1)
            r0.setAdSpaceT(r1)
            java.lang.String r1 = "vcn"
            int r1 = r7.getColumnIndex(r1)
            int r1 = r7.getInt(r1)
            r0.setVcn(r1)
            java.lang.String r1 = "token_r"
            int r1 = r7.getColumnIndex(r1)
            int r1 = r7.getInt(r1)
            r0.setTokenRule(r1)
            java.lang.String r1 = "encrypt_p"
            int r1 = r7.getColumnIndex(r1)
            java.lang.String r1 = r7.getString(r1)
            r0.setEncryptPrice(r1)
            java.lang.String r1 = "vck_t"
            int r1 = r7.getColumnIndex(r1)
            int r1 = r7.getInt(r1)
            r0.setVideoCheckType(r1)
            java.lang.String r1 = "vctn_t"
            int r1 = r7.getColumnIndex(r1)
            int r1 = r7.getInt(r1)
            r0.setVideoCtnType(r1)
            java.lang.String r1 = "rs_ignc_r"
            int r1 = r7.getColumnIndex(r1)
            java.lang.String r7 = r7.getString(r1)
            r0.setRsIgnoreCheckRuleByString(r7)
            goto L711
        L710:
            r0 = 0
        L711:
            return r0
    }

    private synchronized java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> h(java.lang.String r10) {
            r9 = this;
            monitor-enter(r9)
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r9.getReadableDatabase()     // Catch: java.lang.Throwable -> L6b5 java.lang.Exception -> L6ba
            android.database.Cursor r10 = r1.rawQuery(r10, r0)     // Catch: java.lang.Throwable -> L6b5 java.lang.Exception -> L6ba
            if (r10 == 0) goto L6af
            int r1 = r10.getCount()     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            if (r1 <= 0) goto L6af
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r1.<init>()     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
        L17:
            boolean r2 = r10.moveToNext()     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            if (r2 == 0) goto L6a6
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = new com.mbridge.msdk.foundation.entity.CampaignEx     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.<init>()     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "pv_urls"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r5 = 0
            if (r4 != 0) goto L51
            org.json.JSONArray r4 = new org.json.JSONArray     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r4.<init>(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r3.<init>()     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r6 = r5
        L3e:
            int r7 = r4.length()     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            if (r6 >= r7) goto L4e
            java.lang.String r7 = r4.getString(r6)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r3.add(r7)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r6 = r6 + 1
            goto L3e
        L4e:
            r2.setPv_urls(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
        L51:
            java.lang.String r3 = "id"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setId(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "tab"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setTab(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "package_name"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setPackageName(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "app_name"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setAppName(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "app_desc"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setAppDesc(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "app_size"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setSize(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "image_size"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setImageSize(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "icon_url"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setIconUrl(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "image_url"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setImageUrl(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "impression_url"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setImpressionURL(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "notice_url"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setNoticeUrl(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "download_url"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setClickURL(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "wtick"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setWtick(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "deeplink_url"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setDeepLinkUrl(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "user_activation"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            boolean r3 = java.lang.Boolean.parseBoolean(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setUserActivation(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "only_impression"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setOnlyImpressionURL(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "preclick"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r4 = 1
            if (r3 != r4) goto L134
            r3 = r4
            goto L135
        L134:
            r3 = r5
        L135:
            r2.setPreClick(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "template"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setTemplate(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "landing_type"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setLandingType(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "link_type"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setLinkType(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "click_mode"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setClick_mode(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "star"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            double r6 = java.lang.Double.parseDouble(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setRating(r6)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "number_rating"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setNumberRating(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "cti"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setClickInterval(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "cpti"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setPreClickInterval(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "ts"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            long r6 = r10.getLong(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setTimestamp(r6)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "level"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setCacheLevel(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "adSource"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setType(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "ad_call"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setAdCall(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "fc_a"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setFca(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "fc_b"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setFcb(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "ad_url_list"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setAd_url_list(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "video_length"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setVideoLength(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "video_size"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setVideoSize(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "video_resolution"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setVideoResolution(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "endcard_click_result"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setEndcard_click_result(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "video_url"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setVideoUrlEncode(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "watch_mile"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setWatchMile(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "view_com_time"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setVideoCompleteTime(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "t_imp"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setTImp(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "bty"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setBty(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "advImp"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setAdvImp(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "offer_type"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setOfferType(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "guidelines"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setGuidelines(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "html_url"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setHtmlUrl(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "end_screen_url"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setEndScreenUrl(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "reward_name"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setRewardName(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "reward_amount"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setRewardAmount(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "reward_play_status"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setRewardPlayStatus(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "adv_id"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setAdvId(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "ttc_ct2"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setTtc_ct2(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "ttc_type"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setTtc_type(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "retarget"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setRetarget_offer(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "unitid"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setCampaignUnitId(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "native_ad_tracking"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            com.mbridge.msdk.foundation.entity.l r3 = com.mbridge.msdk.foundation.entity.CampaignEx.TrackingStr2Object(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setNativeVideoTracking(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "native_ad_tracking"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setNativeVideoTrackingString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "video_end_type"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setVideo_end_type(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "endcard_url"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setendcard_url(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "playable_ads_without_video"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setPlayable_ads_without_video(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "loopback"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setLoopbackString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "loopback"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.util.Map r3 = com.mbridge.msdk.foundation.entity.CampaignEx.loopbackStrToMap(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setLoopbackMap(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "mof_template_url"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setMof_template_url(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "mof_tplid"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setMof_tplid(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "reward_teamplate"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            com.mbridge.msdk.foundation.entity.CampaignEx$c r3 = com.mbridge.msdk.foundation.entity.CampaignEx.c.a(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setRewardTemplateMode(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "md5_file"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setVideoMD5Value(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "gif_url"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setGifUrl(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "nv_t2"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setNvT2(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "c_coi"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setClickTimeOutInterval(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "c_ua"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setcUA(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "imp_ua"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setImpUA(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "gh_id"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setGhId(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "gh_path"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setGhPath(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "bind_id"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setBindId(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "oc_time"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setOc_time(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "oc_type"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setOc_type(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "t_list"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setT_list(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "adchoice"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            boolean r6 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            if (r6 != 0) goto L45e
            com.mbridge.msdk.foundation.entity.CampaignEx$a r3 = com.mbridge.msdk.foundation.entity.CampaignEx.a.a(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setAdchoice(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
        L45e:
            java.lang.String r3 = "adchoice_size_height"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setAdchoiceSizeHeight(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "adchoice_size_width"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setAdchoiceSizeWidth(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "plct"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            long r6 = r10.getLong(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setPlct(r6)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "plctb"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            long r6 = r10.getLong(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setPlctb(r6)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "ad_zip"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setAdZip(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "ad_html"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setAdHtml(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "banner_url"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setBannerUrl(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "banner_html"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setBannerHtml(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "creative_id"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            long r6 = r10.getLong(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setCreativeId(r6)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "is_bid_campaign"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            if (r3 != r4) goto L4e1
            r3 = r4
            goto L4e2
        L4e1:
            r3 = r5
        L4e2:
            r2.setIsBidCampaign(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "bid_token"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setBidToken(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "ad_type"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setAdType(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "fac"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setFac(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "tp_offer"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setTpOffer(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "mraid"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setMraid(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "is_mraid_campaign"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            if (r3 != r4) goto L533
            r5 = r4
        L533:
            r2.setIsMraid(r5)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "omid"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setOmid(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "ready_rate"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setReady_rate(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "ext_data"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setExt_data(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "nscpt"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setNscpt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "req_ext_data"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setReq_ext_data(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "readyState"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setReadyState(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "load_timeout"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setLoadTimeoutState(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "placement_id"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setPlacementId(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "apk_alt"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setApkAlt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "akdlui"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setAkdlui(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "ntbarpasbl"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setNtbarpasbl(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "ntbarpt"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setNtbarpt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "atat_type"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setAtatType(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "rw_pl"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            com.mbridge.msdk.foundation.entity.RewardPlus r3 = com.mbridge.msdk.foundation.entity.RewardPlus.parseByString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setRewardPlus(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "apk_info"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            com.mbridge.msdk.out.ApkDisplayInfo r3 = com.mbridge.msdk.out.ApkDisplayInfo.parseByString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setApkDisplayInfo(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "flb"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setFlb(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "flb_skiptime"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setFlbSkipTime(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "cbd"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setCbd(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "vst"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setVst(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "adspace_t"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setAdSpaceT(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "vcn"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setVcn(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "token_r"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setTokenRule(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "encrypt_p"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setEncryptPrice(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "vck_t"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setVideoCheckType(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "vctn_t"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            int r3 = r10.getInt(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setVideoCtnType(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "rs_ignc_r"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setRsIgnoreCheckRuleByString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = "aab"
            int r3 = r10.getColumnIndex(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            java.lang.String r3 = r10.getString(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            com.mbridge.msdk.foundation.entity.AabEntity r3 = com.mbridge.msdk.foundation.entity.AabEntity.parser(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r2.setAabEntity(r3)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            r1.add(r2)     // Catch: java.lang.Exception -> L6ad java.lang.Throwable -> L6ca
            goto L17
        L6a6:
            if (r10 == 0) goto L6ab
            r10.close()     // Catch: java.lang.Exception -> L6ab java.lang.Throwable -> L6d1
        L6ab:
            monitor-exit(r9)
            return r1
        L6ad:
            r1 = move-exception
            goto L6bc
        L6af:
            if (r10 == 0) goto L6c8
        L6b1:
            r10.close()     // Catch: java.lang.Exception -> L6c8 java.lang.Throwable -> L6d1
            goto L6c8
        L6b5:
            r10 = move-exception
            r8 = r0
            r0 = r10
            r10 = r8
            goto L6cb
        L6ba:
            r1 = move-exception
            r10 = r0
        L6bc:
            java.lang.String r2 = "CampaignDao"
            java.lang.String r1 = r1.getLocalizedMessage()     // Catch: java.lang.Throwable -> L6ca
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)     // Catch: java.lang.Throwable -> L6ca
            if (r10 == 0) goto L6c8
            goto L6b1
        L6c8:
            monitor-exit(r9)
            return r0
        L6ca:
            r0 = move-exception
        L6cb:
            if (r10 == 0) goto L6d0
            r10.close()     // Catch: java.lang.Exception -> L6d0 java.lang.Throwable -> L6d1
        L6d0:
            throw r0     // Catch: java.lang.Throwable -> L6d1
        L6d1:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
    }

    public final synchronized int a(java.lang.String r10, long r11) {
            r9 = this;
            monitor-enter(r9)
            r0 = 0
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L5a
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L5a
            java.lang.String r2 = r2.k()     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L5a
            com.mbridge.msdk.c.a r1 = r1.b(r2)     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L5a
            if (r1 != 0) goto L1c
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L5a
            com.mbridge.msdk.c.a r1 = r1.b()     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L5a
        L1c:
            long r1 = r1.W()     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L5a
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 * r3
            r9.a(r1, r10)     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L5a
            r5 = 0
            r6 = 0
            r7 = 1
            r8 = 0
            r3 = r9
            r4 = r10
            java.util.List r10 = r3.a(r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L5a
            if (r10 == 0) goto L54
            boolean r3 = r10.isEmpty()     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L5a
            if (r3 == 0) goto L39
            goto L54
        L39:
            java.util.Iterator r10 = r10.iterator()     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L5a
        L3d:
            boolean r3 = r10.hasNext()     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L5a
            if (r3 == 0) goto L51
            java.lang.Object r3 = r10.next()     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L5a
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L5a
            boolean r3 = r3.isSpareOffer(r11, r1)     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L5a
            if (r3 != 0) goto L3d
            monitor-exit(r9)
            return r0
        L51:
            r10 = 1
            monitor-exit(r9)
            return r10
        L54:
            r10 = -1
            monitor-exit(r9)
            return r10
        L57:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
        L5a:
            monitor-exit(r9)
            return r0
    }

    public final synchronized long a(com.mbridge.msdk.foundation.entity.CampaignEx r11, java.lang.String r12, int r13) {
            r10 = this;
            monitor-enter(r10)
            if (r11 != 0) goto L7
            r11 = 0
            monitor-exit(r10)
            return r11
        L7:
            r0 = -1
            android.database.sqlite.SQLiteDatabase r2 = r10.getWritableDatabase()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            if (r2 != 0) goto L11
            monitor-exit(r10)
            return r0
        L11:
            android.content.ContentValues r2 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.<init>()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "id"
            java.lang.String r4 = r11.getId()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.util.List r3 = r11.getPv_urls()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            if (r3 == 0) goto L55
            java.util.List r3 = r11.getPv_urls()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            if (r3 <= 0) goto L55
            org.json.JSONArray r3 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r3.<init>()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.util.List r4 = r11.getPv_urls()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
        L3c:
            boolean r5 = r4.hasNext()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            if (r5 == 0) goto L4c
            java.lang.Object r5 = r4.next()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r3.put(r5)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            goto L3c
        L4c:
            java.lang.String r4 = "pv_urls"
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r4, r3)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
        L55:
            java.lang.String r3 = "unitid"
            r2.put(r3, r12)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "number_rating"
            int r4 = r11.getNumberRating()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "request_id"
            java.lang.String r4 = r11.getRequestId()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "tab"
            int r4 = r11.getTab()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "package_name"
            java.lang.String r4 = r11.getPackageName()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "app_name"
            java.lang.String r4 = r11.getAppName()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "app_desc"
            java.lang.String r4 = r11.getAppDesc()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "app_size"
            java.lang.String r4 = r11.getSize()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "image_size"
            java.lang.String r4 = r11.getImageSize()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "icon_url"
            java.lang.String r4 = r11.getIconUrl()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "image_url"
            java.lang.String r4 = r11.getImageUrl()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "impression_url"
            java.lang.String r4 = r11.getImpressionURL()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "notice_url"
            java.lang.String r4 = r11.getNoticeUrl()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "download_url"
            java.lang.String r4 = r11.getClickURL()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "wtick"
            int r4 = r11.getWtick()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "deeplink_url"
            java.lang.String r4 = r11.getDeepLinkURL()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "user_activation"
            boolean r4 = r11.getUserActivation()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r4 = java.lang.Boolean.toString(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "only_impression"
            java.lang.String r4 = r11.getOnlyImpressionURL()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "ts"
            long r4 = r11.getTimestamp()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "template"
            int r4 = r11.getTemplate()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "click_mode"
            java.lang.String r4 = r11.getClick_mode()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "landing_type"
            java.lang.String r4 = r11.getLandingType()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "link_type"
            int r4 = r11.getLinkType()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "star"
            double r4 = r11.getRating()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Double r4 = java.lang.Double.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "cti"
            int r4 = r11.getClickInterval()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "cpti"
            int r4 = r11.getPreClickInterval()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "preclick"
            boolean r4 = r11.isPreClick()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "level"
            int r4 = r11.getCacheLevel()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "adSource"
            int r4 = r11.getType()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "ad_call"
            java.lang.String r4 = r11.getAdCall()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "fc_a"
            int r4 = r11.getFca()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "fc_b"
            int r4 = r11.getFcb()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "ad_url_list"
            java.lang.String r4 = r11.getAd_url_list()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "video_url"
            java.lang.String r4 = r11.getVideoUrlEncode()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "video_size"
            int r4 = r11.getVideoSize()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "video_length"
            int r4 = r11.getVideoLength()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "video_resolution"
            java.lang.String r4 = r11.getVideoResolution()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "endcard_click_result"
            int r4 = r11.getEndcard_click_result()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "watch_mile"
            int r4 = r11.getWatchMile()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "view_com_time"
            int r4 = r11.getVideoCompleteTime()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "advImp"
            java.lang.String r4 = r11.getAdvImp()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "bty"
            int r4 = r11.getBty()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "t_imp"
            int r4 = r11.getTImp()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "guidelines"
            java.lang.String r4 = r11.getGuidelines()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "offer_type"
            int r4 = r11.getOfferType()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "html_url"
            java.lang.String r4 = r11.getHtmlUrl()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "end_screen_url"
            java.lang.String r4 = r11.getEndScreenUrl()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "reward_amount"
            int r4 = r11.getRewardAmount()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "reward_name"
            java.lang.String r4 = r11.getRewardName()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "reward_play_status"
            int r4 = r11.getRewardPlayStatus()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "adv_id"
            java.lang.String r4 = r11.getAdvId()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "ttc_ct2"
            int r4 = r11.getTtc_ct2()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            int r4 = r4 * 1000
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "ttc_type"
            int r4 = r11.getTtc_type()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "retarget"
            int r4 = r11.getRetarget_offer()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "native_ad_tracking"
            java.lang.String r4 = r11.getNativeVideoTrackingString()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "playable_ads_without_video"
            int r4 = r11.getPlayable_ads_without_video()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "endcard_url"
            java.lang.String r4 = r11.getendcard_url()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "video_end_type"
            int r4 = r11.getVideo_end_type()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "loopback"
            java.lang.String r4 = r11.getLoopbackString()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "md5_file"
            java.lang.String r4 = r11.getVideoMD5Value()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "nv_t2"
            int r4 = r11.getNvT2()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "gif_url"
            java.lang.String r4 = r11.getGifUrl()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            com.mbridge.msdk.foundation.entity.CampaignEx$c r3 = r11.getRewardTemplateMode()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            if (r3 == 0) goto L310
            java.lang.String r3 = "reward_teamplate"
            com.mbridge.msdk.foundation.entity.CampaignEx$c r4 = r11.getRewardTemplateMode()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r4 = r4.a()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
        L310:
            java.lang.String r3 = "c_coi"
            int r4 = r11.getClickTimeOutInterval()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "c_ua"
            int r4 = r11.getcUA()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "imp_ua"
            int r4 = r11.getImpUA()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "jm_pd"
            int r4 = r11.getJmPd()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "is_deleted"
            int r4 = r11.getIsDeleted()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "is_click"
            int r4 = r11.getIsClick()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "is_add_sucesful"
            int r4 = r11.getIsAddSuccesful()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "short_ctime"
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "ia_icon"
            java.lang.String r4 = r11.getKeyIaIcon()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "ia_url"
            java.lang.String r4 = r11.getKeyIaUrl()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "ia_rst"
            int r4 = r11.getKeyIaRst()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "ia_ori"
            int r4 = r11.getKeyIaOri()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "ad_type"
            int r4 = r11.getAdType()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "ia_ext1"
            java.lang.String r4 = r11.getIa_ext1()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "ia_ext2"
            java.lang.String r4 = r11.getIa_ext2()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "is_download_zip"
            int r4 = r11.getIsDownLoadZip()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "ia_cache"
            java.lang.String r4 = r11.getInteractiveCache()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "gh_id"
            java.lang.String r4 = r11.getGhId()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "gh_path"
            java.lang.String r4 = r11.getGhPath()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "bind_id"
            java.lang.String r4 = r11.getBindId()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "oc_time"
            int r4 = r11.getOc_time()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "oc_type"
            int r4 = r11.getOc_type()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "t_list"
            java.lang.String r4 = r11.getT_list()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            com.mbridge.msdk.foundation.entity.CampaignEx$a r3 = r11.getAdchoice()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            if (r3 == 0) goto L440
            java.lang.String r4 = "adchoice"
            java.lang.String r5 = r3.c()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r4, r5)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r4 = "adchoice_size_height"
            int r5 = r3.b()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r4, r5)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r4 = "adchoice_size_width"
            int r3 = r3.a()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r4, r3)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
        L440:
            java.lang.String r3 = "plct"
            long r4 = r11.getPlct()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "plctb"
            long r4 = r11.getPlctb()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "ad_html"
            java.lang.String r4 = r11.getAdHtml()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "ad_zip"
            java.lang.String r4 = r11.getAdZip()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "banner_url"
            java.lang.String r4 = r11.getBannerUrl()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "banner_html"
            java.lang.String r4 = r11.getBannerHtml()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "creative_id"
            long r4 = r11.getCreativeId()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "is_bid_campaign"
            boolean r4 = r11.isBidCampaign()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "bid_token"
            java.lang.String r4 = r11.getBidToken()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "mraid"
            java.lang.String r4 = r11.getMraid()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "is_mraid_campaign"
            boolean r4 = r11.isMraid()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "omid"
            java.lang.String r4 = r11.getOmid()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "mof_tplid"
            int r4 = r11.getMof_tplid()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            com.mbridge.msdk.foundation.entity.RewardPlus r3 = r11.getRewardPlus()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            if (r3 == 0) goto L4ee
            com.mbridge.msdk.foundation.entity.RewardPlus r3 = r11.getRewardPlus()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            org.json.JSONObject r3 = r3.toJsonObject()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            if (r3 == 0) goto L4ee
            java.lang.String r3 = "rw_pl"
            com.mbridge.msdk.foundation.entity.RewardPlus r4 = r11.getRewardPlus()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            org.json.JSONObject r4 = r4.toJsonObject()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
        L4ee:
            com.mbridge.msdk.out.ApkDisplayInfo r3 = r11.getApkDisplayInfo()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            if (r3 == 0) goto L50f
            com.mbridge.msdk.out.ApkDisplayInfo r3 = r11.getApkDisplayInfo()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            org.json.JSONObject r3 = r3.toJson()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            if (r3 == 0) goto L50f
            java.lang.String r3 = "apk_info"
            com.mbridge.msdk.out.ApkDisplayInfo r4 = r11.getApkDisplayInfo()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            org.json.JSONObject r4 = r4.toJson()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
        L50f:
            java.lang.String r3 = "ready_rate"
            int r4 = r11.getReady_rate()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "ext_data"
            java.lang.String r4 = r11.getExt_data()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "nscpt"
            int r4 = r11.getNscpt()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "mof_template_url"
            java.lang.String r4 = r11.getMof_template_url()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "req_ext_data"
            java.lang.String r4 = r11.getReq_ext_data()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "readyState"
            int r4 = r11.getReadyState()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "load_timeout"
            int r4 = r11.getLoadTimeoutState()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "placement_id"
            java.lang.String r4 = r11.getPlacementId()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "apk_alt"
            int r4 = r11.getApkAlt()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "atat_type"
            int r4 = r11.getAtatType()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "ntbarpasbl"
            int r4 = r11.getNtbarpasbl()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "ntbarpt"
            int r4 = r11.getNtbarpt()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "akdlui"
            java.lang.String r4 = r11.getAkdlui()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "flb"
            int r4 = r11.getFlb()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "adspace_t"
            int r4 = r11.getAdSpaceT()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "cbd"
            int r4 = r11.getCbd()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "vst"
            int r4 = r11.getVst()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "flb_skiptime"
            int r4 = r11.getFlbSkipTime()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "vcn"
            int r4 = r11.getVcn()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "token_r"
            int r4 = r11.getTokenRule()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "encrypt_p"
            java.lang.String r4 = r11.getEncryptPrice()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "vck_t"
            int r4 = r11.getVideoCheckType()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "vctn_t"
            int r4 = r11.getVideoCtnType()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "rs_ignc_r"
            java.lang.String r4 = r11.getRsIgnoreCheckRuleString()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "tp_offer"
            int r4 = r11.getTpOffer()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r3 = "fac"
            int r4 = r11.getFac()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            com.mbridge.msdk.foundation.entity.AabEntity r3 = r11.getAabEntity()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            if (r3 == 0) goto L65c
            java.lang.String r3 = "aab"
            com.mbridge.msdk.foundation.entity.AabEntity r4 = r11.getAabEntity()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            org.json.JSONObject r4 = r4.toJson()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
        L65c:
            java.lang.String r4 = r11.getId()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            int r5 = r11.getTab()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            int r8 = r11.getType()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            boolean r9 = r11.isBidCampaign()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r3 = r10
            r6 = r12
            r7 = r13
            boolean r13 = r3.a(r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r3 = 0
            if (r13 == 0) goto L6e0
            boolean r13 = r11.isBidCampaign()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            if (r13 == 0) goto L69d
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r11.<init>()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r13 = "unitid = "
            r11.append(r13)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r11.append(r12)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r12 = " AND "
            r11.append(r12)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r12 = "is_bid_campaign"
            r11.append(r12)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r12 = " = 1"
            r11.append(r12)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            goto L6d3
        L69d:
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r13.<init>()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r4 = "id = "
            r13.append(r4)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r11 = r11.getId()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r13.append(r11)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r11 = " AND "
            r13.append(r11)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r11 = "unitid"
            r13.append(r11)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r11 = " = "
            r13.append(r11)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            r13.append(r12)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r11 = " AND "
            r13.append(r11)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r11 = "is_bid_campaign"
            r13.append(r11)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r11 = " = 0"
            r13.append(r11)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r11 = r13.toString()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
        L6d3:
            android.database.sqlite.SQLiteDatabase r12 = r10.getWritableDatabase()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r13 = "campaign"
            int r11 = r12.update(r13, r2, r11, r3)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            long r11 = (long) r11
            monitor-exit(r10)
            return r11
        L6e0:
            android.database.sqlite.SQLiteDatabase r11 = r10.getWritableDatabase()     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            java.lang.String r12 = "campaign"
            long r11 = r11.insert(r12, r3, r2)     // Catch: java.lang.Throwable -> L6ec java.lang.Exception -> L6ee
            monitor-exit(r10)
            return r11
        L6ec:
            r11 = move-exception
            goto L6fa
        L6ee:
            r11 = move-exception
            java.lang.String r12 = "CampaignDao"
            java.lang.String r11 = r11.getLocalizedMessage()     // Catch: java.lang.Throwable -> L6ec
            com.mbridge.msdk.foundation.tools.z.d(r12, r11)     // Catch: java.lang.Throwable -> L6ec
            monitor-exit(r10)
            return r0
        L6fa:
            monitor-exit(r10)
            throw r11
    }

    public final java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> a(java.lang.String r9, int r10) {
            r8 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = " WHERE unitid = '"
            r0.append(r1)
            r0.append(r9)
            java.lang.String r9 = "' AND "
            r0.append(r9)
            java.lang.String r9 = "is_deleted"
            r0.append(r9)
            java.lang.String r9 = "="
            r0.append(r9)
            r0.append(r10)
            java.lang.String r9 = r0.toString()
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r0 = "SELECT * FROM campaign"
            r10.append(r0)
            r10.append(r9)
            java.lang.String r9 = r10.toString()
            r10 = 0
            java.lang.Object r0 = new java.lang.Object     // Catch: java.lang.Throwable -> L790 java.lang.Exception -> L795
            r0.<init>()     // Catch: java.lang.Throwable -> L790 java.lang.Exception -> L795
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L790 java.lang.Exception -> L795
            android.database.sqlite.SQLiteDatabase r1 = r8.getReadableDatabase()     // Catch: java.lang.Throwable -> L788
            android.database.Cursor r9 = r1.rawQuery(r9, r10)     // Catch: java.lang.Throwable -> L788
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L78e
            if (r9 == 0) goto L782
            int r0 = r9.getCount()     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            if (r0 <= 0) goto L782
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r0.<init>()     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
        L51:
            boolean r1 = r9.moveToNext()     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            if (r1 == 0) goto L77c
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = new com.mbridge.msdk.foundation.entity.CampaignEx     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.<init>()     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "pv_urls"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r4 = 0
            if (r3 != 0) goto L8b
            org.json.JSONArray r3 = new org.json.JSONArray     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r3.<init>(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r2.<init>()     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r5 = r4
        L78:
            int r6 = r3.length()     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            if (r5 >= r6) goto L88
            java.lang.String r6 = r3.getString(r5)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r2.add(r6)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r5 = r5 + 1
            goto L78
        L88:
            r1.setPv_urls(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
        L8b:
            java.lang.String r2 = "id"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setId(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "tab"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setTab(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "package_name"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setPackageName(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "app_name"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setAppName(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "app_desc"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setAppDesc(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "app_size"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setSize(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "image_size"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setImageSize(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "icon_url"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setIconUrl(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "image_url"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setImageUrl(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "impression_url"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setImpressionURL(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "notice_url"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setNoticeUrl(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "download_url"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setClickURL(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "wtick"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setWtick(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "deeplink_url"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setDeepLinkUrl(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "user_activation"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            boolean r2 = java.lang.Boolean.parseBoolean(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setUserActivation(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "only_impression"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setOnlyImpressionURL(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "preclick"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r3 = 1
            if (r2 != r3) goto L16e
            r2 = r3
            goto L16f
        L16e:
            r2 = r4
        L16f:
            r1.setPreClick(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "template"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setTemplate(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "landing_type"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setLandingType(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "link_type"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setLinkType(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "click_mode"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setClick_mode(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "star"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            double r5 = java.lang.Double.parseDouble(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setRating(r5)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "number_rating"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setNumberRating(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "cti"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setClickInterval(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "cpti"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setPreClickInterval(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "ts"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            long r5 = r9.getLong(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setTimestamp(r5)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "level"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setCacheLevel(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "ad_call"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setAdCall(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "fc_a"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setFca(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "fc_b"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setFcb(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "ad_url_list"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setAd_url_list(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "video_length"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setVideoLength(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "video_size"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setVideoSize(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "video_resolution"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setVideoResolution(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "endcard_click_result"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setEndcard_click_result(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "video_url"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setVideoUrlEncode(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "watch_mile"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setWatchMile(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "view_com_time"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setVideoCompleteTime(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "t_imp"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setTImp(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "bty"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setBty(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "advImp"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setAdvImp(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "guidelines"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setGuidelines(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "offer_type"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setOfferType(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "html_url"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setHtmlUrl(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "guidelines"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setGuidelines(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "html_url"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setHtmlUrl(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "end_screen_url"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setEndScreenUrl(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "reward_name"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setRewardName(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "reward_amount"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setRewardAmount(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "reward_play_status"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setRewardPlayStatus(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "adv_id"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setAdvId(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "ttc_ct2"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setTtc_ct2(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "ttc_type"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setTtc_type(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "retarget"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setRetarget_offer(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "unitid"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setCampaignUnitId(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "native_ad_tracking"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            com.mbridge.msdk.foundation.entity.l r2 = com.mbridge.msdk.foundation.entity.CampaignEx.TrackingStr2Object(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setNativeVideoTracking(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "native_ad_tracking"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setNativeVideoTrackingString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "video_end_type"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setVideo_end_type(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "endcard_url"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setendcard_url(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "playable_ads_without_video"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setPlayable_ads_without_video(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "loopback"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setLoopbackString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "loopback"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.util.Map r2 = com.mbridge.msdk.foundation.entity.CampaignEx.loopbackStrToMap(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setLoopbackMap(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "reward_teamplate"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            com.mbridge.msdk.foundation.entity.CampaignEx$c r2 = com.mbridge.msdk.foundation.entity.CampaignEx.c.a(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setRewardTemplateMode(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "md5_file"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setVideoMD5Value(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "gif_url"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setGifUrl(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "nv_t2"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setNvT2(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "c_coi"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setClickTimeOutInterval(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "c_ua"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setcUA(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "imp_ua"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setImpUA(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "is_deleted"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setIsDeleted(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "is_click"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setIsClick(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "is_add_sucesful"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setIsAddSuccesful(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "ia_ori"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setKeyIaOri(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "ad_type"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setAdType(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "ia_ext1"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setIa_ext1(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "ia_ext2"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setIa_ext2(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "ia_rst"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setKeyIaRst(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "ia_url"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setKeyIaUrl(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "ia_icon"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setKeyIaIcon(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "is_download_zip"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setIsDownLoadZip(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "ia_cache"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setInteractiveCache(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "fac"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setFac(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "tp_offer"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setTpOffer(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "gh_id"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setGhId(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "gh_path"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setGhPath(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "bind_id"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setBindId(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "oc_time"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setOc_time(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "oc_type"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setOc_type(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "t_list"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setT_list(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "adchoice"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            boolean r5 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            if (r5 != 0) goto L541
            com.mbridge.msdk.foundation.entity.CampaignEx$a r2 = com.mbridge.msdk.foundation.entity.CampaignEx.a.a(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setAdchoice(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
        L541:
            java.lang.String r2 = "adchoice_size_height"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setAdchoiceSizeHeight(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "adchoice_size_width"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setAdchoiceSizeWidth(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "plct"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            long r5 = r9.getLong(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setPlct(r5)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "plctb"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            long r5 = r9.getLong(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setPlctb(r5)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "ad_zip"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setAdZip(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "ad_html"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setAdHtml(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "banner_url"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setBannerUrl(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "banner_html"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setBannerHtml(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "creative_id"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            long r5 = r9.getLong(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setCreativeId(r5)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "is_bid_campaign"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            if (r2 != r3) goto L5c4
            r2 = r3
            goto L5c5
        L5c4:
            r2 = r4
        L5c5:
            r1.setIsBidCampaign(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "bid_token"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setBidToken(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "mraid"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setMraid(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "is_mraid_campaign"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            if (r2 != r3) goto L5ef
            r4 = r3
        L5ef:
            r1.setIsMraid(r4)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "omid"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setOmid(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "ready_rate"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setReady_rate(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "ext_data"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setExt_data(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "nscpt"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setNscpt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "mof_template_url"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setMof_template_url(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "mof_tplid"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setMof_tplid(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "req_ext_data"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setReq_ext_data(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "readyState"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setReadyState(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "load_timeout"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setLoadTimeoutState(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "placement_id"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setPlacementId(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "apk_alt"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setApkAlt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "akdlui"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setAkdlui(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "ntbarpasbl"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setNtbarpasbl(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "ntbarpt"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setNtbarpt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "atat_type"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setAtatType(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "rw_pl"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            com.mbridge.msdk.foundation.entity.RewardPlus r2 = com.mbridge.msdk.foundation.entity.RewardPlus.parseByString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setRewardPlus(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "apk_info"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            com.mbridge.msdk.out.ApkDisplayInfo r2 = com.mbridge.msdk.out.ApkDisplayInfo.parseByString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setApkDisplayInfo(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "flb"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setFlb(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "flb_skiptime"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setFlbSkipTime(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "cbd"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setCbd(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "vst"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setVst(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "adspace_t"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setAdSpaceT(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "vcn"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setVcn(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "token_r"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setTokenRule(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "encrypt_p"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setEncryptPrice(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "vck_t"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setVideoCheckType(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "vctn_t"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setVideoCtnType(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "rs_ignc_r"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setRsIgnoreCheckRuleByString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = "aab"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            com.mbridge.msdk.foundation.entity.AabEntity r2 = com.mbridge.msdk.foundation.entity.AabEntity.parser(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r1.setAabEntity(r2)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            r0.add(r1)     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
            goto L51
        L77c:
            if (r9 == 0) goto L781
            r9.close()     // Catch: java.lang.Exception -> L781
        L781:
            return r0
        L782:
            if (r9 == 0) goto L7a3
        L784:
            r9.close()     // Catch: java.lang.Exception -> L7a3
            goto L7a3
        L788:
            r1 = move-exception
            r9 = r10
        L78a:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L78e
            throw r1     // Catch: java.lang.Exception -> L78c java.lang.Throwable -> L7a4
        L78c:
            r0 = move-exception
            goto L797
        L78e:
            r1 = move-exception
            goto L78a
        L790:
            r9 = move-exception
            r7 = r10
            r10 = r9
            r9 = r7
            goto L7a5
        L795:
            r0 = move-exception
            r9 = r10
        L797:
            java.lang.String r1 = "CampaignDao"
            java.lang.String r0 = r0.getLocalizedMessage()     // Catch: java.lang.Throwable -> L7a4
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)     // Catch: java.lang.Throwable -> L7a4
            if (r9 == 0) goto L7a3
            goto L784
        L7a3:
            return r10
        L7a4:
            r10 = move-exception
        L7a5:
            if (r9 == 0) goto L7aa
            r9.close()     // Catch: java.lang.Exception -> L7aa
        L7aa:
            throw r10
    }

    public final java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> a(java.lang.String r3, int r4, int r5, int r6) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = " WHERE unitid = '"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "' AND "
            r0.append(r3)
            java.lang.String r3 = "level"
            r0.append(r3)
            java.lang.String r3 = " = "
            r0.append(r3)
            r0.append(r5)
            java.lang.String r5 = " AND "
            r0.append(r5)
            java.lang.String r5 = "adSource"
            r0.append(r5)
            r0.append(r3)
            r0.append(r6)
            java.lang.String r3 = r0.toString()
            if (r4 <= 0) goto L47
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = " LIMIT "
            r5.append(r6)
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            goto L49
        L47:
            java.lang.String r4 = ""
        L49:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "SELECT * FROM campaign"
            r5.append(r6)
            r5.append(r3)
            r5.append(r4)
            java.lang.String r3 = r5.toString()
            java.util.List r3 = r2.h(r3)
            return r3
    }

    public final synchronized java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> a(java.lang.String r3, int r4, int r5, int r6, java.lang.String r7) {
            r2 = this;
            monitor-enter(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbc
            r0.<init>()     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r1 = " WHERE unitid = '"
            r0.append(r1)     // Catch: java.lang.Throwable -> Lbc
            r0.append(r3)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = "'"
            r0.append(r3)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = " AND "
            r0.append(r3)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = "level"
            r0.append(r3)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = " = "
            r0.append(r3)     // Catch: java.lang.Throwable -> Lbc
            r0.append(r5)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = " AND "
            r0.append(r3)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = "adSource"
            r0.append(r3)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = " = "
            r0.append(r3)     // Catch: java.lang.Throwable -> Lbc
            r0.append(r6)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> Lbc
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbc
            r5.<init>()     // Catch: java.lang.Throwable -> Lbc
            r5.append(r3)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = " AND is_bid_campaign = 1"
            r5.append(r3)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = r5.toString()     // Catch: java.lang.Throwable -> Lbc
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbc
            r5.<init>()     // Catch: java.lang.Throwable -> Lbc
            r5.append(r3)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = " AND readyState = '0'"
            r5.append(r3)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = r5.toString()     // Catch: java.lang.Throwable -> Lbc
            boolean r5 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Lbc
            if (r5 != 0) goto L7c
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbc
            r5.<init>()     // Catch: java.lang.Throwable -> Lbc
            r5.append(r3)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = " AND request_id = '"
            r5.append(r3)     // Catch: java.lang.Throwable -> Lbc
            r5.append(r7)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = "'"
            r5.append(r3)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = r5.toString()     // Catch: java.lang.Throwable -> Lbc
        L7c:
            java.lang.String r5 = ""
            if (r4 <= 0) goto L91
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbc
            r5.<init>()     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r6 = " LIMIT "
            r5.append(r6)     // Catch: java.lang.Throwable -> Lbc
            r5.append(r4)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> Lbc
        L91:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbc
            r4.<init>()     // Catch: java.lang.Throwable -> Lbc
            r4.append(r3)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = " order by ts ASC"
            r4.append(r3)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> Lbc
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbc
            r4.<init>()     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r6 = "SELECT * FROM campaign"
            r4.append(r6)     // Catch: java.lang.Throwable -> Lbc
            r4.append(r3)     // Catch: java.lang.Throwable -> Lbc
            r4.append(r5)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> Lbc
            java.util.List r3 = r2.h(r3)     // Catch: java.lang.Throwable -> Lbc
            monitor-exit(r2)
            return r3
        Lbc:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final synchronized java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> a(java.lang.String r3, int r4, int r5, int r6, boolean r7) {
            r2 = this;
            monitor-enter(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8a
            r0.<init>()     // Catch: java.lang.Throwable -> L8a
            java.lang.String r1 = " WHERE unitid = '"
            r0.append(r1)     // Catch: java.lang.Throwable -> L8a
            r0.append(r3)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r3 = "' AND "
            r0.append(r3)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r3 = "level"
            r0.append(r3)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r3 = " = "
            r0.append(r3)     // Catch: java.lang.Throwable -> L8a
            r0.append(r5)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r3 = " AND "
            r0.append(r3)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r3 = "adSource"
            r0.append(r3)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r3 = " = "
            r0.append(r3)     // Catch: java.lang.Throwable -> L8a
            r0.append(r6)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L8a
            if (r7 == 0) goto L4a
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8a
            r5.<init>()     // Catch: java.lang.Throwable -> L8a
            r5.append(r3)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r3 = " AND is_bid_campaign = 1"
            r5.append(r3)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r3 = r5.toString()     // Catch: java.lang.Throwable -> L8a
            goto L5b
        L4a:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8a
            r5.<init>()     // Catch: java.lang.Throwable -> L8a
            r5.append(r3)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r3 = " AND is_bid_campaign = 0"
            r5.append(r3)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r3 = r5.toString()     // Catch: java.lang.Throwable -> L8a
        L5b:
            java.lang.String r5 = ""
            if (r4 <= 0) goto L70
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8a
            r5.<init>()     // Catch: java.lang.Throwable -> L8a
            java.lang.String r6 = " LIMIT "
            r5.append(r6)     // Catch: java.lang.Throwable -> L8a
            r5.append(r4)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L8a
        L70:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8a
            r4.<init>()     // Catch: java.lang.Throwable -> L8a
            java.lang.String r6 = "SELECT * FROM campaign"
            r4.append(r6)     // Catch: java.lang.Throwable -> L8a
            r4.append(r3)     // Catch: java.lang.Throwable -> L8a
            r4.append(r5)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L8a
            java.util.List r3 = r2.h(r3)     // Catch: java.lang.Throwable -> L8a
            monitor-exit(r2)
            return r3
        L8a:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final synchronized void a() {
            r4 = this;
            monitor-enter(r4)
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            r2 = 3600000(0x36ee80, double:1.7786363E-317)
            long r0 = r0 - r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            r2.<init>()     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            java.lang.String r3 = "ts<"
            r2.append(r3)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            r2.append(r0)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            java.lang.String r0 = " AND "
            r2.append(r0)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            java.lang.String r0 = "ts"
            r2.append(r0)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            java.lang.String r0 = ">"
            r2.append(r0)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            r0 = 0
            r2.append(r0)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            android.database.sqlite.SQLiteDatabase r1 = r4.getWritableDatabase()     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            if (r1 == 0) goto L4a
            android.database.sqlite.SQLiteDatabase r1 = r4.getWritableDatabase()     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            java.lang.String r2 = "campaign"
            r3 = 0
            r1.delete(r2, r0, r3)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            goto L4a
        L3e:
            r0 = move-exception
            goto L4c
        L40:
            r0 = move-exception
            java.lang.String r1 = "CampaignDao"
            java.lang.String r0 = r0.getLocalizedMessage()     // Catch: java.lang.Throwable -> L3e
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)     // Catch: java.lang.Throwable -> L3e
        L4a:
            monitor-exit(r4)
            return
        L4c:
            monitor-exit(r4)
            throw r0
    }

    public final synchronized void a(long r5, java.lang.String r7) {
            r4 = this;
            monitor-enter(r4)
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L63
            long r5 = r0 - r5
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L63
            r2.<init>()     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L63
            java.lang.String r3 = "(plctb>0 and (plctb* 1000+ts)<"
            r2.append(r3)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L63
            r2.append(r0)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L63
            java.lang.String r0 = ") or ("
            r2.append(r0)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L63
            java.lang.String r0 = "plctb"
            r2.append(r0)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L63
            java.lang.String r0 = "<="
            r2.append(r0)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L63
            r0 = 0
            r2.append(r0)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L63
            java.lang.String r1 = " and "
            r2.append(r1)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L63
            java.lang.String r1 = "ts"
            r2.append(r1)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L63
            java.lang.String r1 = "<"
            r2.append(r1)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L63
            r2.append(r5)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L63
            java.lang.String r5 = ") and "
            r2.append(r5)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L63
            java.lang.String r5 = "unitid"
            r2.append(r5)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L63
            java.lang.String r5 = "=?"
            r2.append(r5)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L63
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L63
            r6 = 1
            java.lang.String[] r6 = new java.lang.String[r6]     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L63
            r6[r0] = r7     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L63
            android.database.sqlite.SQLiteDatabase r7 = r4.getWritableDatabase()     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L63
            if (r7 == 0) goto L6d
            android.database.sqlite.SQLiteDatabase r7 = r4.getWritableDatabase()     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L63
            java.lang.String r0 = "campaign"
            r7.delete(r0, r5, r6)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L63
            goto L6d
        L61:
            r5 = move-exception
            goto L6f
        L63:
            r5 = move-exception
            java.lang.String r6 = com.mbridge.msdk.foundation.db.f.a     // Catch: java.lang.Throwable -> L61
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Throwable -> L61
            com.mbridge.msdk.foundation.tools.z.d(r6, r5)     // Catch: java.lang.Throwable -> L61
        L6d:
            monitor-exit(r4)
            return
        L6f:
            monitor-exit(r4)
            throw r5
    }

    public final synchronized void a(java.lang.String r4) {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L4b
            if (r0 == 0) goto L9
            monitor-exit(r3)
            return
        L9:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3f java.lang.Throwable -> L4b
            r0.<init>()     // Catch: java.lang.Exception -> L3f java.lang.Throwable -> L4b
            java.lang.String r1 = "unitid"
            r0.append(r1)     // Catch: java.lang.Exception -> L3f java.lang.Throwable -> L4b
            java.lang.String r1 = " = '"
            r0.append(r1)     // Catch: java.lang.Exception -> L3f java.lang.Throwable -> L4b
            r0.append(r4)     // Catch: java.lang.Exception -> L3f java.lang.Throwable -> L4b
            java.lang.String r4 = "' AND "
            r0.append(r4)     // Catch: java.lang.Exception -> L3f java.lang.Throwable -> L4b
            java.lang.String r4 = "readyState"
            r0.append(r4)     // Catch: java.lang.Exception -> L3f java.lang.Throwable -> L4b
            java.lang.String r4 = " = "
            r0.append(r4)     // Catch: java.lang.Exception -> L3f java.lang.Throwable -> L4b
            r4 = 2
            r0.append(r4)     // Catch: java.lang.Exception -> L3f java.lang.Throwable -> L4b
            android.database.sqlite.SQLiteDatabase r4 = r3.getWritableDatabase()     // Catch: java.lang.Exception -> L3f java.lang.Throwable -> L4b
            if (r4 == 0) goto L49
            java.lang.String r1 = "campaign"
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L3f java.lang.Throwable -> L4b
            r2 = 0
            r4.delete(r1, r0, r2)     // Catch: java.lang.Exception -> L3f java.lang.Throwable -> L4b
            goto L49
        L3f:
            r4 = move-exception
            java.lang.String r0 = "CampaignDao"
            java.lang.String r4 = r4.getLocalizedMessage()     // Catch: java.lang.Throwable -> L4b
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)     // Catch: java.lang.Throwable -> L4b
        L49:
            monitor-exit(r3)
            return
        L4b:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public final synchronized void a(java.lang.String r3, int r4, int r5) {
            r2 = this;
            monitor-enter(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            r0.<init>()     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            java.lang.String r1 = "unitid = "
            r0.append(r1)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            r0.append(r3)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            java.lang.String r3 = " AND "
            r0.append(r3)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            java.lang.String r3 = "level"
            r0.append(r3)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            java.lang.String r3 = " = "
            r0.append(r3)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            r0.append(r4)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            java.lang.String r3 = " AND "
            r0.append(r3)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            java.lang.String r3 = "adSource"
            r0.append(r3)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            java.lang.String r3 = " = "
            r0.append(r3)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            r0.append(r5)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            android.database.sqlite.SQLiteDatabase r4 = r2.getWritableDatabase()     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            if (r4 != 0) goto L3e
            monitor-exit(r2)
            return
        L3e:
            android.database.sqlite.SQLiteDatabase r4 = r2.getWritableDatabase()     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            java.lang.String r5 = "campaign"
            r0 = 0
            r4.delete(r5, r3, r0)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            goto L55
        L49:
            r3 = move-exception
            goto L57
        L4b:
            r3 = move-exception
            java.lang.String r4 = "CampaignDao"
            java.lang.String r3 = r3.getLocalizedMessage()     // Catch: java.lang.Throwable -> L49
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)     // Catch: java.lang.Throwable -> L49
        L55:
            monitor-exit(r2)
            return
        L57:
            monitor-exit(r2)
            throw r3
    }

    public final synchronized void a(java.lang.String r3, int r4, int r5, boolean r6) {
            r2 = this;
            monitor-enter(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L62 java.lang.Exception -> L64
            r0.<init>()     // Catch: java.lang.Throwable -> L62 java.lang.Exception -> L64
            java.lang.String r1 = "unitid = "
            r0.append(r1)     // Catch: java.lang.Throwable -> L62 java.lang.Exception -> L64
            r0.append(r3)     // Catch: java.lang.Throwable -> L62 java.lang.Exception -> L64
            java.lang.String r3 = " AND "
            r0.append(r3)     // Catch: java.lang.Throwable -> L62 java.lang.Exception -> L64
            java.lang.String r3 = "level"
            r0.append(r3)     // Catch: java.lang.Throwable -> L62 java.lang.Exception -> L64
            java.lang.String r3 = " = "
            r0.append(r3)     // Catch: java.lang.Throwable -> L62 java.lang.Exception -> L64
            r0.append(r4)     // Catch: java.lang.Throwable -> L62 java.lang.Exception -> L64
            java.lang.String r3 = " AND "
            r0.append(r3)     // Catch: java.lang.Throwable -> L62 java.lang.Exception -> L64
            java.lang.String r3 = "adSource"
            r0.append(r3)     // Catch: java.lang.Throwable -> L62 java.lang.Exception -> L64
            java.lang.String r3 = " = "
            r0.append(r3)     // Catch: java.lang.Throwable -> L62 java.lang.Exception -> L64
            r0.append(r5)     // Catch: java.lang.Throwable -> L62 java.lang.Exception -> L64
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L62 java.lang.Exception -> L64
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L62 java.lang.Exception -> L64
            r4.<init>()     // Catch: java.lang.Throwable -> L62 java.lang.Exception -> L64
            r4.append(r3)     // Catch: java.lang.Throwable -> L62 java.lang.Exception -> L64
            java.lang.String r3 = " AND is_bid_campaign = "
            r4.append(r3)     // Catch: java.lang.Throwable -> L62 java.lang.Exception -> L64
            if (r6 == 0) goto L47
            r3 = 1
            goto L48
        L47:
            r3 = 0
        L48:
            r4.append(r3)     // Catch: java.lang.Throwable -> L62 java.lang.Exception -> L64
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L62 java.lang.Exception -> L64
            android.database.sqlite.SQLiteDatabase r4 = r2.getWritableDatabase()     // Catch: java.lang.Throwable -> L62 java.lang.Exception -> L64
            if (r4 != 0) goto L57
            monitor-exit(r2)
            return
        L57:
            android.database.sqlite.SQLiteDatabase r4 = r2.getWritableDatabase()     // Catch: java.lang.Throwable -> L62 java.lang.Exception -> L64
            java.lang.String r5 = "campaign"
            r6 = 0
            r4.delete(r5, r3, r6)     // Catch: java.lang.Throwable -> L62 java.lang.Exception -> L64
            goto L6e
        L62:
            r3 = move-exception
            goto L70
        L64:
            r3 = move-exception
            java.lang.String r4 = "CampaignDao"
            java.lang.String r3 = r3.getLocalizedMessage()     // Catch: java.lang.Throwable -> L62
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)     // Catch: java.lang.Throwable -> L62
        L6e:
            monitor-exit(r2)
            return
        L70:
            monitor-exit(r2)
            throw r3
    }

    public final synchronized void a(java.lang.String r2, int r3, boolean r4) {
            r1 = this;
            monitor-enter(r1)
            if (r4 == 0) goto L27
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4b java.lang.Throwable -> L57
            r4.<init>()     // Catch: java.lang.Exception -> L4b java.lang.Throwable -> L57
            java.lang.String r0 = "placement_id = "
            r4.append(r0)     // Catch: java.lang.Exception -> L4b java.lang.Throwable -> L57
            r4.append(r2)     // Catch: java.lang.Exception -> L4b java.lang.Throwable -> L57
            java.lang.String r2 = " AND "
            r4.append(r2)     // Catch: java.lang.Exception -> L4b java.lang.Throwable -> L57
            java.lang.String r2 = "ad_type"
            r4.append(r2)     // Catch: java.lang.Exception -> L4b java.lang.Throwable -> L57
            java.lang.String r2 = " = "
            r4.append(r2)     // Catch: java.lang.Exception -> L4b java.lang.Throwable -> L57
            r4.append(r3)     // Catch: java.lang.Exception -> L4b java.lang.Throwable -> L57
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Exception -> L4b java.lang.Throwable -> L57
            goto L38
        L27:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4b java.lang.Throwable -> L57
            r2.<init>()     // Catch: java.lang.Exception -> L4b java.lang.Throwable -> L57
            java.lang.String r4 = "ad_type = "
            r2.append(r4)     // Catch: java.lang.Exception -> L4b java.lang.Throwable -> L57
            r2.append(r3)     // Catch: java.lang.Exception -> L4b java.lang.Throwable -> L57
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L4b java.lang.Throwable -> L57
        L38:
            android.database.sqlite.SQLiteDatabase r3 = r1.getWritableDatabase()     // Catch: java.lang.Exception -> L4b java.lang.Throwable -> L57
            if (r3 != 0) goto L40
            monitor-exit(r1)
            return
        L40:
            android.database.sqlite.SQLiteDatabase r3 = r1.getWritableDatabase()     // Catch: java.lang.Exception -> L4b java.lang.Throwable -> L57
            java.lang.String r4 = "campaign"
            r0 = 0
            r3.delete(r4, r2, r0)     // Catch: java.lang.Exception -> L4b java.lang.Throwable -> L57
            goto L55
        L4b:
            r2 = move-exception
            java.lang.String r3 = "CampaignDao"
            java.lang.String r2 = r2.getLocalizedMessage()     // Catch: java.lang.Throwable -> L57
            com.mbridge.msdk.foundation.tools.z.d(r3, r2)     // Catch: java.lang.Throwable -> L57
        L55:
            monitor-exit(r1)
            return
        L57:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized void a(java.lang.String r6, android.content.ContentValues r7) {
            r5 = this;
            monitor-enter(r5)
            android.database.sqlite.SQLiteDatabase r0 = r5.getWritableDatabase()     // Catch: java.lang.Throwable -> L13 java.lang.Exception -> L15
            java.lang.String r1 = "campaign"
            java.lang.String r2 = "id = ?"
            r3 = 1
            java.lang.String[] r3 = new java.lang.String[r3]     // Catch: java.lang.Throwable -> L13 java.lang.Exception -> L15
            r4 = 0
            r3[r4] = r6     // Catch: java.lang.Throwable -> L13 java.lang.Exception -> L15
            r0.update(r1, r7, r2, r3)     // Catch: java.lang.Throwable -> L13 java.lang.Exception -> L15
            goto L1f
        L13:
            r6 = move-exception
            goto L21
        L15:
            r6 = move-exception
            java.lang.String r7 = "CampaignDao"
            java.lang.String r6 = r6.getLocalizedMessage()     // Catch: java.lang.Throwable -> L13
            com.mbridge.msdk.foundation.tools.z.d(r7, r6)     // Catch: java.lang.Throwable -> L13
        L1f:
            monitor-exit(r5)
            return
        L21:
            monitor-exit(r5)
            throw r6
    }

    public final synchronized void a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            monitor-enter(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L39
            r0.<init>()     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L39
            java.lang.String r1 = "id = '"
            r0.append(r1)     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L39
            r0.append(r3)     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L39
            java.lang.String r3 = "' AND "
            r0.append(r3)     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L39
            java.lang.String r3 = "unitid"
            r0.append(r3)     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L39
            java.lang.String r3 = " = "
            r0.append(r3)     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L39
            r0.append(r4)     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L39
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L39
            android.database.sqlite.SQLiteDatabase r4 = r2.getWritableDatabase()     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L39
            if (r4 != 0) goto L2c
            monitor-exit(r2)
            return
        L2c:
            android.database.sqlite.SQLiteDatabase r4 = r2.getWritableDatabase()     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L39
            java.lang.String r0 = "campaign"
            r1 = 0
            r4.delete(r0, r3, r1)     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L39
            goto L43
        L37:
            r3 = move-exception
            goto L45
        L39:
            r3 = move-exception
            java.lang.String r4 = "CampaignDao"
            java.lang.String r3 = r3.getLocalizedMessage()     // Catch: java.lang.Throwable -> L37
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)     // Catch: java.lang.Throwable -> L37
        L43:
            monitor-exit(r2)
            return
        L45:
            monitor-exit(r2)
            throw r3
    }

    public final synchronized void a(java.lang.String r3, java.lang.String r4, int r5, int r6, boolean r7) {
            r2 = this;
            monitor-enter(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            r0.<init>()     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            java.lang.String r1 = "id = '"
            r0.append(r1)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            r0.append(r3)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            java.lang.String r3 = "' AND "
            r0.append(r3)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            java.lang.String r3 = "unitid"
            r0.append(r3)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            java.lang.String r3 = " = "
            r0.append(r3)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            r0.append(r4)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            java.lang.String r3 = " AND "
            r0.append(r3)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            java.lang.String r3 = "level"
            r0.append(r3)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            java.lang.String r3 = " = "
            r0.append(r3)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            r0.append(r5)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            java.lang.String r3 = " AND "
            r0.append(r3)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            java.lang.String r3 = "adSource"
            r0.append(r3)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            java.lang.String r3 = " = "
            r0.append(r3)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            r0.append(r6)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            if (r7 == 0) goto L5c
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            r4.<init>()     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            r4.append(r3)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            java.lang.String r3 = " AND is_bid_campaign = 1"
            r4.append(r3)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            goto L6d
        L5c:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            r4.<init>()     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            r4.append(r3)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            java.lang.String r3 = " AND is_bid_campaign = 0"
            r4.append(r3)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
        L6d:
            android.database.sqlite.SQLiteDatabase r4 = r2.getWritableDatabase()     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            if (r4 != 0) goto L75
            monitor-exit(r2)
            return
        L75:
            android.database.sqlite.SQLiteDatabase r4 = r2.getWritableDatabase()     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            java.lang.String r5 = "campaign"
            r6 = 0
            r4.delete(r5, r3, r6)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            goto L8c
        L80:
            r3 = move-exception
            goto L8e
        L82:
            r3 = move-exception
            java.lang.String r4 = "CampaignDao"
            java.lang.String r3 = r3.getLocalizedMessage()     // Catch: java.lang.Throwable -> L80
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)     // Catch: java.lang.Throwable -> L80
        L8c:
            monitor-exit(r2)
            return
        L8e:
            monitor-exit(r2)
            throw r3
    }

    public final synchronized void a(java.lang.String r3, java.lang.String r4, boolean r5, java.lang.String r6) {
            r2 = this;
            monitor-enter(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            r0.<init>()     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            java.lang.String r1 = "id = '"
            r0.append(r1)     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            r0.append(r3)     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            java.lang.String r3 = "' AND "
            r0.append(r3)     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            java.lang.String r3 = "unitid"
            r0.append(r3)     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            java.lang.String r3 = " = "
            r0.append(r3)     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            r0.append(r4)     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            java.lang.String r3 = " AND "
            r0.append(r3)     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            java.lang.String r3 = "is_bid_campaign"
            r0.append(r3)     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            java.lang.String r3 = " = "
            r0.append(r3)     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            if (r5 == 0) goto L34
            java.lang.String r3 = "1"
            goto L36
        L34:
            java.lang.String r3 = "0"
        L36:
            r0.append(r3)     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            java.lang.String r3 = " AND "
            r0.append(r3)     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            java.lang.String r3 = "request_id"
            r0.append(r3)     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            java.lang.String r3 = " = '"
            r0.append(r3)     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            r0.append(r6)     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            java.lang.String r3 = "'"
            r0.append(r3)     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            android.database.sqlite.SQLiteDatabase r4 = r2.getWritableDatabase()     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            if (r4 != 0) goto L5c
            monitor-exit(r2)
            return
        L5c:
            android.content.ContentValues r4 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            r4.<init>()     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            java.lang.String r5 = "readyState"
            r6 = 2
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            android.database.sqlite.SQLiteDatabase r5 = r2.getWritableDatabase()     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            java.lang.String r6 = "campaign"
            r0 = 0
            r5.update(r6, r4, r3, r0)     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            goto L82
        L76:
            r3 = move-exception
            goto L84
        L78:
            r3 = move-exception
            java.lang.String r4 = "CampaignDao"
            java.lang.String r3 = r3.getLocalizedMessage()     // Catch: java.lang.Throwable -> L76
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)     // Catch: java.lang.Throwable -> L76
        L82:
            monitor-exit(r2)
            return
        L84:
            monitor-exit(r2)
            throw r3
    }

    public final synchronized void a(java.lang.String r6, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r7) {
            r5 = this;
            monitor-enter(r5)
            if (r7 == 0) goto La4
            int r0 = r7.size()     // Catch: java.lang.Throwable -> La1
            if (r0 <= 0) goto La4
            java.util.Iterator r7 = r7.iterator()     // Catch: java.lang.Throwable -> La1
        Ld:
            boolean r0 = r7.hasNext()     // Catch: java.lang.Throwable -> La1
            if (r0 == 0) goto La4
            java.lang.Object r0 = r7.next()     // Catch: java.lang.Throwable -> La1
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0     // Catch: java.lang.Throwable -> La1
            android.content.ContentValues r1 = new android.content.ContentValues     // Catch: java.lang.Throwable -> La1
            r1.<init>()     // Catch: java.lang.Throwable -> La1
            java.lang.String r2 = "readyState"
            r3 = 2
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> La1
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> La1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La1
            r2.<init>()     // Catch: java.lang.Throwable -> La1
            java.lang.String r3 = "id = '"
            r2.append(r3)     // Catch: java.lang.Throwable -> La1
            java.lang.String r3 = r0.getId()     // Catch: java.lang.Throwable -> La1
            r2.append(r3)     // Catch: java.lang.Throwable -> La1
            java.lang.String r3 = "' AND "
            r2.append(r3)     // Catch: java.lang.Throwable -> La1
            java.lang.String r3 = "unitid"
            r2.append(r3)     // Catch: java.lang.Throwable -> La1
            java.lang.String r3 = " = "
            r2.append(r3)     // Catch: java.lang.Throwable -> La1
            r2.append(r6)     // Catch: java.lang.Throwable -> La1
            java.lang.String r3 = " AND "
            r2.append(r3)     // Catch: java.lang.Throwable -> La1
            java.lang.String r3 = "request_id"
            r2.append(r3)     // Catch: java.lang.Throwable -> La1
            java.lang.String r3 = " = '"
            r2.append(r3)     // Catch: java.lang.Throwable -> La1
            java.lang.String r3 = r0.getRequestId()     // Catch: java.lang.Throwable -> La1
            r2.append(r3)     // Catch: java.lang.Throwable -> La1
            java.lang.String r3 = "'"
            r2.append(r3)     // Catch: java.lang.Throwable -> La1
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> La1
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La1
            r3.<init>()     // Catch: java.lang.Throwable -> La1
            r3.append(r2)     // Catch: java.lang.Throwable -> La1
            java.lang.String r2 = " AND is_bid_campaign = "
            r3.append(r2)     // Catch: java.lang.Throwable -> La1
            boolean r0 = r0.isBidCampaign()     // Catch: java.lang.Throwable -> La1
            if (r0 == 0) goto L7f
            r0 = 1
            goto L80
        L7f:
            r0 = 0
        L80:
            r3.append(r0)     // Catch: java.lang.Throwable -> La1
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> La1
            android.database.sqlite.SQLiteDatabase r2 = r5.getWritableDatabase()     // Catch: android.database.SQLException -> L95 java.lang.Throwable -> La1
            if (r2 == 0) goto Ld
            java.lang.String r3 = "campaign"
            r4 = 0
            r2.update(r3, r1, r0, r4)     // Catch: android.database.SQLException -> L95 java.lang.Throwable -> La1
            goto Ld
        L95:
            r0 = move-exception
            java.lang.String r1 = "CampaignDao"
            java.lang.String r0 = r0.getLocalizedMessage()     // Catch: java.lang.Throwable -> La1
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)     // Catch: java.lang.Throwable -> La1
            goto Ld
        La1:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
        La4:
            monitor-exit(r5)
            return
    }

    public final synchronized void a(java.lang.String r6, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r7, java.lang.String r8, int r9) {
            r5 = this;
            monitor-enter(r5)
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L88
            if (r0 != 0) goto L86
            if (r7 == 0) goto L86
            int r0 = r7.size()     // Catch: java.lang.Throwable -> L88
            if (r0 <= 0) goto L86
            boolean r0 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L88
            if (r0 != 0) goto L86
            android.database.sqlite.SQLiteDatabase r0 = r5.getWritableDatabase()     // Catch: java.lang.Throwable -> L88
            if (r0 != 0) goto L1d
            monitor-exit(r5)
            return
        L1d:
            java.util.Iterator r7 = r7.iterator()     // Catch: java.lang.Throwable -> L84 java.lang.Exception -> L86
        L21:
            boolean r1 = r7.hasNext()     // Catch: java.lang.Throwable -> L84 java.lang.Exception -> L86
            if (r1 == 0) goto L86
            java.lang.Object r1 = r7.next()     // Catch: java.lang.Throwable -> L84 java.lang.Exception -> L86
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1     // Catch: java.lang.Throwable -> L84 java.lang.Exception -> L86
            if (r1 == 0) goto L21
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L84 java.lang.Exception -> L86
            r2.<init>()     // Catch: java.lang.Throwable -> L84 java.lang.Exception -> L86
            java.lang.String r3 = "unitid = '"
            r2.append(r3)     // Catch: java.lang.Throwable -> L84 java.lang.Exception -> L86
            r2.append(r6)     // Catch: java.lang.Throwable -> L84 java.lang.Exception -> L86
            java.lang.String r3 = "' AND "
            r2.append(r3)     // Catch: java.lang.Throwable -> L84 java.lang.Exception -> L86
            java.lang.String r3 = "id"
            r2.append(r3)     // Catch: java.lang.Throwable -> L84 java.lang.Exception -> L86
            java.lang.String r3 = " = '"
            r2.append(r3)     // Catch: java.lang.Throwable -> L84 java.lang.Exception -> L86
            java.lang.String r3 = r1.getId()     // Catch: java.lang.Throwable -> L84 java.lang.Exception -> L86
            r2.append(r3)     // Catch: java.lang.Throwable -> L84 java.lang.Exception -> L86
            java.lang.String r3 = "' AND "
            r2.append(r3)     // Catch: java.lang.Throwable -> L84 java.lang.Exception -> L86
            java.lang.String r3 = "request_id"
            r2.append(r3)     // Catch: java.lang.Throwable -> L84 java.lang.Exception -> L86
            java.lang.String r3 = " = '"
            r2.append(r3)     // Catch: java.lang.Throwable -> L84 java.lang.Exception -> L86
            java.lang.String r1 = r1.getRequestId()     // Catch: java.lang.Throwable -> L84 java.lang.Exception -> L86
            r2.append(r1)     // Catch: java.lang.Throwable -> L84 java.lang.Exception -> L86
            java.lang.String r1 = "'"
            r2.append(r1)     // Catch: java.lang.Throwable -> L84 java.lang.Exception -> L86
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L84 java.lang.Exception -> L86
            android.content.ContentValues r2 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L84 java.lang.Exception -> L86
            r2.<init>()     // Catch: java.lang.Throwable -> L84 java.lang.Exception -> L86
            java.lang.Integer r3 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L84 java.lang.Exception -> L86
            r2.put(r8, r3)     // Catch: java.lang.Throwable -> L84 java.lang.Exception -> L86
            java.lang.String r3 = "campaign"
            r4 = 0
            r0.update(r3, r2, r1, r4)     // Catch: java.lang.Throwable -> L84 java.lang.Exception -> L86
            goto L21
        L84:
            r6 = move-exception
            throw r6     // Catch: java.lang.Throwable -> L88
        L86:
            monitor-exit(r5)
            return
        L88:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public final synchronized void a(java.lang.String r6, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r7, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r8, boolean r9) {
            r5 = this;
            monitor-enter(r5)
            android.database.sqlite.SQLiteDatabase r0 = r5.getWritableDatabase()     // Catch: java.lang.Throwable -> L16d
            if (r0 != 0) goto L9
            monitor-exit(r5)
            return
        L9:
            r0 = 0
            if (r7 == 0) goto Lc9
            int r1 = r7.size()     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6
            if (r1 <= 0) goto Lc9
            java.util.Iterator r7 = r7.iterator()     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6
        L16:
            boolean r1 = r7.hasNext()     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6
            if (r1 == 0) goto Lc9
            java.lang.Object r1 = r7.next()     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6
            android.content.ContentValues r2 = new android.content.ContentValues     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            r2.<init>()     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            java.lang.String r3 = "readyState"
            r4 = 0
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            r2.put(r3, r4)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            r3.<init>()     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            java.lang.String r4 = "unitid = '"
            r3.append(r4)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            r3.append(r6)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            java.lang.String r4 = "' AND "
            r3.append(r4)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            java.lang.String r4 = "id"
            r3.append(r4)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            java.lang.String r4 = " = '"
            r3.append(r4)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            java.lang.String r4 = r1.getId()     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            r3.append(r4)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            java.lang.String r4 = "' AND "
            r3.append(r4)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            java.lang.String r4 = "request_id"
            r3.append(r4)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            java.lang.String r4 = " = '"
            r3.append(r4)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            java.lang.String r1 = r1.getRequestId()     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            r3.append(r1)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            java.lang.String r1 = "'"
            r3.append(r1)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            if (r9 == 0) goto L91
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            r3.<init>()     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            r3.append(r1)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            java.lang.String r1 = " AND "
            r3.append(r1)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            java.lang.String r1 = "is_bid_campaign"
            r3.append(r1)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            java.lang.String r1 = " = 1"
            r3.append(r1)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            goto Lac
        L91:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            r3.<init>()     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            r3.append(r1)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            java.lang.String r1 = " AND "
            r3.append(r1)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            java.lang.String r1 = "is_bid_campaign"
            r3.append(r1)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            java.lang.String r1 = " = 0"
            r3.append(r1)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
        Lac:
            android.database.sqlite.SQLiteDatabase r3 = r5.getWritableDatabase()     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            java.lang.String r4 = "campaign"
            r3.update(r4, r2, r1, r0)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Lc3
            goto L16
        Lb7:
            r1 = move-exception
            java.lang.String r2 = "CampaignDao"
            java.lang.String r1 = r1.getLocalizedMessage()     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6
            goto L16
        Lc3:
            r6 = move-exception
            goto L16a
        Lc6:
            r6 = move-exception
            goto L160
        Lc9:
            if (r8 == 0) goto L16b
            int r7 = r8.size()     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6
            if (r7 <= 0) goto L16b
            java.util.Iterator r7 = r8.iterator()     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6
        Ld5:
            boolean r8 = r7.hasNext()     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6
            if (r8 == 0) goto L16b
            java.lang.Object r8 = r7.next()     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = (com.mbridge.msdk.foundation.entity.CampaignEx) r8     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6
            int r1 = r8.getLoadTimeoutState()     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6 android.database.SQLException -> L154
            if (r1 != 0) goto Ld5
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6 android.database.SQLException -> L154
            r1.<init>()     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6 android.database.SQLException -> L154
            java.lang.String r2 = "unitid"
            r1.append(r2)     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6 android.database.SQLException -> L154
            java.lang.String r2 = " = '"
            r1.append(r2)     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6 android.database.SQLException -> L154
            r1.append(r6)     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6 android.database.SQLException -> L154
            java.lang.String r2 = "' AND "
            r1.append(r2)     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6 android.database.SQLException -> L154
            java.lang.String r2 = "id"
            r1.append(r2)     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6 android.database.SQLException -> L154
            java.lang.String r2 = " = '"
            r1.append(r2)     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6 android.database.SQLException -> L154
            java.lang.String r2 = r8.getId()     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6 android.database.SQLException -> L154
            r1.append(r2)     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6 android.database.SQLException -> L154
            java.lang.String r2 = "' AND "
            r1.append(r2)     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6 android.database.SQLException -> L154
            java.lang.String r2 = "request_id"
            r1.append(r2)     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6 android.database.SQLException -> L154
            java.lang.String r2 = " = '"
            r1.append(r2)     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6 android.database.SQLException -> L154
            java.lang.String r8 = r8.getRequestId()     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6 android.database.SQLException -> L154
            r1.append(r8)     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6 android.database.SQLException -> L154
            java.lang.String r8 = "'"
            r1.append(r8)     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6 android.database.SQLException -> L154
            if (r9 == 0) goto L132
            java.lang.String r8 = " AND is_bid_campaign = 1"
            r1.append(r8)     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6 android.database.SQLException -> L154
            goto L137
        L132:
            java.lang.String r8 = " AND is_bid_campaign = 0"
            r1.append(r8)     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6 android.database.SQLException -> L154
        L137:
            android.content.ContentValues r8 = new android.content.ContentValues     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6 android.database.SQLException -> L154
            r8.<init>()     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6 android.database.SQLException -> L154
            java.lang.String r2 = "readyState"
            r3 = 2
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6 android.database.SQLException -> L154
            r8.put(r2, r3)     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6 android.database.SQLException -> L154
            android.database.sqlite.SQLiteDatabase r2 = r5.getWritableDatabase()     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6 android.database.SQLException -> L154
            java.lang.String r3 = "campaign"
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6 android.database.SQLException -> L154
            r2.update(r3, r8, r1, r0)     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6 android.database.SQLException -> L154
            goto Ld5
        L154:
            r8 = move-exception
            java.lang.String r1 = "CampaignDao"
            java.lang.String r8 = r8.getLocalizedMessage()     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6
            com.mbridge.msdk.foundation.tools.z.d(r1, r8)     // Catch: java.lang.Throwable -> Lc3 java.lang.Exception -> Lc6
            goto Ld5
        L160:
            java.lang.String r7 = "CampaignDao"
            java.lang.String r6 = r6.getLocalizedMessage()     // Catch: java.lang.Throwable -> Lc3
            com.mbridge.msdk.foundation.tools.z.d(r7, r6)     // Catch: java.lang.Throwable -> Lc3
            goto L16b
        L16a:
            throw r6     // Catch: java.lang.Throwable -> L16d
        L16b:
            monitor-exit(r5)
            return
        L16d:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public final synchronized void a(java.lang.String r6, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r7, boolean r8) {
            r5 = this;
            monitor-enter(r5)
            if (r7 == 0) goto L9f
            int r0 = r7.size()     // Catch: java.lang.Throwable -> L9c
            if (r0 <= 0) goto L9f
            java.util.Iterator r7 = r7.iterator()     // Catch: java.lang.Throwable -> L9c
        Ld:
            boolean r0 = r7.hasNext()     // Catch: java.lang.Throwable -> L9c
            if (r0 == 0) goto L9f
            java.lang.Object r0 = r7.next()     // Catch: java.lang.Throwable -> L9c
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0     // Catch: java.lang.Throwable -> L9c
            int r1 = r0.getLoadTimeoutState()     // Catch: android.database.SQLException -> L90 java.lang.Throwable -> L9c
            if (r1 != 0) goto Ld
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: android.database.SQLException -> L90 java.lang.Throwable -> L9c
            r1.<init>()     // Catch: android.database.SQLException -> L90 java.lang.Throwable -> L9c
            java.lang.String r2 = "unitid"
            r1.append(r2)     // Catch: android.database.SQLException -> L90 java.lang.Throwable -> L9c
            java.lang.String r2 = " = '"
            r1.append(r2)     // Catch: android.database.SQLException -> L90 java.lang.Throwable -> L9c
            r1.append(r6)     // Catch: android.database.SQLException -> L90 java.lang.Throwable -> L9c
            java.lang.String r2 = "' AND "
            r1.append(r2)     // Catch: android.database.SQLException -> L90 java.lang.Throwable -> L9c
            java.lang.String r2 = "id"
            r1.append(r2)     // Catch: android.database.SQLException -> L90 java.lang.Throwable -> L9c
            java.lang.String r2 = " = '"
            r1.append(r2)     // Catch: android.database.SQLException -> L90 java.lang.Throwable -> L9c
            java.lang.String r2 = r0.getId()     // Catch: android.database.SQLException -> L90 java.lang.Throwable -> L9c
            r1.append(r2)     // Catch: android.database.SQLException -> L90 java.lang.Throwable -> L9c
            java.lang.String r2 = "' AND "
            r1.append(r2)     // Catch: android.database.SQLException -> L90 java.lang.Throwable -> L9c
            java.lang.String r2 = "request_id"
            r1.append(r2)     // Catch: android.database.SQLException -> L90 java.lang.Throwable -> L9c
            java.lang.String r2 = " = '"
            r1.append(r2)     // Catch: android.database.SQLException -> L90 java.lang.Throwable -> L9c
            java.lang.String r0 = r0.getRequestId()     // Catch: android.database.SQLException -> L90 java.lang.Throwable -> L9c
            r1.append(r0)     // Catch: android.database.SQLException -> L90 java.lang.Throwable -> L9c
            java.lang.String r0 = "'"
            r1.append(r0)     // Catch: android.database.SQLException -> L90 java.lang.Throwable -> L9c
            if (r8 == 0) goto L6a
            java.lang.String r0 = " AND is_bid_campaign = 1"
            r1.append(r0)     // Catch: android.database.SQLException -> L90 java.lang.Throwable -> L9c
            goto L6f
        L6a:
            java.lang.String r0 = " AND is_bid_campaign = 0"
            r1.append(r0)     // Catch: android.database.SQLException -> L90 java.lang.Throwable -> L9c
        L6f:
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: android.database.SQLException -> L90 java.lang.Throwable -> L9c
            r0.<init>()     // Catch: android.database.SQLException -> L90 java.lang.Throwable -> L9c
            java.lang.String r2 = "readyState"
            r3 = 2
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: android.database.SQLException -> L90 java.lang.Throwable -> L9c
            r0.put(r2, r3)     // Catch: android.database.SQLException -> L90 java.lang.Throwable -> L9c
            android.database.sqlite.SQLiteDatabase r2 = r5.getWritableDatabase()     // Catch: android.database.SQLException -> L90 java.lang.Throwable -> L9c
            if (r2 == 0) goto Ld
            java.lang.String r3 = "campaign"
            java.lang.String r1 = r1.toString()     // Catch: android.database.SQLException -> L90 java.lang.Throwable -> L9c
            r4 = 0
            r2.update(r3, r0, r1, r4)     // Catch: android.database.SQLException -> L90 java.lang.Throwable -> L9c
            goto Ld
        L90:
            r0 = move-exception
            java.lang.String r1 = "CampaignDao"
            java.lang.String r0 = r0.getLocalizedMessage()     // Catch: java.lang.Throwable -> L9c
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)     // Catch: java.lang.Throwable -> L9c
            goto Ld
        L9c:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
        L9f:
            monitor-exit(r5)
            return
    }

    public final synchronized void a(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r6, java.lang.String r7) {
            r5 = this;
            monitor-enter(r5)
            if (r6 == 0) goto L8a
            int r0 = r6.size()     // Catch: java.lang.Throwable -> L87
            if (r0 <= 0) goto L8a
            java.util.Iterator r6 = r6.iterator()     // Catch: java.lang.Throwable -> L87
        Ld:
            boolean r0 = r6.hasNext()     // Catch: java.lang.Throwable -> L87
            if (r0 == 0) goto L8a
            java.lang.Object r0 = r6.next()     // Catch: java.lang.Throwable -> L87
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0     // Catch: java.lang.Throwable -> L87
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: android.database.SQLException -> L7c java.lang.Throwable -> L87
            r1.<init>()     // Catch: android.database.SQLException -> L7c java.lang.Throwable -> L87
            java.lang.String r2 = "unitid"
            r1.append(r2)     // Catch: android.database.SQLException -> L7c java.lang.Throwable -> L87
            java.lang.String r2 = " = '"
            r1.append(r2)     // Catch: android.database.SQLException -> L7c java.lang.Throwable -> L87
            r1.append(r7)     // Catch: android.database.SQLException -> L7c java.lang.Throwable -> L87
            java.lang.String r2 = "' AND "
            r1.append(r2)     // Catch: android.database.SQLException -> L7c java.lang.Throwable -> L87
            java.lang.String r2 = "id"
            r1.append(r2)     // Catch: android.database.SQLException -> L7c java.lang.Throwable -> L87
            java.lang.String r2 = " = '"
            r1.append(r2)     // Catch: android.database.SQLException -> L7c java.lang.Throwable -> L87
            java.lang.String r2 = r0.getId()     // Catch: android.database.SQLException -> L7c java.lang.Throwable -> L87
            r1.append(r2)     // Catch: android.database.SQLException -> L7c java.lang.Throwable -> L87
            java.lang.String r2 = "' AND "
            r1.append(r2)     // Catch: android.database.SQLException -> L7c java.lang.Throwable -> L87
            java.lang.String r2 = "request_id"
            r1.append(r2)     // Catch: android.database.SQLException -> L7c java.lang.Throwable -> L87
            java.lang.String r2 = " = '"
            r1.append(r2)     // Catch: android.database.SQLException -> L7c java.lang.Throwable -> L87
            java.lang.String r0 = r0.getRequestId()     // Catch: android.database.SQLException -> L7c java.lang.Throwable -> L87
            r1.append(r0)     // Catch: android.database.SQLException -> L7c java.lang.Throwable -> L87
            java.lang.String r0 = "'"
            r1.append(r0)     // Catch: android.database.SQLException -> L7c java.lang.Throwable -> L87
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: android.database.SQLException -> L7c java.lang.Throwable -> L87
            r0.<init>()     // Catch: android.database.SQLException -> L7c java.lang.Throwable -> L87
            java.lang.String r2 = "readyState"
            r3 = 2
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: android.database.SQLException -> L7c java.lang.Throwable -> L87
            r0.put(r2, r3)     // Catch: android.database.SQLException -> L7c java.lang.Throwable -> L87
            android.database.sqlite.SQLiteDatabase r2 = r5.getWritableDatabase()     // Catch: android.database.SQLException -> L7c java.lang.Throwable -> L87
            if (r2 == 0) goto Ld
            java.lang.String r3 = "campaign"
            java.lang.String r1 = r1.toString()     // Catch: android.database.SQLException -> L7c java.lang.Throwable -> L87
            r4 = 0
            r2.update(r3, r0, r1, r4)     // Catch: android.database.SQLException -> L7c java.lang.Throwable -> L87
            goto Ld
        L7c:
            r0 = move-exception
            java.lang.String r1 = "CampaignDao"
            java.lang.String r0 = r0.getLocalizedMessage()     // Catch: java.lang.Throwable -> L87
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)     // Catch: java.lang.Throwable -> L87
            goto Ld
        L87:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
        L8a:
            monitor-exit(r5)
            return
    }

    public final synchronized void a(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2, java.lang.String r3, java.lang.String r4, int r5) {
            r1 = this;
            monitor-enter(r1)
            if (r2 == 0) goto L2b
            int r0 = r2.size()     // Catch: java.lang.Throwable -> L28
            if (r0 != 0) goto La
            goto L2b
        La:
            android.database.sqlite.SQLiteDatabase r0 = r1.getWritableDatabase()     // Catch: java.lang.Throwable -> L28
            if (r0 != 0) goto L12
            monitor-exit(r1)
            return
        L12:
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L28
        L16:
            boolean r0 = r2.hasNext()     // Catch: java.lang.Throwable -> L28
            if (r0 == 0) goto L26
            java.lang.Object r0 = r2.next()     // Catch: java.lang.Throwable -> L28
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0     // Catch: java.lang.Throwable -> L28
            r1.a(r0, r3, r4, r5)     // Catch: java.lang.Throwable -> L28
            goto L16
        L26:
            monitor-exit(r1)
            return
        L28:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
        L2b:
            monitor-exit(r1)
            return
    }

    public final synchronized boolean a(java.lang.String r2, int r3, java.lang.String r4, int r5, int r6, boolean r7) {
            r1 = this;
            monitor-enter(r1)
            java.lang.String r0 = "SELECT id FROM campaign WHERE "
            if (r7 == 0) goto L29
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb3
            r2.<init>()     // Catch: java.lang.Throwable -> Lb3
            r2.append(r0)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r3 = "unitid = "
            r2.append(r3)     // Catch: java.lang.Throwable -> Lb3
            r2.append(r4)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r3 = " AND "
            r2.append(r3)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r3 = "is_bid_campaign"
            r2.append(r3)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r3 = " = 1"
            r2.append(r3)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lb3
            goto L94
        L29:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb3
            r7.<init>()     // Catch: java.lang.Throwable -> Lb3
            r7.append(r0)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r0 = "id='"
            r7.append(r0)     // Catch: java.lang.Throwable -> Lb3
            r7.append(r2)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r2 = "' AND "
            r7.append(r2)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r2 = "tab"
            r7.append(r2)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r2 = "="
            r7.append(r2)     // Catch: java.lang.Throwable -> Lb3
            r7.append(r3)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r2 = " AND "
            r7.append(r2)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r2 = "unitid"
            r7.append(r2)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r2 = " = '"
            r7.append(r2)     // Catch: java.lang.Throwable -> Lb3
            r7.append(r4)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r2 = "' AND "
            r7.append(r2)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r2 = "level"
            r7.append(r2)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r2 = " = "
            r7.append(r2)     // Catch: java.lang.Throwable -> Lb3
            r7.append(r5)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r2 = " AND "
            r7.append(r2)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r2 = "adSource"
            r7.append(r2)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r2 = " = "
            r7.append(r2)     // Catch: java.lang.Throwable -> Lb3
            r7.append(r6)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r2 = " AND "
            r7.append(r2)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r2 = "is_bid_campaign"
            r7.append(r2)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r2 = " = 0"
            r7.append(r2)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r2 = r7.toString()     // Catch: java.lang.Throwable -> Lb3
        L94:
            android.database.sqlite.SQLiteDatabase r3 = r1.getReadableDatabase()     // Catch: java.lang.Throwable -> Lb3
            r4 = 0
            android.database.Cursor r2 = r3.rawQuery(r2, r4)     // Catch: java.lang.Throwable -> Lb3
            if (r2 == 0) goto Lab
            int r3 = r2.getCount()     // Catch: java.lang.Throwable -> Lb3
            if (r3 <= 0) goto Lab
            r2.close()     // Catch: java.lang.Exception -> La8 java.lang.Throwable -> Lb3
        La8:
            r2 = 1
            monitor-exit(r1)
            return r2
        Lab:
            if (r2 == 0) goto Lb0
            r2.close()     // Catch: java.lang.Exception -> Lb0 java.lang.Throwable -> Lb3
        Lb0:
            r2 = 0
            monitor-exit(r1)
            return r2
        Lb3:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> b(java.lang.String r4) {
            r3 = this;
            monitor-enter(r3)
            r0 = 0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            java.lang.String r2 = "SELECT * FROM "
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            java.lang.String r2 = "campaign"
            r1.append(r2)     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            java.lang.String r2 = " WHERE "
            r1.append(r2)     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            java.lang.String r2 = "unitid"
            r1.append(r2)     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            java.lang.String r2 = " = '"
            r1.append(r2)     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            r1.append(r4)     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            java.lang.String r4 = "' AND "
            r1.append(r4)     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            java.lang.String r4 = "readyState"
            r1.append(r4)     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            java.lang.String r4 = " = "
            r1.append(r4)     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            r4 = 2
            r1.append(r4)     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            android.database.sqlite.SQLiteDatabase r4 = r3.getReadableDatabase()     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            android.database.Cursor r4 = r4.rawQuery(r1, r0)     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            if (r4 == 0) goto L61
            int r1 = r4.getCount()     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            if (r1 <= 0) goto L61
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            r1.<init>()     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
        L4c:
            boolean r2 = r4.moveToNext()     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            if (r2 == 0) goto L5a
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r3.a(r4)     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            r1.add(r2)     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            goto L4c
        L5a:
            if (r4 == 0) goto L5f
            r4.close()     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
        L5f:
            monitor-exit(r3)
            return r1
        L61:
            if (r4 == 0) goto L66
            r4.close()     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
        L66:
            monitor-exit(r3)
            return r0
        L68:
            monitor-exit(r3)
            return r0
        L6a:
            monitor-exit(r3)
            return r0
    }

    public final synchronized java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> b(java.lang.String r3, int r4, int r5, int r6) {
            r2 = this;
            monitor-enter(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L65
            r0.<init>()     // Catch: java.lang.Throwable -> L65
            java.lang.String r1 = " WHERE unitid = '"
            r0.append(r1)     // Catch: java.lang.Throwable -> L65
            r0.append(r3)     // Catch: java.lang.Throwable -> L65
            java.lang.String r3 = "' AND "
            r0.append(r3)     // Catch: java.lang.Throwable -> L65
            java.lang.String r3 = "level"
            r0.append(r3)     // Catch: java.lang.Throwable -> L65
            java.lang.String r3 = " = "
            r0.append(r3)     // Catch: java.lang.Throwable -> L65
            r0.append(r5)     // Catch: java.lang.Throwable -> L65
            java.lang.String r3 = " AND "
            r0.append(r3)     // Catch: java.lang.Throwable -> L65
            java.lang.String r3 = "adSource"
            r0.append(r3)     // Catch: java.lang.Throwable -> L65
            java.lang.String r3 = " = "
            r0.append(r3)     // Catch: java.lang.Throwable -> L65
            r0.append(r6)     // Catch: java.lang.Throwable -> L65
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L65
            java.lang.String r5 = ""
            if (r4 <= 0) goto L4b
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L65
            r5.<init>()     // Catch: java.lang.Throwable -> L65
            java.lang.String r6 = " LIMIT "
            r5.append(r6)     // Catch: java.lang.Throwable -> L65
            r5.append(r4)     // Catch: java.lang.Throwable -> L65
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L65
        L4b:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L65
            r4.<init>()     // Catch: java.lang.Throwable -> L65
            java.lang.String r6 = "SELECT * FROM campaign"
            r4.append(r6)     // Catch: java.lang.Throwable -> L65
            r4.append(r3)     // Catch: java.lang.Throwable -> L65
            r4.append(r5)     // Catch: java.lang.Throwable -> L65
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L65
            java.util.List r3 = r2.h(r3)     // Catch: java.lang.Throwable -> L65
            monitor-exit(r2)
            return r3
        L65:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> b(java.lang.String r4, int r5, boolean r6) {
            r3 = this;
            r0 = 0
            if (r6 == 0) goto L27
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L94
            r6.<init>()     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L94
            java.lang.String r1 = "placement_id = "
            r6.append(r1)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L94
            r6.append(r4)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L94
            java.lang.String r4 = " AND "
            r6.append(r4)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L94
            java.lang.String r4 = "ad_type"
            r6.append(r4)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L94
            java.lang.String r4 = " = "
            r6.append(r4)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L94
            r6.append(r5)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L94
            java.lang.String r4 = r6.toString()     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L94
            goto L38
        L27:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L94
            r4.<init>()     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L94
            java.lang.String r6 = "ad_type = "
            r4.append(r6)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L94
            r4.append(r5)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L94
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L94
        L38:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L94
            r5.<init>()     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L94
            java.lang.String r6 = "SELECT * FROM campaign WHERE "
            r5.append(r6)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L94
            r5.append(r4)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L94
            java.lang.String r4 = r5.toString()     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L94
            android.database.sqlite.SQLiteDatabase r5 = r3.getReadableDatabase()     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L94
            android.database.Cursor r4 = r5.rawQuery(r4, r0)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L94
            if (r4 == 0) goto L7c
            int r5 = r4.getCount()     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L76
            if (r5 <= 0) goto L7c
            java.util.ArrayList r5 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L76
            r5.<init>()     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L76
        L5e:
            boolean r6 = r4.moveToNext()     // Catch: java.lang.Exception -> L6e java.lang.Throwable -> L72
            if (r6 == 0) goto L6c
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = r3.a(r4)     // Catch: java.lang.Exception -> L6e java.lang.Throwable -> L72
            r5.add(r6)     // Catch: java.lang.Exception -> L6e java.lang.Throwable -> L72
            goto L5e
        L6c:
            r0 = r5
            goto L7c
        L6e:
            r6 = move-exception
            r0 = r4
            r4 = r6
            goto L84
        L72:
            r5 = move-exception
            r0 = r4
            r4 = r5
            goto L95
        L76:
            r5 = move-exception
            r2 = r0
            r0 = r4
            r4 = r5
            r5 = r2
            goto L84
        L7c:
            if (r4 == 0) goto L93
            r4.close()     // Catch: java.lang.Exception -> L93
            goto L93
        L82:
            r4 = move-exception
            r5 = r0
        L84:
            java.lang.String r6 = "CampaignDao"
            java.lang.String r4 = r4.getLocalizedMessage()     // Catch: java.lang.Throwable -> L94
            com.mbridge.msdk.foundation.tools.z.d(r6, r4)     // Catch: java.lang.Throwable -> L94
            if (r0 == 0) goto L92
            r0.close()     // Catch: java.lang.Exception -> L92
        L92:
            r0 = r5
        L93:
            return r0
        L94:
            r4 = move-exception
        L95:
            if (r0 == 0) goto L9a
            r0.close()     // Catch: java.lang.Exception -> L9a
        L9a:
            throw r4
    }

    public final synchronized void b(long r3, java.lang.String r5) {
            r2 = this;
            monitor-enter(r2)
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e
            long r0 = r0 - r3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e
            r3.<init>()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e
            java.lang.String r4 = "ts<"
            r3.append(r4)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e
            r3.append(r0)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e
            java.lang.String r4 = " and "
            r3.append(r4)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e
            java.lang.String r4 = "unitid"
            r3.append(r4)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e
            java.lang.String r4 = "=?"
            r3.append(r4)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e
            r4 = 1
            java.lang.String[] r4 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e
            r0 = 0
            r4[r0] = r5     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e
            android.database.sqlite.SQLiteDatabase r5 = r2.getWritableDatabase()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e
            if (r5 == 0) goto L48
            android.database.sqlite.SQLiteDatabase r5 = r2.getWritableDatabase()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e
            java.lang.String r0 = "campaign"
            r5.delete(r0, r3, r4)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e
            goto L48
        L3c:
            r3 = move-exception
            goto L4a
        L3e:
            r3 = move-exception
            java.lang.String r4 = "CampaignDao"
            java.lang.String r3 = r3.getLocalizedMessage()     // Catch: java.lang.Throwable -> L3c
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)     // Catch: java.lang.Throwable -> L3c
        L48:
            monitor-exit(r2)
            return
        L4a:
            monitor-exit(r2)
            throw r3
    }

    public final synchronized void b(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            monitor-enter(r3)
            android.database.sqlite.SQLiteDatabase r0 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L4d
            if (r0 != 0) goto L9
            monitor-exit(r3)
            return
        L9:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L4d
            r0.<init>()     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L4d
            java.lang.String r1 = "id = '"
            r0.append(r1)     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L4d
            r0.append(r4)     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L4d
            java.lang.String r4 = "' AND "
            r0.append(r4)     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L4d
            java.lang.String r4 = "request_id"
            r0.append(r4)     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L4d
            java.lang.String r4 = " = '"
            r0.append(r4)     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L4d
            r0.append(r5)     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L4d
            java.lang.String r4 = "'"
            r0.append(r4)     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L4d
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L4d
            android.content.ContentValues r5 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L4d
            r5.<init>()     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L4d
            java.lang.String r0 = "readyState"
            r1 = 2
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L4d
            r5.put(r0, r1)     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L4d
            android.database.sqlite.SQLiteDatabase r0 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L4d
            java.lang.String r1 = "campaign"
            r2 = 0
            r0.update(r1, r5, r4, r2)     // Catch: java.lang.Throwable -> L4b java.lang.Exception -> L4d
            goto L57
        L4b:
            r4 = move-exception
            goto L59
        L4d:
            r4 = move-exception
            java.lang.String r5 = "CampaignDao"
            java.lang.String r4 = r4.getLocalizedMessage()     // Catch: java.lang.Throwable -> L4b
            com.mbridge.msdk.foundation.tools.z.d(r5, r4)     // Catch: java.lang.Throwable -> L4b
        L57:
            monitor-exit(r3)
            return
        L59:
            monitor-exit(r3)
            throw r4
    }

    public final synchronized void b(java.lang.String r7, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r8) {
            r6 = this;
            monitor-enter(r6)
            if (r8 == 0) goto L85
            int r0 = r8.size()     // Catch: java.lang.Throwable -> L82
            if (r0 <= 0) goto L85
            java.util.Iterator r8 = r8.iterator()     // Catch: java.lang.Throwable -> L82
        Ld:
            boolean r0 = r8.hasNext()     // Catch: java.lang.Throwable -> L82
            if (r0 == 0) goto L85
            java.lang.Object r0 = r8.next()     // Catch: java.lang.Throwable -> L82
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0     // Catch: java.lang.Throwable -> L82
            android.content.ContentValues r1 = new android.content.ContentValues     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L82
            r1.<init>()     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L82
            java.lang.String r2 = "readyState"
            r3 = 0
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L82
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L82
            android.database.sqlite.SQLiteDatabase r2 = r6.getWritableDatabase()     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L82
            if (r2 == 0) goto Ld
            java.lang.String r3 = "campaign"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L82
            r4.<init>()     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L82
            java.lang.String r5 = "unitid = '"
            r4.append(r5)     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L82
            r4.append(r7)     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L82
            java.lang.String r5 = "' AND "
            r4.append(r5)     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L82
            java.lang.String r5 = "id"
            r4.append(r5)     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L82
            java.lang.String r5 = " = '"
            r4.append(r5)     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L82
            java.lang.String r5 = r0.getId()     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L82
            r4.append(r5)     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L82
            java.lang.String r5 = "' AND "
            r4.append(r5)     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L82
            java.lang.String r5 = "request_id"
            r4.append(r5)     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L82
            java.lang.String r5 = " = '"
            r4.append(r5)     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L82
            java.lang.String r0 = r0.getRequestId()     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L82
            r4.append(r0)     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L82
            java.lang.String r0 = "'"
            r4.append(r0)     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L82
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L82
            r4 = 0
            r2.update(r3, r1, r0, r4)     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L82
            goto Ld
        L77:
            r0 = move-exception
            java.lang.String r1 = "CampaignDao"
            java.lang.String r0 = r0.getLocalizedMessage()     // Catch: java.lang.Throwable -> L82
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)     // Catch: java.lang.Throwable -> L82
            goto Ld
        L82:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
        L85:
            monitor-exit(r6)
            return
    }

    public final synchronized void b(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3, java.lang.String r4) {
            r2 = this;
            monitor-enter(r2)
            if (r3 == 0) goto L1c
            int r0 = r3.size()     // Catch: java.lang.Throwable -> L19
            if (r0 != 0) goto La
            goto L1c
        La:
            java.lang.Thread r0 = new java.lang.Thread     // Catch: java.lang.Throwable -> L19
            com.mbridge.msdk.foundation.db.f$1 r1 = new com.mbridge.msdk.foundation.db.f$1     // Catch: java.lang.Throwable -> L19
            r1.<init>(r2, r3, r4)     // Catch: java.lang.Throwable -> L19
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L19
            r0.start()     // Catch: java.lang.Throwable -> L19
            monitor-exit(r2)
            return
        L19:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
        L1c:
            monitor-exit(r2)
            return
    }

    public final int c(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            java.lang.String r1 = " AND is_bid_campaign = 1"
            java.lang.String r2 = "unitid = '"
            java.lang.String r3 = "'"
            if (r0 != 0) goto L37
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            r0.append(r6)
            r0.append(r3)
            java.lang.String r6 = " AND "
            r0.append(r6)
            java.lang.String r6 = "request_id"
            r0.append(r6)
            java.lang.String r6 = " = '"
            r0.append(r6)
            r0.append(r5)
            r0.append(r3)
            r0.append(r1)
            java.lang.String r5 = r0.toString()
            goto L4c
        L37:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r2)
            r5.append(r6)
            r5.append(r3)
            r5.append(r1)
            java.lang.String r5 = r5.toString()
        L4c:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r5)
            java.lang.String r5 = " AND readyState = '0'"
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            r6 = 0
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Exception -> L79
            r0.<init>()     // Catch: java.lang.Exception -> L79
            java.lang.String r1 = "readyState"
            r2 = 2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L79
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L79
            android.database.sqlite.SQLiteDatabase r1 = r4.getWritableDatabase()     // Catch: java.lang.Exception -> L79
            java.lang.String r2 = "campaign"
            r3 = 0
            int r6 = r1.update(r2, r0, r5, r3)     // Catch: java.lang.Exception -> L79
            goto L83
        L79:
            r5 = move-exception
            java.lang.String r5 = r5.getLocalizedMessage()
            java.lang.String r0 = "CampaignDao"
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)
        L83:
            return r6
    }

    public final synchronized void c(java.lang.String r4) {
            r3 = this;
            monitor-enter(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L25 java.lang.Exception -> L27
            r0.<init>()     // Catch: java.lang.Throwable -> L25 java.lang.Exception -> L27
            java.lang.String r1 = "unitid = "
            r0.append(r1)     // Catch: java.lang.Throwable -> L25 java.lang.Exception -> L27
            r0.append(r4)     // Catch: java.lang.Throwable -> L25 java.lang.Exception -> L27
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L25 java.lang.Exception -> L27
            android.database.sqlite.SQLiteDatabase r0 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L25 java.lang.Exception -> L27
            if (r0 != 0) goto L1a
            monitor-exit(r3)
            return
        L1a:
            android.database.sqlite.SQLiteDatabase r0 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L25 java.lang.Exception -> L27
            java.lang.String r1 = "campaign"
            r2 = 0
            r0.delete(r1, r4, r2)     // Catch: java.lang.Throwable -> L25 java.lang.Exception -> L27
            goto L31
        L25:
            r4 = move-exception
            goto L33
        L27:
            r4 = move-exception
            java.lang.String r0 = "CampaignDao"
            java.lang.String r4 = r4.getLocalizedMessage()     // Catch: java.lang.Throwable -> L25
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)     // Catch: java.lang.Throwable -> L25
        L31:
            monitor-exit(r3)
            return
        L33:
            monitor-exit(r3)
            throw r4
    }

    public final com.mbridge.msdk.foundation.entity.CampaignEx d(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            r0 = 0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L52 java.lang.Exception -> L54
            r1.<init>()     // Catch: java.lang.Throwable -> L52 java.lang.Exception -> L54
            java.lang.String r2 = "SELECT * FROM campaign where unitid ='"
            r1.append(r2)     // Catch: java.lang.Throwable -> L52 java.lang.Exception -> L54
            r1.append(r6)     // Catch: java.lang.Throwable -> L52 java.lang.Exception -> L54
            java.lang.String r6 = "' and "
            r1.append(r6)     // Catch: java.lang.Throwable -> L52 java.lang.Exception -> L54
            java.lang.String r6 = "id"
            r1.append(r6)     // Catch: java.lang.Throwable -> L52 java.lang.Exception -> L54
            java.lang.String r6 = " = '"
            r1.append(r6)     // Catch: java.lang.Throwable -> L52 java.lang.Exception -> L54
            r1.append(r5)     // Catch: java.lang.Throwable -> L52 java.lang.Exception -> L54
            java.lang.String r5 = "'"
            r1.append(r5)     // Catch: java.lang.Throwable -> L52 java.lang.Exception -> L54
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L52 java.lang.Exception -> L54
            android.database.sqlite.SQLiteDatabase r6 = r4.getReadableDatabase()     // Catch: java.lang.Throwable -> L52 java.lang.Exception -> L54
            android.database.Cursor r5 = r6.rawQuery(r5, r0)     // Catch: java.lang.Throwable -> L52 java.lang.Exception -> L54
            if (r5 == 0) goto L4c
            int r6 = r5.getCount()     // Catch: java.lang.Throwable -> L44 java.lang.Exception -> L47
            if (r6 <= 0) goto L4c
        L39:
            boolean r6 = r5.moveToNext()     // Catch: java.lang.Throwable -> L44 java.lang.Exception -> L47
            if (r6 == 0) goto L4c
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r4.a(r5)     // Catch: java.lang.Throwable -> L44 java.lang.Exception -> L47
            goto L39
        L44:
            r6 = move-exception
            r0 = r5
            goto L66
        L47:
            r6 = move-exception
            r3 = r0
            r0 = r5
            r5 = r3
            goto L56
        L4c:
            if (r5 == 0) goto L65
            r5.close()     // Catch: java.lang.Exception -> L65
            goto L65
        L52:
            r6 = move-exception
            goto L66
        L54:
            r6 = move-exception
            r5 = r0
        L56:
            java.lang.String r1 = "CampaignDao"
            java.lang.String r6 = r6.getLocalizedMessage()     // Catch: java.lang.Throwable -> L52
            com.mbridge.msdk.foundation.tools.z.d(r1, r6)     // Catch: java.lang.Throwable -> L52
            if (r0 == 0) goto L64
            r0.close()     // Catch: java.lang.Exception -> L64
        L64:
            r0 = r5
        L65:
            return r0
        L66:
            if (r0 == 0) goto L6b
            r0.close()     // Catch: java.lang.Exception -> L6b
        L6b:
            throw r6
    }

    public final synchronized void d(java.lang.String r5) {
            r4 = this;
            monitor-enter(r4)
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            r2 = 604800000(0x240c8400, double:2.988109026E-315)
            long r0 = r0 - r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            r2.<init>()     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            java.lang.String r3 = "unitid = "
            r2.append(r3)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            r2.append(r5)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            java.lang.String r5 = " AND "
            r2.append(r5)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            java.lang.String r5 = "short_ctime"
            r2.append(r5)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            java.lang.String r5 = "<"
            r2.append(r5)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            r2.append(r0)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            android.database.sqlite.SQLiteDatabase r0 = r4.getWritableDatabase()     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            if (r0 != 0) goto L34
            monitor-exit(r4)
            return
        L34:
            android.database.sqlite.SQLiteDatabase r0 = r4.getWritableDatabase()     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            java.lang.String r1 = "campaign"
            r2 = 0
            r0.delete(r1, r5, r2)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            goto L4b
        L3f:
            r5 = move-exception
            goto L4d
        L41:
            r5 = move-exception
            java.lang.String r0 = "CampaignDao"
            java.lang.String r5 = r5.getLocalizedMessage()     // Catch: java.lang.Throwable -> L3f
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)     // Catch: java.lang.Throwable -> L3f
        L4b:
            monitor-exit(r4)
            return
        L4d:
            monitor-exit(r4)
            throw r5
    }

    public final synchronized java.lang.String e(java.lang.String r37) {
            r36 = this;
            monitor-enter(r36)
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L287
            r1.<init>()     // Catch: java.lang.Throwable -> L287
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L277
            r0.<init>()     // Catch: java.lang.Throwable -> L277
            java.lang.String r2 = "SELECT * FROM campaign WHERE unitid = '"
            r0.append(r2)     // Catch: java.lang.Throwable -> L277
            r2 = r37
            r0.append(r2)     // Catch: java.lang.Throwable -> L277
            java.lang.String r2 = "'"
            r0.append(r2)     // Catch: java.lang.Throwable -> L277
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L277
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L277
            r2.<init>()     // Catch: java.lang.Throwable -> L277
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L277
            r3.<init>()     // Catch: java.lang.Throwable -> L277
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L277
            r4.<init>()     // Catch: java.lang.Throwable -> L277
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L277
            r5.<init>()     // Catch: java.lang.Throwable -> L277
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L277
            r6.<init>()     // Catch: java.lang.Throwable -> L277
            org.json.JSONObject r7 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L277
            r7.<init>()     // Catch: java.lang.Throwable -> L277
            org.json.JSONObject r8 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L277
            r8.<init>()     // Catch: java.lang.Throwable -> L277
            org.json.JSONObject r9 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L277
            r9.<init>()     // Catch: java.lang.Throwable -> L277
            org.json.JSONObject r10 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L277
            r10.<init>()     // Catch: java.lang.Throwable -> L277
            long r11 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L277
            java.lang.Long r11 = java.lang.Long.valueOf(r11)     // Catch: java.lang.Throwable -> L277
            r12 = 86400000(0x5265c00, double:4.2687272E-316)
            long r14 = r11.longValue()     // Catch: java.lang.Throwable -> L277
            long r14 = r14 - r12
            long r12 = r11.longValue()     // Catch: java.lang.Throwable -> L277
            r16 = 172800000(0xa4cb800, double:8.53745436E-316)
            long r12 = r12 - r16
            long r16 = r11.longValue()     // Catch: java.lang.Throwable -> L277
            r18 = 259200000(0xf731400, double:1.280618154E-315)
            long r16 = r16 - r18
            long r18 = r11.longValue()     // Catch: java.lang.Throwable -> L277
            r20 = 345600000(0x14997000, double:1.70749087E-315)
            long r18 = r18 - r20
            long r20 = r11.longValue()     // Catch: java.lang.Throwable -> L277
            r22 = 432000000(0x19bfcc00, double:2.13436359E-315)
            long r20 = r20 - r22
            long r22 = r11.longValue()     // Catch: java.lang.Throwable -> L277
            r24 = 518400000(0x1ee62800, double:2.56123631E-315)
            long r22 = r22 - r24
            long r24 = r11.longValue()     // Catch: java.lang.Throwable -> L277
            r26 = 604800000(0x240c8400, double:2.988109026E-315)
            long r24 = r24 - r26
            r11 = 0
            r26 = r1
            android.database.sqlite.SQLiteDatabase r1 = r36.getReadableDatabase()     // Catch: java.lang.Throwable -> L262
            android.database.Cursor r11 = r1.rawQuery(r0, r11)     // Catch: java.lang.Throwable -> L262
            if (r11 == 0) goto L25b
            int r0 = r11.getCount()     // Catch: java.lang.Throwable -> L262
            if (r0 <= 0) goto L25b
            r37 = r3
            r28 = r9
            r27 = r10
            r0 = 0
            r1 = 0
            r3 = 0
            r9 = 0
            r10 = 0
            r29 = 0
            r30 = 0
        Lb3:
            boolean r31 = r11.moveToNext()     // Catch: java.lang.Throwable -> L258
            if (r31 == 0) goto L22d
            r31 = r8
            java.lang.String r8 = "is_deleted"
            int r8 = r11.getColumnIndex(r8)     // Catch: java.lang.Throwable -> L258
            int r8 = r11.getInt(r8)     // Catch: java.lang.Throwable -> L258
            if (r8 != 0) goto Ld4
            java.lang.String r8 = "id"
            int r8 = r11.getColumnIndex(r8)     // Catch: java.lang.Throwable -> L258
            java.lang.String r8 = r11.getString(r8)     // Catch: java.lang.Throwable -> L258
            r2.put(r8)     // Catch: java.lang.Throwable -> L258
        Ld4:
            java.lang.String r8 = "short_ctime"
            int r8 = r11.getColumnIndex(r8)     // Catch: java.lang.Throwable -> L258
            long r32 = r11.getLong(r8)     // Catch: java.lang.Throwable -> L258
            int r8 = (r32 > r14 ? 1 : (r32 == r14 ? 0 : -1))
            r34 = r14
            r14 = 10
            if (r8 <= 0) goto L10f
            if (r0 >= r14) goto L10f
            int r0 = r0 + 1
            java.lang.String r8 = "id"
            int r8 = r11.getColumnIndex(r8)     // Catch: java.lang.Throwable -> L258
            java.lang.String r8 = r11.getString(r8)     // Catch: java.lang.Throwable -> L258
            java.lang.String r14 = "is_click"
            int r14 = r11.getColumnIndex(r14)     // Catch: java.lang.Throwable -> L258
            int r14 = r11.getInt(r14)     // Catch: java.lang.Throwable -> L258
            r4.put(r8, r14)     // Catch: java.lang.Throwable -> L258
        L101:
            r8 = r29
            r15 = r31
            r31 = r0
            r29 = r3
            r3 = r27
            r0 = r28
            goto L21e
        L10f:
            if (r8 >= 0) goto L131
            int r8 = (r32 > r12 ? 1 : (r32 == r12 ? 0 : -1))
            if (r8 <= 0) goto L131
            if (r1 >= r14) goto L131
            int r1 = r1 + 1
            java.lang.String r8 = "id"
            int r8 = r11.getColumnIndex(r8)     // Catch: java.lang.Throwable -> L258
            java.lang.String r8 = r11.getString(r8)     // Catch: java.lang.Throwable -> L258
            java.lang.String r14 = "is_click"
            int r14 = r11.getColumnIndex(r14)     // Catch: java.lang.Throwable -> L258
            int r14 = r11.getInt(r14)     // Catch: java.lang.Throwable -> L258
            r5.put(r8, r14)     // Catch: java.lang.Throwable -> L258
            goto L101
        L131:
            int r8 = (r32 > r12 ? 1 : (r32 == r12 ? 0 : -1))
            if (r8 >= 0) goto L155
            int r8 = (r32 > r16 ? 1 : (r32 == r16 ? 0 : -1))
            if (r8 <= 0) goto L155
            if (r3 >= r14) goto L155
            int r3 = r3 + 1
            java.lang.String r8 = "id"
            int r8 = r11.getColumnIndex(r8)     // Catch: java.lang.Throwable -> L258
            java.lang.String r8 = r11.getString(r8)     // Catch: java.lang.Throwable -> L258
            java.lang.String r14 = "is_click"
            int r14 = r11.getColumnIndex(r14)     // Catch: java.lang.Throwable -> L258
            int r14 = r11.getInt(r14)     // Catch: java.lang.Throwable -> L258
            r6.put(r8, r14)     // Catch: java.lang.Throwable -> L258
            goto L101
        L155:
            int r8 = (r32 > r16 ? 1 : (r32 == r16 ? 0 : -1))
            if (r8 >= 0) goto L179
            int r8 = (r32 > r18 ? 1 : (r32 == r18 ? 0 : -1))
            if (r8 <= 0) goto L179
            if (r10 >= r14) goto L179
            int r10 = r10 + 1
            java.lang.String r8 = "id"
            int r8 = r11.getColumnIndex(r8)     // Catch: java.lang.Throwable -> L258
            java.lang.String r8 = r11.getString(r8)     // Catch: java.lang.Throwable -> L258
            java.lang.String r14 = "is_click"
            int r14 = r11.getColumnIndex(r14)     // Catch: java.lang.Throwable -> L258
            int r14 = r11.getInt(r14)     // Catch: java.lang.Throwable -> L258
            r7.put(r8, r14)     // Catch: java.lang.Throwable -> L258
            goto L101
        L179:
            int r8 = (r32 > r18 ? 1 : (r32 == r18 ? 0 : -1))
            if (r8 >= 0) goto L1aa
            int r8 = (r32 > r20 ? 1 : (r32 == r20 ? 0 : -1))
            if (r8 <= 0) goto L1aa
            if (r9 >= r14) goto L1aa
            int r9 = r9 + 1
            java.lang.String r8 = "id"
            int r8 = r11.getColumnIndex(r8)     // Catch: java.lang.Throwable -> L258
            java.lang.String r8 = r11.getString(r8)     // Catch: java.lang.Throwable -> L258
            java.lang.String r14 = "is_click"
            int r14 = r11.getColumnIndex(r14)     // Catch: java.lang.Throwable -> L258
            int r14 = r11.getInt(r14)     // Catch: java.lang.Throwable -> L258
            r15 = r31
            r15.put(r8, r14)     // Catch: java.lang.Throwable -> L258
            r31 = r0
            r0 = r28
        L1a2:
            r8 = r29
            r29 = r3
            r3 = r27
            goto L21e
        L1aa:
            r15 = r31
            int r8 = (r32 > r20 ? 1 : (r32 == r20 ? 0 : -1))
            if (r8 >= 0) goto L1db
            int r8 = (r32 > r22 ? 1 : (r32 == r22 ? 0 : -1))
            if (r8 <= 0) goto L1db
            r8 = r29
            if (r8 >= r14) goto L1d6
            int r29 = r8 + 1
            java.lang.String r8 = "id"
            int r8 = r11.getColumnIndex(r8)     // Catch: java.lang.Throwable -> L258
            java.lang.String r8 = r11.getString(r8)     // Catch: java.lang.Throwable -> L258
            java.lang.String r14 = "is_click"
            int r14 = r11.getColumnIndex(r14)     // Catch: java.lang.Throwable -> L258
            int r14 = r11.getInt(r14)     // Catch: java.lang.Throwable -> L258
            r31 = r0
            r0 = r28
            r0.put(r8, r14)     // Catch: java.lang.Throwable -> L258
            goto L1a2
        L1d6:
            r31 = r0
            r0 = r28
            goto L1e1
        L1db:
            r31 = r0
            r0 = r28
            r8 = r29
        L1e1:
            int r28 = (r32 > r22 ? 1 : (r32 == r22 ? 0 : -1))
            if (r28 >= 0) goto L212
            int r28 = (r32 > r24 ? 1 : (r32 == r24 ? 0 : -1))
            if (r28 <= 0) goto L212
            r28 = r1
            r1 = r30
            if (r1 >= r14) goto L20d
            int r30 = r1 + 1
            java.lang.String r1 = "id"
            int r1 = r11.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L258
            java.lang.String r1 = r11.getString(r1)     // Catch: java.lang.Throwable -> L258
            java.lang.String r14 = "is_click"
            int r14 = r11.getColumnIndex(r14)     // Catch: java.lang.Throwable -> L258
            int r14 = r11.getInt(r14)     // Catch: java.lang.Throwable -> L258
            r29 = r3
            r3 = r27
            r3.put(r1, r14)     // Catch: java.lang.Throwable -> L258
            goto L21c
        L20d:
            r29 = r3
            r3 = r27
            goto L21a
        L212:
            r28 = r1
            r29 = r3
            r3 = r27
            r1 = r30
        L21a:
            r30 = r1
        L21c:
            r1 = r28
        L21e:
            r28 = r0
            r27 = r3
            r3 = r29
            r0 = r31
            r29 = r8
            r8 = r15
            r14 = r34
            goto Lb3
        L22d:
            r15 = r8
            r3 = r27
            r0 = r28
            java.lang.String r1 = "1"
            r8 = r37
            r8.put(r1, r4)     // Catch: java.lang.Throwable -> L263
            java.lang.String r1 = "2"
            r8.put(r1, r5)     // Catch: java.lang.Throwable -> L263
            java.lang.String r1 = "3"
            r8.put(r1, r6)     // Catch: java.lang.Throwable -> L263
            java.lang.String r1 = "4"
            r8.put(r1, r7)     // Catch: java.lang.Throwable -> L263
            java.lang.String r1 = "5"
            r8.put(r1, r15)     // Catch: java.lang.Throwable -> L263
            java.lang.String r1 = "6"
            r8.put(r1, r0)     // Catch: java.lang.Throwable -> L263
            java.lang.String r0 = "7"
            r8.put(r0, r3)     // Catch: java.lang.Throwable -> L263
            goto L25c
        L258:
            r8 = r37
            goto L263
        L25b:
            r8 = r3
        L25c:
            if (r11 == 0) goto L266
        L25e:
            r11.close()     // Catch: java.lang.Throwable -> L273
            goto L266
        L262:
            r8 = r3
        L263:
            if (r11 == 0) goto L266
            goto L25e
        L266:
            java.lang.String r0 = "dp"
            r1 = r26
            r1.put(r0, r2)     // Catch: java.lang.Throwable -> L277
            java.lang.String r0 = "c"
            r1.put(r0, r8)     // Catch: java.lang.Throwable -> L277
            goto L281
        L273:
            r0 = move-exception
            r1 = r26
            goto L278
        L277:
            r0 = move-exception
        L278:
            java.lang.String r2 = "CampaignDao"
            java.lang.String r0 = r0.getLocalizedMessage()     // Catch: java.lang.Throwable -> L287
            com.mbridge.msdk.foundation.tools.z.d(r2, r0)     // Catch: java.lang.Throwable -> L287
        L281:
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L287
            monitor-exit(r36)
            return r0
        L287:
            r0 = move-exception
            monitor-exit(r36)
            throw r0
    }

    public final synchronized void e(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            if (r0 == 0) goto L9
            monitor-exit(r3)
            return
        L9:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            r0.<init>()     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            java.lang.String r1 = "unitid = '"
            r0.append(r1)     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            r0.append(r4)     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            java.lang.String r4 = "'"
            r0.append(r4)     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            if (r0 != 0) goto L3e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            r0.<init>()     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            r0.append(r4)     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            java.lang.String r4 = " AND bid_token != '"
            r0.append(r4)     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            r0.append(r5)     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            java.lang.String r4 = "'"
            r0.append(r4)     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
        L3e:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            r5.<init>()     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            r5.append(r4)     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            java.lang.String r4 = " AND is_bid_campaign = 1"
            r5.append(r4)     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            java.lang.String r4 = r5.toString()     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            r5.<init>()     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            r5.append(r4)     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            java.lang.String r4 = " AND bid_token IS NOT NULL"
            r5.append(r4)     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            java.lang.String r4 = r5.toString()     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            android.content.ContentValues r5 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            r5.<init>()     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            java.lang.String r0 = "readyState"
            r1 = 2
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            r5.put(r0, r1)     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            android.database.sqlite.SQLiteDatabase r0 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            java.lang.String r1 = "campaign"
            r2 = 0
            r0.update(r1, r5, r4, r2)     // Catch: java.lang.Throwable -> L7a java.lang.Exception -> L7c
            goto L86
        L7a:
            r4 = move-exception
            goto L88
        L7c:
            r4 = move-exception
            java.lang.String r5 = "CampaignDao"
            java.lang.String r4 = r4.getLocalizedMessage()     // Catch: java.lang.Throwable -> L7a
            com.mbridge.msdk.foundation.tools.z.d(r5, r4)     // Catch: java.lang.Throwable -> L7a
        L86:
            monitor-exit(r3)
            return
        L88:
            monitor-exit(r3)
            throw r4
    }

    public final java.util.List<com.mbridge.msdk.foundation.entity.c> f(java.lang.String r10) {
            r9 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            boolean r1 = android.text.TextUtils.isEmpty(r10)
            if (r1 == 0) goto Lc
            return r0
        Lc:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = " WHERE unitid = '"
            r1.append(r2)
            r1.append(r10)
            java.lang.String r10 = "'"
            r1.append(r10)
            java.lang.String r10 = " AND "
            r1.append(r10)
            java.lang.String r10 = "level"
            r1.append(r10)
            java.lang.String r10 = " = "
            r1.append(r10)
            r10 = 0
            r1.append(r10)
            java.lang.String r10 = " AND "
            r1.append(r10)
            java.lang.String r10 = "adSource"
            r1.append(r10)
            java.lang.String r10 = " = "
            r1.append(r10)
            r10 = 1
            r1.append(r10)
            java.lang.String r10 = r1.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r10)
            java.lang.String r10 = " AND is_bid_campaign = 1"
            r1.append(r10)
            java.lang.String r10 = r1.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r10)
            java.lang.String r10 = " AND readyState = '0'"
            r1.append(r10)
            java.lang.String r10 = r1.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r10)
            java.lang.String r10 = " group by request_id"
            r1.append(r10)
            java.lang.String r10 = r1.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r10)
            java.lang.String r10 = " order by ts ASC"
            r1.append(r10)
            java.lang.String r10 = r1.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "SELECT request_id as rid ,count(*) as ridCount ,vcn,token_r,bid_token,ts as timestamp FROM campaign"
            r1.append(r2)
            r1.append(r10)
            java.lang.String r10 = r1.toString()
            r1 = 0
            java.lang.Object r2 = new java.lang.Object     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
            r2.<init>()     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
            monitor-enter(r2)     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
            android.database.sqlite.SQLiteDatabase r3 = r9.getReadableDatabase()     // Catch: java.lang.Throwable -> L125
            android.database.Cursor r1 = r3.rawQuery(r10, r1)     // Catch: java.lang.Throwable -> L125
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L125
            if (r1 == 0) goto L11f
            int r10 = r1.getCount()     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
            if (r10 <= 0) goto L11f
        Lb5:
            boolean r10 = r1.moveToNext()     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
            if (r10 == 0) goto L11f
            com.mbridge.msdk.foundation.entity.c r10 = new com.mbridge.msdk.foundation.entity.c     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
            r10.<init>()     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
            java.lang.String r2 = "rid"
            int r2 = r1.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
            java.lang.String r2 = r1.getString(r2)     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
            if (r3 == 0) goto Ld1
            goto Lb5
        Ld1:
            java.lang.String r3 = "bid_token"
            int r3 = r1.getColumnIndex(r3)     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
            java.lang.String r3 = r1.getString(r3)     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
            java.lang.String r4 = "ridCount"
            int r4 = r1.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
            int r4 = r1.getInt(r4)     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
            java.lang.String r5 = "vcn"
            int r5 = r1.getColumnIndex(r5)     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
            int r5 = r1.getInt(r5)     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
            java.lang.String r6 = "token_r"
            int r6 = r1.getColumnIndex(r6)     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
            int r6 = r1.getInt(r6)     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
            java.lang.String r7 = "timestamp"
            int r7 = r1.getColumnIndex(r7)     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
            long r7 = r1.getLong(r7)     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
            r10.a(r2)     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
            r10.c(r4)     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
            r10.c(r7)     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
            r10.a(r6)     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
            r10.b(r5)     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
            boolean r2 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
            if (r2 != 0) goto L11b
            r10.b(r3)     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
        L11b:
            r0.add(r10)     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
            goto Lb5
        L11f:
            if (r1 == 0) goto L137
        L121:
            r1.close()     // Catch: java.lang.Exception -> L137
            goto L137
        L125:
            r10 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L125
            throw r10     // Catch: java.lang.Throwable -> L128 java.lang.Exception -> L12a
        L128:
            r10 = move-exception
            goto L138
        L12a:
            r10 = move-exception
            java.lang.String r2 = "CampaignDao"
            java.lang.String r10 = r10.getLocalizedMessage()     // Catch: java.lang.Throwable -> L128
            com.mbridge.msdk.foundation.tools.z.d(r2, r10)     // Catch: java.lang.Throwable -> L128
            if (r1 == 0) goto L137
            goto L121
        L137:
            return r0
        L138:
            if (r1 == 0) goto L13d
            r1.close()     // Catch: java.lang.Exception -> L13d
        L13d:
            throw r10
    }

    public final synchronized void f(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            if (r0 != 0) goto L5a
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            if (r0 == 0) goto Le
            goto L5a
        Le:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            r0.<init>()     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            java.lang.String r1 = "unitid = '"
            r0.append(r1)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            r0.append(r4)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            java.lang.String r4 = "' AND "
            r0.append(r4)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            java.lang.String r4 = "bid_token"
            r0.append(r4)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            java.lang.String r4 = " = '"
            r0.append(r4)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            r0.append(r5)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            java.lang.String r4 = "' AND "
            r0.append(r4)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            java.lang.String r4 = "bid_token"
            r0.append(r4)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            java.lang.String r4 = " IS NOT NULL"
            r0.append(r4)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            android.content.ContentValues r5 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            r5.<init>()     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            java.lang.String r0 = "readyState"
            r1 = 2
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            r5.put(r0, r1)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            android.database.sqlite.SQLiteDatabase r0 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            java.lang.String r1 = "campaign"
            r2 = 0
            r0.update(r1, r5, r4, r2)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            goto L68
        L5a:
            monitor-exit(r3)
            return
        L5c:
            r4 = move-exception
            goto L6a
        L5e:
            r4 = move-exception
            java.lang.String r5 = "CampaignDao"
            java.lang.String r4 = r4.getLocalizedMessage()     // Catch: java.lang.Throwable -> L5c
            com.mbridge.msdk.foundation.tools.z.d(r5, r4)     // Catch: java.lang.Throwable -> L5c
        L68:
            monitor-exit(r3)
            return
        L6a:
            monitor-exit(r3)
            throw r4
    }

    public final java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.entity.c> g(java.lang.String r11) {
            r10 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = " WHERE unitid = '"
            r0.append(r1)
            r0.append(r11)
            java.lang.String r11 = "'"
            r0.append(r11)
            java.lang.String r11 = " AND "
            r0.append(r11)
            java.lang.String r11 = "level"
            r0.append(r11)
            java.lang.String r11 = " = "
            r0.append(r11)
            r11 = 0
            r0.append(r11)
            java.lang.String r11 = " AND "
            r0.append(r11)
            java.lang.String r11 = "adSource"
            r0.append(r11)
            java.lang.String r11 = " = "
            r0.append(r11)
            r11 = 1
            r0.append(r11)
            java.lang.String r11 = r0.toString()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r11)
            java.lang.String r11 = " AND is_bid_campaign = 1"
            r0.append(r11)
            java.lang.String r11 = r0.toString()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r11)
            java.lang.String r11 = " AND readyState = '0'"
            r0.append(r11)
            java.lang.String r11 = r0.toString()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "SELECT request_id as rid, id as cid, plct as plct, plctb as plctb, ts as timestamp FROM campaign"
            r0.append(r1)
            r0.append(r11)
            java.lang.String r11 = r0.toString()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1 = 0
            java.lang.Object r2 = new java.lang.Object     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            r2.<init>()     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            monitor-enter(r2)     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            android.database.sqlite.SQLiteDatabase r3 = r10.getReadableDatabase()     // Catch: java.lang.Throwable -> L112
            android.database.Cursor r1 = r3.rawQuery(r11, r1)     // Catch: java.lang.Throwable -> L112
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L112
            if (r1 == 0) goto L10c
            int r11 = r1.getCount()     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            if (r11 <= 0) goto L10c
        L8c:
            boolean r11 = r1.moveToNext()     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            if (r11 == 0) goto L10c
            java.lang.String r11 = "rid"
            int r11 = r1.getColumnIndex(r11)     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            java.lang.String r11 = r1.getString(r11)     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            java.lang.String r2 = "cid"
            int r2 = r1.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            java.lang.String r2 = r1.getString(r2)     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            java.lang.String r3 = "plct"
            int r3 = r1.getColumnIndex(r3)     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            long r3 = r1.getLong(r3)     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            java.lang.String r5 = "plctb"
            int r5 = r1.getColumnIndex(r5)     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            long r5 = r1.getLong(r5)     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            java.lang.String r7 = "timestamp"
            int r7 = r1.getColumnIndex(r7)     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            long r7 = r1.getLong(r7)     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            boolean r9 = r0.containsKey(r11)     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            if (r9 == 0) goto Lec
            java.lang.Object r9 = r0.get(r11)     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            com.mbridge.msdk.foundation.entity.c r9 = (com.mbridge.msdk.foundation.entity.c) r9     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            if (r9 == 0) goto L8c
            r9.a(r11)     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            r9.a(r3)     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            r9.b(r5)     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            r9.c(r7)     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            java.util.List r11 = r9.c()     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            if (r11 == 0) goto L8c
            java.util.List r11 = r9.c()     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            r11.add(r2)     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            goto L8c
        Lec:
            com.mbridge.msdk.foundation.entity.c r9 = new com.mbridge.msdk.foundation.entity.c     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            r9.<init>()     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            r9.a(r11)     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            r9.a(r3)     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            r9.b(r5)     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            r9.c(r7)     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            r3.<init>()     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            r3.add(r2)     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            r9.a(r3)     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            r0.put(r11, r9)     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
            goto L8c
        L10c:
            if (r1 == 0) goto L124
        L10e:
            r1.close()     // Catch: java.lang.Exception -> L124
            goto L124
        L112:
            r11 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L112
            throw r11     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L117
        L115:
            r11 = move-exception
            goto L125
        L117:
            r11 = move-exception
            java.lang.String r2 = "CampaignDao"
            java.lang.String r11 = r11.getLocalizedMessage()     // Catch: java.lang.Throwable -> L115
            com.mbridge.msdk.foundation.tools.z.d(r2, r11)     // Catch: java.lang.Throwable -> L115
            if (r1 == 0) goto L124
            goto L10e
        L124:
            return r0
        L125:
            if (r1 == 0) goto L12a
            r1.close()     // Catch: java.lang.Exception -> L12a
        L12a:
            throw r11
    }
}
