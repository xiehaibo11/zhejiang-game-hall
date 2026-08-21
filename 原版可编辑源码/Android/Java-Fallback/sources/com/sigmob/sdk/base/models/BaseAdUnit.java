package com.sigmob.sdk.base.models;

public class BaseAdUnit implements java.io.Serializable {
    private static final java.lang.String TAG = "BaseAdUnit";
    private static final long serialVersionUID = 1;
    private com.sigmob.sdk.base.models.rtb.Ad ad;
    private transient com.sigmob.sdk.base.common.h adConfig;
    private int adHeight;
    private double adPercent;
    private com.sigmob.sdk.base.models.LoadAdRequest adRequest;
    private java.util.HashMap<java.lang.String, java.util.List<com.sigmob.sdk.base.common.g>> adTrackersMap;
    private int adWidth;
    private java.lang.String ad_scene_desc;
    private java.lang.String ad_scene_id;
    private java.lang.String ad_source_channel;
    private int ad_type;
    private java.lang.String adslot_id;
    private java.lang.String bid_token;
    public com.sigmob.sdk.base.models.rtb.BiddingResponse bidding_response;
    private java.lang.String camp_id;
    private boolean catchVideo;
    private com.sigmob.sdk.base.models.ClickCommon clickCommon;
    private long create_time;
    private java.lang.String crid;
    private java.lang.Long downloadId;
    private java.lang.String endcard_md5;
    public int expiration_time;
    private java.util.List imageUrlList;
    private boolean isHalfInterstitial;
    private java.lang.String landUrl;
    private java.lang.String load_id;
    private com.sigmob.sdk.base.models.rtb.AndroidMarket mCustomAndroidMarket;
    private java.lang.String mCustomDeeplink;
    private java.lang.String mCustomLandPageUrl;
    private transient com.sigmob.sdk.base.common.ab mSessionManager;
    private com.sigmob.sdk.base.models.SigMacroCommon macroCommon;
    private java.lang.String nativeDesc;
    private java.lang.String nativeIconUrl;
    private java.lang.String nativeTtitle;
    private com.sigmob.sdk.base.models.SigVideo nativeVideo;
    private double realAdPercent;
    private boolean record;
    private java.lang.String request_id;
    public com.sigmob.sdk.base.models.rtb.Template scene;
    public com.sigmob.sdk.base.models.rtb.SlotAdSetting slotAdSetting;
    public java.lang.String uid;
    private java.lang.String uuid;
    private com.sigmob.sdk.base.models.VideoStatusCommon videoCommon;
    private java.lang.String video_md5;

    public BaseAdUnit() {
            r2 = this;
            r2.<init>()
            r0 = -4616189618054758400(0xbff0000000000000, double:-1.0)
            r2.adPercent = r0
            r2.realAdPercent = r0
            r0 = 1
            r2.record = r0
            r0 = 0
            r2.catchVideo = r0
            return
    }

    public static com.sigmob.sdk.base.models.BaseAdUnit adUnit(com.sigmob.sdk.base.models.rtb.Ad r5, java.lang.String r6, com.sigmob.sdk.base.models.LoadAdRequest r7, com.sigmob.sdk.base.models.rtb.SlotAdSetting r8, com.sigmob.sdk.base.models.rtb.Template r9, java.lang.String r10, java.lang.Integer r11, com.sigmob.sdk.base.models.rtb.BiddingResponse r12) {
            r0 = 0
            java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r1 = r5.materials     // Catch: java.lang.Throwable -> La6
            r2 = 0
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> La6
            com.sigmob.sdk.base.models.rtb.MaterialMeta r1 = (com.sigmob.sdk.base.models.rtb.MaterialMeta) r1     // Catch: java.lang.Throwable -> La6
            if (r1 == 0) goto Lac
            com.sigmob.sdk.base.models.BaseAdUnit r2 = new com.sigmob.sdk.base.models.BaseAdUnit     // Catch: java.lang.Throwable -> La6
            r2.<init>()     // Catch: java.lang.Throwable -> La6
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> La3
            r2.create_time = r3     // Catch: java.lang.Throwable -> La3
            java.lang.String r0 = r5.adslot_id     // Catch: java.lang.Throwable -> La3
            r2.adslot_id = r0     // Catch: java.lang.Throwable -> La3
            java.lang.Integer r0 = r5.ad_type     // Catch: java.lang.Throwable -> La3
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> La3
            r2.ad_type = r0     // Catch: java.lang.Throwable -> La3
            r2.ad = r5     // Catch: java.lang.Throwable -> La3
            java.lang.String r0 = r5.crid     // Catch: java.lang.Throwable -> La3
            r2.crid = r0     // Catch: java.lang.Throwable -> La3
            java.lang.String r0 = r5.camp_id     // Catch: java.lang.Throwable -> La3
            r2.camp_id = r0     // Catch: java.lang.Throwable -> La3
            r2.request_id = r6     // Catch: java.lang.Throwable -> La3
            java.lang.String r6 = r1.endcard_md5     // Catch: java.lang.Throwable -> La3
            r2.endcard_md5 = r6     // Catch: java.lang.Throwable -> La3
            java.lang.String r6 = r1.video_md5     // Catch: java.lang.Throwable -> La3
            r2.video_md5 = r6     // Catch: java.lang.Throwable -> La3
            java.lang.String r6 = r7.getLoadId()     // Catch: java.lang.Throwable -> La3
            r2.load_id = r6     // Catch: java.lang.Throwable -> La3
            java.lang.String r6 = r5.ad_source_channel     // Catch: java.lang.Throwable -> La3
            r2.ad_source_channel = r6     // Catch: java.lang.Throwable -> La3
            java.lang.Integer r6 = r1.creative_type     // Catch: java.lang.Throwable -> La3
            int r6 = r6.intValue()     // Catch: java.lang.Throwable -> La3
            com.sigmob.sdk.base.common.l r0 = com.sigmob.sdk.base.common.l.c     // Catch: java.lang.Throwable -> La3
            int r0 = r0.a()     // Catch: java.lang.Throwable -> La3
            if (r6 == r0) goto L5d
            java.lang.Integer r6 = r1.creative_type     // Catch: java.lang.Throwable -> La3
            int r6 = r6.intValue()     // Catch: java.lang.Throwable -> La3
            com.sigmob.sdk.base.common.l r0 = com.sigmob.sdk.base.common.l.e     // Catch: java.lang.Throwable -> La3
            int r0 = r0.a()     // Catch: java.lang.Throwable -> La3
            if (r6 != r0) goto L66
        L5d:
            com.czhj.wire.okio.ByteString r6 = r1.html_snippet     // Catch: java.lang.Throwable -> La3
            if (r6 == 0) goto L66
            com.czhj.wire.okio.ByteString r6 = r1.html_snippet     // Catch: java.lang.Throwable -> La3
            r6.size()     // Catch: java.lang.Throwable -> La3
        L66:
            r2.slotAdSetting = r8     // Catch: java.lang.Throwable -> La3
            r2.adRequest = r7     // Catch: java.lang.Throwable -> La3
            r2.scene = r9     // Catch: java.lang.Throwable -> La3
            r2.uid = r10     // Catch: java.lang.Throwable -> La3
            int r6 = r11.intValue()     // Catch: java.lang.Throwable -> La3
            r2.expiration_time = r6     // Catch: java.lang.Throwable -> La3
            r2.bidding_response = r12     // Catch: java.lang.Throwable -> La3
            initAdTrackerMap(r2)     // Catch: java.lang.Throwable -> La3
            java.util.Map<java.lang.String, java.lang.String> r6 = r5.ad_track_macro     // Catch: java.lang.Throwable -> La3
            if (r6 == 0) goto L86
            com.sigmob.sdk.base.models.SigMacroCommon r6 = r2.getMacroCommon()     // Catch: java.lang.Throwable -> La3
            java.util.Map<java.lang.String, java.lang.String> r5 = r5.ad_track_macro     // Catch: java.lang.Throwable -> La3
            r6.setServerMacroMap(r5)     // Catch: java.lang.Throwable -> La3
        L86:
            int r5 = r2.ad_type     // Catch: java.lang.Throwable -> La3
            r6 = 5
            if (r5 != r6) goto La1
            com.sigmob.sdk.base.models.rtb.ResponseNativeAd r5 = r2.getNativeAd()     // Catch: java.lang.Throwable -> La3
            if (r5 != 0) goto La1
            java.lang.Integer r5 = r5.type     // Catch: java.lang.Throwable -> La3
            int r5 = r5.intValue()     // Catch: java.lang.Throwable -> La3
            r6 = 1
            if (r5 != r6) goto L9e
            r2.getNativeVideo()     // Catch: java.lang.Throwable -> La3
            goto La1
        L9e:
            r2.getImageUrlList()     // Catch: java.lang.Throwable -> La3
        La1:
            r0 = r2
            goto Lac
        La3:
            r5 = move-exception
            r0 = r2
            goto La7
        La6:
            r5 = move-exception
        La7:
            java.lang.String r6 = "adUnit error"
            com.czhj.sdk.logger.SigmobLog.e(r6, r5)
        Lac:
            return r0
    }

