.class public Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;
.super Lcom/mbridge/msdk/out/Campaign;
.source "DomainCampaignEx.java"

# interfaces
.implements Lcom/mbridge/msdk/system/NoProGuard;
.implements Ljava/io/Serializable;


# static fields
.field public static final JSON_KEY_ADV_ID:Ljava/lang/String; = "adv_id"

.field public static final JSON_KEY_AD_TRACKING_APK_END:Ljava/lang/String; = "apk_download_end"

.field public static final JSON_KEY_AD_TRACKING_APK_INSTALL:Ljava/lang/String; = "apk_install"

.field public static final JSON_KEY_AD_TRACKING_APK_START:Ljava/lang/String; = "apk_download_start"

.field public static final JSON_KEY_AKDLUI:Ljava/lang/String; = "akdlui"

.field public static final JSON_KEY_APK_ALT:Ljava/lang/String; = "apk_alt"

.field public static final JSON_KEY_APK_INFO:Ljava/lang/String; = "apk_info"

.field public static final JSON_KEY_ATAT_TYPE:Ljava/lang/String; = "atat_type"

.field public static final JSON_KEY_DISPLAY_APK_ALT:Ljava/lang/String; = "disableApkAlt"

.field public static final JSON_KEY_NTBARPASBL:Ljava/lang/String; = "ntbarpasbl"

.field public static final JSON_KEY_NTBARPT:Ljava/lang/String; = "ntbarpt"

.field public static final JSON_KEY_PRE_CLICK:Ljava/lang/String; = "ttc"

.field public static final JSON_KEY_PRE_CLICK_ERROR_INTERVAL:Ljava/lang/String; = "ttc_pe"

.field public static final JSON_KEY_PRE_CLICK_INTERVAL:Ljava/lang/String; = "ttc_ct"

.field public static final JSON_KEY_PRE_CLICK_OTHER_INTERVAL:Ljava/lang/String; = "ttc_po"

.field public static final JSON_KEY_TTC_CT2:Ljava/lang/String; = "ttc_ct2"

.field public static final JSON_KEY_TTC_TYPE:Ljava/lang/String; = "ttc_type"

.field public static final KEY_BIND_ID:Ljava/lang/String; = "bind_id"

.field public static final KEY_GH_ID:Ljava/lang/String; = "gh_id"

.field public static final KEY_GH_PATH:Ljava/lang/String; = "gh_path"

.field public static final LOOPBACK:Ljava/lang/String; = "loopback"

.field public static final LOOPBACK_DOMAIN:Ljava/lang/String; = "domain"

.field public static final LOOPBACK_KEY:Ljava/lang/String; = "key"

.field public static final LOOPBACK_VALUE:Ljava/lang/String; = "value"

.field public static final ROVER_KEY_IS_POST:Ljava/lang/String; = "isPost"

.field public static final ROVER_KEY_MARK:Ljava/lang/String; = "mark"

.field public static final TAG:Ljava/lang/String;

.field public static final TTC_CT2_DEFAULT_VALUE:I = 0x708

.field public static final TTC_CT_DEFAULT_VALUE:I = 0x93a80

.field private static final serialVersionUID:J = 0x1L


# instance fields
.field private advId:Ljava/lang/String;

.field private akdlui:Ljava/lang/String;

.field private apk_alt:I

.field private atatType:I

.field private bindId:Ljava/lang/String;

.field private displayApkAlt:I

.field private ghId:Ljava/lang/String;

.field private ghPath:Ljava/lang/String;

.field private jumpResult:Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

.field private loopbackMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private loopbackString:Ljava/lang/String;

.field private ntbarpasbl:I

.field private ntbarpt:I

.field private preClick:Z

.field private preClickInterval:I

.field private roverIsPost:I

.field private roverMark:Ljava/lang/String;

.field private ttc_ct2:I

