.class public final Lcom/mbridge/msdk/advanced/b/a;
.super Ljava/lang/Object;
.source "NativeAdvancedLoadManager.java"


# static fields
.field private static a:Ljava/lang/String; = "NativeAdvancedLoadManager"


# instance fields
.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:J

.field private e:Lcom/mbridge/msdk/advanced/a/a;

.field private f:Landroid/content/Context;

.field private g:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

.field private h:Lcom/mbridge/msdk/c/d;

.field private i:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private j:I

.field private k:I

.field private l:I

.field private m:I

.field private n:Ljava/lang/String;

.field private o:I

.field private p:Z

.field private volatile q:Z

.field private r:Lcom/mbridge/msdk/videocommon/listener/a;

.field private s:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;

.field private t:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;

.field private u:Ljava/lang/String;

.field private v:I

.field private w:Ljava/lang/String;

.field private x:Landroid/os/Handler;

.field private y:Ljava/lang/Runnable;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;J)V
    .locals 0

    .line 181
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string p3, ""

    .line 117
    iput-object p3, p0, Lcom/mbridge/msdk/advanced/b/a;->w:Ljava/lang/String;

    .line 119
    new-instance p3, Lcom/mbridge/msdk/advanced/b/a$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object p4

    invoke-direct {p3, p0, p4}, Lcom/mbridge/msdk/advanced/b/a$1;-><init>(Lcom/mbridge/msdk/advanced/b/a;Landroid/os/Looper;)V

    iput-object p3, p0, Lcom/mbridge/msdk/advanced/b/a;->x:Landroid/os/Handler;

    .line 173
    new-instance p3, Lcom/mbridge/msdk/advanced/b/a$5;

    invoke-direct {p3, p0}, Lcom/mbridge/msdk/advanced/b/a$5;-><init>(Lcom/mbridge/msdk/advanced/b/a;)V

    iput-object p3, p0, Lcom/mbridge/msdk/advanced/b/a;->y:Ljava/lang/Runnable;

    .line 182
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p3

    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p3

    iput-object p3, p0, Lcom/mbridge/msdk/advanced/b/a;->f:Landroid/content/Context;

    .line 183
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/a;->c:Ljava/lang/String;

    .line 184
    iput-object p2, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/advanced/b/a;)Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;
    .locals 0

    .line 71
    iget-object p0, p0, Lcom/mbridge/msdk/advanced/b/a;->g:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    return-object p0
.end method

