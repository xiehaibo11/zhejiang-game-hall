.class public Lcom/sigmob/sdk/base/models/BaseAdUnit;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/io/Serializable;


# static fields
.field private static final TAG:Ljava/lang/String; = "BaseAdUnit"

.field private static final serialVersionUID:J = 0x1L


# instance fields
.field private ad:Lcom/sigmob/sdk/base/models/rtb/Ad;

.field private transient adConfig:Lcom/sigmob/sdk/base/common/h;

.field private adHeight:I

.field private adPercent:D

.field private adRequest:Lcom/sigmob/sdk/base/models/LoadAdRequest;

.field private adTrackersMap:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/common/g;",
            ">;>;"
        }
    .end annotation
.end field

.field private adWidth:I

.field private ad_scene_desc:Ljava/lang/String;

.field private ad_scene_id:Ljava/lang/String;

.field private ad_source_channel:Ljava/lang/String;

.field private ad_type:I

.field private adslot_id:Ljava/lang/String;

.field private bid_token:Ljava/lang/String;

.field public bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

.field private camp_id:Ljava/lang/String;

.field private catchVideo:Z

.field private clickCommon:Lcom/sigmob/sdk/base/models/ClickCommon;

.field private create_time:J

.field private crid:Ljava/lang/String;

.field private downloadId:Ljava/lang/Long;

.field private endcard_md5:Ljava/lang/String;

.field public expiration_time:I

.field private imageUrlList:Ljava/util/List;

.field private isHalfInterstitial:Z

.field private landUrl:Ljava/lang/String;

.field private load_id:Ljava/lang/String;

.field private mCustomAndroidMarket:Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;

.field private mCustomDeeplink:Ljava/lang/String;

.field private mCustomLandPageUrl:Ljava/lang/String;

.field private transient mSessionManager:Lcom/sigmob/sdk/base/common/ab;

.field private macroCommon:Lcom/sigmob/sdk/base/models/SigMacroCommon;

.field private nativeDesc:Ljava/lang/String;

.field private nativeIconUrl:Ljava/lang/String;

.field private nativeTtitle:Ljava/lang/String;

.field private nativeVideo:Lcom/sigmob/sdk/base/models/SigVideo;

.field private realAdPercent:D

.field private record:Z

.field private request_id:Ljava/lang/String;

.field public scene:Lcom/sigmob/sdk/base/models/rtb/Template;

.field public slotAdSetting:Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

.field public uid:Ljava/lang/String;

.field private uuid:Ljava/lang/String;

.field private videoCommon:Lcom/sigmob/sdk/base/models/VideoStatusCommon;

.field private video_md5:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/high16 v0, -0x4010000000000000L    # -1.0

    iput-wide v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->adPercent:D

    iput-wide v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->realAdPercent:D

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->record:Z

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->catchVideo:Z

    return-void
.end method

