package com.mbridge.msdk.foundation.db;

public class g extends com.mbridge.msdk.foundation.db.f {
    private static final java.lang.String a = null;
    private static com.mbridge.msdk.foundation.db.g b;

    static {
            java.lang.Class<com.mbridge.msdk.foundation.db.g> r0 = com.mbridge.msdk.foundation.db.g.class
            java.lang.String r0 = r0.getName()
            com.mbridge.msdk.foundation.db.g.a = r0
            r0 = 0
            com.mbridge.msdk.foundation.db.g.b = r0
            return
    }

    private g(com.mbridge.msdk.foundation.db.h r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static com.mbridge.msdk.foundation.db.g b(com.mbridge.msdk.foundation.db.h r2) {
            com.mbridge.msdk.foundation.db.g r0 = com.mbridge.msdk.foundation.db.g.b
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.foundation.db.g> r0 = com.mbridge.msdk.foundation.db.g.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.db.g r1 = com.mbridge.msdk.foundation.db.g.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.foundation.db.g r1 = new com.mbridge.msdk.foundation.db.g     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.foundation.db.g.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.mbridge.msdk.foundation.db.g r2 = com.mbridge.msdk.foundation.db.g.b
            return r2
    }

    public final synchronized long a(com.mbridge.msdk.foundation.entity.CampaignEx r7) {
            r6 = this;
            monitor-enter(r6)
            if (r7 != 0) goto L7
            r0 = 0
            monitor-exit(r6)
            return r0
        L7:
            r0 = -1
            android.database.sqlite.SQLiteDatabase r2 = r6.getWritableDatabase()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            if (r2 != 0) goto L11
            monitor-exit(r6)
            return r0
        L11:
            android.content.ContentValues r2 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.<init>()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "id"
            java.lang.String r4 = r7.getId()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "unitid"
            java.lang.String r4 = r7.getCampaignUnitId()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "tab"
            int r4 = r7.getTab()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "package_name"
            java.lang.String r4 = r7.getPackageName()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "app_name"
            java.lang.String r4 = r7.getAppName()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "app_desc"
            java.lang.String r4 = r7.getAppDesc()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "app_size"
            java.lang.String r4 = r7.getSize()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "image_size"
            java.lang.String r4 = r7.getImageSize()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "icon_url"
            java.lang.String r4 = r7.getIconUrl()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "image_url"
            java.lang.String r4 = r7.getImageUrl()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "impression_url"
            java.lang.String r4 = r7.getImpressionURL()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "notice_url"
            java.lang.String r4 = r7.getNoticeUrl()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "download_url"
            java.lang.String r4 = r7.getClickURL()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "wtick"
            int r4 = r7.getWtick()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "only_impression"
            java.lang.String r4 = r7.getOnlyImpressionURL()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "ts"
            long r4 = r7.getTimestamp()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "template"
            int r4 = r7.getTemplate()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "click_mode"
            java.lang.String r4 = r7.getClick_mode()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "landing_type"
            java.lang.String r4 = r7.getLandingType()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "link_type"
            int r4 = r7.getLinkType()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "star"
            double r4 = r7.getRating()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Double r4 = java.lang.Double.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "cti"
            int r4 = r7.getClickInterval()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "cpti"
            int r4 = r7.getPreClickInterval()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "preclick"
            boolean r4 = r7.isPreClick()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "level"
            int r4 = r7.getCacheLevel()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "adSource"
            int r4 = r7.getType()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "ad_call"
            java.lang.String r4 = r7.getAdCall()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "fc_a"
            int r4 = r7.getFca()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "ad_url_list"
            java.lang.String r4 = r7.getAd_url_list()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "video_url"
            java.lang.String r4 = r7.getVideoUrlEncode()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "video_size"
            int r4 = r7.getVideoSize()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "video_length"
            int r4 = r7.getVideoLength()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "video_resolution"
            java.lang.String r4 = r7.getVideoResolution()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "endcard_click_result"
            int r4 = r7.getEndcard_click_result()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "watch_mile"
            int r4 = r7.getWatchMile()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "view_com_time"
            int r4 = r7.getVideoCompleteTime()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "advImp"
            java.lang.String r4 = r7.getAdvImp()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "bty"
            int r4 = r7.getBty()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "t_imp"
            int r4 = r7.getTImp()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "guidelines"
            java.lang.String r4 = r7.getGuidelines()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "offer_type"
            int r4 = r7.getOfferType()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "html_url"
            java.lang.String r4 = r7.getHtmlUrl()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "end_screen_url"
            java.lang.String r4 = r7.getEndScreenUrl()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "reward_amount"
            int r4 = r7.getRewardAmount()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "reward_name"
            java.lang.String r4 = r7.getRewardName()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "reward_play_status"
            int r4 = r7.getRewardPlayStatus()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "adv_id"
            java.lang.String r4 = r7.getAdvId()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "ttc_ct2"
            int r4 = r7.getTtc_ct2()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            int r4 = r4 * 1000
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "ttc_type"
            int r4 = r7.getTtc_type()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "retarget"
            int r4 = r7.getRetarget_offer()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "native_ad_tracking"
            java.lang.String r4 = r7.getNativeVideoTrackingString()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "playable_ads_without_video"
            int r4 = r7.getPlayable_ads_without_video()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "endcard_url"
            java.lang.String r4 = r7.getendcard_url()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "video_end_type"
            int r4 = r7.getVideo_end_type()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "loopback"
            java.lang.String r4 = r7.getLoopbackString()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "md5_file"
            java.lang.String r4 = r7.getVideoMD5Value()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "nv_t2"
            int r4 = r7.getNvT2()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "gif_url"
            java.lang.String r4 = r7.getGifUrl()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            com.mbridge.msdk.foundation.entity.CampaignEx$c r3 = r7.getRewardTemplateMode()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            if (r3 == 0) goto L2a5
            java.lang.String r3 = "reward_teamplate"
            com.mbridge.msdk.foundation.entity.CampaignEx$c r4 = r7.getRewardTemplateMode()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r4 = r4.a()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
        L2a5:
            java.lang.String r3 = "c_coi"
            int r4 = r7.getClickTimeOutInterval()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "c_ua"
            int r4 = r7.getcUA()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "imp_ua"
            int r4 = r7.getImpUA()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "gh_id"
            java.lang.String r4 = r7.getGhId()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "gh_path"
            java.lang.String r4 = r7.getGhPath()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "bind_id"
            java.lang.String r4 = r7.getBindId()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "flb"
            int r4 = r7.getFlb()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "adspace_t"
            int r4 = r7.getAdSpaceT()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "cbd"
            int r4 = r7.getCbd()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "vst"
            int r4 = r7.getVst()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "flb_skiptime"
            int r7 = r7.getFlbSkipTime()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            r2.put(r3, r7)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            android.database.sqlite.SQLiteDatabase r7 = r6.getWritableDatabase()     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            java.lang.String r3 = "report_campaign"
            r4 = 0
            long r0 = r7.insert(r3, r4, r2)     // Catch: java.lang.Throwable -> L335 java.lang.Exception -> L338
            monitor-exit(r6)
            return r0
        L335:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
        L338:
            monitor-exit(r6)
            return r0
    }

    public final com.mbridge.msdk.foundation.entity.CampaignEx h(java.lang.String r9) {
            r8 = this;
            java.lang.String r0 = "loopback"
            java.lang.String r1 = "native_ad_tracking"
            java.lang.String r2 = "html_url"
            java.lang.String r3 = "guidelines"
            r4 = 0
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L412 java.lang.Exception -> L414
            r5.<init>()     // Catch: java.lang.Throwable -> L412 java.lang.Exception -> L414
            java.lang.String r6 = "SELECT * FROM report_campaign where package_name ='"
            r5.append(r6)     // Catch: java.lang.Throwable -> L412 java.lang.Exception -> L414
            r5.append(r9)     // Catch: java.lang.Throwable -> L412 java.lang.Exception -> L414
            java.lang.String r9 = "'"
            r5.append(r9)     // Catch: java.lang.Throwable -> L412 java.lang.Exception -> L414
            java.lang.String r9 = r5.toString()     // Catch: java.lang.Throwable -> L412 java.lang.Exception -> L414
            android.database.sqlite.SQLiteDatabase r5 = r8.getReadableDatabase()     // Catch: java.lang.Throwable -> L412 java.lang.Exception -> L414
            android.database.Cursor r9 = r5.rawQuery(r9, r4)     // Catch: java.lang.Throwable -> L412 java.lang.Exception -> L414
            if (r9 == 0) goto L40c
            int r5 = r9.getCount()     // Catch: java.lang.Throwable -> L405 java.lang.Exception -> L408
            if (r5 <= 0) goto L40c
            boolean r5 = r9.moveToNext()     // Catch: java.lang.Throwable -> L405 java.lang.Exception -> L408
            if (r5 == 0) goto L40c
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = new com.mbridge.msdk.foundation.entity.CampaignEx     // Catch: java.lang.Throwable -> L405 java.lang.Exception -> L408
            r5.<init>()     // Catch: java.lang.Throwable -> L405 java.lang.Exception -> L408
            java.lang.String r4 = "id"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = r9.getString(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setId(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "tab"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r4 = r9.getInt(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setTab(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "package_name"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = r9.getString(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setPackageName(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "app_name"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = r9.getString(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setAppName(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "app_desc"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = r9.getString(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setAppDesc(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "app_size"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = r9.getString(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setSize(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "image_size"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = r9.getString(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setImageSize(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "icon_url"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = r9.getString(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setIconUrl(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "image_url"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = r9.getString(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setImageUrl(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "impression_url"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = r9.getString(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setImpressionURL(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "notice_url"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = r9.getString(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setNoticeUrl(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "download_url"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = r9.getString(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setClickURL(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "wtick"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r4 = r9.getInt(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setWtick(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "only_impression"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = r9.getString(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setOnlyImpressionURL(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "preclick"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r4 = r9.getInt(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r6 = 1
            if (r4 != r6) goto Lfe
            goto Lff
        Lfe:
            r6 = 0
        Lff:
            r5.setPreClick(r6)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "template"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r4 = r9.getInt(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setTemplate(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "landing_type"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = r9.getString(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setLandingType(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "link_type"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r4 = r9.getInt(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setLinkType(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "click_mode"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = r9.getString(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setClick_mode(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "star"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = r9.getString(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            double r6 = java.lang.Double.parseDouble(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setRating(r6)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "number_rating"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r4 = r9.getInt(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setNumberRating(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "cti"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r4 = r9.getInt(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setClickInterval(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "cpti"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r4 = r9.getInt(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setPreClickInterval(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "ts"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            long r6 = r9.getLong(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setTimestamp(r6)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "level"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r4 = r9.getInt(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setCacheLevel(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "ad_call"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = r9.getString(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setAdCall(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "fc_a"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r4 = r9.getInt(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setFca(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "ad_url_list"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = r9.getString(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setAd_url_list(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "video_length"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r4 = r9.getInt(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setVideoLength(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "video_size"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r4 = r9.getInt(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setVideoSize(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "video_resolution"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = r9.getString(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setVideoResolution(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "endcard_click_result"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r4 = r9.getInt(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setEndcard_click_result(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "video_url"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = r9.getString(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setVideoUrlEncode(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "watch_mile"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r4 = r9.getInt(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setWatchMile(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "view_com_time"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r4 = r9.getInt(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setVideoCompleteTime(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "t_imp"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r4 = r9.getInt(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setTImp(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "bty"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r4 = r9.getInt(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setBty(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "advImp"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = r9.getString(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setAdvImp(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r4 = r9.getColumnIndex(r3)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = r9.getString(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setGuidelines(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = "offer_type"
            int r4 = r9.getColumnIndex(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r4 = r9.getInt(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setOfferType(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r4 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r4 = r9.getString(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setHtmlUrl(r4)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r3 = r9.getColumnIndex(r3)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r3 = r9.getString(r3)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setGuidelines(r3)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setHtmlUrl(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r2 = "end_screen_url"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setEndScreenUrl(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r2 = "reward_name"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setRewardName(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r2 = "reward_amount"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setRewardAmount(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r2 = "reward_play_status"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setRewardPlayStatus(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r2 = "adv_id"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setAdvId(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r2 = "ttc_ct2"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setTtc_ct2(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r2 = "ttc_type"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setTtc_type(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r2 = "retarget"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setRetarget_offer(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r2 = "unitid"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setCampaignUnitId(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r2 = r9.getColumnIndex(r1)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            com.mbridge.msdk.foundation.entity.l r2 = com.mbridge.msdk.foundation.entity.CampaignEx.TrackingStr2Object(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setNativeVideoTracking(r2)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r1 = r9.getColumnIndex(r1)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r1 = r9.getString(r1)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setNativeVideoTrackingString(r1)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r1 = "video_end_type"
            int r1 = r9.getColumnIndex(r1)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r1 = r9.getInt(r1)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setVideo_end_type(r1)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r1 = "endcard_url"
            int r1 = r9.getColumnIndex(r1)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r1 = r9.getString(r1)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setendcard_url(r1)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r1 = "playable_ads_without_video"
            int r1 = r9.getColumnIndex(r1)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r1 = r9.getInt(r1)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setPlayable_ads_without_video(r1)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r1 = r9.getColumnIndex(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r1 = r9.getString(r1)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setLoopbackString(r1)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r0 = r9.getColumnIndex(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r0 = r9.getString(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.util.Map r0 = com.mbridge.msdk.foundation.entity.CampaignEx.loopbackStrToMap(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setLoopbackMap(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r0 = "reward_teamplate"
            int r0 = r9.getColumnIndex(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r0 = r9.getString(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            com.mbridge.msdk.foundation.entity.CampaignEx$c r0 = com.mbridge.msdk.foundation.entity.CampaignEx.c.a(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setRewardTemplateMode(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r0 = "md5_file"
            int r0 = r9.getColumnIndex(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r0 = r9.getString(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setVideoMD5Value(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r0 = "gif_url"
            int r0 = r9.getColumnIndex(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r0 = r9.getString(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setGifUrl(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r0 = "nv_t2"
            int r0 = r9.getColumnIndex(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r0 = r9.getInt(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setNvT2(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r0 = "c_coi"
            int r0 = r9.getColumnIndex(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r0 = r9.getInt(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setClickTimeOutInterval(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r0 = "c_ua"
            int r0 = r9.getColumnIndex(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r0 = r9.getInt(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setcUA(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r0 = "imp_ua"
            int r0 = r9.getColumnIndex(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r0 = r9.getInt(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setImpUA(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r0 = "gh_id"
            int r0 = r9.getColumnIndex(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r0 = r9.getString(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setGhId(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r0 = "gh_path"
            int r0 = r9.getColumnIndex(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r0 = r9.getString(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setGhPath(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r0 = "bind_id"
            int r0 = r9.getColumnIndex(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r0 = r9.getString(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setBindId(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r0 = "flb"
            int r0 = r9.getColumnIndex(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r0 = r9.getInt(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setFlb(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r0 = "cbd"
            int r0 = r9.getColumnIndex(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r0 = r9.getInt(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setCbd(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r0 = "vst"
            int r0 = r9.getColumnIndex(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r0 = r9.getInt(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setVst(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r0 = "adspace_t"
            int r0 = r9.getColumnIndex(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r0 = r9.getInt(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setAdSpaceT(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            java.lang.String r0 = "flb_skiptime"
            int r0 = r9.getColumnIndex(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            int r0 = r9.getInt(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r5.setFlbSkipTime(r0)     // Catch: java.lang.Exception -> L403 java.lang.Throwable -> L405
            r4 = r5
            goto L40c
        L403:
            r0 = move-exception
            goto L40a
        L405:
            r0 = move-exception
            r4 = r9
            goto L420
        L408:
            r0 = move-exception
            r5 = r4
        L40a:
            r4 = r9
            goto L416
        L40c:
            if (r9 == 0) goto L41f
            r9.close()     // Catch: java.lang.Exception -> L41f
            goto L41f
        L412:
            r0 = move-exception
            goto L420
        L414:
            r0 = move-exception
            r5 = r4
        L416:
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L412
            if (r4 == 0) goto L41e
            r4.close()     // Catch: java.lang.Exception -> L41e
        L41e:
            r4 = r5
        L41f:
            return r4
        L420:
            if (r4 == 0) goto L425
            r4.close()     // Catch: java.lang.Exception -> L425
        L425:
            throw r0
    }

    public final synchronized void i(java.lang.String r4) {
            r3 = this;
            monitor-enter(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            r0.<init>()     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            java.lang.String r1 = "package_name = '"
            r0.append(r1)     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            r0.append(r4)     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            java.lang.String r4 = "'"
            r0.append(r4)     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            android.database.sqlite.SQLiteDatabase r0 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            if (r0 != 0) goto L1f
            monitor-exit(r3)
            return
        L1f:
            android.database.sqlite.SQLiteDatabase r0 = r3.getWritableDatabase()     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            java.lang.String r1 = "report_campaign"
            r2 = 0
            r0.delete(r1, r4, r2)     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            goto L2d
        L2a:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
        L2d:
            monitor-exit(r3)
            return
    }
}
