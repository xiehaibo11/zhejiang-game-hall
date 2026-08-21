.class public Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;
.super Lcom/mbridge/msdk/activity/MBBaseActivity;
.source "MBInterstitialActivity.java"

# interfaces
.implements Lcom/mbridge/msdk/mbjscommon/mraid/b;


# static fields
.field public static final INTENT_CAMAPIGN:Ljava/lang/String; = "campaign"

.field public static final INTENT_UNIT_ID:Ljava/lang/String; = "unitId"

.field public static final WATI_JS_INVOKE:J = 0x7d0L

.field public static final WEB_LOAD_TIME:J = 0x3a98L


# instance fields
.field a:Ljava/lang/Runnable;

.field b:Ljava/lang/Runnable;

.field private c:Z

.field private d:Z

.field private e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

.field private g:Landroid/widget/ImageView;

.field private h:Lcom/mbridge/msdk/interstitial/c/a$c;

.field private i:Z

.field private j:Lcom/mbridge/msdk/mbjscommon/mraid/d;

.field private k:J

.field private l:Z

.field private m:Z

.field public mIsMBPage:Z

.field public mProgressBar:Landroid/widget/ProgressBar;

.field public mUnitid:Ljava/lang/String;

.field private n:Landroid/os/Handler;

.field private o:Lcom/mbridge/msdk/click/b;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 79
    invoke-direct {p0}, Lcom/mbridge/msdk/activity/MBBaseActivity;-><init>()V

    const/4 v0, 0x0

    .line 86
    iput-boolean v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->c:Z

    .line 87
    iput-boolean v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->d:Z

    .line 106
    iput-boolean v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mIsMBPage:Z

    .line 120
    new-instance v0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$1;-><init>(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)V

    iput-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->n:Landroid/os/Handler;

    .line 408
    new-instance v0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$11;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$11;-><init>(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)V

    iput-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->a:Ljava/lang/Runnable;

    .line 438
    new-instance v0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$12;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$12;-><init>(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)V

    iput-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->b:Ljava/lang/Runnable;

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;
    .locals 0

    .line 79
    iget-object p0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    return-object p0
.end method