.method public static adUnit(Lcom/sigmob/sdk/base/models/rtb/Ad;Ljava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;Lcom/sigmob/sdk/base/models/rtb/Template;Ljava/lang/String;Ljava/lang/Integer;Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;)Lcom/sigmob/sdk/base/models/BaseAdUnit;
    .locals 5

    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->materials:Ljava/util/List;

    const/4 v2, 0x0

    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    if-eqz v1, :cond_5

    new-instance v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-direct {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;-><init>()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    iput-wide v3, v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;->create_time:J

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->adslot_id:Ljava/lang/String;

    iput-object v0, v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;->adslot_id:Ljava/lang/String;

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_type:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    iput v0, v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad_type:I

    iput-object p0, v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad:Lcom/sigmob/sdk/base/models/rtb/Ad;

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->crid:Ljava/lang/String;

    iput-object v0, v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;->crid:Ljava/lang/String;

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->camp_id:Ljava/lang/String;

    iput-object v0, v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;->camp_id:Ljava/lang/String;

    iput-object p1, v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;->request_id:Ljava/lang/String;

    iget-object p1, v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->endcard_md5:Ljava/lang/String;

    iput-object p1, v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;->endcard_md5:Ljava/lang/String;

    iget-object p1, v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_md5:Ljava/lang/String;

    iput-object p1, v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;->video_md5:Ljava/lang/String;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getLoadId()Ljava/lang/String;

    move-result-object p1

    iput-object p1, v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;->load_id:Ljava/lang/String;

    iget-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_source_channel:Ljava/lang/String;

    iput-object p1, v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad_source_channel:Ljava/lang/String;

    iget-object p1, v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->creative_type:Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    sget-object v0, Lcom/sigmob/sdk/base/common/l;->c:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v0

    if-eq p1, v0, :cond_0

    iget-object p1, v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->creative_type:Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    sget-object v0, Lcom/sigmob/sdk/base/common/l;->e:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v0

    if-ne p1, v0, :cond_1

    :cond_0
    iget-object p1, v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_snippet:Lcom/czhj/wire/okio/ByteString;

    if-eqz p1, :cond_1

    iget-object p1, v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_snippet:Lcom/czhj/wire/okio/ByteString;

    invoke-virtual {p1}, Lcom/czhj/wire/okio/ByteString;->size()I

    :cond_1
    iput-object p3, v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;->slotAdSetting:Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    iput-object p2, v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;->adRequest:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    iput-object p4, v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    iput-object p5, v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;->uid:Ljava/lang/String;

    invoke-virtual {p6}, Ljava/lang/Integer;->intValue()I

    move-result p1

    iput p1, v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;->expiration_time:I

    iput-object p7, v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    invoke-static {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->initAdTrackerMap(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_track_macro:Ljava/util/Map;

    if-eqz p1, :cond_2

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object p1

    iget-object p0, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_track_macro:Ljava/util/Map;

    invoke-virtual {p1, p0}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->setServerMacroMap(Ljava/util/Map;)V

    :cond_2
    iget p0, v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad_type:I

    const/4 p1, 0x5

    if-ne p0, p1, :cond_4

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getNativeAd()Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;

    move-result-object p0

    if-nez p0, :cond_4

    iget-object p0, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;->type:Ljava/lang/Integer;

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0

    const/4 p1, 0x1

    if-ne p0, p1, :cond_3

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getNativeVideo()Lcom/sigmob/sdk/base/models/SigVideo;

    goto :goto_0

    :cond_3
    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getImageUrlList()Ljava/util/List;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_4
    :goto_0
    move-object v0, v2

    goto :goto_2

    :catchall_0
    move-exception p0

    move-object v0, v2

    goto :goto_1

    :catchall_1
    move-exception p0

    :goto_1
    const-string p1, "adUnit error"

    invoke-static {p1, p0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_5
    :goto_2
    return-object v0
.end method

.method private static checkFileMD5(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 3

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/Md5Util;->fileMd5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "path: [ "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, " ] calc [ "

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, " ] origin "

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method public static createTrackersForUrls(Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;)Ljava/util/List;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ")",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/common/g;",
            ">;"
        }
    .end annotation

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    new-instance v2, Lcom/sigmob/sdk/base/common/g;

    invoke-direct {v2, v1, p1, p2}, Lcom/sigmob/sdk/base/common/g;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v2, p3}, Lcom/sigmob/sdk/base/common/g;->a(Ljava/lang/Integer;)V

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_0
    return-object v0
.end method

.method public static getSerialVersionUID()J
    .locals 2

    const-wide/16 v0, 0x1

    return-wide v0
.end method

.method public static getTAG()Ljava/lang/String;
    .locals 1

    const-string v0, "BaseAdUnit"

    return-object v0
.end method

.method private static initAdTrackerMap(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 6

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_tracking()Ljava/util/List;

    move-result-object v0

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    iput-object v1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->adTrackersMap:Ljava/util/HashMap;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/base/models/rtb/Tracking;

    iget-object v2, v1, Lcom/sigmob/sdk/base/models/rtb/Tracking;->tracking_url:Ljava/util/List;

    iget-object v3, v1, Lcom/sigmob/sdk/base/models/rtb/Tracking;->tracking_event_type:Ljava/lang/String;

    iget-object v4, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->request_id:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getTrackingRetryNum()I

    move-result v5

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-static {v2, v3, v4, v5}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->createTrackersForUrls(Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;)Ljava/util/List;

    move-result-object v2

    iget-object v3, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->adTrackersMap:Ljava/util/HashMap;

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/rtb/Tracking;->tracking_event_type:Ljava/lang/String;

    invoke-virtual {v3, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_0
    return-void
.end method


# virtual methods
.method public checkEndCardZipValid()Z
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getEndcard_url()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->endcard_md5:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getEndCardZipPath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getEndcard_md5()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->checkFileMD5(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method public checkVideoValid()Z
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideo_url()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->video_md5:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoPath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideo_OriginMD5()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->checkFileMD5(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method public enable_full_click()Z
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getSplashAdSetting()Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->enable_full_click:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad:Lcom/sigmob/sdk/base/models/rtb/Ad;

    return-object v0
.end method

.method public getAdConfig()Lcom/sigmob/sdk/base/common/h;
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->adConfig:Lcom/sigmob/sdk/base/common/h;

    if-nez v0, :cond_3

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_type()I

    move-result v0

    const/4 v1, 0x1

    if-eq v0, v1, :cond_2

    const/4 v1, 0x2

    if-eq v0, v1, :cond_1

    const/4 v1, 0x4

    if-eq v0, v1, :cond_2

    const/4 v1, 0x5

    if-eq v0, v1, :cond_0

    goto :goto_1

    :cond_0
    invoke-static {p0}, Lcom/sigmob/sdk/nativead/b;->f(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Lcom/sigmob/sdk/nativead/b;

    move-result-object v0

    :goto_0
    iput-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->adConfig:Lcom/sigmob/sdk/base/common/h;

    return-object v0

    :cond_1
    invoke-static {p0}, Lcom/sigmob/sdk/splash/c;->f(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Lcom/sigmob/sdk/splash/c;

    move-result-object v0

    goto :goto_0

    :cond_2
    invoke-static {p0}, Lcom/sigmob/sdk/videoAd/a;->f(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Lcom/sigmob/sdk/videoAd/a;

    move-result-object v0

    goto :goto_0

    :cond_3
    :goto_1
    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->adConfig:Lcom/sigmob/sdk/base/common/h;

    return-object v0
.end method

.method public getAdExpiredTime()Ljava/lang/Integer;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad:Lcom/sigmob/sdk/base/models/rtb/Ad;

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->expired_time:Ljava/lang/Integer;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad:Lcom/sigmob/sdk/base/models/rtb/Ad;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->expired_time:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    mul-int/lit16 v0, v0, 0x3e8

    :goto_0
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    goto :goto_0
.end method

.method public getAdLogo()Ljava/lang/String;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_source_logo()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getAdPercent()D
    .locals 5

    iget-wide v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->adPercent:D

    const-wide/16 v2, 0x0

    cmpl-double v4, v0, v2

    if-lez v4, :cond_0

    return-wide v0

    :cond_0
    iget-wide v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->realAdPercent:D

    cmpl-double v2, v0, v2

    if-lez v2, :cond_1

    return-wide v0

    :cond_1
    const-wide v0, 0x3ffc71c720000000L    # 1.7777777910232544

    return-wide v0
.end method

.method public getAdPrivacyTemplateFile()Ljava/io/File;
    .locals 4

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getadPrivacy()Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_url:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/Md5Util;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/base/utils/b;->b:Ljava/lang/String;

    invoke-static {v1}, Lcom/sigmob/sdk/base/utils/b;->b(Ljava/lang/String;)Ljava/io/File;

    move-result-object v1

    new-instance v2, Ljava/io/File;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ".html"

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v2, v1, v0}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    return-object v2

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getAdRequest()Lcom/sigmob/sdk/base/models/LoadAdRequest;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->adRequest:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    return-object v0
.end method

.method public getAdSetting()Lcom/sigmob/sdk/base/models/rtb/AdSetting;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad:Lcom/sigmob/sdk/base/models/rtb/Ad;

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_setting:Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getAdTracker(Lcom/sigmob/sdk/base/common/a;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/sigmob/sdk/base/common/a;",
            ")",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/common/g;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->adTrackersMap:Ljava/util/HashMap;

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/common/a;->a()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/List;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public getAdTracker(Ljava/lang/String;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/common/g;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->adTrackersMap:Ljava/util/HashMap;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/List;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public getAd_scene_desc()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad_scene_desc:Ljava/lang/String;

    return-object v0
.end method

.method public getAd_scene_id()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad_scene_id:Ljava/lang/String;

    return-object v0
.end method

.method public getAd_source_channel()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad_source_channel:Ljava/lang/String;

    return-object v0
.end method

.method public getAd_source_logo()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad:Lcom/sigmob/sdk/base/models/rtb/Ad;

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_source_logo:Ljava/lang/String;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getAd_tracking()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/rtb/Tracking;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad:Lcom/sigmob/sdk/base/models/rtb/Ad;

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_tracking:Ljava/util/List;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getAd_type()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad_type:I

    return v0
.end method

.method public getAdslot_id()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->adslot_id:Ljava/lang/String;

    return-object v0
.end method

.method public getAndroidMarket()Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->android_market:Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-nez v0, :cond_1

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->mCustomAndroidMarket:Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;

    if-eqz v1, :cond_1

    return-object v1

    :cond_1
    return-object v0
.end method

.method public getAppName()Ljava/lang/String;
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getadPrivacy()Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_info:Ljava/util/Map;

    if-eqz v1, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_info:Ljava/util/Map;

    const-string v1, "app_name"

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getAppVersion()Ljava/lang/String;
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getadPrivacy()Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_info:Ljava/util/Map;

    if-eqz v1, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_info:Ljava/util/Map;

    const-string v1, "app_version"

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getBid_token()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->bid_token:Ljava/lang/String;

    return-object v0
.end method

.method public getBubInteractionType()I
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->sub_interaction_type:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public getCTAText()Ljava/lang/String;
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->button_text:Ljava/lang/String;

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    goto :goto_1

    :cond_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getInteractionType()I

    move-result v0

    const/4 v1, 0x2

    if-eq v0, v1, :cond_2

    const-string v0, "\u67e5\u770b\u8be6\u60c5"

    goto :goto_1

    :cond_2
    const-string v0, "\u7acb\u5373\u4e0b\u8f7d"

    :goto_1
    return-object v0
.end method

.method public getCamp_id()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->camp_id:Ljava/lang/String;

    return-object v0
.end method

.method public getClickAreaSetting()Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;
    .locals 3

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getRvAdSetting()Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    move-result-object v0

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->click_setting:Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    if-nez v1, :cond_0

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;-><init>()V

    const v1, 0x3dcccccd    # 0.1f

    invoke-static {v1}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v2

    iput-object v2, v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->bottom:Ljava/lang/Float;

    invoke-static {v1}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v2

    iput-object v2, v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->right:Ljava/lang/Float;

    invoke-static {v1}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v2

    iput-object v2, v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->top:Ljava/lang/Float;

    invoke-static {v1}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v1

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->left:Ljava/lang/Float;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    move-result-object v0

    return-object v0

    :cond_0
    if-eqz v0, :cond_1

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->click_setting:Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    return-object v0

    :cond_1
    const/4 v0, 0x0

    return-object v0
.end method

.method public getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->clickCommon:Lcom/sigmob/sdk/base/models/ClickCommon;

    if-nez v0, :cond_0

    new-instance v0, Lcom/sigmob/sdk/base/models/ClickCommon;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/ClickCommon;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->clickCommon:Lcom/sigmob/sdk/base/models/ClickCommon;

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->clickCommon:Lcom/sigmob/sdk/base/models/ClickCommon;

    return-object v0
.end method

.method public getCloseCardHtmlData()Ljava/lang/String;
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->closecard_html_snippet:Lcom/czhj/wire/okio/ByteString;

    if-nez v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->closecard_html_snippet:Lcom/czhj/wire/okio/ByteString;

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->size()I

    move-result v0

    const/16 v1, 0xa

    if-ge v0, v1, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->closecard_html_snippet:Lcom/czhj/wire/okio/ByteString;

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->utf8()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    :goto_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getCompanyName()Ljava/lang/String;
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getadPrivacy()Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_info:Ljava/util/Map;

    if-eqz v1, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_info:Ljava/util/Map;

    const-string v1, "app_company"

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getCreate_time()J
    .locals 2

    iget-wide v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->create_time:J

    return-wide v0
.end method

.method public getCreativeResourceType()Lcom/sigmob/sdk/base/views/k$b;
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getEndcard_url()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCreativeType()I

    move-result v0

    sget-object v1, Lcom/sigmob/sdk/base/common/l;->a:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v1

    if-eq v0, v1, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCreativeType()I

    move-result v0

    sget-object v1, Lcom/sigmob/sdk/base/common/l;->d:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v1

    if-ne v0, v1, :cond_1

    :cond_0
    sget-object v0, Lcom/sigmob/sdk/base/views/k$b;->d:Lcom/sigmob/sdk/base/views/k$b;

    return-object v0

    :cond_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getHtmlData()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    sget-object v0, Lcom/sigmob/sdk/base/views/k$b;->b:Lcom/sigmob/sdk/base/views/k$b;

    return-object v0

    :cond_2
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getHtmlUrl()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    sget-object v0, Lcom/sigmob/sdk/base/views/k$b;->e:Lcom/sigmob/sdk/base/views/k$b;

    return-object v0

    :cond_3
    sget-object v0, Lcom/sigmob/sdk/base/views/k$b;->d:Lcom/sigmob/sdk/base/views/k$b;

    return-object v0
.end method

.method public getCreativeType()I
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->creative_type:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public getCrid()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->crid:Ljava/lang/String;

    return-object v0
.end method

.method public getDeeplinkUrl()Ljava/lang/String;
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->deeplink_url:Ljava/lang/String;

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->mCustomDeeplink:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->mCustomDeeplink:Ljava/lang/String;

    :cond_1
    return-object v0
.end method

.method public getDesc()Ljava/lang/String;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->desc:Ljava/lang/String;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getDisableAutoLoad()Z
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getRvAdSetting()Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->disable_auto_load:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public getDownloadId()Ljava/lang/Long;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->downloadId:Ljava/lang/Long;

    return-object v0
.end method

.method public getEndCardDirPath()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/sigmob/sdk/base/utils/b;->b()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getEndcard_md5()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v1, v3

    const-string v2, "/%s/"

    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getEndCardIndexPath()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getEndCardDirPath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "endcard.html"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getEndCardZipPath()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/sigmob/sdk/base/utils/b;->b()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->endcard_md5:Ljava/lang/String;

    const/4 v3, 0x0

    aput-object v2, v1, v3

    const-string v2, "/%s.tgz"

    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getEndCard_OriginMD5()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->endcard_md5:Ljava/lang/String;

    return-object v0
.end method

.method public getEndTime()I
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getRvAdSetting()Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->end_time:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public getEndcardCloseImage()I
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getRvAdSetting()Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->endcard_close_image:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public getEndcard_md5()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->endcard_md5:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->endcard_md5:Ljava/lang/String;

    return-object v0

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCrid()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/Md5Util;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getEndcard_url()Ljava/lang/String;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->endcard_url:Ljava/lang/String;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getFinishedTime()F
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getRvAdSetting()Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->finished:Ljava/lang/Float;

    invoke-virtual {v0}, Ljava/lang/Float;->floatValue()F

    move-result v0

    return v0

    :cond_0
    const/high16 v0, 0x3f800000    # 1.0f

    return v0
.end method

.method public getFullClickOnVideo()Z
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getRvAdSetting()Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->full_click_on_video:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public getHtmlData()Ljava/lang/String;
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_snippet:Lcom/czhj/wire/okio/ByteString;

    if-nez v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_snippet:Lcom/czhj/wire/okio/ByteString;

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->size()I

    move-result v0

    const/16 v1, 0xa

    if-ge v0, v1, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_snippet:Lcom/czhj/wire/okio/ByteString;

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->utf8()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    :goto_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getHtmlUrl()Ljava/lang/String;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_url:Ljava/lang/String;

    return-object v0
.end method

.method public getIconUrl()Ljava/lang/String;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->icon_url:Ljava/lang/String;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getImageUrlList()Ljava/util/List;
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/SigImage;",
            ">;"
        }
    .end annotation

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getNativeAd()Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->imageUrlList:Ljava/util/List;

    if-nez v1, :cond_2

    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    iput-object v1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->imageUrlList:Ljava/util/List;

    if-eqz v0, :cond_2

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;->type:Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    const/4 v2, 0x1

    if-eq v1, v2, :cond_2

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;->assets:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/base/models/rtb/ResponseAsset;

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/rtb/ResponseAsset;->image:Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage;

    if-eqz v1, :cond_0

    new-instance v2, Lcom/sigmob/sdk/base/models/SigImage;

    invoke-direct {v2}, Lcom/sigmob/sdk/base/models/SigImage;-><init>()V

    iget-object v3, v1, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage;->url:Ljava/lang/String;

    iput-object v3, v2, Lcom/sigmob/sdk/base/models/SigImage;->imageUrl:Ljava/lang/String;

    iget-object v3, v1, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage;->h:Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    iput v3, v2, Lcom/sigmob/sdk/base/models/SigImage;->height:I

    iget-object v3, v1, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage;->w:Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    iput v3, v2, Lcom/sigmob/sdk/base/models/SigImage;->width:I

    iget-wide v3, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->adPercent:D

    const-wide/16 v5, 0x0

    cmpg-double v3, v3, v5

    if-gez v3, :cond_1

    iget-object v3, v1, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage;->w:Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    if-lez v3, :cond_1

    iget-object v3, v1, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage;->h:Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    if-lez v3, :cond_1

    iget-object v3, v1, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage;->w:Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    int-to-float v3, v3

    const/high16 v4, 0x3f800000    # 1.0f

    mul-float/2addr v3, v4

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage;->h:Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    int-to-float v1, v1

    div-float/2addr v3, v1

    float-to-double v3, v3

    iput-wide v3, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->adPercent:D

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->imageUrlList:Ljava/util/List;

    invoke-interface {v1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_2
    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->imageUrlList:Ljava/util/List;

    return-object v0
.end method

.method public getInteractionType()I
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->interaction_type:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x1

    return v0
.end method

.method public getInvisibleAdLabel()Z
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_type()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getSplashAdSetting()Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->invisible_ad_label:Ljava/lang/Boolean;

    :goto_0
    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_type()I

    move-result v0

    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_type()I

    move-result v0

    const/4 v1, 0x4

    if-ne v0, v1, :cond_2

    :cond_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getRvAdSetting()Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->invisible_ad_label:Ljava/lang/Boolean;

    goto :goto_0

    :cond_2
    const/4 v0, 0x0

    return v0
.end method

.method public getLandUrl()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->landUrl:Ljava/lang/String;

    return-object v0
.end method

.method public getLanding_page()Ljava/lang/String;
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->landing_page:Ljava/lang/String;

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->mCustomLandPageUrl:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->mCustomLandPageUrl:Ljava/lang/String;

    :cond_1
    return-object v0
.end method

.method public getLoad_id()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->load_id:Ljava/lang/String;

    return-object v0
.end method

.method public getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->macroCommon:Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-nez v0, :cond_0

    new-instance v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/SigMacroCommon;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->macroCommon:Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideo_url()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    :try_start_0
    const-string v1, "UTF-8"

    invoke-static {v0, v1}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->macroCommon:Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v2, "_VURL_"

    invoke-virtual {v1, v2, v0}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/io/UnsupportedEncodingException;->printStackTrace()V

    :cond_0
    :goto_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->macroCommon:Lcom/sigmob/sdk/base/models/SigMacroCommon;

    return-object v0
.end method

.method public getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad:Lcom/sigmob/sdk/base/models/rtb/Ad;

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->materials:Ljava/util/List;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad:Lcom/sigmob/sdk/base/models/rtb/Ad;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->materials:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad:Lcom/sigmob/sdk/base/models/rtb/Ad;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->materials:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getNativeAd()Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad:Lcom/sigmob/sdk/base/models/rtb/Ad;

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->materials:Ljava/util/List;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad:Lcom/sigmob/sdk/base/models/rtb/Ad;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->materials:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad:Lcom/sigmob/sdk/base/models/rtb/Ad;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->materials:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->native_ad:Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return-object v0
.end method

.method public getNativeAdSetting()Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->slotAdSetting:Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->native_setting:Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getNativeVideo()Lcom/sigmob/sdk/base/models/SigVideo;
    .locals 7

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getNativeAd()Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->nativeVideo:Lcom/sigmob/sdk/base/models/SigVideo;

    if-nez v1, :cond_4

    if-eqz v0, :cond_4

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;->type:Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    const/4 v2, 0x1

    if-ne v1, v2, :cond_4

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;->assets:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_4

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/base/models/rtb/ResponseAsset;

    iget-object v2, v1, Lcom/sigmob/sdk/base/models/rtb/ResponseAsset;->video:Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;

    if-eqz v2, :cond_2

    iget-object v3, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->nativeVideo:Lcom/sigmob/sdk/base/models/SigVideo;

    if-nez v3, :cond_1

    new-instance v3, Lcom/sigmob/sdk/base/models/SigVideo;

    invoke-direct {v3}, Lcom/sigmob/sdk/base/models/SigVideo;-><init>()V

    iput-object v3, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->nativeVideo:Lcom/sigmob/sdk/base/models/SigVideo;

    :cond_1
    iget-object v3, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->nativeVideo:Lcom/sigmob/sdk/base/models/SigVideo;

    iget-object v4, v2, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;->url:Ljava/lang/String;

    iput-object v4, v3, Lcom/sigmob/sdk/base/models/SigVideo;->url:Ljava/lang/String;

    iget-object v3, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->nativeVideo:Lcom/sigmob/sdk/base/models/SigVideo;

    iget-object v4, v2, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;->h:Ljava/lang/Integer;

    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v4

    iput v4, v3, Lcom/sigmob/sdk/base/models/SigVideo;->height:I

    iget-object v3, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->nativeVideo:Lcom/sigmob/sdk/base/models/SigVideo;

    iget-object v4, v2, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;->w:Ljava/lang/Integer;

    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v4

    iput v4, v3, Lcom/sigmob/sdk/base/models/SigVideo;->width:I

    iget-wide v3, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->adPercent:D

    const-wide/16 v5, 0x0

    cmpg-double v3, v3, v5

    if-gez v3, :cond_2

    iget-object v3, v2, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;->h:Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    if-lez v3, :cond_2

    iget-object v3, v2, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;->w:Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    if-lez v3, :cond_2

    iget-object v3, v2, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;->w:Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    int-to-float v3, v3

    const/high16 v4, 0x3f800000    # 1.0f

    mul-float/2addr v3, v4

    iget-object v2, v2, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;->h:Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    int-to-float v2, v2

    div-float/2addr v3, v2

    float-to-double v2, v3

    iput-wide v2, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->adPercent:D

    :cond_2
    iget-object v1, v1, Lcom/sigmob/sdk/base/models/rtb/ResponseAsset;->image:Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage;

    if-eqz v1, :cond_0

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->nativeVideo:Lcom/sigmob/sdk/base/models/SigVideo;

    if-nez v2, :cond_3

    new-instance v2, Lcom/sigmob/sdk/base/models/SigVideo;

    invoke-direct {v2}, Lcom/sigmob/sdk/base/models/SigVideo;-><init>()V

    iput-object v2, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->nativeVideo:Lcom/sigmob/sdk/base/models/SigVideo;

    :cond_3
    iget-object v2, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->nativeVideo:Lcom/sigmob/sdk/base/models/SigVideo;

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage;->url:Ljava/lang/String;

    iput-object v1, v2, Lcom/sigmob/sdk/base/models/SigVideo;->thumbUrl:Ljava/lang/String;

    goto :goto_0

    :cond_4
    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->nativeVideo:Lcom/sigmob/sdk/base/models/SigVideo;

    return-object v0
.end method

.method public getPlayMode()I
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->play_mode:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public getProductId()Ljava/lang/String;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->product_id:Ljava/lang/String;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getProxyVideoUrl()Ljava/lang/String;
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideo_url()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->c()Lcom/sigmob/sdk/videocache/h;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/videocache/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    :cond_0
    return-object v0
.end method

.method public getRequestId()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->request_id:Ljava/lang/String;

    return-object v0
.end method

.method public getRvAdSetting()Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->slotAdSetting:Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->rv_setting:Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getScene()Lcom/sigmob/sdk/base/models/rtb/Template;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    return-object v0
.end method

.method public getSessionManager()Lcom/sigmob/sdk/base/common/ab;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->mSessionManager:Lcom/sigmob/sdk/base/common/ab;

    return-object v0
.end method

.method public getSingleNativeSetting()Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdSetting()Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->single_native_setting:Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getSkipSeconds()I
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getRvAdSetting()Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->skip_seconds:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, -0x1

    return v0
.end method

.method public getSlotAdSetting()Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->slotAdSetting:Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    return-object v0
.end method

.method public getSplashAdSetting()Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getSlotAdSetting()Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->splash_setting:Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getSplashFilePath()Ljava/lang/String;
    .locals 2

    sget-object v0, Lcom/sigmob/sdk/base/common/l;->g:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v1

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->creative_type:Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    if-ne v0, v1, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/sigmob/sdk/base/utils/b;->d()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v1

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_url:Ljava/lang/String;

    :goto_0
    invoke-static {v1}, Lcom/czhj/sdk/common/utils/Md5Util;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/sigmob/sdk/base/utils/b;->d()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v1

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_src:Ljava/lang/String;

    goto :goto_0
.end method

.method public getSplashURL()Ljava/lang/String;
    .locals 2

    sget-object v0, Lcom/sigmob/sdk/base/common/l;->g:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v1

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->creative_type:Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    if-ne v0, v1, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_url:Ljava/lang/String;

    return-object v0

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_src:Ljava/lang/String;

    return-object v0
.end method

.method public getTitle()Ljava/lang/String;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->title:Ljava/lang/String;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getTrackingRetryNum()I
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->slotAdSetting:Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->retry_count:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public getUuid()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->uuid:Ljava/lang/String;

    if-nez v0, :cond_0

    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->uuid:Ljava/lang/String;

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->uuid:Ljava/lang/String;

    return-object v0
.end method

.method public getVid()Ljava/lang/String;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->vid:Ljava/lang/String;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->videoCommon:Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    if-nez v0, :cond_0

    new-instance v0, Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/VideoStatusCommon;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->videoCommon:Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->videoCommon:Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    return-object v0
.end method

.method public getVideoPath()Ljava/lang/String;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoProxyFile()Ljava/io/File;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getVideoProxyFile()Ljava/io/File;
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideo_url()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->c()Lcom/sigmob/sdk/videocache/h;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/videocache/h;->c(Ljava/lang/String;)Ljava/io/File;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getVideoThumbUrl()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->nativeVideo:Lcom/sigmob/sdk/base/models/SigVideo;

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/SigVideo;->thumbUrl:Ljava/lang/String;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getVideoTmpPath()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/sigmob/sdk/base/utils/b;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideo_md5()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v1, v3

    const-string v2, "/%s.mp4.tmp"

    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getVideo_OriginMD5()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->video_md5:Ljava/lang/String;

    return-object v0
.end method

.method public getVideo_md5()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->video_md5:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->video_md5:Ljava/lang/String;

    return-object v0

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideo_url()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/Md5Util;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getVideo_url()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad:Lcom/sigmob/sdk/base/models/rtb/Ad;

    if-eqz v0, :cond_1

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->materials:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    iget v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad_type:I

    const/4 v1, 0x5

    if-ne v0, v1, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getNativeVideo()Lcom/sigmob/sdk/base/models/SigVideo;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/SigVideo;->url:Ljava/lang/String;

    return-object v0

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad:Lcom/sigmob/sdk/base/models/rtb/Ad;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->materials:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_url:Ljava/lang/String;

    return-object v0

    :cond_1
    const/4 v0, 0x0

    return-object v0
.end method

.method public getWXProgramRes()Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->wx_program_res:Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;

    if-eqz v1, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->wx_program_res:Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getadPrivacy()Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->ad_privacy:Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getadslot_id()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->adslot_id:Ljava/lang/String;

    return-object v0
.end method

.method public isCatchVideo()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->catchVideo:Z

    return v0
.end method

.method public isClickAutoCloseSplash()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public isDisablexRequestWith()Z
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->slotAdSetting:Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->disable_x_requested_with:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public isDownloadDialog()Z
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->download_dialog:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public isEndCardIndexExist()Z
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getEndcard_url()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCreativeType()I

    move-result v0

    sget-object v1, Lcom/sigmob/sdk/base/common/l;->a:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v1

    if-eq v0, v1, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCreativeType()I

    move-result v0

    sget-object v1, Lcom/sigmob/sdk/base/common/l;->d:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v1

    if-ne v0, v1, :cond_1

    :cond_0
    new-instance v0, Ljava/io/File;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getEndCardIndexPath()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    return v0

    :cond_1
    const/4 v0, 0x1

    return v0
.end method

.method public isHalfInterstitial()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->isHalfInterstitial:Z

    return v0
.end method

.method public isNativeAdH5()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public isRecord()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->record:Z

    return v0
.end method

.method public isSkipSigmobBrowser()Z
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_setting:Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_setting:Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->in_app:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    return v0

    :cond_0
    const/4 v0, 0x1

    return v0
.end method

.method public isUse_floating_btn()Z
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getSplashAdSetting()Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->use_floating_btn:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public isVideoExist()Z
    .locals 4

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideo_url()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoPath()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/io/File;

    invoke-direct {v1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "isVideoExist path :"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " isExist: "

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return v1
.end method

.method public resourcePath()Ljava/lang/String;
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getEndcard_url()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCreativeType()I

    move-result v0

    sget-object v1, Lcom/sigmob/sdk/base/common/l;->a:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v1

    if-eq v0, v1, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCreativeType()I

    move-result v0

    sget-object v1, Lcom/sigmob/sdk/base/common/l;->d:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v1

    if-ne v0, v1, :cond_1

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getEndCardIndexPath()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getHtmlData()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getHtmlData()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_2
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getHtmlUrl()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public setAd(Lcom/sigmob/sdk/base/models/rtb/Ad;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad:Lcom/sigmob/sdk/base/models/rtb/Ad;

    return-void
.end method

.method public setAdSize(II)V
    .locals 2

    iput p1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->adWidth:I

    iput p2, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->adWidth:I

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v0

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string v1, "_WIDTH_"

    invoke-virtual {v0, v1, p1}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object p1

    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p2

    const-string v0, "_HEIGHT_"

    invoke-virtual {p1, v0, p2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public setAd_scene_desc(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad_scene_desc:Ljava/lang/String;

    return-void
.end method

.method public setAd_scene_id(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad_scene_id:Ljava/lang/String;

    return-void
.end method

.method public setAd_source_channel(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad_source_channel:Ljava/lang/String;

    return-void
.end method

.method public setAd_type(I)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->ad_type:I

    return-void
.end method

.method public setAdslot_id(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->adslot_id:Ljava/lang/String;

    return-void
.end method

.method public setBid_token(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->bid_token:Ljava/lang/String;

    return-void
.end method

.method public setCamp_id(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->camp_id:Ljava/lang/String;

    return-void
.end method

.method public setCatchVideo(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->catchVideo:Z

    return-void
.end method

.method public setCreate_time(J)V
    .locals 0

    iput-wide p1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->create_time:J

    return-void
.end method

.method public setCrid(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->crid:Ljava/lang/String;

    return-void
.end method

.method public setCustomAndroidMarket(Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->mCustomAndroidMarket:Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;

    return-void
.end method

.method public setCustomDeeplink(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->mCustomDeeplink:Ljava/lang/String;

    return-void
.end method

.method public setCustomLandPageUrl(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->mCustomLandPageUrl:Ljava/lang/String;

    return-void
.end method

.method public setDownloadId(J)V
    .locals 0

    invoke-static {p1, p2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->downloadId:Ljava/lang/Long;

    return-void
.end method

.method public setEndcard_md5(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->endcard_md5:Ljava/lang/String;

    return-void
.end method

.method public setHalfInterstitial(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->isHalfInterstitial:Z

    return-void
.end method

.method public setLoad_id(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->load_id:Ljava/lang/String;

    return-void
.end method

.method public setMacroCommon(Lcom/sigmob/sdk/base/models/SigMacroCommon;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->macroCommon:Lcom/sigmob/sdk/base/models/SigMacroCommon;

    return-void
.end method

.method public setRecord(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->record:Z

    return-void
.end method

.method public setRequest_id(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->request_id:Ljava/lang/String;

    return-void
.end method

.method public setSessionManager(Lcom/sigmob/sdk/base/common/ab;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->mSessionManager:Lcom/sigmob/sdk/base/common/ab;

    return-void
.end method

.method public setUrl(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->landUrl:Ljava/lang/String;

    return-void
.end method

.method public setVideo_md5(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->video_md5:Ljava/lang/String;

    return-void
.end method

.method public setadslot_id(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->adslot_id:Ljava/lang/String;

    return-void
.end method

.method public updateRealAdPercent(D)V
    .locals 0

    iput-wide p1, p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->realAdPercent:D

    return-void
.end method
