.class public Lcom/mbridge/msdk/foundation/entity/CampaignEx;
.super Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;
.source "CampaignEx.java"

# interfaces
.implements Lcom/mbridge/msdk/system/NoProGuard;
.implements Ljava/io/Serializable;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;,
        Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;,
        Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;
    }
.end annotation


# static fields
.field public static final CAMPAIN_NV_T2_VALUE_3:I = 0x3

.field public static final CAMPAIN_NV_T2_VALUE_4:I = 0x4

.field public static final CLICKMODE_ON:Ljava/lang/String; = "5"

.field public static final CLICK_TIMEOUT_INTERVAL_DEFAULT_VALUE:I = 0x2

.field public static final C_UA_DEFAULT_VALUE:I = 0x1

.field private static final DEFAULT_READY_RATE:I = 0x64

.field public static final ENDCARD_URL:Ljava/lang/String; = "endcard_url"

.field public static final FLAG_DEFAULT_SPARE_OFFER:I = -0x1

.field public static final FLAG_IS_SPARE_OFFER:I = 0x1

.field public static final FLAG_NOT_SPARE_OFFER:I = 0x0

.field public static final IMP_UA_DEFAULT_VALUE:I = 0x1

.field public static final JSON_AD_IMP_KEY:Ljava/lang/String; = "sec"

.field public static final JSON_AD_IMP_VALUE:Ljava/lang/String; = "url"

.field public static final JSON_KEY_AAB:Ljava/lang/String; = "aab"

.field public static final JSON_KEY_ADVIMP:Ljava/lang/String; = "adv_imp"

.field public static final JSON_KEY_AD_AKS:Ljava/lang/String; = "aks"

.field public static final JSON_KEY_AD_AL:Ljava/lang/String; = "al"

.field public static final JSON_KEY_AD_HTML:Ljava/lang/String; = "ad_html"

.field public static final JSON_KEY_AD_K:Ljava/lang/String; = "k"

.field public static final JSON_KEY_AD_MP:Ljava/lang/String; = "mp"

.field public static final JSON_KEY_AD_Q:Ljava/lang/String; = "q"

.field public static final JSON_KEY_AD_R:Ljava/lang/String; = "r"

.field public static final JSON_KEY_AD_SOURCE_ID:Ljava/lang/String; = "ad_source_id"

.field public static final JSON_KEY_AD_TMP_IDS:Ljava/lang/String; = "tmp_ids"

.field public static final JSON_KEY_AD_TRACKING_DROPOUT_TRACK:Ljava/lang/String; = "dropout_track"

.field public static final JSON_KEY_AD_TRACKING_IMPRESSION_T2:Ljava/lang/String; = "impression_t2"

.field public static final JSON_KEY_AD_TRACKING_PLYCMPT_TRACK:Ljava/lang/String; = "plycmpt_track"

.field public static final JSON_KEY_AD_URL_LIST:Ljava/lang/String; = "ad_url_list"

.field public static final JSON_KEY_AD_ZIP:Ljava/lang/String; = "ad_tpl_url"

.field public static final JSON_KEY_APP_SIZE:Ljava/lang/String; = "app_size"

.field public static final JSON_KEY_BANNER_HTML:Ljava/lang/String; = "banner_html"

.field public static final JSON_KEY_BANNER_URL:Ljava/lang/String; = "banner_url"

.field public static final JSON_KEY_BTY:Ljava/lang/String; = "ctype"

.field public static final JSON_KEY_CAMPAIGN_UNITID:Ljava/lang/String; = "unitId"

.field public static final JSON_KEY_CLICK_INTERVAL:Ljava/lang/String; = "c_ct"

.field public static final JSON_KEY_CLICK_MODE:Ljava/lang/String; = "click_mode"

.field public static final JSON_KEY_CLICK_TIMEOUT_INTERVAL:Ljava/lang/String; = "c_toi"

.field public static final JSON_KEY_CLICK_URL:Ljava/lang/String; = "click_url"

.field public static final JSON_KEY_CREATIVE_ID:Ljava/lang/String; = "creative_id"

.field public static final JSON_KEY_CTA_TEXT:Ljava/lang/String; = "ctatext"

.field public static final JSON_KEY_C_UA:Ljava/lang/String; = "c_ua"

.field public static final JSON_KEY_DEEP_LINK_URL:Ljava/lang/String; = "deep_link"

.field public static final JSON_KEY_DESC:Ljava/lang/String; = "desc"

.field public static final JSON_KEY_ENCRYPT_PRICE:Ljava/lang/String; = "encrypt_p"

.field public static final JSON_KEY_ENDCARD_CLICK:Ljava/lang/String; = "endcard_click_result"

.field public static final JSON_KEY_EXT_DATA:Ljava/lang/String; = "ext_data"

.field public static final JSON_KEY_FAC:Ljava/lang/String; = "fac"

.field public static final JSON_KEY_FCA:Ljava/lang/String; = "fca"

.field public static final JSON_KEY_FCB:Ljava/lang/String; = "fcb"

.field public static final JSON_KEY_FLB:Ljava/lang/String; = "flb"

.field public static final JSON_KEY_FLB_SKIP_TIME:Ljava/lang/String; = "flb_skiptime"

.field public static final JSON_KEY_GIF_URL:Ljava/lang/String; = "gif_url"

.field public static final JSON_KEY_GUIDELINES:Ljava/lang/String; = "guidelines"

.field public static final JSON_KEY_HASMBTPLMARK:Ljava/lang/String; = "hasMBTplMark"

.field public static final JSON_KEY_HB:Ljava/lang/String; = "hb"

.field public static final JSON_KEY_ICON_URL:Ljava/lang/String; = "icon_url"

.field public static final JSON_KEY_ID:Ljava/lang/String; = "id"

.field public static final JSON_KEY_IMAGE_SIZE:Ljava/lang/String; = "image_size"

.field public static final JSON_KEY_IMAGE_URL:Ljava/lang/String; = "image_url"

.field public static final JSON_KEY_IMPRESSION_URL:Ljava/lang/String; = "impression_url"

.field public static final JSON_KEY_IMP_UA:Ljava/lang/String; = "imp_ua"

.field public static final JSON_KEY_JM_PD:Ljava/lang/String; = "jm_pd"

.field public static final JSON_KEY_LANDING_TYPE:Ljava/lang/String; = "landing_type"

.field public static final JSON_KEY_LINK_TYPE:Ljava/lang/String; = "link_type"

.field public static final JSON_KEY_MAITVE:Ljava/lang/String; = "maitve"

.field public static final JSON_KEY_MAITVESRC:Ljava/lang/String; = "maitve_src"

.field public static final JSON_KEY_MRAID:Ljava/lang/String; = "mraid"

.field public static final JSON_KEY_MRAIDFORH5:Ljava/lang/String; = "mraid_src"

.field public static final JSON_KEY_NEW_INTERSTITIAL_AD_SPACE_T:Ljava/lang/String; = "adspace_t"

.field public static final JSON_KEY_NEW_INTERSTITIAL_CBD:Ljava/lang/String; = "cbd"

.field public static final JSON_KEY_NEW_INTERSTITIAL_VST:Ljava/lang/String; = "vst"

.field public static final JSON_KEY_NOTICE_URL:Ljava/lang/String; = "notice_url"

.field public static final JSON_KEY_NUMBER_RATING:Ljava/lang/String; = "number_rating"

.field public static final JSON_KEY_NV_T2:Ljava/lang/String; = "nv_t2"

.field public static final JSON_KEY_OFFER_TYPE:Ljava/lang/String; = "offer_type"

.field public static final JSON_KEY_PACKAGE_NAME:Ljava/lang/String; = "package_name"

.field public static final JSON_KEY_PLCT:Ljava/lang/String; = "plct"

.field public static final JSON_KEY_PLCTB:Ljava/lang/String; = "plctb"

.field public static final JSON_KEY_PV_URLS:Ljava/lang/String; = "pv_urls"

.field public static final JSON_KEY_READY_RATE:Ljava/lang/String; = "ready_rate"

.field public static final JSON_KEY_RETARGET_OFFER:Ljava/lang/String; = "retarget_offer"

.field public static final JSON_KEY_RETARGET_TYPE:Ljava/lang/String; = "rtins_type"

.field public static final JSON_KEY_REWARD_AMOUNT:Ljava/lang/String; = "reward_amount"

.field public static final JSON_KEY_REWARD_NAME:Ljava/lang/String; = "reward_name"

.field public static final JSON_KEY_REWARD_PLUS:Ljava/lang/String; = "rw_pl"

.field public static final JSON_KEY_REWARD_TEMPLATE:Ljava/lang/String; = "rv"

.field public static final JSON_KEY_REWARD_VIDEO_MD5:Ljava/lang/String; = "md5_file"

.field public static final JSON_KEY_RS_IGNORE_CHECK_RULE:Ljava/lang/String; = "rs_ignc_r"

.field public static final JSON_KEY_STAR:Ljava/lang/String; = "rating"

.field public static final JSON_KEY_ST_IEX:Ljava/lang/String; = "iex"

.field public static final JSON_KEY_ST_TS:Ljava/lang/String; = "ts"

.field public static final JSON_KEY_TEMPLATE:Ljava/lang/String; = "template"

.field public static final JSON_KEY_TIMESTAMP:Ljava/lang/String; = "timestamp"

.field public static final JSON_KEY_TITLE:Ljava/lang/String; = "title"

.field public static final JSON_KEY_TOKEN_RULE:Ljava/lang/String; = "token_r"

.field public static final JSON_KEY_TP_OFFER:Ljava/lang/String; = "tp_offer"

.field public static final JSON_KEY_T_IMP:Ljava/lang/String; = "t_imp"

.field public static final JSON_KEY_USER_ACTIVATION:Ljava/lang/String; = "user_activation"

.field public static final JSON_KEY_VCN:Ljava/lang/String; = "vcn"

.field public static final JSON_KEY_VIDEO_CHECK_TYPE:Ljava/lang/String; = "vck_t"

.field public static final JSON_KEY_VIDEO_COMPLETE_TIME:Ljava/lang/String; = "view_com_time"

.field public static final JSON_KEY_VIDEO_CTN_TYPE:Ljava/lang/String; = "vctn_t"

.field public static final JSON_KEY_VIDEO_LENGTHL:Ljava/lang/String; = "video_length"

.field public static final JSON_KEY_VIDEO_RESOLUTION:Ljava/lang/String; = "video_resolution"

.field public static final JSON_KEY_VIDEO_SIZE:Ljava/lang/String; = "video_size"

.field public static final JSON_KEY_VIDEO_URL:Ljava/lang/String; = "video_url"

.field public static final JSON_KEY_WATCH_MILE:Ljava/lang/String; = "watch_mile"

.field public static final JSON_KEY_WITHOUT_INSTALL_CHECK:Ljava/lang/String; = "wtick"

.field public static final JSON_NATIVE_VIDEO_AD_TRACKING:Ljava/lang/String; = "ad_tracking"

.field public static final JSON_NATIVE_VIDEO_CLICK:Ljava/lang/String; = "click"

.field public static final JSON_NATIVE_VIDEO_CLOSE:Ljava/lang/String; = "close"

.field public static final JSON_NATIVE_VIDEO_COMPLETE:Ljava/lang/String; = "complete"

.field public static final JSON_NATIVE_VIDEO_ENDCARD:Ljava/lang/String; = "endcard"

.field public static final JSON_NATIVE_VIDEO_ENDCARD_SHOW:Ljava/lang/String; = "endcard_show"

.field public static final JSON_NATIVE_VIDEO_ERROR:Ljava/lang/String; = "error"

.field public static final JSON_NATIVE_VIDEO_FIRST_QUARTILE:Ljava/lang/String; = "first_quartile"

.field public static final JSON_NATIVE_VIDEO_MIDPOINT:Ljava/lang/String; = "midpoint"

.field public static final JSON_NATIVE_VIDEO_MUTE:Ljava/lang/String; = "mute"

.field public static final JSON_NATIVE_VIDEO_PAUSE:Ljava/lang/String; = "pause"

.field public static final JSON_NATIVE_VIDEO_PLAY_PERCENTAGE:Ljava/lang/String; = "play_percentage"

.field public static final JSON_NATIVE_VIDEO_RESUME:Ljava/lang/String; = "resume"

.field public static final JSON_NATIVE_VIDEO_START:Ljava/lang/String; = "start"

.field public static final JSON_NATIVE_VIDEO_THIRD_QUARTILE:Ljava/lang/String; = "third_quartile"

.field public static final JSON_NATIVE_VIDEO_UNMUTE:Ljava/lang/String; = "unmute"

.field public static final JSON_NATIVE_VIDEO_VIDEO_CLICK:Ljava/lang/String; = "video_click"

.field public static final JSON_NATIVE_VIDOE_IMPRESSION:Ljava/lang/String; = "impression"

.field public static final KEY_ADCHOICE:Ljava/lang/String; = "adchoice"

.field public static final KEY_AD_TYPE:Ljava/lang/String; = "ad_type"

.field public static final KEY_IA_CACHE:Ljava/lang/String; = "ia_cache"

.field public static final KEY_IA_EXT1:Ljava/lang/String; = "ia_ext1"

.field public static final KEY_IA_EXT2:Ljava/lang/String; = "ia_ext2"

.field public static final KEY_IA_ICON:Ljava/lang/String; = "ia_icon"

.field public static final KEY_IA_ORI:Ljava/lang/String; = "ia_ori"

.field public static final KEY_IA_RST:Ljava/lang/String; = "ia_rst"

.field public static final KEY_IA_URL:Ljava/lang/String; = "ia_url"

.field public static final KEY_IS_CMPT_ENTRY:Ljava/lang/String; = "cmpt=1"

.field public static final KEY_IS_DOWNLOAD:Ljava/lang/String; = "is_download_zip"

.field public static final KEY_OC_TIME:Ljava/lang/String; = "oc_time"

.field public static final KEY_OC_TYPE:Ljava/lang/String; = "oc_type"

.field public static final KEY_OMID:Ljava/lang/String; = "omid"

.field public static final KEY_T_LIST:Ljava/lang/String; = "t_list"

.field public static final LANDING_TYPE_VALUE_OPEN_BROWSER:I = 0x1

.field public static final LANDING_TYPE_VALUE_OPEN_GP_BY_PACKAGE:I = 0x3

.field public static final LANDING_TYPE_VALUE_OPEN_WEBVIEW:I = 0x2

.field public static final LINK_TYPE_1:I = 0x1

.field public static final LINK_TYPE_2:I = 0x2

.field public static final LINK_TYPE_3:I = 0x3

.field public static final LINK_TYPE_4:I = 0x4

.field public static final LINK_TYPE_8:I = 0x8

.field public static final LINK_TYPE_9:I = 0x9

.field public static final LINK_TYPE_MINI_PROGRAM:I = 0xc

.field public static final NEW_INTERSTITIAL_DEFAULT_AD_SPACE_T:I = 0x1

.field public static final NEW_INTERSTITIAL_DEFAULT_CBD:I = -0x2

.field public static final NEW_INTERSTITIAL_DEFAULT_VST:I = -0x2

.field public static final PLAYABLE_ADS_WITHOUT_VIDEO:Ljava/lang/String; = "playable_ads_without_video"

.field public static final PLAYABLE_ADS_WITHOUT_VIDEO_DEFAULT:I = 0x1

.field public static final PLAYABLE_ADS_WITHOUT_VIDEO_ENDCARD:I = 0x2

.field public static final RETAR_GETING_IS:I = 0x1

.field public static final RETAR_GETING_NOT:I = 0x2

.field public static final RTINS_TYPE_DONE:I = 0x1

.field public static final RTINS_TYPE_NOT_DONE:I = 0x2

.field public static final TAG:Ljava/lang/String;

.field public static final VIDEO_END_TYPE:Ljava/lang/String; = "video_end_type"

.field public static final VIDEO_END_TYPE_BROWSER:I = 0x5

.field public static final VIDEO_END_TYPE_DEFAULT:I = 0x2

.field public static final VIDEO_END_TYPE_FINISH:I = 0x1

.field public static final VIDEO_END_TYPE_NATIVE:I = 0x64

.field public static final VIDEO_END_TYPE_REULSE:I = 0x2

.field public static final VIDEO_END_TYPE_VAST:I = 0x3

.field public static final VIDEO_END_TYPE_WEBVIEW:I = 0x4

.field private static final serialVersionUID:J = 0x1L


# instance fields
.field private CMPTEntryUrl:Ljava/lang/String;

.field private aabEntity:Lcom/mbridge/msdk/foundation/entity/AabEntity;

.field private adHtml:Ljava/lang/String;

.field private adSpaceT:I

.field private adType:I

.field private adZip:Ljava/lang/String;

.field private ad_url_list:Ljava/lang/String;

.field private adchoice:Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;

.field private advImp:Ljava/lang/String;

.field private aks:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private al:Ljava/lang/String;

.field private bannerHtml:Ljava/lang/String;

.field private bannerUrl:Ljava/lang/String;

.field private bidToken:Ljava/lang/String;

.field private bty:I

.field private cUA:I

.field private cVersionCode:J

.field private cacheLevel:I

.field private campaignIsFiltered:Z

.field private campaignUnitId:Ljava/lang/String;

.field private canStart2C1Anim:Z

.field private canStartMoreOfferAnim:Z

.field private cbd:I

.field private cbt:I

.field private clickInterval:I

.field private clickTimeOutInterval:I

