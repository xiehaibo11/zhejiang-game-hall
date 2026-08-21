.class public Lcom/mbridge/msdk/interstitial/jscommon/interstitial;
.super Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;
.source "interstitial.java"


# static fields
.field private static final a:Ljava/lang/String;


# instance fields
.field private b:Ljava/lang/Object;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 30
    const-class v0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 44
    invoke-direct {p0}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;-><init>()V

    return-void
.end method

.method private a(Landroid/content/Context;)I
    .locals 0

    if-eqz p1, :cond_0

    .line 345
    instance-of p1, p1, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, -0x1

    :goto_0
    return p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/interstitial/jscommon/interstitial;)Landroid/content/Context;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->mContext:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic a()Ljava/lang/String;
    .locals 1

    .line 28
    sget-object v0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a:Ljava/lang/String;

    return-object v0
.end method

.method private a(Ljava/util/List;)Ljava/lang/String;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    const-string v0, ""

    if-eqz p1, :cond_0

    .line 276
    :try_start_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 277
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->parseCamplistToJson(Ljava/util/List;)Lorg/json/JSONArray;

    move-result-object p1

    .line 278
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "campaignList"

    .line 279
    invoke-virtual {v1, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 281
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    .line 282
    sget-object v1, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "===========campListJson:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 283
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 284
    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    const/4 v1, 0x2

    invoke-static {p1, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 292
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-object v0
.end method

.method private a(Ljava/lang/String;)Ljava/util/List;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    .line 232
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    invoke-static {}, Lcom/mbridge/msdk/interstitial/b/a;->a()Lcom/mbridge/msdk/interstitial/b/a;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 233
    invoke-static {}, Lcom/mbridge/msdk/interstitial/b/a;->a()Lcom/mbridge/msdk/interstitial/b/a;

    move-result-object v1

    const/4 v2, 0x1

    invoke-virtual {v1, p1, v2}, Lcom/mbridge/msdk/interstitial/b/a;->a(Ljava/lang/String;I)Ljava/util/List;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 236
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-object v0
.end method

.method private a(Ljava/lang/String;Ljava/util/List;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)V"
        }
    .end annotation

    .line 567
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    if-eqz p2, :cond_3

    .line 570
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_1

    goto :goto_1

    :cond_1
    const/4 v0, 0x0

    .line 573
    :goto_0
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_4

    .line 574
    invoke-interface {p2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_2

    .line 576
    sget-object v2, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "======\u66f4\u65b0displayid\uff1a"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "interstitial"

    .line 577
    invoke-static {p1, v1, v2}, Lcom/mbridge/msdk/foundation/same/a/d;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_2
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_3
    :goto_1
    return-void

    :catch_0
    move-exception p1

    .line 581
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    return-void
.end method

.method private b()V
    .locals 3

    .line 221
    :try_start_0
    sget-object v0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a:Ljava/lang/String;

    const-string v1, "\u901a\u77e5h5 \u6ca1\u6709\u6570\u636e"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 222
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->b:Ljava/lang/Object;

    const-string v2, ""

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 224
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private c()Ljava/lang/String;
    .locals 3

    const/4 v0, 0x0

    .line 385
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->mContext:Landroid/content/Context;

    if-nez v1, :cond_0

    return-object v0

    .line 389
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->mContext:Landroid/content/Context;

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a(Landroid/content/Context;)I

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    const/4 v2, 0x1

    if-ne v1, v2, :cond_1

    .line 392
    :try_start_1
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->mContext:Landroid/content/Context;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->mContext:Landroid/content/Context;

    instance-of v1, v1, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    if-eqz v1, :cond_1

    .line 393
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->mContext:Landroid/content/Context;

    check-cast v1, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    if-eqz v1, :cond_1

    .line 395
    iget-object v0, v1, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-object v0

    :catch_0
    move-exception v1

    .line 399
    :try_start_2
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_0

    :catch_1
    move-exception v1

    .line 403
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    return-object v0
.end method


# virtual methods
.method public getExcludeIdList(Ljava/lang/String;)Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    .line 305
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-object v0

    .line 309
    :cond_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 311
    sget-object p1, Lcom/mbridge/msdk/foundation/same/net/g/d;->c:Ljava/lang/String;

    invoke-virtual {v1, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 312
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 313
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1, p1}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 314
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result p1

    if-lez p1, :cond_3

    .line 316
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    const/4 v0, 0x0

    .line 317
    :goto_0
    :try_start_1
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v0, v2, :cond_2

    .line 319
    invoke-virtual {v1, v0}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 320
    invoke-virtual {v1, v0}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v2

    invoke-interface {p1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :cond_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :catch_0
    move-exception v0

    goto :goto_1

    :catch_1
    move-exception p1

    move-object v3, v0

    move-object v0, p1

    move-object p1, v3

    .line 329
    :goto_1
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    move-object v0, p1

    :cond_3
    return-object v0
.end method

.method public getInfo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 4

    .line 57
    :try_start_0
    sget-object v0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "======\u524d\u7aef\u8c03\u7528 getInfo() \u83b7\u53d6campaign\u6570\u636e params:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 58
    iput-object p1, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->b:Ljava/lang/Object;

    .line 60
    iget-object p2, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->mContext:Landroid/content/Context;

    if-nez p2, :cond_0

    .line 61
    sget-object p1, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a:Ljava/lang/String;

    const-string p2, "getInfo() context \u4e3a\u7a7a return"

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 62
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->b()V

    return-void

    .line 66
    :cond_0
    iget-object p2, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->mContext:Landroid/content/Context;

    invoke-direct {p0, p2}, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a(Landroid/content/Context;)I

    move-result p2

    .line 68
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->c()Ljava/lang/String;

    move-result-object v0

    .line 69
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 70
    sget-object p1, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a:Ljava/lang/String;

    const-string p2, "getInfo() unitid is null"

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 71
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->b()V

    return-void

    .line 75
    :cond_1
    sget-object v1, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "getInfo() mCurrentCallState:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " unitid:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_6

    const/4 v0, 0x1

    if-ne p2, v0, :cond_f

    .line 1099
    :try_start_1
    sget-object p2, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a:Ljava/lang/String;

    const-string v1, "instersGetInfo hideLoading"

    invoke-static {p2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_5

    .line 1412
    :try_start_2
    iget-object p2, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->mContext:Landroid/content/Context;

    if-nez p2, :cond_2

    goto :goto_0

    .line 1415
    :cond_2
    iget-object p2, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->mContext:Landroid/content/Context;

    invoke-direct {p0, p2}, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a(Landroid/content/Context;)I

    move-result p2
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    if-ne p2, v0, :cond_3

    .line 1419
    :try_start_3
    iget-object p2, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->mContext:Landroid/content/Context;

    check-cast p2, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    if-eqz p2, :cond_3

    .line 1421
    invoke-virtual {p2}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->hideLoading()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    goto :goto_0

    :catch_0
    move-exception p2

    .line 1424
    :try_start_4
    invoke-virtual {p2}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1

    goto :goto_0

    :catch_1
    move-exception p2

    .line 1428
    :try_start_5
    invoke-virtual {p2}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_5

    .line 1436
    :cond_3
    :goto_0
    :try_start_6
    iget-object p2, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->mContext:Landroid/content/Context;

    if-nez p2, :cond_4

    goto :goto_1

    .line 1439
    :cond_4
    iget-object p2, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->mContext:Landroid/content/Context;

    invoke-direct {p0, p2}, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a(Landroid/content/Context;)I

    move-result p2

    if-ne p2, v0, :cond_5

    .line 1440
    iget-object p2, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->mContext:Landroid/content/Context;

    check-cast p2, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    if-eqz p2, :cond_5

    .line 1442
    invoke-virtual {p2}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->showWebView()V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_2

    goto :goto_1

    :catch_2
    move-exception p2

    .line 1446
    :try_start_7
    invoke-virtual {p2}, Ljava/lang/Exception;->printStackTrace()V

    .line 1104
    :cond_5
    :goto_1
    iget-object p2, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->mContext:Landroid/content/Context;

    if-nez p2, :cond_6

    .line 1105
    sget-object p1, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a:Ljava/lang/String;

    const-string p2, "instersGetInfo context \u4e3a\u7a7a \u901a\u77e5\u524d\u7aef\u6ca1\u6709\u6570\u636e"

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1106
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->b()V

    goto/16 :goto_3

    .line 1110
    :cond_6
    iget-object p2, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->mContext:Landroid/content/Context;

    invoke-direct {p0, p2}, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a(Landroid/content/Context;)I

    move-result p2

    if-eq p2, v0, :cond_7

    .line 1111
    sget-object p1, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a:Ljava/lang/String;

    const-string p2, "instersGetInfo mCurrentCallState!=INTERSTITIAL_CALL"

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1112
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->b()V

    goto/16 :goto_3

    .line 1116
    :cond_7
    iget-object p2, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->mContext:Landroid/content/Context;

    instance-of p2, p2, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    if-eqz p2, :cond_8

    .line 1117
    iget-object p2, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->mContext:Landroid/content/Context;

    check-cast p2, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    .line 1118
    iput-boolean v0, p2, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mIsMBPage:Z

    .line 1119
    sget-object p2, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a:Ljava/lang/String;

    const-string v0, "set mIsMBPage true"

    invoke-static {p2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1122
    :cond_8
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->c()Ljava/lang/String;

    move-result-object p2

    .line 1123
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_9

    .line 1124
    sget-object p1, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a:Ljava/lang/String;

    const-string p2, "instersGetInfo unitid is null"

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1125
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->b()V

    goto/16 :goto_3

    .line 1129
    :cond_9
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a(Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    .line 1130
    sget-object v1, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a:Ljava/lang/String;

    const-string v2, "instersGetInfo \u5f00\u59cb\u4ece\u7f13\u5b58\u91cc\u53d6\u6570\u636e"

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz v0, :cond_e

    .line 1134
    sget-object v1, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "instersGetInfo \u4ece\u7f13\u5b58\u91cc\u53d6\u5230\u7684\u6570\u636e \u4e0d\u4e3a\u7a7a size\uff1a"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1136
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a(Ljava/util/List;)Ljava/lang/String;

    move-result-object v1

    .line 1137
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_a

    .line 1138
    sget-object p1, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a:Ljava/lang/String;

    const-string p2, "instersGetInfo campListJson is null return"

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1139
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->b()V

    goto :goto_3

    .line 1144
    :cond_a
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v2

    invoke-virtual {v2, p1, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1150
    invoke-direct {p0, p2, v0}, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a(Ljava/lang/String;Ljava/util/List;)V
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_5

    .line 1535
    :try_start_8
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_b

    goto :goto_2

    :cond_b
    if-eqz v0, :cond_d

    .line 1538
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result p1

    if-nez p1, :cond_c

    goto :goto_2

    .line 1541
    :cond_c
    new-instance p1, Ljava/lang/Thread;

    new-instance v1, Lcom/mbridge/msdk/interstitial/jscommon/interstitial$2;

    invoke-direct {v1, p0, v0, p2}, Lcom/mbridge/msdk/interstitial/jscommon/interstitial$2;-><init>(Lcom/mbridge/msdk/interstitial/jscommon/interstitial;Ljava/util/List;Ljava/lang/String;)V

    invoke-direct {p1, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 1555
    invoke-virtual {p1}, Ljava/lang/Thread;->start()V
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_3

    goto :goto_2

    :catch_3
    move-exception p1

    .line 1557
    :try_start_9
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_9
    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_9} :catch_5

    .line 2248
    :cond_d
    :goto_2
    :try_start_a
    new-instance p1, Ljava/lang/Thread;

    new-instance v1, Lcom/mbridge/msdk/interstitial/jscommon/interstitial$1;

    invoke-direct {v1, p0, v0, p2}, Lcom/mbridge/msdk/interstitial/jscommon/interstitial$1;-><init>(Lcom/mbridge/msdk/interstitial/jscommon/interstitial;Ljava/util/List;Ljava/lang/String;)V

    invoke-direct {p1, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 2259
    invoke-virtual {p1}, Ljava/lang/Thread;->start()V
    :try_end_a
    .catch Ljava/lang/Exception; {:try_start_a .. :try_end_a} :catch_4

    goto :goto_3

    :catch_4
    move-exception p1

    .line 2261
    :try_start_b
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_3

    .line 1159
    :cond_e
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->b()V
    :try_end_b
    .catch Ljava/lang/Exception; {:try_start_b .. :try_end_b} :catch_5

    goto :goto_3

    :catch_5
    move-exception p1

    .line 1162
    :try_start_c
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 1163
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->b()V
    :try_end_c
    .catch Ljava/lang/Exception; {:try_start_c .. :try_end_c} :catch_6

    goto :goto_3

    :catch_6
    move-exception p1

    .line 84
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 85
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->b()V

    :cond_f
    :goto_3
    return-void
.end method

.method public install(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 176
    :try_start_0
    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->addDownloaderListener(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 177
    sget-object p2, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "======\u524d\u7aef\u8c03\u7528 install()  params:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 179
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->mContext:Landroid/content/Context;

    if-nez p1, :cond_0

    .line 180
    sget-object p1, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a:Ljava/lang/String;

    const-string p2, "install() context \u4e3a\u7a7a return"

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 184
    :cond_0
    sget-object p1, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a:Ljava/lang/String;

    const-string p2, "install() \u5f00\u59cbtracking\u8df3\u8f6c"

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 186
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->mContext:Landroid/content/Context;

    instance-of p1, p1, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    if-eqz p1, :cond_1

    .line 187
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->mContext:Landroid/content/Context;

    check-cast p1, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    const/4 p2, 0x0

    const-string v0, ""

    .line 188
    invoke-virtual {p1, p2, v0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->clickTracking(ZLjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 192
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method

.method public openURL(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 197
    sget-object p1, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "openURL:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 198
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 200
    :try_start_0
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "url"

    .line 201
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v0, "type"

    .line 202
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 204
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->mContext:Landroid/content/Context;

    invoke-static {p1, p2}, Lcom/mbridge/msdk/click/c;->a(Landroid/content/Context;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const/4 v0, 0x2

    if-ne p1, v0, :cond_1

    .line 206
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->mContext:Landroid/content/Context;

    invoke-static {p1, p2}, Lcom/mbridge/msdk/click/c;->b(Landroid/content/Context;Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 211
    sget-object p2, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :catch_0
    move-exception p1

    .line 209
    sget-object p2, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a:Ljava/lang/String;

    invoke-virtual {p1}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public sendNoticeAndCallBackClick(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 587
    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->install(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method
