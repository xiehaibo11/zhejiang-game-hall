.class public final Lcom/mbridge/msdk/mbbanner/common/c/c;
.super Ljava/lang/Object;
.source "BannerShowManager.java"


# static fields
.field private static b:Ljava/lang/String; = "BannerShowManager"


# instance fields
.field private A:F

.field private B:Landroid/view/View$OnClickListener;

.field private C:Lcom/mbridge/msdk/mbbanner/common/b/a;

.field private D:Lcom/mbridge/msdk/mbjscommon/c/b;

.field a:Lcom/mbridge/msdk/click/b;

.field private c:Lcom/mbridge/msdk/mbbanner/common/b/c;

.field private d:Z

.field private e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private f:Lcom/mbridge/msdk/out/MBBannerView;

.field private g:Landroid/widget/ImageView;

.field private h:Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

.field private i:Landroid/widget/ImageView;

.field private j:Z

.field private k:Z

.field private l:Z

.field private m:Z

.field private n:Z

.field private o:Z

.field private p:Z

.field private q:Ljava/lang/String;

.field private r:Ljava/lang/String;

.field private s:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation
.end field

.field private t:I

.field private u:J

.field private v:Lcom/mbridge/msdk/mbbanner/common/bridge/a;

.field private w:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

.field private x:Landroid/os/Handler;

.field private y:Lcom/mbridge/msdk/foundation/same/e/a;

