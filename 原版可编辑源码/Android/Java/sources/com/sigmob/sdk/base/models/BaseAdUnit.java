package com.sigmob.sdk.base.models;

import android.text.TextUtils;
import com.czhj.sdk.common.utils.Md5Util;
import com.czhj.sdk.common.utils.Preconditions;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.common.ab;
import com.sigmob.sdk.base.common.f;
import com.sigmob.sdk.base.common.g;
import com.sigmob.sdk.base.common.h;
import com.sigmob.sdk.base.common.l;
import com.sigmob.sdk.base.models.rtb.Ad;
import com.sigmob.sdk.base.models.rtb.AdPrivacy;
import com.sigmob.sdk.base.models.rtb.AdSetting;
import com.sigmob.sdk.base.models.rtb.AndroidMarket;
import com.sigmob.sdk.base.models.rtb.BiddingResponse;
import com.sigmob.sdk.base.models.rtb.ClickAreaSetting;
import com.sigmob.sdk.base.models.rtb.MaterialMeta;
import com.sigmob.sdk.base.models.rtb.NativeAdSetting;
import com.sigmob.sdk.base.models.rtb.ResponseAsset;
import com.sigmob.sdk.base.models.rtb.ResponseAssetImage;
import com.sigmob.sdk.base.models.rtb.ResponseAssetVideo;
import com.sigmob.sdk.base.models.rtb.ResponseNativeAd;
import com.sigmob.sdk.base.models.rtb.RvAdSetting;
import com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting;
import com.sigmob.sdk.base.models.rtb.SlotAdSetting;
import com.sigmob.sdk.base.models.rtb.SplashAdSetting;
import com.sigmob.sdk.base.models.rtb.Template;
import com.sigmob.sdk.base.models.rtb.Tracking;
import com.sigmob.sdk.base.models.rtb.WXProgramRes;
import com.sigmob.sdk.base.views.k;
import com.sigmob.sdk.nativead.b;
import com.sigmob.sdk.splash.c;
import com.sigmob.sdk.videoAd.a;
import java.io.File;
import java.io.Serializable;
import java.io.UnsupportedEncodingException;
import java.net.URLEncoder;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.UUID;

public class BaseAdUnit implements Serializable {
    private static final String TAG = "BaseAdUnit";
    private static final long serialVersionUID = 1;
    private Ad ad;
    private transient h adConfig;
    private int adHeight;
    private LoadAdRequest adRequest;
    private HashMap<String, List<g>> adTrackersMap;
    private int adWidth;
    private String ad_scene_desc;
    private String ad_scene_id;
    private String ad_source_channel;
    private int ad_type;
    private String adslot_id;
    private String bid_token;
    public BiddingResponse bidding_response;
    private String camp_id;
    private ClickCommon clickCommon;
    private long create_time;
    private String crid;
    private Long downloadId;
    private String endcard_md5;
    public int expiration_time;
    private List imageUrlList;
    private boolean isHalfInterstitial;
    private String landUrl;
    private String load_id;
    private AndroidMarket mCustomAndroidMarket;
    private String mCustomDeeplink;
    private String mCustomLandPageUrl;
    private transient ab mSessionManager;
    private SigMacroCommon macroCommon;
    private String nativeDesc;
    private String nativeIconUrl;
    private String nativeTtitle;
    private SigVideo nativeVideo;
    private String request_id;
    public Template scene;
    public SlotAdSetting slotAdSetting;
    public String uid;
    private String uuid;
    private VideoStatusCommon videoCommon;
    private String video_md5;
    private double adPercent = -1.0d;
    private double realAdPercent = -1.0d;
    private boolean record = true;
    private boolean catchVideo = false;