.field private ttc_type:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 39
    const-class v0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 37
    invoke-direct {p0}, Lcom/mbridge/msdk/out/Campaign;-><init>()V

    const/4 v0, 0x0

    .line 40
    iput v0, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->apk_alt:I

    .line 41
    iput v0, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->displayApkAlt:I

    .line 70
    iput v0, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->ntbarpt:I

    .line 74
    iput v0, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->ntbarpasbl:I

    .line 82
    iput v0, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->atatType:I

    const-string v1, ""

    .line 86
    iput-object v1, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->akdlui:Ljava/lang/String;

    .line 194
    iput-boolean v0, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->preClick:Z

    return-void
.end method

.method public static campaignToJsonObject(Lorg/json/JSONObject;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lorg/json/JSONObject;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    if-nez p1, :cond_0

    return-object p0

    .line 562
    :cond_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isPreClick()Z

    move-result v0

    const-string v1, "ttc"

    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    .line 564
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPreClickInterval()I

    move-result v0

    const-string v1, "ttc_ct"

    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 566
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdvId()Ljava/lang/String;

    move-result-object v0

    const-string v1, "adv_id"

    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 567
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTtc_type()I

    move-result v0

    const-string v1, "ttc_type"

    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 570
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTtc_ct2()I

    move-result v0

    const-string v1, "ttc_ct2"

    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 575
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getGhId()Ljava/lang/String;

    move-result-object v0

    const-string v1, "gh_id"

    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 576
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getGhPath()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/t;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "gh_path"

    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 577
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBindId()Ljava/lang/String;

    move-result-object v0

    const-string v1, "bind_id"

    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 580
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getApkAlt()I

    move-result v0

    const-string v1, "apk_alt"

    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 581
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getDisplayApkAlt()I

    move-result v0

    const-string v1, "disableApkAlt"

    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 582
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getApkDisplayInfo()Lcom/mbridge/msdk/out/ApkDisplayInfo;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 583
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getApkDisplayInfo()Lcom/mbridge/msdk/out/ApkDisplayInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    const-string v1, "apk_info"

    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 585
    :cond_1
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRoverMark()Ljava/lang/String;

    move-result-object v0

    const-string v1, "mark"

    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 587
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRoverIsPost()I

    move-result v0

    const-string v1, "isPost"

    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 589
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNvT2()I

    move-result v0

    const-string v1, "nv_t2"

    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 591
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNtbarpasbl()I

    move-result v0

    const-string v1, "ntbarpasbl"

    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 592
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNtbarpt()I

    move-result v0

    const-string v1, "ntbarpt"

    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 593
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAtatType()I

    move-result v0

    const-string v1, "atat_type"

    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 594
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAkdlui()Ljava/lang/String;

    move-result-object p1

    const-string v0, "akdlui"

    invoke-virtual {p0, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    return-object p0
.end method

.method public static loopbackStrToMap(Ljava/lang/String;)Ljava/util/Map;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    const-string v0, "value"

    const-string v1, "key"

    const-string v2, "domain"

    const/4 v3, 0x0

    .line 518
    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    .line 519
    new-instance v4, Ljava/util/HashMap;

    invoke-direct {v4}, Ljava/util/HashMap;-><init>()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 520
    :try_start_1
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 522
    invoke-virtual {v3, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-interface {v4, v2, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 523
    invoke-virtual {v3, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-interface {v4, v1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 524
    invoke-virtual {v3, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-interface {v4, v0, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move-object v3, v4

    goto :goto_0

    :catchall_0
    move-object v3, v4

    :catchall_1
    const-string p0, ""

    const-string v0, "loopbackStrToMap error"

    .line 528
    invoke-static {p0, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-object v3
.end method

.method public static parseCampaign(Lorg/json/JSONObject;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 5

    const-string v0, "cam_html"

    const-string v1, ""

    const-string v2, "loopback"

    if-eqz p0, :cond_3

    if-eqz p1, :cond_3

    :try_start_0
    const-string v3, "ttc"

    .line 455
    invoke-virtual {p0, v3}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v3

    invoke-virtual {p1, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPreClick(Z)V

    const-string v3, "ttc_ct"

    const v4, 0x93a80

    .line 457
    invoke-virtual {p0, v3, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v3

    invoke-virtual {p1, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPreClickInterval(I)V

    const-string v3, "adv_id"

    .line 459
    invoke-virtual {p0, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p1, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAdvId(Ljava/lang/String;)V

    const-string v3, "ttc_type"

    const/4 v4, 0x3

    .line 460
    invoke-virtual {p0, v3, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v3

    invoke-virtual {p1, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setTtc_type(I)V

    const-string v3, "ttc_ct2"

    const/16 v4, 0x708

    .line 461
    invoke-virtual {p0, v3, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v3

    invoke-virtual {p1, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setTtc_ct2(I)V

    const-string v3, "mark"

    .line 466
    invoke-virtual {p0, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p1, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRoverMark(Ljava/lang/String;)V

    const-string v3, "isPost"

    .line 467
    invoke-virtual {p0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {p1, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRoverIsPost(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 470
    :try_start_1
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 471
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 472
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    .line 473
    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setLoopbackString(Ljava/lang/String;)V

    .line 474
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->loopbackStrToMap(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v2

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setLoopbackMap(Ljava/util/Map;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    :try_start_2
    const-string v2, "loopback parser error"

    .line 478
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    const-string v2, "gh_id"

    .line 483
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 484
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_2

    .line 485
    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setGhId(Ljava/lang/String;)V

    const-string v2, "gh_path"

    .line 486
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 487
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 488
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/t;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setGhPath(Ljava/lang/String;)V

    :cond_1
    const-string v2, "bind_id"

    .line 490
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setBindId(Ljava/lang/String;)V

    .line 493
    :cond_2
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setBannerHtml(Ljava/lang/String;)V

    .line 494
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAdHtml(Ljava/lang/String;)V

    const-string v0, "apk_alt"

    const/4 v2, 0x0

    .line 497
    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setApkAlt(I)V

    const-string v0, "disableApkAlt"

    .line 498
    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setDisplayApkAlt(I)V

    const-string v0, "apk_info"

    .line 499
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->parseByString(Ljava/lang/String;)Lcom/mbridge/msdk/out/ApkDisplayInfo;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setApkDisplayInfo(Lcom/mbridge/msdk/out/ApkDisplayInfo;)V

    const-string v0, "ntbarpasbl"

    .line 500
    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setNtbarpasbl(I)V

    const-string v0, "ntbarpt"

    .line 501
    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setNtbarpt(I)V

    const-string v0, "atat_type"

    .line 502
    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAtatType(I)V

    const-string v0, "akdlui"

    .line 503
    invoke-virtual {p0, v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAkdlui(Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    return-object p1

    :catch_1
    move-exception p0

    .line 505
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    .line 506
    sget-object v0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "parse campaign json exception: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object p1

    :cond_3
    const/4 p0, 0x0

    return-object p0
.end method

.method public static parseCampaignWithBackData(Lorg/json/JSONObject;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 4

    const-string v0, ""

    const-string v1, "loopback"

    if-eqz p0, :cond_3

    if-eqz p1, :cond_3

    :try_start_0
    const-string v2, "ttc"

    .line 328
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v2

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPreClick(Z)V

    const-string v2, "ttc_ct"

    const v3, 0x93a80

    .line 330
    invoke-virtual {p0, v2, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPreClickInterval(I)V

    const-string v2, "adv_id"

    .line 333
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAdvId(Ljava/lang/String;)V

    const-string v2, "ttc_type"

    const/4 v3, 0x3

    .line 334
    invoke-virtual {p0, v2, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setTtc_type(I)V

    const-string v2, "ttc_ct2"

    const/16 v3, 0x708

    .line 335
    invoke-virtual {p0, v2, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setTtc_ct2(I)V

    .line 338
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-virtual {p1, v2, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setTimestamp(J)V

    const-string v2, "html_url"

    .line 341
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setHtmlUrl(Ljava/lang/String;)V

    const-string v2, "end_screen_url"

    .line 342
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setEndScreenUrl(Ljava/lang/String;)V

    const-string v2, "mark"

    .line 346
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRoverMark(Ljava/lang/String;)V

    const-string v2, "isPost"

    .line 347
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRoverIsPost(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 351
    :try_start_1
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 352
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 353
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 354
    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setLoopbackString(Ljava/lang/String;)V

    .line 355
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->loopbackStrToMap(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v1

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setLoopbackMap(Ljava/util/Map;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    :try_start_2
    const-string v1, "loopback parser error"

    .line 359
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    const-string v1, "gh_id"

    .line 364
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 365
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 366
    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setGhId(Ljava/lang/String;)V

    const-string v1, "gh_path"

    .line 367
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 368
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 369
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/t;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setGhPath(Ljava/lang/String;)V

    :cond_1
    const-string v1, "bind_id"

    .line 371
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setBindId(Ljava/lang/String;)V

    :cond_2
    const-string v1, "apk_alt"

    const/4 v2, 0x0

    .line 376
    invoke-virtual {p0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setApkAlt(I)V

    const-string v1, "disableApkAlt"

    .line 377
    invoke-virtual {p0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setDisplayApkAlt(I)V

    const-string v1, "apk_info"

    .line 378
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->parseByString(Ljava/lang/String;)Lcom/mbridge/msdk/out/ApkDisplayInfo;

    move-result-object v1

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setApkDisplayInfo(Lcom/mbridge/msdk/out/ApkDisplayInfo;)V

    const-string v1, "ntbarpasbl"

    .line 379
    invoke-virtual {p0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setNtbarpasbl(I)V

    const-string v1, "ntbarpt"

    .line 380
    invoke-virtual {p0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setNtbarpt(I)V

    const-string v1, "atat_type"

    .line 381
    invoke-virtual {p0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAtatType(I)V

    const-string v1, "akdlui"

    .line 382
    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAkdlui(Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    return-object p1

    :catch_1
    move-exception p0

    .line 384
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    .line 385
    sget-object v0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "parse campaign json exception: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object p1

    :cond_3
    const/4 p0, 0x0

    return-object p0
.end method

.method protected static replaceValueByKey(Lcom/mbridge/msdk/foundation/entity/CampaignUnit;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)Ljava/lang/String;
    .locals 6

    if-eqz p0, :cond_4

    .line 396
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    if-nez p1, :cond_0

    goto/16 :goto_4

    .line 400
    :cond_0
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getRks()Ljava/util/HashMap;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v1, "\\}"

    const-string v2, "\\{"

    if-eqz v0, :cond_1

    .line 402
    :try_start_1
    invoke-virtual {v0}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    .line 403
    invoke-virtual {v0}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/Map$Entry;

    .line 404
    invoke-interface {v3}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 405
    invoke-interface {v3}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 406
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p2, v4, v3}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    goto :goto_0

    .line 410
    :cond_1
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAks()Ljava/util/HashMap;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 412
    invoke-virtual {p1}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    .line 413
    invoke-virtual {p1}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_1
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    .line 414
    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 415
    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 416
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p2, v3, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    goto :goto_1

    .line 420
    :cond_2
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getEpMap()Ljava/util/HashMap;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 422
    invoke-virtual {p1}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_2
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    .line 423
    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 424
    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 425
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p2, v3, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    goto :goto_2

    :cond_3
    const-string p1, "\\{c\\}"

    .line 429
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->assembCParams()Ljava/lang/String;

    move-result-object p0

    const-string v0, "utf-8"

    invoke-static {p0, v0}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p2, p1, p0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string p0, "=\\{.*?\\}"

    .line 432
    invoke-static {p0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object p0

    .line 433
    invoke-virtual {p0, p2}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object p0

    .line 434
    :goto_3
    invoke-virtual {p0}, Ljava/util/regex/Matcher;->find()Z

    move-result p1

    if-eqz p1, :cond_4

    const/4 p1, 0x0

    .line 435
    invoke-virtual {p0, p1}, Ljava/util/regex/Matcher;->group(I)Ljava/lang/String;

    move-result-object p1

    const-string v0, "="

    .line 436
    invoke-virtual {p2, p1, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_3

    :catchall_0
    move-exception p0

    .line 439
    sget-object p1, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->TAG:Ljava/lang/String;

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_4
    :goto_4
    return-object p2
.end method

.method public static trackingStr2Object(Lorg/json/JSONObject;Lcom/mbridge/msdk/foundation/entity/l;)Lcom/mbridge/msdk/foundation/entity/l;
    .locals 1

    if-eqz p0, :cond_0

    if-eqz p1, :cond_0

    const-string v0, "apk_download_start"

    .line 541
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    .line 542
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->processNativeVideoTrackingArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/l;->c([Ljava/lang/String;)V

    const-string v0, "apk_download_end"

    .line 544
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    .line 545
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->processNativeVideoTrackingArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/l;->d([Ljava/lang/String;)V

    const-string v0, "apk_install"

    .line 548
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p0

    .line 549
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->processNativeVideoTrackingArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Lcom/mbridge/msdk/foundation/entity/l;->e([Ljava/lang/String;)V

    return-object p1

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method


# virtual methods
.method public getAdvId()Ljava/lang/String;
    .locals 1

    .line 271
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->advId:Ljava/lang/String;

    return-object v0
.end method

.method public getAkdlui()Ljava/lang/String;
    .locals 1

    .line 114
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->akdlui:Ljava/lang/String;

    return-object v0
.end method

.method public getApkAlt()I
    .locals 1

    .line 59
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->apk_alt:I

    return v0
.end method

.method public getAtatType()I
    .locals 1

    .line 106
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->atatType:I

    return v0
.end method

.method public getBindId()Ljava/lang/String;
    .locals 1

    .line 160
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->bindId:Ljava/lang/String;

    return-object v0
.end method

.method public getDisplayApkAlt()I
    .locals 1

    .line 47
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->displayApkAlt:I

    return v0
.end method

.method public getGhId()Ljava/lang/String;
    .locals 1

    .line 144
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->ghId:Ljava/lang/String;

    return-object v0
.end method

.method public getGhPath()Ljava/lang/String;
    .locals 1

    .line 152
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->ghPath:Ljava/lang/String;

    return-object v0
.end method

.method public getJumpResult()Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;
    .locals 1

    .line 311
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->jumpResult:Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    return-object v0
.end method

.method public getLoopbackMap()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 209
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->loopbackMap:Ljava/util/Map;

    return-object v0
.end method

.method public getLoopbackString()Ljava/lang/String;
    .locals 1

    .line 217
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->loopbackString:Ljava/lang/String;

    return-object v0
.end method

.method public getNtbarpasbl()I
    .locals 1

    .line 98
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->ntbarpasbl:I

    return v0
.end method

.method public getNtbarpt()I
    .locals 1

    .line 90
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->ntbarpt:I

    return v0
.end method

.method public getPreClickInterval()I
    .locals 1

    .line 281
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->preClickInterval:I

    return v0
.end method

.method public getRoverIsPost()I
    .locals 1

    .line 239
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->roverIsPost:I

    return v0
.end method

.method public getRoverMark()Ljava/lang/String;
    .locals 1

    .line 231
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->roverMark:Ljava/lang/String;

    return-object v0
.end method

.method public getTtc_ct2()I
    .locals 1

    .line 255
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->ttc_ct2:I

    return v0
.end method

.method public getTtc_type()I
    .locals 1

    .line 263
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->ttc_type:I

    return v0
.end method

.method public isPreClick()Z
    .locals 1

    .line 298
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->preClick:Z

    return v0
.end method

.method public matchLoopback(Ljava/lang/String;)Ljava/lang/String;
    .locals 6

    const-string v0, ""

    .line 601
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 602
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->getLoopbackMap()Ljava/util/Map;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 603
    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result v2

    if-lez v2, :cond_2

    .line 604
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    .line 605
    invoke-virtual {v2}, Landroid/net/Uri;->getHost()Ljava/lang/String;

    move-result-object v3

    const-string v4, "domain"

    .line 606
    invoke-interface {v1, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 607
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_2

    invoke-virtual {v3, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_2

    const-string v3, "key"

    .line 608
    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    const-string v4, "value"

    .line 609
    invoke-interface {v1, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 610
    invoke-virtual {p1, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v4
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v5, "="

    if-nez v4, :cond_0

    :try_start_1
    invoke-virtual {v2, v3}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_0

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    .line 611
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "&"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_1

    .line 612
    :cond_0
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_2

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_2

    .line 614
    invoke-virtual {v2, v3}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_1

    .line 615
    invoke-virtual {v2, v3}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    goto :goto_0

    :cond_1
    move-object v2, v0

    .line 617
    :goto_0
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v2, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    const-string v1, "matchLoopback error"

    .line 623
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_1
    return-object p1
.end method

.method public needShowIDialog(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z
    .locals 4

    .line 633
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->apk_alt:I

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result v0

    const/4 v3, 0x3

    if-ne v0, v3, :cond_0

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getDisplayApkAlt()I

    move-result p1

    if-eq p1, v2, :cond_0

    goto :goto_0

    :cond_0
    move v2, v1

    :goto_0
    if-eqz v2, :cond_2

    .line 636
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/ae;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p1, :cond_1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    move v2, v1

    goto :goto_2

    :catchall_0
    move-exception p1

    .line 640
    sget-object v0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->TAG:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_2
    return v2
.end method

.method public setAdvId(Ljava/lang/String;)V
    .locals 0

    .line 275
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->advId:Ljava/lang/String;

    return-void
.end method

.method public setAkdlui(Ljava/lang/String;)V
    .locals 0

    .line 118
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->akdlui:Ljava/lang/String;

    return-void
.end method

.method public setApkAlt(I)V
    .locals 0

    .line 55
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->apk_alt:I

    return-void
.end method

.method public setAtatType(I)V
    .locals 0

    .line 110
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->atatType:I

    return-void
.end method

.method public setBindId(Ljava/lang/String;)V
    .locals 0

    .line 164
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->bindId:Ljava/lang/String;

    return-void
.end method

.method public setDisplayApkAlt(I)V
    .locals 0

    .line 51
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->displayApkAlt:I

    return-void
.end method

.method public setGhId(Ljava/lang/String;)V
    .locals 0

    .line 148
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->ghId:Ljava/lang/String;

    return-void
.end method

.method public setGhPath(Ljava/lang/String;)V
    .locals 0

    .line 156
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->ghPath:Ljava/lang/String;

    return-void
.end method

.method public setJumpResult(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;)V
    .locals 0

    .line 318
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->jumpResult:Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    return-void
.end method

.method public setLoopbackMap(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 213
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->loopbackMap:Ljava/util/Map;

    return-void
.end method

.method public setLoopbackString(Ljava/lang/String;)V
    .locals 0

    .line 221
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->loopbackString:Ljava/lang/String;

    return-void
.end method

.method public setNtbarpasbl(I)V
    .locals 0

    .line 102
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->ntbarpasbl:I

    return-void
.end method

.method public setNtbarpt(I)V
    .locals 0

    .line 94
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->ntbarpt:I

    return-void
.end method

.method public setPreClick(Z)V
    .locals 0

    .line 302
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->preClick:Z

    return-void
.end method

.method public setPreClickInterval(I)V
    .locals 0

    .line 285
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->preClickInterval:I

    return-void
.end method

.method public setRoverIsPost(I)V
    .locals 0

    .line 243
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->roverIsPost:I

    return-void
.end method

.method public setRoverMark(Ljava/lang/String;)V
    .locals 0

    .line 235
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->roverMark:Ljava/lang/String;

    return-void
.end method

.method public setTtc_ct2(I)V
    .locals 0

    .line 259
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->ttc_ct2:I

    return-void
.end method

.method public setTtc_type(I)V
    .locals 0

    .line 267
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/DomainCampaignEx;->ttc_type:I

    return-void
.end method