.field private z:F


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Lcom/mbridge/msdk/out/MBBannerView;Lcom/mbridge/msdk/mbbanner/common/b/c;Ljava/lang/String;Ljava/lang/String;ZLcom/mbridge/msdk/c/d;)V
    .locals 2

    .line 246
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, 0x3a98

    .line 112
    iput-wide v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->u:J

    .line 115
    new-instance v0, Lcom/mbridge/msdk/mbbanner/common/c/c$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/mbridge/msdk/mbbanner/common/c/c$1;-><init>(Lcom/mbridge/msdk/mbbanner/common/c/c;Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->x:Landroid/os/Handler;

    .line 136
    new-instance v0, Lcom/mbridge/msdk/mbbanner/common/c/c$6;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/mbbanner/common/c/c$6;-><init>(Lcom/mbridge/msdk/mbbanner/common/c/c;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->y:Lcom/mbridge/msdk/foundation/same/e/a;

    .line 158
    new-instance v0, Lcom/mbridge/msdk/mbbanner/common/c/c$7;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/mbbanner/common/c/c$7;-><init>(Lcom/mbridge/msdk/mbbanner/common/c/c;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->B:Landroid/view/View$OnClickListener;

    .line 176
    new-instance v0, Lcom/mbridge/msdk/mbbanner/common/c/c$8;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/mbbanner/common/c/c$8;-><init>(Lcom/mbridge/msdk/mbbanner/common/c/c;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->C:Lcom/mbridge/msdk/mbbanner/common/b/a;

    .line 1001
    new-instance v0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/mbbanner/common/c/c$4;-><init>(Lcom/mbridge/msdk/mbbanner/common/c/c;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->D:Lcom/mbridge/msdk/mbjscommon/c/b;

    .line 247
    iput-boolean p5, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->d:Z

    .line 248
    iput-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->f:Lcom/mbridge/msdk/out/MBBannerView;

    .line 249
    iput-object p4, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    .line 250
    iput-object p3, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->r:Ljava/lang/String;

    .line 251
    new-instance p1, Lcom/mbridge/msdk/mbbanner/common/b/e;

    invoke-direct {p1, p2, p6}, Lcom/mbridge/msdk/mbbanner/common/b/e;-><init>(Lcom/mbridge/msdk/mbbanner/common/b/c;Lcom/mbridge/msdk/c/d;)V

    iput-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->c:Lcom/mbridge/msdk/mbbanner/common/b/c;

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbbanner/common/c/c;F)F
    .locals 0

    .line 85
    iput p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->z:F

    return p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/iab/omid/library/mmadbridge/adsession/AdSession;
    .locals 0

    .line 85
    iget-object p0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->w:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    return-object p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbbanner/common/c/c;Lcom/iab/omid/library/mmadbridge/adsession/AdSession;)Lcom/iab/omid/library/mmadbridge/adsession/AdSession;
    .locals 0

    .line 85
    iput-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->w:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    return-object p1
.end method

.method private a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Ljava/lang/String;
    .locals 4

    const-string v0, ""

    if-eqz p1, :cond_4

    .line 460
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBannerUrl()Ljava/lang/String;

    move-result-object v1

    .line 461
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/HTMLResourceManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/HTMLResourceManager;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/foundation/download/download/HTMLResourceManager;->getHtmlContentFromUrl(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 462
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBannerHtml()Ljava/lang/String;

    move-result-object v1

    .line 463
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isActiveOm()Z

    move-result p1

    const-string v2, "file:////"

    if-eqz p1, :cond_2

    .line 466
    :try_start_0
    new-instance p1, Ljava/io/File;

    invoke-direct {p1, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 467
    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result v3

    if-eqz v3, :cond_0

    .line 468
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/x;->a(Ljava/io/File;)Ljava/lang/String;

    move-result-object v0

    .line 470
    :cond_0
    sget-object p1, Lcom/mbridge/msdk/MBridgeConstans;->OMID_JS_SERVICE_CONTENT:Ljava/lang/String;

    invoke-static {p1, v0}, Lcom/iab/omid/library/mmadbridge/ScriptInjector;->injectScriptContentIntoHtml(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 472
    :catch_0
    new-instance p1, Ljava/io/File;

    invoke-direct {p1, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 473
    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {p1}, Ljava/io/File;->isFile()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {p1}, Ljava/io/File;->canRead()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 474
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    :goto_0
    move-object v0, p1

    goto :goto_1

    :cond_1
    move-object v0, v1

    goto :goto_1

    .line 478
    :cond_2
    new-instance p1, Ljava/io/File;

    invoke-direct {p1, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 479
    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {p1}, Ljava/io/File;->isFile()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {p1}, Ljava/io/File;->canRead()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 480
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    .line 484
    :cond_3
    sget-object p1, Lcom/mbridge/msdk/MBridgeConstans;->OMID_JS_SERVICE_CONTENT:Ljava/lang/String;

    invoke-static {p1, v1}, Lcom/iab/omid/library/mmadbridge/ScriptInjector;->injectScriptContentIntoHtml(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    :cond_4
    :goto_1
    return-object v0
.end method

.method private a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V
    .locals 8

    if-eqz p1, :cond_0

    .line 780
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPv_urls()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 781
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 782
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    move-object v5, v1

    check-cast v5, Ljava/lang/String;

    const/4 v6, 0x0

    const/4 v7, 0x1

    move-object v2, p2

    move-object v3, p1

    move-object v4, p3

    .line 783
    invoke-static/range {v2 .. v7}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 788
    sget-object p2, Lcom/mbridge/msdk/mbbanner/common/c/c;->b:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbbanner/common/c/c;Ljava/lang/String;)V
    .locals 0

    .line 85
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbbanner/common/c/c;Ljava/lang/String;I)V
    .locals 0

    .line 85
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Ljava/lang/String;I)V

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 3

    .line 497
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1

    invoke-direct {p0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->f()Z

    move-result v0

    if-nez v0, :cond_1

    .line 498
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->x:Landroid/os/Handler;

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->y:Lcom/mbridge/msdk/foundation/same/e/a;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 499
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->c:Lcom/mbridge/msdk/mbbanner/common/b/c;

    if-eqz v0, :cond_0

    .line 500
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/mbbanner/common/b/c;->a(Ljava/lang/String;)V

    .line 502
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v2, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    invoke-static {v0, v1, v2, p1}, Lcom/mbridge/msdk/foundation/same/report/e;->b(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method private a(Ljava/lang/String;I)V
    .locals 2

    .line 970
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    .line 971
    invoke-static {}, Lcom/mbridge/msdk/mbbanner/common/a/a;->a()Lcom/mbridge/msdk/mbbanner/common/a/a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbbanner/common/a/a;->c(Ljava/lang/String;)Lcom/mbridge/msdk/mbbanner/common/a/a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbbanner/common/a/a;->b(Ljava/lang/String;)Lcom/mbridge/msdk/mbbanner/common/a/a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbbanner/common/a/a;->d(Ljava/lang/String;)Lcom/mbridge/msdk/mbbanner/common/a/a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbbanner/common/a/a;->e(Ljava/lang/String;)Lcom/mbridge/msdk/mbbanner/common/a/a;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbbanner/common/a/a;->g(Ljava/lang/String;)Lcom/mbridge/msdk/mbbanner/common/a/a;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/mbbanner/common/a/a;->a(I)Lcom/mbridge/msdk/mbbanner/common/a/a;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result p2

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/mbbanner/common/a/a;->a(Z)Lcom/mbridge/msdk/mbbanner/common/a/a;

    move-result-object p1

    .line 972
    iget-object p2, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    invoke-static {p1, p2}, Lcom/mbridge/msdk/mbbanner/common/d/a;->a(Lcom/mbridge/msdk/mbbanner/common/a/a;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbbanner/common/c/c;Z)Z
    .locals 0

    .line 85
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->o:Z

    return p1
.end method

.method static synthetic b(Lcom/mbridge/msdk/mbbanner/common/c/c;F)F
    .locals 0

    .line 85
    iput p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->A:F

    return p1
.end method

.method static synthetic b()Ljava/lang/String;
    .locals 1

    .line 85
    sget-object v0, Lcom/mbridge/msdk/mbbanner/common/c/c;->b:Ljava/lang/String;

    return-object v0
.end method

.method private b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V
    .locals 8

    if-eqz p1, :cond_0

    .line 794
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOnlyImpressionURL()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 795
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOnlyImpressionURL()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    const/4 v6, 0x1

    sget v7, Lcom/mbridge/msdk/click/a/a;->h:I

    move-object v1, p2

    move-object v2, p1

    move-object v3, p3

    invoke-static/range {v1 .. v7}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZI)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 798
    sget-object p2, Lcom/mbridge/msdk/mbbanner/common/c/c;->b:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/mbbanner/common/c/c;)Z
    .locals 0

    .line 85
    iget-boolean p0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->p:Z

    return p0
.end method

.method static synthetic b(Lcom/mbridge/msdk/mbbanner/common/c/c;Z)Z
    .locals 0

    .line 85
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->l:Z

    return p1
.end method

.method private c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V
    .locals 9

    .line 804
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImpressionURL()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 806
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/mbridge/msdk/mbbanner/common/c/c$13;

    invoke-direct {v1, p0, p2, p1}, Lcom/mbridge/msdk/mbbanner/common/c/c$13;-><init>(Lcom/mbridge/msdk/mbbanner/common/c/c;Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 818
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    const/4 v6, 0x0

    const/4 v7, 0x1

    .line 824
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImpressionURL()Ljava/lang/String;

    move-result-object v5

    sget v8, Lcom/mbridge/msdk/click/a/a;->g:I

    move-object v2, p2

    move-object v3, p1

    move-object v4, p3

    invoke-static/range {v2 .. v8}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZI)V

    .line 826
    :cond_0
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/l;->l()[Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_1

    const/4 v5, 0x0

    const/4 v6, 0x0

    .line 829
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/l;->l()[Ljava/lang/String;

    move-result-object v4

    move-object v1, p2

    move-object v2, p1

    move-object v3, p3

    invoke-static/range {v1 .. v6}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;[Ljava/lang/String;ZZ)V

    :cond_1
    return-void
.end method

.method static synthetic c(Lcom/mbridge/msdk/mbbanner/common/c/c;)V
    .locals 4

    .line 6631
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->h:Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 6632
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->f:Lcom/mbridge/msdk/out/MBBannerView;

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->h:Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/out/MBBannerView;->removeView(Landroid/view/View;)V

    .line 6634
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->g:Landroid/widget/ImageView;

    const/16 v1, 0x8

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Landroid/widget/ImageView;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 6635
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->g:Landroid/widget/ImageView;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 6636
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->f:Lcom/mbridge/msdk/out/MBBannerView;

    iget-object v2, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->g:Landroid/widget/ImageView;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/out/MBBannerView;->removeView(Landroid/view/View;)V

    .line 6638
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->i:Landroid/widget/ImageView;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Landroid/widget/ImageView;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 6639
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->f:Lcom/mbridge/msdk/out/MBBannerView;

    iget-object v2, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->i:Landroid/widget/ImageView;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/out/MBBannerView;->removeView(Landroid/view/View;)V

    .line 6640
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->i:Landroid/widget/ImageView;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 6642
    :cond_2
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/b/b;->c(Ljava/lang/String;)V

    .line 6644
    invoke-static {}, Lcom/mbridge/msdk/mbbanner/common/a/a;->a()Lcom/mbridge/msdk/mbbanner/common/a/a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbbanner/common/a/a;->b(Ljava/lang/String;)Lcom/mbridge/msdk/mbbanner/common/a/a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbbanner/common/a/a;->d(Ljava/lang/String;)Lcom/mbridge/msdk/mbbanner/common/a/a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbbanner/common/a/a;->e(Ljava/lang/String;)Lcom/mbridge/msdk/mbbanner/common/a/a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbbanner/common/a/a;->c(Ljava/lang/String;)Lcom/mbridge/msdk/mbbanner/common/a/a;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCreativeId()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v2, ""

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbbanner/common/a/a;->f(Ljava/lang/String;)Lcom/mbridge/msdk/mbbanner/common/a/a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbbanner/common/a/a;->a(Z)Lcom/mbridge/msdk/mbbanner/common/a/a;

    move-result-object v0

    .line 6645
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    if-eqz v0, :cond_4

    const-string v2, "2000069"

    .line 7212
    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/mbbanner/common/a/a;->a(Ljava/lang/String;)Lcom/mbridge/msdk/mbbanner/common/a/a;

    .line 7213
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/same/report/b;->c()Z

    move-result v2

    if-eqz v2, :cond_3

    .line 7214
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object v1

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbbanner/common/a/a;->b()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/foundation/same/report/b;->a(Ljava/lang/String;)V

    goto :goto_0

    .line 7216
    :cond_3
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbbanner/common/a/a;->b()Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-static {v0, v2, v1}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)V

    .line 6646
    :cond_4
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->s:Ljava/util/List;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/mbbanner/common/util/BannerUtils;->inserCloseId(Ljava/lang/String;Ljava/util/List;)V

    .line 6647
    iget-object p0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->c:Lcom/mbridge/msdk/mbbanner/common/b/c;

    if-eqz p0, :cond_5

    .line 6648
    invoke-interface {p0}, Lcom/mbridge/msdk/mbbanner/common/b/c;->e()V

    :cond_5
    return-void
.end method

.method private c()Z
    .locals 10

    .line 310
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Ljava/lang/String;

    move-result-object v0

    .line 311
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x0

    if-nez v1, :cond_7

    .line 312
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->f:Lcom/mbridge/msdk/out/MBBannerView;

    const/4 v3, 0x1

    if-eqz v1, :cond_6

    .line 313
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->h:Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

    if-nez v1, :cond_0

    .line 315
    :try_start_0
    new-instance v1, Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v4

    invoke-direct {v1, v4}, Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->h:Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

    .line 316
    new-instance v4, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v5, -0x1

    invoke-direct {v4, v5, v5}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v1, v4}, Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 318
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->h:Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

    new-instance v4, Lcom/mbridge/msdk/mbbanner/view/a;

    iget-object v5, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    iget-object v6, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->s:Ljava/util/List;

    iget-object v7, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->C:Lcom/mbridge/msdk/mbbanner/common/b/a;

    invoke-direct {v4, v5, v6, v7}, Lcom/mbridge/msdk/mbbanner/view/a;-><init>(Ljava/lang/String;Ljava/util/List;Lcom/mbridge/msdk/mbbanner/common/b/a;)V

    invoke-virtual {v1, v4}, Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    const-string v0, "banner show failed because WebView is not available and try to show default"

    .line 320
    invoke-direct {p0, v0, v3}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Ljava/lang/String;I)V

    return v2

    .line 324
    :cond_0
    :goto_0
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->g:Landroid/widget/ImageView;

    if-eqz v1, :cond_1

    const/16 v4, 0x8

    .line 325
    invoke-virtual {v1, v4}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 327
    :cond_1
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->h:Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;->getVisibility()I

    move-result v1

    if-eqz v1, :cond_2

    .line 328
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->h:Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;->setVisibility(I)V

    .line 330
    :cond_2
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->h:Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    if-nez v1, :cond_3

    .line 331
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->f:Lcom/mbridge/msdk/out/MBBannerView;

    iget-object v2, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->h:Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/out/MBBannerView;->addView(Landroid/view/View;)V

    .line 332
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v1

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->d(Z)V

    .line 335
    :cond_3
    invoke-direct {p0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->g()V

    .line 337
    new-instance v1, Lcom/mbridge/msdk/mbbanner/common/bridge/a;

    iget-object v2, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->f:Lcom/mbridge/msdk/out/MBBannerView;

    invoke-virtual {v2}, Lcom/mbridge/msdk/out/MBBannerView;->getContext()Landroid/content/Context;

    move-result-object v2

    iget-object v4, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->r:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    invoke-direct {v1, v2, v4, v5}, Lcom/mbridge/msdk/mbbanner/common/bridge/a;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->v:Lcom/mbridge/msdk/mbbanner/common/bridge/a;

    .line 338
    iget-object v2, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->s:Ljava/util/List;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/mbbanner/common/bridge/a;->a(Ljava/util/List;)V

    .line 339
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->v:Lcom/mbridge/msdk/mbbanner/common/bridge/a;

    iget-object v2, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->C:Lcom/mbridge/msdk/mbbanner/common/b/a;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/mbbanner/common/bridge/a;->a(Lcom/mbridge/msdk/mbbanner/common/b/a;)V

    .line 340
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->v:Lcom/mbridge/msdk/mbbanner/common/bridge/a;

    iget v2, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->t:I

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/mbbanner/common/bridge/a;->a(I)V

    .line 341
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->h:Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

    iget-object v2, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->D:Lcom/mbridge/msdk/mbjscommon/c/b;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;->setWebViewListener(Lcom/mbridge/msdk/mbjscommon/windvane/d;)V

    .line 342
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->h:Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

    iget-object v2, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->v:Lcom/mbridge/msdk/mbbanner/common/bridge/a;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;->setObject(Ljava/lang/Object;)V

    const-string v1, "file"

    .line 343
    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_5

    .line 344
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isActiveOm()Z

    move-result v1

    if-eqz v1, :cond_4

    .line 345
    invoke-static {v0}, Lcom/mbridge/msdk/a/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    :cond_4
    move-object v6, v0

    .line 347
    iget-object v4, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->h:Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBannerUrl()Ljava/lang/String;

    move-result-object v5

    const/4 v9, 0x0

    const-string v7, "text/html"

    const-string v8, "utf-8"

    invoke-virtual/range {v4 .. v9}, Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;->loadDataWithBaseURL(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 349
    :cond_5
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->h:Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;->loadUrl(Ljava/lang/String;)V

    goto :goto_1

    :cond_6
    const/4 v0, 0x2

    const-string v1, "banner render failed because banner view is null"

    .line 352
    invoke-direct {p0, v1, v0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Ljava/lang/String;I)V

    const-string v0, "banner show failed because banner view is exception"

    .line 353
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Ljava/lang/String;)V

    :goto_1
    return v3

    :cond_7
    return v2
.end method

.method static synthetic c(Lcom/mbridge/msdk/mbbanner/common/c/c;Z)Z
    .locals 0

    .line 85
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->n:Z

    return p1
.end method

.method private d()V
    .locals 3

    .line 366
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->f:Lcom/mbridge/msdk/out/MBBannerView;

    if-eqz v0, :cond_3

    .line 367
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->h:Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 368
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->f:Lcom/mbridge/msdk/out/MBBannerView;

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->h:Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/out/MBBannerView;->removeView(Landroid/view/View;)V

    .line 370
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->g:Landroid/widget/ImageView;

    if-nez v0, :cond_1

    .line 371
    new-instance v0, Landroid/widget/ImageView;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->g:Landroid/widget/ImageView;

    .line 372
    new-instance v1, Lcom/mbridge/msdk/mbbanner/common/c/c$9;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/mbbanner/common/c/c$9;-><init>(Lcom/mbridge/msdk/mbbanner/common/c/c;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    .line 382
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->g:Landroid/widget/ImageView;

    new-instance v1, Lcom/mbridge/msdk/mbbanner/common/c/c$10;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/mbbanner/common/c/c$10;-><init>(Lcom/mbridge/msdk/mbbanner/common/c/c;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 394
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v0

    .line 395
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 396
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v1

    new-instance v2, Lcom/mbridge/msdk/mbbanner/common/c/c$11;

    invoke-direct {v2, p0}, Lcom/mbridge/msdk/mbbanner/common/c/c$11;-><init>(Lcom/mbridge/msdk/mbbanner/common/c/c;)V

    invoke-virtual {v1, v0, v2}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V

    goto :goto_0

    :cond_2
    const-string v0, "banner show failed because campain is exception"

    .line 414
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Ljava/lang/String;)V

    goto :goto_0

    :cond_3
    const-string v0, "banner show failed because banner view is exception"

    .line 417
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method static synthetic d(Lcom/mbridge/msdk/mbbanner/common/c/c;)V
    .locals 2

    .line 7702
    iget-boolean v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->d:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->i:Landroid/widget/ImageView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/widget/ImageView;->getVisibility()I

    move-result v0

    if-nez v0, :cond_0

    .line 7703
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->i:Landroid/widget/ImageView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 7704
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->i:Landroid/widget/ImageView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 7705
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->f:Lcom/mbridge/msdk/out/MBBannerView;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->i:Landroid/widget/ImageView;

    invoke-virtual {v0}, Landroid/widget/ImageView;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 7706
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->f:Lcom/mbridge/msdk/out/MBBannerView;

    iget-object p0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->i:Landroid/widget/ImageView;

    invoke-virtual {v0, p0}, Lcom/mbridge/msdk/out/MBBannerView;->removeView(Landroid/view/View;)V

    :cond_0
    return-void
.end method

.method private d(Z)V
    .locals 3

    .line 1076
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->f:Lcom/mbridge/msdk/out/MBBannerView;

    if-eqz v0, :cond_3

    .line 1077
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/b/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/widget/FeedBackButton;

    move-result-object v0

    .line 1078
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/b/b;->b()Z

    move-result v1

    if-eqz v1, :cond_2

    if-eqz p1, :cond_2

    if-eqz v0, :cond_2

    .line 1079
    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/FeedBackButton;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup;

    if-eqz p1, :cond_0

    .line 1081
    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    :cond_0
    const/4 p1, 0x0

    .line 1083
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/widget/FeedBackButton;->setVisibility(I)V

    .line 1084
    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/FeedBackButton;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p1

    check-cast p1, Landroid/widget/RelativeLayout$LayoutParams;

    if-nez p1, :cond_1

    .line 1086
    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    sget v1, Lcom/mbridge/msdk/foundation/b/b;->a:I

    sget v2, Lcom/mbridge/msdk/foundation/b/b;->b:I

    invoke-direct {p1, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    :cond_1
    const/16 v1, 0xc

    .line 1088
    invoke-virtual {p1, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 1089
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/widget/FeedBackButton;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1090
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->f:Lcom/mbridge/msdk/out/MBBannerView;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/out/MBBannerView;->addView(Landroid/view/View;)V

    .line 1093
    :cond_2
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    new-instance v1, Lcom/mbridge/msdk/mbbanner/common/c/c$5;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/mbbanner/common/c/c$5;-><init>(Lcom/mbridge/msdk/mbbanner/common/c/c;)V

    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/foundation/b/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/b/a;)V

    .line 1148
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignUnitId(Ljava/lang/String;)V

    .line 1149
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/foundation/b/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    :cond_3
    return-void
.end method

.method private e()V
    .locals 23

    move-object/from16 v1, p0

    const-string v2, "true"

    .line 525
    iget-boolean v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->l:Z

    const/4 v3, 0x1

    if-eqz v0, :cond_0

    iget-boolean v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->m:Z

    if-nez v0, :cond_0

    .line 526
    iget-object v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->c:Lcom/mbridge/msdk/mbbanner/common/b/c;

    if-eqz v0, :cond_0

    .line 527
    iput-boolean v3, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->m:Z

    .line 528
    iget-object v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->x:Landroid/os/Handler;

    iget-object v4, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->y:Lcom/mbridge/msdk/foundation/same/e/a;

    invoke-virtual {v0, v4}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 529
    iget-object v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isCallbacked()Z

    move-result v0

    if-nez v0, :cond_0

    .line 530
    iget-object v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCallbacked(Z)V

    .line 531
    iget-object v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->c:Lcom/mbridge/msdk/mbbanner/common/b/c;

    iget-object v4, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->s:Ljava/util/List;

    invoke-interface {v0, v4}, Lcom/mbridge/msdk/mbbanner/common/b/c;->a(Ljava/util/List;)V

    .line 536
    :cond_0
    iget-boolean v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->l:Z

    if-eqz v0, :cond_10

    iget-boolean v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->j:Z

    if-eqz v0, :cond_10

    iget-boolean v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->k:Z

    if-eqz v0, :cond_10

    iget-boolean v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->m:Z

    if-eqz v0, :cond_10

    iget-object v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_10

    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->f()Z

    move-result v0

    if-nez v0, :cond_10

    .line 3507
    iget-object v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->f:Lcom/mbridge/msdk/out/MBBannerView;

    const/4 v4, 0x0

    if-nez v0, :cond_1

    goto :goto_0

    .line 3511
    :cond_1
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/am;->a(Landroid/view/View;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-boolean v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->o:Z

    if-nez v0, :cond_2

    move v5, v3

    goto :goto_1

    :cond_2
    :goto_0
    move v5, v4

    :goto_1
    const-wide/16 v6, 0x3e8

    if-nez v5, :cond_3

    .line 541
    iget-object v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->f:Lcom/mbridge/msdk/out/MBBannerView;

    if-eqz v0, :cond_3

    .line 542
    new-instance v8, Lcom/mbridge/msdk/mbbanner/common/c/c$12;

    invoke-direct {v8, v1}, Lcom/mbridge/msdk/mbbanner/common/c/c$12;-><init>(Lcom/mbridge/msdk/mbbanner/common/c/c;)V

    invoke-virtual {v0, v8, v6, v7}, Lcom/mbridge/msdk/out/MBBannerView;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 551
    :cond_3
    iget-boolean v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->n:Z

    if-eqz v0, :cond_6

    if-eqz v5, :cond_6

    .line 552
    sget-object v0, Lcom/mbridge/msdk/mbbanner/common/c/c;->b:Ljava/lang/String;

    const-string v8, "onBannerWebViewShow && transInfoToMraid"

    invoke-static {v0, v8}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v8, 0x2

    new-array v9, v8, [I

    .line 554
    iget-object v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->f:Lcom/mbridge/msdk/out/MBBannerView;

    invoke-virtual {v0, v9}, Lcom/mbridge/msdk/out/MBBannerView;->getLocationInWindow([I)V

    .line 555
    iget-object v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->h:Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

    aget v10, v9, v4

    int-to-float v10, v10

    aget v11, v9, v3

    int-to-float v11, v11

    const-string v12, "fireOnBannerWebViewShow"

    const-string v13, "BannerCallJS"

    .line 4043
    invoke-static {v13, v12}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 4046
    :try_start_0
    new-instance v14, Lorg/json/JSONObject;

    invoke-direct {v14}, Lorg/json/JSONObject;-><init>()V

    const-string v15, "startX"

    float-to-double v6, v10

    .line 4047
    invoke-virtual {v14, v15, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v6, "startY"

    float-to-double v10, v11

    .line 4048
    invoke-virtual {v14, v6, v10, v11}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v6, "scale"

    .line 4049
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v7

    invoke-virtual {v7}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v7

    invoke-static {v7}, Lcom/mbridge/msdk/foundation/tools/ae;->d(Landroid/content/Context;)F

    move-result v7

    float-to-double v10, v7

    invoke-virtual {v14, v6, v10, v11}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    .line 4050
    invoke-virtual {v14}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/String;->getBytes()[B

    move-result-object v6

    invoke-static {v6, v8}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v6

    .line 4051
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v7

    const-string v10, "webviewshow"

    invoke-virtual {v7, v0, v10, v6}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v0

    .line 4053
    invoke-static {v13, v12, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 556
    :goto_2
    iget-object v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->h:Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

    aget v6, v9, v4

    aget v7, v9, v3

    iget-object v9, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->f:Lcom/mbridge/msdk/out/MBBannerView;

    .line 557
    invoke-virtual {v9}, Lcom/mbridge/msdk/out/MBBannerView;->getWidth()I

    move-result v9

    iget-object v10, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->f:Lcom/mbridge/msdk/out/MBBannerView;

    invoke-virtual {v10}, Lcom/mbridge/msdk/out/MBBannerView;->getHeight()I

    move-result v10

    const-string v11, "transInfoForMraid"

    .line 4098
    invoke-static {v13, v11}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 4101
    :try_start_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v12

    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v12

    invoke-virtual {v12}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v12

    .line 4102
    invoke-virtual {v12}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v12

    iget v12, v12, Landroid/content/res/Configuration;->orientation:I

    .line 4103
    new-instance v14, Lorg/json/JSONObject;

    invoke-direct {v14}, Lorg/json/JSONObject;-><init>()V

    const-string v15, "orientation"

    if-ne v12, v8, :cond_4

    const-string v8, "landscape"

    goto :goto_3

    :cond_4
    if-ne v12, v3, :cond_5

    const-string v8, "portrait"

    goto :goto_3

    :cond_5
    const-string v8, "undefined"

    .line 4105
    :goto_3
    invoke-virtual {v14, v15, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v8, "locked"

    .line 4107
    invoke-virtual {v14, v8, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 4109
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v8

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v8

    invoke-static {v8}, Lcom/mbridge/msdk/foundation/tools/v;->x(Landroid/content/Context;)I

    move-result v8

    int-to-float v8, v8

    .line 4110
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v12

    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v12

    invoke-static {v12}, Lcom/mbridge/msdk/foundation/tools/v;->y(Landroid/content/Context;)I

    move-result v12

    int-to-float v12, v12

    .line 4112
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v15

    invoke-virtual {v15}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v15

    invoke-static {v15}, Lcom/mbridge/msdk/foundation/tools/v;->z(Landroid/content/Context;)Ljava/util/HashMap;

    move-result-object v15

    const-string v3, "width"

    .line 4113
    invoke-virtual {v15, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    const-string v4, "height"

    .line 4114
    invoke-virtual {v15, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/Integer;

    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v4

    .line 4116
    new-instance v15, Ljava/util/HashMap;

    invoke-direct {v15}, Ljava/util/HashMap;-><init>()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    move/from16 v22, v5

    :try_start_2
    const-string v5, "placementType"

    const-string v1, "inline"

    .line 4117
    invoke-virtual {v15, v5, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "state"

    const-string v5, "default"

    .line 4118
    invoke-virtual {v15, v1, v5}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "viewable"

    .line 4119
    invoke-virtual {v15, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "currentAppOrientation"

    .line 4120
    invoke-virtual {v15, v1, v14}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 4122
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v16

    int-to-float v1, v6

    int-to-float v2, v7

    int-to-float v5, v9

    int-to-float v6, v10

    move-object/from16 v17, v0

    move/from16 v18, v1

    move/from16 v19, v2

    move/from16 v20, v5

    move/from16 v21, v6

    invoke-virtual/range {v16 .. v21}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;FFFF)V

    .line 4123
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v16

    move-object/from16 v17, v0

    move/from16 v18, v1

    move/from16 v19, v2

    move/from16 v20, v5

    move/from16 v21, v6

    invoke-virtual/range {v16 .. v21}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->b(Landroid/webkit/WebView;FFFF)V

    .line 4124
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v1

    invoke-virtual {v1, v0, v8, v12}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->b(Landroid/webkit/WebView;FF)V

    .line 4125
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v1

    int-to-float v2, v3

    int-to-float v3, v4

    invoke-virtual {v1, v0, v2, v3}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->c(Landroid/webkit/WebView;FF)V

    .line 4126
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v1

    invoke-virtual {v1, v0, v15}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;Ljava/util/Map;)V

    .line 4127
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_5

    :catchall_1
    move-exception v0

    goto :goto_4

    :catchall_2
    move-exception v0

    move/from16 v22, v5

    .line 4129
    :goto_4
    invoke-static {v13, v11, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_5
    const/4 v2, 0x0

    move-object/from16 v1, p0

    .line 558
    iput-boolean v2, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->n:Z

    .line 559
    iget-object v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_7

    .line 560
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v0

    iget-object v2, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/foundation/same/c/b;->c(Ljava/lang/String;)V

    goto :goto_6

    :cond_6
    move/from16 v22, v5

    .line 564
    :cond_7
    :goto_6
    sget-object v0, Lcom/mbridge/msdk/mbbanner/common/c/c;->b:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "showSuccessed:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz v22, :cond_f

    .line 568
    iget-object v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->g:Landroid/widget/ImageView;

    const-string v2, "banner"

    if-eqz v0, :cond_9

    invoke-virtual {v0}, Landroid/widget/ImageView;->getVisibility()I

    move-result v0

    if-nez v0, :cond_9

    .line 569
    iget-object v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_d

    if-eqz v0, :cond_8

    .line 4771
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v3

    iget-object v4, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    invoke-direct {v1, v0, v3, v4}, Lcom/mbridge/msdk/mbbanner/common/c/c;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V

    .line 4772
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v3

    iget-object v4, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    invoke-direct {v1, v0, v3, v4}, Lcom/mbridge/msdk/mbbanner/common/c/c;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V

    .line 4773
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v3

    iget-object v4, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    invoke-direct {v1, v0, v3, v4}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V

    .line 571
    :cond_8
    iget-object v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 v3, 0x1

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setReport(Z)V

    .line 572
    iget-object v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    iget-object v3, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v0, v3, v2}, Lcom/mbridge/msdk/foundation/same/a/d;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V

    goto/16 :goto_8

    .line 575
    :cond_9
    iget-object v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->s:Ljava/util/List;

    if-eqz v0, :cond_d

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_d

    const/4 v0, 0x0

    const/4 v3, 0x0

    const/4 v4, 0x0

    .line 580
    :goto_7
    iget-object v5, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->s:Ljava/util/List;

    invoke-interface {v5}, Ljava/util/List;->size()I

    move-result v5

    if-ge v0, v5, :cond_c

    .line 581
    iget-object v5, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->s:Ljava/util/List;

    invoke-interface {v5, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isHasMBTplMark()Z

    move-result v5

    if-nez v5, :cond_b

    if-eqz v0, :cond_a

    .line 582
    iget-object v5, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->s:Ljava/util/List;

    invoke-interface {v5, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isReport()Z

    move-result v5

    if-nez v5, :cond_b

    .line 585
    :cond_a
    iget-object v3, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->s:Ljava/util/List;

    invoke-interface {v3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v4

    iget-object v5, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    invoke-direct {v1, v3, v4, v5}, Lcom/mbridge/msdk/mbbanner/common/c/c;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V

    .line 586
    iget-object v3, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->s:Ljava/util/List;

    invoke-interface {v3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 v4, 0x1

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setReport(Z)V

    .line 587
    iget-object v3, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    iget-object v4, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->s:Ljava/util/List;

    invoke-interface {v4, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v3, v4, v2}, Lcom/mbridge/msdk/foundation/same/a/d;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V

    move v4, v0

    const/4 v3, 0x1

    :cond_b
    add-int/lit8 v0, v0, 0x1

    goto :goto_7

    :cond_c
    if-eqz v3, :cond_d

    .line 594
    iget-object v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->s:Ljava/util/List;

    invoke-interface {v0, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    iget-object v3, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    invoke-direct {v1, v0, v2, v3}, Lcom/mbridge/msdk/mbbanner/common/c/c;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V

    .line 595
    iget-object v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->s:Ljava/util/List;

    invoke-interface {v0, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    iget-object v3, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    invoke-direct {v1, v0, v2, v3}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V

    :cond_d
    :goto_8
    const/4 v2, 0x1

    .line 600
    iput-boolean v2, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->p:Z

    .line 602
    iget-object v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->c:Lcom/mbridge/msdk/mbbanner/common/b/c;

    if-eqz v0, :cond_e

    .line 603
    iget-object v3, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 v4, 0x0

    invoke-interface {v0, v3, v4}, Lcom/mbridge/msdk/mbbanner/common/b/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Z)V

    .line 608
    :cond_e
    iget-object v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->x:Landroid/os/Handler;

    const-wide/16 v3, 0x3e8

    invoke-virtual {v0, v2, v3, v4}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    .line 609
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v2, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v3, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    const-string v4, ""

    invoke-static {v0, v2, v3, v4}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_9

    .line 612
    :cond_f
    iget-object v0, v1, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 v2, 0x0

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setReport(Z)V

    :cond_10
    :goto_9
    return-void
.end method

.method static synthetic e(Lcom/mbridge/msdk/mbbanner/common/c/c;)V
    .locals 0

    .line 85
    invoke-direct {p0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->g()V

    return-void
.end method

.method static synthetic f(Lcom/mbridge/msdk/mbbanner/common/c/c;)V
    .locals 0

    .line 85
    invoke-direct {p0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->e()V

    return-void
.end method

.method private declared-synchronized f()Z
    .locals 3

    monitor-enter p0

    .line 619
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isReport()Z

    move-result v0

    if-nez v0, :cond_0

    .line 622
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setReport(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 624
    :cond_0
    monitor-exit p0

    return v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private g()V
    .locals 4

    .line 680
    iget-boolean v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->d:Z

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->i:Landroid/widget/ImageView;

    if-eqz v0, :cond_1

    .line 682
    invoke-virtual {v0}, Landroid/widget/ImageView;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_0

    .line 683
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->i:Landroid/widget/ImageView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 684
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->i:Landroid/widget/ImageView;

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->B:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 687
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->i:Landroid/widget/ImageView;

    invoke-virtual {v0}, Landroid/widget/ImageView;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_1

    .line 688
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->f:Lcom/mbridge/msdk/out/MBBannerView;

    if-eqz v0, :cond_1

    .line 689
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41400000    # 12.0f

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v1

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-direct {v0, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v1, 0xb

    .line 690
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 v1, 0xa

    .line 691
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 692
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->f:Lcom/mbridge/msdk/out/MBBannerView;

    iget-object v2, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->i:Landroid/widget/ImageView;

    invoke-virtual {v1, v2, v0}, Lcom/mbridge/msdk/out/MBBannerView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_1
    return-void
.end method

.method static synthetic g(Lcom/mbridge/msdk/mbbanner/common/c/c;)V
    .locals 0

    .line 85
    invoke-direct {p0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->d()V

    return-void
.end method

.method static synthetic h(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/mbbanner/common/b/c;
    .locals 0

    .line 85
    iget-object p0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->c:Lcom/mbridge/msdk/mbbanner/common/b/c;

    return-object p0
.end method

.method static synthetic i(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 0

    .line 85
    iget-object p0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-object p0
.end method

.method static synthetic j(Lcom/mbridge/msdk/mbbanner/common/c/c;)F
    .locals 0

    .line 85
    iget p0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->z:F

    return p0
.end method

.method static synthetic k(Lcom/mbridge/msdk/mbbanner/common/c/c;)F
    .locals 0

    .line 85
    iget p0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->A:F

    return p0
.end method

.method static synthetic l(Lcom/mbridge/msdk/mbbanner/common/c/c;)Landroid/widget/ImageView;
    .locals 0

    .line 85
    iget-object p0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->g:Landroid/widget/ImageView;

    return-object p0
.end method

.method static synthetic m(Lcom/mbridge/msdk/mbbanner/common/c/c;)V
    .locals 3

    .line 8656
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->g:Landroid/widget/ImageView;

    if-eqz v0, :cond_3

    .line 8657
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->h:Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

    if-eqz v0, :cond_0

    const/16 v1, 0x8

    .line 8658
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;->setVisibility(I)V

    .line 8660
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->g:Landroid/widget/ImageView;

    invoke-virtual {v0}, Landroid/widget/ImageView;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_1

    .line 8661
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->g:Landroid/widget/ImageView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 8664
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->f:Lcom/mbridge/msdk/out/MBBannerView;

    if-eqz v0, :cond_3

    .line 8665
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v1, 0xa

    .line 8666
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 8667
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->g:Landroid/widget/ImageView;

    sget-object v2, Landroid/widget/ImageView$ScaleType;->FIT_XY:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 8668
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->g:Landroid/widget/ImageView;

    invoke-virtual {v1}, Landroid/widget/ImageView;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    if-nez v1, :cond_2

    .line 8669
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->f:Lcom/mbridge/msdk/out/MBBannerView;

    iget-object v2, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->g:Landroid/widget/ImageView;

    invoke-virtual {v1, v2, v0}, Lcom/mbridge/msdk/out/MBBannerView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_2
    const/4 v0, 0x1

    .line 8671
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->d(Z)V

    :cond_3
    return-void
.end method

.method static synthetic n(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/out/MBBannerView;
    .locals 0

    .line 85
    iget-object p0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->f:Lcom/mbridge/msdk/out/MBBannerView;

    return-object p0
.end method

.method static synthetic o(Lcom/mbridge/msdk/mbbanner/common/c/c;)Ljava/lang/String;
    .locals 0

    .line 85
    iget-object p0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic p(Lcom/mbridge/msdk/mbbanner/common/c/c;)Landroid/widget/ImageView;
    .locals 0

    .line 85
    iget-object p0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->i:Landroid/widget/ImageView;

    return-object p0
.end method

.method static synthetic q(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;
    .locals 0

    .line 85
    iget-object p0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->h:Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

    return-object p0
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 715
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->w:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 716
    invoke-virtual {v0}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->finish()V

    .line 717
    iput-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->w:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    const-string v0, "omsdk"

    const-string v2, " adSession.finish() "

    .line 718
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 720
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->c:Lcom/mbridge/msdk/mbbanner/common/b/c;

    if-eqz v0, :cond_1

    .line 721
    iput-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->c:Lcom/mbridge/msdk/mbbanner/common/b/c;

    .line 723
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->h:Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

    if-eqz v0, :cond_2

    .line 724
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;->setWebViewListener(Lcom/mbridge/msdk/mbjscommon/windvane/d;)V

    .line 726
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->D:Lcom/mbridge/msdk/mbjscommon/c/b;

    if-eqz v0, :cond_3

    .line 727
    iput-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->D:Lcom/mbridge/msdk/mbjscommon/c/b;

    .line 729
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->i:Landroid/widget/ImageView;

    if-eqz v0, :cond_4

    .line 730
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 732
    :cond_4
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->g:Landroid/widget/ImageView;

    if-eqz v0, :cond_5

    .line 733
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 735
    :cond_5
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->f:Lcom/mbridge/msdk/out/MBBannerView;

    if-eqz v0, :cond_6

    .line 736
    invoke-virtual {v0}, Lcom/mbridge/msdk/out/MBBannerView;->removeAllViews()V

    .line 738
    :cond_6
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->h:Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

    if-eqz v0, :cond_7

    .line 739
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;->release()V

    .line 741
    :cond_7
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->v:Lcom/mbridge/msdk/mbbanner/common/bridge/a;

    if-eqz v0, :cond_8

    .line 742
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbbanner/common/bridge/a;->a()V

    .line 744
    :cond_8
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->C:Lcom/mbridge/msdk/mbbanner/common/b/a;

    if-eqz v0, :cond_9

    .line 745
    iput-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->C:Lcom/mbridge/msdk/mbbanner/common/b/a;

    .line 747
    :cond_9
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/b/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method public final a(IIII)V
    .locals 2

    if-ne p1, p3, :cond_0

    if-ne p2, p4, :cond_0

    return-void

    .line 988
    :cond_0
    iget-object p3, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->h:Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

    const-string p4, "fireOnBannerViewSizeChange"

    const-string v0, "BannerCallJS"

    .line 6065
    invoke-static {v0, p4}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 6068
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v1

    int-to-float p1, p1

    int-to-float p2, p2

    invoke-virtual {v1, p3, p1, p2}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;FF)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 6070
    invoke-static {v0, p4, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;)V
    .locals 8

    .line 834
    iget-boolean v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->p:Z

    if-nez v0, :cond_0

    return-void

    .line 837
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->a:Lcom/mbridge/msdk/click/b;

    if-nez v0, :cond_1

    .line 838
    new-instance v0, Lcom/mbridge/msdk/click/b;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/click/b;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->a:Lcom/mbridge/msdk/click/b;

    .line 840
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->a:Lcom/mbridge/msdk/click/b;

    new-instance v1, Lcom/mbridge/msdk/mbbanner/common/c/c$2;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/mbbanner/common/c/c$2;-><init>(Lcom/mbridge/msdk/mbbanner/common/c/c;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V

    const/4 v0, 0x1

    if-eqz p1, :cond_4

    .line 906
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->needShowIDialog()Z

    move-result v1

    if-eqz v1, :cond_4

    .line 907
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignUnitId(Ljava/lang/String;)V

    .line 908
    new-instance v7, Lcom/mbridge/msdk/mbbanner/common/c/c$3;

    invoke-direct {v7, p0, p1, p2, p3}, Lcom/mbridge/msdk/mbbanner/common/c/c$3;-><init>(Lcom/mbridge/msdk/mbbanner/common/c/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;)V

    .line 936
    invoke-static {p1}, Lcom/mbridge/msdk/click/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v1

    if-eqz v1, :cond_4

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->needShowIDialog()Z

    move-result v1

    if-eqz v1, :cond_4

    .line 937
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->a:Lcom/mbridge/msdk/click/b;

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/click/b;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 938
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object v2

    const-string v3, ""

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->f:Lcom/mbridge/msdk/out/MBBannerView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/out/MBBannerView;->getContext()Landroid/content/Context;

    move-result-object v5

    iget-object v6, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    move-object v4, p1

    invoke-virtual/range {v2 .. v7}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/widget/dialog/a;)V

    .line 939
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->c:Lcom/mbridge/msdk/mbbanner/common/b/c;

    if-eqz v1, :cond_3

    .line 940
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->c:Lcom/mbridge/msdk/mbbanner/common/b/c;

    invoke-interface {v1, v0}, Lcom/mbridge/msdk/mbbanner/common/b/c;->a(Z)V

    goto :goto_0

    .line 943
    :cond_2
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, p1}, Lcom/mbridge/msdk/mbbanner/common/d/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 944
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->c:Lcom/mbridge/msdk/mbbanner/common/b/c;

    if-eqz v1, :cond_3

    .line 945
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->c:Lcom/mbridge/msdk/mbbanner/common/b/c;

    invoke-interface {v1}, Lcom/mbridge/msdk/mbbanner/common/b/c;->a()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_3
    :goto_0
    return-void

    :catchall_0
    move-exception v1

    .line 953
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 955
    :cond_4
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->a:Lcom/mbridge/msdk/click/b;

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/click/b;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 957
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isReportClick()Z

    move-result v1

    if-nez v1, :cond_5

    .line 958
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setReportClick(Z)V

    .line 959
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/mbridge/msdk/mbbanner/common/d/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 961
    :cond_5
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->c:Lcom/mbridge/msdk/mbbanner/common/b/c;

    if-eqz v0, :cond_6

    .line 962
    invoke-interface {v0}, Lcom/mbridge/msdk/mbbanner/common/b/c;->a()V

    :cond_6
    if-eqz p2, :cond_7

    .line 964
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_7

    .line 965
    iget-object p2, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    invoke-static {p1, p2, p3}, Lcom/mbridge/msdk/mbbanner/common/d/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;)V

    :cond_7
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)V
    .locals 4

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    .line 1443
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->s:Ljava/util/List;

    if-eqz p1, :cond_0

    .line 1444
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_0

    .line 1445
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->s:Ljava/util/List;

    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    .line 279
    :goto_0
    iput-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-nez p1, :cond_1

    const-string p1, "banner show failed because campain is exception"

    .line 281
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Ljava/lang/String;)V

    return-void

    .line 284
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->x:Landroid/os/Handler;

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->y:Lcom/mbridge/msdk/foundation/same/e/a;

    invoke-virtual {p1, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 2426
    iget-boolean p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->d:Z

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->i:Landroid/widget/ImageView;

    if-nez p1, :cond_2

    .line 2427
    new-instance p1, Landroid/widget/ImageView;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-direct {p1, v1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->i:Landroid/widget/ImageView;

    .line 2428
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    const-string v2, "mbridge_banner_close"

    const-string v3, "drawable"

    invoke-static {v1, v2, v3}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/widget/ImageView;->setBackgroundResource(I)V

    .line 2429
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->i:Landroid/widget/ImageView;

    const/16 v1, 0x8

    invoke-virtual {p1, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 2430
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->i:Landroid/widget/ImageView;

    const-string v1, "closeButton"

    invoke-virtual {p1, v1}, Landroid/widget/ImageView;->setContentDescription(Ljava/lang/CharSequence;)V

    .line 286
    :cond_2
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->l:Z

    .line 287
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->m:Z

    .line 288
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->p:Z

    .line 290
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBannerHtml()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBannerUrl()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_5

    .line 291
    :cond_3
    invoke-static {}, Lcom/mbridge/msdk/mbbanner/common/a/a;->a()Lcom/mbridge/msdk/mbbanner/common/a/a;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbbanner/common/a/a;->c(Ljava/lang/String;)Lcom/mbridge/msdk/mbbanner/common/a/a;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbbanner/common/a/a;->d(Ljava/lang/String;)Lcom/mbridge/msdk/mbbanner/common/a/a;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbbanner/common/a/a;->e(Ljava/lang/String;)Lcom/mbridge/msdk/mbbanner/common/a/a;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbbanner/common/a/a;->b(Ljava/lang/String;)Lcom/mbridge/msdk/mbbanner/common/a/a;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbbanner/common/a/a;->a(Z)Lcom/mbridge/msdk/mbbanner/common/a/a;

    move-result-object p1

    .line 292
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    if-eqz p1, :cond_5

    const-string v1, "2000067"

    .line 3189
    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/mbbanner/common/a/a;->a(Ljava/lang/String;)Lcom/mbridge/msdk/mbbanner/common/a/a;

    .line 3190
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/same/report/b;->c()Z

    move-result v1

    if-eqz v1, :cond_4

    .line 3191
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object v0

    invoke-virtual {p1}, Lcom/mbridge/msdk/mbbanner/common/a/a;->b()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/same/report/b;->a(Ljava/lang/String;)V

    goto :goto_1

    .line 3193
    :cond_4
    invoke-virtual {p1}, Lcom/mbridge/msdk/mbbanner/common/a/a;->b()Ljava/lang/String;

    move-result-object p1

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-static {p1, v1, v0}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)V

    .line 295
    :cond_5
    :goto_1
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->x:Landroid/os/Handler;

    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->y:Lcom/mbridge/msdk/foundation/same/e/a;

    iget-wide v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->u:J

    invoke-virtual {p1, v0, v1, v2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 296
    invoke-direct {p0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->c()Z

    move-result p1

    if-nez p1, :cond_8

    .line 297
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBannerHtml()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_6

    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBannerUrl()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_7

    :cond_6
    const/4 p1, 0x2

    const-string v0, "banner render failed because res load failed"

    .line 298
    invoke-direct {p0, v0, p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Ljava/lang/String;I)V

    .line 300
    :cond_7
    invoke-direct {p0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->d()V

    :cond_8
    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 270
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->d:Z

    return-void
.end method

.method public final a(ZI)V
    .locals 2

    .line 255
    iput p2, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->t:I

    const/4 v0, 0x1

    if-eqz p2, :cond_0

    goto :goto_0

    .line 259
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object p1

    .line 260
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object p2

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    invoke-virtual {p1, p2, v1}, Lcom/mbridge/msdk/c/b;->e(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 262
    invoke-virtual {p1}, Lcom/mbridge/msdk/c/d;->c()I

    move-result p1

    if-ne p1, v0, :cond_1

    move p1, v0

    goto :goto_0

    :cond_1
    const/4 p1, 0x0

    :goto_0
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->d:Z

    :cond_2
    return-void
.end method

.method public final b(Z)V
    .locals 7

    .line 756
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->j:Z

    .line 757
    invoke-direct {p0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->e()V

    if-nez p1, :cond_0

    .line 759
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v4, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->q:Ljava/lang/String;

    if-eqz p1, :cond_0

    .line 5125
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/mbjscommon/mraid/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 5126
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 5127
    new-instance v0, Lcom/mbridge/msdk/foundation/same/report/d;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/foundation/same/report/d;-><init>(Landroid/content/Context;)V

    .line 5128
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v2

    .line 5129
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v6

    .line 5128
    invoke-virtual/range {v0 .. v6}, Lcom/mbridge/msdk/foundation/same/report/d;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    .line 5130
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/mbjscommon/mraid/c;->b(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final c(Z)V
    .locals 0

    .line 764
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c;->k:Z

    .line 765
    invoke-direct {p0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->e()V

    return-void
.end method