.field private clickURL:Ljava/lang/String;

.field private click_mode:Ljava/lang/String;

.field private creativeId:J

.field private deepLinkUrl:Ljava/lang/String;

.field private dynamicTempCode:I

.field private encryptPrice:Ljava/lang/String;

.field private endScreenUrl:Ljava/lang/String;

.field private endcard_click_result:I

.field private endcard_url:Ljava/lang/String;

.field private ext_data:Ljava/lang/String;

.field private fac:I

.field private fca:I

.field private fcb:I

.field private flb:I

.field private flbSkipTime:I

.field private gifUrl:Ljava/lang/String;

.field private guidelines:Ljava/lang/String;

.field private hasMBTplMark:Z

.field private hasReportAdTrackPause:Z

.field private htmlUrl:Ljava/lang/String;

.field private ia_ext1:Ljava/lang/String;

.field private ia_ext2:Ljava/lang/String;

.field private iex:I

.field private imageSize:Ljava/lang/String;

.field private impUA:I

.field private impressionURL:Ljava/lang/String;

.field private interactiveCache:Ljava/lang/String;

.field private isAddSuccesful:I

.field private isBidCampaign:Z

.field private isCallBackImpression:Z

.field private isCallbacked:Z

.field private isClick:I

.field private isDeleted:I

.field private isDownLoadZip:I

.field private isDynamicView:Z

.field private isMraid:Z

.field private isReady:Z

.field private isReport:Z

.field private isReportClick:Z

.field public isRewardPopViewShowed:Z

.field private isTimeoutCheckVideoStatus:I

.field private jmPd:I

.field private jumpResult:Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

.field private k:Ljava/lang/String;

.field private keyIaIcon:Ljava/lang/String;

.field private keyIaOri:I

.field private keyIaRst:I

.field private keyIaUrl:Ljava/lang/String;

.field private label:Ljava/lang/String;

.field private landingType:Ljava/lang/String;

.field private linkType:I

.field private loadTimeoutState:I

.field public mMoreOfferImpShow:Z

.field private maitve:I

.field private maitve_src:Ljava/lang/String;

.field private mediaViewHolder:Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;

.field private mof_template_url:Ljava/lang/String;

.field private mof_tplid:I

.field private moreOfferJsonData:Ljava/lang/String;

.field private mp:Ljava/lang/String;

.field private mraid:Ljava/lang/String;

.field private nativeVideoTracking:Lcom/mbridge/msdk/foundation/entity/l;

.field private nativeVideoTrackingString:Ljava/lang/String;

.field private noticeUrl:Ljava/lang/String;

.field private nscpt:I

.field private nvT2:I

.field private oc_time:I

.field private oc_type:I

.field private offerType:I

.field private omid:Ljava/lang/String;

.field private onlyImpressionURL:Ljava/lang/String;

.field private pkgSource:Ljava/lang/String;

.field private placementId:Ljava/lang/String;

.field private playable_ads_without_video:I

.field private plct:J

.field private plctb:J

.field private pv_urls:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private q:Ljava/lang/String;

.field private r:Ljava/lang/String;

.field private readyState:I

.field private ready_rate:I

.field private req_ext_data:Ljava/lang/String;

.field private requestId:Ljava/lang/String;

.field private requestIdNotice:Ljava/lang/String;

.field private retarget_offer:I

.field private rewardAmount:I

.field private rewardPlayStatus:I

.field public rewardPlus:Lcom/mbridge/msdk/foundation/entity/RewardPlus;

.field private rewardTemplateMode:Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

.field private reward_name:Ljava/lang/String;

.field private rsIgnoreCheckRule:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private rtinsType:I

.field private spareOfferFlag:I

.field private t_imp:I

.field private t_list:Ljava/lang/String;

.field private tab:I

.field private template:I

.field private tokenRule:I

.field private tpOffer:I

.field private ts:J

.field private userActivation:Z

.field private vcn:I

.field private videoCheckType:I

.field private videoCompleteTime:I

.field private videoCtnType:I

.field public videoMD5Value:Ljava/lang/String;

.field private videoPlayProgress:I

.field private videoResolution:Ljava/lang/String;

.field private videoSize:I

.field private videoUrlEncode:Ljava/lang/String;

.field private video_end_type:I

.field private vst:I

.field private watchMile:I

.field private wtick:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 34
    const-class v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 5

    .line 32
    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;-><init>()V

    const/4 v0, 0x1

    .line 35
    iput v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->readyState:I

    const-string v1, ""

    .line 41
    iput-object v1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->adZip:Ljava/lang/String;

    .line 42
    iput-object v1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->adHtml:Ljava/lang/String;

    const/4 v2, 0x0

    .line 43
    iput-boolean v2, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isReady:Z

    .line 47
    iput v2, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->tpOffer:I

    .line 48
    iput v2, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->fac:I

    const/4 v3, -0x2

    .line 143
    iput v3, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->cbd:I

    .line 149
    iput v3, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->vst:I

    const-wide/16 v3, 0x0

    .line 175
    iput-wide v3, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->plct:J

    .line 176
    iput-wide v3, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->plctb:J

    .line 178
    iput-object v1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->bannerUrl:Ljava/lang/String;

    .line 179
    iput-object v1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->bannerHtml:Ljava/lang/String;

    .line 180
    iput-wide v3, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->creativeId:J

    .line 183
    iput v2, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->vcn:I

    .line 184
    iput v2, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->tokenRule:I

    .line 185
    iput-object v1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->encryptPrice:Ljava/lang/String;

    .line 187
    iput-boolean v2, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView:Z

    .line 189
    iput v2, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->dynamicTempCode:I

    .line 191
    iput-boolean v2, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->campaignIsFiltered:Z

    .line 207
    iput v2, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->videoCompleteTime:I

    const/4 v3, -0x1

    .line 288
    iput v3, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->spareOfferFlag:I

    .line 456
    iput v2, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->oc_type:I

    .line 522
    iput-object v1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->moreOfferJsonData:Ljava/lang/String;

    .line 621
    iput v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->impUA:I

    .line 622
    iput v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->cUA:I

    const/4 v4, 0x6

    .line 649
    iput v4, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->nvT2:I

    .line 673
    iput v3, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->tab:I

    .line 675
    iput-object v1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->impressionURL:Ljava/lang/String;

    .line 676
    iput-object v1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->noticeUrl:Ljava/lang/String;

    .line 678
    iput-object v1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->clickURL:Ljava/lang/String;

    .line 680
    iput v2, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->wtick:I

    .line 682
    iput-object v1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->deepLinkUrl:Ljava/lang/String;

    .line 683
    iput-boolean v2, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->userActivation:Z

    .line 684
    iput-object v1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->onlyImpressionURL:Ljava/lang/String;

    .line 686
    iput-object v1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->imageSize:Ljava/lang/String;

    .line 710
    iput-boolean v2, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isCallBackImpression:Z

    .line 715
    iput-object v1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->videoUrlEncode:Ljava/lang/String;

    .line 769
    iput-object v1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->bidToken:Ljava/lang/String;

    const/4 v4, 0x2

    .line 778
    iput v4, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->video_end_type:I

    .line 789
    iput-object v1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->videoMD5Value:Ljava/lang/String;

    .line 792
    iput v3, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->ready_rate:I

    .line 802
    iput v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->nscpt:I

    .line 814
    iput v2, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->loadTimeoutState:I

    .line 913
    iput v4, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->clickTimeOutInterval:I

    .line 965
    iput v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->playable_ads_without_video:I

    .line 2733
    iput-boolean v2, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->hasReportAdTrackPause:Z

    const/4 v1, 0x0

    .line 2976
    iput-object v1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->omid:Ljava/lang/String;

    .line 3023
    iput v4, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->videoCheckType:I

    .line 3024
    iput v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->videoCtnType:I

    .line 3025
    iput v3, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isTimeoutCheckVideoStatus:I

    .line 3110
    iput-boolean v2, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->canStart2C1Anim:Z

    .line 3120
    iput-boolean v2, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->canStartMoreOfferAnim:Z

    .line 3132
    iput-boolean v2, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->mMoreOfferImpShow:Z

    .line 3134
    iput v2, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->videoPlayProgress:I

    .line 3144
    iput-boolean v2, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isRewardPopViewShowed:Z

    return-void
.end method