    private static boolean checkFileMD5(java.lang.String r3, java.lang.String r4) {
            java.lang.String r0 = com.czhj.sdk.common.utils.Md5Util.fileMd5(r3)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "path: [ "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = " ] calc [ "
            r1.append(r3)
            r1.append(r0)
            java.lang.String r3 = " ] origin "
            r1.append(r3)
            r1.append(r4)
            java.lang.String r3 = r1.toString()
            com.czhj.sdk.logger.SigmobLog.d(r3)
            if (r0 == 0) goto L32
            boolean r3 = r0.equalsIgnoreCase(r4)
            if (r3 == 0) goto L32
            r3 = 1
            goto L33
        L32:
            r3 = 0
        L33:
            return r3
    }

    public static java.util.List<com.sigmob.sdk.base.common.g> createTrackersForUrls(java.util.List<java.lang.String> r3, java.lang.String r4, java.lang.String r5, java.lang.Integer r6) {
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r3)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Iterator r3 = r3.iterator()
        Lc:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L24
            java.lang.Object r1 = r3.next()
            java.lang.String r1 = (java.lang.String) r1
            com.sigmob.sdk.base.common.g r2 = new com.sigmob.sdk.base.common.g
            r2.<init>(r1, r4, r5)
            r2.a(r6)
            r0.add(r2)
            goto Lc
        L24:
            return r0
    }

    public static long getSerialVersionUID() {
            r0 = 1
            return r0
    }

    public static java.lang.String getTAG() {
            java.lang.String r0 = "BaseAdUnit"
            return r0
    }

    private static void initAdTrackerMap(com.sigmob.sdk.base.models.BaseAdUnit r6) {
            java.util.List r0 = r6.getAd_tracking()
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r6.adTrackersMap = r1
            java.util.Iterator r0 = r0.iterator()
        Lf:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L35
            java.lang.Object r1 = r0.next()
            com.sigmob.sdk.base.models.rtb.Tracking r1 = (com.sigmob.sdk.base.models.rtb.Tracking) r1
            java.util.List<java.lang.String> r2 = r1.tracking_url
            java.lang.String r3 = r1.tracking_event_type
            java.lang.String r4 = r6.request_id
            int r5 = r6.getTrackingRetryNum()
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            java.util.List r2 = createTrackersForUrls(r2, r3, r4, r5)
            java.util.HashMap<java.lang.String, java.util.List<com.sigmob.sdk.base.common.g>> r3 = r6.adTrackersMap
            java.lang.String r1 = r1.tracking_event_type
            r3.put(r1, r2)
            goto Lf
        L35:
            return
    }

    public boolean checkEndCardZipValid() {
            r2 = this;
            java.lang.String r0 = r2.getEndcard_url()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L20
            java.lang.String r0 = r2.endcard_md5
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L13
            goto L20
        L13:
            java.lang.String r0 = r2.getEndCardZipPath()
            java.lang.String r1 = r2.getEndcard_md5()
            boolean r0 = checkFileMD5(r0, r1)
            return r0
        L20:
            r0 = 1
            return r0
    }

    public boolean checkVideoValid() {
            r2 = this;
            java.lang.String r0 = r2.getVideo_url()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L20
            java.lang.String r0 = r2.video_md5
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L13
            goto L20
        L13:
            java.lang.String r0 = r2.getVideoPath()
            java.lang.String r1 = r2.getVideo_OriginMD5()
            boolean r0 = checkFileMD5(r0, r1)
            return r0
        L20:
            r0 = 1
            return r0
    }

    public boolean enable_full_click() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.SplashAdSetting r0 = r1.getSplashAdSetting()
            if (r0 == 0) goto Ld
            java.lang.Boolean r0 = r0.enable_full_click
            boolean r0 = r0.booleanValue()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public com.sigmob.sdk.base.models.rtb.Ad getAd() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.Ad r0 = r1.ad
            return r0
    }

    public com.sigmob.sdk.base.common.h getAdConfig() {
            r2 = this;
            com.sigmob.sdk.base.common.h r0 = r2.adConfig
            if (r0 != 0) goto L26
            int r0 = r2.getAd_type()
            r1 = 1
            if (r0 == r1) goto L21
            r1 = 2
            if (r0 == r1) goto L1c
            r1 = 4
            if (r0 == r1) goto L21
            r1 = 5
            if (r0 == r1) goto L15
            goto L26
        L15:
            com.sigmob.sdk.nativead.b r0 = com.sigmob.sdk.nativead.b.f(r2)
        L19:
            r2.adConfig = r0
            return r0
        L1c:
            com.sigmob.sdk.splash.c r0 = com.sigmob.sdk.splash.c.f(r2)
            goto L19
        L21:
            com.sigmob.sdk.videoAd.a r0 = com.sigmob.sdk.videoAd.a.f(r2)
            goto L19
        L26:
            com.sigmob.sdk.base.common.h r0 = r2.adConfig
            return r0
    }

    public java.lang.Integer getAdExpiredTime() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.Ad r0 = r1.ad
            if (r0 == 0) goto L17
            java.lang.Integer r0 = r0.expired_time
            if (r0 == 0) goto L17
            com.sigmob.sdk.base.models.rtb.Ad r0 = r1.ad
            java.lang.Integer r0 = r0.expired_time
            int r0 = r0.intValue()
            int r0 = r0 * 1000
        L12:
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            return r0
        L17:
            r0 = 0
            goto L12
    }

    public java.lang.String getAdLogo() {
            r1 = this;
            java.lang.String r0 = r1.getAd_source_logo()
            return r0
    }

    public double getAdPercent() {
            r5 = this;
            double r0 = r5.adPercent
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L9
            return r0
        L9:
            double r0 = r5.realAdPercent
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto L10
            return r0
        L10:
            r0 = 4610685218569846784(0x3ffc71c720000000, double:1.7777777910232544)
            return r0
    }

    public java.io.File getAdPrivacyTemplateFile() {
            r4 = this;
            com.sigmob.sdk.base.models.rtb.AdPrivacy r0 = r4.getadPrivacy()
            if (r0 == 0) goto L2f
            java.lang.String r0 = r0.privacy_template_url
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L2f
            java.lang.String r0 = com.czhj.sdk.common.utils.Md5Util.md5(r0)
            java.lang.String r1 = com.sigmob.sdk.base.utils.b.b
            java.io.File r1 = com.sigmob.sdk.base.utils.b.b(r1)
            java.io.File r2 = new java.io.File
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.lang.String r0 = ".html"
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r2.<init>(r1, r0)
            return r2
        L2f:
            r0 = 0
            return r0
    }

    public com.sigmob.sdk.base.models.LoadAdRequest getAdRequest() {
            r1 = this;
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r1.adRequest
            return r0
    }

    public com.sigmob.sdk.base.models.rtb.AdSetting getAdSetting() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.Ad r0 = r1.ad
            if (r0 == 0) goto L7
            com.sigmob.sdk.base.models.rtb.AdSetting r0 = r0.ad_setting
            return r0
        L7:
            r0 = 0
            return r0
    }

    public java.util.List<com.sigmob.sdk.base.common.g> getAdTracker(com.sigmob.sdk.base.common.a r2) {
            r1 = this;
            java.util.HashMap<java.lang.String, java.util.List<com.sigmob.sdk.base.common.g>> r0 = r1.adTrackersMap
            if (r0 == 0) goto Lf
            java.lang.String r2 = r2.a()
            java.lang.Object r2 = r0.get(r2)
            java.util.List r2 = (java.util.List) r2
            return r2
        Lf:
            r2 = 0
            return r2
    }

    public java.util.List<com.sigmob.sdk.base.common.g> getAdTracker(java.lang.String r2) {
            r1 = this;
            java.util.HashMap<java.lang.String, java.util.List<com.sigmob.sdk.base.common.g>> r0 = r1.adTrackersMap
            if (r0 == 0) goto Lb
            java.lang.Object r2 = r0.get(r2)
            java.util.List r2 = (java.util.List) r2
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public java.lang.String getAd_scene_desc() {
            r1 = this;
            java.lang.String r0 = r1.ad_scene_desc
            return r0
    }

    public java.lang.String getAd_scene_id() {
            r1 = this;
            java.lang.String r0 = r1.ad_scene_id
            return r0
    }

    public java.lang.String getAd_source_channel() {
            r1 = this;
            java.lang.String r0 = r1.ad_source_channel
            return r0
    }

    public java.lang.String getAd_source_logo() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.Ad r0 = r1.ad
            if (r0 == 0) goto L7
            java.lang.String r0 = r0.ad_source_logo
            return r0
        L7:
            r0 = 0
            return r0
    }

    public java.util.List<com.sigmob.sdk.base.models.rtb.Tracking> getAd_tracking() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.Ad r0 = r1.ad
            if (r0 == 0) goto L7
            java.util.List<com.sigmob.sdk.base.models.rtb.Tracking> r0 = r0.ad_tracking
            return r0
        L7:
            r0 = 0
            return r0
    }

    public int getAd_type() {
            r1 = this;
            int r0 = r1.ad_type
            return r0
    }

    public java.lang.String getAdslot_id() {
            r1 = this;
            java.lang.String r0 = r1.adslot_id
            return r0
    }

    public com.sigmob.sdk.base.models.rtb.AndroidMarket getAndroidMarket() {
            r2 = this;
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r2.getMaterial()
            if (r0 == 0) goto L9
            com.sigmob.sdk.base.models.rtb.AndroidMarket r0 = r0.android_market
            goto La
        L9:
            r0 = 0
        La:
            if (r0 != 0) goto L11
            com.sigmob.sdk.base.models.rtb.AndroidMarket r1 = r2.mCustomAndroidMarket
            if (r1 == 0) goto L11
            return r1
        L11:
            return r0
    }

    public java.lang.String getAppName() {
            r2 = this;
            com.sigmob.sdk.base.models.rtb.AdPrivacy r0 = r2.getadPrivacy()
            if (r0 == 0) goto L15
            java.util.Map<java.lang.String, java.lang.String> r1 = r0.privacy_template_info
            if (r1 == 0) goto L15
            java.util.Map<java.lang.String, java.lang.String> r0 = r0.privacy_template_info
            java.lang.String r1 = "app_name"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
        L15:
            r0 = 0
            return r0
    }

    public java.lang.String getAppVersion() {
            r2 = this;
            com.sigmob.sdk.base.models.rtb.AdPrivacy r0 = r2.getadPrivacy()
            if (r0 == 0) goto L15
            java.util.Map<java.lang.String, java.lang.String> r1 = r0.privacy_template_info
            if (r1 == 0) goto L15
            java.util.Map<java.lang.String, java.lang.String> r0 = r0.privacy_template_info
            java.lang.String r1 = "app_version"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
        L15:
            r0 = 0
            return r0
    }

    public java.lang.String getBid_token() {
            r1 = this;
            java.lang.String r0 = r1.bid_token
            return r0
    }

    public int getBubInteractionType() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r1.getMaterial()
            if (r0 == 0) goto Ld
            java.lang.Integer r0 = r0.sub_interaction_type
            int r0 = r0.intValue()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public java.lang.String getCTAText() {
            r2 = this;
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r2.getMaterial()
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.button_text
            goto La
        L9:
            r0 = 0
        La:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L11
            goto L1d
        L11:
            int r0 = r2.getInteractionType()
            r1 = 2
            if (r0 == r1) goto L1b
            java.lang.String r0 = "查看详情"
            goto L1d
        L1b:
            java.lang.String r0 = "立即下载"
        L1d:
            return r0
    }

    public java.lang.String getCamp_id() {
            r1 = this;
            java.lang.String r0 = r1.camp_id
            return r0
    }

    public com.sigmob.sdk.base.models.rtb.ClickAreaSetting getClickAreaSetting() {
            r3 = this;
            com.sigmob.sdk.base.models.rtb.RvAdSetting r0 = r3.getRvAdSetting()
            com.sigmob.sdk.base.models.rtb.ClickAreaSetting r1 = r0.click_setting
            if (r1 != 0) goto L2d
            com.sigmob.sdk.base.models.rtb.ClickAreaSetting$Builder r0 = new com.sigmob.sdk.base.models.rtb.ClickAreaSetting$Builder
            r0.<init>()
            r1 = 1036831949(0x3dcccccd, float:0.1)
            java.lang.Float r2 = java.lang.Float.valueOf(r1)
            r0.bottom = r2
            java.lang.Float r2 = java.lang.Float.valueOf(r1)
            r0.right = r2
            java.lang.Float r2 = java.lang.Float.valueOf(r1)
            r0.top = r2
            java.lang.Float r1 = java.lang.Float.valueOf(r1)
            r0.left = r1
            com.sigmob.sdk.base.models.rtb.ClickAreaSetting r0 = r0.build()
            return r0
        L2d:
            if (r0 == 0) goto L32
            com.sigmob.sdk.base.models.rtb.ClickAreaSetting r0 = r0.click_setting
            return r0
        L32:
            r0 = 0
            return r0
    }

    public com.sigmob.sdk.base.models.ClickCommon getClickCommon() {
            r1 = this;
            com.sigmob.sdk.base.models.ClickCommon r0 = r1.clickCommon
            if (r0 != 0) goto Lb
            com.sigmob.sdk.base.models.ClickCommon r0 = new com.sigmob.sdk.base.models.ClickCommon
            r0.<init>()
            r1.clickCommon = r0
        Lb:
            com.sigmob.sdk.base.models.ClickCommon r0 = r1.clickCommon
            return r0
    }

    public java.lang.String getCloseCardHtmlData() {
            r2 = this;
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r2.getMaterial()
            if (r0 == 0) goto L28
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r2.getMaterial()
            com.czhj.wire.okio.ByteString r0 = r0.closecard_html_snippet
            if (r0 != 0) goto L1d
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r2.getMaterial()
            com.czhj.wire.okio.ByteString r0 = r0.closecard_html_snippet
            int r0 = r0.size()
            r1 = 10
            if (r0 >= r1) goto L1d
            goto L28
        L1d:
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r2.getMaterial()
            com.czhj.wire.okio.ByteString r0 = r0.closecard_html_snippet
            java.lang.String r0 = r0.utf8()
            return r0
        L28:
            r0 = 0
            return r0
    }

    public java.lang.String getCompanyName() {
            r2 = this;
            com.sigmob.sdk.base.models.rtb.AdPrivacy r0 = r2.getadPrivacy()
            if (r0 == 0) goto L15
            java.util.Map<java.lang.String, java.lang.String> r1 = r0.privacy_template_info
            if (r1 == 0) goto L15
            java.util.Map<java.lang.String, java.lang.String> r0 = r0.privacy_template_info
            java.lang.String r1 = "app_company"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
        L15:
            r0 = 0
            return r0
    }

    public long getCreate_time() {
            r2 = this;
            long r0 = r2.create_time
            return r0
    }

    public com.sigmob.sdk.base.views.k.b getCreativeResourceType() {
            r2 = this;
            java.lang.String r0 = r2.getEndcard_url()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L25
            int r0 = r2.getCreativeType()
            com.sigmob.sdk.base.common.l r1 = com.sigmob.sdk.base.common.l.a
            int r1 = r1.a()
            if (r0 == r1) goto L22
            int r0 = r2.getCreativeType()
            com.sigmob.sdk.base.common.l r1 = com.sigmob.sdk.base.common.l.d
            int r1 = r1.a()
            if (r0 != r1) goto L25
        L22:
            com.sigmob.sdk.base.views.k$b r0 = com.sigmob.sdk.base.views.k.b.d
            return r0
        L25:
            java.lang.String r0 = r2.getHtmlData()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L32
            com.sigmob.sdk.base.views.k$b r0 = com.sigmob.sdk.base.views.k.b.b
            return r0
        L32:
            java.lang.String r0 = r2.getHtmlUrl()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L3f
            com.sigmob.sdk.base.views.k$b r0 = com.sigmob.sdk.base.views.k.b.e
            return r0
        L3f:
            com.sigmob.sdk.base.views.k$b r0 = com.sigmob.sdk.base.views.k.b.d
            return r0
    }

    public int getCreativeType() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r1.getMaterial()
            if (r0 == 0) goto L11
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r1.getMaterial()
            java.lang.Integer r0 = r0.creative_type
            int r0 = r0.intValue()
            return r0
        L11:
            r0 = 0
            return r0
    }

    public java.lang.String getCrid() {
            r1 = this;
            java.lang.String r0 = r1.crid
            return r0
    }

    public java.lang.String getDeeplinkUrl() {
            r2 = this;
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r2.getMaterial()
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.deeplink_url
            goto La
        L9:
            r0 = 0
        La:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L1a
            java.lang.String r1 = r2.mCustomDeeplink
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L1a
            java.lang.String r0 = r2.mCustomDeeplink
        L1a:
            return r0
    }

    public java.lang.String getDesc() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r1.getMaterial()
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.desc
            return r0
        L9:
            r0 = 0
            return r0
    }

    public boolean getDisableAutoLoad() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.RvAdSetting r0 = r1.getRvAdSetting()
            if (r0 == 0) goto Ld
            java.lang.Boolean r0 = r0.disable_auto_load
            boolean r0 = r0.booleanValue()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public java.lang.Long getDownloadId() {
            r1 = this;
            java.lang.Long r0 = r1.downloadId
            return r0
    }

    public java.lang.String getEndCardDirPath() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.sigmob.sdk.base.utils.b.b()
            r0.append(r1)
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r2 = r4.getEndcard_md5()
            r3 = 0
            r1[r3] = r2
            java.lang.String r2 = "/%s/"
            java.lang.String r1 = java.lang.String.format(r2, r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public java.lang.String getEndCardIndexPath() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.getEndCardDirPath()
            r0.append(r1)
            java.lang.String r1 = "endcard.html"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public java.lang.String getEndCardZipPath() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.sigmob.sdk.base.utils.b.b()
            r0.append(r1)
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r2 = r4.endcard_md5
            r3 = 0
            r1[r3] = r2
            java.lang.String r2 = "/%s.tgz"
            java.lang.String r1 = java.lang.String.format(r2, r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public java.lang.String getEndCard_OriginMD5() {
            r1 = this;
            java.lang.String r0 = r1.endcard_md5
            return r0
    }

    public int getEndTime() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.RvAdSetting r0 = r1.getRvAdSetting()
            if (r0 == 0) goto Ld
            java.lang.Integer r0 = r0.end_time
            int r0 = r0.intValue()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public int getEndcardCloseImage() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.RvAdSetting r0 = r1.getRvAdSetting()
            if (r0 == 0) goto Ld
            java.lang.Integer r0 = r0.endcard_close_image
            int r0 = r0.intValue()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public java.lang.String getEndcard_md5() {
            r1 = this;
            java.lang.String r0 = r1.endcard_md5
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = r1.endcard_md5
            return r0
        Lb:
            java.lang.String r0 = r1.getCrid()
            java.lang.String r0 = com.czhj.sdk.common.utils.Md5Util.md5(r0)
            return r0
    }

    public java.lang.String getEndcard_url() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r1.getMaterial()
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.endcard_url
            return r0
        L9:
            r0 = 0
            return r0
    }

    public float getFinishedTime() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.RvAdSetting r0 = r1.getRvAdSetting()
            if (r0 == 0) goto Ld
            java.lang.Float r0 = r0.finished
            float r0 = r0.floatValue()
            return r0
        Ld:
            r0 = 1065353216(0x3f800000, float:1.0)
            return r0
    }

    public boolean getFullClickOnVideo() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.RvAdSetting r0 = r1.getRvAdSetting()
            if (r0 == 0) goto Ld
            java.lang.Boolean r0 = r0.full_click_on_video
            boolean r0 = r0.booleanValue()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public java.lang.String getHtmlData() {
            r2 = this;
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r2.getMaterial()
            if (r0 == 0) goto L28
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r2.getMaterial()
            com.czhj.wire.okio.ByteString r0 = r0.html_snippet
            if (r0 != 0) goto L1d
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r2.getMaterial()
            com.czhj.wire.okio.ByteString r0 = r0.html_snippet
            int r0 = r0.size()
            r1 = 10
            if (r0 >= r1) goto L1d
            goto L28
        L1d:
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r2.getMaterial()
            com.czhj.wire.okio.ByteString r0 = r0.html_snippet
            java.lang.String r0 = r0.utf8()
            return r0
        L28:
            r0 = 0
            return r0
    }

    public java.lang.String getHtmlUrl() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r1.getMaterial()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r1.getMaterial()
            java.lang.String r0 = r0.html_url
            return r0
    }

    public java.lang.String getIconUrl() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r1.getMaterial()
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.icon_url
            return r0
        L9:
            r0 = 0
            return r0
    }

    public java.util.List<com.sigmob.sdk.base.models.SigImage> getImageUrlList() {
            r7 = this;
            com.sigmob.sdk.base.models.rtb.ResponseNativeAd r0 = r7.getNativeAd()
            java.util.List r1 = r7.imageUrlList
            if (r1 != 0) goto L7c
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r7.imageUrlList = r1
            if (r0 == 0) goto L7c
            java.lang.Integer r1 = r0.type
            int r1 = r1.intValue()
            r2 = 1
            if (r1 == r2) goto L7c
            java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r0 = r0.assets
            java.util.Iterator r0 = r0.iterator()
        L20:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L7c
            java.lang.Object r1 = r0.next()
            com.sigmob.sdk.base.models.rtb.ResponseAsset r1 = (com.sigmob.sdk.base.models.rtb.ResponseAsset) r1
            com.sigmob.sdk.base.models.rtb.ResponseAssetImage r1 = r1.image
            if (r1 == 0) goto L20
            com.sigmob.sdk.base.models.SigImage r2 = new com.sigmob.sdk.base.models.SigImage
            r2.<init>()
            java.lang.String r3 = r1.url
            r2.imageUrl = r3
            java.lang.Integer r3 = r1.h
            int r3 = r3.intValue()
            r2.height = r3
            java.lang.Integer r3 = r1.w
            int r3 = r3.intValue()
            r2.width = r3
            double r3 = r7.adPercent
            r5 = 0
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 >= 0) goto L76
            java.lang.Integer r3 = r1.w
            int r3 = r3.intValue()
            if (r3 <= 0) goto L76
            java.lang.Integer r3 = r1.h
            int r3 = r3.intValue()
            if (r3 <= 0) goto L76
            java.lang.Integer r3 = r1.w
            int r3 = r3.intValue()
            float r3 = (float) r3
            r4 = 1065353216(0x3f800000, float:1.0)
            float r3 = r3 * r4
            java.lang.Integer r1 = r1.h
            int r1 = r1.intValue()
            float r1 = (float) r1
            float r3 = r3 / r1
            double r3 = (double) r3
            r7.adPercent = r3
        L76:
            java.util.List r1 = r7.imageUrlList
            r1.add(r2)
            goto L20
        L7c:
            java.util.List r0 = r7.imageUrlList
            return r0
    }

    public int getInteractionType() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r1.getMaterial()
            if (r0 == 0) goto Ld
            java.lang.Integer r0 = r0.interaction_type
            int r0 = r0.intValue()
            return r0
        Ld:
            r0 = 1
            return r0
    }

    public boolean getInvisibleAdLabel() {
            r2 = this;
            int r0 = r2.getAd_type()
            r1 = 2
            if (r0 != r1) goto L14
            com.sigmob.sdk.base.models.rtb.SplashAdSetting r0 = r2.getSplashAdSetting()
            if (r0 == 0) goto L2b
            java.lang.Boolean r0 = r0.invisible_ad_label
        Lf:
            boolean r0 = r0.booleanValue()
            return r0
        L14:
            int r0 = r2.getAd_type()
            r1 = 1
            if (r0 == r1) goto L22
            int r0 = r2.getAd_type()
            r1 = 4
            if (r0 != r1) goto L2b
        L22:
            com.sigmob.sdk.base.models.rtb.RvAdSetting r0 = r2.getRvAdSetting()
            if (r0 == 0) goto L2b
            java.lang.Boolean r0 = r0.invisible_ad_label
            goto Lf
        L2b:
            r0 = 0
            return r0
    }

    public java.lang.String getLandUrl() {
            r1 = this;
            java.lang.String r0 = r1.landUrl
            return r0
    }

    public java.lang.String getLanding_page() {
            r2 = this;
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r2.getMaterial()
            if (r0 == 0) goto Ld
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r2.getMaterial()
            java.lang.String r0 = r0.landing_page
            goto Le
        Ld:
            r0 = 0
        Le:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L1e
            java.lang.String r1 = r2.mCustomLandPageUrl
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L1e
            java.lang.String r0 = r2.mCustomLandPageUrl
        L1e:
            return r0
    }

    public java.lang.String getLoad_id() {
            r1 = this;
            java.lang.String r0 = r1.load_id
            return r0
    }

    public com.sigmob.sdk.base.models.SigMacroCommon getMacroCommon() {
            r3 = this;
            com.sigmob.sdk.base.models.SigMacroCommon r0 = r3.macroCommon
            if (r0 != 0) goto L2d
            com.sigmob.sdk.base.models.SigMacroCommon r0 = new com.sigmob.sdk.base.models.SigMacroCommon
            r0.<init>()
            r3.macroCommon = r0
            java.lang.String r0 = r3.getVideo_url()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L2d
            java.lang.String r1 = "UTF-8"
            java.lang.String r0 = java.net.URLEncoder.encode(r0, r1)     // Catch: java.io.UnsupportedEncodingException -> L29
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.io.UnsupportedEncodingException -> L29
            if (r1 != 0) goto L2d
            com.sigmob.sdk.base.models.SigMacroCommon r1 = r3.macroCommon     // Catch: java.io.UnsupportedEncodingException -> L29
            java.lang.String r2 = "_VURL_"
            r1.addMarcoKey(r2, r0)     // Catch: java.io.UnsupportedEncodingException -> L29
            goto L2d
        L29:
            r0 = move-exception
            r0.printStackTrace()
        L2d:
            com.sigmob.sdk.base.models.SigMacroCommon r0 = r3.macroCommon
            return r0
    }

    public com.sigmob.sdk.base.models.rtb.MaterialMeta getMaterial() {
            r2 = this;
            com.sigmob.sdk.base.models.rtb.Ad r0 = r2.ad
            if (r0 == 0) goto L1e
            java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r0 = r0.materials
            if (r0 == 0) goto L1e
            com.sigmob.sdk.base.models.rtb.Ad r0 = r2.ad
            java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r0 = r0.materials
            int r0 = r0.size()
            if (r0 <= 0) goto L1e
            com.sigmob.sdk.base.models.rtb.Ad r0 = r2.ad
            java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r0 = r0.materials
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = (com.sigmob.sdk.base.models.rtb.MaterialMeta) r0
            return r0
        L1e:
            r0 = 0
            return r0
    }

    public com.sigmob.sdk.base.models.rtb.ResponseNativeAd getNativeAd() {
            r2 = this;
            com.sigmob.sdk.base.models.rtb.Ad r0 = r2.ad
            if (r0 == 0) goto L20
            java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r0 = r0.materials
            if (r0 == 0) goto L20
            com.sigmob.sdk.base.models.rtb.Ad r0 = r2.ad
            java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r0 = r0.materials
            int r0 = r0.size()
            if (r0 <= 0) goto L20
            com.sigmob.sdk.base.models.rtb.Ad r0 = r2.ad
            java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r0 = r0.materials
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = (com.sigmob.sdk.base.models.rtb.MaterialMeta) r0
            com.sigmob.sdk.base.models.rtb.ResponseNativeAd r0 = r0.native_ad
            goto L21
        L20:
            r0 = 0
        L21:
            return r0
    }

    public com.sigmob.sdk.base.models.rtb.NativeAdSetting getNativeAdSetting() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.SlotAdSetting r0 = r1.slotAdSetting
            if (r0 == 0) goto L7
            com.sigmob.sdk.base.models.rtb.NativeAdSetting r0 = r0.native_setting
            return r0
        L7:
            r0 = 0
            return r0
    }

    public com.sigmob.sdk.base.models.SigVideo getNativeVideo() {
            r7 = this;
            com.sigmob.sdk.base.models.rtb.ResponseNativeAd r0 = r7.getNativeAd()
            com.sigmob.sdk.base.models.SigVideo r1 = r7.nativeVideo
            if (r1 != 0) goto L91
            if (r0 == 0) goto L91
            java.lang.Integer r1 = r0.type
            int r1 = r1.intValue()
            r2 = 1
            if (r1 != r2) goto L91
            java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r0 = r0.assets
            java.util.Iterator r0 = r0.iterator()
        L19:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L91
            java.lang.Object r1 = r0.next()
            com.sigmob.sdk.base.models.rtb.ResponseAsset r1 = (com.sigmob.sdk.base.models.rtb.ResponseAsset) r1
            com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r2 = r1.video
            if (r2 == 0) goto L7b
            com.sigmob.sdk.base.models.SigVideo r3 = r7.nativeVideo
            if (r3 != 0) goto L34
            com.sigmob.sdk.base.models.SigVideo r3 = new com.sigmob.sdk.base.models.SigVideo
            r3.<init>()
            r7.nativeVideo = r3
        L34:
            com.sigmob.sdk.base.models.SigVideo r3 = r7.nativeVideo
            java.lang.String r4 = r2.url
            r3.url = r4
            com.sigmob.sdk.base.models.SigVideo r3 = r7.nativeVideo
            java.lang.Integer r4 = r2.h
            int r4 = r4.intValue()
            r3.height = r4
            com.sigmob.sdk.base.models.SigVideo r3 = r7.nativeVideo
            java.lang.Integer r4 = r2.w
            int r4 = r4.intValue()
            r3.width = r4
            double r3 = r7.adPercent
            r5 = 0
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 >= 0) goto L7b
            java.lang.Integer r3 = r2.h
            int r3 = r3.intValue()
            if (r3 <= 0) goto L7b
            java.lang.Integer r3 = r2.w
            int r3 = r3.intValue()
            if (r3 <= 0) goto L7b
            java.lang.Integer r3 = r2.w
            int r3 = r3.intValue()
            float r3 = (float) r3
            r4 = 1065353216(0x3f800000, float:1.0)
            float r3 = r3 * r4
            java.lang.Integer r2 = r2.h
            int r2 = r2.intValue()
            float r2 = (float) r2
            float r3 = r3 / r2
            double r2 = (double) r3
            r7.adPercent = r2
        L7b:
            com.sigmob.sdk.base.models.rtb.ResponseAssetImage r1 = r1.image
            if (r1 == 0) goto L19
            com.sigmob.sdk.base.models.SigVideo r2 = r7.nativeVideo
            if (r2 != 0) goto L8a
            com.sigmob.sdk.base.models.SigVideo r2 = new com.sigmob.sdk.base.models.SigVideo
            r2.<init>()
            r7.nativeVideo = r2
        L8a:
            com.sigmob.sdk.base.models.SigVideo r2 = r7.nativeVideo
            java.lang.String r1 = r1.url
            r2.thumbUrl = r1
            goto L19
        L91:
            com.sigmob.sdk.base.models.SigVideo r0 = r7.nativeVideo
            return r0
    }

    public int getPlayMode() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r1.getMaterial()
            if (r0 == 0) goto L11
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r1.getMaterial()
            java.lang.Integer r0 = r0.play_mode
            int r0 = r0.intValue()
            return r0
        L11:
            r0 = 0
            return r0
    }

    public java.lang.String getProductId() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.Ad r0 = r1.getAd()
            if (r0 == 0) goto Ld
            com.sigmob.sdk.base.models.rtb.Ad r0 = r1.getAd()
            java.lang.String r0 = r0.product_id
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public java.lang.String getProxyVideoUrl() {
            r2 = this;
            java.lang.String r0 = r2.getVideo_url()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L12
            com.sigmob.sdk.videocache.h r1 = com.sigmob.sdk.base.common.f.c()
            java.lang.String r0 = r1.a(r0)
        L12:
            return r0
    }

    public java.lang.String getRequestId() {
            r1 = this;
            java.lang.String r0 = r1.request_id
            return r0
    }

    public com.sigmob.sdk.base.models.rtb.RvAdSetting getRvAdSetting() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.SlotAdSetting r0 = r1.slotAdSetting
            if (r0 == 0) goto L7
            com.sigmob.sdk.base.models.rtb.RvAdSetting r0 = r0.rv_setting
            return r0
        L7:
            r0 = 0
            return r0
    }

    public com.sigmob.sdk.base.models.rtb.Template getScene() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.Template r0 = r1.scene
            return r0
    }

    public com.sigmob.sdk.base.common.ab getSessionManager() {
            r1 = this;
            com.sigmob.sdk.base.common.ab r0 = r1.mSessionManager
            return r0
    }

    public com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting getSingleNativeSetting() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.AdSetting r0 = r1.getAdSetting()
            if (r0 == 0) goto L9
            com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting r0 = r0.single_native_setting
            return r0
        L9:
            r0 = 0
            return r0
    }

    public int getSkipSeconds() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.RvAdSetting r0 = r1.getRvAdSetting()
            if (r0 == 0) goto Ld
            java.lang.Integer r0 = r0.skip_seconds
            int r0 = r0.intValue()
            return r0
        Ld:
            r0 = -1
            return r0
    }

    public com.sigmob.sdk.base.models.rtb.SlotAdSetting getSlotAdSetting() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.SlotAdSetting r0 = r1.slotAdSetting
            return r0
    }

    public com.sigmob.sdk.base.models.rtb.SplashAdSetting getSplashAdSetting() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.SlotAdSetting r0 = r1.getSlotAdSetting()
            if (r0 == 0) goto L9
            com.sigmob.sdk.base.models.rtb.SplashAdSetting r0 = r0.splash_setting
            return r0
        L9:
            r0 = 0
            return r0
    }

    public java.lang.String getSplashFilePath() {
            r2 = this;
            com.sigmob.sdk.base.common.l r0 = com.sigmob.sdk.base.common.l.g
            int r0 = r0.a()
            com.sigmob.sdk.base.models.rtb.MaterialMeta r1 = r2.getMaterial()
            java.lang.Integer r1 = r1.creative_type
            int r1 = r1.intValue()
            if (r0 != r1) goto L35
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.sigmob.sdk.base.utils.b.d()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            com.sigmob.sdk.base.models.rtb.MaterialMeta r1 = r2.getMaterial()
            java.lang.String r1 = r1.video_url
        L29:
            java.lang.String r1 = com.czhj.sdk.common.utils.Md5Util.md5(r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
        L35:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.sigmob.sdk.base.utils.b.d()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            com.sigmob.sdk.base.models.rtb.MaterialMeta r1 = r2.getMaterial()
            java.lang.String r1 = r1.image_src
            goto L29
    }

    public java.lang.String getSplashURL() {
            r2 = this;
            com.sigmob.sdk.base.common.l r0 = com.sigmob.sdk.base.common.l.g
            int r0 = r0.a()
            com.sigmob.sdk.base.models.rtb.MaterialMeta r1 = r2.getMaterial()
            java.lang.Integer r1 = r1.creative_type
            int r1 = r1.intValue()
            if (r0 != r1) goto L19
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r2.getMaterial()
            java.lang.String r0 = r0.video_url
            return r0
        L19:
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r2.getMaterial()
            java.lang.String r0 = r0.image_src
            return r0
    }

    public java.lang.String getTitle() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r1.getMaterial()
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.title
            return r0
        L9:
            r0 = 0
            return r0
    }

    public int getTrackingRetryNum() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.SlotAdSetting r0 = r1.slotAdSetting
            if (r0 == 0) goto Lb
            java.lang.Integer r0 = r0.retry_count
            int r0 = r0.intValue()
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public java.lang.String getUuid() {
            r1 = this;
            java.lang.String r0 = r1.uuid
            if (r0 != 0) goto Le
            java.util.UUID r0 = java.util.UUID.randomUUID()
            java.lang.String r0 = r0.toString()
            r1.uuid = r0
        Le:
            java.lang.String r0 = r1.uuid
            return r0
    }

    public java.lang.String getVid() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.Ad r0 = r1.getAd()
            if (r0 == 0) goto Ld
            com.sigmob.sdk.base.models.rtb.Ad r0 = r1.getAd()
            java.lang.String r0 = r0.vid
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public com.sigmob.sdk.base.models.VideoStatusCommon getVideoCommon() {
            r1 = this;
            com.sigmob.sdk.base.models.VideoStatusCommon r0 = r1.videoCommon
            if (r0 != 0) goto Lb
            com.sigmob.sdk.base.models.VideoStatusCommon r0 = new com.sigmob.sdk.base.models.VideoStatusCommon
            r0.<init>()
            r1.videoCommon = r0
        Lb:
            com.sigmob.sdk.base.models.VideoStatusCommon r0 = r1.videoCommon
            return r0
    }

    public java.lang.String getVideoPath() {
            r1 = this;
            java.io.File r0 = r1.getVideoProxyFile()
            if (r0 == 0) goto Lb
            java.lang.String r0 = r0.getAbsolutePath()
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public java.io.File getVideoProxyFile() {
            r2 = this;
            java.lang.String r0 = r2.getVideo_url()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L13
            com.sigmob.sdk.videocache.h r1 = com.sigmob.sdk.base.common.f.c()
            java.io.File r0 = r1.c(r0)
            return r0
        L13:
            r0 = 0
            return r0
    }

    public java.lang.String getVideoThumbUrl() {
            r1 = this;
            com.sigmob.sdk.base.models.SigVideo r0 = r1.nativeVideo
            if (r0 == 0) goto L7
            java.lang.String r0 = r0.thumbUrl
            return r0
        L7:
            r0 = 0
            return r0
    }

    public java.lang.String getVideoTmpPath() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.sigmob.sdk.base.utils.b.a()
            r0.append(r1)
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r2 = r4.getVideo_md5()
            r3 = 0
            r1[r3] = r2
            java.lang.String r2 = "/%s.mp4.tmp"
            java.lang.String r1 = java.lang.String.format(r2, r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public java.lang.String getVideo_OriginMD5() {
            r1 = this;
            java.lang.String r0 = r1.video_md5
            return r0
    }

    public java.lang.String getVideo_md5() {
            r1 = this;
            java.lang.String r0 = r1.video_md5
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = r1.video_md5
            return r0
        Lb:
            java.lang.String r0 = r1.getVideo_url()
            java.lang.String r0 = com.czhj.sdk.common.utils.Md5Util.md5(r0)
            return r0
    }

    public java.lang.String getVideo_url() {
            r2 = this;
            com.sigmob.sdk.base.models.rtb.Ad r0 = r2.ad
            if (r0 == 0) goto L28
            java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r0 = r0.materials
            int r0 = r0.size()
            if (r0 <= 0) goto L28
            int r0 = r2.ad_type
            r1 = 5
            if (r0 != r1) goto L1a
            com.sigmob.sdk.base.models.SigVideo r0 = r2.getNativeVideo()
            if (r0 == 0) goto L28
            java.lang.String r0 = r0.url
            return r0
        L1a:
            com.sigmob.sdk.base.models.rtb.Ad r0 = r2.ad
            java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r0 = r0.materials
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = (com.sigmob.sdk.base.models.rtb.MaterialMeta) r0
            java.lang.String r0 = r0.video_url
            return r0
        L28:
            r0 = 0
            return r0
    }

    public com.sigmob.sdk.base.models.rtb.WXProgramRes getWXProgramRes() {
            r2 = this;
            com.sigmob.sdk.base.models.rtb.Ad r0 = r2.getAd()
            if (r0 == 0) goto Ld
            com.sigmob.sdk.base.models.rtb.WXProgramRes r1 = r0.wx_program_res
            if (r1 == 0) goto Ld
            com.sigmob.sdk.base.models.rtb.WXProgramRes r0 = r0.wx_program_res
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public com.sigmob.sdk.base.models.rtb.AdPrivacy getadPrivacy() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r1.getMaterial()
            if (r0 == 0) goto L9
            com.sigmob.sdk.base.models.rtb.AdPrivacy r0 = r0.ad_privacy
            return r0
        L9:
            r0 = 0
            return r0
    }

    public java.lang.String getadslot_id() {
            r1 = this;
            java.lang.String r0 = r1.adslot_id
            return r0
    }

    public boolean isCatchVideo() {
            r1 = this;
            boolean r0 = r1.catchVideo
            return r0
    }

    public boolean isClickAutoCloseSplash() {
            r1 = this;
            r0 = 0
            return r0
    }

    public boolean isDisablexRequestWith() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.SlotAdSetting r0 = r1.slotAdSetting
            if (r0 == 0) goto Lb
            java.lang.Boolean r0 = r0.disable_x_requested_with
            boolean r0 = r0.booleanValue()
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public boolean isDownloadDialog() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r1.getMaterial()
            if (r0 == 0) goto Ld
            java.lang.Boolean r0 = r0.download_dialog
            boolean r0 = r0.booleanValue()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public boolean isEndCardIndexExist() {
            r2 = this;
            java.lang.String r0 = r2.getEndcard_url()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L30
            int r0 = r2.getCreativeType()
            com.sigmob.sdk.base.common.l r1 = com.sigmob.sdk.base.common.l.a
            int r1 = r1.a()
            if (r0 == r1) goto L22
            int r0 = r2.getCreativeType()
            com.sigmob.sdk.base.common.l r1 = com.sigmob.sdk.base.common.l.d
            int r1 = r1.a()
            if (r0 != r1) goto L30
        L22:
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r2.getEndCardIndexPath()
            r0.<init>(r1)
            boolean r0 = r0.exists()
            return r0
        L30:
            r0 = 1
            return r0
    }

    public boolean isHalfInterstitial() {
            r1 = this;
            boolean r0 = r1.isHalfInterstitial
            return r0
    }

    public boolean isNativeAdH5() {
            r1 = this;
            r0 = 1
            return r0
    }

    public boolean isRecord() {
            r1 = this;
            boolean r0 = r1.record
            return r0
    }

    public boolean isSkipSigmobBrowser() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.Ad r0 = r1.getAd()
            if (r0 == 0) goto L1e
            com.sigmob.sdk.base.models.rtb.Ad r0 = r1.getAd()
            com.sigmob.sdk.base.models.rtb.AdSetting r0 = r0.ad_setting
            if (r0 == 0) goto L1e
            com.sigmob.sdk.base.models.rtb.Ad r0 = r1.getAd()
            com.sigmob.sdk.base.models.rtb.AdSetting r0 = r0.ad_setting
            java.lang.Boolean r0 = r0.in_app
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L1e
            r0 = 0
            return r0
        L1e:
            r0 = 1
            return r0
    }

    public boolean isUse_floating_btn() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.SplashAdSetting r0 = r1.getSplashAdSetting()
            if (r0 == 0) goto Ld
            java.lang.Boolean r0 = r0.use_floating_btn
            boolean r0 = r0.booleanValue()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public boolean isVideoExist() {
            r4 = this;
            java.lang.String r0 = r4.getVideo_url()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lc
            r0 = 1
            return r0
        Lc:
            java.lang.String r0 = r4.getVideoPath()
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            boolean r1 = r1.exists()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "isVideoExist path :"
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = " isExist: "
            r2.append(r0)
            r2.append(r1)
            java.lang.String r0 = r2.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            return r1
    }

    public java.lang.String resourcePath() {
            r2 = this;
            java.lang.String r0 = r2.getEndcard_url()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L27
            int r0 = r2.getCreativeType()
            com.sigmob.sdk.base.common.l r1 = com.sigmob.sdk.base.common.l.a
            int r1 = r1.a()
            if (r0 == r1) goto L22
            int r0 = r2.getCreativeType()
            com.sigmob.sdk.base.common.l r1 = com.sigmob.sdk.base.common.l.d
            int r1 = r1.a()
            if (r0 != r1) goto L27
        L22:
            java.lang.String r0 = r2.getEndCardIndexPath()
            return r0
        L27:
            java.lang.String r0 = r2.getHtmlData()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L36
            java.lang.String r0 = r2.getHtmlData()
            return r0
        L36:
            java.lang.String r0 = r2.getHtmlUrl()
            return r0
    }

    public void setAd(com.sigmob.sdk.base.models.rtb.Ad r1) {
            r0 = this;
            r0.ad = r1
            return
    }

    public void setAdSize(int r3, int r4) {
            r2 = this;
            r2.adWidth = r3
            r2.adWidth = r4
            com.sigmob.sdk.base.models.SigMacroCommon r0 = r2.getMacroCommon()
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r1 = "_WIDTH_"
            r0.addMarcoKey(r1, r3)
            com.sigmob.sdk.base.models.SigMacroCommon r3 = r2.getMacroCommon()
            java.lang.String r4 = java.lang.String.valueOf(r4)
            java.lang.String r0 = "_HEIGHT_"
            r3.addMarcoKey(r0, r4)
            return
    }

    public void setAd_scene_desc(java.lang.String r1) {
            r0 = this;
            r0.ad_scene_desc = r1
            return
    }

    public void setAd_scene_id(java.lang.String r1) {
            r0 = this;
            r0.ad_scene_id = r1
            return
    }

    public void setAd_source_channel(java.lang.String r1) {
            r0 = this;
            r0.ad_source_channel = r1
            return
    }

    public void setAd_type(int r1) {
            r0 = this;
            r0.ad_type = r1
            return
    }

    public void setAdslot_id(java.lang.String r1) {
            r0 = this;
            r0.adslot_id = r1
            return
    }

    public void setBid_token(java.lang.String r1) {
            r0 = this;
            r0.bid_token = r1
            return
    }

    public void setCamp_id(java.lang.String r1) {
            r0 = this;
            r0.camp_id = r1
            return
    }

    public void setCatchVideo(boolean r1) {
            r0 = this;
            r0.catchVideo = r1
            return
    }

    public void setCreate_time(long r1) {
            r0 = this;
            r0.create_time = r1
            return
    }

    public void setCrid(java.lang.String r1) {
            r0 = this;
            r0.crid = r1
            return
    }

    public void setCustomAndroidMarket(com.sigmob.sdk.base.models.rtb.AndroidMarket r1) {
            r0 = this;
            r0.mCustomAndroidMarket = r1
            return
    }

    public void setCustomDeeplink(java.lang.String r1) {
            r0 = this;
            r0.mCustomDeeplink = r1
            return
    }

    public void setCustomLandPageUrl(java.lang.String r1) {
            r0 = this;
            r0.mCustomLandPageUrl = r1
            return
    }

    public void setDownloadId(long r1) {
            r0 = this;
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r0.downloadId = r1
            return
    }

    public void setEndcard_md5(java.lang.String r1) {
            r0 = this;
            r0.endcard_md5 = r1
            return
    }

    public void setHalfInterstitial(boolean r1) {
            r0 = this;
            r0.isHalfInterstitial = r1
            return
    }

    public void setLoad_id(java.lang.String r1) {
            r0 = this;
            r0.load_id = r1
            return
    }

    public void setMacroCommon(com.sigmob.sdk.base.models.SigMacroCommon r1) {
            r0 = this;
            r0.macroCommon = r1
            return
    }

    public void setRecord(boolean r1) {
            r0 = this;
            r0.record = r1
            return
    }

    public void setRequest_id(java.lang.String r1) {
            r0 = this;
            r0.request_id = r1
            return
    }

    public void setSessionManager(com.sigmob.sdk.base.common.ab r1) {
            r0 = this;
            r0.mSessionManager = r1
            return
    }

    public void setUrl(java.lang.String r1) {
            r0 = this;
            r0.landUrl = r1
            return
    }

    public void setVideo_md5(java.lang.String r1) {
            r0 = this;
            r0.video_md5 = r1
            return
    }

    public void setadslot_id(java.lang.String r1) {
            r0 = this;
            r0.adslot_id = r1
            return
    }

    public void updateRealAdPercent(double r1) {
            r0 = this;
            r0.realAdPercent = r1
            return
    }
}
