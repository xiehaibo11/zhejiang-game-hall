.class public Lcom/mbridge/msdk/foundation/db/g;
.super Lcom/mbridge/msdk/foundation/db/f;
.source "CampaignReportDao.java"


# static fields
.field private static final a:Ljava/lang/String;

.field private static b:Lcom/mbridge/msdk/foundation/db/g;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 86
    const-class v0, Lcom/mbridge/msdk/foundation/db/g;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/foundation/db/g;->a:Ljava/lang/String;

    const/4 v0, 0x0

    .line 87
    sput-object v0, Lcom/mbridge/msdk/foundation/db/g;->b:Lcom/mbridge/msdk/foundation/db/g;

    return-void
.end method

.method private constructor <init>(Lcom/mbridge/msdk/foundation/db/h;)V
    .locals 0

    .line 89
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/db/f;-><init>(Lcom/mbridge/msdk/foundation/db/h;)V

    return-void
.end method

.method public static b(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/g;
    .locals 2

    .line 93
    sget-object v0, Lcom/mbridge/msdk/foundation/db/g;->b:Lcom/mbridge/msdk/foundation/db/g;

    if-nez v0, :cond_1

    .line 94
    const-class v0, Lcom/mbridge/msdk/foundation/db/g;

    monitor-enter v0

    .line 95
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/foundation/db/g;->b:Lcom/mbridge/msdk/foundation/db/g;

    if-nez v1, :cond_0

    .line 96
    new-instance v1, Lcom/mbridge/msdk/foundation/db/g;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/foundation/db/g;-><init>(Lcom/mbridge/msdk/foundation/db/h;)V

    sput-object v1, Lcom/mbridge/msdk/foundation/db/g;->b:Lcom/mbridge/msdk/foundation/db/g;

    .line 98
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    .line 100
    :cond_1
    :goto_0
    sget-object p0, Lcom/mbridge/msdk/foundation/db/g;->b:Lcom/mbridge/msdk/foundation/db/g;

    return-object p0
.end method


# virtual methods
.method public final declared-synchronized a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)J
    .locals 6

    monitor-enter p0

    if-nez p1, :cond_0

    const-wide/16 v0, 0x0

    .line 106
    monitor-exit p0

    return-wide v0

    :cond_0
    const-wide/16 v0, -0x1

    .line 108
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/g;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v2, :cond_1

    .line 109
    monitor-exit p0

    return-wide v0

    .line 111
    :cond_1
    :try_start_1
    new-instance v2, Landroid/content/ContentValues;

    invoke-direct {v2}, Landroid/content/ContentValues;-><init>()V

    const-string v3, "id"

    .line 112
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "unitid"

    .line 113
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "tab"

    .line 114
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTab()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "package_name"

    .line 115
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "app_name"

    .line 116
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "app_desc"

    .line 117
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppDesc()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "app_size"

    .line 118
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getSize()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "image_size"

    .line 119
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageSize()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "icon_url"

    .line 120
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "image_url"

    .line 121
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "impression_url"

    .line 122
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImpressionURL()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "notice_url"

    .line 123
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNoticeUrl()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "download_url"

    .line 124
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "wtick"

    .line 125
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getWtick()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "only_impression"

    .line 126
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOnlyImpressionURL()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "ts"

    .line 128
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTimestamp()J

    move-result-wide v4

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    const-string v3, "template"

    .line 129
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTemplate()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "click_mode"

    .line 130
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClick_mode()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "landing_type"

    .line 131
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLandingType()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "link_type"

    .line 132
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "star"

    .line 133
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRating()D

    move-result-wide v4

    invoke-static {v4, v5}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Double;)V

    const-string v3, "cti"

    .line 134
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickInterval()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "cpti"

    .line 135
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPreClickInterval()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "preclick"

    .line 136
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isPreClick()Z

    move-result v4

    invoke-static {v4}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Boolean;)V

    const-string v3, "level"

    .line 137
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCacheLevel()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "adSource"

    .line 138
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getType()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "ad_call"

    .line 139
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdCall()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "fc_a"

    .line 140
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getFca()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "ad_url_list"

    .line 141
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAd_url_list()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "video_url"

    .line 143
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "video_size"

    .line 144
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoSize()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "video_length"

    .line 145
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoLength()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "video_resolution"

    .line 146
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoResolution()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "endcard_click_result"

    .line 147
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getEndcard_click_result()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "watch_mile"

    .line 148
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getWatchMile()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "view_com_time"

    .line 149
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoCompleteTime()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "advImp"

    .line 151
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdvImp()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "bty"

    .line 152
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBty()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "t_imp"

    .line 153
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTImp()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "guidelines"

    .line 155
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getGuidelines()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "offer_type"

    .line 156
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOfferType()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "html_url"

    .line 157
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getHtmlUrl()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "end_screen_url"

    .line 158
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getEndScreenUrl()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "reward_amount"

    .line 159
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardAmount()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "reward_name"

    .line 160
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "reward_play_status"

    .line 161
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardPlayStatus()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "adv_id"

    .line 164
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdvId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "ttc_ct2"

    .line 167
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTtc_ct2()I

    move-result v4

    mul-int/lit16 v4, v4, 0x3e8

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "ttc_type"

    .line 168
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTtc_type()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "retarget"

    .line 170
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRetarget_offer()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "native_ad_tracking"

    .line 173
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTrackingString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "playable_ads_without_video"

    .line 176
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlayable_ads_without_video()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "endcard_url"

    .line 177
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "video_end_type"

    .line 178
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideo_end_type()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "loopback"

    .line 179
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLoopbackString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "md5_file"

    .line 181
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoMD5Value()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "nv_t2"

    .line 182
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNvT2()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "gif_url"

    .line 183
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getGifUrl()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 185
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v3

    if-eqz v3, :cond_2

    const-string v3, "reward_teamplate"

    .line 186
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->a()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    const-string v3, "c_coi"

    .line 188
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickTimeOutInterval()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "c_ua"

    .line 189
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getcUA()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "imp_ua"

    .line 190
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImpUA()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "gh_id"

    .line 191
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getGhId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "gh_path"

    .line 192
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getGhPath()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "bind_id"

    .line 193
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBindId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "flb"

    .line 194
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getFlb()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "adspace_t"

    .line 195
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdSpaceT()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "cbd"

    .line 196
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCbd()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "vst"

    .line 197
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVst()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "flb_skiptime"

    .line 198
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getFlbSkipTime()I

    move-result p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {v2, v3, p1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 199
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/g;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object p1

    const-string v3, "report_campaign"

    const/4 v4, 0x0

    invoke-virtual {p1, v3, v4, v2}, Landroid/database/sqlite/SQLiteDatabase;->insert(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J

    move-result-wide v0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-wide v0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1

    .line 202
    :catch_0
    monitor-exit p0

    return-wide v0
.end method

.method public final h(Ljava/lang/String;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 8

    const-string v0, "loopback"

    const-string v1, "native_ad_tracking"

    const-string v2, "html_url"

    const-string v3, "guidelines"

    const/4 v4, 0x0

    .line 210
    :try_start_0
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "SELECT * FROM report_campaign where package_name =\'"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\'"

    invoke-virtual {v5, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 211
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/g;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v5

    invoke-virtual {v5, p1, v4}, Landroid/database/sqlite/SQLiteDatabase;->rawQuery(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-eqz p1, :cond_1

    .line 212
    :try_start_1
    invoke-interface {p1}, Landroid/database/Cursor;->getCount()I

    move-result v5

    if-lez v5, :cond_1

    .line 213
    invoke-interface {p1}, Landroid/database/Cursor;->moveToNext()Z

    move-result v5

    if-eqz v5, :cond_1

    .line 214
    new-instance v5, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;-><init>()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    const-string v4, "id"

    .line 215
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setId(Ljava/lang/String;)V

    const-string v4, "tab"

    .line 216
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getInt(I)I

    move-result v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setTab(I)V

    const-string v4, "package_name"

    .line 217
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPackageName(Ljava/lang/String;)V

    const-string v4, "app_name"

    .line 218
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAppName(Ljava/lang/String;)V

    const-string v4, "app_desc"

    .line 219
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAppDesc(Ljava/lang/String;)V

    const-string v4, "app_size"

    .line 220
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setSize(Ljava/lang/String;)V

    const-string v4, "image_size"

    .line 221
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setImageSize(Ljava/lang/String;)V

    const-string v4, "icon_url"

    .line 222
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIconUrl(Ljava/lang/String;)V

    const-string v4, "image_url"

    .line 223
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setImageUrl(Ljava/lang/String;)V

    const-string v4, "impression_url"

    .line 224
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setImpressionURL(Ljava/lang/String;)V

    const-string v4, "notice_url"

    .line 225
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setNoticeUrl(Ljava/lang/String;)V

    const-string v4, "download_url"

    .line 226
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setClickURL(Ljava/lang/String;)V

    const-string v4, "wtick"

    .line 227
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getInt(I)I

    move-result v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setWtick(I)V

    const-string v4, "only_impression"

    .line 228
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setOnlyImpressionURL(Ljava/lang/String;)V

    const-string v4, "preclick"

    .line 229
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getInt(I)I

    move-result v4

    const/4 v6, 0x1

    if-ne v4, v6, :cond_0

    goto :goto_0

    :cond_0
    const/4 v6, 0x0

    :goto_0
    invoke-virtual {v5, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPreClick(Z)V

    const-string v4, "template"

    .line 230
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getInt(I)I

    move-result v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setTemplate(I)V

    const-string v4, "landing_type"

    .line 231
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setLandingType(Ljava/lang/String;)V

    const-string v4, "link_type"

    .line 232
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getInt(I)I

    move-result v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setLinkType(I)V

    const-string v4, "click_mode"

    .line 233
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setClick_mode(Ljava/lang/String;)V

    const-string v4, "star"

    .line 234
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v6

    invoke-virtual {v5, v6, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRating(D)V

    const-string v4, "number_rating"

    .line 235
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getInt(I)I

    move-result v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setNumberRating(I)V

    const-string v4, "cti"

    .line 236
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getInt(I)I

    move-result v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setClickInterval(I)V

    const-string v4, "cpti"

    .line 237
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getInt(I)I

    move-result v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPreClickInterval(I)V

    const-string v4, "ts"

    .line 238
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v6

    invoke-virtual {v5, v6, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setTimestamp(J)V

    const-string v4, "level"

    .line 239
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getInt(I)I

    move-result v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCacheLevel(I)V

    const-string v4, "ad_call"

    .line 240
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAdCall(Ljava/lang/String;)V

    const-string v4, "fc_a"

    .line 241
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getInt(I)I

    move-result v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setFca(I)V

    const-string v4, "ad_url_list"

    .line 242
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAd_url_list(Ljava/lang/String;)V

    const-string v4, "video_length"

    .line 244
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getInt(I)I

    move-result v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVideoLength(I)V

    const-string v4, "video_size"

    .line 245
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getInt(I)I

    move-result v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVideoSize(I)V

    const-string v4, "video_resolution"

    .line 246
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVideoResolution(Ljava/lang/String;)V

    const-string v4, "endcard_click_result"

    .line 247
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getInt(I)I

    move-result v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setEndcard_click_result(I)V

    const-string v4, "video_url"

    .line 248
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVideoUrlEncode(Ljava/lang/String;)V

    const-string v4, "watch_mile"

    .line 249
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getInt(I)I

    move-result v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setWatchMile(I)V

    const-string v4, "view_com_time"

    .line 250
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getInt(I)I

    move-result v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVideoCompleteTime(I)V

    const-string v4, "t_imp"

    .line 252
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getInt(I)I

    move-result v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setTImp(I)V

    const-string v4, "bty"

    .line 253
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getInt(I)I

    move-result v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setBty(I)V

    const-string v4, "advImp"

    .line 254
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAdvImp(Ljava/lang/String;)V

    .line 256
    invoke-interface {p1, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setGuidelines(Ljava/lang/String;)V

    const-string v4, "offer_type"

    .line 257
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getInt(I)I

    move-result v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setOfferType(I)V

    .line 258
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p1, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setHtmlUrl(Ljava/lang/String;)V

    .line 259
    invoke-interface {p1, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    invoke-interface {p1, v3}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v5, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setGuidelines(Ljava/lang/String;)V

    .line 260
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v5, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setHtmlUrl(Ljava/lang/String;)V

    const-string v2, "end_screen_url"

    .line 261
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v5, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setEndScreenUrl(Ljava/lang/String;)V

    const-string v2, "reward_name"

    .line 262
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v5, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRewardName(Ljava/lang/String;)V

    const-string v2, "reward_amount"

    .line 263
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    invoke-virtual {v5, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRewardAmount(I)V

    const-string v2, "reward_play_status"

    .line 264
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    invoke-virtual {v5, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRewardPlayStatus(I)V

    const-string v2, "adv_id"

    .line 267
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v5, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAdvId(Ljava/lang/String;)V

    const-string v2, "ttc_ct2"

    .line 270
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    invoke-virtual {v5, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setTtc_ct2(I)V

    const-string v2, "ttc_type"

    .line 271
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    invoke-virtual {v5, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setTtc_type(I)V

    const-string v2, "retarget"

    .line 273
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    invoke-virtual {v5, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRetarget_offer(I)V

    const-string v2, "unitid"

    .line 276
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v5, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignUnitId(Ljava/lang/String;)V

    .line 278
    invoke-interface {p1, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->TrackingStr2Object(Ljava/lang/String;)Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v2

    invoke-virtual {v5, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setNativeVideoTracking(Lcom/mbridge/msdk/foundation/entity/l;)V

    .line 279
    invoke-interface {p1, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p1, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v5, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setNativeVideoTrackingString(Ljava/lang/String;)V

    const-string v1, "video_end_type"

    .line 281
    invoke-interface {p1, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p1, v1}, Landroid/database/Cursor;->getInt(I)I

    move-result v1

    invoke-virtual {v5, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVideo_end_type(I)V

    const-string v1, "endcard_url"

    .line 282
    invoke-interface {p1, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p1, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v5, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setendcard_url(Ljava/lang/String;)V

    const-string v1, "playable_ads_without_video"

    .line 283
    invoke-interface {p1, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p1, v1}, Landroid/database/Cursor;->getInt(I)I

    move-result v1

    invoke-virtual {v5, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPlayable_ads_without_video(I)V

    .line 284
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p1, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v5, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setLoopbackString(Ljava/lang/String;)V

    .line 285
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    invoke-interface {p1, v0}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->loopbackStrToMap(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v0

    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setLoopbackMap(Ljava/util/Map;)V

    const-string v0, "reward_teamplate"

    .line 290
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    invoke-interface {p1, v0}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v0

    .line 289
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->a(Ljava/lang/String;)Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v0

    .line 288
    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRewardTemplateMode(Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;)V

    const-string v0, "md5_file"

    .line 291
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    invoke-interface {p1, v0}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVideoMD5Value(Ljava/lang/String;)V

    const-string v0, "gif_url"

    .line 292
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    invoke-interface {p1, v0}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setGifUrl(Ljava/lang/String;)V

    const-string v0, "nv_t2"

    .line 293
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    invoke-interface {p1, v0}, Landroid/database/Cursor;->getInt(I)I

    move-result v0

    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setNvT2(I)V

    const-string v0, "c_coi"

    .line 294
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    invoke-interface {p1, v0}, Landroid/database/Cursor;->getInt(I)I

    move-result v0

    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setClickTimeOutInterval(I)V

    const-string v0, "c_ua"

    .line 295
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    invoke-interface {p1, v0}, Landroid/database/Cursor;->getInt(I)I

    move-result v0

    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setcUA(I)V

    const-string v0, "imp_ua"

    .line 296
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    invoke-interface {p1, v0}, Landroid/database/Cursor;->getInt(I)I

    move-result v0

    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setImpUA(I)V

    const-string v0, "gh_id"

    .line 298
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    invoke-interface {p1, v0}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setGhId(Ljava/lang/String;)V

    const-string v0, "gh_path"

    .line 299
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    invoke-interface {p1, v0}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setGhPath(Ljava/lang/String;)V

    const-string v0, "bind_id"

    .line 300
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    invoke-interface {p1, v0}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setBindId(Ljava/lang/String;)V

    const-string v0, "flb"

    .line 301
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    invoke-interface {p1, v0}, Landroid/database/Cursor;->getInt(I)I

    move-result v0

    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setFlb(I)V

    const-string v0, "cbd"

    .line 302
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    invoke-interface {p1, v0}, Landroid/database/Cursor;->getInt(I)I

    move-result v0

    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCbd(I)V

    const-string v0, "vst"

    .line 303
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    invoke-interface {p1, v0}, Landroid/database/Cursor;->getInt(I)I

    move-result v0

    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVst(I)V

    const-string v0, "adspace_t"

    .line 304
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    invoke-interface {p1, v0}, Landroid/database/Cursor;->getInt(I)I

    move-result v0

    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAdSpaceT(I)V

    const-string v0, "flb_skiptime"

    .line 305
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    invoke-interface {p1, v0}, Landroid/database/Cursor;->getInt(I)I

    move-result v0

    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setFlbSkipTime(I)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    move-object v4, v5

    goto :goto_2

    :catch_0
    move-exception v0

    goto :goto_1

    :catchall_0
    move-exception v0

    move-object v4, p1

    goto :goto_5

    :catch_1
    move-exception v0

    move-object v5, v4

    :goto_1
    move-object v4, p1

    goto :goto_3

    :cond_1
    :goto_2
    if-eqz p1, :cond_3

    .line 314
    :try_start_3
    invoke-interface {p1}, Landroid/database/Cursor;->close()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_4

    goto :goto_4

    :catchall_1
    move-exception v0

    goto :goto_5

    :catch_2
    move-exception v0

    move-object v5, v4

    .line 310
    :goto_3
    :try_start_4
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    if-eqz v4, :cond_2

    .line 314
    :try_start_5
    invoke-interface {v4}, Landroid/database/Cursor;->close()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_3

    :catch_3
    :cond_2
    move-object v4, v5

    :catch_4
    :cond_3
    :goto_4
    return-object v4

    :goto_5
    if-eqz v4, :cond_4

    :try_start_6
    invoke-interface {v4}, Landroid/database/Cursor;->close()V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_5

    .line 317
    :catch_5
    :cond_4
    throw v0
.end method

.method public final declared-synchronized i(Ljava/lang/String;)V
    .locals 3

    monitor-enter p0

    .line 371
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "package_name = \'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\'"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 372
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/g;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_0

    .line 373
    monitor-exit p0

    return-void

    .line 375
    :cond_0
    :try_start_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/g;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    const-string v1, "report_campaign"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, p1, v2}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1

    .line 378
    :catch_0
    :goto_0
    monitor-exit p0

    return-void
.end method