    public static BaseAdUnit adUnit(Ad ad, String str, LoadAdRequest loadAdRequest, SlotAdSetting slotAdSetting, Template template, String str2, Integer num, BiddingResponse biddingResponse) {
        ResponseNativeAd nativeAd;
        BaseAdUnit baseAdUnit = null;
        try {
            MaterialMeta materialMeta = ad.materials.get(0);
            if (materialMeta == null) {
                return null;
            }
            BaseAdUnit baseAdUnit2 = new BaseAdUnit();
            try {
                baseAdUnit2.create_time = System.currentTimeMillis();
                baseAdUnit2.adslot_id = ad.adslot_id;
                baseAdUnit2.ad_type = ad.ad_type.intValue();
                baseAdUnit2.ad = ad;
                baseAdUnit2.crid = ad.crid;
                baseAdUnit2.camp_id = ad.camp_id;
                baseAdUnit2.request_id = str;
                baseAdUnit2.endcard_md5 = materialMeta.endcard_md5;
                baseAdUnit2.video_md5 = materialMeta.video_md5;
                baseAdUnit2.load_id = loadAdRequest.getLoadId();
                baseAdUnit2.ad_source_channel = ad.ad_source_channel;
                if ((materialMeta.creative_type.intValue() == l.c.a() || materialMeta.creative_type.intValue() == l.e.a()) && materialMeta.html_snippet != null) {
                    materialMeta.html_snippet.size();
                }
                baseAdUnit2.slotAdSetting = slotAdSetting;
                baseAdUnit2.adRequest = loadAdRequest;
                baseAdUnit2.scene = template;
                baseAdUnit2.uid = str2;
                baseAdUnit2.expiration_time = num.intValue();
                baseAdUnit2.bidding_response = biddingResponse;
                initAdTrackerMap(baseAdUnit2);
                if (ad.ad_track_macro != null) {
                    baseAdUnit2.getMacroCommon().setServerMacroMap(ad.ad_track_macro);
                }
                if (baseAdUnit2.ad_type == 5 && (nativeAd = baseAdUnit2.getNativeAd()) == null) {
                    if (nativeAd.type.intValue() == 1) {
                        baseAdUnit2.getNativeVideo();
                    } else {
                        baseAdUnit2.getImageUrlList();
                    }
                }
                return baseAdUnit2;
            } catch (Throwable th) {
                th = th;
                baseAdUnit = baseAdUnit2;
            }
        } catch (Throwable th2) {
            th = th2;
        }
        SigmobLog.e("adUnit error", th);
        return baseAdUnit;
    }

    private static boolean checkFileMD5(String str, String str2) {
        String strFileMd5 = Md5Util.fileMd5(str);
        SigmobLog.d("path: [ " + str + " ] calc [ " + strFileMd5 + " ] origin " + str2);
        return strFileMd5 != null && strFileMd5.equalsIgnoreCase(str2);
    }

    public static List<g> createTrackersForUrls(List<String> list, String str, String str2, Integer num) {
        Preconditions.NoThrow.checkNotNull(list);
        ArrayList arrayList = new ArrayList();
        Iterator<String> it = list.iterator();
        while (it.hasNext()) {
            g gVar = new g(it.next(), str, str2);
            gVar.a(num);
            arrayList.add(gVar);
        }
        return arrayList;
    }

    public static long getSerialVersionUID() {
        return 1L;
    }

    public static String getTAG() {
        return TAG;
    }

    private static void initAdTrackerMap(BaseAdUnit baseAdUnit) {
        List<Tracking> ad_tracking = baseAdUnit.getAd_tracking();
        baseAdUnit.adTrackersMap = new HashMap<>();
        for (Tracking tracking : ad_tracking) {
            baseAdUnit.adTrackersMap.put(tracking.tracking_event_type, createTrackersForUrls(tracking.tracking_url, tracking.tracking_event_type, baseAdUnit.request_id, Integer.valueOf(baseAdUnit.getTrackingRetryNum())));
        }
    }

    public boolean checkEndCardZipValid() {
        if (TextUtils.isEmpty(getEndcard_url()) || TextUtils.isEmpty(this.endcard_md5)) {
            return true;
        }
        return checkFileMD5(getEndCardZipPath(), getEndcard_md5());
    }