.method private a(ILjava/lang/String;)Lcom/mbridge/msdk/foundation/same/net/g/d;
    .locals 8

    .line 489
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v0

    .line 490
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->l()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 493
    new-instance v2, Lcom/mbridge/msdk/foundation/same/net/g/d;

    invoke-direct {v2}, Lcom/mbridge/msdk/foundation/same/net/g/d;-><init>()V

    .line 494
    iget-object v3, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    const-string v4, "h5_native"

    invoke-static {v3, v4}, Lcom/mbridge/msdk/foundation/same/a/d;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 495
    iget-object v4, p0, Lcom/mbridge/msdk/advanced/b/a;->f:Landroid/content/Context;

    iget-object v5, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    invoke-static {v4, v5}, Lcom/mbridge/msdk/advanced/common/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 496
    iget-object v5, p0, Lcom/mbridge/msdk/advanced/b/a;->f:Landroid/content/Context;

    iget-object v6, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    invoke-static {v5, v6}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 497
    invoke-static {}, Lcom/mbridge/msdk/advanced/common/a/a;->a()Ljava/lang/String;

    move-result-object v6

    const-string v7, "app_id"

    .line 498
    invoke-static {v2, v7, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 499
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    const-string v7, "unit_id"

    invoke-static {v2, v7, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 502
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->c:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 503
    sget-object v0, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    iget-object v7, p0, Lcom/mbridge/msdk/advanced/b/a;->c:Ljava/lang/String;

    invoke-static {v2, v0, v7}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    const-string v0, "sign"

    .line 506
    invoke-static {v2, v0, v1}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 510
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ""

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "req_type"

    invoke-static {v2, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "1"

    const-string v1, "ad_num"

    .line 511
    invoke-static {v2, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "tnum"

    .line 512
    invoke-static {v2, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "only_impression"

    .line 513
    invoke-static {v2, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "ping_mode"

    .line 514
    invoke-static {v2, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "ttc_ids"

    .line 515
    invoke-static {v2, v0, v4}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 516
    sget-object v0, Lcom/mbridge/msdk/foundation/same/net/g/d;->b:Ljava/lang/String;

    invoke-static {v2, v0, v3}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 517
    sget-object v0, Lcom/mbridge/msdk/foundation/same/net/g/d;->c:Ljava/lang/String;

    invoke-static {v2, v0, v5}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "install_ids"

    .line 518
    invoke-static {v2, v0, v6}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 520
    sget-object v0, Lcom/mbridge/msdk/foundation/same/net/g/d;->a:Ljava/lang/String;

    invoke-static {v2, v0, p2}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 521
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const/16 v0, 0x12a

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string v0, "ad_type"

    invoke-static {v2, v0, p2}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 522
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget v0, p0, Lcom/mbridge/msdk/advanced/b/a;->v:I

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "offset"

    invoke-static {v2, p2, p1}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 524
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget p2, p0, Lcom/mbridge/msdk/advanced/b/a;->m:I

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "x"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p2, p0, Lcom/mbridge/msdk/advanced/b/a;->l:I

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "unit_size"

    invoke-static {v2, p2, p1}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    return-object v2
.end method

.method static synthetic a(Lcom/mbridge/msdk/advanced/b/a;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 71
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/a;->w:Ljava/lang/String;

    return-object p1
.end method

.method private a(J)V
    .locals 2

    .line 294
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->x:Landroid/os/Handler;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/a;->y:Ljava/lang/Runnable;

    invoke-virtual {v0, v1, p1, p2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method private a(Landroid/content/Context;Ljava/lang/String;I)V
    .locals 3

    if-nez p1, :cond_0

    :try_start_0
    const-string p1, "Context is null"

    .line 322
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/advanced/b/a;->a(Ljava/lang/String;Ljava/lang/String;I)V

    return-void

    .line 325
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ai;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string p1, "UnitId is null"

    .line 326
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/advanced/b/a;->a(Ljava/lang/String;Ljava/lang/String;I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    .line 342
    :cond_1
    :try_start_1
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/c;->a(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 344
    :try_start_2
    sget-object v1, Lcom/mbridge/msdk/advanced/b/a;->a:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 347
    :goto_0
    sget-object v0, Lcom/mbridge/msdk/advanced/b/a;->a:Ljava/lang/String;

    const-string v1, "load \u5f00\u59cb\u51c6\u5907\u8bf7\u6c42\u53c2\u6570"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 349
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->u:Ljava/lang/String;

    invoke-direct {p0, p3, v0}, Lcom/mbridge/msdk/advanced/b/a;->a(ILjava/lang/String;)Lcom/mbridge/msdk/foundation/same/net/g/d;

    move-result-object v0

    if-nez v0, :cond_2

    .line 351
    sget-object p1, Lcom/mbridge/msdk/advanced/b/a;->a:Ljava/lang/String;

    const-string v0, "load \u8bf7\u6c42\u53c2\u6570\u4e3a\u7a7a load\u5931\u8d25"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "Load param is null"

    .line 352
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/advanced/b/a;->a(Ljava/lang/String;Ljava/lang/String;I)V

    return-void

    :cond_2
    if-eqz v0, :cond_3

    .line 356
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    const-string v1, "token"

    .line 357
    invoke-virtual {v0, v1, p2}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 359
    :cond_3
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ae;->g(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 360
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_4

    const-string v2, "j"

    .line 361
    invoke-virtual {v0, v2, v1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 363
    :cond_4
    new-instance v1, Lcom/mbridge/msdk/advanced/e/a;

    invoke-direct {v1, p1}, Lcom/mbridge/msdk/advanced/e/a;-><init>(Landroid/content/Context;)V

    .line 364
    new-instance p1, Lcom/mbridge/msdk/advanced/b/a$6;

    invoke-direct {p1, p0, p3, p2, p3}, Lcom/mbridge/msdk/advanced/b/a$6;-><init>(Lcom/mbridge/msdk/advanced/b/a;ILjava/lang/String;I)V

    .line 404
    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/advanced/e/c;->a(Ljava/lang/String;)V

    .line 405
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/advanced/e/c;->setUnitId(Ljava/lang/String;)V

    .line 406
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/a;->c:Ljava/lang/String;

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/advanced/e/c;->setPlacementId(Ljava/lang/String;)V

    const/16 v2, 0x12a

    .line 407
    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/advanced/e/c;->setAdType(I)V

    const/4 v2, 0x1

    .line 408
    invoke-virtual {v1, v2, v0, p1, p2}, Lcom/mbridge/msdk/advanced/e/a;->choiceV3OrV5BySetting(ILcom/mbridge/msdk/foundation/same/net/g/d;Lcom/mbridge/msdk/foundation/same/net/e;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 410
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    const-string p1, "Load exception"

    .line 411
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/advanced/b/a;->a(Ljava/lang/String;Ljava/lang/String;I)V

    const/4 p1, 0x0

    .line 1485
    iput p1, p0, Lcom/mbridge/msdk/advanced/b/a;->v:I

    :goto_1
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/advanced/b/a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 0

    .line 71
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/advanced/b/a;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/advanced/b/a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V
    .locals 0

    .line 71
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/advanced/b/a;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;ILjava/lang/String;Ljava/lang/String;)V
    .locals 5

    const/4 p3, 0x1

    const/4 v0, 0x0

    if-eqz p1, :cond_6

    .line 2443
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v1

    if-eqz v1, :cond_6

    .line 2444
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 2445
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v2

    invoke-virtual {v2, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 2446
    iget-object v3, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignUnitId(Ljava/lang/String;)V

    .line 2472
    new-instance v3, Ljava/lang/Thread;

    new-instance v4, Lcom/mbridge/msdk/advanced/b/a$7;

    invoke-direct {v4, p0, v2}, Lcom/mbridge/msdk/advanced/b/a$7;-><init>(Lcom/mbridge/msdk/advanced/b/a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    invoke-direct {v3, v4}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 2480
    invoke-virtual {v3}, Ljava/lang/Thread;->start()V

    .line 2448
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getSessionId()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/a;->u:Ljava/lang/String;

    .line 2449
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOfferType()I

    move-result p1

    const/16 v3, 0x63

    if-eq p1, v3, :cond_7

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdZip()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdHtml()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_7

    .line 2450
    :cond_0
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 2451
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/a;->f:Landroid/content/Context;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-static {p1, v3}, Lcom/mbridge/msdk/foundation/tools/ae;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_1

    move p1, p3

    goto :goto_0

    :cond_1
    const/4 p1, 0x2

    :goto_0
    invoke-virtual {v2, p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRtinsType(I)V

    .line 2453
    :cond_2
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getWtick()I

    move-result p1

    if-eq p1, p3, :cond_5

    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/a;->f:Landroid/content/Context;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-static {p1, v3}, Lcom/mbridge/msdk/foundation/tools/ae;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_3

    goto :goto_1

    .line 2458
    :cond_3
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result p1

    if-eqz p1, :cond_4

    .line 2459
    invoke-interface {v1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_2

    .line 2461
    :cond_4
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    sget v3, Lcom/mbridge/msdk/foundation/same/a;->E:I

    invoke-static {p1, v2, v3}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    goto :goto_2

    .line 2455
    :cond_5
    :goto_1
    invoke-interface {v1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_2

    :cond_6
    const/4 v1, 0x0

    :cond_7
    :goto_2
    if-eqz v1, :cond_c

    .line 2421
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_c

    .line 3303
    :try_start_0
    iget p1, p0, Lcom/mbridge/msdk/advanced/b/a;->v:I

    add-int/2addr p1, p3

    iput p1, p0, Lcom/mbridge/msdk/advanced/b/a;->v:I

    .line 3304
    iget-object p4, p0, Lcom/mbridge/msdk/advanced/b/a;->h:Lcom/mbridge/msdk/c/d;

    if-eqz p4, :cond_8

    iget-object p4, p0, Lcom/mbridge/msdk/advanced/b/a;->h:Lcom/mbridge/msdk/c/d;

    invoke-virtual {p4}, Lcom/mbridge/msdk/c/d;->v()I

    move-result p4

    if-le p1, p4, :cond_9

    .line 3305
    :cond_8
    sget-object p1, Lcom/mbridge/msdk/advanced/b/a;->a:Ljava/lang/String;

    const-string p4, "onload \u91cd\u7f6eoffset\u4e3a0"

    invoke-static {p1, p4}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 3306
    iput v0, p0, Lcom/mbridge/msdk/advanced/b/a;->v:I

    .line 3308
    :cond_9
    sget-object p1, Lcom/mbridge/msdk/advanced/b/a;->a:Ljava/lang/String;

    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onload \u7b97\u51fa \u4e0b\u6b21\u7684offset\u662f:"

    invoke-virtual {p4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mbridge/msdk/advanced/b/a;->v:I

    invoke-virtual {p4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p4

    invoke-static {p1, p4}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_3

    :catch_0
    move-exception p1

    .line 3311
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 2423
    :goto_3
    sget-object p1, Lcom/mbridge/msdk/advanced/b/a;->a:Ljava/lang/String;

    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onload load\u6210\u529f size:"

    invoke-virtual {p4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v2

    invoke-virtual {p4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p4

    invoke-static {p1, p4}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 2424
    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 2426
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdZip()Ljava/lang/String;

    move-result-object p4

    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p4

    if-eqz p4, :cond_b

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdHtml()Ljava/lang/String;

    move-result-object p4

    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p4

    if-nez p4, :cond_a

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdHtml()Ljava/lang/String;

    move-result-object p4

    const-string v1, "<MBTPLMARK>"

    invoke-virtual {p4, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p4

    if-eqz p4, :cond_a

    goto :goto_4

    .line 2430
    :cond_a
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setHasMBTplMark(Z)V

    .line 2431
    invoke-virtual {p1, p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIsMraid(Z)V

    goto :goto_5

    .line 2427
    :cond_b
    :goto_4
    invoke-virtual {p1, p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setHasMBTplMark(Z)V

    .line 2428
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIsMraid(Z)V

    .line 2433
    :goto_5
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    goto :goto_6

    .line 2435
    :cond_c
    sget-object p1, Lcom/mbridge/msdk/advanced/b/a;->a:Ljava/lang/String;

    const-string p3, "onload load\u5931\u8d25 \u8fd4\u56de\u7684compaign\u6ca1\u6709\u53ef\u4ee5\u7528\u7684"

    invoke-static {p1, p3}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "invalid  campaign"

    .line 2436
    invoke-direct {p0, p1, p4, p2}, Lcom/mbridge/msdk/advanced/b/a;->a(Ljava/lang/String;Ljava/lang/String;I)V

    :goto_6
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/advanced/b/a;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 10

    .line 1815
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->g:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->getAdvancedNativeWebview()Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 1816
    invoke-static {}, Lcom/mbridge/msdk/advanced/common/c;->a()Lcom/mbridge/msdk/advanced/common/c;

    move-result-object v0

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/common/c;->c(Ljava/lang/String;)Lcom/mbridge/msdk/advanced/common/c;

    move-result-object v0

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/common/c;->d(Ljava/lang/String;)Lcom/mbridge/msdk/advanced/common/c;

    move-result-object v0

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/common/c;->g(Ljava/lang/String;)Lcom/mbridge/msdk/advanced/common/c;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/common/c;->b(Ljava/lang/String;)Lcom/mbridge/msdk/advanced/common/c;

    move-result-object v0

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/common/c;->a(Z)Lcom/mbridge/msdk/advanced/common/c;

    move-result-object v0

    .line 1817
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/advanced/d/a;->a(Lcom/mbridge/msdk/advanced/common/c;Ljava/lang/String;)V

    .line 1819
    new-instance v0, Lcom/mbridge/msdk/advanced/js/a;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/a;->g:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/a;->c:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    invoke-direct {v0, v1, v2, v3}, Lcom/mbridge/msdk/advanced/js/a;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    .line 1820
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 1821
    invoke-interface {v1, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1822
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/js/a;->a(Ljava/util/List;)V

    .line 1823
    iget v1, p0, Lcom/mbridge/msdk/advanced/b/a;->j:I

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/js/a;->a(I)V

    .line 1824
    iget v1, p0, Lcom/mbridge/msdk/advanced/b/a;->k:I

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/js/a;->b(I)V

    .line 1825
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/a;->g:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->setAdvancedNativeJSBridgeImpl(Lcom/mbridge/msdk/advanced/js/a;)V

    .line 1826
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 1827
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/a;->g:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    invoke-virtual {v2}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->getAdvancedNativeWebview()Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    move-result-object v8

    if-nez v8, :cond_0

    const-string p1, "webview is null"

    .line 1829
    invoke-direct {p0, p2, p1, p3}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V

    goto :goto_0

    :cond_0
    if-eqz v8, :cond_1

    .line 1832
    invoke-virtual {v8}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->isDestoryed()Z

    move-result v2

    if-eqz v2, :cond_1

    const-string p1, "webview is destroyed"

    .line 1833
    invoke-direct {p0, p2, p1, p3}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V

    goto :goto_0

    .line 1836
    :cond_1
    new-instance v9, Lcom/mbridge/msdk/advanced/b/a$2;

    move-object v2, v9

    move-object v3, p0

    move-object v4, p2

    move v5, p3

    move-wide v6, v0

    invoke-direct/range {v2 .. v7}, Lcom/mbridge/msdk/advanced/b/a$2;-><init>(Lcom/mbridge/msdk/advanced/b/a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;IJ)V

    invoke-virtual {v8, v9}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->setWebViewListener(Lcom/mbridge/msdk/mbjscommon/windvane/d;)V

    .line 1883
    invoke-virtual {v8}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->isDestoryed()Z

    move-result v2

    if-nez v2, :cond_2

    .line 1884
    sget-object p2, Lcom/mbridge/msdk/advanced/b/a;->a:Ljava/lang/String;

    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "=======\u5f00\u59cb\u6e32\u67d3: "

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p2, p3}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1885
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/b/a;->x:Landroid/os/Handler;

    if-eqz p2, :cond_3

    .line 1886
    new-instance p3, Lcom/mbridge/msdk/advanced/b/a$3;

    invoke-direct {p3, p0, v8, p1}, Lcom/mbridge/msdk/advanced/b/a$3;-><init>(Lcom/mbridge/msdk/advanced/b/a;Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;Ljava/lang/String;)V

    invoke-virtual {p2, p3}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_0

    .line 1894
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/a;->n:Ljava/lang/String;

    const-string v2, "webview has destory"

    invoke-direct {p0, v2, p1, p3}, Lcom/mbridge/msdk/advanced/b/a;->a(Ljava/lang/String;Ljava/lang/String;I)V

    .line 1895
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    iget-object v4, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    const/4 v8, 0x3

    const-string v5, "webview had destory"

    move-object v3, p2

    move-wide v6, v0

    invoke-static/range {v2 .. v8}, Lcom/mbridge/msdk/advanced/d/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;JI)V

    :cond_3
    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/advanced/b/a;Ljava/lang/String;Ljava/lang/String;I)V
    .locals 0

    .line 71
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/advanced/b/a;->a(Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method private a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 3

    .line 550
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/a;->i:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 551
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->g:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/a;->c:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    invoke-static {v0, p1, v1, v2}, Lcom/mbridge/msdk/advanced/b/c;->a(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 552
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/advanced/b/a;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    goto :goto_0

    .line 554
    :cond_0
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/advanced/b/a;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    :goto_0
    return-void
.end method

.method private a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V
    .locals 1

    .line 901
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->n:Ljava/lang/String;

    invoke-direct {p0, p2, v0, p3}, Lcom/mbridge/msdk/advanced/b/a;->a(Ljava/lang/String;Ljava/lang/String;I)V

    const/4 p3, 0x2

    .line 902
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/advanced/b/a;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V

    return-void
.end method

.method private a(Ljava/lang/String;ILjava/lang/String;)V
    .locals 7

    .line 580
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->g:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/a;->c:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    iget v4, p0, Lcom/mbridge/msdk/advanced/b/a;->j:I

    const/4 v5, 0x1

    const/4 v6, 0x1

    move-object v3, p3

    invoke-static/range {v0 .. v6}, Lcom/mbridge/msdk/advanced/b/c;->a(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IZZ)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p3

    if-eqz p3, :cond_0

    .line 582
    sget-object p1, Lcom/mbridge/msdk/advanced/b/a;->a:Ljava/lang/String;

    const-string v0, "load failed cache "

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 583
    invoke-direct {p0, p3, p2}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    goto :goto_0

    .line 585
    :cond_0
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/advanced/b/a;->b(Ljava/lang/String;I)V

    :goto_0
    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;I)V
    .locals 1

    .line 571
    iget-boolean v0, p0, Lcom/mbridge/msdk/advanced/b/a;->p:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 572
    iput-boolean v0, p0, Lcom/mbridge/msdk/advanced/b/a;->p:Z

    .line 573
    invoke-direct {p0, p1, p3, p2}, Lcom/mbridge/msdk/advanced/b/a;->a(Ljava/lang/String;ILjava/lang/String;)V

    return-void

    .line 576
    :cond_0
    invoke-direct {p0, p1, p3}, Lcom/mbridge/msdk/advanced/b/a;->b(Ljava/lang/String;I)V

    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/advanced/b/a;)I
    .locals 0

    .line 71
    iget p0, p0, Lcom/mbridge/msdk/advanced/b/a;->o:I

    return p0
.end method

.method static synthetic b(Lcom/mbridge/msdk/advanced/b/a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 1

    .line 3906
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->g:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->isH5Ready()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 3907
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/advanced/b/a;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    const/4 p2, 0x1

    const-string v0, ""

    .line 3908
    invoke-direct {p0, p1, v0, p2}, Lcom/mbridge/msdk/advanced/b/a;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V

    :cond_0
    return-void
.end method

.method private b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 3

    .line 559
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->g:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/a;->c:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    invoke-static {v0, p1, v1, v2}, Lcom/mbridge/msdk/advanced/b/c;->a(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/mbridge/msdk/advanced/b/a;->q:Z

    if-nez v0, :cond_0

    .line 560
    invoke-direct {p0}, Lcom/mbridge/msdk/advanced/b/a;->d()V

    .line 561
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    invoke-static {p1, v0}, Lcom/mbridge/msdk/advanced/b/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V

    const/4 v0, 0x1

    .line 562
    iput-boolean v0, p0, Lcom/mbridge/msdk/advanced/b/a;->q:Z

    .line 564
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->e:Lcom/mbridge/msdk/advanced/a/a;

    if-eqz v0, :cond_0

    .line 565
    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/advanced/a/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    :cond_0
    return-void
.end method

.method private b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V
    .locals 2

    .line 913
    invoke-static {}, Lcom/mbridge/msdk/advanced/common/c;->a()Lcom/mbridge/msdk/advanced/common/c;

    move-result-object v0

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/common/c;->c(Ljava/lang/String;)Lcom/mbridge/msdk/advanced/common/c;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/common/c;->b(Ljava/lang/String;)Lcom/mbridge/msdk/advanced/common/c;

    move-result-object v0

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/common/c;->d(Ljava/lang/String;)Lcom/mbridge/msdk/advanced/common/c;

    move-result-object v0

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/common/c;->g(Ljava/lang/String;)Lcom/mbridge/msdk/advanced/common/c;

    move-result-object v0

    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/advanced/common/c;->f(Ljava/lang/String;)Lcom/mbridge/msdk/advanced/common/c;

    move-result-object p2

    invoke-virtual {p2, p3}, Lcom/mbridge/msdk/advanced/common/c;->b(I)Lcom/mbridge/msdk/advanced/common/c;

    move-result-object p2

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result p1

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/advanced/common/c;->a(Z)Lcom/mbridge/msdk/advanced/common/c;

    move-result-object p1

    .line 914
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    invoke-static {p1, p2}, Lcom/mbridge/msdk/advanced/d/a;->b(Lcom/mbridge/msdk/advanced/common/c;Ljava/lang/String;)V

    return-void
.end method

.method private b(Ljava/lang/String;I)V
    .locals 3

    .line 590
    iget-boolean v0, p0, Lcom/mbridge/msdk/advanced/b/a;->q:Z

    if-nez v0, :cond_0

    .line 591
    invoke-direct {p0}, Lcom/mbridge/msdk/advanced/b/a;->d()V

    .line 592
    sget-object v0, Lcom/mbridge/msdk/advanced/b/a;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "real failed: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x1

    .line 593
    iput-boolean v0, p0, Lcom/mbridge/msdk/advanced/b/a;->q:Z

    .line 594
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->e:Lcom/mbridge/msdk/advanced/a/a;

    if-eqz v0, :cond_0

    .line 595
    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/advanced/a/a;->a(Ljava/lang/String;I)V

    :cond_0
    return-void
.end method

.method static synthetic c()Ljava/lang/String;
    .locals 1

    .line 71
    sget-object v0, Lcom/mbridge/msdk/advanced/b/a;->a:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic c(Lcom/mbridge/msdk/advanced/b/a;)Ljava/lang/String;
    .locals 0

    .line 71
    iget-object p0, p0, Lcom/mbridge/msdk/advanced/b/a;->n:Ljava/lang/String;

    return-object p0
.end method

.method private c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 3

    .line 605
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->g:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    if-eqz v0, :cond_0

    .line 606
    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->clearResState()V

    .line 608
    :cond_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdZip()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 609
    sget-object v0, Lcom/mbridge/msdk/advanced/b/a;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u5f00\u59cb\u4e0b\u8f7dzip\uff1a "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdZip()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 610
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/advanced/b/a;->h(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    .line 612
    :cond_1
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdHtml()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 613
    sget-object v0, Lcom/mbridge/msdk/advanced/b/a;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u5f00\u59cb\u4e0b\u8f7dHTML\uff1a "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdHtml()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 614
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/advanced/b/a;->g(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    .line 616
    :cond_2
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 617
    sget-object v0, Lcom/mbridge/msdk/advanced/b/a;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u5f00\u59cb\u4e0b\u8f7dVideo\uff1a "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 618
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/advanced/b/a;->i(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    .line 621
    :cond_3
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    .line 622
    sget-object v0, Lcom/mbridge/msdk/advanced/b/a;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u5f00\u59cb\u4e0b\u8f7dimage\uff1a "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 623
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/advanced/b/a;->f(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    .line 625
    :cond_4
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    .line 626
    sget-object v0, Lcom/mbridge/msdk/advanced/b/a;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u5f00\u59cb\u4e0b\u8f7dEndCard\uff1a "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 627
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/advanced/b/a;->e(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    .line 629
    :cond_5
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getGifUrl()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_6

    .line 630
    sget-object v0, Lcom/mbridge/msdk/advanced/b/a;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u5f00\u59cb\u4e0b\u8f7dgitUrl\uff1a "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getGifUrl()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 631
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/advanced/b/a;->d(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    :cond_6
    return-void
.end method

.method static synthetic d(Lcom/mbridge/msdk/advanced/b/a;)Ljava/lang/String;
    .locals 0

    .line 71
    iget-object p0, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    return-object p0
.end method

.method private d()V
    .locals 2

    .line 601
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->x:Landroid/os/Handler;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/a;->y:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    return-void
.end method

.method private d(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 3

    .line 636
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v0

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getGifUrl()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/mbridge/msdk/advanced/b/a$8;

    invoke-direct {v2, p0, p1, p2}, Lcom/mbridge/msdk/advanced/b/a$8;-><init>(Lcom/mbridge/msdk/advanced/b/a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V

    return-void
.end method

.method static synthetic e(Lcom/mbridge/msdk/advanced/b/a;)Landroid/os/Handler;
    .locals 0

    .line 71
    iget-object p0, p0, Lcom/mbridge/msdk/advanced/b/a;->x:Landroid/os/Handler;

    return-object p0
.end method

.method private e(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 1

    .line 666
    new-instance v0, Lcom/mbridge/msdk/advanced/b/a$9;

    invoke-direct {v0, p0, p1, p2}, Lcom/mbridge/msdk/advanced/b/a$9;-><init>(Lcom/mbridge/msdk/advanced/b/a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    iput-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->t:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;

    .line 692
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    move-result-object p2

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->t:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;

    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->downloadH5Res(Ljava/lang/String;Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;)V

    return-void
.end method

.method static synthetic f(Lcom/mbridge/msdk/advanced/b/a;)V
    .locals 1

    const/4 v0, 0x0

    .line 3485
    iput v0, p0, Lcom/mbridge/msdk/advanced/b/a;->v:I

    return-void
.end method

.method private f(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 3

    .line 696
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v0

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/mbridge/msdk/advanced/b/a$10;

    invoke-direct {v2, p0, p1, p2}, Lcom/mbridge/msdk/advanced/b/a$10;-><init>(Lcom/mbridge/msdk/advanced/b/a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V

    return-void
.end method

.method static synthetic g(Lcom/mbridge/msdk/advanced/b/a;)Landroid/content/Context;
    .locals 0

    .line 71
    iget-object p0, p0, Lcom/mbridge/msdk/advanced/b/a;->f:Landroid/content/Context;

    return-object p0
.end method

.method private g(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 8

    const-string v0, "8"

    const-string v1, ""

    const/4 v2, 0x0

    .line 731
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdHtml()Ljava/lang/String;

    move-result-object v3

    .line 732
    new-instance v4, Ljava/io/File;

    invoke-direct {v4, v3}, Ljava/io/File;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_3
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 733
    :try_start_1
    invoke-virtual {v4}, Ljava/io/File;->exists()Z

    move-result v3

    if-nez v3, :cond_2

    .line 734
    sget-object v3, Lcom/mbridge/msdk/foundation/same/b/c;->g:Lcom/mbridge/msdk/foundation/same/b/c;

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/same/b/e;->b(Lcom/mbridge/msdk/foundation/same/b/c;)Ljava/lang/String;

    move-result-object v3

    .line 735
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdHtml()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/mbridge/msdk/foundation/tools/ak;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 736
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_0

    .line 737
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    invoke-static {v5, v6}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v5

    :cond_0
    const-string v6, ".html"

    invoke-virtual {v5, v6}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 740
    new-instance v6, Ljava/io/File;

    invoke-direct {v6, v3, v5}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 741
    :try_start_2
    invoke-virtual {v6}, Ljava/io/File;->exists()Z

    move-result v3

    if-nez v3, :cond_3

    .line 742
    new-instance v3, Ljava/io/FileOutputStream;

    invoke-direct {v3, v6}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 744
    :try_start_3
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "<script>"

    .line 745
    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/mbridge/msdk/c/b/b;->a()Lcom/mbridge/msdk/c/b/b;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/c/b/b;->b()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "</script>"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 746
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdHtml()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 747
    sget-object v4, Lcom/mbridge/msdk/MBridgeConstans;->OMID_JS_SERVICE_CONTENT:Ljava/lang/String;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v4, v2}, Lcom/iab/omid/library/mmadbridge/ScriptInjector;->injectScriptContentIntoHtml(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 748
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isActiveOm()Z

    move-result v4

    if-eqz v4, :cond_1

    .line 749
    invoke-static {v2}, Lcom/mbridge/msdk/a/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 751
    :cond_1
    invoke-virtual {v2}, Ljava/lang/String;->getBytes()[B

    move-result-object v2

    invoke-virtual {v3, v2}, Ljava/io/FileOutputStream;->write([B)V

    .line 752
    invoke-virtual {v3}, Ljava/io/FileOutputStream;->flush()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    move-object v2, v3

    goto :goto_0

    :catchall_0
    move-exception p1

    move-object v2, v3

    goto/16 :goto_4

    :catch_0
    move-exception v2

    move-object v7, v3

    move-object v3, v2

    move-object v2, v7

    goto :goto_2

    :cond_2
    move-object v6, v4

    .line 757
    :cond_3
    :goto_0
    :try_start_4
    iget-object v3, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    invoke-static {p1, v1, v3, v0}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    if-eqz v2, :cond_4

    .line 764
    :goto_1
    :try_start_5
    invoke-virtual {v2}, Ljava/io/FileOutputStream;->close()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_4

    goto :goto_3

    :catch_1
    move-exception v3

    goto :goto_2

    :catch_2
    move-exception v3

    move-object v6, v4

    goto :goto_2

    :catchall_1
    move-exception p1

    goto :goto_4

    :catch_3
    move-exception v3

    move-object v6, v2

    .line 759
    :goto_2
    :try_start_6
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    .line 760
    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setMraid(Ljava/lang/String;)V

    .line 761
    invoke-virtual {v3}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    iget-object v3, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    invoke-static {p1, v1, v3, v0}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_1

    if-eqz v2, :cond_4

    goto :goto_1

    .line 767
    :cond_4
    :goto_3
    :try_start_7
    invoke-virtual {v6}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_5

    invoke-virtual {v6}, Ljava/io/File;->isFile()Z

    move-result v0

    if-eqz v0, :cond_5

    invoke-virtual {v6}, Ljava/io/File;->canRead()Z

    move-result v0

    if-eqz v0, :cond_5

    .line 768
    invoke-virtual {v6}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAdHtml(Ljava/lang/String;)V

    .line 769
    sget-object v0, Lcom/mbridge/msdk/advanced/b/a;->a:Ljava/lang/String;

    const-string v1, "\u5f00\u59cb\u6e32\u67d3 HTML\uff1a "

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 770
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->x:Landroid/os/Handler;

    if-eqz v0, :cond_7

    .line 772
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->x:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/advanced/b/a$11;

    invoke-direct {v1, p0, v6, p1, p2}, Lcom/mbridge/msdk/advanced/b/a$11;-><init>(Lcom/mbridge/msdk/advanced/b/a;Ljava/io/File;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_5

    .line 780
    :cond_5
    sget-object p1, Lcom/mbridge/msdk/advanced/b/a;->a:Ljava/lang/String;

    const-string v0, "\u6e32\u67d3 HTML \u5931\u8d25\uff1a html file write failed"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "html file write failed"

    .line 781
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->n:Ljava/lang/String;

    invoke-direct {p0, p1, v0, p2}, Lcom/mbridge/msdk/advanced/b/a;->a(Ljava/lang/String;Ljava/lang/String;I)V

    goto :goto_5

    :goto_4
    if-eqz v2, :cond_6

    .line 764
    invoke-virtual {v2}, Ljava/io/FileOutputStream;->close()V

    .line 766
    :cond_6
    throw p1
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_4

    :catch_4
    move-exception p1

    .line 785
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->n:Ljava/lang/String;

    invoke-direct {p0, p1, v0, p2}, Lcom/mbridge/msdk/advanced/b/a;->a(Ljava/lang/String;Ljava/lang/String;I)V

    :cond_7
    :goto_5
    return-void
.end method

.method static synthetic h(Lcom/mbridge/msdk/advanced/b/a;)Ljava/lang/String;
    .locals 0

    .line 71
    iget-object p0, p0, Lcom/mbridge/msdk/advanced/b/a;->c:Ljava/lang/String;

    return-object p0
.end method

.method private h(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 1

    .line 791
    new-instance v0, Lcom/mbridge/msdk/advanced/b/a$12;

    invoke-direct {v0, p0, p1, p2}, Lcom/mbridge/msdk/advanced/b/a$12;-><init>(Lcom/mbridge/msdk/advanced/b/a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    iput-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->s:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;

    .line 811
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    move-result-object p2

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdZip()Ljava/lang/String;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->s:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;

    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->downloadH5Res(Ljava/lang/String;Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;)V

    return-void
.end method

.method private i(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 7

    .line 918
    new-instance v0, Lcom/mbridge/msdk/advanced/b/a$4;

    invoke-direct {v0, p0, p1}, Lcom/mbridge/msdk/advanced/b/a$4;-><init>(Lcom/mbridge/msdk/advanced/b/a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    iput-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->r:Lcom/mbridge/msdk/videocommon/listener/a;

    .line 937
    new-instance v4, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v4}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    .line 938
    invoke-virtual {v4, p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->add(Ljava/lang/Object;)Z

    .line 939
    invoke-static {}, Lcom/mbridge/msdk/videocommon/download/b;->getInstance()Lcom/mbridge/msdk/videocommon/download/b;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/a;->f:Landroid/content/Context;

    iget-object v3, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    iget-object v6, p0, Lcom/mbridge/msdk/advanced/b/a;->r:Lcom/mbridge/msdk/videocommon/listener/a;

    const/16 v5, 0x12a

    invoke-virtual/range {v1 .. v6}, Lcom/mbridge/msdk/videocommon/download/b;->createUnitCache(Landroid/content/Context;Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;ILcom/mbridge/msdk/videocommon/listener/a;)Lcom/mbridge/msdk/videocommon/download/d;

    .line 940
    invoke-static {}, Lcom/mbridge/msdk/videocommon/download/b;->getInstance()Lcom/mbridge/msdk/videocommon/download/b;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v2

    const/16 v3, 0x12a

    invoke-virtual {v0, v3, v1, v2}, Lcom/mbridge/msdk/videocommon/download/b;->a(ILjava/lang/String;Z)Z

    move-result v0

    if-nez v0, :cond_0

    .line 941
    sget-object p1, Lcom/mbridge/msdk/advanced/b/a;->a:Ljava/lang/String;

    const-string p2, " load Video"

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 942
    invoke-static {}, Lcom/mbridge/msdk/videocommon/download/b;->getInstance()Lcom/mbridge/msdk/videocommon/download/b;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/videocommon/download/b;->load(Ljava/lang/String;)V

    goto :goto_0

    .line 944
    :cond_0
    sget-object v0, Lcom/mbridge/msdk/advanced/b/a;->a:Ljava/lang/String;

    const-string v1, " load Video isReady true"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 945
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->g:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->setVideoReady(Z)V

    .line 946
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/advanced/b/a;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    :goto_0
    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 316
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->w:Ljava/lang/String;

    return-object v0
.end method

.method public final a(Ljava/lang/String;)Ljava/lang/String;
    .locals 5

    .line 953
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->i:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    .line 955
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/a;->i:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/a;->i:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/a;->i:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBidToken()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 956
    invoke-static {}, Lcom/mbridge/msdk/videocommon/download/b;->getInstance()Lcom/mbridge/msdk/videocommon/download/b;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    invoke-virtual {v1, v2, v0}, Lcom/mbridge/msdk/videocommon/download/b;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/download/a;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 958
    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/download/a;->f()I

    move-result v1

    const/4 v2, 0x5

    if-ne v1, v2, :cond_1

    .line 960
    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/download/a;->d()Ljava/lang/String;

    move-result-object v0

    .line 961
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 963
    sget-object v2, Lcom/mbridge/msdk/advanced/b/a;->a:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "\u672c\u5730\u5df2\u4e0b\u8f7d\u5b8c \u62ff\u672c\u5730\u64ad\u653e\u5730\u5740\uff1a"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, " state\uff1a"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object p1, v0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 970
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_0

    :cond_0
    const-string p1, ""

    :cond_1
    :goto_0
    return-object p1
.end method

.method public final a(I)V
    .locals 0

    .line 197
    iput p1, p0, Lcom/mbridge/msdk/advanced/b/a;->j:I

    return-void
.end method

.method public final a(II)V
    .locals 0

    .line 209
    iput p1, p0, Lcom/mbridge/msdk/advanced/b/a;->m:I

    .line 210
    iput p2, p0, Lcom/mbridge/msdk/advanced/b/a;->l:I

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/advanced/a/a;)V
    .locals 0

    .line 530
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/a;->e:Lcom/mbridge/msdk/advanced/a/a;

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;)V
    .locals 0

    .line 192
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/a;->g:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/c/d;)V
    .locals 0

    .line 188
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/a;->h:Lcom/mbridge/msdk/c/d;

    return-void
.end method

.method public final a(Ljava/lang/String;I)V
    .locals 10

    const/4 v0, 0x0

    .line 218
    iput-boolean v0, p0, Lcom/mbridge/msdk/advanced/b/a;->q:Z

    .line 219
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/a;->n:Ljava/lang/String;

    .line 220
    iput p2, p0, Lcom/mbridge/msdk/advanced/b/a;->o:I

    const/4 v1, 0x0

    .line 221
    iput-object v1, p0, Lcom/mbridge/msdk/advanced/b/a;->i:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 222
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/a;->g:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    if-nez v1, :cond_0

    const-string v0, "MBAdvancedNativeView is null"

    .line 223
    invoke-direct {p0, v0, p1, p2}, Lcom/mbridge/msdk/advanced/b/a;->a(Ljava/lang/String;Ljava/lang/String;I)V

    return-void

    .line 230
    :cond_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 231
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/a;->g:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    iget-object v3, p0, Lcom/mbridge/msdk/advanced/b/a;->c:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    iget v6, p0, Lcom/mbridge/msdk/advanced/b/a;->j:I

    const/4 v7, 0x0

    const/4 v8, 0x0

    move-object v5, p1

    invoke-static/range {v2 .. v8}, Lcom/mbridge/msdk/advanced/b/c;->a(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IZZ)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v1

    goto :goto_0

    .line 233
    :cond_1
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/a;->g:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    iget-object v3, p0, Lcom/mbridge/msdk/advanced/b/a;->c:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/advanced/b/a;->b:Ljava/lang/String;

    iget v6, p0, Lcom/mbridge/msdk/advanced/b/a;->j:I

    const/4 v7, 0x0

    const/4 v8, 0x1

    move-object v5, p1

    invoke-static/range {v2 .. v8}, Lcom/mbridge/msdk/advanced/b/c;->a(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IZZ)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v1

    :goto_0
    const-wide/16 v2, 0x0

    if-eqz v1, :cond_2

    .line 237
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTimestamp()J

    move-result-wide v4

    goto :goto_1

    :cond_2
    move-wide v4, v2

    .line 240
    :goto_1
    iget-object v6, p0, Lcom/mbridge/msdk/advanced/b/a;->h:Lcom/mbridge/msdk/c/d;

    if-eqz v6, :cond_3

    invoke-virtual {v6}, Lcom/mbridge/msdk/c/d;->n()I

    move-result v6

    const/4 v7, 0x1

    if-ne v6, v7, :cond_3

    iget-object v6, p0, Lcom/mbridge/msdk/advanced/b/a;->g:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    if-eqz v6, :cond_3

    if-eqz v1, :cond_3

    .line 244
    invoke-direct {p0, v1, p2}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    return-void

    .line 248
    :cond_3
    iput-boolean v0, p0, Lcom/mbridge/msdk/advanced/b/a;->p:Z

    .line 250
    iget-object v6, p0, Lcom/mbridge/msdk/advanced/b/a;->h:Lcom/mbridge/msdk/c/d;

    const-wide/16 v7, 0x7530

    if-eqz v6, :cond_5

    .line 251
    invoke-virtual {v6}, Lcom/mbridge/msdk/c/d;->s()Ljava/util/List;

    move-result-object v6

    if-eqz v6, :cond_4

    .line 252
    invoke-interface {v6}, Ljava/util/List;->size()I

    move-result v9

    if-lez v9, :cond_4

    .line 253
    invoke-interface {v6, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v6, v0

    iput-wide v6, p0, Lcom/mbridge/msdk/advanced/b/a;->d:J

    goto :goto_2

    .line 255
    :cond_4
    iput-wide v7, p0, Lcom/mbridge/msdk/advanced/b/a;->d:J

    goto :goto_2

    .line 258
    :cond_5
    iput-wide v7, p0, Lcom/mbridge/msdk/advanced/b/a;->d:J

    .line 260
    :goto_2
    sget-object v0, Lcom/mbridge/msdk/advanced/b/a;->a:Ljava/lang/String;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "\u5f00\u59cb\u4eceV3\u8bf7\u6c42\u65b0\u7684 offer\uff0c\u8d85\u65f6 \uff1a"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v7, p0, Lcom/mbridge/msdk/advanced/b/a;->d:J

    invoke-virtual {v6, v7, v8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v0, v6}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 279
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->h:Lcom/mbridge/msdk/c/d;

    if-eqz v0, :cond_7

    cmp-long v0, v4, v2

    if-lez v0, :cond_7

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_7

    .line 280
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->h:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/d;->x()I

    move-result v0

    mul-int/lit16 v0, v0, 0x3e8

    .line 281
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    sub-long/2addr v2, v4

    int-to-long v4, v0

    cmp-long v0, v2, v4

    if-lez v0, :cond_6

    .line 282
    iget-wide v0, p0, Lcom/mbridge/msdk/advanced/b/a;->d:J

    invoke-direct {p0, v0, v1}, Lcom/mbridge/msdk/advanced/b/a;->a(J)V

    .line 283
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->f:Landroid/content/Context;

    invoke-direct {p0, v0, p1, p2}, Lcom/mbridge/msdk/advanced/b/a;->a(Landroid/content/Context;Ljava/lang/String;I)V

    goto :goto_3

    .line 285
    :cond_6
    invoke-direct {p0, v1, p2}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    goto :goto_3

    .line 288
    :cond_7
    iget-wide v0, p0, Lcom/mbridge/msdk/advanced/b/a;->d:J

    invoke-direct {p0, v0, v1}, Lcom/mbridge/msdk/advanced/b/a;->a(J)V

    .line 289
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->f:Landroid/content/Context;

    invoke-direct {p0, v0, p1, p2}, Lcom/mbridge/msdk/advanced/b/a;->a(Landroid/content/Context;Ljava/lang/String;I)V

    :goto_3
    return-void
.end method

.method public final b()V
    .locals 4

    .line 535
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->e:Lcom/mbridge/msdk/advanced/a/a;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 536
    iput-object v1, p0, Lcom/mbridge/msdk/advanced/b/a;->e:Lcom/mbridge/msdk/advanced/a/a;

    .line 538
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->n:Ljava/lang/String;

    iget v2, p0, Lcom/mbridge/msdk/advanced/b/a;->o:I

    const-string v3, "LoadManager release"

    invoke-direct {p0, v3, v0, v2}, Lcom/mbridge/msdk/advanced/b/a;->a(Ljava/lang/String;Ljava/lang/String;I)V

    .line 539
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->r:Lcom/mbridge/msdk/videocommon/listener/a;

    if-eqz v0, :cond_1

    .line 540
    iput-object v1, p0, Lcom/mbridge/msdk/advanced/b/a;->r:Lcom/mbridge/msdk/videocommon/listener/a;

    .line 542
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a;->s:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;

    if-eqz v0, :cond_2

    .line 543
    iput-object v1, p0, Lcom/mbridge/msdk/advanced/b/a;->s:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;

    :cond_2
    return-void
.end method