.method private a()V
    .locals 2

    .line 471
    invoke-virtual {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    if-eqz v0, :cond_0

    const-string v1, "unitId"

    .line 473
    invoke-virtual {v0, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;

    const-string v1, "campaign"

    .line 474
    invoke-virtual {v0, v1}, Landroid/content/Intent;->getSerializableExtra(Ljava/lang/String;)Ljava/io/Serializable;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 478
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 479
    new-instance v0, Lcom/mbridge/msdk/mbjscommon/mraid/d;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/mbjscommon/mraid/d;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->j:Lcom/mbridge/msdk/mbjscommon/mraid/d;

    .line 480
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/mraid/d;->c()V

    .line 481
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->j:Lcom/mbridge/msdk/mbjscommon/mraid/d;

    new-instance v1, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$13;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$13;-><init>(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbjscommon/mraid/d;->a(Lcom/mbridge/msdk/mbjscommon/mraid/d$b;)V

    :cond_1
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;ILjava/lang/String;)V
    .locals 5

    .line 1371
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 1372
    new-instance v0, Lcom/mbridge/msdk/foundation/entity/p;

    invoke-direct {v0}, Lcom/mbridge/msdk/foundation/entity/p;-><init>()V

    .line 1373
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 1374
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 1375
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 1377
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/p;->d(I)V

    .line 1378
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iget-wide v3, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->k:J

    sub-long/2addr v1, v3

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/p;->q(Ljava/lang/String;)V

    const-string p1, ""

    .line 1379
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/p;->f(Ljava/lang/String;)V

    .line 1385
    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/foundation/entity/p;->p(Ljava/lang/String;)V

    const-string p1, "5"

    .line 1387
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/p;->h(Ljava/lang/String;)V

    .line 1389
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result p1

    if-eqz p1, :cond_0

    sget p1, Lcom/mbridge/msdk/foundation/entity/p;->a:I

    goto :goto_0

    :cond_0
    sget p1, Lcom/mbridge/msdk/foundation/entity/p;->b:I

    :goto_0
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/p;->a(I)V

    .line 1390
    iget-object p0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/same/report/c;->b(Lcom/mbridge/msdk/foundation/entity/p;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;ZLjava/lang/String;)V
    .locals 0

    .line 79
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->a(ZLjava/lang/String;)V

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 8

    .line 809
    invoke-virtual {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->getMraidCampaign()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 811
    new-instance v1, Lcom/mbridge/msdk/foundation/same/report/d;

    invoke-virtual {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/foundation/same/report/d;-><init>(Landroid/content/Context;)V

    .line 812
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v4

    iget-object v5, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v7

    move-object v6, p1

    invoke-virtual/range {v1 .. v7}, Lcom/mbridge/msdk/foundation/same/report/d;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method

.method private a(ZLjava/lang/String;)V
    .locals 2

    .line 729
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ai;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 732
    :cond_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->onIntersClick()V

    .line 733
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->o:Lcom/mbridge/msdk/click/b;

    new-instance v1, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$5;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$5;-><init>(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V

    .line 784
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->o:Lcom/mbridge/msdk/click/b;

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/b;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    if-eqz p1, :cond_2

    .line 785
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    .line 786
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->a(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :cond_1
    :goto_0
    return-void

    :catch_0
    move-exception p1

    .line 789
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_1
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;Z)Z
    .locals 0

    .line 79
    iput-boolean p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->i:Z

    return p1
.end method

.method static synthetic b(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Lcom/mbridge/msdk/interstitial/c/a$c;
    .locals 0

    .line 79
    iget-object p0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->h:Lcom/mbridge/msdk/interstitial/c/a$c;

    return-object p0
.end method

.method private b()V
    .locals 2

    .line 502
    :try_start_0
    sget-object v0, Lcom/mbridge/msdk/interstitial/c/a;->e:Ljava/util/Map;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/mbridge/msdk/interstitial/c/a;->e:Ljava/util/Map;

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;

    .line 503
    invoke-interface {v0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 504
    sget-object v0, Lcom/mbridge/msdk/interstitial/c/a;->e:Ljava/util/Map;

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/interstitial/c/a$c;

    iput-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->h:Lcom/mbridge/msdk/interstitial/c/a$c;

    const-string v0, "MBInterstitialActivity"

    const-string v1, "mShowIntersInnerListener \u521d\u59cb\u5316\u6210\u529f"

    .line 505
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 508
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;Z)Z
    .locals 0

    .line 79
    iput-boolean p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->c:Z

    return p1
.end method

.method private c()V
    .locals 7

    .line 644
    new-instance v0, Lcom/mbridge/msdk/foundation/same/report/d;

    invoke-virtual {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/foundation/same/report/d;-><init>(Landroid/content/Context;)V

    .line 645
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_0

    .line 646
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/mbridge/msdk/mbjscommon/mraid/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    iget-object v6, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v6

    invoke-virtual/range {v0 .. v6}, Lcom/mbridge/msdk/foundation/same/report/d;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    .line 647
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/mbjscommon/mraid/c;->b(Ljava/lang/String;)V

    const/4 v0, 0x1

    .line 648
    iput-boolean v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->l:Z

    :cond_0
    return-void
.end method

.method static synthetic c(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Z
    .locals 0

    .line 79
    iget-boolean p0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->i:Z

    return p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;Z)Z
    .locals 0

    .line 79
    iput-boolean p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->d:Z

    return p1
.end method

.method static synthetic d(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Landroid/os/Handler;
    .locals 0

    .line 79
    iget-object p0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->n:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic e(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)V
    .locals 9

    const-string v0, "true"

    .line 1849
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v1

    if-eqz v1, :cond_3

    .line 1850
    invoke-virtual {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v1

    iget v1, v1, Landroid/content/res/Configuration;->orientation:I

    if-eqz v1, :cond_2

    const/4 v2, 0x1

    if-eq v1, v2, :cond_1

    const/4 v2, 0x2

    if-eq v1, v2, :cond_0

    const-string v1, "UNDEFINED"

    goto :goto_0

    :cond_0
    const-string v1, "landscape"

    goto :goto_0

    :cond_1
    const-string v1, "portrait"

    goto :goto_0

    :cond_2
    const-string v1, "undefined"

    .line 1863
    :goto_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v3, "orientation"

    .line 1865
    invoke-virtual {v2, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "locked"

    .line 1866
    invoke-virtual {v2, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v1

    .line 1868
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 1871
    :goto_1
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/v;->x(Landroid/content/Context;)I

    move-result v1

    int-to-float v1, v1

    .line 1872
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/v;->y(Landroid/content/Context;)I

    move-result v3

    int-to-float v3, v3

    .line 1874
    new-instance v4, Landroid/util/DisplayMetrics;

    invoke-direct {v4}, Landroid/util/DisplayMetrics;-><init>()V

    .line 1875
    invoke-virtual {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->getWindowManager()Landroid/view/WindowManager;

    move-result-object v5

    invoke-interface {v5}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object v5

    invoke-virtual {v5, v4}, Landroid/view/Display;->getMetrics(Landroid/util/DisplayMetrics;)V

    .line 1876
    iget v5, v4, Landroid/util/DisplayMetrics;->widthPixels:I

    int-to-float v5, v5

    .line 1877
    iget v4, v4, Landroid/util/DisplayMetrics;->heightPixels:I

    int-to-float v4, v4

    .line 1879
    new-instance v6, Ljava/util/HashMap;

    invoke-direct {v6}, Ljava/util/HashMap;-><init>()V

    const-string v7, "placementType"

    const-string v8, "Interstitial"

    .line 1880
    invoke-virtual {v6, v7, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v7, "state"

    const-string v8, "default"

    .line 1881
    invoke-virtual {v6, v7, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v7, "viewable"

    .line 1882
    invoke-virtual {v6, v7, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "currentAppOrientation"

    .line 1883
    invoke-virtual {v6, v0, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1885
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0, v2, v1, v3}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->b(Landroid/webkit/WebView;FF)V

    .line 1886
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0, v1, v5, v4}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->c(Landroid/webkit/WebView;FF)V

    .line 1887
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0, v1, v6}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;Ljava/util/Map;)V

    .line 1889
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->j:Lcom/mbridge/msdk/mbjscommon/mraid/d;

    invoke-virtual {v2}, Lcom/mbridge/msdk/mbjscommon/mraid/d;->a()D

    move-result-wide v2

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;D)V

    .line 1890
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v0

    iget-object p0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0, p0}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;)V

    :cond_3
    return-void
.end method

.method static synthetic f(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Z
    .locals 0

    .line 79
    iget-boolean p0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->d:Z

    return p0
.end method

.method static synthetic g(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 0

    .line 79
    iget-object p0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-object p0
.end method

.method static synthetic h(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)V
    .locals 8

    .line 1918
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/mbridge/msdk/foundation/controller/a;->a(Landroid/content/Context;)V

    .line 1919
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImpressionURL()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 1920
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v3, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;

    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 1921
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImpressionURL()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    const/4 v6, 0x1

    sget v7, Lcom/mbridge/msdk/click/a/a;->g:I

    .line 1920
    invoke-static/range {v1 .. v7}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZI)V

    .line 1924
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOnlyImpressionURL()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 1925
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v3, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;

    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 1926
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOnlyImpressionURL()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    const/4 v6, 0x1

    sget v7, Lcom/mbridge/msdk/click/a/a;->h:I

    .line 1925
    invoke-static/range {v1 .. v7}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZI)V

    .line 1929
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const-string v2, "interstitial"

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/foundation/same/a/d;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V

    .line 1931
    new-instance v0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$7;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$7;-><init>(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)V

    .line 1938
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/b;->a()Lcom/mbridge/msdk/foundation/controller/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/b;->d()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 1939
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->a()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object v1

    invoke-virtual {v1, v0}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V

    goto :goto_0

    .line 1941
    :cond_2
    invoke-interface {v0}, Ljava/lang/Runnable;->run()V

    .line 1943
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_3

    .line 1944
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPv_urls()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 1945
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_3

    .line 1946
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    move-object v5, v1

    check-cast v5, Ljava/lang/String;

    .line 1947
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v4, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;

    const/4 v6, 0x0

    const/4 v7, 0x1

    invoke-static/range {v2 .. v7}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p0

    .line 1952
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string v0, "MBInterstitialActivity"

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    return-void
.end method

.method static synthetic i(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Z
    .locals 0

    .line 79
    iget-boolean p0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->c:Z

    return p0
.end method

.method static synthetic j(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)V
    .locals 2

    .line 2397
    :try_start_0
    new-instance v0, Lcom/mbridge/msdk/foundation/entity/p;

    invoke-direct {v0}, Lcom/mbridge/msdk/foundation/entity/p;-><init>()V

    .line 2398
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 2399
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 2400
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 2401
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v1

    if-eqz v1, :cond_0

    sget v1, Lcom/mbridge/msdk/foundation/entity/p;->a:I

    goto :goto_0

    :cond_0
    sget v1, Lcom/mbridge/msdk/foundation/entity/p;->b:I

    :goto_0
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->a(I)V

    .line 2402
    invoke-virtual {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    iget-object p0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;

    invoke-static {v0, v1, p0}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Lcom/mbridge/msdk/foundation/entity/p;Landroid/content/Context;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p0

    .line 2404
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    return-void
.end method

.method static synthetic k(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)V
    .locals 2

    .line 2898
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2899
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    new-instance v1, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$6;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$6;-><init>(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method


# virtual methods
.method public clickTracking(ZLjava/lang/String;)V
    .locals 7

    .line 694
    new-instance v0, Lcom/mbridge/msdk/click/b;

    invoke-virtual {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/click/b;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->o:Lcom/mbridge/msdk/click/b;

    .line 696
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->needShowIDialog()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 697
    new-instance v6, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$4;

    invoke-direct {v6, p0, p1, p2}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$4;-><init>(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;ZLjava/lang/String;)V

    .line 712
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v0}, Lcom/mbridge/msdk/click/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->needShowIDialog()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 713
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->o:Lcom/mbridge/msdk/click/b;

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/b;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 714
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object v1

    const-string v2, ""

    iget-object v3, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v5, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;

    move-object v4, p0

    invoke-virtual/range {v1 .. v6}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/widget/dialog/a;)V

    goto :goto_0

    .line 716
    :cond_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->onIntersClick()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :goto_0
    return-void

    :catchall_0
    move-exception v0

    .line 722
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBInterstitialActivity"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 724
    :cond_1
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->a(ZLjava/lang/String;)V

    return-void
.end method

.method public close()V
    .locals 0

    .line 818
    invoke-virtual {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->finish()V

    return-void
.end method

.method public expand(Ljava/lang/String;Z)V
    .locals 0

    return-void
.end method

.method public finish()V
    .locals 1

    .line 622
    invoke-super {p0}, Lcom/mbridge/msdk/activity/MBBaseActivity;->finish()V

    .line 623
    iget-boolean v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->l:Z

    if-nez v0, :cond_0

    .line 624
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->c()V

    .line 626
    :cond_0
    iget-boolean v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->m:Z

    if-nez v0, :cond_1

    .line 627
    invoke-virtual {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->reportPlayableClosed()V

    :cond_1
    return-void
.end method

.method public getIntersUnitSetting()Lcom/mbridge/msdk/c/d;
    .locals 4

    const/4 v0, 0x0

    .line 673
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-object v0

    .line 677
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    .line 678
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;

    invoke-virtual {v2, v1, v3}, Lcom/mbridge/msdk/c/b;->e(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v1

    if-nez v1, :cond_1

    const-string v1, "MBInterstitialActivity"

    const-string v2, "\u83b7\u53d6\u9ed8\u8ba4\u7684unitsetting"

    .line 680
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 681
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;

    invoke-static {v1}, Lcom/mbridge/msdk/c/d;->f(Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    return-object v1

    :catch_0
    move-exception v1

    .line 685
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    return-object v0
.end method

.method public getMraidCampaign()Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 1

    .line 828
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-object v0
.end method

.method public goneWebView()V
    .locals 1

    .line 536
    :try_start_0
    new-instance v0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$15;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$15;-><init>(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)V

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->runOnUiThread(Ljava/lang/Runnable;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 547
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public hideLoading()V
    .locals 1

    .line 572
    :try_start_0
    new-instance v0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$3;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$3;-><init>(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)V

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->runOnUiThread(Ljava/lang/Runnable;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 583
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public initView()V
    .locals 3

    .line 492
    invoke-virtual {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "id"

    const-string v2, "mbridge_interstitial_wv"

    invoke-static {v0, v2, v1}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iput-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 493
    invoke-virtual {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    const-string v2, "mbridge_interstitial_pb"

    invoke-static {v0, v2, v1}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ProgressBar;

    iput-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mProgressBar:Landroid/widget/ProgressBar;

    .line 494
    invoke-virtual {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    const-string v2, "mbridge_interstitial_iv_close"

    invoke-static {v0, v2, v1}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->g:Landroid/widget/ImageView;

    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 6

    .line 128
    invoke-super {p0, p1}, Lcom/mbridge/msdk/activity/MBBaseActivity;->onCreate(Landroid/os/Bundle;)V

    .line 130
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    const-string v0, "mbridge_interstitial_activity"

    const-string v1, "layout"

    invoke-static {p1, v0, v1}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    const/4 v0, -0x1

    if-eq p1, v0, :cond_5

    .line 133
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->setContentView(I)V

    .line 134
    invoke-virtual {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->initView()V

    .line 1227
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->a()V

    .line 1237
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->g:Landroid/widget/ImageView;

    new-instance v0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$9;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$9;-><init>(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)V

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1245
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_0

    .line 1246
    new-instance p1, Lcom/mbridge/msdk/foundation/webview/BrowserView$MBDownloadListener;

    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {p1, v0}, Lcom/mbridge/msdk/foundation/webview/BrowserView$MBDownloadListener;-><init>(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 1247
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/webview/BrowserView$MBDownloadListener;->setTitle(Ljava/lang/String;)V

    .line 1248
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setCampaignId(Ljava/lang/String;)V

    .line 1249
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setDownloadListener(Landroid/webkit/DownloadListener;)V

    .line 1230
    :cond_0
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->b()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 1256
    :try_start_1
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getHtmlUrl()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result p1

    if-eqz p1, :cond_3

    :cond_1
    const-string p1, "MBInterstitialActivity"

    .line 1258
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "url:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getHtmlUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1261
    invoke-virtual {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->goneWebView()V

    .line 1262
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    new-instance v0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$10;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$10;-><init>(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)V

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setWebViewListener(Lcom/mbridge/msdk/mbjscommon/windvane/d;)V

    .line 1349
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getHtmlUrl()Ljava/lang/String;

    move-result-object p1

    .line 1350
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 1351
    new-instance v0, Ljava/io/File;

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMraid()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 1352
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-virtual {v0}, Ljava/io/File;->isFile()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-virtual {v0}, Ljava/io/File;->canRead()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 1353
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "file:////"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMraid()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 1357
    :cond_2
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->k:J

    .line 1358
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V

    .line 1359
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->n:Landroid/os/Handler;

    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->a:Ljava/lang/Runnable;

    const-wide/16 v1, 0x3a98

    invoke-virtual {p1, v0, v1, v2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_0

    .line 1361
    :cond_3
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->h:Lcom/mbridge/msdk/interstitial/c/a$c;

    if-eqz p1, :cond_4

    .line 1362
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->h:Lcom/mbridge/msdk/interstitial/c/a$c;

    const-string v0, "offerwall htmlurl is null"

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/interstitial/c/a$c;->a(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1366
    :try_start_2
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 136
    :cond_4
    :goto_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/mbridge/msdk/foundation/controller/a;->a(Landroid/content/Context;)V

    .line 137
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;

    const/4 v3, 0x0

    const/4 v4, 0x0

    new-instance v5, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$8;

    invoke-direct {v5, p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$8;-><init>(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)V

    move-object v2, p0

    invoke-virtual/range {v0 .. v5}, Lcom/mbridge/msdk/foundation/b/b;->a(Ljava/lang/String;Landroid/content/Context;Landroid/view/ViewGroup;Landroid/view/ViewGroup$LayoutParams;Lcom/mbridge/msdk/foundation/b/a;)V

    .line 192
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignUnitId(Ljava/lang/String;)V

    .line 193
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/foundation/b/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    goto :goto_1

    .line 195
    :cond_5
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->a()V

    .line 196
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->b()V

    .line 197
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->h:Lcom/mbridge/msdk/interstitial/c/a$c;

    if-eqz p1, :cond_6

    .line 198
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->h:Lcom/mbridge/msdk/interstitial/c/a$c;

    const-string v0, "not found resource"

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/interstitial/c/a$c;->a(Ljava/lang/String;)V

    .line 200
    :cond_6
    invoke-virtual {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->finish()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    return-void

    :catch_1
    move-exception p1

    .line 204
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    return-void
.end method

.method protected onDestroy()V
    .locals 3

    .line 589
    invoke-super {p0}, Lcom/mbridge/msdk/activity/MBBaseActivity;->onDestroy()V

    .line 592
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->h:Lcom/mbridge/msdk/interstitial/c/a$c;

    if-eqz v0, :cond_0

    .line 593
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->h:Lcom/mbridge/msdk/interstitial/c/a$c;

    invoke-virtual {v0}, Lcom/mbridge/msdk/interstitial/c/a$c;->b()V

    .line 596
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->o:Lcom/mbridge/msdk/click/b;

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    .line 597
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->o:Lcom/mbridge/msdk/click/b;

    const/4 v2, 0x0

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/click/b;->a(Z)V

    .line 598
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->o:Lcom/mbridge/msdk/click/b;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V

    .line 599
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->o:Lcom/mbridge/msdk/click/b;

    invoke-virtual {v0}, Lcom/mbridge/msdk/click/b;->a()V

    .line 602
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->j:Lcom/mbridge/msdk/mbjscommon/mraid/d;

    if-eqz v0, :cond_2

    .line 603
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->j:Lcom/mbridge/msdk/mbjscommon/mraid/d;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/mraid/d;->d()V

    .line 606
    :cond_2
    iget-boolean v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->l:Z

    if-nez v0, :cond_3

    .line 607
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->c()V

    .line 610
    :cond_3
    sget-object v0, Lcom/mbridge/msdk/interstitial/c/a;->e:Ljava/util/Map;

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    .line 611
    sget-object v0, Lcom/mbridge/msdk/interstitial/c/a;->e:Ljava/util/Map;

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;

    invoke-interface {v0, v2}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 613
    :cond_4
    iput-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->h:Lcom/mbridge/msdk/interstitial/c/a$c;

    .line 614
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/b/b;->c(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 616
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public onIntersClick()V
    .locals 1

    .line 657
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->h:Lcom/mbridge/msdk/interstitial/c/a$c;

    if-eqz v0, :cond_0

    .line 658
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->h:Lcom/mbridge/msdk/interstitial/c/a$c;

    invoke-virtual {v0}, Lcom/mbridge/msdk/interstitial/c/a$c;->c()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 661
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method protected onPause()V
    .locals 3

    .line 218
    invoke-super {p0}, Lcom/mbridge/msdk/activity/MBBaseActivity;->onPause()V

    .line 219
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 220
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const-string v2, "false"

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->b(Landroid/webkit/WebView;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method protected onResume()V
    .locals 3

    .line 210
    invoke-super {p0}, Lcom/mbridge/msdk/activity/MBBaseActivity;->onResume()V

    .line 211
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 212
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const-string v2, "true"

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->b(Landroid/webkit/WebView;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public open(Ljava/lang/String;)V
    .locals 1

    .line 797
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 798
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setClickURL(Ljava/lang/String;)V

    :cond_0
    const/4 v0, 0x1

    .line 800
    invoke-virtual {p0, v0, p1}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->clickTracking(ZLjava/lang/String;)V

    return-void
.end method

.method public reportPlayableClosed()V
    .locals 8

    .line 633
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1

    .line 634
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v7

    .line 635
    new-instance v0, Lcom/mbridge/msdk/foundation/entity/p;

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 636
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v3

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v4

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v5

    iget-object v6, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;

    const-string v2, "2000061"

    move-object v1, v0

    invoke-direct/range {v1 .. v7}, Lcom/mbridge/msdk/foundation/entity/p;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V

    .line 637
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v1

    if-eqz v1, :cond_0

    sget v1, Lcom/mbridge/msdk/foundation/entity/p;->a:I

    goto :goto_0

    :cond_0
    sget v1, Lcom/mbridge/msdk/foundation/entity/p;->b:I

    :goto_0
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->a(I)V

    .line 638
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/foundation/same/report/c;->b(Lcom/mbridge/msdk/foundation/entity/p;Landroid/content/Context;Ljava/lang/String;)V

    const/4 v0, 0x1

    .line 639
    iput-boolean v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->m:Z

    :cond_1
    return-void
.end method

.method public setTopControllerPadding(IIIII)V
    .locals 1

    const/high16 p1, 0x41200000    # 10.0f

    .line 958
    invoke-static {p0, p1}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result p1

    if-gtz p2, :cond_0

    move p2, p1

    :cond_0
    if-gtz p3, :cond_1

    move p3, p1

    :cond_1
    if-gtz p4, :cond_2

    move p4, p1

    :cond_2
    if-gtz p5, :cond_3

    move p5, p1

    .line 975
    :cond_3
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->g:Landroid/widget/ImageView;

    if-eqz p1, :cond_4

    const/high16 p1, 0x41c80000    # 25.0f

    .line 976
    invoke-static {p0, p1}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result p1

    .line 977
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v0, p1, p1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 p1, 0xb

    .line 978
    invoke-virtual {v0, p1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 979
    invoke-virtual {v0, p2, p4, p3, p5}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    .line 980
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->g:Landroid/widget/ImageView;

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_4
    return-void
.end method

.method public showLoading()V
    .locals 1

    .line 554
    :try_start_0
    new-instance v0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$2;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$2;-><init>(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)V

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->runOnUiThread(Ljava/lang/Runnable;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 565
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public showWebView()V
    .locals 1

    .line 514
    :try_start_0
    new-instance v0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$14;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$14;-><init>(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)V

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->runOnUiThread(Ljava/lang/Runnable;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 529
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public unload()V
    .locals 0

    .line 823
    invoke-virtual {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->close()V

    return-void
.end method

.method public useCustomClose(Z)V
    .locals 3

    if-eqz p1, :cond_0

    .line 834
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->g:Landroid/widget/ImageView;

    new-instance v0, Landroid/graphics/drawable/ColorDrawable;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Landroid/graphics/drawable/ColorDrawable;-><init>(I)V

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    goto :goto_0

    .line 836
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->g:Landroid/widget/ImageView;

    .line 837
    invoke-virtual {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "mbridge_interstitial_close"

    const-string v2, "drawable"

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 836
    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setImageResource(I)V

    :goto_0
    return-void
.end method