    public boolean checkVideoValid() {
        if (TextUtils.isEmpty(getVideo_url()) || TextUtils.isEmpty(this.video_md5)) {
            return true;
        }
        return checkFileMD5(getVideoPath(), getVideo_OriginMD5());
    }

    public boolean enable_full_click() {
        SplashAdSetting splashAdSetting = getSplashAdSetting();
        if (splashAdSetting != null) {
            return splashAdSetting.enable_full_click.booleanValue();
        }
        return false;
    }

    public Ad getAd() {
        return this.ad;
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x0021  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public h getAdConfig() {
        h hVarF;
        if (this.adConfig == null) {
            int ad_type = getAd_type();
            if (ad_type == 1) {
                hVarF = a.f(this);
            } else if (ad_type == 2) {
                hVarF = c.f(this);
            } else if (ad_type != 4) {
                if (ad_type == 5) {
                    hVarF = b.f(this);
                }
            }
            this.adConfig = hVarF;
            return hVarF;
        }
        return this.adConfig;
    }

    public Integer getAdExpiredTime() {
        Ad ad = this.ad;
        return Integer.valueOf((ad == null || ad.expired_time == null) ? 0 : this.ad.expired_time.intValue() * 1000);
    }

    public String getAdLogo() {
        return getAd_source_logo();
    }

    public double getAdPercent() {
        double d = this.adPercent;
        if (d > 0.0d) {
            return d;
        }
        double d2 = this.realAdPercent;
        if (d2 > 0.0d) {
            return d2;
        }
        return 1.7777777910232544d;
    }

    public File getAdPrivacyTemplateFile() {
        AdPrivacy adPrivacy = getadPrivacy();
        if (adPrivacy == null) {
            return null;
        }
        String str = adPrivacy.privacy_template_url;
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        String strMd5 = Md5Util.md5(str);
        return new File(com.sigmob.sdk.base.utils.b.b(com.sigmob.sdk.base.utils.b.b), strMd5 + ".html");
    }

    public LoadAdRequest getAdRequest() {
        return this.adRequest;
    }

    public AdSetting getAdSetting() {
        Ad ad = this.ad;
        if (ad != null) {
            return ad.ad_setting;
        }
        return null;
    }

    public List<g> getAdTracker(com.sigmob.sdk.base.common.a aVar) {
        HashMap<String, List<g>> map = this.adTrackersMap;
        if (map != null) {
            return map.get(aVar.a());
        }
        return null;
    }

    public List<g> getAdTracker(String str) {
        HashMap<String, List<g>> map = this.adTrackersMap;
        if (map != null) {
            return map.get(str);
        }
        return null;
    }

    public String getAd_scene_desc() {
        return this.ad_scene_desc;
    }

    public String getAd_scene_id() {
        return this.ad_scene_id;
    }

    public String getAd_source_channel() {
        return this.ad_source_channel;
    }

    public String getAd_source_logo() {
        Ad ad = this.ad;
        if (ad != null) {
            return ad.ad_source_logo;
        }
        return null;
    }

    public List<Tracking> getAd_tracking() {
        Ad ad = this.ad;
        if (ad != null) {
            return ad.ad_tracking;
        }
        return null;
    }

    public int getAd_type() {
        return this.ad_type;
    }

    public String getAdslot_id() {
        return this.adslot_id;
    }

    public AndroidMarket getAndroidMarket() {
        AndroidMarket androidMarket;
        MaterialMeta material = getMaterial();
        AndroidMarket androidMarket2 = material != null ? material.android_market : null;
        return (androidMarket2 != null || (androidMarket = this.mCustomAndroidMarket) == null) ? androidMarket2 : androidMarket;
    }

    public String getAppName() {
        AdPrivacy adPrivacy = getadPrivacy();
        if (adPrivacy == null || adPrivacy.privacy_template_info == null) {
            return null;
        }
        return adPrivacy.privacy_template_info.get("app_name");
    }

    public String getAppVersion() {
        AdPrivacy adPrivacy = getadPrivacy();
        if (adPrivacy == null || adPrivacy.privacy_template_info == null) {
            return null;
        }
        return adPrivacy.privacy_template_info.get("app_version");
    }

    public String getBid_token() {
        return this.bid_token;
    }

    public int getBubInteractionType() {
        MaterialMeta material = getMaterial();
        if (material != null) {
            return material.sub_interaction_type.intValue();
        }
        return 0;
    }

    public String getCTAText() {
        MaterialMeta material = getMaterial();
        String str = material != null ? material.button_text : null;
        return !TextUtils.isEmpty(str) ? str : getInteractionType() != 2 ? "查看详情" : "立即下载";
    }

    public String getCamp_id() {
        return this.camp_id;
    }

    public ClickAreaSetting getClickAreaSetting() {
        RvAdSetting rvAdSetting = getRvAdSetting();
        if (rvAdSetting.click_setting != null) {
            if (rvAdSetting != null) {
                return rvAdSetting.click_setting;
            }
            return null;
        }
        ClickAreaSetting.Builder builder = new ClickAreaSetting.Builder();
        builder.bottom = Float.valueOf(0.1f);
        builder.right = Float.valueOf(0.1f);
        builder.top = Float.valueOf(0.1f);
        builder.left = Float.valueOf(0.1f);
        return builder.build();
    }

    public ClickCommon getClickCommon() {
        if (this.clickCommon == null) {
            this.clickCommon = new ClickCommon();
        }
        return this.clickCommon;
    }

    public String getCloseCardHtmlData() {
        if (getMaterial() == null) {
            return null;
        }
        if (getMaterial().closecard_html_snippet != null || getMaterial().closecard_html_snippet.size() >= 10) {
            return getMaterial().closecard_html_snippet.utf8();
        }
        return null;
    }

    public String getCompanyName() {
        AdPrivacy adPrivacy = getadPrivacy();
        if (adPrivacy == null || adPrivacy.privacy_template_info == null) {
            return null;
        }
        return adPrivacy.privacy_template_info.get("app_company");
    }

    public long getCreate_time() {
        return this.create_time;
    }

    public k.b getCreativeResourceType() {
        return (TextUtils.isEmpty(getEndcard_url()) || !(getCreativeType() == l.a.a() || getCreativeType() == l.d.a())) ? !TextUtils.isEmpty(getHtmlData()) ? k.b.b : !TextUtils.isEmpty(getHtmlUrl()) ? k.b.e : k.b.d : k.b.d;
    }

    public int getCreativeType() {
        if (getMaterial() != null) {
            return getMaterial().creative_type.intValue();
        }
        return 0;
    }

    public String getCrid() {
        return this.crid;
    }

    public String getDeeplinkUrl() {
        MaterialMeta material = getMaterial();
        String str = material != null ? material.deeplink_url : null;
        return (!TextUtils.isEmpty(str) || TextUtils.isEmpty(this.mCustomDeeplink)) ? str : this.mCustomDeeplink;
    }

    public String getDesc() {
        MaterialMeta material = getMaterial();
        if (material != null) {
            return material.desc;
        }
        return null;
    }

    public boolean getDisableAutoLoad() {
        RvAdSetting rvAdSetting = getRvAdSetting();
        if (rvAdSetting != null) {
            return rvAdSetting.disable_auto_load.booleanValue();
        }
        return false;
    }

    public Long getDownloadId() {
        return this.downloadId;
    }

    public String getEndCardDirPath() {
        return com.sigmob.sdk.base.utils.b.b() + String.format("/%s/", getEndcard_md5());
    }

    public String getEndCardIndexPath() {
        return getEndCardDirPath() + "endcard.html";
    }

    public String getEndCardZipPath() {
        return com.sigmob.sdk.base.utils.b.b() + String.format("/%s.tgz", this.endcard_md5);
    }

    public String getEndCard_OriginMD5() {
        return this.endcard_md5;
    }

    public int getEndTime() {
        RvAdSetting rvAdSetting = getRvAdSetting();
        if (rvAdSetting != null) {
            return rvAdSetting.end_time.intValue();
        }
        return 0;
    }

    public int getEndcardCloseImage() {
        RvAdSetting rvAdSetting = getRvAdSetting();
        if (rvAdSetting != null) {
            return rvAdSetting.endcard_close_image.intValue();
        }
        return 0;
    }

    public String getEndcard_md5() {
        return !TextUtils.isEmpty(this.endcard_md5) ? this.endcard_md5 : Md5Util.md5(getCrid());
    }

    public String getEndcard_url() {
        MaterialMeta material = getMaterial();
        if (material != null) {
            return material.endcard_url;
        }
        return null;
    }

    public float getFinishedTime() {
        RvAdSetting rvAdSetting = getRvAdSetting();
        if (rvAdSetting != null) {
            return rvAdSetting.finished.floatValue();
        }
        return 1.0f;
    }

    public boolean getFullClickOnVideo() {
        RvAdSetting rvAdSetting = getRvAdSetting();
        if (rvAdSetting != null) {
            return rvAdSetting.full_click_on_video.booleanValue();
        }
        return false;
    }

    public String getHtmlData() {
        if (getMaterial() == null) {
            return null;
        }
        if (getMaterial().html_snippet != null || getMaterial().html_snippet.size() >= 10) {
            return getMaterial().html_snippet.utf8();
        }
        return null;
    }

    public String getHtmlUrl() {
        if (getMaterial() == null) {
            return null;
        }
        return getMaterial().html_url;
    }

    public String getIconUrl() {
        MaterialMeta material = getMaterial();
        if (material != null) {
            return material.icon_url;
        }
        return null;
    }

    public List<SigImage> getImageUrlList() {
        ResponseNativeAd nativeAd = getNativeAd();
        if (this.imageUrlList == null) {
            this.imageUrlList = new ArrayList();
            if (nativeAd != null && nativeAd.type.intValue() != 1) {
                Iterator<ResponseAsset> it = nativeAd.assets.iterator();
                while (it.hasNext()) {
                    ResponseAssetImage responseAssetImage = it.next().image;
                    if (responseAssetImage != null) {
                        SigImage sigImage = new SigImage();
                        sigImage.imageUrl = responseAssetImage.url;
                        sigImage.height = responseAssetImage.h.intValue();
                        sigImage.width = responseAssetImage.w.intValue();
                        if (this.adPercent < 0.0d && responseAssetImage.w.intValue() > 0 && responseAssetImage.h.intValue() > 0) {
                            this.adPercent = (responseAssetImage.w.intValue() * 1.0f) / responseAssetImage.h.intValue();
                        }
                        this.imageUrlList.add(sigImage);
                    }
                }
            }
        }
        return this.imageUrlList;
    }

    public int getInteractionType() {
        MaterialMeta material = getMaterial();
        if (material != null) {
            return material.interaction_type.intValue();
        }
        return 1;
    }

    public boolean getInvisibleAdLabel() {
        RvAdSetting rvAdSetting;
        Boolean bool;
        if (getAd_type() == 2) {
            SplashAdSetting splashAdSetting = getSplashAdSetting();
            if (splashAdSetting == null) {
                return false;
            }
            bool = splashAdSetting.invisible_ad_label;
        } else {
            if ((getAd_type() != 1 && getAd_type() != 4) || (rvAdSetting = getRvAdSetting()) == null) {
                return false;
            }
            bool = rvAdSetting.invisible_ad_label;
        }
        return bool.booleanValue();
    }

    public String getLandUrl() {
        return this.landUrl;
    }

    public String getLanding_page() {
        String str = getMaterial() != null ? getMaterial().landing_page : null;
        return (!TextUtils.isEmpty(str) || TextUtils.isEmpty(this.mCustomLandPageUrl)) ? str : this.mCustomLandPageUrl;
    }

    public String getLoad_id() {
        return this.load_id;
    }

    public SigMacroCommon getMacroCommon() {
        if (this.macroCommon == null) {
            this.macroCommon = new SigMacroCommon();
            String video_url = getVideo_url();
            if (!TextUtils.isEmpty(video_url)) {
                try {
                    String strEncode = URLEncoder.encode(video_url, "UTF-8");
                    if (!TextUtils.isEmpty(strEncode)) {
                        this.macroCommon.addMarcoKey(SigMacroCommon._VURL_, strEncode);
                    }
                } catch (UnsupportedEncodingException e) {
                    e.printStackTrace();
                }
            }
        }
        return this.macroCommon;
    }

    public MaterialMeta getMaterial() {
        Ad ad = this.ad;
        if (ad == null || ad.materials == null || this.ad.materials.size() <= 0) {
            return null;
        }
        return this.ad.materials.get(0);
    }

    public ResponseNativeAd getNativeAd() {
        Ad ad = this.ad;
        if (ad == null || ad.materials == null || this.ad.materials.size() <= 0) {
            return null;
        }
        return this.ad.materials.get(0).native_ad;
    }

    public NativeAdSetting getNativeAdSetting() {
        SlotAdSetting slotAdSetting = this.slotAdSetting;
        if (slotAdSetting != null) {
            return slotAdSetting.native_setting;
        }
        return null;
    }

    public SigVideo getNativeVideo() {
        ResponseNativeAd nativeAd = getNativeAd();
        if (this.nativeVideo == null && nativeAd != null && nativeAd.type.intValue() == 1) {
            for (ResponseAsset responseAsset : nativeAd.assets) {
                ResponseAssetVideo responseAssetVideo = responseAsset.video;
                if (responseAssetVideo != null) {
                    if (this.nativeVideo == null) {
                        this.nativeVideo = new SigVideo();
                    }
                    this.nativeVideo.url = responseAssetVideo.url;
                    this.nativeVideo.height = responseAssetVideo.h.intValue();
                    this.nativeVideo.width = responseAssetVideo.w.intValue();
                    if (this.adPercent < 0.0d && responseAssetVideo.h.intValue() > 0 && responseAssetVideo.w.intValue() > 0) {
                        this.adPercent = (responseAssetVideo.w.intValue() * 1.0f) / responseAssetVideo.h.intValue();
                    }
                }
                ResponseAssetImage responseAssetImage = responseAsset.image;
                if (responseAssetImage != null) {
                    if (this.nativeVideo == null) {
                        this.nativeVideo = new SigVideo();
                    }
                    this.nativeVideo.thumbUrl = responseAssetImage.url;
                }
            }
        }
        return this.nativeVideo;
    }

    public int getPlayMode() {
        if (getMaterial() != null) {
            return getMaterial().play_mode.intValue();
        }
        return 0;
    }

    public String getProductId() {
        if (getAd() != null) {
            return getAd().product_id;
        }
        return null;
    }

    public String getProxyVideoUrl() {
        String video_url = getVideo_url();
        return !TextUtils.isEmpty(video_url) ? f.c().a(video_url) : video_url;
    }

    public String getRequestId() {
        return this.request_id;
    }

    public RvAdSetting getRvAdSetting() {
        SlotAdSetting slotAdSetting = this.slotAdSetting;
        if (slotAdSetting != null) {
            return slotAdSetting.rv_setting;
        }
        return null;
    }

    public Template getScene() {
        return this.scene;
    }

    public ab getSessionManager() {
        return this.mSessionManager;
    }

    public SingleNativeAdSetting getSingleNativeSetting() {
        AdSetting adSetting = getAdSetting();
        if (adSetting != null) {
            return adSetting.single_native_setting;
        }
        return null;
    }

    public int getSkipSeconds() {
        RvAdSetting rvAdSetting = getRvAdSetting();
        if (rvAdSetting != null) {
            return rvAdSetting.skip_seconds.intValue();
        }
        return -1;
    }

    public SlotAdSetting getSlotAdSetting() {
        return this.slotAdSetting;
    }

    public SplashAdSetting getSplashAdSetting() {
        SlotAdSetting slotAdSetting = getSlotAdSetting();
        if (slotAdSetting != null) {
            return slotAdSetting.splash_setting;
        }
        return null;
    }

    public String getSplashFilePath() {
        StringBuilder sb;
        String str;
        if (l.g.a() == getMaterial().creative_type.intValue()) {
            sb = new StringBuilder();
            sb.append(com.sigmob.sdk.base.utils.b.d());
            sb.append(File.separator);
            str = getMaterial().video_url;
        } else {
            sb = new StringBuilder();
            sb.append(com.sigmob.sdk.base.utils.b.d());
            sb.append(File.separator);
            str = getMaterial().image_src;
        }
        sb.append(Md5Util.md5(str));
        return sb.toString();
    }

    public String getSplashURL() {
        return l.g.a() == getMaterial().creative_type.intValue() ? getMaterial().video_url : getMaterial().image_src;
    }

    public String getTitle() {
        MaterialMeta material = getMaterial();
        if (material != null) {
            return material.title;
        }
        return null;
    }

    public int getTrackingRetryNum() {
        SlotAdSetting slotAdSetting = this.slotAdSetting;
        if (slotAdSetting != null) {
            return slotAdSetting.retry_count.intValue();
        }
        return 0;
    }

    public String getUuid() {
        if (this.uuid == null) {
            this.uuid = UUID.randomUUID().toString();
        }
        return this.uuid;
    }

    public String getVid() {
        if (getAd() != null) {
            return getAd().vid;
        }
        return null;
    }

    public VideoStatusCommon getVideoCommon() {
        if (this.videoCommon == null) {
            this.videoCommon = new VideoStatusCommon();
        }
        return this.videoCommon;
    }

    public String getVideoPath() {
        File videoProxyFile = getVideoProxyFile();
        if (videoProxyFile != null) {
            return videoProxyFile.getAbsolutePath();
        }
        return null;
    }

    public File getVideoProxyFile() {
        String video_url = getVideo_url();
        if (TextUtils.isEmpty(video_url)) {
            return null;
        }
        return f.c().c(video_url);
    }

    public String getVideoThumbUrl() {
        SigVideo sigVideo = this.nativeVideo;
        if (sigVideo != null) {
            return sigVideo.thumbUrl;
        }
        return null;
    }

    public String getVideoTmpPath() {
        return com.sigmob.sdk.base.utils.b.a() + String.format("/%s.mp4.tmp", getVideo_md5());
    }

    public String getVideo_OriginMD5() {
        return this.video_md5;
    }

    public String getVideo_md5() {
        return !TextUtils.isEmpty(this.video_md5) ? this.video_md5 : Md5Util.md5(getVideo_url());
    }

    public String getVideo_url() {
        Ad ad = this.ad;
        if (ad == null || ad.materials.size() <= 0) {
            return null;
        }
        if (this.ad_type != 5) {
            return this.ad.materials.get(0).video_url;
        }
        SigVideo nativeVideo = getNativeVideo();
        if (nativeVideo != null) {
            return nativeVideo.url;
        }
        return null;
    }

    public WXProgramRes getWXProgramRes() {
        Ad ad = getAd();
        if (ad == null || ad.wx_program_res == null) {
            return null;
        }
        return ad.wx_program_res;
    }

    public AdPrivacy getadPrivacy() {
        MaterialMeta material = getMaterial();
        if (material != null) {
            return material.ad_privacy;
        }
        return null;
    }

    public String getadslot_id() {
        return this.adslot_id;
    }

    public boolean isCatchVideo() {
        return this.catchVideo;
    }

    public boolean isClickAutoCloseSplash() {
        return false;
    }

    public boolean isDisablexRequestWith() {
        SlotAdSetting slotAdSetting = this.slotAdSetting;
        if (slotAdSetting != null) {
            return slotAdSetting.disable_x_requested_with.booleanValue();
        }
        return false;
    }

    public boolean isDownloadDialog() {
        MaterialMeta material = getMaterial();
        if (material != null) {
            return material.download_dialog.booleanValue();
        }
        return false;
    }

    public boolean isEndCardIndexExist() {
        if (TextUtils.isEmpty(getEndcard_url())) {
            return true;
        }
        if (getCreativeType() == l.a.a() || getCreativeType() == l.d.a()) {
            return new File(getEndCardIndexPath()).exists();
        }
        return true;
    }

    public boolean isHalfInterstitial() {
        return this.isHalfInterstitial;
    }

    public boolean isNativeAdH5() {
        return true;
    }

    public boolean isRecord() {
        return this.record;
    }

    public boolean isSkipSigmobBrowser() {
        return getAd() == null || getAd().ad_setting == null || !getAd().ad_setting.in_app.booleanValue();
    }

    public boolean isUse_floating_btn() {
        SplashAdSetting splashAdSetting = getSplashAdSetting();
        if (splashAdSetting != null) {
            return splashAdSetting.use_floating_btn.booleanValue();
        }
        return false;
    }

    public boolean isVideoExist() {
        if (TextUtils.isEmpty(getVideo_url())) {
            return true;
        }
        String videoPath = getVideoPath();
        boolean zExists = new File(videoPath).exists();
        SigmobLog.d("isVideoExist path :" + videoPath + " isExist: " + zExists);
        return zExists;
    }

    public String resourcePath() {
        return (TextUtils.isEmpty(getEndcard_url()) || !(getCreativeType() == l.a.a() || getCreativeType() == l.d.a())) ? !TextUtils.isEmpty(getHtmlData()) ? getHtmlData() : getHtmlUrl() : getEndCardIndexPath();
    }

    public void setAd(Ad ad) {
        this.ad = ad;
    }

    public void setAdSize(int i, int i2) {
        this.adWidth = i;
        this.adWidth = i2;
        getMacroCommon().addMarcoKey(SigMacroCommon._WIDTH_, String.valueOf(i));
        getMacroCommon().addMarcoKey(SigMacroCommon._HEIGHT_, String.valueOf(i2));
    }

    public void setAd_scene_desc(String str) {
        this.ad_scene_desc = str;
    }

    public void setAd_scene_id(String str) {
        this.ad_scene_id = str;
    }

    public void setAd_source_channel(String str) {
        this.ad_source_channel = str;
    }

    public void setAd_type(int i) {
        this.ad_type = i;
    }

    public void setAdslot_id(String str) {
        this.adslot_id = str;
    }

    public void setBid_token(String str) {
        this.bid_token = str;
    }

    public void setCamp_id(String str) {
        this.camp_id = str;
    }

    public void setCatchVideo(boolean z) {
        this.catchVideo = z;
    }

    public void setCreate_time(long j) {
        this.create_time = j;
    }

    public void setCrid(String str) {
        this.crid = str;
    }

    public void setCustomAndroidMarket(AndroidMarket androidMarket) {
        this.mCustomAndroidMarket = androidMarket;
    }

    public void setCustomDeeplink(String str) {
        this.mCustomDeeplink = str;
    }

    public void setCustomLandPageUrl(String str) {
        this.mCustomLandPageUrl = str;
    }

    public void setDownloadId(long j) {
        this.downloadId = Long.valueOf(j);
    }

    public void setEndcard_md5(String str) {
        this.endcard_md5 = str;
    }

    public void setHalfInterstitial(boolean z) {
        this.isHalfInterstitial = z;
    }

    public void setLoad_id(String str) {
        this.load_id = str;
    }

    public void setMacroCommon(SigMacroCommon sigMacroCommon) {
        this.macroCommon = sigMacroCommon;
    }

    public void setRecord(boolean z) {
        this.record = z;
    }

    public void setRequest_id(String str) {
        this.request_id = str;
    }

    public void setSessionManager(ab abVar) {
        this.mSessionManager = abVar;
    }

    public void setUrl(String str) {
        this.landUrl = str;
    }

    public void setVideo_md5(String str) {
        this.video_md5 = str;
    }

    public void setadslot_id(String str) {
        this.adslot_id = str;
    }

    public void updateRealAdPercent(double d) {
        this.realAdPercent = d;
    }
}