.method public static TrackingStr2Object(Ljava/lang/String;)Lcom/mbridge/msdk/foundation/entity/l;
    .locals 3

    const/4 v0, 0x0

    .line 2112
    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 2113
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 2114
    new-instance p0, Lcom/mbridge/msdk/foundation/entity/l;

    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/entity/l;-><init>()V

    const-string v2, "impression"

    .line 2115
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    .line 2116
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->processNativeVideoTrackingArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/foundation/entity/l;->r([Ljava/lang/String;)V

    const-string v2, "start"

    .line 2118
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    .line 2119
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->processNativeVideoTrackingArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/foundation/entity/l;->g([Ljava/lang/String;)V

    const-string v2, "first_quartile"

    .line 2121
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    .line 2122
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->processNativeVideoTrackingArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/foundation/entity/l;->h([Ljava/lang/String;)V

    const-string v2, "midpoint"

    .line 2124
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    .line 2125
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->processNativeVideoTrackingArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/foundation/entity/l;->i([Ljava/lang/String;)V

    const-string v2, "third_quartile"

    .line 2127
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    .line 2128
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->processNativeVideoTrackingArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/foundation/entity/l;->j([Ljava/lang/String;)V

    const-string v2, "complete"

    .line 2130
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    .line 2131
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->processNativeVideoTrackingArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/foundation/entity/l;->k([Ljava/lang/String;)V

    const-string v2, "play_percentage"

    .line 2133
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    .line 2134
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->parsePlayCentage(Lorg/json/JSONArray;)Ljava/util/List;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/foundation/entity/l;->a(Ljava/util/List;)V

    const-string v2, "mute"

    .line 2136
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    .line 2137
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->processNativeVideoTrackingArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/foundation/entity/l;->l([Ljava/lang/String;)V

    const-string v2, "unmute"

    .line 2139
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    .line 2140
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->processNativeVideoTrackingArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/foundation/entity/l;->m([Ljava/lang/String;)V

    const-string v2, "click"

    .line 2142
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    .line 2143
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->processNativeVideoTrackingArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/foundation/entity/l;->n([Ljava/lang/String;)V

    const-string v2, "pause"

    .line 2145
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    .line 2146
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->processNativeVideoTrackingArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/foundation/entity/l;->o([Ljava/lang/String;)V

    const-string v2, "resume"

    .line 2148
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    .line 2149
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->processNativeVideoTrackingArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/foundation/entity/l;->p([Ljava/lang/String;)V

    const-string v2, "error"

    .line 2151
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    .line 2152
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->processNativeVideoTrackingArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/foundation/entity/l;->q([Ljava/lang/String;)V

    const-string v2, "endcard"

    .line 2154
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    .line 2155
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->processNativeVideoTrackingArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/foundation/entity/l;->s([Ljava/lang/String;)V

    const-string v2, "close"

    .line 2157
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    .line 2158
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->processNativeVideoTrackingArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/foundation/entity/l;->u([Ljava/lang/String;)V

    const-string v2, "endcard_show"

    .line 2160
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    .line 2161
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->processNativeVideoTrackingArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/foundation/entity/l;->t([Ljava/lang/String;)V

    const-string v2, "video_click"

    .line 2163
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    .line 2164
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->processNativeVideoTrackingArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/foundation/entity/l;->v([Ljava/lang/String;)V

    const-string v2, "impression_t2"

    .line 2166
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    .line 2167
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->processNativeVideoTrackingArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/foundation/entity/l;->f([Ljava/lang/String;)V

    const-string v2, "dropout_track"

    .line 2169
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    .line 2170
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->processNativeVideoTrackingArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/foundation/entity/l;->a([Ljava/lang/String;)V

    const-string v2, "plycmpt_track"

    .line 2172
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    .line 2173
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->processNativeVideoTrackingArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/foundation/entity/l;->b([Ljava/lang/String;)V

    .line 2174
    invoke-static {v1, p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->trackingStr2Object(Lorg/json/JSONObject;Lcom/mbridge/msdk/foundation/entity/l;)Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object p0
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    :cond_0
    return-object v0
.end method

.method public static campaignToJsonObject(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lorg/json/JSONObject;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 2265
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 2266
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v1

    const-string v2, "id"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2267
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getFlb()I

    move-result v1

    const-string v2, "flb"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2268
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getFlbSkipTime()I

    move-result v1

    const-string v2, "flb_skiptime"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2269
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdSpaceT()I

    move-result v1

    const-string v2, "adspace_t"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2270
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVst()I

    move-result v1

    const-string v2, "vst"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2271
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCbd()I

    move-result v1

    const-string v2, "cbd"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2272
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 2273
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v1

    const-string v2, "unitId"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2276
    :cond_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getExt_data()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 2278
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getExt_data()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v2, "ext_data"

    .line 2279
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 2281
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    .line 2284
    :cond_1
    :goto_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getReq_ext_data()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 2286
    :try_start_1
    new-instance v1, Lorg/json/JSONObject;

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getReq_ext_data()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v2, "req_ext_data"

    .line 2287
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v1

    .line 2289
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    .line 2293
    :cond_2
    :goto_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPv_urls()Ljava/util/List;

    move-result-object v1

    if-eqz v1, :cond_4

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPv_urls()Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_4

    .line 2295
    :try_start_2
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    .line 2296
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPv_urls()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_2
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_3

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 2297
    invoke-virtual {v1, v3}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_2

    :cond_3
    const-string v2, "pv_urls"

    .line 2299
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_2
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_2

    goto :goto_3

    :catch_2
    move-exception v1

    .line 2301
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    .line 2306
    :cond_4
    :goto_3
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMof_template_url()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    .line 2307
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMof_tplid()I

    move-result v1

    const-string v2, "mof_tplid"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2308
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMof_template_url()Ljava/lang/String;

    move-result-object v1

    const-string v2, "mof_template_url"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2309
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNscpt()I

    move-result v1

    const-string v2, "nscpt"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2311
    :cond_5
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getReady_rate()I

    move-result v1

    const-string v2, "ready_rate"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2312
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v1

    const-string v2, "title"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2313
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppDesc()Ljava/lang/String;

    move-result-object v1

    const-string v2, "desc"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2314
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v1

    const-string v2, "package_name"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2315
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRtinsType()I

    move-result v1

    const-string v2, "rtins_type"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2316
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object v1

    const-string v2, "icon_url"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2317
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v1

    const-string v2, "image_url"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2318
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getSize()Ljava/lang/String;

    move-result-object v1

    const-string v2, "app_size"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2319
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageSize()Ljava/lang/String;

    move-result-object v1

    const-string v2, "image_size"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2320
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImpressionURL()Ljava/lang/String;

    move-result-object v1

    const-string v2, "impression_url"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2321
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v1

    const-string v2, "click_url"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2322
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardPlus()Lcom/mbridge/msdk/foundation/entity/RewardPlus;

    move-result-object v1

    if-eqz v1, :cond_6

    .line 2323
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardPlus()Lcom/mbridge/msdk/foundation/entity/RewardPlus;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/RewardPlus;->toJsonObject()Lorg/json/JSONObject;

    move-result-object v1

    const-string v2, "rw_pl"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2325
    :cond_6
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getWtick()I

    move-result v1

    const-string v2, "wtick"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2326
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getDeepLinkURL()Ljava/lang/String;

    move-result-object v1

    const-string v2, "deep_link"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2327
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getUserActivation()Z

    move-result v1

    const-string v2, "user_activation"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    .line 2328
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNoticeUrl()Ljava/lang/String;

    move-result-object v1

    const-string v2, "notice_url"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2329
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTemplate()I

    move-result v1

    const-string v2, "template"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2330
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getType()I

    move-result v1

    const-string v2, "ad_source_id"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2331
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getFca()I

    move-result v1

    const-string v2, "fca"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2332
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getFcb()I

    move-result v1

    const-string v2, "fcb"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2333
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRating()D

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v2, ""

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "rating"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2334
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNumberRating()I

    move-result v1

    const-string v2, "number_rating"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2335
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClick_mode()Ljava/lang/String;

    move-result-object v1

    const-string v2, "click_mode"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2337
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLandingType()Ljava/lang/String;

    move-result-object v1

    const-string v2, "landing_type"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2338
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result v1

    const-string v2, "link_type"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2340
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickInterval()I

    move-result v1

    const-string v2, "c_ct"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2341
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdCall()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ctatext"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2342
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getEndcard_click_result()I

    move-result v1

    const-string v2, "endcard_click_result"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2344
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRetarget_offer()I

    move-result v1

    const-string v2, "retarget_offer"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2346
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v1

    const-string v2, "video_url"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2347
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoLength()I

    move-result v1

    const-string v2, "video_length"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2348
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoSize()I

    move-result v1

    const-string v2, "video_size"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2349
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoResolution()Ljava/lang/String;

    move-result-object v1

    const-string v2, "video_resolution"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2351
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getWatchMile()I

    move-result v1

    const-string v2, "watch_mile"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2352
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAd_url_list()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ad_url_list"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2353
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOnlyImpressionURL()Ljava/lang/String;

    move-result-object v1

    const-string v2, "only_impression_url"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2354
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBty()I

    move-result v1

    const-string v2, "ctype"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2355
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTImp()I

    move-result v1

    const-string v2, "t_imp"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2356
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdvImp()Ljava/lang/String;

    move-result-object v1

    const-string v2, "adv_imp"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2358
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getHtmlUrl()Ljava/lang/String;

    move-result-object v1

    const-string v2, "html_url"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2359
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getEndScreenUrl()Ljava/lang/String;

    move-result-object v1

    const-string v2, "end_screen_url"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2360
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getGuidelines()Ljava/lang/String;

    move-result-object v1

    const-string v2, "guidelines"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2361
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOfferType()I

    move-result v1

    const-string v2, "offer_type"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2362
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardAmount()I

    move-result v1

    const-string v2, "reward_amount"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2363
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardName()Ljava/lang/String;

    move-result-object v1

    const-string v2, "reward_name"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2364
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getGifUrl()Ljava/lang/String;

    move-result-object v1

    const-string v2, "gif_url"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2366
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTrackingString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_7

    .line 2367
    new-instance v1, Lorg/json/JSONObject;

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTrackingString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v2, "ad_tracking"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2369
    :cond_7
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideo_end_type()I

    move-result v1

    const-string v2, "video_end_type"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2370
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v1

    const-string v2, "endcard_url"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2371
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlayable_ads_without_video()I

    move-result v1

    const-string v2, "playable_ads_without_video"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    if-eqz p0, :cond_8

    .line 2372
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v1

    if-eqz v1, :cond_8

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->a()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_8

    .line 2373
    new-instance v1, Lorg/json/JSONObject;

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->a()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v2, "rv"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2375
    :cond_8
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoMD5Value()Ljava/lang/String;

    move-result-object v1

    const-string v2, "md5_file"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2376
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickTimeOutInterval()I

    move-result v1

    const-string v2, "c_toi"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2377
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getcUA()I

    move-result v1

    const-string v2, "c_ua"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2378
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImpUA()I

    move-result v1

    const-string v2, "imp_ua"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2379
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getJmPd()I

    move-result v1

    const-string v2, "jm_pd"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2381
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getKeyIaIcon()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ia_icon"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2382
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getKeyIaRst()I

    move-result v1

    const-string v2, "ia_rst"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2383
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getKeyIaUrl()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ia_url"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2384
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getKeyIaOri()I

    move-result v1

    const-string v2, "ia_ori"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2385
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v1

    const-string v2, "ad_type"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2386
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIa_ext1()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ia_ext1"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2387
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIa_ext2()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ia_ext2"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2388
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIsDownLoadZip()I

    move-result v1

    const-string v2, "is_download_zip"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2389
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getInteractiveCache()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ia_cache"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2391
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOc_type()I

    move-result v1

    const-string v2, "oc_type"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2392
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOc_time()I

    move-result v1

    const-string v2, "oc_time"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2393
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getT_list()Ljava/lang/String;

    move-result-object v1

    const-string v2, "t_list"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2395
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdchoice()Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;

    move-result-object v1

    if-eqz v1, :cond_9

    .line 2397
    new-instance v2, Lorg/json/JSONObject;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->c()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v2, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v1, "adchoice"

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2399
    :cond_9
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlct()J

    move-result-wide v1

    const-string v3, "plct"

    invoke-virtual {v0, v3, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    .line 2400
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlctb()J

    move-result-wide v1

    const-string v3, "plctb"

    invoke-virtual {v0, v3, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    .line 2402
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOmid()Ljava/lang/String;

    move-result-object v1

    const-string v2, "omid"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2404
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCreativeId()J

    move-result-wide v1

    const-string v3, "creative_id"

    invoke-virtual {v0, v3, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    .line 2405
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBannerHtml()Ljava/lang/String;

    move-result-object v1

    const-string v2, "cam_html"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2406
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBannerUrl()Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_a

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBannerUrl()Ljava/lang/String;

    move-result-object v1

    goto :goto_4

    :cond_a
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdZip()Ljava/lang/String;

    move-result-object v1

    :goto_4
    const-string v2, "cam_tpl_url"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2408
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMraid()Ljava/lang/String;

    move-result-object v1

    const-string v2, "mraid"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2409
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMraid()Ljava/lang/String;

    move-result-object v1

    const-string v2, "mraid_src"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2411
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTimestamp()J

    move-result-wide v1

    const-string v3, "timestamp"

    invoke-virtual {v0, v3, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    .line 2413
    iget-boolean v1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign:Z

    const-string v2, "hb"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    .line 2415
    sget-object v1, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlacementId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2417
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMaitve()I

    move-result v1

    const-string v2, "maitve"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2418
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMaitve_src()Ljava/lang/String;

    move-result-object v1

    const-string v2, "maitve_src"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2420
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVcn()I

    move-result v1

    const-string v2, "vcn"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2421
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTokenRule()I

    move-result v1

    const-string v2, "token_r"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2422
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getEncryptPrice()Ljava/lang/String;

    move-result-object v1

    const-string v2, "encrypt_p"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2423
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoCompleteTime()I

    move-result v1

    const-string v2, "view_com_time"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2426
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v1

    const-string v2, "rs_ignc_r"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2427
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoCheckType()I

    move-result v1

    const-string v2, "vck_t"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2428
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoCtnType()I

    move-result v1

    const-string v2, "vctn_t"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2429
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTpOffer()I

    move-result v1

    const-string v2, "tp_offer"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2430
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getFac()I

    move-result v1

    const-string v2, "fac"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :try_start_3
    const-string v1, "misk_spt"

    .line 2433
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->e()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "misk_spt_det"

    .line 2434
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->f()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_3
    .catch Lorg/json/JSONException; {:try_start_3 .. :try_end_3} :catch_3

    .line 2438
    :catch_3
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAabEntity()Lcom/mbridge/msdk/foundation/entity/AabEntity;

    move-result-object v1

    if-eqz v1, :cond_b

    .line 2439
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAabEntity()Lcom/mbridge/msdk/foundation/entity/AabEntity;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/AabEntity;->toJson()Lorg/json/JSONObject;

    move-result-object v1

    const-string v2, "aab"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2441
    :cond_b
    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->campaignToJsonObject(Lorg/json/JSONObject;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lorg/json/JSONObject;

    move-result-object p0

    return-object p0
.end method

.method public static campaignToJsonObject(Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZ)Lorg/json/JSONObject;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 2258
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->campaignToJsonObject(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lorg/json/JSONObject;

    move-result-object p0

    const-string v0, "isReady"

    .line 2259
    invoke-virtual {p0, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string p1, "expired"

    .line 2260
    invoke-virtual {p0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    return-object p0
.end method

.method private checkAndReSetDynamicViewState(Ljava/lang/String;)V
    .locals 1

    .line 2524
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 2527
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->mof_template_url:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView:Z

    if-eqz v0, :cond_1

    return-void

    .line 2530
    :cond_1
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->h(Ljava/lang/String;)Z

    move-result v0

    .line 2531
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->l(Ljava/lang/String;)I

    move-result p1

    if-eqz v0, :cond_2

    const/4 v0, 0x1

    .line 2533
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setDynamicView(Z)V

    .line 2534
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setDynamicTempCode(I)V

    :cond_2
    return-void
.end method

.method private static dealV5Temp(Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 6

    const-string v0, "tmp_ids"

    .line 1829
    :try_start_0
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 1830
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 1831
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-lez v2, :cond_1

    .line 1832
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->remove(Ljava/lang/String;)Ljava/lang/Object;

    const/4 v0, 0x0

    .line 1833
    :goto_0
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v0, v2, :cond_1

    .line 1834
    invoke-virtual {v1, v0}, Lorg/json/JSONArray;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 1835
    invoke-static {}, Lcom/mbridge/msdk/foundation/db/a/a;->a()Lcom/mbridge/msdk/foundation/db/a/a;

    move-result-object v3

    invoke-virtual {v3, v2}, Lcom/mbridge/msdk/foundation/db/a/a;->a(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1837
    invoke-virtual {v2}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v3

    .line 1838
    :goto_1
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_0

    .line 1839
    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 1840
    invoke-virtual {v2, v4}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {p0, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :catch_0
    const/4 p0, 0x0

    :cond_1
    return-object p0
.end method

.method private generateAdImpression(Ljava/lang/String;)Ljava/util/Map;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 2196
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_1

    .line 2198
    :try_start_0
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0, p1}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 2199
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result p1

    if-lez p1, :cond_1

    .line 2200
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    const/4 v1, 0x0

    .line 2201
    :goto_0
    :try_start_1
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v1, v2, :cond_0

    .line 2202
    invoke-virtual {v0, v1}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v2

    const-string v3, "sec"

    .line 2203
    invoke-virtual {v2, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v3

    const-string v4, "url"

    .line 2204
    invoke-virtual {v2, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 2205
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-interface {p1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    move-object v1, p1

    goto :goto_2

    :catch_0
    move-exception v0

    move-object v1, p1

    goto :goto_1

    :catch_1
    move-exception v0

    .line 2209
    :goto_1
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_2
    return-object v1
.end method

.method private static isBreakCampainOrSetItByEndCard(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)Z
    .locals 3

    .line 1566
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    .line 1570
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->n()I

    move-result v0

    const/4 v2, 0x2

    if-ne v0, v2, :cond_1

    .line 1571
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    const-string v2, "dpwgl"

    .line 1572
    invoke-virtual {v0, v2}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v2, "1"

    invoke-virtual {v2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 p0, 0x1

    return p0

    .line 1577
    :cond_1
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setendcard_url(Ljava/lang/String;)V

    return v1
.end method

.method public static parseCampaign(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLcom/mbridge/msdk/foundation/entity/CampaignUnit;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 7

    const-string v6, ""

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move v4, p4

    move-object v5, p5

    .line 1854
    invoke-static/range {v0 .. v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->parseCampaign(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLcom/mbridge/msdk/foundation/entity/CampaignUnit;Ljava/lang/String;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p0

    return-object p0
.end method

.method public static parseCampaign(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLcom/mbridge/msdk/foundation/entity/CampaignUnit;Ljava/lang/String;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 17

    move-object/from16 v0, p5

    const-string v1, "aab"

    const-string v2, "cam_html"

    const-string v3, "gif_url"

    const-string v4, "nv_t2"

    const-string v5, "md5_file"

    const-string v6, "number_rating"

    const-string v7, "rating"

    const-string v8, ""

    const-string v9, "omid"

    .line 1859
    invoke-static/range {p0 .. p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->dealV5Temp(Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object v10

    if-eqz v10, :cond_19

    .line 1862
    :try_start_0
    new-instance v12, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_5

    :try_start_1
    const-string v13, "aks"

    .line 1863
    invoke-virtual {v10, v13}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    .line 1864
    invoke-static {v13}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v14

    if-nez v14, :cond_1

    .line 1865
    new-instance v14, Lorg/json/JSONObject;

    invoke-direct {v14, v13}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 1866
    invoke-virtual {v14}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v13

    .line 1867
    new-instance v15, Ljava/util/HashMap;

    invoke-direct {v15}, Ljava/util/HashMap;-><init>()V

    :goto_0
    if-eqz v13, :cond_0

    .line 1868
    invoke-interface {v13}, Ljava/util/Iterator;->hasNext()Z

    move-result v16

    if-eqz v16, :cond_0

    .line 1869
    invoke-interface {v13}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v16

    move-object/from16 v11, v16

    check-cast v11, Ljava/lang/String;

    move-object/from16 v16, v13

    .line 1870
    invoke-virtual {v14, v11}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    .line 1871
    invoke-virtual {v15, v11, v13}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-object/from16 v13, v16

    goto :goto_0

    .line 1873
    :cond_0
    invoke-virtual {v12, v15}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAks(Ljava/util/HashMap;)V

    .line 1877
    :cond_1
    invoke-static/range {p6 .. p6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v11

    const/4 v13, 0x1

    if-nez v11, :cond_2

    move-object/from16 v11, p6

    .line 1878
    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setBidToken(Ljava/lang/String;)V

    .line 1879
    invoke-virtual {v12, v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIsBidCampaign(Z)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_4

    :cond_2
    :try_start_2
    const-string v14, "ready_rate"

    const/4 v15, -0x1

    .line 1883
    invoke-virtual {v10, v14, v15}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v14

    invoke-virtual {v12, v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setReady_rate(I)V

    const-string v14, "ext_data"

    .line 1884
    invoke-virtual {v10, v14}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v14

    if-eqz v14, :cond_3

    .line 1887
    invoke-virtual {v14}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v12, v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setExt_data(Ljava/lang/String;)V

    :cond_3
    const-string v14, "mof_tplid"

    .line 1890
    invoke-virtual {v10, v14}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v14

    invoke-virtual {v12, v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setMof_tplid(I)V

    const-string v14, "mof_template_url"

    .line 1891
    invoke-virtual {v10, v14}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v12, v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setMof_template_url(Ljava/lang/String;)V

    const-string v14, "nscpt"

    .line 1892
    invoke-virtual {v10, v14}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v14

    invoke-virtual {v12, v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setNscpt(I)V

    .line 1893
    new-instance v14, Lorg/json/JSONArray;

    invoke-direct {v14}, Lorg/json/JSONArray;-><init>()V

    const-string v14, "pv_urls"

    .line 1894
    invoke-virtual {v10, v14}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v14

    if-eqz v14, :cond_4

    .line 1896
    invoke-virtual {v14}, Lorg/json/JSONArray;->length()I

    move-result v15

    if-lez v15, :cond_4

    .line 1897
    new-instance v15, Ljava/util/ArrayList;

    invoke-virtual {v14}, Lorg/json/JSONArray;->length()I

    move-result v13

    invoke-direct {v15, v13}, Ljava/util/ArrayList;-><init>(I)V

    const/4 v13, 0x0

    .line 1898
    :goto_1
    invoke-virtual {v14}, Lorg/json/JSONArray;->length()I

    move-result v11

    if-ge v13, v11, :cond_5

    .line 1899
    invoke-virtual {v14, v13}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v11

    invoke-interface {v15, v11}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v13, v13, 0x1

    goto :goto_1

    :cond_4
    const/4 v15, 0x0

    .line 1902
    :cond_5
    invoke-virtual {v12, v15}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPv_urls(Ljava/util/List;)V

    const-string v11, "req_ext_data"

    .line 1903
    invoke-virtual {v10, v11}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v11

    if-eqz v11, :cond_6

    .line 1905
    invoke-virtual {v11}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setReq_ext_data(Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    :catch_0
    :cond_6
    :try_start_3
    const-string v11, "id"

    .line 1910
    invoke-virtual {v10, v11}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setId(Ljava/lang/String;)V

    const-string v11, "title"

    .line 1911
    invoke-virtual {v10, v11}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAppName(Ljava/lang/String;)V

    const-string v11, "unitId"

    .line 1912
    invoke-virtual {v10, v11, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignUnitId(Ljava/lang/String;)V

    const-string v11, "desc"

    .line 1913
    invoke-virtual {v10, v11}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAppDesc(Ljava/lang/String;)V

    const-string v11, "package_name"

    .line 1914
    invoke-virtual {v10, v11}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPackageName(Ljava/lang/String;)V

    const-string v11, "rtins_type"

    .line 1915
    invoke-virtual {v10, v11}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v11

    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRtinsType(I)V

    const-string v11, "icon_url"

    .line 1916
    invoke-virtual {v10, v11}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIconUrl(Ljava/lang/String;)V

    const-string v11, "image_url"

    .line 1917
    invoke-virtual {v10, v11}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setImageUrl(Ljava/lang/String;)V

    const-string v11, "app_size"

    .line 1918
    invoke-virtual {v10, v11}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setSize(Ljava/lang/String;)V

    const-string v11, "image_size"

    .line 1919
    invoke-virtual {v10, v11}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setImageSize(Ljava/lang/String;)V

    const-string v11, "impression_url"

    .line 1920
    invoke-virtual {v10, v11}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    invoke-static {v0, v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->replaceValueByKey(Lcom/mbridge/msdk/foundation/entity/CampaignUnit;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setImpressionURL(Ljava/lang/String;)V

    const-string v11, "click_url"

    .line 1921
    invoke-virtual {v10, v11}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    invoke-static {v0, v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->replaceValueByKey(Lcom/mbridge/msdk/foundation/entity/CampaignUnit;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setClickURL(Ljava/lang/String;)V

    const-string v11, "rw_pl"

    .line 1922
    invoke-virtual {v10, v11}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    invoke-static {v11}, Lcom/mbridge/msdk/foundation/entity/RewardPlus;->parseByString(Ljava/lang/String;)Lcom/mbridge/msdk/foundation/entity/RewardPlus;

    move-result-object v11

    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRewardPlus(Lcom/mbridge/msdk/foundation/entity/RewardPlus;)V

    const-string v11, "wtick"

    .line 1923
    invoke-virtual {v10, v11}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v11

    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setWtick(I)V

    const-string v11, "deep_link"

    .line 1924
    invoke-virtual {v10, v11}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    invoke-static {v0, v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->replaceValueByKey(Lcom/mbridge/msdk/foundation/entity/CampaignUnit;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setDeepLinkUrl(Ljava/lang/String;)V

    const-string v11, "user_activation"

    const/4 v13, 0x0

    .line 1925
    invoke-virtual {v10, v11, v13}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;Z)Z

    move-result v11

    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setUserActivation(Z)V

    const-string v11, "notice_url"

    .line 1926
    invoke-virtual {v10, v11}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    invoke-static {v0, v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->replaceValueByKey(Lcom/mbridge/msdk/foundation/entity/CampaignUnit;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setNoticeUrl(Ljava/lang/String;)V

    const-string v11, "template"

    .line 1927
    invoke-virtual {v10, v11}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v11

    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setTemplate(I)V

    const-string v11, "ad_source_id"

    const/4 v13, 0x1

    .line 1928
    invoke-virtual {v10, v11, v13}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v11

    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setType(I)V

    const-string v11, "fca"

    .line 1929
    invoke-virtual {v10, v11}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v11

    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setFca(I)V

    const-string v11, "fcb"

    .line 1930
    invoke-virtual {v10, v11}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v11

    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setFcb(I)V

    const-string v11, "endcard_click_result"

    .line 1931
    invoke-virtual {v10, v11}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v11

    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setEndcard_click_result(I)V

    .line 1932
    invoke-virtual {v10, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    invoke-static {v11}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v11

    if-nez v11, :cond_7

    const-string v11, "0"

    .line 1933
    invoke-virtual {v10, v7, v11}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v13

    invoke-virtual {v12, v13, v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRating(D)V

    .line 1935
    :cond_7
    invoke-virtual {v10, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_8

    const v7, 0x51615

    .line 1936
    invoke-virtual {v10, v6, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setNumberRating(I)V

    :cond_8
    const-string v6, "click_mode"

    .line 1938
    invoke-virtual {v10, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setClick_mode(Ljava/lang/String;)V

    const-string v6, "landing_type"

    .line 1940
    invoke-virtual {v10, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setLandingType(Ljava/lang/String;)V

    const-string v6, "link_type"

    const/4 v7, 0x4

    .line 1941
    invoke-virtual {v10, v6, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setLinkType(I)V

    const-string v6, "c_ct"

    .line 1943
    invoke-virtual {v10, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setClickInterval(I)V

    const-string v6, "ctatext"

    .line 1944
    invoke-virtual {v10, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAdCall(Ljava/lang/String;)V

    const-string v6, "ad_url_list"

    .line 1945
    invoke-virtual {v10, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAd_url_list(Ljava/lang/String;)V

    const-string v6, "retarget_offer"

    const/4 v7, 0x2

    .line 1946
    invoke-virtual {v10, v6, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRetarget_offer(I)V

    const-string v6, "video_url"

    .line 1948
    invoke-virtual {v10, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 1949
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v11

    if-nez v11, :cond_a

    if-eqz p4, :cond_9

    .line 1951
    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVideoUrlEncode(Ljava/lang/String;)V

    goto :goto_2

    .line 1953
    :cond_9
    invoke-static {v6}, Lcom/mbridge/msdk/foundation/tools/t;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 1954
    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVideoUrlEncode(Ljava/lang/String;)V

    :cond_a
    :goto_2
    const-string v6, "view_com_time"

    .line 1957
    invoke-virtual {v10, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVideoCompleteTime(I)V

    const-string v6, "video_length"

    .line 1958
    invoke-virtual {v10, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVideoLength(I)V

    const-string v6, "video_size"

    .line 1959
    invoke-virtual {v10, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVideoSize(I)V

    const-string v6, "video_resolution"

    .line 1960
    invoke-virtual {v10, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVideoResolution(Ljava/lang/String;)V

    const-string v6, "watch_mile"

    .line 1961
    invoke-virtual {v10, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setWatchMile(I)V

    .line 1963
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v13

    invoke-virtual {v12, v13, v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setTimestamp(J)V

    move-object/from16 v6, p1

    .line 1964
    invoke-static {v0, v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->replaceValueByKey(Lcom/mbridge/msdk/foundation/entity/CampaignUnit;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setOnlyImpressionURL(Ljava/lang/String;)V

    const-string v6, "ctype"

    .line 1966
    invoke-virtual {v10, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setBty(I)V

    const-string v6, "adv_imp"

    .line 1967
    invoke-virtual {v10, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAdvImp(Ljava/lang/String;)V

    const-string v6, "t_imp"

    .line 1968
    invoke-virtual {v10, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setTImp(I)V

    move-object/from16 v6, p2

    .line 1970
    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setHtmlUrl(Ljava/lang/String;)V

    move-object/from16 v6, p3

    .line 1971
    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setEndScreenUrl(Ljava/lang/String;)V

    const-string v6, "guidelines"

    .line 1972
    invoke-virtual {v10, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setGuidelines(Ljava/lang/String;)V

    const-string v6, "offer_type"

    .line 1973
    invoke-virtual {v10, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setOfferType(I)V

    const-string v6, "reward_name"

    .line 1974
    invoke-virtual {v10, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRewardName(Ljava/lang/String;)V

    const-string v6, "reward_amount"

    .line 1975
    invoke-virtual {v10, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRewardAmount(I)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_4

    :try_start_4
    const-string v6, "ad_tracking"

    .line 1979
    invoke-virtual {v10, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 1980
    invoke-static {v0, v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->replaceValueByKey(Lcom/mbridge/msdk/foundation/entity/CampaignUnit;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 1981
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v11

    if-nez v11, :cond_b

    .line 1982
    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setNativeVideoTrackingString(Ljava/lang/String;)V

    .line 1983
    invoke-static {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->TrackingStr2Object(Ljava/lang/String;)Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setNativeVideoTracking(Lcom/mbridge/msdk/foundation/entity/l;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1

    :catch_1
    :cond_b
    :try_start_5
    const-string v6, "video_end_type"

    .line 1989
    invoke-virtual {v10, v6, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVideo_end_type(I)V

    const-string v6, "endcard_url"

    .line 1990
    invoke-virtual {v10, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-static {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBreakCampainOrSetItByEndCard(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_c

    const/4 v6, 0x0

    return-object v6

    :cond_c
    const-string v6, "playable_ads_without_video"

    const/4 v11, 0x1

    .line 1993
    invoke-virtual {v10, v6, v11}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPlayable_ads_without_video(I)V

    .line 1995
    invoke-virtual {v10, v5}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_d

    .line 1996
    invoke-virtual {v10, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v12, v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVideoMD5Value(Ljava/lang/String;)V

    .line 1998
    :cond_d
    invoke-virtual {v10, v4}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_e

    .line 1999
    invoke-virtual {v10, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v12, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setNvT2(I)V

    .line 2001
    :cond_e
    invoke-virtual {v10, v3}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_f

    .line 2002
    invoke-virtual {v10, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setGifUrl(Ljava/lang/String;)V

    :cond_f
    const-string v3, "rv"

    .line 2004
    invoke-virtual {v10, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v3

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->a(Lorg/json/JSONObject;)Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRewardTemplateMode(Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;)V

    const-string v3, "c_toi"

    .line 2005
    invoke-virtual {v10, v3, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setClickTimeOutInterval(I)V

    const-string v3, "imp_ua"

    const/4 v4, 0x1

    .line 2006
    invoke-virtual {v10, v3, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setImpUA(I)V

    const-string v3, "c_ua"

    .line 2007
    invoke-virtual {v10, v3, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setcUA(I)V

    const-string v3, "jm_pd"

    .line 2008
    invoke-virtual {v10, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setJmPd(I)V

    const-string v3, "ia_icon"

    .line 2010
    invoke-virtual {v10, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setKeyIaIcon(Ljava/lang/String;)V

    const-string v3, "ia_rst"

    .line 2011
    invoke-virtual {v10, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setKeyIaRst(I)V

    const-string v3, "ia_url"

    .line 2012
    invoke-virtual {v10, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setKeyIaUrl(Ljava/lang/String;)V

    const-string v3, "ia_ori"

    .line 2013
    invoke-virtual {v10, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setKeyIaOri(I)V

    .line 2014
    invoke-virtual/range {p5 .. p5}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAdType()I

    move-result v0

    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAdType(I)V

    const-string v0, "tp_offer"

    .line 2015
    invoke-virtual {v10, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setTpOffer(I)V

    const-string v0, "fac"

    .line 2016
    invoke-virtual {v10, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setFac(I)V

    const-string v0, "ia_ext1"

    .line 2017
    invoke-virtual {v10, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIa_ext1(Ljava/lang/String;)V

    const-string v0, "ia_ext2"

    .line 2018
    invoke-virtual {v10, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIa_ext2(Ljava/lang/String;)V

    const-string v0, "is_download_zip"

    .line 2019
    invoke-virtual {v10, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIsDownLoadZip(I)V

    const-string v0, "ia_cache"

    .line 2020
    invoke-virtual {v10, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setInteractiveCache(Ljava/lang/String;)V

    const-string v0, "oc_time"

    .line 2022
    invoke-virtual {v10, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setOc_time(I)V

    const-string v0, "oc_type"

    .line 2023
    invoke-virtual {v10, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setOc_type(I)V

    const-string v0, "t_list"

    .line 2024
    invoke-virtual {v10, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setT_list(Ljava/lang/String;)V

    const-string v0, "adchoice"

    .line 2026
    invoke-virtual {v10, v0, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->a(Ljava/lang/String;)Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;

    move-result-object v0

    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAdchoice(Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;)V

    const-string v0, "plct"

    .line 2028
    invoke-virtual {v10, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v3

    invoke-virtual {v12, v3, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPlct(J)V

    const-string v0, "plctb"

    .line 2029
    invoke-virtual {v10, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v3

    invoke-virtual {v12, v3, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPlctb(J)V

    const-string v0, "creative_id"

    .line 2030
    invoke-virtual {v10, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v3

    invoke-virtual {v12, v3, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCreativeId(J)V

    const-string v0, "cam_tpl_url"

    .line 2032
    invoke-virtual {v10, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 2033
    invoke-static {v0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v3

    .line 2034
    invoke-virtual {v3}, Landroid/net/Uri;->getPath()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_11

    invoke-virtual {v3}, Landroid/net/Uri;->getPath()Ljava/lang/String;

    move-result-object v4

    const-string v5, ".zip"

    invoke-virtual {v4, v5}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_10

    invoke-virtual {v3}, Landroid/net/Uri;->getPath()Ljava/lang/String;

    move-result-object v3

    const-string v4, ".ZIP"

    invoke-virtual {v3, v4}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_11

    .line 2035
    :cond_10
    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAdZip(Ljava/lang/String;)V

    goto :goto_3

    .line 2037
    :cond_11
    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setBannerUrl(Ljava/lang/String;)V

    .line 2039
    :goto_3
    invoke-virtual {v10, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setBannerHtml(Ljava/lang/String;)V

    .line 2040
    invoke-virtual {v10, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAdHtml(Ljava/lang/String;)V

    const-string v0, "mraid"

    .line 2042
    invoke-virtual {v10, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 2043
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_12

    const/4 v2, 0x1

    .line 2044
    invoke-virtual {v12, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIsMraid(Z)V

    .line 2045
    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setMraid(Ljava/lang/String;)V

    :goto_4
    const/4 v2, 0x0

    goto :goto_5

    .line 2047
    :cond_12
    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdHtml()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_13

    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdHtml()Ljava/lang/String;

    move-result-object v0

    const-string v2, "<MBTPLMARK>"

    invoke-virtual {v0, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_13

    const/4 v2, 0x1

    .line 2048
    invoke-virtual {v12, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIsMraid(Z)V

    goto :goto_4

    :cond_13
    const/4 v2, 0x0

    .line 2050
    invoke-virtual {v12, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIsMraid(Z)V

    .line 2054
    :goto_5
    invoke-virtual {v10, v9}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    if-nez v0, :cond_15

    .line 2056
    invoke-virtual {v10, v9}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_14

    .line 2057
    invoke-virtual {v10, v9}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setOmid(Ljava/lang/String;)V

    goto :goto_6

    :cond_14
    const/4 v3, 0x0

    .line 2059
    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setOmid(Ljava/lang/String;)V

    goto :goto_6

    .line 2062
    :cond_15
    invoke-virtual {v0}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setOmid(Ljava/lang/String;)V

    .line 2065
    :goto_6
    sget-object v0, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    invoke-virtual {v10, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPlacementId(Ljava/lang/String;)V

    const-string v0, "maitve"

    .line 2067
    invoke-virtual {v10, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setMaitve(I)V

    const-string v0, "maitve_src"

    .line 2068
    invoke-virtual {v10, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setMaitve_src(Ljava/lang/String;)V

    const-string v0, "flb"

    .line 2069
    invoke-virtual {v10, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setFlb(I)V

    const-string v0, "cbd"

    const/4 v3, -0x2

    .line 2070
    invoke-virtual {v10, v0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCbd(I)V

    const-string v0, "vst"

    .line 2071
    invoke-virtual {v10, v0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVst(I)V

    const-string v0, "adspace_t"

    const/4 v3, 0x1

    .line 2072
    invoke-virtual {v10, v0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAdSpaceT(I)V

    const-string v0, "flb_skiptime"

    .line 2073
    invoke-virtual {v10, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setFlbSkipTime(I)V

    .line 2074
    invoke-static {v10, v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->parseCampaign(Lorg/json/JSONObject;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v11
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_4

    .line 2078
    :try_start_6
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImpressionURL()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v3, v4}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 2079
    invoke-virtual {v11, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setImpressionURL(Ljava/lang/String;)V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_2

    goto :goto_7

    :catch_2
    move-exception v0

    :try_start_7
    const-string v3, "campaign"

    .line 2082
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_7
    const-string v0, "vck_t"

    .line 2085
    invoke-virtual {v10, v0, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    invoke-virtual {v11, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVideoCheckType(I)V

    const-string v0, "vctn_t"

    const/4 v3, 0x1

    .line 2086
    invoke-virtual {v10, v0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    invoke-virtual {v11, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVideoCtnType(I)V

    const-string v0, "rs_ignc_r"

    .line 2087
    invoke-virtual {v10, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    if-eqz v0, :cond_17

    .line 2088
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v3

    if-lez v3, :cond_17

    .line 2089
    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3}, Ljava/util/ArrayList;-><init>()V

    .line 2090
    :goto_8
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v4

    if-ge v2, v4, :cond_16

    .line 2091
    invoke-virtual {v0, v2}, Lorg/json/JSONArray;->optInt(I)I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    add-int/lit8 v2, v2, 0x1

    goto :goto_8

    .line 2093
    :cond_16
    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_17

    .line 2094
    invoke-virtual {v11, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRsIgnoreCheckRule(Ljava/util/ArrayList;)V

    .line 2097
    :cond_17
    invoke-virtual {v10, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_18

    .line 2098
    invoke-virtual {v10, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/entity/AabEntity;->parser(Ljava/lang/String;)Lcom/mbridge/msdk/foundation/entity/AabEntity;

    move-result-object v0

    invoke-virtual {v11, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAabEntity(Lcom/mbridge/msdk/foundation/entity/AabEntity;)V
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_3

    :cond_18
    return-object v11

    :catch_3
    move-exception v0

    goto :goto_9

    :catch_4
    move-exception v0

    move-object v11, v12

    goto :goto_9

    :catch_5
    move-exception v0

    const/4 v11, 0x0

    .line 2101
    :goto_9
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return-object v11

    :cond_19
    const/4 v1, 0x0

    return-object v1
.end method

.method public static parseCampaignWithBackData(Lorg/json/JSONObject;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 16

    move-object/from16 v0, p0

    const-string v1, "aab"

    const-string v2, "cam_html"

    const-string v3, "gif_url"

    const-string v4, "nv_t2"

    const-string v5, "md5_file"

    const-string v6, "ad_tracking"

    const-string v7, "number_rating"

    const-string v8, "rating"

    const-string v9, "notice_url"

    const-string v10, "omid"

    const/4 v11, 0x0

    if-eqz v0, :cond_17

    .line 1587
    :try_start_0
    new-instance v12, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_4

    :try_start_1
    const-string v13, "id"

    .line 1588
    invoke-virtual {v0, v13}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v12, v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setId(Ljava/lang/String;)V

    const-string v13, "title"

    .line 1589
    invoke-virtual {v0, v13}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v12, v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAppName(Ljava/lang/String;)V

    const-string v13, "desc"

    .line 1590
    invoke-virtual {v0, v13}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v12, v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAppDesc(Ljava/lang/String;)V

    const-string v13, "package_name"

    .line 1591
    invoke-virtual {v0, v13}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v12, v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPackageName(Ljava/lang/String;)V

    const-string v13, "rtins_type"

    .line 1592
    invoke-virtual {v0, v13}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v13

    invoke-virtual {v12, v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRtinsType(I)V

    const-string v13, "icon_url"

    .line 1593
    invoke-virtual {v0, v13}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v12, v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIconUrl(Ljava/lang/String;)V

    const-string v13, "image_url"

    .line 1594
    invoke-virtual {v0, v13}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v12, v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setImageUrl(Ljava/lang/String;)V

    const-string v13, "app_size"

    .line 1595
    invoke-virtual {v0, v13}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v12, v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setSize(Ljava/lang/String;)V

    const-string v13, "image_size"

    .line 1596
    invoke-virtual {v0, v13}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v12, v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setImageSize(Ljava/lang/String;)V

    const-string v13, "impression_url"

    .line 1597
    invoke-virtual {v0, v13}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v12, v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setImpressionURL(Ljava/lang/String;)V

    const-string v13, "click_url"

    .line 1598
    invoke-virtual {v0, v13}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v12, v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setClickURL(Ljava/lang/String;)V

    const-string v13, "rw_pl"

    .line 1599
    invoke-virtual {v0, v13}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    invoke-static {v13}, Lcom/mbridge/msdk/foundation/entity/RewardPlus;->parseByString(Ljava/lang/String;)Lcom/mbridge/msdk/foundation/entity/RewardPlus;

    move-result-object v13

    invoke-virtual {v12, v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRewardPlus(Lcom/mbridge/msdk/foundation/entity/RewardPlus;)V

    const-string v13, "wtick"

    .line 1600
    invoke-virtual {v0, v13}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v13

    invoke-virtual {v12, v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setWtick(I)V

    const-string v13, "deep_link"

    .line 1601
    invoke-virtual {v0, v13}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v12, v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setDeepLinkUrl(Ljava/lang/String;)V

    const-string v13, "user_activation"

    const/4 v14, 0x0

    .line 1602
    invoke-virtual {v0, v13, v14}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;Z)Z

    move-result v13

    invoke-virtual {v12, v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setUserActivation(Z)V

    .line 1603
    invoke-virtual {v0, v9}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v12, v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setNoticeUrl(Ljava/lang/String;)V

    const-string v13, "template"

    .line 1604
    invoke-virtual {v0, v13}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v13

    invoke-virtual {v12, v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setTemplate(I)V

    const-string v13, "ad_source_id"

    const/4 v15, 0x1

    .line 1605
    invoke-virtual {v0, v13, v15}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v13

    invoke-virtual {v12, v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setType(I)V

    const-string v13, "fca"

    .line 1606
    invoke-virtual {v0, v13}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v13

    invoke-virtual {v12, v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setFca(I)V

    const-string v13, "fcb"

    .line 1607
    invoke-virtual {v0, v13}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v13

    invoke-virtual {v12, v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setFcb(I)V

    const-string v13, "endcard_click_result"

    .line 1608
    invoke-virtual {v0, v13}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v13

    invoke-virtual {v12, v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setEndcard_click_result(I)V

    .line 1609
    invoke-virtual {v0, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    invoke-static {v13}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v13

    if-nez v13, :cond_0

    const-string v13, "0"

    .line 1610
    invoke-virtual {v0, v8, v13}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v14

    invoke-virtual {v12, v14, v15}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRating(D)V

    .line 1612
    :cond_0
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_1

    const v8, 0x51615

    .line 1613
    invoke-virtual {v0, v7, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v7

    invoke-virtual {v12, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setNumberRating(I)V

    :cond_1
    const-string v7, "click_mode"

    .line 1615
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v12, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setClick_mode(Ljava/lang/String;)V

    const-string v7, "landing_type"

    .line 1617
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v12, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setLandingType(Ljava/lang/String;)V

    const-string v7, "link_type"

    const/4 v8, 0x4

    .line 1618
    invoke-virtual {v0, v7, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v7

    invoke-virtual {v12, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setLinkType(I)V

    const-string v7, "c_ct"

    .line 1619
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v12, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setClickInterval(I)V

    const-string v7, "ctatext"

    .line 1620
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v12, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAdCall(Ljava/lang/String;)V

    const-string v7, "ad_url_list"

    .line 1621
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v12, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAd_url_list(Ljava/lang/String;)V

    const-string v7, "retarget_offer"

    const/4 v8, 0x2

    .line 1622
    invoke-virtual {v0, v7, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v7

    invoke-virtual {v12, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRetarget_offer(I)V

    const-string v7, "video_url"

    .line 1624
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    .line 1625
    invoke-virtual {v12, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVideoUrlEncode(Ljava/lang/String;)V

    const-string v7, "video_length"

    .line 1626
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v12, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVideoLength(I)V

    const-string v7, "video_size"

    .line 1627
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v12, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVideoSize(I)V

    const-string v7, "video_resolution"

    .line 1628
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v12, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVideoResolution(Ljava/lang/String;)V

    const-string v7, "watch_mile"

    .line 1629
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v12, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setWatchMile(I)V

    .line 1631
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v14

    invoke-virtual {v12, v14, v15}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setTimestamp(J)V

    const-string v7, "ctype"

    .line 1633
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v12, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setBty(I)V

    const-string v7, "adv_imp"

    .line 1634
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v12, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAdvImp(Ljava/lang/String;)V

    const-string v7, "t_imp"

    .line 1635
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v12, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setTImp(I)V

    const-string v7, "html_url"

    .line 1637
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v12, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setHtmlUrl(Ljava/lang/String;)V

    const-string v7, "end_screen_url"

    .line 1638
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v12, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setEndScreenUrl(Ljava/lang/String;)V

    const-string v7, "guidelines"

    .line 1639
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v12, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setGuidelines(Ljava/lang/String;)V

    const-string v7, "offer_type"

    .line 1640
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v12, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setOfferType(I)V

    const-string v7, "reward_name"

    .line 1641
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v12, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRewardName(Ljava/lang/String;)V

    const-string v7, "reward_amount"

    .line 1642
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v12, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRewardAmount(I)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_3

    .line 1646
    :try_start_2
    invoke-virtual {v0, v6}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_2

    .line 1647
    invoke-virtual {v0, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 1648
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_2

    .line 1649
    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setNativeVideoTrackingString(Ljava/lang/String;)V

    .line 1650
    invoke-static {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->TrackingStr2Object(Ljava/lang/String;)Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setNativeVideoTracking(Lcom/mbridge/msdk/foundation/entity/l;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    :catch_0
    :cond_2
    :try_start_3
    const-string v6, "ready_rate"

    const/4 v7, -0x1

    .line 1657
    invoke-virtual {v0, v6, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setReady_rate(I)V

    const-string v6, "ext_data"

    .line 1658
    invoke-virtual {v0, v6}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v6

    if-eqz v6, :cond_3

    .line 1661
    invoke-virtual {v6}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setExt_data(Ljava/lang/String;)V

    :cond_3
    const-string v6, "mof_tplid"

    .line 1664
    invoke-virtual {v0, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setMof_tplid(I)V

    const-string v6, "mof_template_url"

    .line 1665
    invoke-virtual {v0, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setMof_template_url(Ljava/lang/String;)V

    const-string v6, "nscpt"

    .line 1666
    invoke-virtual {v0, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setNscpt(I)V

    .line 1667
    new-instance v6, Lorg/json/JSONArray;

    invoke-direct {v6}, Lorg/json/JSONArray;-><init>()V

    const-string v6, "pv_urls"

    .line 1668
    invoke-virtual {v0, v6}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v6

    if-eqz v6, :cond_4

    .line 1670
    invoke-virtual {v6}, Lorg/json/JSONArray;->length()I

    move-result v7

    if-lez v7, :cond_4

    .line 1671
    new-instance v7, Ljava/util/ArrayList;

    invoke-virtual {v6}, Lorg/json/JSONArray;->length()I

    move-result v14

    invoke-direct {v7, v14}, Ljava/util/ArrayList;-><init>(I)V

    const/4 v14, 0x0

    .line 1672
    :goto_0
    invoke-virtual {v6}, Lorg/json/JSONArray;->length()I

    move-result v15

    if-ge v14, v15, :cond_5

    .line 1673
    invoke-virtual {v6, v14}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v15

    invoke-interface {v7, v15}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v14, v14, 0x1

    goto :goto_0

    :cond_4
    move-object v7, v11

    .line 1676
    :cond_5
    invoke-virtual {v12, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPv_urls(Ljava/util/List;)V

    const-string v6, "req_ext_data"

    .line 1677
    invoke-virtual {v0, v6}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v6

    if-eqz v6, :cond_6

    .line 1679
    invoke-virtual {v6}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setReq_ext_data(Ljava/lang/String;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    :catch_1
    :cond_6
    :try_start_4
    const-string v6, "video_end_type"

    .line 1683
    invoke-virtual {v0, v6, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVideo_end_type(I)V

    const-string v6, "endcard_url"

    .line 1685
    invoke-virtual {v0, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-static {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBreakCampainOrSetItByEndCard(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_7

    return-object v11

    :cond_7
    const-string v6, "playable_ads_without_video"

    const/4 v7, 0x1

    .line 1688
    invoke-virtual {v0, v6, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6

    invoke-virtual {v12, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPlayable_ads_without_video(I)V

    .line 1689
    invoke-virtual {v0, v5}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_8

    .line 1690
    invoke-virtual {v0, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v12, v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVideoMD5Value(Ljava/lang/String;)V

    .line 1692
    :cond_8
    invoke-virtual {v0, v4}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_9

    .line 1693
    invoke-virtual {v0, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v12, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setNvT2(I)V

    .line 1695
    :cond_9
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_a

    .line 1696
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setGifUrl(Ljava/lang/String;)V

    :cond_a
    const-string v3, "rv"

    .line 1698
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v3

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->a(Lorg/json/JSONObject;)Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRewardTemplateMode(Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;)V

    const-string v3, "c_toi"

    .line 1699
    invoke-virtual {v0, v3, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setClickTimeOutInterval(I)V

    const-string v3, "imp_ua"

    const/4 v4, 0x1

    .line 1700
    invoke-virtual {v0, v3, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setImpUA(I)V

    const-string v3, "c_ua"

    .line 1701
    invoke-virtual {v0, v3, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setcUA(I)V

    const-string v3, "jm_pd"

    .line 1702
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setJmPd(I)V

    const-string v3, "ia_icon"

    .line 1704
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setKeyIaIcon(Ljava/lang/String;)V

    const-string v3, "ia_rst"

    .line 1705
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setKeyIaRst(I)V

    const-string v3, "ia_url"

    .line 1706
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setKeyIaUrl(Ljava/lang/String;)V

    const-string v3, "ia_ori"

    .line 1707
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setKeyIaOri(I)V

    const-string v3, "ad_type"

    .line 1708
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAdType(I)V

    const-string v3, "tp_offer"

    .line 1709
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setTpOffer(I)V

    const-string v3, "fac"

    .line 1710
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setFac(I)V

    const-string v3, "ia_ext1"

    .line 1711
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIa_ext1(Ljava/lang/String;)V

    const-string v3, "ia_ext2"

    .line 1712
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIa_ext2(Ljava/lang/String;)V

    const-string v3, "is_download_zip"

    .line 1713
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIsDownLoadZip(I)V

    const-string v3, "ia_cache"

    .line 1714
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setInteractiveCache(Ljava/lang/String;)V

    const-string v3, "oc_time"

    .line 1715
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setOc_time(I)V

    const-string v3, "oc_type"

    .line 1716
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setOc_type(I)V

    const-string v3, "t_list"

    .line 1717
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setT_list(Ljava/lang/String;)V

    const-string v3, "adchoice"

    const-string v4, ""

    .line 1719
    invoke-virtual {v0, v3, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->a(Ljava/lang/String;)Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;

    move-result-object v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAdchoice(Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;)V

    const-string v3, "plct"

    .line 1721
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v3

    invoke-virtual {v12, v3, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPlct(J)V

    const-string v3, "plctb"

    .line 1722
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v3

    invoke-virtual {v12, v3, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPlctb(J)V

    .line 1723
    invoke-virtual {v0, v10}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v3

    if-nez v3, :cond_c

    .line 1725
    invoke-virtual {v0, v10}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_b

    .line 1726
    invoke-virtual {v0, v10}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setOmid(Ljava/lang/String;)V

    goto :goto_1

    .line 1728
    :cond_b
    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setOmid(Ljava/lang/String;)V

    goto :goto_1

    .line 1731
    :cond_c
    invoke-virtual {v3}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setOmid(Ljava/lang/String;)V

    :goto_1
    const-string v3, "creative_id"

    .line 1733
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v3

    int-to-long v3, v3

    invoke-virtual {v12, v3, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCreativeId(J)V

    const-string v3, "cam_tpl_url"

    .line 1735
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 1736
    invoke-static {v3}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v4

    .line 1737
    invoke-virtual {v4}, Landroid/net/Uri;->getPath()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_e

    invoke-virtual {v4}, Landroid/net/Uri;->getPath()Ljava/lang/String;

    move-result-object v5

    const-string v6, ".zip"

    invoke-virtual {v5, v6}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_d

    invoke-virtual {v4}, Landroid/net/Uri;->getPath()Ljava/lang/String;

    move-result-object v4

    const-string v5, ".ZIP"

    invoke-virtual {v4, v5}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_e

    .line 1738
    :cond_d
    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAdZip(Ljava/lang/String;)V

    goto :goto_2

    .line 1740
    :cond_e
    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setBannerUrl(Ljava/lang/String;)V

    .line 1742
    :goto_2
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setBannerHtml(Ljava/lang/String;)V

    .line 1743
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v12, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAdHtml(Ljava/lang/String;)V

    const-string v2, "unitId"

    .line 1744
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v12, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignUnitId(Ljava/lang/String;)V

    const-string v2, "mraid"

    .line 1746
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1747
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_f

    const-string v2, "mraid_src"

    .line 1748
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1750
    :cond_f
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_10

    const/4 v3, 0x1

    .line 1751
    invoke-virtual {v12, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIsMraid(Z)V

    .line 1752
    invoke-virtual {v12, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setMraid(Ljava/lang/String;)V

    goto :goto_3

    .line 1754
    :cond_10
    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdHtml()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_11

    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdHtml()Ljava/lang/String;

    move-result-object v2

    const-string v3, "<MBTPLMARK>"

    invoke-virtual {v2, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_11

    const/4 v2, 0x1

    .line 1755
    invoke-virtual {v12, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIsMraid(Z)V

    goto :goto_3

    :cond_11
    const/4 v2, 0x0

    .line 1757
    invoke-virtual {v12, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIsMraid(Z)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_3

    :goto_3
    :try_start_5
    const-string v2, "only_impression_url"

    .line 1762
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1763
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_2

    const-string v4, "k"

    if-nez v3, :cond_12

    .line 1764
    :try_start_6
    invoke-virtual {v12, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setOnlyImpressionURL(Ljava/lang/String;)V

    .line 1765
    invoke-static {v2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    if-eqz v2, :cond_12

    .line 1767
    invoke-virtual {v2, v4}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1768
    invoke-virtual {v12, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRequestId(Ljava/lang/String;)V

    .line 1772
    :cond_12
    invoke-virtual {v0, v9}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1773
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_13

    .line 1774
    invoke-virtual {v12, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setNoticeUrl(Ljava/lang/String;)V

    .line 1775
    invoke-static {v2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    if-eqz v2, :cond_13

    .line 1777
    invoke-virtual {v2, v4}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1778
    invoke-virtual {v12, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRequestIdNotice(Ljava/lang/String;)V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_2

    :catch_2
    :cond_13
    :try_start_7
    const-string v2, "hb"

    const/4 v3, 0x0

    .line 1784
    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;Z)Z

    move-result v2

    .line 1785
    invoke-virtual {v12, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIsBidCampaign(Z)V

    .line 1787
    sget-object v2, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v12, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPlacementId(Ljava/lang/String;)V

    const-string v2, "maitve"

    .line 1788
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v12, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setMaitve(I)V

    const-string v2, "maitve_src"

    .line 1789
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v12, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setMaitve_src(Ljava/lang/String;)V

    const-string v2, "flb"

    .line 1790
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v12, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setFlb(I)V

    const-string v2, "flb_skiptime"

    .line 1791
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v12, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setFlbSkipTime(I)V

    const-string v2, "cbd"

    const/4 v4, -0x2

    .line 1792
    invoke-virtual {v0, v2, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    invoke-virtual {v12, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCbd(I)V

    const-string v2, "vst"

    .line 1793
    invoke-virtual {v0, v2, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    invoke-virtual {v12, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVst(I)V

    const-string v2, "adspace_t"

    const/4 v4, 0x1

    .line 1794
    invoke-virtual {v0, v2, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    invoke-virtual {v12, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAdSpaceT(I)V

    .line 1795
    invoke-static {v0, v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->parseCampaignWithBackData(Lorg/json/JSONObject;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v11
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_3

    :try_start_8
    const-string v2, "vcn"

    .line 1796
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v11, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVcn(I)V

    const-string v2, "token_r"

    .line 1797
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v11, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setTokenRule(I)V

    const-string v2, "encrypt_p"

    .line 1798
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v11, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setEncryptPrice(Ljava/lang/String;)V

    const-string v2, "view_com_time"

    .line 1799
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v11, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVideoCompleteTime(I)V

    const-string v2, "vck_t"

    .line 1801
    invoke-virtual {v0, v2, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    invoke-virtual {v11, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVideoCheckType(I)V

    const-string v2, "vctn_t"

    const/4 v4, 0x1

    .line 1802
    invoke-virtual {v0, v2, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    invoke-virtual {v11, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVideoCtnType(I)V

    const-string v2, "rs_ignc_r"

    .line 1803
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    if-eqz v2, :cond_15

    .line 1804
    invoke-virtual {v2}, Lorg/json/JSONArray;->length()I

    move-result v4

    if-lez v4, :cond_15

    .line 1805
    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4}, Ljava/util/ArrayList;-><init>()V

    move v14, v3

    .line 1806
    :goto_4
    invoke-virtual {v2}, Lorg/json/JSONArray;->length()I

    move-result v3

    if-ge v14, v3, :cond_14

    .line 1807
    invoke-virtual {v2, v14}, Lorg/json/JSONArray;->optInt(I)I

    move-result v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v4, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    add-int/lit8 v14, v14, 0x1

    goto :goto_4

    .line 1809
    :cond_14
    invoke-virtual {v4}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-lez v2, :cond_15

    .line 1810
    invoke-virtual {v11, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRsIgnoreCheckRule(Ljava/util/ArrayList;)V

    .line 1813
    :cond_15
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_16

    .line 1814
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/entity/AabEntity;->parser(Ljava/lang/String;)Lcom/mbridge/msdk/foundation/entity/AabEntity;

    move-result-object v0

    invoke-virtual {v11, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAabEntity(Lcom/mbridge/msdk/foundation/entity/AabEntity;)V
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_4

    :cond_16
    return-object v11

    :catch_3
    move-exception v0

    move-object v11, v12

    goto :goto_5

    :catch_4
    move-exception v0

    .line 1817
    :goto_5
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_17
    return-object v11
.end method

.method public static parseCamplistToJson(Ljava/util/List;)Lorg/json/JSONArray;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)",
            "Lorg/json/JSONArray;"
        }
    .end annotation

    const/4 v0, 0x0

    if-eqz p0, :cond_1

    .line 2239
    :try_start_0
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_1

    .line 2240
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 2241
    :try_start_1
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    .line 2243
    :try_start_2
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->campaignToJsonObject(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lorg/json/JSONObject;

    move-result-object v0

    .line 2244
    invoke-virtual {v1, v0}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 2246
    :try_start_3
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    goto :goto_0

    :cond_0
    return-object v1

    :catch_0
    move-exception p0

    move-object v0, v1

    goto :goto_1

    :catch_1
    move-exception p0

    .line 2252
    :goto_1
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    return-object v0
.end method

.method private static parsePlayCentage(Lorg/json/JSONArray;)Ljava/util/List;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lorg/json/JSONArray;",
            ")",
            "Ljava/util/List<",
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;>;"
        }
    .end annotation

    .line 2447
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    if-eqz p0, :cond_1

    const/4 v1, 0x0

    .line 2450
    :goto_0
    :try_start_0
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v1, v2, :cond_1

    .line 2451
    invoke-virtual {p0, v1}, Lorg/json/JSONArray;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 2452
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    .line 2453
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 2455
    new-instance v2, Ljava/util/HashMap;

    invoke-direct {v2}, Ljava/util/HashMap;-><init>()V

    const-string v4, "rate"

    .line 2456
    invoke-virtual {v3, v4}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v4

    const-string v5, "url"

    .line 2457
    invoke-virtual {v3, v5}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 2458
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {v2, v4, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2459
    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :catchall_0
    :cond_1
    return-object v0
.end method

.method public static parseSettingCampaign(Lorg/json/JSONObject;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 3

    if-eqz p0, :cond_0

    .line 1542
    new-instance v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;-><init>()V

    const-string v1, "campaignid"

    .line 1543
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setId(Ljava/lang/String;)V

    const-string v1, "packageName"

    .line 1544
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPackageName(Ljava/lang/String;)V

    const-string v1, "title"

    .line 1545
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAppName(Ljava/lang/String;)V

    const-string v1, "cta"

    .line 1546
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAdCall(Ljava/lang/String;)V

    const-string v1, "desc"

    .line 1547
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAppDesc(Ljava/lang/String;)V

    const-string v1, "impression_url"

    .line 1548
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setImpressionURL(Ljava/lang/String;)V

    const-string v1, "image_url"

    .line 1549
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setImageUrl(Ljava/lang/String;)V

    const-string v1, "plct"

    .line 1551
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPlct(J)V

    const-string v1, "plctb"

    .line 1552
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPlctb(J)V

    const-string v1, "ad_html"

    .line 1554
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAdHtml(Ljava/lang/String;)V

    const-string v1, "ad_tpl_url"

    .line 1555
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAdZip(Ljava/lang/String;)V

    const-string v1, "banner_url"

    .line 1556
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setBannerUrl(Ljava/lang/String;)V

    const-string v1, "banner_html"

    .line 1557
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setBannerHtml(Ljava/lang/String;)V

    const-string v1, "creative_id"

    .line 1558
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    int-to-long v1, v1

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCreativeId(J)V

    .line 1560
    sget-object v1, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPlacementId(Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return-object v0
.end method

.method protected static processNativeVideoTrackingArray(Lorg/json/JSONArray;)[Ljava/lang/String;
    .locals 3

    if-eqz p0, :cond_1

    .line 2184
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v0

    if-lez v0, :cond_1

    .line 2185
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v0

    new-array v0, v0, [Ljava/lang/String;

    const/4 v1, 0x0

    .line 2186
    :goto_0
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v1, v2, :cond_0

    .line 2187
    invoke-virtual {p0, v1}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v2

    aput-object v2, v0, v1

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-object v0

    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method

.method private setMoreOfferAdControl(Ljava/lang/String;Ljava/lang/String;)V
    .locals 5

    const-string v0, "admftm"

    const-string v1, "admf"

    .line 1116
    :try_start_0
    invoke-static {p1, v1}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    if-nez v2, :cond_0

    return-void

    .line 1121
    :cond_0
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->moreOfferJsonData:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 1122
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    goto :goto_0

    .line 1124
    :cond_1
    new-instance v3, Lorg/json/JSONObject;

    iget-object v4, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->moreOfferJsonData:Ljava/lang/String;

    invoke-direct {v3, v4}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 1126
    :goto_0
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    .line 1127
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    .line 1128
    invoke-virtual {v4, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 1129
    invoke-virtual {v4, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 1130
    invoke-virtual {v3, p2, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1131
    invoke-virtual {v3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->moreOfferJsonData:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 1133
    sget-object p2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->TAG:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method


# virtual methods
.method public getAabEntity()Lcom/mbridge/msdk/foundation/entity/AabEntity;
    .locals 1

    .line 3030
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->aabEntity:Lcom/mbridge/msdk/foundation/entity/AabEntity;

    return-object v0
.end method

.method public getAdHtml()Ljava/lang/String;
    .locals 1

    .line 82
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->adHtml:Ljava/lang/String;

    return-object v0
.end method

.method public getAdSpaceT()I
    .locals 1

    .line 152
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->adSpaceT:I

    return v0
.end method

.method public getAdType()I
    .locals 1

    .line 529
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->adType:I

    return v0
.end method

.method public getAdUrlList()Ljava/util/List;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 2217
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAd_url_list()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    .line 2220
    :try_start_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 2221
    new-instance v2, Lorg/json/JSONArray;

    invoke-direct {v2, v0}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 2223
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    const/4 v1, 0x0

    .line 2224
    :goto_0
    :try_start_1
    invoke-virtual {v2}, Lorg/json/JSONArray;->length()I

    move-result v3

    if-ge v1, v3, :cond_0

    .line 2225
    invoke-virtual {v2, v1}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v3

    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :catch_0
    move-exception v1

    goto :goto_1

    :catch_1
    move-exception v0

    move-object v4, v1

    move-object v1, v0

    move-object v0, v4

    .line 2231
    :goto_1
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    move-object v1, v0

    :cond_1
    return-object v1
.end method

.method public getAdZip()Ljava/lang/String;
    .locals 1

    .line 67
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->adZip:Ljava/lang/String;

    return-object v0
.end method

.method public getAd_url_list()Ljava/lang/String;
    .locals 1

    .line 1036
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->ad_url_list:Ljava/lang/String;

    return-object v0
.end method

.method public getAdchoice()Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;
    .locals 1

    .line 449
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->adchoice:Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;

    return-object v0
.end method

.method public getAdvImp()Ljava/lang/String;
    .locals 1

    .line 1231
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->advImp:Ljava/lang/String;

    return-object v0
.end method

.method public getAdvImpList()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 1239
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->advImp:Ljava/lang/String;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->generateAdImpression(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v0

    return-object v0
.end method

.method public getAks()Ljava/util/HashMap;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 825
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->aks:Ljava/util/HashMap;

    return-object v0
.end method

.method public getAl()Ljava/lang/String;
    .locals 1

    .line 858
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->al:Ljava/lang/String;

    return-object v0
.end method

.method public getBannerHtml()Ljava/lang/String;
    .locals 1

    .line 315
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->bannerHtml:Ljava/lang/String;

    return-object v0
.end method

.method public getBannerUrl()Ljava/lang/String;
    .locals 1

    .line 307
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->bannerUrl:Ljava/lang/String;

    return-object v0
.end method

.method public getBidToken()Ljava/lang/String;
    .locals 1

    .line 882
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->bidToken:Ljava/lang/String;

    return-object v0
.end method

.method public getBty()I
    .locals 1

    .line 1223
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->bty:I

    return v0
.end method

.method public getCMPTEntryUrl()Ljava/lang/String;
    .locals 1

    .line 2539
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->CMPTEntryUrl:Ljava/lang/String;

    return-object v0
.end method

.method public getCacheLevel()I
    .locals 1

    .line 1283
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->cacheLevel:I

    return v0
.end method

.method public getCampaignUnitId()Ljava/lang/String;
    .locals 1

    .line 1012
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->campaignUnitId:Ljava/lang/String;

    return-object v0
.end method

.method public getCanStart2C1Anim()Z
    .locals 1

    .line 3117
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->canStart2C1Anim:Z

    return v0
.end method

.method public getCanStartMoreOfferAnim()Z
    .locals 1

    .line 3127
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->canStartMoreOfferAnim:Z

    return v0
.end method

.method public getCbd()I
    .locals 1

    .line 160
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->cbd:I

    return v0
.end method

.method public getCbt()I
    .locals 1

    .line 2993
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->cbt:I

    return v0
.end method

.method public getClickInterval()I
    .locals 1

    .line 1316
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->clickInterval:I

    return v0
.end method

.method public getClickTimeOutInterval()I
    .locals 1

    .line 1325
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->clickTimeOutInterval:I

    return v0
.end method

.method public getClickURL()Ljava/lang/String;
    .locals 1

    .line 1422
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->clickURL:Ljava/lang/String;

    return-object v0
.end method

.method public getClick_mode()Ljava/lang/String;
    .locals 1

    .line 1380
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->click_mode:Ljava/lang/String;

    return-object v0
.end method

.method public getCreativeId()J
    .locals 2

    .line 323
    iget-wide v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->creativeId:J

    return-wide v0
.end method

.method public getDeepLinkURL()Ljava/lang/String;
    .locals 1

    .line 1438
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->deepLinkUrl:Ljava/lang/String;

    return-object v0
.end method

.method public getDynamicTempCode()I
    .locals 1

    .line 248
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->dynamicTempCode:I

    return v0
.end method

.method public getEncryptPrice()Ljava/lang/String;
    .locals 1

    .line 210
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->encryptPrice:Ljava/lang/String;

    return-object v0
.end method

.method public getEndScreenUrl()Ljava/lang/String;
    .locals 1

    .line 1178
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->endScreenUrl:Ljava/lang/String;

    return-object v0
.end method

.method public getEndcard_click_result()I
    .locals 1

    .line 890
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->endcard_click_result:I

    return v0
.end method

.method public getExt_data()Ljava/lang/String;
    .locals 1

    .line 2486
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->ext_data:Ljava/lang/String;

    return-object v0
.end method

.method public getFac()I
    .locals 1

    .line 59
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->fac:I

    return v0
.end method

.method public getFca()I
    .locals 1

    .line 1398
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->fca:I

    return v0
.end method

.method public getFcb()I
    .locals 1

    .line 1406
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->fcb:I

    return v0
.end method

.method public getFlb()I
    .locals 1

    .line 403
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->flb:I

    return v0
.end method

.method public getFlbSkipTime()I
    .locals 1

    .line 411
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->flbSkipTime:I

    return v0
.end method

.method public getGifUrl()Ljava/lang/String;
    .locals 1

    .line 666
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->gifUrl:Ljava/lang/String;

    return-object v0
.end method

.method public getGuidelines()Ljava/lang/String;
    .locals 1

    .line 1154
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->guidelines:Ljava/lang/String;

    return-object v0
.end method

.method public getHost()Ljava/lang/String;
    .locals 3

    .line 1528
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNoticeUrl()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 1530
    :try_start_0
    new-instance v0, Ljava/net/URL;

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNoticeUrl()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 1531
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0}, Ljava/net/URL;->getProtocol()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "://"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/net/URL;->getHost()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 1533
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    const-string v0, ""

    :goto_0
    return-object v0
.end method

.method public getHtmlUrl()Ljava/lang/String;
    .locals 1

    .line 1170
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->htmlUrl:Ljava/lang/String;

    return-object v0
.end method

.method public getIa_ext1()Ljava/lang/String;
    .locals 1

    .line 537
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->ia_ext1:Ljava/lang/String;

    return-object v0
.end method

.method public getIa_ext2()Ljava/lang/String;
    .locals 1

    .line 545
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->ia_ext2:Ljava/lang/String;

    return-object v0
.end method

.method public getIex()I
    .locals 1

    .line 1060
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->iex:I

    return v0
.end method

.method public getImageSize()Ljava/lang/String;
    .locals 1

    .line 1518
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->imageSize:Ljava/lang/String;

    return-object v0
.end method

.method public getImpUA()I
    .locals 1

    .line 898
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->impUA:I

    return v0
.end method

.method public getImpressionURL()Ljava/lang/String;
    .locals 4

    .line 1456
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ab;->a()Lcom/mbridge/msdk/foundation/tools/ab;

    move-result-object v0

    const-string v1, "v_a_d_p"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/foundation/tools/ab;->a(Ljava/lang/String;Z)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1457
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->impressionURL:Ljava/lang/String;

    const-string v1, "&tun="

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->P()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ""

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->impressionURL:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 1460
    sget-object v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->TAG:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1462
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->impressionURL:Ljava/lang/String;

    return-object v0
.end method

.method public getInteractiveCache()Ljava/lang/String;
    .locals 1

    .line 493
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->interactiveCache:Ljava/lang/String;

    return-object v0
.end method

.method public getIsAddSuccesful()I
    .locals 1

    .line 585
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isAddSuccesful:I

    return v0
.end method

.method public getIsClick()I
    .locals 1

    .line 605
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isClick:I

    return v0
.end method

.method public getIsDeleted()I
    .locals 1

    .line 597
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDeleted:I

    return v0
.end method

.method public getIsDownLoadZip()I
    .locals 1

    .line 501
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDownLoadZip:I

    return v0
.end method

.method public getIsTimeoutCheckVideoStatus()I
    .locals 1

    .line 3103
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isTimeoutCheckVideoStatus:I

    return v0
.end method

.method public getJmPd()I
    .locals 1

    .line 593
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->jmPd:I

    return v0
.end method

.method public getJumpResult()Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;
    .locals 1

    .line 1502
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->jumpResult:Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    return-object v0
.end method

.method public getK()Ljava/lang/String;
    .locals 1

    .line 833
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->k:Ljava/lang/String;

    return-object v0
.end method

.method public getKeyIaIcon()Ljava/lang/String;
    .locals 1

    .line 553
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->keyIaIcon:Ljava/lang/String;

    return-object v0
.end method

.method public getKeyIaOri()I
    .locals 1

    .line 577
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->keyIaOri:I

    return v0
.end method

.method public getKeyIaRst()I
    .locals 1

    .line 561
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->keyIaRst:I

    return v0
.end method

.method public getKeyIaUrl()Ljava/lang/String;
    .locals 1

    .line 569
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->keyIaUrl:Ljava/lang/String;

    return-object v0
.end method

.method public getLabel()Ljava/lang/String;
    .locals 1

    .line 1044
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->label:Ljava/lang/String;

    return-object v0
.end method

.method public getLandingType()Ljava/lang/String;
    .locals 1

    .line 1388
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->landingType:Ljava/lang/String;

    return-object v0
.end method

.method public getLinkType()I
    .locals 1

    .line 1203
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->linkType:I

    return v0
.end method

.method public getLoadTimeoutState()I
    .locals 1

    .line 2575
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->loadTimeoutState:I

    return v0
.end method

.method public getMaitve()I
    .locals 1

    .line 2583
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->maitve:I

    return v0
.end method

.method public getMaitve_src()Ljava/lang/String;
    .locals 1

    .line 2591
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->maitve_src:Ljava/lang/String;

    return-object v0
.end method

.method public getMediaViewHolder()Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;
    .locals 1

    .line 1079
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->mediaViewHolder:Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;

    return-object v0
.end method

.method public getMof_template_url()Ljava/lang/String;
    .locals 1

    .line 2502
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->mof_template_url:Ljava/lang/String;

    return-object v0
.end method

.method public getMof_tplid()I
    .locals 1

    .line 2547
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->mof_tplid:I

    return v0
.end method

.method public getMoreOfferJsonData()Ljava/lang/String;
    .locals 1

    .line 525
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->moreOfferJsonData:Ljava/lang/String;

    return-object v0
.end method

.method public getMp()Ljava/lang/String;
    .locals 1

    .line 866
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->mp:Ljava/lang/String;

    return-object v0
.end method

.method public getMraid()Ljava/lang/String;
    .locals 1

    .line 932
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->mraid:Ljava/lang/String;

    return-object v0
.end method

.method public getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;
    .locals 1

    .line 1028
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->nativeVideoTracking:Lcom/mbridge/msdk/foundation/entity/l;

    return-object v0
.end method

.method public getNativeVideoTrackingString()Ljava/lang/String;
    .locals 1

    .line 1020
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->nativeVideoTrackingString:Ljava/lang/String;

    return-object v0
.end method

.method public getNoticeUrl()Ljava/lang/String;
    .locals 4

    .line 1472
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ab;->a()Lcom/mbridge/msdk/foundation/tools/ab;

    move-result-object v0

    const-string v1, "v_a_d_p"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/foundation/tools/ab;->a(Ljava/lang/String;Z)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1473
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->noticeUrl:Ljava/lang/String;

    const-string v1, "&tun="

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->P()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ""

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->noticeUrl:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 1476
    sget-object v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->TAG:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1478
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->noticeUrl:Ljava/lang/String;

    return-object v0
.end method

.method public getNscpt()I
    .locals 1

    .line 2494
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->nscpt:I

    return v0
.end method

.method public getNvT2()I
    .locals 1

    .line 658
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->nvT2:I

    return v0
.end method

.method public getOc_time()I
    .locals 1

    .line 477
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->oc_time:I

    return v0
.end method

.method public getOc_type()I
    .locals 1

    .line 469
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->oc_type:I

    return v0
.end method

.method public getOfferType()I
    .locals 1

    .line 1162
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->offerType:I

    return v0
.end method

.method public getOmid()Ljava/lang/String;
    .locals 1

    .line 2979
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->omid:Ljava/lang/String;

    return-object v0
.end method

.method public getOnlyImpressionURL()Ljava/lang/String;
    .locals 4

    .line 1488
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ab;->a()Lcom/mbridge/msdk/foundation/tools/ab;

    move-result-object v0

    const-string v1, "v_a_d_p"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/foundation/tools/ab;->a(Ljava/lang/String;Z)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1489
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->onlyImpressionURL:Ljava/lang/String;

    const-string v1, "&tun="

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->P()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ""

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->onlyImpressionURL:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 1492
    sget-object v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->TAG:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1494
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->onlyImpressionURL:Ljava/lang/String;

    return-object v0
.end method

.method public getPkgSource()Ljava/lang/String;
    .locals 1

    .line 1052
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->pkgSource:Ljava/lang/String;

    return-object v0
.end method

.method public getPlacementId()Ljava/lang/String;
    .locals 1

    .line 3003
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->placementId:Ljava/lang/String;

    return-object v0
.end method

.method public getPlayable_ads_without_video()I
    .locals 1

    .line 970
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->playable_ads_without_video:I

    return v0
.end method

.method public getPlct()J
    .locals 2

    .line 291
    iget-wide v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->plct:J

    return-wide v0
.end method

.method public getPlctb()J
    .locals 2

    .line 299
    iget-wide v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->plctb:J

    return-wide v0
.end method

.method public getPv_urls()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 94
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->pv_urls:Ljava/util/List;

    return-object v0
.end method

.method public getQ()Ljava/lang/String;
    .locals 1

    .line 841
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->q:Ljava/lang/String;

    return-object v0
.end method

.method public getR()Ljava/lang/String;
    .locals 1

    .line 850
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->r:Ljava/lang/String;

    return-object v0
.end method

.method public getReadyState()I
    .locals 1

    .line 98
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->readyState:I

    return v0
.end method

.method public getReady_rate()I
    .locals 1

    .line 2478
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->ready_rate:I

    return v0
.end method

.method public getReq_ext_data()Ljava/lang/String;
    .locals 1

    .line 2555
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->req_ext_data:Ljava/lang/String;

    return-object v0
.end method

.method public getRequestId()Ljava/lang/String;
    .locals 2

    .line 1334
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->requestId:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 1335
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->requestId:Ljava/lang/String;

    return-object v0

    .line 1337
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->onlyImpressionURL:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 1338
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->onlyImpressionURL:Ljava/lang/String;

    invoke-static {v0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    if-eqz v0, :cond_1

    const-string v1, "k"

    .line 1340
    invoke-virtual {v0, v1}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->requestId:Ljava/lang/String;

    .line 1341
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRequestId(Ljava/lang/String;)V

    .line 1343
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->requestId:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    :cond_2
    const/4 v0, 0x0

    return-object v0
.end method

.method public getRequestIdNotice()Ljava/lang/String;
    .locals 2

    .line 1357
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->requestIdNotice:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 1358
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->requestIdNotice:Ljava/lang/String;

    return-object v0

    .line 1360
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->noticeUrl:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 1361
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->noticeUrl:Ljava/lang/String;

    invoke-static {v0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    if-eqz v0, :cond_1

    const-string v1, "k"

    .line 1363
    invoke-virtual {v0, v1}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->requestIdNotice:Ljava/lang/String;

    .line 1364
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRequestIdNotice(Ljava/lang/String;)V

    .line 1366
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->requestIdNotice:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    :cond_2
    const-string v0, ""

    return-object v0
.end method

.method public getRetarget_offer()I
    .locals 1

    .line 1138
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->retarget_offer:I

    return v0
.end method

.method public getRewardAmount()I
    .locals 1

    .line 1186
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->rewardAmount:I

    return v0
.end method

.method public getRewardName()Ljava/lang/String;
    .locals 1

    .line 1194
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->reward_name:Ljava/lang/String;

    return-object v0
.end method

.method public getRewardPlayStatus()I
    .locals 1

    .line 1146
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->rewardPlayStatus:I

    return v0
.end method

.method public getRewardPlus()Lcom/mbridge/msdk/foundation/entity/RewardPlus;
    .locals 1

    .line 461
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->rewardPlus:Lcom/mbridge/msdk/foundation/entity/RewardPlus;

    return-object v0
.end method

.method public getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;
    .locals 1

    .line 1089
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->rewardTemplateMode:Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    return-object v0
.end method

.method public getRsIgnoreCheckRule()Ljava/util/ArrayList;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    .line 3038
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->rsIgnoreCheckRule:Ljava/util/ArrayList;

    return-object v0
.end method

.method public getRsIgnoreCheckRuleString()Ljava/lang/String;
    .locals 3

    .line 3042
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_2

    .line 3043
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 3045
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    .line 3046
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v2, ","

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 3048
    :cond_0
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->length()I

    move-result v1

    if-lez v1, :cond_1

    .line 3049
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->length()I

    move-result v1

    add-int/lit8 v1, v1, -0x1

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->length()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->delete(II)Ljava/lang/StringBuilder;

    .line 3051
    :cond_1
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 3052
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    move-exception v0

    .line 3055
    sget-object v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->TAG:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    const-string v0, ""

    return-object v0
.end method

.method public getRtinsType()I
    .locals 1

    .line 817
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->rtinsType:I

    return v0
.end method

.method public getSpareOfferFlag()I
    .locals 1

    .line 281
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->spareOfferFlag:I

    return v0
.end method

.method public getTImp()I
    .locals 1

    .line 1243
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->t_imp:I

    return v0
.end method

.method public getT_list()Ljava/lang/String;
    .locals 1

    .line 485
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->t_list:Ljava/lang/String;

    return-object v0
.end method

.method public getTab()I
    .locals 1

    .line 1414
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->tab:I

    return v0
.end method

.method public getTemplate()I
    .locals 1

    .line 1510
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->template:I

    return v0
.end method

.method public getTokenRule()I
    .locals 2

    .line 218
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->tokenRule:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public getTpOffer()I
    .locals 1

    .line 51
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->tpOffer:I

    return v0
.end method

.method public getTs()J
    .locals 2

    .line 1068
    iget-wide v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->ts:J

    return-wide v0
.end method

.method public getUserActivation()Z
    .locals 1

    .line 1450
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->userActivation:Z

    return v0
.end method

.method public getVcn()I
    .locals 1

    .line 229
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->vcn:I

    if-lez v0, :cond_0

    return v0

    :cond_0
    const/4 v0, 0x1

    return v0
.end method

.method public getVideoCheckType()I
    .locals 1

    .line 3079
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->videoCheckType:I

    return v0
.end method

.method public getVideoCompleteTime()I
    .locals 1

    .line 200
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->videoCompleteTime:I

    return v0
.end method

.method public getVideoCtnType()I
    .locals 1

    .line 3091
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->videoCtnType:I

    return v0
.end method

.method public getVideoMD5Value()Ljava/lang/String;
    .locals 1

    .line 916
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->videoMD5Value:Ljava/lang/String;

    return-object v0
.end method

.method public getVideoPlayProgress()I
    .locals 1

    .line 3137
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->videoPlayProgress:I

    return v0
.end method

.method public getVideoResolution()Ljava/lang/String;
    .locals 1

    .line 1267
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->videoResolution:Ljava/lang/String;

    return-object v0
.end method

.method public getVideoSize()I
    .locals 1

    .line 1259
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->videoSize:I

    return v0
.end method

.method public getVideoUrlEncode()Ljava/lang/String;
    .locals 1

    .line 1251
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->videoUrlEncode:Ljava/lang/String;

    return-object v0
.end method

.method public getVideo_end_type()I
    .locals 1

    .line 924
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->video_end_type:I

    return v0
.end method

.method public getVst()I
    .locals 1

    .line 168
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->vst:I

    return v0
.end method

.method public getWatchMile()I
    .locals 1

    .line 1275
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->watchMile:I

    return v0
.end method

.method public getWtick()I
    .locals 1

    .line 1430
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->wtick:I

    return v0
.end method

.method public getcUA()I
    .locals 1

    .line 906
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->cUA:I

    return v0
.end method

.method public getcVersionCode()J
    .locals 2

    .line 3015
    iget-wide v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->cVersionCode:J

    return-wide v0
.end method

.method public getendcard_url()Ljava/lang/String;
    .locals 1

    .line 951
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->endcard_url:Ljava/lang/String;

    return-object v0
.end method

.method public isActiveOm()Z
    .locals 1

    .line 2987
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->omid:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/mbridge/msdk/MBridgeConstans;->OMID_JS_SERVICE_URL:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public isBidCampaign()Z
    .locals 1

    .line 874
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign:Z

    return v0
.end method

.method public isCallBackImpression()Z
    .locals 1

    .line 1292
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isCallBackImpression:Z

    return v0
.end method

.method public isCallbacked()Z
    .locals 1

    .line 2470
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isCallbacked:Z

    return v0
.end method

.method public isCampaignIsFiltered()Z
    .locals 1

    .line 257
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->campaignIsFiltered:Z

    return v0
.end method

.method public isDynamicView()Z
    .locals 1

    .line 240
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView:Z

    return v0
.end method

.method public isEffectiveOffer(J)Z
    .locals 9

    .line 2964
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 2965
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlct()J

    move-result-wide v2

    const-wide/16 v4, 0x0

    cmp-long v2, v2, v4

    const/4 v3, 0x1

    const/4 v4, 0x0

    if-lez v2, :cond_1

    .line 2966
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTimestamp()J

    move-result-wide p1

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlct()J

    move-result-wide v5

    const-wide/16 v7, 0x3e8

    mul-long/2addr v5, v7

    add-long/2addr p1, v5

    cmp-long p1, p1, v0

    if-ltz p1, :cond_0

    goto :goto_0

    :cond_0
    move v3, v4

    :goto_0
    return v3

    .line 2968
    :cond_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTimestamp()J

    move-result-wide v5

    add-long/2addr v5, p1

    cmp-long p1, v5, v0

    if-ltz p1, :cond_2

    goto :goto_1

    :cond_2
    move v3, v4

    :goto_1
    return v3
.end method

.method public isHasMBTplMark()Z
    .locals 1

    .line 331
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->hasMBTplMark:Z

    return v0
.end method

.method public isHasReportAdTrackPause()Z
    .locals 1

    .line 2736
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->hasReportAdTrackPause:Z

    return v0
.end method

.method public isMraid()Z
    .locals 1

    .line 940
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid:Z

    return v0
.end method

.method public isReady()Z
    .locals 1

    .line 2567
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isReady:Z

    return v0
.end method

.method public isReport()Z
    .locals 1

    .line 1304
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isReport:Z

    return v0
.end method

.method public isReportClick()Z
    .locals 1

    .line 1308
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isReportClick:Z

    return v0
.end method

.method public isSpareOffer(JJ)Z
    .locals 7

    .line 2952
    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isEffectiveOffer(J)Z

    move-result p1

    const/4 p2, 0x0

    if-eqz p1, :cond_0

    return p2

    .line 2955
    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 2956
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlctb()J

    move-result-wide v2

    const-wide/16 v4, 0x0

    cmp-long p1, v2, v4

    const/4 v2, 0x1

    if-lez p1, :cond_2

    .line 2957
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTimestamp()J

    move-result-wide p3

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlctb()J

    move-result-wide v3

    const-wide/16 v5, 0x3e8

    mul-long/2addr v3, v5

    add-long/2addr p3, v3

    cmp-long p1, p3, v0

    if-ltz p1, :cond_1

    move p2, v2

    :cond_1
    return p2

    .line 2959
    :cond_2
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTimestamp()J

    move-result-wide v3

    add-long/2addr v3, p3

    cmp-long p1, v3, v0

    if-ltz p1, :cond_3

    move p2, v2

    :cond_3
    return p2
.end method

.method public needShowIDialog()Z
    .locals 1

    .line 3011
    invoke-super {p0, p0}, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->needShowIDialog(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v0

    return v0
.end method

.method public setAabEntity(Lcom/mbridge/msdk/foundation/entity/AabEntity;)V
    .locals 0

    .line 3034
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->aabEntity:Lcom/mbridge/msdk/foundation/entity/AabEntity;

    return-void
.end method

.method public setAdCall(Ljava/lang/String;)V
    .locals 1

    .line 1212
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 1213
    iget p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->linkType:I

    const/4 v0, 0x2

    if-eq p1, v0, :cond_0

    const-string p1, "Learn more"

    goto :goto_0

    :cond_0
    const-string p1, "Install"

    .line 1219
    :cond_1
    :goto_0
    invoke-super {p0, p1}, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->setAdCall(Ljava/lang/String;)V

    return-void
.end method

.method public setAdHtml(Ljava/lang/String;)V
    .locals 0

    .line 86
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->adHtml:Ljava/lang/String;

    return-void
.end method

.method public setAdSpaceT(I)V
    .locals 0

    .line 156
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->adSpaceT:I

    return-void
.end method

.method public setAdType(I)V
    .locals 0

    .line 533
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->adType:I

    return-void
.end method

.method public setAdZip(Ljava/lang/String;)V
    .locals 1

    .line 71
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->adZip:Ljava/lang/String;

    .line 73
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->h(Ljava/lang/String;)Z

    move-result v0

    .line 74
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->l(Ljava/lang/String;)I

    move-result p1

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    .line 76
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setDynamicView(Z)V

    .line 77
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setDynamicTempCode(I)V

    :cond_0
    return-void
.end method

.method public setAd_url_list(Ljava/lang/String;)V
    .locals 0

    .line 1040
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->ad_url_list:Ljava/lang/String;

    return-void
.end method

.method public setAdchoice(Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;)V
    .locals 0

    .line 453
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->adchoice:Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;

    return-void
.end method

.method public setAdvImp(Ljava/lang/String;)V
    .locals 0

    .line 1235
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->advImp:Ljava/lang/String;

    return-void
.end method

.method public setAks(Ljava/util/HashMap;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 829
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->aks:Ljava/util/HashMap;

    return-void
.end method

.method public setAl(Ljava/lang/String;)V
    .locals 0

    .line 862
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->al:Ljava/lang/String;

    return-void
.end method

.method public setBannerHtml(Ljava/lang/String;)V
    .locals 0

    .line 319
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->bannerHtml:Ljava/lang/String;

    return-void
.end method

.method public setBannerUrl(Ljava/lang/String;)V
    .locals 0

    .line 311
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->bannerUrl:Ljava/lang/String;

    return-void
.end method

.method public setBidToken(Ljava/lang/String;)V
    .locals 0

    .line 886
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->bidToken:Ljava/lang/String;

    return-void
.end method

.method public setBty(I)V
    .locals 0

    .line 1227
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->bty:I

    return-void
.end method

.method public setCMPTEntryUrl(Ljava/lang/String;)V
    .locals 0

    .line 2543
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->CMPTEntryUrl:Ljava/lang/String;

    return-void
.end method

.method public setCacheLevel(I)V
    .locals 0

    .line 1287
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->cacheLevel:I

    return-void
.end method

.method public setCallBackImpression(Z)V
    .locals 0

    .line 1296
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isCallBackImpression:Z

    return-void
.end method

.method public setCallbacked(Z)V
    .locals 0

    .line 2474
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isCallbacked:Z

    return-void
.end method

.method public setCampaignIsFiltered(Z)V
    .locals 0

    .line 261
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->campaignIsFiltered:Z

    return-void
.end method

.method public setCampaignUnitId(Ljava/lang/String;)V
    .locals 0

    .line 1016
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->campaignUnitId:Ljava/lang/String;

    return-void
.end method

.method public setCanStart2C1Anim(Z)V
    .locals 0

    .line 3113
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->canStart2C1Anim:Z

    return-void
.end method

.method public setCanStartMoreOfferAnim(Z)V
    .locals 0

    .line 3123
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->canStartMoreOfferAnim:Z

    return-void
.end method

.method public setCbd(I)V
    .locals 0

    .line 164
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->cbd:I

    return-void
.end method

.method public setCbt(I)V
    .locals 0

    .line 2997
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->cbt:I

    return-void
.end method

.method public setClickInterval(I)V
    .locals 0

    .line 1320
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->clickInterval:I

    return-void
.end method

.method public setClickTimeOutInterval(I)V
    .locals 0

    .line 1329
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->clickTimeOutInterval:I

    return-void
.end method

.method public setClickURL(Ljava/lang/String;)V
    .locals 0

    .line 1426
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->clickURL:Ljava/lang/String;

    return-void
.end method

.method public setClick_mode(Ljava/lang/String;)V
    .locals 0

    .line 1384
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->click_mode:Ljava/lang/String;

    return-void
.end method

.method public setCreativeId(J)V
    .locals 0

    .line 327
    iput-wide p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->creativeId:J

    return-void
.end method

.method public setDeepLinkUrl(Ljava/lang/String;)V
    .locals 0

    .line 1442
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->deepLinkUrl:Ljava/lang/String;

    return-void
.end method

.method public setDynamicTempCode(I)V
    .locals 0

    .line 253
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->c(I)I

    move-result p1

    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->dynamicTempCode:I

    return-void
.end method

.method public setDynamicView(Z)V
    .locals 0

    .line 244
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView:Z

    return-void
.end method

.method public setEncryptPrice(Ljava/lang/String;)V
    .locals 0

    .line 214
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->encryptPrice:Ljava/lang/String;

    return-void
.end method

.method public setEndScreenUrl(Ljava/lang/String;)V
    .locals 0

    .line 1182
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->endScreenUrl:Ljava/lang/String;

    return-void
.end method

.method public setEndcard_click_result(I)V
    .locals 0

    .line 894
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->endcard_click_result:I

    return-void
.end method

.method public setExt_data(Ljava/lang/String;)V
    .locals 0

    .line 2490
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->ext_data:Ljava/lang/String;

    return-void
.end method

.method public setFac(I)V
    .locals 0

    .line 63
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->fac:I

    return-void
.end method

.method public setFca(I)V
    .locals 0

    .line 1402
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->fca:I

    return-void
.end method

.method public setFcb(I)V
    .locals 0

    .line 1410
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->fcb:I

    return-void
.end method

.method public setFlb(I)V
    .locals 0

    .line 407
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->flb:I

    return-void
.end method

.method public setFlbSkipTime(I)V
    .locals 0

    .line 415
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->flbSkipTime:I

    return-void
.end method

.method public setGifUrl(Ljava/lang/String;)V
    .locals 0

    .line 670
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->gifUrl:Ljava/lang/String;

    return-void
.end method

.method public setGuidelines(Ljava/lang/String;)V
    .locals 0

    .line 1158
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->guidelines:Ljava/lang/String;

    return-void
.end method

.method public setHasMBTplMark(Z)V
    .locals 0

    .line 335
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->hasMBTplMark:Z

    return-void
.end method

.method public setHasReportAdTrackPause(Z)V
    .locals 0

    .line 2740
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->hasReportAdTrackPause:Z

    return-void
.end method

.method public setHtmlUrl(Ljava/lang/String;)V
    .locals 0

    .line 1174
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->htmlUrl:Ljava/lang/String;

    return-void
.end method

.method public setIa_ext1(Ljava/lang/String;)V
    .locals 0

    .line 541
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->ia_ext1:Ljava/lang/String;

    return-void
.end method

.method public setIa_ext2(Ljava/lang/String;)V
    .locals 0

    .line 549
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->ia_ext2:Ljava/lang/String;

    return-void
.end method

.method public setIex(I)V
    .locals 0

    .line 1064
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->iex:I

    return-void
.end method

.method public setImageSize(Ljava/lang/String;)V
    .locals 0

    .line 1522
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->imageSize:Ljava/lang/String;

    return-void
.end method

.method public setImpUA(I)V
    .locals 0

    .line 902
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->impUA:I

    return-void
.end method

.method public setImpressionURL(Ljava/lang/String;)V
    .locals 0

    .line 1466
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->impressionURL:Ljava/lang/String;

    return-void
.end method

.method public setInteractiveCache(Ljava/lang/String;)V
    .locals 0

    .line 497
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->interactiveCache:Ljava/lang/String;

    return-void
.end method

.method public setIsAddSuccesful(I)V
    .locals 0

    .line 589
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isAddSuccesful:I

    return-void
.end method

.method public setIsBidCampaign(Z)V
    .locals 0

    .line 878
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign:Z

    return-void
.end method

.method public setIsClick(I)V
    .locals 0

    .line 609
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isClick:I

    return-void
.end method

.method public setIsDeleted(I)V
    .locals 0

    .line 601
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDeleted:I

    return-void
.end method

.method public setIsDownLoadZip(I)V
    .locals 0

    .line 505
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDownLoadZip:I

    return-void
.end method

.method public setIsMraid(Z)V
    .locals 0

    .line 944
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid:Z

    return-void
.end method

.method public setIsTimeoutCheckVideoStatus(I)V
    .locals 0

    .line 3107
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isTimeoutCheckVideoStatus:I

    return-void
.end method

.method public setJmPd(I)V
    .locals 0

    .line 614
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->jmPd:I

    return-void
.end method

.method public setJumpResult(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;)V
    .locals 0

    .line 1506
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->jumpResult:Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    return-void
.end method

.method public setK(Ljava/lang/String;)V
    .locals 0

    .line 837
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->k:Ljava/lang/String;

    return-void
.end method

.method public setKeyIaIcon(Ljava/lang/String;)V
    .locals 0

    .line 557
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->keyIaIcon:Ljava/lang/String;

    return-void
.end method

.method public setKeyIaOri(I)V
    .locals 0

    .line 581
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->keyIaOri:I

    return-void
.end method

.method public setKeyIaRst(I)V
    .locals 0

    .line 565
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->keyIaRst:I

    return-void
.end method

.method public setKeyIaUrl(Ljava/lang/String;)V
    .locals 0

    .line 573
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->keyIaUrl:Ljava/lang/String;

    return-void
.end method

.method public setLabel(Ljava/lang/String;)V
    .locals 0

    .line 1048
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->label:Ljava/lang/String;

    return-void
.end method

.method public setLandingType(Ljava/lang/String;)V
    .locals 0

    .line 1392
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->landingType:Ljava/lang/String;

    return-void
.end method

.method public setLinkType(I)V
    .locals 0

    .line 1207
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->linkType:I

    return-void
.end method

.method public setLoadTimeoutState(I)V
    .locals 0

    .line 2579
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->loadTimeoutState:I

    return-void
.end method

.method public setMaitve(I)V
    .locals 0

    .line 2587
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->maitve:I

    return-void
.end method

.method public setMaitve_src(Ljava/lang/String;)V
    .locals 0

    .line 2595
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->maitve_src:Ljava/lang/String;

    return-void
.end method

.method public setMediaViewHolder(Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;)V
    .locals 0

    .line 1083
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->mediaViewHolder:Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;

    return-void
.end method

.method public setMof_template_url(Ljava/lang/String;)V
    .locals 2

    .line 2506
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->mof_template_url:Ljava/lang/String;

    .line 2507
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 2508
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCMPTEntryUrl(Ljava/lang/String;)V

    .line 2509
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->h(Ljava/lang/String;)Z

    move-result v0

    .line 2510
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->l(Ljava/lang/String;)I

    move-result v1

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    .line 2512
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setDynamicView(Z)V

    .line 2513
    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setDynamicTempCode(I)V

    .line 2515
    :cond_0
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->k(Ljava/lang/String;)Z

    move-result p1

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCanStart2C1Anim(Z)V

    :cond_1
    return-void
.end method

.method public setMof_tplid(I)V
    .locals 0

    .line 2551
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->mof_tplid:I

    return-void
.end method

.method public setMp(Ljava/lang/String;)V
    .locals 0

    .line 870
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->mp:Ljava/lang/String;

    return-void
.end method

.method public setMraid(Ljava/lang/String;)V
    .locals 0

    .line 936
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->mraid:Ljava/lang/String;

    return-void
.end method

.method public setNativeVideoTracking(Lcom/mbridge/msdk/foundation/entity/l;)V
    .locals 0

    .line 1032
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->nativeVideoTracking:Lcom/mbridge/msdk/foundation/entity/l;

    return-void
.end method

.method public setNativeVideoTrackingString(Ljava/lang/String;)V
    .locals 0

    .line 1024
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->nativeVideoTrackingString:Ljava/lang/String;

    return-void
.end method

.method public setNoticeUrl(Ljava/lang/String;)V
    .locals 0

    .line 1482
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->noticeUrl:Ljava/lang/String;

    return-void
.end method

.method public setNscpt(I)V
    .locals 0

    .line 2498
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->nscpt:I

    return-void
.end method

.method public setNvT2(I)V
    .locals 0

    .line 662
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->nvT2:I

    return-void
.end method

.method public setOc_time(I)V
    .locals 0

    .line 481
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->oc_time:I

    return-void
.end method

.method public setOc_type(I)V
    .locals 0

    .line 473
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->oc_type:I

    return-void
.end method

.method public setOfferType(I)V
    .locals 0

    .line 1166
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->offerType:I

    return-void
.end method

.method public setOmid(Ljava/lang/String;)V
    .locals 0

    .line 2983
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->omid:Ljava/lang/String;

    return-void
.end method

.method public setOnlyImpressionURL(Ljava/lang/String;)V
    .locals 0

    .line 1498
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->onlyImpressionURL:Ljava/lang/String;

    return-void
.end method

.method public setPkgSource(Ljava/lang/String;)V
    .locals 0

    .line 1056
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->pkgSource:Ljava/lang/String;

    return-void
.end method

.method public setPlacementId(Ljava/lang/String;)V
    .locals 0

    .line 3007
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->placementId:Ljava/lang/String;

    return-void
.end method

.method public setPlayable_ads_without_video(I)V
    .locals 0

    .line 974
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->playable_ads_without_video:I

    return-void
.end method

.method public setPlct(J)V
    .locals 0

    .line 295
    iput-wide p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->plct:J

    return-void
.end method

.method public setPlctb(J)V
    .locals 0

    .line 303
    iput-wide p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->plctb:J

    return-void
.end method

.method public setPv_urls(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 90
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->pv_urls:Ljava/util/List;

    return-void
.end method

.method public setQ(Ljava/lang/String;)V
    .locals 0

    .line 846
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->q:Ljava/lang/String;

    return-void
.end method

.method public setR(Ljava/lang/String;)V
    .locals 0

    .line 854
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->r:Ljava/lang/String;

    return-void
.end method

.method public setReady(Z)V
    .locals 0

    .line 2571
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isReady:Z

    return-void
.end method

.method public setReadyState(I)V
    .locals 0

    .line 2563
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->readyState:I

    return-void
.end method

.method public setReady_rate(I)V
    .locals 0

    .line 2482
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->ready_rate:I

    return-void
.end method

.method public setReport(Z)V
    .locals 0

    .line 1300
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isReport:Z

    return-void
.end method

.method public setReportClick(Z)V
    .locals 0

    .line 1312
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isReportClick:Z

    return-void
.end method

.method public setReq_ext_data(Ljava/lang/String;)V
    .locals 0

    .line 2559
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->req_ext_data:Ljava/lang/String;

    return-void
.end method

.method public setRequestId(Ljava/lang/String;)V
    .locals 0

    .line 1352
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->requestId:Ljava/lang/String;

    return-void
.end method

.method public setRequestIdNotice(Ljava/lang/String;)V
    .locals 0

    .line 1375
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->requestIdNotice:Ljava/lang/String;

    return-void
.end method

.method public setRetarget_offer(I)V
    .locals 0

    .line 1142
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->retarget_offer:I

    return-void
.end method

.method public setRewardAmount(I)V
    .locals 0

    .line 1190
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->rewardAmount:I

    return-void
.end method

.method public setRewardName(Ljava/lang/String;)V
    .locals 0

    .line 1198
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->reward_name:Ljava/lang/String;

    return-void
.end method

.method public setRewardPlayStatus(I)V
    .locals 0

    .line 1150
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->rewardPlayStatus:I

    return-void
.end method

.method public setRewardPlus(Lcom/mbridge/msdk/foundation/entity/RewardPlus;)V
    .locals 0

    .line 465
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->rewardPlus:Lcom/mbridge/msdk/foundation/entity/RewardPlus;

    return-void
.end method

.method public setRewardTemplateMode(Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;)V
    .locals 2

    .line 1093
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->rewardTemplateMode:Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    if-eqz p1, :cond_2

    .line 1094
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 1095
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->mof_template_url:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v0

    const-string v1, "cmpt=1"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1096
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCMPTEntryUrl(Ljava/lang/String;)V

    .line 1099
    :cond_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ae;->h(Ljava/lang/String;)Z

    move-result v0

    .line 1100
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ae;->l(Ljava/lang/String;)I

    move-result v1

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    .line 1102
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setDynamicView(Z)V

    .line 1103
    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setDynamicTempCode(I)V

    .line 1105
    :cond_1
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object p1

    const-string v0, "template_url"

    invoke-direct {p0, p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setMoreOfferAdControl(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public setRsIgnoreCheckRule(Ljava/util/ArrayList;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Integer;",
            ">;)V"
        }
    .end annotation

    .line 3062
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->rsIgnoreCheckRule:Ljava/util/ArrayList;

    return-void
.end method

.method public setRsIgnoreCheckRuleByString(Ljava/lang/String;)V
    .locals 4

    .line 3066
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, ","

    .line 3067
    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    .line 3068
    array-length v0, p1

    if-lez v0, :cond_1

    .line 3069
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 3070
    array-length v1, p1

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_0

    aget-object v3, p1, v2

    .line 3071
    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 3073
    :cond_0
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRsIgnoreCheckRule(Ljava/util/ArrayList;)V

    :cond_1
    return-void
.end method

.method public setRtinsType(I)V
    .locals 0

    .line 821
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->rtinsType:I

    return-void
.end method

.method public setSpareOfferFlag(I)V
    .locals 0

    .line 285
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->spareOfferFlag:I

    return-void
.end method

.method public setTImp(I)V
    .locals 0

    .line 1247
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->t_imp:I

    return-void
.end method

.method public setT_list(Ljava/lang/String;)V
    .locals 0

    .line 489
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->t_list:Ljava/lang/String;

    return-void
.end method

.method public setTab(I)V
    .locals 0

    .line 1418
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->tab:I

    return-void
.end method

.method public setTemplate(I)V
    .locals 0

    .line 1514
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->template:I

    return-void
.end method

.method public setTokenRule(I)V
    .locals 0

    .line 225
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->tokenRule:I

    return-void
.end method

.method public setTpOffer(I)V
    .locals 0

    .line 55
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->tpOffer:I

    return-void
.end method

.method public setTs(J)V
    .locals 0

    .line 1072
    iput-wide p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->ts:J

    return-void
.end method

.method public setUserActivation(Z)V
    .locals 0

    .line 1446
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->userActivation:Z

    return-void
.end method

.method public setVcn(I)V
    .locals 0

    .line 236
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->vcn:I

    return-void
.end method

.method public setVideoCheckType(I)V
    .locals 2

    const/4 v0, 0x2

    if-gt p1, v0, :cond_1

    const/4 v1, 0x1

    if-ge p1, v1, :cond_0

    goto :goto_0

    .line 3086
    :cond_0
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->videoCheckType:I

    goto :goto_1

    .line 3084
    :cond_1
    :goto_0
    iput v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->videoCheckType:I

    :goto_1
    return-void
.end method

.method public setVideoCompleteTime(I)V
    .locals 0

    .line 204
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->videoCompleteTime:I

    return-void
.end method

.method public setVideoCtnType(I)V
    .locals 2

    const/4 v0, 0x1

    const/4 v1, 0x2

    if-gt p1, v1, :cond_1

    if-ge p1, v0, :cond_0

    goto :goto_0

    .line 3098
    :cond_0
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->videoCtnType:I

    goto :goto_1

    .line 3096
    :cond_1
    :goto_0
    iput v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->videoCtnType:I

    :goto_1
    return-void
.end method

.method public setVideoMD5Value(Ljava/lang/String;)V
    .locals 0

    .line 920
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->videoMD5Value:Ljava/lang/String;

    return-void
.end method

.method public setVideoPlayProgress(I)V
    .locals 0

    .line 3141
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->videoPlayProgress:I

    return-void
.end method

.method public setVideoResolution(Ljava/lang/String;)V
    .locals 0

    .line 1271
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->videoResolution:Ljava/lang/String;

    return-void
.end method

.method public setVideoSize(I)V
    .locals 0

    .line 1263
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->videoSize:I

    return-void
.end method

.method public setVideoUrlEncode(Ljava/lang/String;)V
    .locals 0

    .line 1255
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->videoUrlEncode:Ljava/lang/String;

    return-void
.end method

.method public setVideo_end_type(I)V
    .locals 0

    .line 928
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->video_end_type:I

    return-void
.end method

.method public setVst(I)V
    .locals 0

    .line 172
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->vst:I

    return-void
.end method

.method public setWatchMile(I)V
    .locals 0

    .line 1279
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->watchMile:I

    return-void
.end method

.method public setWtick(I)V
    .locals 0

    .line 1434
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->wtick:I

    return-void
.end method

.method public setcUA(I)V
    .locals 0

    .line 910
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->cUA:I

    return-void
.end method

.method public setcVersionCode(J)V
    .locals 0

    .line 3019
    iput-wide p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->cVersionCode:J

    return-void
.end method

.method public setendcard_url(Ljava/lang/String;)V
    .locals 1

    .line 955
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->endcard_url:Ljava/lang/String;

    .line 956
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->mof_template_url:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->rewardTemplateMode:Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    if-eqz v0, :cond_0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    :cond_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "cmpt=1"

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 957
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCMPTEntryUrl(Ljava/lang/String;)V

    .line 959
    :cond_1
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->k(Ljava/lang/String;)Z

    move-result v0

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCanStartMoreOfferAnim(Z)V

    const-string v0, "endcard_url"

    .line 961
    invoke-direct {p0, p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setMoreOfferAdControl(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
