.class public final Lcom/mbridge/msdk/splash/c/c;
.super Ljava/lang/Object;
.source "SplashLoadManager.java"


# static fields
.field private static a:Ljava/lang/String; = "SplashLoadManager"


# instance fields
.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:J

.field private e:J

.field private f:Lcom/mbridge/msdk/splash/b/b;

.field private g:Landroid/content/Context;

.field private h:Lcom/mbridge/msdk/splash/view/MBSplashView;

.field private i:Lcom/mbridge/msdk/c/d;

.field private j:Z

.field private k:I

.field private l:I

.field private m:I

.field private n:Ljava/lang/String;

.field private o:I

.field private p:Z

.field private volatile q:Z

.field private r:Lcom/mbridge/msdk/videocommon/listener/a;

.field private s:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;

.field private t:Ljava/lang/String;

.field private u:I

.field private v:Ljava/lang/String;

.field private w:I

.field private x:Landroid/os/Handler;

.field private y:Ljava/lang/Runnable;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;J)V
    .locals 2

    .line 127
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    .line 86
    iput-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->v:Ljava/lang/String;

    .line 89
    new-instance v0, Lcom/mbridge/msdk/splash/c/c$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/mbridge/msdk/splash/c/c$1;-><init>(Lcom/mbridge/msdk/splash/c/c;Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->x:Landroid/os/Handler;

    .line 119
    new-instance v0, Lcom/mbridge/msdk/splash/c/c$2;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/splash/c/c$2;-><init>(Lcom/mbridge/msdk/splash/c/c;)V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->y:Ljava/lang/Runnable;

    .line 128
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->g:Landroid/content/Context;

    .line 129
    iput-object p1, p0, Lcom/mbridge/msdk/splash/c/c;->c:Ljava/lang/String;

    .line 130
    iput-object p2, p0, Lcom/mbridge/msdk/splash/c/c;->b:Ljava/lang/String;

    .line 131
    iput-wide p3, p0, Lcom/mbridge/msdk/splash/c/c;->e:J

    return-void
.end method

.method private a(ILjava/lang/String;)Lcom/mbridge/msdk/foundation/same/net/g/d;
    .locals 8

    .line 393
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v0

    .line 394
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

    .line 397
    new-instance v2, Lcom/mbridge/msdk/foundation/same/net/g/d;

    invoke-direct {v2}, Lcom/mbridge/msdk/foundation/same/net/g/d;-><init>()V

    .line 398
    iget-object v3, p0, Lcom/mbridge/msdk/splash/c/c;->b:Ljava/lang/String;

    const-string v4, "splash"

    invoke-static {v3, v4}, Lcom/mbridge/msdk/foundation/same/a/d;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 399
    iget-object v4, p0, Lcom/mbridge/msdk/splash/c/c;->g:Landroid/content/Context;

    iget-object v5, p0, Lcom/mbridge/msdk/splash/c/c;->b:Ljava/lang/String;

    invoke-static {v4, v5}, Lcom/mbridge/msdk/splash/a/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 400
    iget-object v5, p0, Lcom/mbridge/msdk/splash/c/c;->g:Landroid/content/Context;

    iget-object v6, p0, Lcom/mbridge/msdk/splash/c/c;->b:Ljava/lang/String;

    invoke-static {v5, v6}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 401
    invoke-static {}, Lcom/mbridge/msdk/splash/a/a/a;->a()Ljava/lang/String;

    move-result-object v6

    const-string v7, "app_id"

    .line 402
    invoke-static {v2, v7, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 403
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->b:Ljava/lang/String;

    const-string v7, "unit_id"

    invoke-static {v2, v7, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 406
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->c:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 407
    sget-object v0, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    iget-object v7, p0, Lcom/mbridge/msdk/splash/c/c;->c:Ljava/lang/String;

    invoke-static {v2, v0, v7}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    const-string v0, "sign"

    .line 410
    invoke-static {v2, v0, v1}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 414
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

    .line 415
    invoke-static {v2, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "tnum"

    .line 416
    invoke-static {v2, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "only_impression"

    .line 417
    invoke-static {v2, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "ping_mode"

    .line 418
    invoke-static {v2, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "ttc_ids"

    .line 419
    invoke-static {v2, v0, v4}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 420
    sget-object v0, Lcom/mbridge/msdk/foundation/same/net/g/d;->b:Ljava/lang/String;

    invoke-static {v2, v0, v3}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 421
    sget-object v0, Lcom/mbridge/msdk/foundation/same/net/g/d;->c:Ljava/lang/String;

    invoke-static {v2, v0, v5}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "install_ids"

    .line 422
    invoke-static {v2, v0, v6}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 424
    sget-object v0, Lcom/mbridge/msdk/foundation/same/net/g/d;->a:Ljava/lang/String;

    invoke-static {v2, v0, p2}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 425
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const/16 v0, 0x129

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string v0, "ad_type"

    invoke-static {v2, v0, p2}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 426
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget v0, p0, Lcom/mbridge/msdk/splash/c/c;->u:I

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "offset"

    invoke-static {v2, p2, p1}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 428
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget p2, p0, Lcom/mbridge/msdk/splash/c/c;->m:I

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "x"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p2, p0, Lcom/mbridge/msdk/splash/c/c;->l:I

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "unit_size"

    invoke-static {v2, p2, p1}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    return-object v2
.end method

.method static synthetic a(Lcom/mbridge/msdk/splash/c/c;)Ljava/lang/String;
    .locals 0

    .line 61
    iget-object p0, p0, Lcom/mbridge/msdk/splash/c/c;->n:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/splash/c/c;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 61
    iput-object p1, p0, Lcom/mbridge/msdk/splash/c/c;->v:Ljava/lang/String;

    return-object p1
.end method

.method private a(J)V
    .locals 2

    .line 228
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->x:Landroid/os/Handler;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/c;->y:Ljava/lang/Runnable;

    invoke-virtual {v0, v1, p1, p2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method private a(Landroid/content/Context;Ljava/lang/String;I)V
    .locals 3

    if-nez p1, :cond_0

    :try_start_0
    const-string p1, "Context is null"

    .line 253
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/splash/c/c;->a(Ljava/lang/String;Ljava/lang/String;I)V

    return-void

    .line 256
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->b:Ljava/lang/String;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ai;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string p1, "UnitId is null"

    .line 257
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/splash/c/c;->a(Ljava/lang/String;Ljava/lang/String;I)V

    return-void

    .line 264
    :cond_1
    sget-object v0, Lcom/mbridge/msdk/splash/c/c;->a:Ljava/lang/String;

    const-string v1, "load \u5f00\u59cb\u51c6\u5907\u8bf7\u6c42\u53c2\u6570"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 266
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->t:Ljava/lang/String;

    invoke-direct {p0, p3, v0}, Lcom/mbridge/msdk/splash/c/c;->a(ILjava/lang/String;)Lcom/mbridge/msdk/foundation/same/net/g/d;

    move-result-object v0

    if-nez v0, :cond_2

    .line 268
    sget-object p1, Lcom/mbridge/msdk/splash/c/c;->a:Ljava/lang/String;

    const-string v0, "load \u8bf7\u6c42\u53c2\u6570\u4e3a\u7a7a load\u5931\u8d25"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "Load param is null"

    .line 269
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/splash/c/c;->a(Ljava/lang/String;Ljava/lang/String;I)V

    return-void

    :cond_2
    if-eqz v0, :cond_3

    .line 273
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    const-string v1, "token"

    .line 274
    invoke-virtual {v0, v1, p2}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 277
    :cond_3
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/c;->b:Ljava/lang/String;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ae;->g(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 278
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_4

    const-string v2, "j"

    .line 279
    invoke-virtual {v0, v2, v1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 281
    :cond_4
    new-instance v1, Lcom/mbridge/msdk/splash/f/b;

    invoke-direct {v1, p1}, Lcom/mbridge/msdk/splash/f/b;-><init>(Landroid/content/Context;)V

    .line 282
    new-instance p1, Lcom/mbridge/msdk/splash/c/c$3;

    invoke-direct {p1, p0, p3, p2, p3}, Lcom/mbridge/msdk/splash/c/c$3;-><init>(Lcom/mbridge/msdk/splash/c/c;ILjava/lang/String;I)V

    .line 308
    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/splash/f/a;->a(Ljava/lang/String;)V

    .line 309
    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/c;->b:Ljava/lang/String;

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/splash/f/a;->setUnitId(Ljava/lang/String;)V

    .line 310
    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/c;->c:Ljava/lang/String;

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/splash/f/a;->setPlacementId(Ljava/lang/String;)V

    const/16 v2, 0x129

    .line 311
    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/splash/f/a;->setAdType(I)V

    const/4 v2, 0x1

    .line 312
    invoke-virtual {v1, v2, v0, p1, p2}, Lcom/mbridge/msdk/splash/f/b;->choiceV3OrV5BySetting(ILcom/mbridge/msdk/foundation/same/net/g/d;Lcom/mbridge/msdk/foundation/same/net/e;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 314
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    const-string p1, "Load exception"

    .line 315
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/splash/c/c;->a(Ljava/lang/String;Ljava/lang/String;I)V

    const/4 p1, 0x0

    .line 1389
    iput p1, p0, Lcom/mbridge/msdk/splash/c/c;->u:I

    :goto_0
    return-void
.end method

.method private a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 2

    .line 453
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->h:Lcom/mbridge/msdk/splash/view/MBSplashView;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 454
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/splash/view/MBSplashView;->setDynamicView(Z)V

    .line 457
    :cond_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 458
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/splash/c/c;->d(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    .line 461
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->h:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-static {v0, p1}, Lcom/mbridge/msdk/splash/c/b;->a(Lcom/mbridge/msdk/splash/view/MBSplashView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 462
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/splash/c/c;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    goto :goto_0

    .line 464
    :cond_2
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/splash/c/c;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/splash/c/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 0

    .line 61
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/splash/c/c;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/splash/c/c;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;ILjava/lang/String;Ljava/lang/String;)V
    .locals 5

    const/4 p3, 0x1

    const/4 v0, 0x0

    if-eqz p1, :cond_6

    .line 2347
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v1

    if-eqz v1, :cond_6

    .line 2348
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 2349
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v2

    invoke-virtual {v2, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 2350
    iget-object v3, p0, Lcom/mbridge/msdk/splash/c/c;->b:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignUnitId(Ljava/lang/String;)V

    .line 2376
    new-instance v3, Ljava/lang/Thread;

    new-instance v4, Lcom/mbridge/msdk/splash/c/c$4;

    invoke-direct {v4, p0, v2}, Lcom/mbridge/msdk/splash/c/c$4;-><init>(Lcom/mbridge/msdk/splash/c/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    invoke-direct {v3, v4}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 2384
    invoke-virtual {v3}, Ljava/lang/Thread;->start()V

    .line 2352
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getSessionId()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/splash/c/c;->t:Ljava/lang/String;

    .line 2353
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

    .line 2354
    :cond_0
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 2355
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/c;->g:Landroid/content/Context;

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

    .line 2357
    :cond_2
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getWtick()I

    move-result p1

    if-eq p1, p3, :cond_5

    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/c;->g:Landroid/content/Context;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-static {p1, v3}, Lcom/mbridge/msdk/foundation/tools/ae;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_3

    goto :goto_1

    .line 2362
    :cond_3
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result p1

    if-eqz p1, :cond_4

    .line 2363
    invoke-interface {v1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_2

    .line 2365
    :cond_4
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/c;->b:Ljava/lang/String;

    sget v3, Lcom/mbridge/msdk/foundation/same/a;->E:I

    invoke-static {p1, v2, v3}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    goto :goto_2

    .line 2359
    :cond_5
    :goto_1
    invoke-interface {v1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_2

    :cond_6
    const/4 v1, 0x0

    :cond_7
    :goto_2
    if-eqz v1, :cond_c

    .line 2325
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_c

    .line 3237
    :try_start_0
    iget p1, p0, Lcom/mbridge/msdk/splash/c/c;->u:I

    add-int/2addr p1, p3

    iput p1, p0, Lcom/mbridge/msdk/splash/c/c;->u:I

    .line 3238
    iget-object p4, p0, Lcom/mbridge/msdk/splash/c/c;->i:Lcom/mbridge/msdk/c/d;

    if-eqz p4, :cond_8

    iget-object p4, p0, Lcom/mbridge/msdk/splash/c/c;->i:Lcom/mbridge/msdk/c/d;

    invoke-virtual {p4}, Lcom/mbridge/msdk/c/d;->v()I

    move-result p4

    if-le p1, p4, :cond_9

    .line 3239
    :cond_8
    sget-object p1, Lcom/mbridge/msdk/splash/c/c;->a:Ljava/lang/String;

    const-string p4, "onload \u91cd\u7f6eoffset\u4e3a0"

    invoke-static {p1, p4}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 3240
    iput v0, p0, Lcom/mbridge/msdk/splash/c/c;->u:I

    .line 3242
    :cond_9
    sget-object p1, Lcom/mbridge/msdk/splash/c/c;->a:Ljava/lang/String;

    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onload \u7b97\u51fa \u4e0b\u6b21\u7684offset\u662f:"

    invoke-virtual {p4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mbridge/msdk/splash/c/c;->u:I

    invoke-virtual {p4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p4

    invoke-static {p1, p4}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_3

    :catch_0
    move-exception p1

    .line 3245
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 2327
    :goto_3
    sget-object p1, Lcom/mbridge/msdk/splash/c/c;->a:Ljava/lang/String;

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

    .line 2328
    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 2330
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

    .line 2334
    :cond_a
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setHasMBTplMark(Z)V

    .line 2335
    invoke-virtual {p1, p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIsMraid(Z)V

    goto :goto_5

    .line 2331
    :cond_b
    :goto_4
    invoke-virtual {p1, p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setHasMBTplMark(Z)V

    .line 2332
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIsMraid(Z)V

    .line 2337
    :goto_5
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/splash/c/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    goto :goto_6

    .line 2339
    :cond_c
    sget-object p1, Lcom/mbridge/msdk/splash/c/c;->a:Ljava/lang/String;

    const-string p3, "onload load\u5931\u8d25 \u8fd4\u56de\u7684compaign\u6ca1\u6709\u53ef\u4ee5\u7528\u7684"

    invoke-static {p1, p3}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "invalid  campaign"

    .line 2340
    invoke-direct {p0, p1, p4, p2}, Lcom/mbridge/msdk/splash/c/c;->a(Ljava/lang/String;Ljava/lang/String;I)V

    :goto_6
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/splash/c/c;Ljava/lang/String;I)V
    .locals 1

    .line 5741
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->n:Ljava/lang/String;

    invoke-direct {p0, p1, v0, p2}, Lcom/mbridge/msdk/splash/c/c;->a(Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/splash/c/c;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 0

    .line 61
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/splash/c/c;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/splash/c/c;Ljava/lang/String;Ljava/lang/String;I)V
    .locals 0

    .line 61
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/splash/c/c;->a(Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method private a(Ljava/lang/String;ILjava/lang/String;)V
    .locals 8

    .line 492
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->h:Lcom/mbridge/msdk/splash/view/MBSplashView;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/c;->c:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/c;->b:Ljava/lang/String;

    iget-boolean v4, p0, Lcom/mbridge/msdk/splash/c/c;->j:Z

    iget v5, p0, Lcom/mbridge/msdk/splash/c/c;->k:I

    const/4 v6, 0x1

    const/4 v7, 0x0

    move-object v3, p3

    invoke-static/range {v0 .. v7}, Lcom/mbridge/msdk/splash/c/b;->a(Lcom/mbridge/msdk/splash/view/MBSplashView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZIZZ)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p3

    if-eqz p3, :cond_0

    .line 494
    sget-object p1, Lcom/mbridge/msdk/splash/c/c;->a:Ljava/lang/String;

    const-string v0, "load failed cache "

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 495
    invoke-direct {p0, p3, p2}, Lcom/mbridge/msdk/splash/c/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    goto :goto_0

    .line 497
    :cond_0
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/splash/c/c;->b(Ljava/lang/String;I)V

    :goto_0
    return-void
.end method

.method private a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 2

    .line 706
    new-instance v0, Lcom/mbridge/msdk/splash/c/e$c;

    invoke-direct {v0}, Lcom/mbridge/msdk/splash/c/e$c;-><init>()V

    .line 707
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/c;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/splash/c/e$c;->c(Ljava/lang/String;)V

    .line 708
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/c;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/splash/c/e$c;->b(Ljava/lang/String;)V

    .line 709
    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/splash/c/e$c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 710
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/splash/c/e$c;->a(Ljava/lang/String;)V

    .line 711
    iget-boolean p1, p0, Lcom/mbridge/msdk/splash/c/c;->j:Z

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/splash/c/e$c;->a(Z)V

    .line 712
    iget p1, p0, Lcom/mbridge/msdk/splash/c/c;->k:I

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/splash/c/e$c;->a(I)V

    .line 714
    new-instance p1, Lcom/mbridge/msdk/splash/c/c$8;

    invoke-direct {p1, p0, p2, p3}, Lcom/mbridge/msdk/splash/c/c$8;-><init>(Lcom/mbridge/msdk/splash/c/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    .line 2035
    invoke-static {}, Lcom/mbridge/msdk/splash/c/e$a;->a()Lcom/mbridge/msdk/splash/c/e;

    move-result-object p2

    .line 737
    iget-object p3, p0, Lcom/mbridge/msdk/splash/c/c;->h:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-virtual {p2, p3, v0, p1}, Lcom/mbridge/msdk/splash/c/e;->a(Lcom/mbridge/msdk/splash/view/MBSplashView;Lcom/mbridge/msdk/splash/c/e$c;Lcom/mbridge/msdk/splash/c/e$b;)V

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;I)V
    .locals 1

    .line 483
    iget-boolean v0, p0, Lcom/mbridge/msdk/splash/c/c;->p:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 484
    iput-boolean v0, p0, Lcom/mbridge/msdk/splash/c/c;->p:Z

    .line 485
    invoke-direct {p0, p1, p3, p2}, Lcom/mbridge/msdk/splash/c/c;->a(Ljava/lang/String;ILjava/lang/String;)V

    return-void

    .line 488
    :cond_0
    invoke-direct {p0, p1, p3}, Lcom/mbridge/msdk/splash/c/c;->b(Ljava/lang/String;I)V

    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/splash/c/c;)I
    .locals 0

    .line 61
    iget p0, p0, Lcom/mbridge/msdk/splash/c/c;->o:I

    return p0
.end method

.method private b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 1

    .line 469
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->h:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-static {v0, p1}, Lcom/mbridge/msdk/splash/c/b;->a(Lcom/mbridge/msdk/splash/view/MBSplashView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/mbridge/msdk/splash/c/c;->q:Z

    if-nez v0, :cond_1

    .line 470
    invoke-direct {p0}, Lcom/mbridge/msdk/splash/c/c;->d()V

    .line 472
    iget-boolean v0, p0, Lcom/mbridge/msdk/splash/c/c;->p:Z

    if-eqz v0, :cond_0

    .line 473
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->b:Ljava/lang/String;

    invoke-static {p1, v0}, Lcom/mbridge/msdk/splash/c/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V

    :cond_0
    const/4 v0, 0x1

    .line 475
    iput-boolean v0, p0, Lcom/mbridge/msdk/splash/c/c;->q:Z

    .line 476
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->f:Lcom/mbridge/msdk/splash/b/b;

    if-eqz v0, :cond_1

    .line 477
    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/splash/b/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    :cond_1
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/splash/c/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 9

    .line 3635
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-eqz v0, :cond_8

    .line 3636
    new-instance v0, Lcom/mbridge/msdk/splash/a/c$a;

    invoke-direct {v0}, Lcom/mbridge/msdk/splash/a/c$a;-><init>()V

    .line 3637
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/c;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/splash/a/c$a;->b(Ljava/lang/String;)Lcom/mbridge/msdk/splash/a/c$a;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/c;->c:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/splash/a/c$a;->a(Ljava/lang/String;)Lcom/mbridge/msdk/splash/a/c$a;

    move-result-object v1

    iget-boolean v2, p0, Lcom/mbridge/msdk/splash/c/c;->j:Z

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/splash/a/c$a;->a(Z)Lcom/mbridge/msdk/splash/a/c$a;

    move-result-object v1

    .line 3638
    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/splash/a/c$a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/splash/a/c$a;

    move-result-object v1

    iget v2, p0, Lcom/mbridge/msdk/splash/c/c;->k:I

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/splash/a/c$a;->a(I)Lcom/mbridge/msdk/splash/a/c$a;

    move-result-object v1

    iget v2, p0, Lcom/mbridge/msdk/splash/c/c;->w:I

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/splash/a/c$a;->h(I)Lcom/mbridge/msdk/splash/a/c$a;

    .line 3640
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdZip()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_7

    .line 3641
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdZip()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    const-string v2, "hdbtn"

    .line 3642
    invoke-virtual {v1, v2}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "alecfc"

    .line 3643
    invoke-virtual {v1, v3}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "hdinfo"

    .line 3644
    invoke-virtual {v1, v4}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    const-string v5, "shake_show"

    .line 3646
    invoke-virtual {v1, v5}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const-string v6, "shake_strength"

    .line 3647
    invoke-virtual {v1, v6}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    const-string v7, "shake_time"

    .line 3648
    invoke-virtual {v1, v7}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    const-string v8, "n_logo"

    .line 3649
    invoke-virtual {v1, v8}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 3651
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_0

    .line 3652
    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/splash/a/c$a;->b(I)Lcom/mbridge/msdk/splash/a/c$a;

    .line 3655
    :cond_0
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 3656
    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/splash/a/c$a;->c(I)Lcom/mbridge/msdk/splash/a/c$a;

    .line 3659
    :cond_1
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 3660
    invoke-static {v4}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/splash/a/c$a;->d(I)Lcom/mbridge/msdk/splash/a/c$a;

    .line 3663
    :cond_2
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    .line 3664
    invoke-static {v5}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/splash/a/c$a;->e(I)Lcom/mbridge/msdk/splash/a/c$a;

    .line 3667
    :cond_3
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_4

    .line 3668
    invoke-static {v6}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/splash/a/c$a;->f(I)Lcom/mbridge/msdk/splash/a/c$a;

    .line 3671
    :cond_4
    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_5

    .line 3672
    invoke-static {v7}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/splash/a/c$a;->g(I)Lcom/mbridge/msdk/splash/a/c$a;

    .line 3675
    :cond_5
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_7

    .line 3676
    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    if-nez v1, :cond_6

    const/4 v1, 0x0

    goto :goto_0

    :cond_6
    const/4 v1, 0x1

    .line 3677
    :goto_0
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/splash/a/c$a;->i(I)Lcom/mbridge/msdk/splash/a/c$a;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v1

    .line 3682
    sget-object v2, Lcom/mbridge/msdk/splash/c/c;->a:Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 4050
    :cond_7
    :goto_1
    invoke-static {}, Lcom/mbridge/msdk/splash/c/a$a;->a()Lcom/mbridge/msdk/splash/c/a;

    move-result-object v1

    .line 3685
    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/c;->h:Lcom/mbridge/msdk/splash/view/MBSplashView;

    .line 4192
    new-instance v3, Lcom/mbridge/msdk/splash/a/c;

    invoke-direct {v3, v0}, Lcom/mbridge/msdk/splash/a/c;-><init>(Lcom/mbridge/msdk/splash/a/c$a;)V

    .line 3685
    new-instance v0, Lcom/mbridge/msdk/splash/c/c$7;

    invoke-direct {v0, p0, p1, p2}, Lcom/mbridge/msdk/splash/c/c$7;-><init>(Lcom/mbridge/msdk/splash/c/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    invoke-virtual {v1, v2, v3, v0}, Lcom/mbridge/msdk/splash/c/a;->a(Lcom/mbridge/msdk/splash/view/MBSplashView;Lcom/mbridge/msdk/splash/a/c;Lcom/mbridge/msdk/splash/b/a;)V

    :cond_8
    return-void
.end method

.method private b(Ljava/lang/String;I)V
    .locals 2

    .line 502
    iget-boolean v0, p0, Lcom/mbridge/msdk/splash/c/c;->q:Z

    if-nez v0, :cond_0

    .line 503
    invoke-direct {p0}, Lcom/mbridge/msdk/splash/c/c;->d()V

    .line 504
    sget-object v0, Lcom/mbridge/msdk/splash/c/c;->a:Ljava/lang/String;

    const-string v1, "real failed "

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x1

    .line 505
    iput-boolean v0, p0, Lcom/mbridge/msdk/splash/c/c;->q:Z

    .line 506
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->f:Lcom/mbridge/msdk/splash/b/b;

    if-eqz v0, :cond_0

    .line 507
    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/splash/b/b;->a(Ljava/lang/String;I)V

    :cond_0
    return-void
.end method

.method static synthetic c()Ljava/lang/String;
    .locals 1

    .line 61
    sget-object v0, Lcom/mbridge/msdk/splash/c/c;->a:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic c(Lcom/mbridge/msdk/splash/c/c;)Ljava/lang/String;
    .locals 0

    .line 61
    iget-object p0, p0, Lcom/mbridge/msdk/splash/c/c;->b:Ljava/lang/String;

    return-object p0
.end method

.method private c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 1

    .line 517
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->h:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->clearResState()V

    .line 519
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdZip()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 520
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/splash/c/c;->f(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    .line 522
    :cond_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-nez v0, :cond_3

    .line 523
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdHtml()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 524
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/splash/c/c;->e(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    .line 526
    :cond_1
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 527
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/splash/c/c;->g(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    .line 529
    :cond_2
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 530
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/splash/c/c;->d(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    :cond_3
    return-void
.end method

.method static synthetic c(Lcom/mbridge/msdk/splash/c/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 2

    .line 4745
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->h:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->isH5Ready()Z

    move-result v0

    if-nez v0, :cond_0

    .line 4746
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->h:Lcom/mbridge/msdk/splash/view/MBSplashView;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/splash/view/MBSplashView;->setH5Ready(Z)V

    .line 4747
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/splash/c/c;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    :cond_0
    return-void
.end method

.method private d()V
    .locals 2

    .line 513
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->x:Landroid/os/Handler;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/c;->y:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    return-void
.end method

.method private d(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 2

    .line 536
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->h:Lcom/mbridge/msdk/splash/view/MBSplashView;

    new-instance v1, Lcom/mbridge/msdk/splash/c/c$5;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/splash/c/c$5;-><init>(Lcom/mbridge/msdk/splash/c/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    invoke-static {v0, p1, v1}, Lcom/mbridge/msdk/splash/c/b;->a(Lcom/mbridge/msdk/splash/view/MBSplashView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/splash/view/nativeview/a;)V

    return-void
.end method

.method static synthetic d(Lcom/mbridge/msdk/splash/c/c;)V
    .locals 1

    const/4 v0, 0x0

    .line 3389
    iput v0, p0, Lcom/mbridge/msdk/splash/c/c;->u:I

    return-void
.end method

.method static synthetic e(Lcom/mbridge/msdk/splash/c/c;)Landroid/content/Context;
    .locals 0

    .line 61
    iget-object p0, p0, Lcom/mbridge/msdk/splash/c/c;->g:Landroid/content/Context;

    return-object p0
.end method

.method private e(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 8

    const-string v0, "6"

    const-string v1, ""

    const/4 v2, 0x0

    .line 561
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdHtml()Ljava/lang/String;

    move-result-object v3

    .line 562
    new-instance v4, Ljava/io/File;

    invoke-direct {v4, v3}, Ljava/io/File;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_3
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 563
    :try_start_1
    invoke-virtual {v4}, Ljava/io/File;->exists()Z

    move-result v3

    if-nez v3, :cond_2

    .line 564
    sget-object v3, Lcom/mbridge/msdk/foundation/same/b/c;->g:Lcom/mbridge/msdk/foundation/same/b/c;

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/same/b/e;->b(Lcom/mbridge/msdk/foundation/same/b/c;)Ljava/lang/String;

    move-result-object v3

    .line 565
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdHtml()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/mbridge/msdk/foundation/tools/ak;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 566
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_0

    .line 567
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    invoke-static {v5, v6}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v5

    :cond_0
    const-string v6, ".html"

    invoke-virtual {v5, v6}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 570
    new-instance v6, Ljava/io/File;

    invoke-direct {v6, v3, v5}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 571
    :try_start_2
    invoke-virtual {v6}, Ljava/io/File;->exists()Z

    move-result v3

    if-nez v3, :cond_3

    .line 572
    new-instance v3, Ljava/io/FileOutputStream;

    invoke-direct {v3, v6}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 574
    :try_start_3
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "<script>"

    .line 575
    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/mbridge/msdk/c/b/b;->a()Lcom/mbridge/msdk/c/b/b;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/c/b/b;->b()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "</script>"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 576
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdHtml()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 577
    sget-object v4, Lcom/mbridge/msdk/MBridgeConstans;->OMID_JS_SERVICE_CONTENT:Ljava/lang/String;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v4, v2}, Lcom/iab/omid/library/mmadbridge/ScriptInjector;->injectScriptContentIntoHtml(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 578
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isActiveOm()Z

    move-result v4

    if-eqz v4, :cond_1

    .line 579
    invoke-static {v2}, Lcom/mbridge/msdk/a/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 581
    :cond_1
    invoke-virtual {v2}, Ljava/lang/String;->getBytes()[B

    move-result-object v2

    invoke-virtual {v3, v2}, Ljava/io/FileOutputStream;->write([B)V

    .line 582
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

    .line 585
    :cond_3
    :goto_0
    :try_start_4
    iget-object v3, p0, Lcom/mbridge/msdk/splash/c/c;->b:Ljava/lang/String;

    invoke-static {p1, v1, v3, v0}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    if-eqz v2, :cond_4

    .line 592
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

    .line 587
    :goto_2
    :try_start_6
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    .line 588
    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setMraid(Ljava/lang/String;)V

    .line 589
    invoke-virtual {v3}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    iget-object v3, p0, Lcom/mbridge/msdk/splash/c/c;->b:Ljava/lang/String;

    invoke-static {p1, v1, v3, v0}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_1

    if-eqz v2, :cond_4

    goto :goto_1

    .line 595
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

    .line 596
    invoke-virtual {v6}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAdHtml(Ljava/lang/String;)V

    .line 597
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "file:////"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0, p1, p2}, Lcom/mbridge/msdk/splash/c/c;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    goto :goto_5

    :cond_5
    const-string p1, "html file write failed"

    .line 599
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->n:Ljava/lang/String;

    invoke-direct {p0, p1, v0, p2}, Lcom/mbridge/msdk/splash/c/c;->a(Ljava/lang/String;Ljava/lang/String;I)V

    goto :goto_5

    :goto_4
    if-eqz v2, :cond_6

    .line 592
    invoke-virtual {v2}, Ljava/io/FileOutputStream;->close()V

    .line 594
    :cond_6
    throw p1
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_4

    :catch_4
    move-exception p1

    .line 603
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->n:Ljava/lang/String;

    invoke-direct {p0, p1, v0, p2}, Lcom/mbridge/msdk/splash/c/c;->a(Ljava/lang/String;Ljava/lang/String;I)V

    :goto_5
    return-void
.end method

.method static synthetic f(Lcom/mbridge/msdk/splash/c/c;)Lcom/mbridge/msdk/splash/view/MBSplashView;
    .locals 0

    .line 61
    iget-object p0, p0, Lcom/mbridge/msdk/splash/c/c;->h:Lcom/mbridge/msdk/splash/view/MBSplashView;

    return-object p0
.end method

.method private f(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 1

    .line 608
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 609
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdZip()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/i;->a(Ljava/lang/String;)Ljava/lang/String;

    goto :goto_0

    .line 611
    :cond_0
    new-instance v0, Lcom/mbridge/msdk/splash/c/c$6;

    invoke-direct {v0, p0, p1, p2}, Lcom/mbridge/msdk/splash/c/c$6;-><init>(Lcom/mbridge/msdk/splash/c/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->s:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;

    .line 630
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    move-result-object p2

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdZip()Ljava/lang/String;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->s:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;

    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->downloadH5Res(Ljava/lang/String;Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;)V

    :goto_0
    return-void
.end method

.method static synthetic g(Lcom/mbridge/msdk/splash/c/c;)Landroid/os/Handler;
    .locals 0

    .line 61
    iget-object p0, p0, Lcom/mbridge/msdk/splash/c/c;->x:Landroid/os/Handler;

    return-object p0
.end method

.method private g(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 7

    .line 752
    new-instance v0, Lcom/mbridge/msdk/splash/c/c$9;

    invoke-direct {v0, p0, p1}, Lcom/mbridge/msdk/splash/c/c$9;-><init>(Lcom/mbridge/msdk/splash/c/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->r:Lcom/mbridge/msdk/videocommon/listener/a;

    .line 773
    new-instance v4, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v4}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    .line 774
    invoke-virtual {v4, p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->add(Ljava/lang/Object;)Z

    .line 775
    invoke-static {}, Lcom/mbridge/msdk/videocommon/download/b;->getInstance()Lcom/mbridge/msdk/videocommon/download/b;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/c;->g:Landroid/content/Context;

    iget-object v3, p0, Lcom/mbridge/msdk/splash/c/c;->b:Ljava/lang/String;

    iget-object v6, p0, Lcom/mbridge/msdk/splash/c/c;->r:Lcom/mbridge/msdk/videocommon/listener/a;

    const/16 v5, 0x129

    invoke-virtual/range {v1 .. v6}, Lcom/mbridge/msdk/videocommon/download/b;->createUnitCache(Landroid/content/Context;Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;ILcom/mbridge/msdk/videocommon/listener/a;)Lcom/mbridge/msdk/videocommon/download/d;

    .line 776
    invoke-static {}, Lcom/mbridge/msdk/videocommon/download/b;->getInstance()Lcom/mbridge/msdk/videocommon/download/b;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/c;->b:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v2

    const/16 v3, 0x129

    invoke-virtual {v0, v3, v1, v2}, Lcom/mbridge/msdk/videocommon/download/b;->a(ILjava/lang/String;Z)Z

    move-result v0

    if-nez v0, :cond_0

    .line 777
    invoke-static {}, Lcom/mbridge/msdk/videocommon/download/b;->getInstance()Lcom/mbridge/msdk/videocommon/download/b;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/splash/c/c;->b:Ljava/lang/String;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/videocommon/download/b;->load(Ljava/lang/String;)V

    goto :goto_0

    .line 779
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->h:Lcom/mbridge/msdk/splash/view/MBSplashView;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/splash/view/MBSplashView;->setVideoReady(Z)V

    .line 780
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/splash/c/c;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    :goto_0
    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 168
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->v:Ljava/lang/String;

    return-object v0
.end method

.method public final a(I)V
    .locals 0

    .line 155
    iput p1, p0, Lcom/mbridge/msdk/splash/c/c;->k:I

    return-void
.end method

.method public final a(II)V
    .locals 0

    .line 159
    iput p1, p0, Lcom/mbridge/msdk/splash/c/c;->m:I

    .line 160
    iput p2, p0, Lcom/mbridge/msdk/splash/c/c;->l:I

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/c/d;)V
    .locals 0

    .line 135
    iput-object p1, p0, Lcom/mbridge/msdk/splash/c/c;->i:Lcom/mbridge/msdk/c/d;

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/splash/b/b;)V
    .locals 0

    .line 434
    iput-object p1, p0, Lcom/mbridge/msdk/splash/c/c;->f:Lcom/mbridge/msdk/splash/b/b;

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/splash/view/MBSplashView;)V
    .locals 0

    .line 139
    iput-object p1, p0, Lcom/mbridge/msdk/splash/c/c;->h:Lcom/mbridge/msdk/splash/view/MBSplashView;

    return-void
.end method

.method public final a(Ljava/lang/String;I)V
    .locals 9

    const/4 v0, 0x0

    .line 176
    iput-boolean v0, p0, Lcom/mbridge/msdk/splash/c/c;->q:Z

    .line 177
    iput-object p1, p0, Lcom/mbridge/msdk/splash/c/c;->n:Ljava/lang/String;

    .line 178
    iput p2, p0, Lcom/mbridge/msdk/splash/c/c;->o:I

    .line 182
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/c;->h:Lcom/mbridge/msdk/splash/view/MBSplashView;

    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/c;->c:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/splash/c/c;->b:Ljava/lang/String;

    iget-boolean v5, p0, Lcom/mbridge/msdk/splash/c/c;->j:Z

    iget v6, p0, Lcom/mbridge/msdk/splash/c/c;->k:I

    const/4 v7, 0x0

    const/4 v8, 0x0

    move-object v4, p1

    invoke-static/range {v1 .. v8}, Lcom/mbridge/msdk/splash/c/b;->a(Lcom/mbridge/msdk/splash/view/MBSplashView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZIZZ)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v1

    const-wide/16 v2, 0x0

    if-eqz v1, :cond_0

    .line 184
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTimestamp()J

    move-result-wide v4

    goto :goto_0

    :cond_0
    move-wide v4, v2

    .line 187
    :goto_0
    iget-object v6, p0, Lcom/mbridge/msdk/splash/c/c;->i:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v6}, Lcom/mbridge/msdk/c/d;->n()I

    move-result v6

    const/4 v7, 0x1

    if-ne v6, v7, :cond_1

    if-eq p2, v7, :cond_1

    if-eqz v1, :cond_1

    .line 189
    invoke-direct {p0, v1, p2}, Lcom/mbridge/msdk/splash/c/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    return-void

    .line 194
    :cond_1
    iput-boolean v7, p0, Lcom/mbridge/msdk/splash/c/c;->p:Z

    if-ne p2, v7, :cond_3

    .line 197
    iget-object v6, p0, Lcom/mbridge/msdk/splash/c/c;->i:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v6}, Lcom/mbridge/msdk/c/d;->s()Ljava/util/List;

    move-result-object v6

    if-eqz v6, :cond_2

    .line 198
    invoke-interface {v6}, Ljava/util/List;->size()I

    move-result v7

    if-lez v7, :cond_2

    .line 199
    invoke-interface {v6, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v6, v0

    iput-wide v6, p0, Lcom/mbridge/msdk/splash/c/c;->d:J

    goto :goto_1

    :cond_2
    const-wide/16 v6, 0x7530

    .line 201
    iput-wide v6, p0, Lcom/mbridge/msdk/splash/c/c;->d:J

    goto :goto_1

    .line 205
    :cond_3
    iget-wide v6, p0, Lcom/mbridge/msdk/splash/c/c;->e:J

    cmp-long v0, v6, v2

    if-gtz v0, :cond_4

    .line 206
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->i:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/d;->o()I

    move-result v0

    int-to-long v6, v0

    iput-wide v6, p0, Lcom/mbridge/msdk/splash/c/c;->d:J

    goto :goto_1

    .line 208
    :cond_4
    iput-wide v6, p0, Lcom/mbridge/msdk/splash/c/c;->d:J

    .line 213
    :goto_1
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->i:Lcom/mbridge/msdk/c/d;

    if-eqz v0, :cond_6

    cmp-long v0, v4, v2

    if-lez v0, :cond_6

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_6

    .line 214
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->i:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/d;->x()I

    move-result v0

    mul-int/lit16 v0, v0, 0x3e8

    .line 215
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    sub-long/2addr v2, v4

    int-to-long v4, v0

    cmp-long v0, v2, v4

    if-lez v0, :cond_5

    .line 216
    iget-wide v0, p0, Lcom/mbridge/msdk/splash/c/c;->d:J

    invoke-direct {p0, v0, v1}, Lcom/mbridge/msdk/splash/c/c;->a(J)V

    .line 217
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->g:Landroid/content/Context;

    invoke-direct {p0, v0, p1, p2}, Lcom/mbridge/msdk/splash/c/c;->a(Landroid/content/Context;Ljava/lang/String;I)V

    goto :goto_2

    .line 219
    :cond_5
    invoke-direct {p0, v1, p2}, Lcom/mbridge/msdk/splash/c/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    goto :goto_2

    .line 222
    :cond_6
    iget-wide v0, p0, Lcom/mbridge/msdk/splash/c/c;->d:J

    invoke-direct {p0, v0, v1}, Lcom/mbridge/msdk/splash/c/c;->a(J)V

    .line 223
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->g:Landroid/content/Context;

    invoke-direct {p0, v0, p1, p2}, Lcom/mbridge/msdk/splash/c/c;->a(Landroid/content/Context;Ljava/lang/String;I)V

    :goto_2
    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 147
    iput-boolean p1, p0, Lcom/mbridge/msdk/splash/c/c;->j:Z

    return-void
.end method

.method public final b()V
    .locals 2

    .line 439
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->f:Lcom/mbridge/msdk/splash/b/b;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 440
    iput-object v1, p0, Lcom/mbridge/msdk/splash/c/c;->f:Lcom/mbridge/msdk/splash/b/b;

    .line 442
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->r:Lcom/mbridge/msdk/videocommon/listener/a;

    if-eqz v0, :cond_1

    .line 443
    iput-object v1, p0, Lcom/mbridge/msdk/splash/c/c;->r:Lcom/mbridge/msdk/videocommon/listener/a;

    .line 445
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c;->s:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;

    if-eqz v0, :cond_2

    .line 446
    iput-object v1, p0, Lcom/mbridge/msdk/splash/c/c;->s:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;

    :cond_2
    return-void
.end method

.method public final b(I)V
    .locals 0

    .line 164
    iput p1, p0, Lcom/mbridge/msdk/splash/c/c;->w:I

    return-void
.end method
