package com.mbridge.msdk.foundation.entity;

import android.net.Uri;
import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.click.CommonJumpLoader;
import com.mbridge.msdk.foundation.tools.ab;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.ai;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.system.NoProGuard;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import com.tkay.basead.b.a;
import com.tkay.expressad.foundation.d.c;
import com.xiaomi.mipush.sdk.Constants;
import java.io.Serializable;
import java.net.URL;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class CampaignEx extends DomainCampaignEx implements NoProGuard, Serializable {
    public static final int CAMPAIN_NV_T2_VALUE_3 = 3;
    public static final int CAMPAIN_NV_T2_VALUE_4 = 4;
    public static final String CLICKMODE_ON = "5";
    public static final int CLICK_TIMEOUT_INTERVAL_DEFAULT_VALUE = 2;
    public static final int C_UA_DEFAULT_VALUE = 1;
    private static final int DEFAULT_READY_RATE = 100;
    public static final String ENDCARD_URL = "endcard_url";
    public static final int FLAG_DEFAULT_SPARE_OFFER = -1;
    public static final int FLAG_IS_SPARE_OFFER = 1;
    public static final int FLAG_NOT_SPARE_OFFER = 0;
    public static final int IMP_UA_DEFAULT_VALUE = 1;
    public static final String JSON_AD_IMP_KEY = "sec";
    public static final String JSON_AD_IMP_VALUE = "url";
    public static final String JSON_KEY_AAB = "aab";
    public static final String JSON_KEY_ADVIMP = "adv_imp";
    public static final String JSON_KEY_AD_AKS = "aks";
    public static final String JSON_KEY_AD_AL = "al";
    public static final String JSON_KEY_AD_HTML = "ad_html";
    public static final String JSON_KEY_AD_K = "k";
    public static final String JSON_KEY_AD_MP = "mp";
    public static final String JSON_KEY_AD_Q = "q";
    public static final String JSON_KEY_AD_R = "r";
    public static final String JSON_KEY_AD_SOURCE_ID = "ad_source_id";
    public static final String JSON_KEY_AD_TMP_IDS = "tmp_ids";
    public static final String JSON_KEY_AD_TRACKING_DROPOUT_TRACK = "dropout_track";
    public static final String JSON_KEY_AD_TRACKING_IMPRESSION_T2 = "impression_t2";
    public static final String JSON_KEY_AD_TRACKING_PLYCMPT_TRACK = "plycmpt_track";
    public static final String JSON_KEY_AD_URL_LIST = "ad_url_list";
    public static final String JSON_KEY_AD_ZIP = "ad_tpl_url";
    public static final String JSON_KEY_APP_SIZE = "app_size";
    public static final String JSON_KEY_BANNER_HTML = "banner_html";
    public static final String JSON_KEY_BANNER_URL = "banner_url";
    public static final String JSON_KEY_BTY = "ctype";
    public static final String JSON_KEY_CAMPAIGN_UNITID = "unitId";
    public static final String JSON_KEY_CLICK_INTERVAL = "c_ct";
    public static final String JSON_KEY_CLICK_MODE = "click_mode";
    public static final String JSON_KEY_CLICK_TIMEOUT_INTERVAL = "c_toi";
    public static final String JSON_KEY_CLICK_URL = "click_url";
    public static final String JSON_KEY_CREATIVE_ID = "creative_id";
    public static final String JSON_KEY_CTA_TEXT = "ctatext";
    public static final String JSON_KEY_C_UA = "c_ua";
    public static final String JSON_KEY_DEEP_LINK_URL = "deep_link";
    public static final String JSON_KEY_DESC = "desc";
    public static final String JSON_KEY_ENCRYPT_PRICE = "encrypt_p";
    public static final String JSON_KEY_ENDCARD_CLICK = "endcard_click_result";
    public static final String JSON_KEY_EXT_DATA = "ext_data";
    public static final String JSON_KEY_FAC = "fac";
    public static final String JSON_KEY_FCA = "fca";
    public static final String JSON_KEY_FCB = "fcb";
    public static final String JSON_KEY_FLB = "flb";
    public static final String JSON_KEY_FLB_SKIP_TIME = "flb_skiptime";
    public static final String JSON_KEY_GIF_URL = "gif_url";
    public static final String JSON_KEY_GUIDELINES = "guidelines";
    public static final String JSON_KEY_HASMBTPLMARK = "hasMBTplMark";
    public static final String JSON_KEY_HB = "hb";
    public static final String JSON_KEY_ICON_URL = "icon_url";
    public static final String JSON_KEY_ID = "id";
    public static final String JSON_KEY_IMAGE_SIZE = "image_size";
    public static final String JSON_KEY_IMAGE_URL = "image_url";
    public static final String JSON_KEY_IMPRESSION_URL = "impression_url";
    public static final String JSON_KEY_IMP_UA = "imp_ua";
    public static final String JSON_KEY_JM_PD = "jm_pd";
    public static final String JSON_KEY_LANDING_TYPE = "landing_type";
    public static final String JSON_KEY_LINK_TYPE = "link_type";
    public static final String JSON_KEY_MAITVE = "maitve";
    public static final String JSON_KEY_MAITVESRC = "maitve_src";
    public static final String JSON_KEY_MRAID = "mraid";
    public static final String JSON_KEY_MRAIDFORH5 = "mraid_src";
    public static final String JSON_KEY_NEW_INTERSTITIAL_AD_SPACE_T = "adspace_t";
    public static final String JSON_KEY_NEW_INTERSTITIAL_CBD = "cbd";
    public static final String JSON_KEY_NEW_INTERSTITIAL_VST = "vst";
    public static final String JSON_KEY_NOTICE_URL = "notice_url";
    public static final String JSON_KEY_NUMBER_RATING = "number_rating";
    public static final String JSON_KEY_NV_T2 = "nv_t2";
    public static final String JSON_KEY_OFFER_TYPE = "offer_type";
    public static final String JSON_KEY_PACKAGE_NAME = "package_name";
    public static final String JSON_KEY_PLCT = "plct";
    public static final String JSON_KEY_PLCTB = "plctb";
    public static final String JSON_KEY_PV_URLS = "pv_urls";
    public static final String JSON_KEY_READY_RATE = "ready_rate";
    public static final String JSON_KEY_RETARGET_OFFER = "retarget_offer";
    public static final String JSON_KEY_RETARGET_TYPE = "rtins_type";
    public static final String JSON_KEY_REWARD_AMOUNT = "reward_amount";
    public static final String JSON_KEY_REWARD_NAME = "reward_name";
    public static final String JSON_KEY_REWARD_PLUS = "rw_pl";
    public static final String JSON_KEY_REWARD_TEMPLATE = "rv";
    public static final String JSON_KEY_REWARD_VIDEO_MD5 = "md5_file";
    public static final String JSON_KEY_RS_IGNORE_CHECK_RULE = "rs_ignc_r";
    public static final String JSON_KEY_STAR = "rating";
    public static final String JSON_KEY_ST_IEX = "iex";
    public static final String JSON_KEY_ST_TS = "ts";
    public static final String JSON_KEY_TEMPLATE = "template";
    public static final String JSON_KEY_TIMESTAMP = "timestamp";
    public static final String JSON_KEY_TITLE = "title";
    public static final String JSON_KEY_TOKEN_RULE = "token_r";
    public static final String JSON_KEY_TP_OFFER = "tp_offer";
    public static final String JSON_KEY_T_IMP = "t_imp";
    public static final String JSON_KEY_USER_ACTIVATION = "user_activation";
    public static final String JSON_KEY_VCN = "vcn";
    public static final String JSON_KEY_VIDEO_CHECK_TYPE = "vck_t";
    public static final String JSON_KEY_VIDEO_COMPLETE_TIME = "view_com_time";
    public static final String JSON_KEY_VIDEO_CTN_TYPE = "vctn_t";
    public static final String JSON_KEY_VIDEO_LENGTHL = "video_length";
    public static final String JSON_KEY_VIDEO_RESOLUTION = "video_resolution";
    public static final String JSON_KEY_VIDEO_SIZE = "video_size";
    public static final String JSON_KEY_VIDEO_URL = "video_url";
    public static final String JSON_KEY_WATCH_MILE = "watch_mile";
    public static final String JSON_KEY_WITHOUT_INSTALL_CHECK = "wtick";
    public static final String JSON_NATIVE_VIDEO_AD_TRACKING = "ad_tracking";
    public static final String JSON_NATIVE_VIDEO_CLICK = "click";
    public static final String JSON_NATIVE_VIDEO_CLOSE = "close";
    public static final String JSON_NATIVE_VIDEO_COMPLETE = "complete";
    public static final String JSON_NATIVE_VIDEO_ENDCARD = "endcard";
    public static final String JSON_NATIVE_VIDEO_ENDCARD_SHOW = "endcard_show";
    public static final String JSON_NATIVE_VIDEO_ERROR = "error";
    public static final String JSON_NATIVE_VIDEO_FIRST_QUARTILE = "first_quartile";
    public static final String JSON_NATIVE_VIDEO_MIDPOINT = "midpoint";
    public static final String JSON_NATIVE_VIDEO_MUTE = "mute";
    public static final String JSON_NATIVE_VIDEO_PAUSE = "pause";
    public static final String JSON_NATIVE_VIDEO_PLAY_PERCENTAGE = "play_percentage";
    public static final String JSON_NATIVE_VIDEO_RESUME = "resume";
    public static final String JSON_NATIVE_VIDEO_START = "start";
    public static final String JSON_NATIVE_VIDEO_THIRD_QUARTILE = "third_quartile";
    public static final String JSON_NATIVE_VIDEO_UNMUTE = "unmute";
    public static final String JSON_NATIVE_VIDEO_VIDEO_CLICK = "video_click";
    public static final String JSON_NATIVE_VIDOE_IMPRESSION = "impression";
    public static final String KEY_ADCHOICE = "adchoice";
    public static final String KEY_AD_TYPE = "ad_type";
    public static final String KEY_IA_CACHE = "ia_cache";
    public static final String KEY_IA_EXT1 = "ia_ext1";
    public static final String KEY_IA_EXT2 = "ia_ext2";
    public static final String KEY_IA_ICON = "ia_icon";
    public static final String KEY_IA_ORI = "ia_ori";
    public static final String KEY_IA_RST = "ia_rst";
    public static final String KEY_IA_URL = "ia_url";
    public static final String KEY_IS_CMPT_ENTRY = "cmpt=1";
    public static final String KEY_IS_DOWNLOAD = "is_download_zip";
    public static final String KEY_OC_TIME = "oc_time";
    public static final String KEY_OC_TYPE = "oc_type";
    public static final String KEY_OMID = "omid";
    public static final String KEY_T_LIST = "t_list";
    public static final int LANDING_TYPE_VALUE_OPEN_BROWSER = 1;
    public static final int LANDING_TYPE_VALUE_OPEN_GP_BY_PACKAGE = 3;
    public static final int LANDING_TYPE_VALUE_OPEN_WEBVIEW = 2;
    public static final int LINK_TYPE_1 = 1;
    public static final int LINK_TYPE_2 = 2;
    public static final int LINK_TYPE_3 = 3;
    public static final int LINK_TYPE_4 = 4;
    public static final int LINK_TYPE_8 = 8;
    public static final int LINK_TYPE_9 = 9;
    public static final int LINK_TYPE_MINI_PROGRAM = 12;
    public static final int NEW_INTERSTITIAL_DEFAULT_AD_SPACE_T = 1;
    public static final int NEW_INTERSTITIAL_DEFAULT_CBD = -2;
    public static final int NEW_INTERSTITIAL_DEFAULT_VST = -2;
    public static final String PLAYABLE_ADS_WITHOUT_VIDEO = "playable_ads_without_video";
    public static final int PLAYABLE_ADS_WITHOUT_VIDEO_DEFAULT = 1;
    public static final int PLAYABLE_ADS_WITHOUT_VIDEO_ENDCARD = 2;
    public static final int RETAR_GETING_IS = 1;
    public static final int RETAR_GETING_NOT = 2;
    public static final int RTINS_TYPE_DONE = 1;
    public static final int RTINS_TYPE_NOT_DONE = 2;
    public static final String TAG = CampaignEx.class.getSimpleName();
    public static final String VIDEO_END_TYPE = "video_end_type";
    public static final int VIDEO_END_TYPE_BROWSER = 5;
    public static final int VIDEO_END_TYPE_DEFAULT = 2;
    public static final int VIDEO_END_TYPE_FINISH = 1;
    public static final int VIDEO_END_TYPE_NATIVE = 100;
    public static final int VIDEO_END_TYPE_REULSE = 2;
    public static final int VIDEO_END_TYPE_VAST = 3;
    public static final int VIDEO_END_TYPE_WEBVIEW = 4;
    private static final long serialVersionUID = 1;
    private String CMPTEntryUrl;
    private AabEntity aabEntity;
    private int adSpaceT;
    private int adType;
    private String ad_url_list;
    private a adchoice;
    private String advImp;
    private HashMap<String, String> aks;
    private String al;
    private int bty;
    private long cVersionCode;
    private int cacheLevel;
    private String campaignUnitId;
    private int cbt;
    private int clickInterval;
    private String click_mode;
    private String endScreenUrl;
    private int endcard_click_result;
    private String endcard_url;
    private String ext_data;
    private int fca;
    private int fcb;
    private int flb;
    private int flbSkipTime;
    private String gifUrl;
    private String guidelines;
    private boolean hasMBTplMark;
    private String htmlUrl;
    private String ia_ext1;
    private String ia_ext2;
    private int iex;
    private String interactiveCache;
    private int isAddSuccesful;
    private boolean isBidCampaign;
    private boolean isCallbacked;
    private int isClick;
    private int isDeleted;
    private int isDownLoadZip;
    private boolean isMraid;
    private boolean isReport;
    private boolean isReportClick;
    private int jmPd;
    private CommonJumpLoader.JumpLoaderResult jumpResult;
    private String k;
    private String keyIaIcon;
    private int keyIaOri;
    private int keyIaRst;
    private String keyIaUrl;
    private String label;
    private String landingType;
    private int linkType;
    private int maitve;
    private String maitve_src;
    private b mediaViewHolder;
    private String mof_template_url;
    private int mof_tplid;
    private String mp;
    private String mraid;
    private l nativeVideoTracking;
    private String nativeVideoTrackingString;
    private int oc_time;
    private int offerType;
    private String pkgSource;
    private String placementId;
    private List<String> pv_urls;
    private String q;
    private String r;
    private String req_ext_data;
    private String requestId;
    private String requestIdNotice;
    private int retarget_offer;
    private int rewardAmount;
    private int rewardPlayStatus;
    public RewardPlus rewardPlus;
    private c rewardTemplateMode;
    private String reward_name;
    private ArrayList<Integer> rsIgnoreCheckRule;
    private int rtinsType;
    private int t_imp;
    private String t_list;
    private int template;
    private long ts;
    private String videoResolution;
    private int videoSize;
    private int watchMile;
    private int readyState = 1;
    private String adZip = "";
    private String adHtml = "";
    private boolean isReady = false;
    private int tpOffer = 0;
    private int fac = 0;
    private int cbd = -2;
    private int vst = -2;
    private long plct = 0;
    private long plctb = 0;
    private String bannerUrl = "";
    private String bannerHtml = "";
    private long creativeId = 0;
    private int vcn = 0;
    private int tokenRule = 0;
    private String encryptPrice = "";
    private boolean isDynamicView = false;
    private int dynamicTempCode = 0;
    private boolean campaignIsFiltered = false;
    private int videoCompleteTime = 0;
    private int spareOfferFlag = -1;
    private int oc_type = 0;
    private String moreOfferJsonData = "";
    private int impUA = 1;
    private int cUA = 1;
    private int nvT2 = 6;
    private int tab = -1;
    private String impressionURL = "";
    private String noticeUrl = "";
    private String clickURL = "";
    private int wtick = 0;
    private String deepLinkUrl = "";
    private boolean userActivation = false;
    private String onlyImpressionURL = "";
    private String imageSize = "";
    private boolean isCallBackImpression = false;
    private String videoUrlEncode = "";
    private String bidToken = "";
    private int video_end_type = 2;
    public String videoMD5Value = "";
    private int ready_rate = -1;
    private int nscpt = 1;
    private int loadTimeoutState = 0;
    private int clickTimeOutInterval = 2;
    private int playable_ads_without_video = 1;
    private boolean hasReportAdTrackPause = false;
    private String omid = null;
    private int videoCheckType = 2;
    private int videoCtnType = 1;
    private int isTimeoutCheckVideoStatus = -1;
    private boolean canStart2C1Anim = false;
    private boolean canStartMoreOfferAnim = false;
    public boolean mMoreOfferImpShow = false;
    private int videoPlayProgress = 0;
    public boolean isRewardPopViewShowed = false;

    public static final class b implements Serializable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public boolean f3378a = false;
        public boolean b = false;
        public boolean c = false;
        public boolean d = false;
        public boolean e = false;
        public boolean f = false;
        public boolean g = false;
        public boolean h = false;
        public boolean i = false;
        public boolean j = false;
        public boolean k = false;
        public Map<Integer, String> l;
    }

    public int getTpOffer() {
        return this.tpOffer;
    }

    public void setTpOffer(int i) {
        this.tpOffer = i;
    }

    public int getFac() {
        return this.fac;
    }

    public void setFac(int i) {
        this.fac = i;
    }

    public String getAdZip() {
        return this.adZip;
    }

    public void setAdZip(String str) {
        this.adZip = str;
        boolean zH = ae.h(str);
        int iL = ae.l(str);
        if (zH) {
            setDynamicView(true);
            setDynamicTempCode(iL);
        }
    }

    public String getAdHtml() {
        return this.adHtml;
    }

    public void setAdHtml(String str) {
        this.adHtml = str;
    }

    public void setPv_urls(List<String> list) {
        this.pv_urls = list;
    }

    public List<String> getPv_urls() {
        return this.pv_urls;
    }

    public int getReadyState() {
        return this.readyState;
    }

    public int getAdSpaceT() {
        return this.adSpaceT;
    }

    public void setAdSpaceT(int i) {
        this.adSpaceT = i;
    }

    public int getCbd() {
        return this.cbd;
    }

    public void setCbd(int i) {
        this.cbd = i;
    }

    public int getVst() {
        return this.vst;
    }

    public void setVst(int i) {
        this.vst = i;
    }

    public int getVideoCompleteTime() {
        return this.videoCompleteTime;
    }

    public void setVideoCompleteTime(int i) {
        this.videoCompleteTime = i;
    }

    public String getEncryptPrice() {
        return this.encryptPrice;
    }

    public void setEncryptPrice(String str) {
        this.encryptPrice = str;
    }

    public int getTokenRule() {
        int i = this.tokenRule;
        if (i == 1) {
            return i;
        }
        return 0;
    }

    public void setTokenRule(int i) {
        this.tokenRule = i;
    }

    public int getVcn() {
        int i = this.vcn;
        if (i > 0) {
            return i;
        }
        return 1;
    }

    public void setVcn(int i) {
        this.vcn = i;
    }

    public boolean isDynamicView() {
        return this.isDynamicView;
    }

    public void setDynamicView(boolean z) {
        this.isDynamicView = z;
    }

    public int getDynamicTempCode() {
        return this.dynamicTempCode;
    }

    public void setDynamicTempCode(int i) {
        this.dynamicTempCode = ae.c(i);
    }

    public boolean isCampaignIsFiltered() {
        return this.campaignIsFiltered;
    }

    public void setCampaignIsFiltered(boolean z) {
        this.campaignIsFiltered = z;
    }

    public int getSpareOfferFlag() {
        return this.spareOfferFlag;
    }

    public void setSpareOfferFlag(int i) {
        this.spareOfferFlag = i;
    }

    public long getPlct() {
        return this.plct;
    }

    public void setPlct(long j) {
        this.plct = j;
    }

    public long getPlctb() {
        return this.plctb;
    }

    public void setPlctb(long j) {
        this.plctb = j;
    }

    public String getBannerUrl() {
        return this.bannerUrl;
    }

    public void setBannerUrl(String str) {
        this.bannerUrl = str;
    }

    public String getBannerHtml() {
        return this.bannerHtml;
    }

    public void setBannerHtml(String str) {
        this.bannerHtml = str;
    }

    public long getCreativeId() {
        return this.creativeId;
    }

    public void setCreativeId(long j) {
        this.creativeId = j;
    }

    public boolean isHasMBTplMark() {
        return this.hasMBTplMark;
    }

    public void setHasMBTplMark(boolean z) {
        this.hasMBTplMark = z;
    }

    public int getFlb() {
        return this.flb;
    }

    public void setFlb(int i) {
        this.flb = i;
    }

    public int getFlbSkipTime() {
        return this.flbSkipTime;
    }

    public void setFlbSkipTime(int i) {
        this.flbSkipTime = i;
    }

    public a getAdchoice() {
        return this.adchoice;
    }

    public void setAdchoice(a aVar) {
        this.adchoice = aVar;
    }

    public RewardPlus getRewardPlus() {
        return this.rewardPlus;
    }

    public void setRewardPlus(RewardPlus rewardPlus) {
        this.rewardPlus = rewardPlus;
    }

    public int getOc_type() {
        return this.oc_type;
    }

    public void setOc_type(int i) {
        this.oc_type = i;
    }

    public int getOc_time() {
        return this.oc_time;
    }

    public void setOc_time(int i) {
        this.oc_time = i;
    }

    public String getT_list() {
        return this.t_list;
    }

    public void setT_list(String str) {
        this.t_list = str;
    }

    public String getInteractiveCache() {
        return this.interactiveCache;
    }

    public void setInteractiveCache(String str) {
        this.interactiveCache = str;
    }

    public int getIsDownLoadZip() {
        return this.isDownLoadZip;
    }

    public void setIsDownLoadZip(int i) {
        this.isDownLoadZip = i;
    }

    public String getMoreOfferJsonData() {
        return this.moreOfferJsonData;
    }

    public int getAdType() {
        return this.adType;
    }

    public void setAdType(int i) {
        this.adType = i;
    }

    public String getIa_ext1() {
        return this.ia_ext1;
    }

    public void setIa_ext1(String str) {
        this.ia_ext1 = str;
    }

    public String getIa_ext2() {
        return this.ia_ext2;
    }

    public void setIa_ext2(String str) {
        this.ia_ext2 = str;
    }

    public String getKeyIaIcon() {
        return this.keyIaIcon;
    }

    public void setKeyIaIcon(String str) {
        this.keyIaIcon = str;
    }

    public int getKeyIaRst() {
        return this.keyIaRst;
    }

    public void setKeyIaRst(int i) {
        this.keyIaRst = i;
    }

    public String getKeyIaUrl() {
        return this.keyIaUrl;
    }

    public void setKeyIaUrl(String str) {
        this.keyIaUrl = str;
    }

    public int getKeyIaOri() {
        return this.keyIaOri;
    }

    public void setKeyIaOri(int i) {
        this.keyIaOri = i;
    }

    public int getIsAddSuccesful() {
        return this.isAddSuccesful;
    }

    public void setIsAddSuccesful(int i) {
        this.isAddSuccesful = i;
    }

    public int getJmPd() {
        return this.jmPd;
    }

    public int getIsDeleted() {
        return this.isDeleted;
    }

    public void setIsDeleted(int i) {
        this.isDeleted = i;
    }

    public int getIsClick() {
        return this.isClick;
    }

    public void setIsClick(int i) {
        this.isClick = i;
    }

    public void setJmPd(int i) {
        this.jmPd = i;
    }

    public int getNvT2() {
        return this.nvT2;
    }

    public void setNvT2(int i) {
        this.nvT2 = i;
    }

    public String getGifUrl() {
        return this.gifUrl;
    }

    public void setGifUrl(String str) {
        this.gifUrl = str;
    }

    public int getRtinsType() {
        return this.rtinsType;
    }

    public void setRtinsType(int i) {
        this.rtinsType = i;
    }

    public HashMap<String, String> getAks() {
        return this.aks;
    }

    public void setAks(HashMap<String, String> map) {
        this.aks = map;
    }

    public String getK() {
        return this.k;
    }

    public void setK(String str) {
        this.k = str;
    }

    public String getQ() {
        return this.q;
    }

    public void setQ(String str) {
        this.q = str;
    }

    public String getR() {
        return this.r;
    }

    public void setR(String str) {
        this.r = str;
    }

    public String getAl() {
        return this.al;
    }

    public void setAl(String str) {
        this.al = str;
    }

    public String getMp() {
        return this.mp;
    }

    public void setMp(String str) {
        this.mp = str;
    }

    public boolean isBidCampaign() {
        return this.isBidCampaign;
    }

    public void setIsBidCampaign(boolean z) {
        this.isBidCampaign = z;
    }

    public String getBidToken() {
        return this.bidToken;
    }

    public void setBidToken(String str) {
        this.bidToken = str;
    }

    public int getEndcard_click_result() {
        return this.endcard_click_result;
    }

    public void setEndcard_click_result(int i) {
        this.endcard_click_result = i;
    }

    public int getImpUA() {
        return this.impUA;
    }

    public void setImpUA(int i) {
        this.impUA = i;
    }

    public int getcUA() {
        return this.cUA;
    }

    public void setcUA(int i) {
        this.cUA = i;
    }

    public String getVideoMD5Value() {
        return this.videoMD5Value;
    }

    public void setVideoMD5Value(String str) {
        this.videoMD5Value = str;
    }

    public int getVideo_end_type() {
        return this.video_end_type;
    }

    public void setVideo_end_type(int i) {
        this.video_end_type = i;
    }

    public String getMraid() {
        return this.mraid;
    }

    public void setMraid(String str) {
        this.mraid = str;
    }

    public boolean isMraid() {
        return this.isMraid;
    }

    public void setIsMraid(boolean z) {
        this.isMraid = z;
    }

    public String getendcard_url() {
        return this.endcard_url;
    }

    public void setendcard_url(String str) {
        c cVar;
        this.endcard_url = str;
        if (TextUtils.isEmpty(this.mof_template_url) && (((cVar = this.rewardTemplateMode) == null || TextUtils.isEmpty(cVar.e)) && !TextUtils.isEmpty(str) && str.contains("cmpt=1"))) {
            setCMPTEntryUrl(str);
        }
        setCanStartMoreOfferAnim(ae.k(str));
        setMoreOfferAdControl(str, "endcard_url");
    }

    public int getPlayable_ads_without_video() {
        return this.playable_ads_without_video;
    }

    public void setPlayable_ads_without_video(int i) {
        this.playable_ads_without_video = i;
    }

    public String getCampaignUnitId() {
        return this.campaignUnitId;
    }

    public void setCampaignUnitId(String str) {
        this.campaignUnitId = str;
    }

    public String getNativeVideoTrackingString() {
        return this.nativeVideoTrackingString;
    }

    public void setNativeVideoTrackingString(String str) {
        this.nativeVideoTrackingString = str;
    }

    public l getNativeVideoTracking() {
        return this.nativeVideoTracking;
    }

    public void setNativeVideoTracking(l lVar) {
        this.nativeVideoTracking = lVar;
    }

    public String getAd_url_list() {
        return this.ad_url_list;
    }

    public void setAd_url_list(String str) {
        this.ad_url_list = str;
    }

    public String getLabel() {
        return this.label;
    }

    public void setLabel(String str) {
        this.label = str;
    }

    public String getPkgSource() {
        return this.pkgSource;
    }

    public void setPkgSource(String str) {
        this.pkgSource = str;
    }

    public int getIex() {
        return this.iex;
    }

    public void setIex(int i) {
        this.iex = i;
    }

    public long getTs() {
        return this.ts;
    }

    public void setTs(long j) {
        this.ts = j;
    }

    public b getMediaViewHolder() {
        return this.mediaViewHolder;
    }

    public void setMediaViewHolder(b bVar) {
        this.mediaViewHolder = bVar;
    }

    public c getRewardTemplateMode() {
        return this.rewardTemplateMode;
    }

    public void setRewardTemplateMode(c cVar) {
        this.rewardTemplateMode = cVar;
        if (cVar == null || TextUtils.isEmpty(cVar.e())) {
            return;
        }
        if (TextUtils.isEmpty(this.mof_template_url) && cVar.e().contains("cmpt=1")) {
            setCMPTEntryUrl(cVar.e());
        }
        boolean zH = ae.h(cVar.e());
        int iL = ae.l(cVar.e());
        if (zH) {
            setDynamicView(true);
            setDynamicTempCode(iL);
        }
        setMoreOfferAdControl(cVar.e(), "template_url");
    }

    private void setMoreOfferAdControl(String str, String str2) {
        JSONObject jSONObject;
        try {
            int iB = ae.b(str, MBridgeConstans.DYNAMIC_VIEW_MORE_OFFER_ADMF);
            if (iB == 0) {
                return;
            }
            if (TextUtils.isEmpty(this.moreOfferJsonData)) {
                jSONObject = new JSONObject();
            } else {
                jSONObject = new JSONObject(this.moreOfferJsonData);
            }
            int iB2 = ae.b(str, MBridgeConstans.DYNAMIC_VIEW_MORE_OFFER_ADMFTM);
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put(MBridgeConstans.DYNAMIC_VIEW_MORE_OFFER_ADMF, iB);
            jSONObject2.put(MBridgeConstans.DYNAMIC_VIEW_MORE_OFFER_ADMFTM, iB2);
            jSONObject.put(str2, jSONObject2);
            this.moreOfferJsonData = jSONObject.toString();
        } catch (Exception e) {
            z.a(TAG, e.getMessage());
        }
    }

    public int getRetarget_offer() {
        return this.retarget_offer;
    }

    public void setRetarget_offer(int i) {
        this.retarget_offer = i;
    }

    public int getRewardPlayStatus() {
        return this.rewardPlayStatus;
    }

    public void setRewardPlayStatus(int i) {
        this.rewardPlayStatus = i;
    }

    public String getGuidelines() {
        return this.guidelines;
    }

    public void setGuidelines(String str) {
        this.guidelines = str;
    }

    public int getOfferType() {
        return this.offerType;
    }

    public void setOfferType(int i) {
        this.offerType = i;
    }

    public String getHtmlUrl() {
        return this.htmlUrl;
    }

    public void setHtmlUrl(String str) {
        this.htmlUrl = str;
    }

    public String getEndScreenUrl() {
        return this.endScreenUrl;
    }

    public void setEndScreenUrl(String str) {
        this.endScreenUrl = str;
    }

    public int getRewardAmount() {
        return this.rewardAmount;
    }

    public void setRewardAmount(int i) {
        this.rewardAmount = i;
    }

    public String getRewardName() {
        return this.reward_name;
    }

    public void setRewardName(String str) {
        this.reward_name = str;
    }

    public int getLinkType() {
        return this.linkType;
    }

    public void setLinkType(int i) {
        this.linkType = i;
    }

    @Override // com.mbridge.msdk.out.Campaign
    public void setAdCall(String str) {
        if (TextUtils.isEmpty(str)) {
            str = this.linkType != 2 ? "Learn more" : "Install";
        }
        super.setAdCall(str);
    }

    public int getBty() {
        return this.bty;
    }

    public void setBty(int i) {
        this.bty = i;
    }

    public String getAdvImp() {
        return this.advImp;
    }

    public void setAdvImp(String str) {
        this.advImp = str;
    }

    public Map<Integer, String> getAdvImpList() {
        return generateAdImpression(this.advImp);
    }

    public int getTImp() {
        return this.t_imp;
    }

    public void setTImp(int i) {
        this.t_imp = i;
    }

    public String getVideoUrlEncode() {
        return this.videoUrlEncode;
    }

    public void setVideoUrlEncode(String str) {
        this.videoUrlEncode = str;
    }

    public int getVideoSize() {
        return this.videoSize;
    }

    public void setVideoSize(int i) {
        this.videoSize = i;
    }

    public String getVideoResolution() {
        return this.videoResolution;
    }

    public void setVideoResolution(String str) {
        this.videoResolution = str;
    }

    public int getWatchMile() {
        return this.watchMile;
    }

    public void setWatchMile(int i) {
        this.watchMile = i;
    }

    public int getCacheLevel() {
        return this.cacheLevel;
    }

    public void setCacheLevel(int i) {
        this.cacheLevel = i;
    }

    public boolean isCallBackImpression() {
        return this.isCallBackImpression;
    }

    public void setCallBackImpression(boolean z) {
        this.isCallBackImpression = z;
    }

    public void setReport(boolean z) {
        this.isReport = z;
    }

    public boolean isReport() {
        return this.isReport;
    }

    public boolean isReportClick() {
        return this.isReportClick;
    }

    public void setReportClick(boolean z) {
        this.isReportClick = z;
    }

    public int getClickInterval() {
        return this.clickInterval;
    }

    public void setClickInterval(int i) {
        this.clickInterval = i;
    }

    public int getClickTimeOutInterval() {
        return this.clickTimeOutInterval;
    }

    public void setClickTimeOutInterval(int i) {
        this.clickTimeOutInterval = i;
    }

    public String getRequestId() {
        try {
            if (!TextUtils.isEmpty(this.requestId)) {
                return this.requestId;
            }
            if (TextUtils.isEmpty(this.onlyImpressionURL)) {
                return null;
            }
            Uri uri = Uri.parse(this.onlyImpressionURL);
            if (uri != null) {
                String queryParameter = uri.getQueryParameter("k");
                this.requestId = queryParameter;
                setRequestId(queryParameter);
            }
            return this.requestId;
        } catch (Exception unused) {
            return null;
        }
    }

    public void setRequestId(String str) {
        this.requestId = str;
    }

    public String getRequestIdNotice() {
        try {
            if (!TextUtils.isEmpty(this.requestIdNotice)) {
                return this.requestIdNotice;
            }
            if (TextUtils.isEmpty(this.noticeUrl)) {
                return "";
            }
            Uri uri = Uri.parse(this.noticeUrl);
            if (uri != null) {
                String queryParameter = uri.getQueryParameter("k");
                this.requestIdNotice = queryParameter;
                setRequestIdNotice(queryParameter);
            }
            return this.requestIdNotice;
        } catch (Exception unused) {
            return "";
        }
    }

    public void setRequestIdNotice(String str) {
        this.requestIdNotice = str;
    }

    public String getClick_mode() {
        return this.click_mode;
    }

    public void setClick_mode(String str) {
        this.click_mode = str;
    }

    public String getLandingType() {
        return this.landingType;
    }

    public void setLandingType(String str) {
        this.landingType = str;
    }

    public int getFca() {
        return this.fca;
    }

    public void setFca(int i) {
        this.fca = i;
    }

    public int getFcb() {
        return this.fcb;
    }

    public void setFcb(int i) {
        this.fcb = i;
    }

    public int getTab() {
        return this.tab;
    }

    public void setTab(int i) {
        this.tab = i;
    }

    public String getClickURL() {
        return this.clickURL;
    }

    public void setClickURL(String str) {
        this.clickURL = str;
    }

    public int getWtick() {
        return this.wtick;
    }

    public void setWtick(int i) {
        this.wtick = i;
    }

    public String getDeepLinkURL() {
        return this.deepLinkUrl;
    }

    public void setDeepLinkUrl(String str) {
        this.deepLinkUrl = str;
    }

    public void setUserActivation(boolean z) {
        this.userActivation = z;
    }

    public boolean getUserActivation() {
        return this.userActivation;
    }

    public String getImpressionURL() {
        try {
            if (ab.a().a("v_a_d_p", false)) {
                String strA = ae.a(this.impressionURL, "&tun=", v.P() + "");
                this.impressionURL = strA;
                return strA;
            }
        } catch (Exception e) {
            z.d(TAG, e.getMessage());
        }
        return this.impressionURL;
    }

    public void setImpressionURL(String str) {
        this.impressionURL = str;
    }

    public String getNoticeUrl() {
        try {
            if (ab.a().a("v_a_d_p", false)) {
                String strA = ae.a(this.noticeUrl, "&tun=", v.P() + "");
                this.noticeUrl = strA;
                return strA;
            }
        } catch (Exception e) {
            z.d(TAG, e.getMessage());
        }
        return this.noticeUrl;
    }

    public void setNoticeUrl(String str) {
        this.noticeUrl = str;
    }

    public String getOnlyImpressionURL() {
        try {
            if (ab.a().a("v_a_d_p", false)) {
                String strA = ae.a(this.onlyImpressionURL, "&tun=", v.P() + "");
                this.onlyImpressionURL = strA;
                return strA;
            }
        } catch (Exception e) {
            z.d(TAG, e.getMessage());
        }
        return this.onlyImpressionURL;
    }

    public void setOnlyImpressionURL(String str) {
        this.onlyImpressionURL = str;
    }

    @Override // com.mbridge.msdk.foundation.entity.DomainCampaignEx
    public CommonJumpLoader.JumpLoaderResult getJumpResult() {
        return this.jumpResult;
    }

    @Override // com.mbridge.msdk.foundation.entity.DomainCampaignEx
    public void setJumpResult(CommonJumpLoader.JumpLoaderResult jumpLoaderResult) {
        this.jumpResult = jumpLoaderResult;
    }

    public int getTemplate() {
        return this.template;
    }

    public void setTemplate(int i) {
        this.template = i;
    }

    public String getImageSize() {
        return this.imageSize;
    }

    public void setImageSize(String str) {
        this.imageSize = str;
    }

    public String getHost() {
        if (!TextUtils.isEmpty(getNoticeUrl())) {
            try {
                URL url = new URL(getNoticeUrl());
                return url.getProtocol() + "://" + url.getHost();
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        return "";
    }

    public static CampaignEx parseSettingCampaign(JSONObject jSONObject) {
        if (jSONObject == null) {
            return null;
        }
        CampaignEx campaignEx = new CampaignEx();
        campaignEx.setId(jSONObject.optString("campaignid"));
        campaignEx.setPackageName(jSONObject.optString(DBDefinition.PACKAGE_NAME));
        campaignEx.setAppName(jSONObject.optString("title"));
        campaignEx.setAdCall(jSONObject.optString(a.C0386a.k));
        campaignEx.setAppDesc(jSONObject.optString("desc"));
        campaignEx.setImpressionURL(jSONObject.optString("impression_url"));
        campaignEx.setImageUrl(jSONObject.optString("image_url"));
        campaignEx.setPlct(jSONObject.optLong("plct"));
        campaignEx.setPlctb(jSONObject.optLong("plctb"));
        campaignEx.setAdHtml(jSONObject.optString("ad_html"));
        campaignEx.setAdZip(jSONObject.optString("ad_tpl_url"));
        campaignEx.setBannerUrl(jSONObject.optString("banner_url"));
        campaignEx.setBannerHtml(jSONObject.optString("banner_html"));
        campaignEx.setCreativeId(jSONObject.optInt("creative_id"));
        campaignEx.setPlacementId(jSONObject.optString(MBridgeConstans.PLACEMENT_ID));
        return campaignEx;
    }

    private static boolean isBreakCampainOrSetItByEndCard(CampaignEx campaignEx, String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        if (com.mbridge.msdk.foundation.controller.a.f().n() == 2 && "1".equals(Uri.parse(str).getQueryParameter("dpwgl"))) {
            return true;
        }
        campaignEx.setendcard_url(str);
        return false;
    }

    public static CampaignEx parseCampaignWithBackData(JSONObject jSONObject) {
        CampaignEx campaignEx;
        ArrayList arrayList;
        CampaignEx campaignWithBackData = null;
        if (jSONObject != null) {
            try {
                campaignEx = new CampaignEx();
            } catch (Exception e) {
                e = e;
            }
            try {
                campaignEx.setId(jSONObject.optString("id"));
                campaignEx.setAppName(jSONObject.optString("title"));
                campaignEx.setAppDesc(jSONObject.optString("desc"));
                campaignEx.setPackageName(jSONObject.optString("package_name"));
                campaignEx.setRtinsType(jSONObject.optInt("rtins_type"));
                campaignEx.setIconUrl(jSONObject.optString("icon_url"));
                campaignEx.setImageUrl(jSONObject.optString("image_url"));
                campaignEx.setSize(jSONObject.optString("app_size"));
                campaignEx.setImageSize(jSONObject.optString("image_size"));
                campaignEx.setImpressionURL(jSONObject.optString("impression_url"));
                campaignEx.setClickURL(jSONObject.optString("click_url"));
                campaignEx.setRewardPlus(RewardPlus.parseByString(jSONObject.optString("rw_pl")));
                campaignEx.setWtick(jSONObject.optInt("wtick"));
                campaignEx.setDeepLinkUrl(jSONObject.optString("deep_link"));
                campaignEx.setUserActivation(jSONObject.optBoolean("user_activation", false));
                campaignEx.setNoticeUrl(jSONObject.optString("notice_url"));
                campaignEx.setTemplate(jSONObject.optInt("template"));
                campaignEx.setType(jSONObject.optInt("ad_source_id", 1));
                campaignEx.setFca(jSONObject.optInt("fca"));
                campaignEx.setFcb(jSONObject.optInt("fcb"));
                campaignEx.setEndcard_click_result(jSONObject.optInt("endcard_click_result"));
                if (!TextUtils.isEmpty(jSONObject.optString("rating"))) {
                    campaignEx.setRating(Double.parseDouble(jSONObject.optString("rating", "0")));
                }
                if (!TextUtils.isEmpty(jSONObject.optString("number_rating"))) {
                    campaignEx.setNumberRating(jSONObject.optInt("number_rating", 333333));
                }
                campaignEx.setClick_mode(jSONObject.optString("click_mode"));
                campaignEx.setLandingType(jSONObject.optString("landing_type"));
                campaignEx.setLinkType(jSONObject.optInt("link_type", 4));
                campaignEx.setClickInterval(jSONObject.optInt("c_ct"));
                campaignEx.setAdCall(jSONObject.optString("ctatext"));
                campaignEx.setAd_url_list(jSONObject.optString("ad_url_list"));
                campaignEx.setRetarget_offer(jSONObject.optInt("retarget_offer", 2));
                campaignEx.setVideoUrlEncode(jSONObject.optString("video_url"));
                campaignEx.setVideoLength(jSONObject.optInt("video_length"));
                campaignEx.setVideoSize(jSONObject.optInt("video_size"));
                campaignEx.setVideoResolution(jSONObject.optString("video_resolution"));
                campaignEx.setWatchMile(jSONObject.optInt("watch_mile"));
                campaignEx.setTimestamp(System.currentTimeMillis());
                campaignEx.setBty(jSONObject.optInt("ctype"));
                campaignEx.setAdvImp(jSONObject.optString("adv_imp"));
                campaignEx.setTImp(jSONObject.optInt("t_imp"));
                campaignEx.setHtmlUrl(jSONObject.optString("html_url"));
                campaignEx.setEndScreenUrl(jSONObject.optString("end_screen_url"));
                campaignEx.setGuidelines(jSONObject.optString("guidelines"));
                campaignEx.setOfferType(jSONObject.optInt("offer_type"));
                campaignEx.setRewardName(jSONObject.optString("reward_name"));
                campaignEx.setRewardAmount(jSONObject.optInt("reward_amount"));
                try {
                    if (jSONObject.has("ad_tracking")) {
                        String strOptString = jSONObject.optString("ad_tracking");
                        if (!TextUtils.isEmpty(strOptString)) {
                            campaignEx.setNativeVideoTrackingString(strOptString);
                            campaignEx.setNativeVideoTracking(TrackingStr2Object(strOptString));
                        }
                    }
                } catch (Exception unused) {
                }
                try {
                    campaignEx.setReady_rate(jSONObject.optInt("ready_rate", -1));
                    JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("ext_data");
                    if (jSONObjectOptJSONObject != null) {
                        campaignEx.setExt_data(jSONObjectOptJSONObject.toString());
                    }
                    campaignEx.setMof_tplid(jSONObject.optInt("mof_tplid"));
                    campaignEx.setMof_template_url(jSONObject.optString("mof_template_url"));
                    campaignEx.setNscpt(jSONObject.optInt("nscpt"));
                    new JSONArray();
                    JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("pv_urls");
                    if (jSONArrayOptJSONArray == null || jSONArrayOptJSONArray.length() <= 0) {
                        arrayList = null;
                    } else {
                        arrayList = new ArrayList(jSONArrayOptJSONArray.length());
                        for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                            arrayList.add(jSONArrayOptJSONArray.optString(i));
                        }
                    }
                    campaignEx.setPv_urls(arrayList);
                    JSONObject jSONObjectOptJSONObject2 = jSONObject.optJSONObject("req_ext_data");
                    if (jSONObjectOptJSONObject2 != null) {
                        campaignEx.setReq_ext_data(jSONObjectOptJSONObject2.toString());
                    }
                } catch (Exception unused2) {
                }
                campaignEx.setVideo_end_type(jSONObject.optInt("video_end_type", 2));
                if (isBreakCampainOrSetItByEndCard(campaignEx, jSONObject.optString("endcard_url"))) {
                    return null;
                }
                campaignEx.setPlayable_ads_without_video(jSONObject.optInt("playable_ads_without_video", 1));
                if (jSONObject.has("md5_file")) {
                    campaignEx.setVideoMD5Value(jSONObject.optString("md5_file"));
                }
                if (jSONObject.has("nv_t2")) {
                    campaignEx.setNvT2(jSONObject.optInt("nv_t2"));
                }
                if (jSONObject.has("gif_url")) {
                    campaignEx.setGifUrl(jSONObject.optString("gif_url"));
                }
                campaignEx.setRewardTemplateMode(c.a(jSONObject.optJSONObject("rv")));
                campaignEx.setClickTimeOutInterval(jSONObject.optInt("c_toi", 2));
                campaignEx.setImpUA(jSONObject.optInt("imp_ua", 1));
                campaignEx.setcUA(jSONObject.optInt("c_ua", 1));
                campaignEx.setJmPd(jSONObject.optInt("jm_pd"));
                campaignEx.setKeyIaIcon(jSONObject.optString("ia_icon"));
                campaignEx.setKeyIaRst(jSONObject.optInt("ia_rst"));
                campaignEx.setKeyIaUrl(jSONObject.optString("ia_url"));
                campaignEx.setKeyIaOri(jSONObject.optInt("ia_ori"));
                campaignEx.setAdType(jSONObject.optInt("ad_type"));
                campaignEx.setTpOffer(jSONObject.optInt("tp_offer"));
                campaignEx.setFac(jSONObject.optInt("fac"));
                campaignEx.setIa_ext1(jSONObject.optString("ia_ext1"));
                campaignEx.setIa_ext2(jSONObject.optString("ia_ext2"));
                campaignEx.setIsDownLoadZip(jSONObject.optInt("is_download_zip"));
                campaignEx.setInteractiveCache(jSONObject.optString("ia_cache"));
                campaignEx.setOc_time(jSONObject.optInt("oc_time"));
                campaignEx.setOc_type(jSONObject.optInt("oc_type"));
                campaignEx.setT_list(jSONObject.optString("t_list"));
                campaignEx.setAdchoice(a.a(jSONObject.optString("adchoice", "")));
                campaignEx.setPlct(jSONObject.optLong("plct"));
                campaignEx.setPlctb(jSONObject.optLong("plctb"));
                JSONArray jSONArrayOptJSONArray2 = jSONObject.optJSONArray("omid");
                if (jSONArrayOptJSONArray2 == null) {
                    if (!TextUtils.isEmpty(jSONObject.optString("omid"))) {
                        campaignEx.setOmid(jSONObject.optString("omid"));
                    } else {
                        campaignEx.setOmid(null);
                    }
                } else {
                    campaignEx.setOmid(jSONArrayOptJSONArray2.toString());
                }
                campaignEx.setCreativeId(jSONObject.optInt("creative_id"));
                String strOptString2 = jSONObject.optString("cam_tpl_url");
                Uri uri = Uri.parse(strOptString2);
                if (!TextUtils.isEmpty(uri.getPath()) && (uri.getPath().endsWith(".zip") || uri.getPath().endsWith(".ZIP"))) {
                    campaignEx.setAdZip(strOptString2);
                } else {
                    campaignEx.setBannerUrl(strOptString2);
                }
                campaignEx.setBannerHtml(jSONObject.optString("cam_html"));
                campaignEx.setAdHtml(jSONObject.optString("cam_html"));
                campaignEx.setCampaignUnitId(jSONObject.optString("unitId"));
                String strOptString3 = jSONObject.optString("mraid");
                if (TextUtils.isEmpty(strOptString3)) {
                    strOptString3 = jSONObject.optString("mraid_src");
                }
                if (!TextUtils.isEmpty(strOptString3)) {
                    campaignEx.setIsMraid(true);
                    campaignEx.setMraid(strOptString3);
                } else if (!TextUtils.isEmpty(campaignEx.getAdHtml()) && !campaignEx.getAdHtml().contains("<MBTPLMARK>")) {
                    campaignEx.setIsMraid(true);
                } else {
                    campaignEx.setIsMraid(false);
                }
                try {
                    String strOptString4 = jSONObject.optString("only_impression_url");
                    if (!TextUtils.isEmpty(strOptString4)) {
                        campaignEx.setOnlyImpressionURL(strOptString4);
                        Uri uri2 = Uri.parse(strOptString4);
                        if (uri2 != null) {
                            campaignEx.setRequestId(uri2.getQueryParameter("k"));
                        }
                    }
                    String strOptString5 = jSONObject.optString("notice_url");
                    if (!TextUtils.isEmpty(strOptString5)) {
                        campaignEx.setNoticeUrl(strOptString5);
                        Uri uri3 = Uri.parse(strOptString5);
                        if (uri3 != null) {
                            campaignEx.setRequestIdNotice(uri3.getQueryParameter("k"));
                        }
                    }
                } catch (Exception unused3) {
                }
                campaignEx.setIsBidCampaign(jSONObject.optBoolean("hb", false));
                campaignEx.setPlacementId(jSONObject.optString(MBridgeConstans.PLACEMENT_ID));
                campaignEx.setMaitve(jSONObject.optInt("maitve"));
                campaignEx.setMaitve_src(jSONObject.optString("maitve_src"));
                campaignEx.setFlb(jSONObject.optInt("flb"));
                campaignEx.setFlbSkipTime(jSONObject.optInt("flb_skiptime"));
                campaignEx.setCbd(jSONObject.optInt("cbd", -2));
                campaignEx.setVst(jSONObject.optInt("vst", -2));
                campaignEx.setAdSpaceT(jSONObject.optInt("adspace_t", 1));
                campaignWithBackData = parseCampaignWithBackData(jSONObject, campaignEx);
                campaignWithBackData.setVcn(jSONObject.optInt("vcn"));
                campaignWithBackData.setTokenRule(jSONObject.optInt("token_r"));
                campaignWithBackData.setEncryptPrice(jSONObject.optString("encrypt_p"));
                campaignWithBackData.setVideoCompleteTime(jSONObject.optInt("view_com_time"));
                campaignWithBackData.setVideoCheckType(jSONObject.optInt("vck_t", 2));
                campaignWithBackData.setVideoCtnType(jSONObject.optInt("vctn_t", 1));
                JSONArray jSONArrayOptJSONArray3 = jSONObject.optJSONArray("rs_ignc_r");
                if (jSONArrayOptJSONArray3 != null && jSONArrayOptJSONArray3.length() > 0) {
                    ArrayList<Integer> arrayList2 = new ArrayList<>();
                    for (int i2 = 0; i2 < jSONArrayOptJSONArray3.length(); i2++) {
                        arrayList2.add(Integer.valueOf(jSONArrayOptJSONArray3.optInt(i2)));
                    }
                    if (arrayList2.size() > 0) {
                        campaignWithBackData.setRsIgnoreCheckRule(arrayList2);
                    }
                }
                if (jSONObject.has(JSON_KEY_AAB)) {
                    campaignWithBackData.setAabEntity(AabEntity.parser(jSONObject.getString(JSON_KEY_AAB)));
                }
                return campaignWithBackData;
            } catch (Exception e2) {
                e = e2;
                campaignWithBackData = campaignEx;
                e.printStackTrace();
                return campaignWithBackData;
            }
        }
        return campaignWithBackData;
    }

    private static JSONObject dealV5Temp(JSONObject jSONObject) {
        JSONArray jSONArrayOptJSONArray;
        try {
            if (!jSONObject.has("tmp_ids") || (jSONArrayOptJSONArray = jSONObject.optJSONArray("tmp_ids")) == null || jSONArrayOptJSONArray.length() <= 0) {
                return jSONObject;
            }
            jSONObject.remove("tmp_ids");
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                JSONObject jSONObjectA = com.mbridge.msdk.foundation.db.a.a.a().a(jSONArrayOptJSONArray.getString(i));
                if (jSONObjectA != null) {
                    Iterator<String> itKeys = jSONObjectA.keys();
                    while (itKeys.hasNext()) {
                        String next = itKeys.next();
                        jSONObject.put(next, jSONObjectA.opt(next));
                    }
                }
            }
            return jSONObject;
        } catch (JSONException unused) {
            return null;
        }
    }

    public static CampaignEx parseCampaign(JSONObject jSONObject, String str, String str2, String str3, boolean z, CampaignUnit campaignUnit) {
        return parseCampaign(jSONObject, str, str2, str3, z, campaignUnit, "");
    }

    /* JADX WARN: Can't wrap try/catch for region: R(8:(1:69)(2:71|(11:76|77|(2:79|(1:81)(1:82))(1:83)|84|124|85|89|(5:93|(2:96|94)|130|97|(1:99))|100|(1:102)|103)(1:75))|124|85|89|(6:91|93|(1:94)|130|97|(0))|100|(0)|103) */
    /* JADX WARN: Code restructure failed: missing block: B:87:0x04f9, code lost:
    
        r0 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:88:0x04fa, code lost:
    
        com.mbridge.msdk.foundation.tools.z.d(com.mbridge.msdk.interstitial.view.MBInterstitialActivity.INTENT_CAMAPIGN, r0.getMessage());
     */
    /* JADX WARN: Removed duplicated region for block: B:102:0x054c A[Catch: Exception -> 0x0558, TRY_LEAVE, TryCatch #5 {Exception -> 0x0558, blocks: (B:89:0x0503, B:91:0x051e, B:93:0x0524, B:94:0x0529, B:96:0x052f, B:97:0x053d, B:99:0x0543, B:100:0x0546, B:102:0x054c, B:88:0x04fa, B:85:0x04e1), top: B:124:0x04e1, inners: #4 }] */
    /* JADX WARN: Removed duplicated region for block: B:79:0x0475 A[Catch: Exception -> 0x055a, TryCatch #3 {Exception -> 0x055a, blocks: (B:5:0x001f, B:7:0x002b, B:9:0x003b, B:11:0x0041, B:12:0x0055, B:13:0x0058, B:15:0x005f, B:31:0x00db, B:33:0x01c1, B:34:0x01ce, B:36:0x01d8, B:37:0x01e2, B:40:0x0231, B:41:0x0235, B:42:0x023c, B:46:0x02dc, B:50:0x02f3, B:52:0x0303, B:53:0x030a, B:55:0x0310, B:56:0x0317, B:58:0x031d, B:59:0x0324, B:61:0x040e, B:63:0x041a, B:65:0x0426, B:67:0x042d, B:69:0x0447, B:77:0x046f, B:79:0x0475, B:81:0x047f, B:84:0x0493, B:82:0x0487, B:83:0x048c, B:71:0x0450, B:73:0x045a, B:75:0x0466, B:76:0x046b, B:66:0x042a), top: B:122:0x001f }] */
    /* JADX WARN: Removed duplicated region for block: B:83:0x048c A[Catch: Exception -> 0x055a, TryCatch #3 {Exception -> 0x055a, blocks: (B:5:0x001f, B:7:0x002b, B:9:0x003b, B:11:0x0041, B:12:0x0055, B:13:0x0058, B:15:0x005f, B:31:0x00db, B:33:0x01c1, B:34:0x01ce, B:36:0x01d8, B:37:0x01e2, B:40:0x0231, B:41:0x0235, B:42:0x023c, B:46:0x02dc, B:50:0x02f3, B:52:0x0303, B:53:0x030a, B:55:0x0310, B:56:0x0317, B:58:0x031d, B:59:0x0324, B:61:0x040e, B:63:0x041a, B:65:0x0426, B:67:0x042d, B:69:0x0447, B:77:0x046f, B:79:0x0475, B:81:0x047f, B:84:0x0493, B:82:0x0487, B:83:0x048c, B:71:0x0450, B:73:0x045a, B:75:0x0466, B:76:0x046b, B:66:0x042a), top: B:122:0x001f }] */
    /* JADX WARN: Removed duplicated region for block: B:96:0x052f A[Catch: Exception -> 0x0558, LOOP:2: B:94:0x0529->B:96:0x052f, LOOP_END, TryCatch #5 {Exception -> 0x0558, blocks: (B:89:0x0503, B:91:0x051e, B:93:0x0524, B:94:0x0529, B:96:0x052f, B:97:0x053d, B:99:0x0543, B:100:0x0546, B:102:0x054c, B:88:0x04fa, B:85:0x04e1), top: B:124:0x04e1, inners: #4 }] */
    /* JADX WARN: Removed duplicated region for block: B:99:0x0543 A[Catch: Exception -> 0x0558, TryCatch #5 {Exception -> 0x0558, blocks: (B:89:0x0503, B:91:0x051e, B:93:0x0524, B:94:0x0529, B:96:0x052f, B:97:0x053d, B:99:0x0543, B:100:0x0546, B:102:0x054c, B:88:0x04fa, B:85:0x04e1), top: B:124:0x04e1, inners: #4 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static com.mbridge.msdk.foundation.entity.CampaignEx parseCampaign(org.json.JSONObject r17, java.lang.String r18, java.lang.String r19, java.lang.String r20, boolean r21, com.mbridge.msdk.foundation.entity.CampaignUnit r22, java.lang.String r23) {
        /*
            Method dump skipped, instruction units count: 1381
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.foundation.entity.CampaignEx.parseCampaign(org.json.JSONObject, java.lang.String, java.lang.String, java.lang.String, boolean, com.mbridge.msdk.foundation.entity.CampaignUnit, java.lang.String):com.mbridge.msdk.foundation.entity.CampaignEx");
    }

    public static l TrackingStr2Object(String str) {
        try {
            if (!TextUtils.isEmpty(str)) {
                JSONObject jSONObject = new JSONObject(str);
                l lVar = new l();
                lVar.r(processNativeVideoTrackingArray(jSONObject.optJSONArray("impression")));
                lVar.g(processNativeVideoTrackingArray(jSONObject.optJSONArray("start")));
                lVar.h(processNativeVideoTrackingArray(jSONObject.optJSONArray("first_quartile")));
                lVar.i(processNativeVideoTrackingArray(jSONObject.optJSONArray("midpoint")));
                lVar.j(processNativeVideoTrackingArray(jSONObject.optJSONArray("third_quartile")));
                lVar.k(processNativeVideoTrackingArray(jSONObject.optJSONArray("complete")));
                lVar.a(parsePlayCentage(jSONObject.optJSONArray("play_percentage")));
                lVar.l(processNativeVideoTrackingArray(jSONObject.optJSONArray("mute")));
                lVar.m(processNativeVideoTrackingArray(jSONObject.optJSONArray("unmute")));
                lVar.n(processNativeVideoTrackingArray(jSONObject.optJSONArray("click")));
                lVar.o(processNativeVideoTrackingArray(jSONObject.optJSONArray("pause")));
                lVar.p(processNativeVideoTrackingArray(jSONObject.optJSONArray("resume")));
                lVar.q(processNativeVideoTrackingArray(jSONObject.optJSONArray("error")));
                lVar.s(processNativeVideoTrackingArray(jSONObject.optJSONArray("endcard")));
                lVar.u(processNativeVideoTrackingArray(jSONObject.optJSONArray("close")));
                lVar.t(processNativeVideoTrackingArray(jSONObject.optJSONArray("endcard_show")));
                lVar.v(processNativeVideoTrackingArray(jSONObject.optJSONArray("video_click")));
                lVar.f(processNativeVideoTrackingArray(jSONObject.optJSONArray("impression_t2")));
                lVar.a(processNativeVideoTrackingArray(jSONObject.optJSONArray("dropout_track")));
                lVar.b(processNativeVideoTrackingArray(jSONObject.optJSONArray("plycmpt_track")));
                return trackingStr2Object(jSONObject, lVar);
            }
        } catch (JSONException unused) {
        }
        return null;
    }

    protected static String[] processNativeVideoTrackingArray(JSONArray jSONArray) {
        if (jSONArray == null || jSONArray.length() <= 0) {
            return null;
        }
        String[] strArr = new String[jSONArray.length()];
        for (int i = 0; i < jSONArray.length(); i++) {
            strArr[i] = jSONArray.optString(i);
        }
        return strArr;
    }

    private Map<Integer, String> generateAdImpression(String str) {
        HashMap map = null;
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        try {
            JSONArray jSONArray = new JSONArray(str);
            if (jSONArray.length() <= 0) {
                return null;
            }
            HashMap map2 = new HashMap();
            for (int i = 0; i < jSONArray.length(); i++) {
                try {
                    JSONObject jSONObjectOptJSONObject = jSONArray.optJSONObject(i);
                    int iOptInt = jSONObjectOptJSONObject.optInt("sec");
                    map2.put(Integer.valueOf(iOptInt), jSONObjectOptJSONObject.optString("url"));
                } catch (Exception e) {
                    e = e;
                    map = map2;
                }
            }
            return map2;
        } catch (Exception e2) {
            e = e2;
        }
        e.printStackTrace();
        return map;
    }

    public List<String> getAdUrlList() {
        Exception e;
        ArrayList arrayList;
        String ad_url_list = getAd_url_list();
        try {
        } catch (Exception e2) {
            e = e2;
            arrayList = null;
        }
        if (TextUtils.isEmpty(ad_url_list)) {
            return null;
        }
        JSONArray jSONArray = new JSONArray(ad_url_list);
        arrayList = new ArrayList();
        for (int i = 0; i < jSONArray.length(); i++) {
            try {
                arrayList.add(jSONArray.optString(i));
            } catch (Exception e3) {
                e = e3;
                e.printStackTrace();
            }
        }
        return arrayList;
        e.printStackTrace();
        return arrayList;
    }

    public static JSONArray parseCamplistToJson(List<CampaignEx> list) {
        JSONArray jSONArray = null;
        if (list != null) {
            try {
                if (list.size() > 0) {
                    JSONArray jSONArray2 = new JSONArray();
                    try {
                        Iterator<CampaignEx> it = list.iterator();
                        while (it.hasNext()) {
                            try {
                                jSONArray2.put(campaignToJsonObject(it.next()));
                            } catch (Throwable th) {
                                th.printStackTrace();
                            }
                        }
                        return jSONArray2;
                    } catch (Exception e) {
                        e = e;
                        jSONArray = jSONArray2;
                        e.printStackTrace();
                        return jSONArray;
                    }
                }
            } catch (Exception e2) {
                e = e2;
            }
        }
        return jSONArray;
    }

    public static JSONObject campaignToJsonObject(CampaignEx campaignEx, boolean z, boolean z2) throws JSONException {
        JSONObject jSONObjectCampaignToJsonObject = campaignToJsonObject(campaignEx);
        jSONObjectCampaignToJsonObject.put("isReady", z);
        jSONObjectCampaignToJsonObject.put("expired", z2);
        return jSONObjectCampaignToJsonObject;
    }

    public static JSONObject campaignToJsonObject(CampaignEx campaignEx) throws JSONException {
        JSONObject jSONObject = new JSONObject();
        jSONObject.put("id", campaignEx.getId());
        jSONObject.put("flb", campaignEx.getFlb());
        jSONObject.put("flb_skiptime", campaignEx.getFlbSkipTime());
        jSONObject.put("adspace_t", campaignEx.getAdSpaceT());
        jSONObject.put("vst", campaignEx.getVst());
        jSONObject.put("cbd", campaignEx.getCbd());
        if (!TextUtils.isEmpty(campaignEx.getCampaignUnitId())) {
            jSONObject.put("unitId", campaignEx.getCampaignUnitId());
        }
        if (!TextUtils.isEmpty(campaignEx.getExt_data())) {
            try {
                jSONObject.put("ext_data", new JSONObject(campaignEx.getExt_data()));
            } catch (JSONException e) {
                e.printStackTrace();
            }
        }
        if (!TextUtils.isEmpty(campaignEx.getReq_ext_data())) {
            try {
                jSONObject.put("req_ext_data", new JSONObject(campaignEx.getReq_ext_data()));
            } catch (JSONException e2) {
                e2.printStackTrace();
            }
        }
        if (campaignEx.getPv_urls() != null && campaignEx.getPv_urls().size() > 0) {
            try {
                JSONArray jSONArray = new JSONArray();
                Iterator<String> it = campaignEx.getPv_urls().iterator();
                while (it.hasNext()) {
                    jSONArray.put(it.next());
                }
                jSONObject.put("pv_urls", jSONArray);
            } catch (JSONException e3) {
                e3.printStackTrace();
            }
        }
        if (!TextUtils.isEmpty(campaignEx.getMof_template_url())) {
            jSONObject.put("mof_tplid", campaignEx.getMof_tplid());
            jSONObject.put("mof_template_url", campaignEx.getMof_template_url());
            jSONObject.put("nscpt", campaignEx.getNscpt());
        }
        jSONObject.put("ready_rate", campaignEx.getReady_rate());
        jSONObject.put("title", campaignEx.getAppName());
        jSONObject.put("desc", campaignEx.getAppDesc());
        jSONObject.put("package_name", campaignEx.getPackageName());
        jSONObject.put("rtins_type", campaignEx.getRtinsType());
        jSONObject.put("icon_url", campaignEx.getIconUrl());
        jSONObject.put("image_url", campaignEx.getImageUrl());
        jSONObject.put("app_size", campaignEx.getSize());
        jSONObject.put("image_size", campaignEx.getImageSize());
        jSONObject.put("impression_url", campaignEx.getImpressionURL());
        jSONObject.put("click_url", campaignEx.getClickURL());
        if (campaignEx.getRewardPlus() != null) {
            jSONObject.put("rw_pl", campaignEx.getRewardPlus().toJsonObject());
        }
        jSONObject.put("wtick", campaignEx.getWtick());
        jSONObject.put("deep_link", campaignEx.getDeepLinkURL());
        jSONObject.put("user_activation", campaignEx.getUserActivation());
        jSONObject.put("notice_url", campaignEx.getNoticeUrl());
        jSONObject.put("template", campaignEx.getTemplate());
        jSONObject.put("ad_source_id", campaignEx.getType());
        jSONObject.put("fca", campaignEx.getFca());
        jSONObject.put("fcb", campaignEx.getFcb());
        jSONObject.put("rating", campaignEx.getRating() + "");
        jSONObject.put("number_rating", campaignEx.getNumberRating());
        jSONObject.put("click_mode", campaignEx.getClick_mode());
        jSONObject.put("landing_type", campaignEx.getLandingType());
        jSONObject.put("link_type", campaignEx.getLinkType());
        jSONObject.put("c_ct", campaignEx.getClickInterval());
        jSONObject.put("ctatext", campaignEx.getAdCall());
        jSONObject.put("endcard_click_result", campaignEx.getEndcard_click_result());
        jSONObject.put("retarget_offer", campaignEx.getRetarget_offer());
        jSONObject.put("video_url", campaignEx.getVideoUrlEncode());
        jSONObject.put("video_length", campaignEx.getVideoLength());
        jSONObject.put("video_size", campaignEx.getVideoSize());
        jSONObject.put("video_resolution", campaignEx.getVideoResolution());
        jSONObject.put("watch_mile", campaignEx.getWatchMile());
        jSONObject.put("ad_url_list", campaignEx.getAd_url_list());
        jSONObject.put("only_impression_url", campaignEx.getOnlyImpressionURL());
        jSONObject.put("ctype", campaignEx.getBty());
        jSONObject.put("t_imp", campaignEx.getTImp());
        jSONObject.put("adv_imp", campaignEx.getAdvImp());
        jSONObject.put("html_url", campaignEx.getHtmlUrl());
        jSONObject.put("end_screen_url", campaignEx.getEndScreenUrl());
        jSONObject.put("guidelines", campaignEx.getGuidelines());
        jSONObject.put("offer_type", campaignEx.getOfferType());
        jSONObject.put("reward_amount", campaignEx.getRewardAmount());
        jSONObject.put("reward_name", campaignEx.getRewardName());
        jSONObject.put("gif_url", campaignEx.getGifUrl());
        if (ai.b(campaignEx.getNativeVideoTrackingString())) {
            jSONObject.put("ad_tracking", new JSONObject(campaignEx.getNativeVideoTrackingString()));
        }
        jSONObject.put("video_end_type", campaignEx.getVideo_end_type());
        jSONObject.put("endcard_url", campaignEx.getendcard_url());
        jSONObject.put("playable_ads_without_video", campaignEx.getPlayable_ads_without_video());
        if (campaignEx != null && campaignEx.getRewardTemplateMode() != null && ai.b(campaignEx.getRewardTemplateMode().a())) {
            jSONObject.put("rv", new JSONObject(campaignEx.getRewardTemplateMode().a()));
        }
        jSONObject.put("md5_file", campaignEx.getVideoMD5Value());
        jSONObject.put("c_toi", campaignEx.getClickTimeOutInterval());
        jSONObject.put("c_ua", campaignEx.getcUA());
        jSONObject.put("imp_ua", campaignEx.getImpUA());
        jSONObject.put("jm_pd", campaignEx.getJmPd());
        jSONObject.put("ia_icon", campaignEx.getKeyIaIcon());
        jSONObject.put("ia_rst", campaignEx.getKeyIaRst());
        jSONObject.put("ia_url", campaignEx.getKeyIaUrl());
        jSONObject.put("ia_ori", campaignEx.getKeyIaOri());
        jSONObject.put("ad_type", campaignEx.getAdType());
        jSONObject.put("ia_ext1", campaignEx.getIa_ext1());
        jSONObject.put("ia_ext2", campaignEx.getIa_ext2());
        jSONObject.put("is_download_zip", campaignEx.getIsDownLoadZip());
        jSONObject.put("ia_cache", campaignEx.getInteractiveCache());
        jSONObject.put("oc_type", campaignEx.getOc_type());
        jSONObject.put("oc_time", campaignEx.getOc_time());
        jSONObject.put("t_list", campaignEx.getT_list());
        a adchoice = campaignEx.getAdchoice();
        if (adchoice != null) {
            jSONObject.put("adchoice", new JSONObject(adchoice.c()));
        }
        jSONObject.put("plct", campaignEx.getPlct());
        jSONObject.put("plctb", campaignEx.getPlctb());
        jSONObject.put("omid", campaignEx.getOmid());
        jSONObject.put("creative_id", campaignEx.getCreativeId());
        jSONObject.put("cam_html", campaignEx.getBannerHtml());
        jSONObject.put("cam_tpl_url", campaignEx.getBannerUrl() != null ? campaignEx.getBannerUrl() : campaignEx.getAdZip());
        jSONObject.put("mraid", campaignEx.getMraid());
        jSONObject.put("mraid_src", campaignEx.getMraid());
        jSONObject.put("timestamp", campaignEx.getTimestamp());
        jSONObject.put("hb", campaignEx.isBidCampaign);
        jSONObject.put(MBridgeConstans.PLACEMENT_ID, campaignEx.getPlacementId());
        jSONObject.put("maitve", campaignEx.getMaitve());
        jSONObject.put("maitve_src", campaignEx.getMaitve_src());
        jSONObject.put("vcn", campaignEx.getVcn());
        jSONObject.put("token_r", campaignEx.getTokenRule());
        jSONObject.put("encrypt_p", campaignEx.getEncryptPrice());
        jSONObject.put("view_com_time", campaignEx.getVideoCompleteTime());
        jSONObject.put("rs_ignc_r", (Object) campaignEx.getRsIgnoreCheckRule());
        jSONObject.put("vck_t", campaignEx.getVideoCheckType());
        jSONObject.put("vctn_t", campaignEx.getVideoCtnType());
        jSONObject.put("tp_offer", campaignEx.getTpOffer());
        jSONObject.put("fac", campaignEx.getFac());
        try {
            jSONObject.put("misk_spt", ae.e());
            jSONObject.put("misk_spt_det", ae.f());
        } catch (JSONException unused) {
        }
        if (campaignEx.getAabEntity() != null) {
            jSONObject.put(JSON_KEY_AAB, campaignEx.getAabEntity().toJson());
        }
        return campaignToJsonObject(jSONObject, campaignEx);
    }

    private static List<Map<Integer, String>> parsePlayCentage(JSONArray jSONArray) {
        ArrayList arrayList = new ArrayList();
        if (jSONArray != null) {
            for (int i = 0; i < jSONArray.length(); i++) {
                try {
                    String string = jSONArray.getString(i);
                    if (!TextUtils.isEmpty(string)) {
                        JSONObject jSONObject = new JSONObject(string);
                        HashMap map = new HashMap();
                        int i2 = jSONObject.getInt("rate");
                        map.put(Integer.valueOf(i2), jSONObject.getString("url"));
                        arrayList.add(map);
                    }
                } catch (Throwable unused) {
                }
            }
        }
        return arrayList;
    }

    public boolean isCallbacked() {
        return this.isCallbacked;
    }

    public void setCallbacked(boolean z) {
        this.isCallbacked = z;
    }

    public int getReady_rate() {
        return this.ready_rate;
    }

    public void setReady_rate(int i) {
        this.ready_rate = i;
    }

    public String getExt_data() {
        return this.ext_data;
    }

    public void setExt_data(String str) {
        this.ext_data = str;
    }

    public int getNscpt() {
        return this.nscpt;
    }

    public void setNscpt(int i) {
        this.nscpt = i;
    }

    public String getMof_template_url() {
        return this.mof_template_url;
    }

    public void setMof_template_url(String str) {
        this.mof_template_url = str;
        if (TextUtils.isEmpty(str)) {
            return;
        }
        setCMPTEntryUrl(str);
        boolean zH = ae.h(str);
        int iL = ae.l(str);
        if (zH) {
            setDynamicView(true);
            setDynamicTempCode(iL);
        }
        setCanStart2C1Anim(ae.k(str));
    }

    private void checkAndReSetDynamicViewState(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        if (str.equals(this.mof_template_url) || !this.isDynamicView) {
            boolean zH = ae.h(str);
            int iL = ae.l(str);
            if (zH) {
                setDynamicView(true);
                setDynamicTempCode(iL);
            }
        }
    }

    public String getCMPTEntryUrl() {
        return this.CMPTEntryUrl;
    }

    public void setCMPTEntryUrl(String str) {
        this.CMPTEntryUrl = str;
    }

    public int getMof_tplid() {
        return this.mof_tplid;
    }

    public void setMof_tplid(int i) {
        this.mof_tplid = i;
    }

    public String getReq_ext_data() {
        return this.req_ext_data;
    }

    public void setReq_ext_data(String str) {
        this.req_ext_data = str;
    }

    public void setReadyState(int i) {
        this.readyState = i;
    }

    public boolean isReady() {
        return this.isReady;
    }

    public void setReady(boolean z) {
        this.isReady = z;
    }

    public int getLoadTimeoutState() {
        return this.loadTimeoutState;
    }

    public void setLoadTimeoutState(int i) {
        this.loadTimeoutState = i;
    }

    public int getMaitve() {
        return this.maitve;
    }

    public void setMaitve(int i) {
        this.maitve = i;
    }

    public String getMaitve_src() {
        return this.maitve_src;
    }

    public void setMaitve_src(String str) {
        this.maitve_src = str;
    }

    public static final class c implements Serializable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private String f3379a;
        private int b;
        private int c;
        private String d;
        private String e;
        private List<a> f;

        public static final class a implements Serializable {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            public String f3380a;
            public List<String> b = new ArrayList();
        }

        private c(String str) {
            this.f3379a = str;
        }

        public final String a() {
            return this.f3379a;
        }

        public final int b() {
            return this.b;
        }

        public final int c() {
            return this.c;
        }

        public final String d() {
            return this.d;
        }

        public final String e() {
            return this.e;
        }

        public final List<a> f() {
            return this.f;
        }

        public static c a(String str) {
            try {
                if (ai.b(str)) {
                    return a(new JSONObject(str));
                }
                return null;
            } catch (Throwable unused) {
                return null;
            }
        }

        public static c a(JSONObject jSONObject) {
            if (jSONObject == null) {
                return null;
            }
            try {
                if (!ai.b(jSONObject.toString())) {
                    return null;
                }
                c cVar = new c(jSONObject.toString());
                cVar.b = jSONObject.optInt(c.C0460c.f6835a, 1);
                cVar.e = jSONObject.optString("template_url");
                cVar.c = jSONObject.optInt("orientation");
                cVar.d = jSONObject.optString(c.C0460c.d);
                JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(c.C0460c.e);
                if (jSONObjectOptJSONObject != null) {
                    ArrayList arrayList = new ArrayList();
                    Iterator<String> itKeys = jSONObjectOptJSONObject.keys();
                    while (itKeys != null && itKeys.hasNext()) {
                        String next = itKeys.next();
                        List<String> listB = ae.b(jSONObjectOptJSONObject.optJSONArray(next));
                        if (listB != null && listB.size() > 0) {
                            a aVar = new a();
                            aVar.f3380a = next;
                            aVar.b.addAll(listB);
                            arrayList.add(aVar);
                        }
                    }
                    cVar.f = arrayList;
                }
                return cVar;
            } catch (Throwable unused) {
                return null;
            }
        }
    }

    public boolean isHasReportAdTrackPause() {
        return this.hasReportAdTrackPause;
    }

    public void setHasReportAdTrackPause(boolean z) {
        this.hasReportAdTrackPause = z;
    }

    public static final class a implements Serializable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private String f3377a = "";
        private String b = "";
        private String c = "";
        private String d = "";
        private String e = "";
        private String f = "";
        private String g = "";
        private String h = "";
        private int i = 0;
        private int j = 0;
        private String k = "";

        public final int a() {
            return this.i;
        }

        public final int b() {
            return this.j;
        }

        public final String c() {
            return this.k;
        }

        public final String d() {
            return this.b;
        }

        public final String e() {
            return this.c;
        }

        public final String f() {
            return this.d;
        }

        public static a a(String str) {
            try {
                if (TextUtils.isEmpty(str)) {
                    return null;
                }
                return a(new JSONObject(str));
            } catch (Exception e) {
                if (MBridgeConstans.DEBUG) {
                    e.printStackTrace();
                }
                return null;
            } catch (Throwable th) {
                if (MBridgeConstans.DEBUG) {
                    th.printStackTrace();
                }
                return null;
            }
        }

        private static a a(JSONObject jSONObject) {
            a aVar = null;
            if (jSONObject == null) {
                return null;
            }
            try {
                a aVar2 = new a();
                try {
                    aVar2.c = jSONObject.optString("adchoice_icon");
                    aVar2.b = jSONObject.optString("adchoice_link");
                    String strOptString = jSONObject.optString("adchoice_size");
                    aVar2.d = strOptString;
                    aVar2.f3377a = jSONObject.optString(c.a.f6833a);
                    aVar2.h = jSONObject.optString(c.a.h);
                    aVar2.g = jSONObject.optString(c.a.g);
                    aVar2.f = jSONObject.optString("platform_logo");
                    aVar2.e = jSONObject.optString("platform_name");
                    aVar2.j = b(strOptString);
                    aVar2.i = c(strOptString);
                    aVar2.k = jSONObject.toString();
                    return aVar2;
                } catch (Exception e) {
                    e = e;
                    aVar = aVar2;
                    if (!MBridgeConstans.DEBUG) {
                        return aVar;
                    }
                    e.printStackTrace();
                    return aVar;
                } catch (Throwable th) {
                    th = th;
                    aVar = aVar2;
                    if (!MBridgeConstans.DEBUG) {
                        return aVar;
                    }
                    th.printStackTrace();
                    return aVar;
                }
            } catch (Exception e2) {
                e = e2;
            } catch (Throwable th2) {
                th = th2;
            }
        }

        private static int b(String str) {
            String[] strArrSplit;
            if (TextUtils.isEmpty(str)) {
                return 0;
            }
            try {
                if (str.contains("x") && (strArrSplit = str.split("x")) != null && strArrSplit.length > 1) {
                    return Integer.parseInt(strArrSplit[1]);
                }
            } catch (NumberFormatException | Exception unused) {
            }
            return 0;
        }

        private static int c(String str) {
            String[] strArrSplit;
            if (TextUtils.isEmpty(str)) {
                return 0;
            }
            try {
                if (str.contains("x") && (strArrSplit = str.split("x")) != null && strArrSplit.length > 0) {
                    return Integer.parseInt(strArrSplit[0]);
                }
            } catch (NumberFormatException | Exception unused) {
            }
            return 0;
        }
    }

    public boolean isSpareOffer(long j, long j2) {
        if (isEffectiveOffer(j)) {
            return false;
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        return getPlctb() > 0 ? getTimestamp() + (getPlctb() * 1000) >= jCurrentTimeMillis : getTimestamp() + j2 >= jCurrentTimeMillis;
    }

    public boolean isEffectiveOffer(long j) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        return getPlct() > 0 ? getTimestamp() + (getPlct() * 1000) >= jCurrentTimeMillis : getTimestamp() + j >= jCurrentTimeMillis;
    }

    public String getOmid() {
        return this.omid;
    }

    public void setOmid(String str) {
        this.omid = str;
    }

    public boolean isActiveOm() {
        return (TextUtils.isEmpty(this.omid) || TextUtils.isEmpty(MBridgeConstans.OMID_JS_SERVICE_URL)) ? false : true;
    }

    public int getCbt() {
        return this.cbt;
    }

    public void setCbt(int i) {
        this.cbt = i;
    }

    public String getPlacementId() {
        return this.placementId;
    }

    public void setPlacementId(String str) {
        this.placementId = str;
    }

    public boolean needShowIDialog() {
        return super.needShowIDialog(this);
    }

    public long getcVersionCode() {
        return this.cVersionCode;
    }

    public void setcVersionCode(long j) {
        this.cVersionCode = j;
    }

    public AabEntity getAabEntity() {
        return this.aabEntity;
    }

    public void setAabEntity(AabEntity aabEntity) {
        this.aabEntity = aabEntity;
    }

    public ArrayList<Integer> getRsIgnoreCheckRule() {
        return this.rsIgnoreCheckRule;
    }

    public String getRsIgnoreCheckRuleString() {
        if (getRsIgnoreCheckRule() == null || getRsIgnoreCheckRule().size() <= 0) {
            return "";
        }
        StringBuilder sb = new StringBuilder();
        try {
            Iterator<Integer> it = getRsIgnoreCheckRule().iterator();
            while (it.hasNext()) {
                sb.append(it.next());
                sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
            }
            if (sb.length() > 0) {
                sb.delete(sb.length() - 1, sb.length());
            }
            return !TextUtils.isEmpty(sb) ? sb.toString() : "";
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
            return "";
        }
    }

    public void setRsIgnoreCheckRule(ArrayList<Integer> arrayList) {
        this.rsIgnoreCheckRule = arrayList;
    }

    public void setRsIgnoreCheckRuleByString(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        String[] strArrSplit = str.split(Constants.ACCEPT_TIME_SEPARATOR_SP);
        if (strArrSplit.length > 0) {
            ArrayList<Integer> arrayList = new ArrayList<>();
            for (String str2 : strArrSplit) {
                arrayList.add(Integer.valueOf(Integer.parseInt(str2)));
            }
            setRsIgnoreCheckRule(arrayList);
        }
    }

    public int getVideoCheckType() {
        return this.videoCheckType;
    }

    public void setVideoCheckType(int i) {
        if (i > 2 || i < 1) {
            this.videoCheckType = 2;
        } else {
            this.videoCheckType = i;
        }
    }

    public int getVideoCtnType() {
        return this.videoCtnType;
    }

    public void setVideoCtnType(int i) {
        if (i > 2 || i < 1) {
            this.videoCtnType = 1;
        } else {
            this.videoCtnType = i;
        }
    }

    public int getIsTimeoutCheckVideoStatus() {
        return this.isTimeoutCheckVideoStatus;
    }

    public void setIsTimeoutCheckVideoStatus(int i) {
        this.isTimeoutCheckVideoStatus = i;
    }

    public void setCanStart2C1Anim(boolean z) {
        this.canStart2C1Anim = z;
    }

    public boolean getCanStart2C1Anim() {
        return this.canStart2C1Anim;
    }

    public void setCanStartMoreOfferAnim(boolean z) {
        this.canStartMoreOfferAnim = z;
    }

    public boolean getCanStartMoreOfferAnim() {
        return this.canStartMoreOfferAnim;
    }

    public int getVideoPlayProgress() {
        return this.videoPlayProgress;
    }

    public void setVideoPlayProgress(int i) {
        this.videoPlayProgress = i;
    }
}
