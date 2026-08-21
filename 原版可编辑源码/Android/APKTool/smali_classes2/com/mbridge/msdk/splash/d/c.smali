.class public final Lcom/mbridge/msdk/splash/d/c;
.super Ljava/lang/Object;
.source "SplashProvider.java"


# static fields
.field private static b:Ljava/lang/String; = "SplashProvider"


# instance fields
.field private A:Landroid/app/Activity;

.field private B:Z

.field private C:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private D:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

.field private E:Z

.field public a:Z

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Lcom/mbridge/msdk/out/MBridgeIds;

.field private f:I

.field private g:J

.field private h:Lcom/mbridge/msdk/splash/c/c;

.field private i:Lcom/mbridge/msdk/splash/c/d;

.field private j:Lcom/mbridge/msdk/splash/d/b;

.field private k:Lcom/mbridge/msdk/out/MBSplashShowListener;

.field private l:Lcom/mbridge/msdk/splash/d/d;

.field private m:Lcom/mbridge/msdk/splash/view/MBSplashView;

.field private n:Lcom/mbridge/msdk/splash/view/MBSplashWebview;

.field private o:Landroid/view/ViewGroup;

.field private p:Landroid/view/View;

.field private q:Lcom/mbridge/msdk/c/d;

.field private r:Z

.field private s:Landroid/view/ViewGroup;

.field private t:Lcom/mbridge/msdk/c/c;

.field private u:Z

.field private v:I

.field private w:I

.field private x:I

.field private y:Ljava/lang/Object;

.field private z:Ljava/lang/Object;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 91
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x5

    .line 43
    iput v0, p0, Lcom/mbridge/msdk/splash/d/c;->f:I

    const/4 v0, 0x1

    .line 62
    iput v0, p0, Lcom/mbridge/msdk/splash/d/c;->v:I

    .line 63
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->x(Landroid/content/Context;)I

    move-result v0

    iput v0, p0, Lcom/mbridge/msdk/splash/d/c;->w:I

    .line 64
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->y(Landroid/content/Context;)I

    move-result v0

    iput v0, p0, Lcom/mbridge/msdk/splash/d/c;->x:I

    .line 65
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->y:Ljava/lang/Object;

    .line 66
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->z:Ljava/lang/Object;

    const/4 v0, 0x0

    .line 67
    iput-boolean v0, p0, Lcom/mbridge/msdk/splash/d/c;->a:Z

    .line 73
    iput-boolean v0, p0, Lcom/mbridge/msdk/splash/d/c;->E:Z

    .line 92
    iput-object p2, p0, Lcom/mbridge/msdk/splash/d/c;->d:Ljava/lang/String;

    .line 93
    iput-object p3, p0, Lcom/mbridge/msdk/splash/d/c;->c:Ljava/lang/String;

    .line 94
    new-instance v0, Lcom/mbridge/msdk/out/MBridgeIds;

    invoke-direct {v0, p2, p3}, Lcom/mbridge/msdk/out/MBridgeIds;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->e:Lcom/mbridge/msdk/out/MBridgeIds;

    .line 95
    iput-object p1, p0, Lcom/mbridge/msdk/splash/d/c;->A:Landroid/app/Activity;

    .line 1420
    iget-object p2, p0, Lcom/mbridge/msdk/splash/d/c;->i:Lcom/mbridge/msdk/splash/c/d;

    if-nez p2, :cond_1

    if-eqz p1, :cond_0

    .line 1422
    new-instance p2, Lcom/mbridge/msdk/splash/c/d;

    iget-object p3, p0, Lcom/mbridge/msdk/splash/d/c;->d:Ljava/lang/String;

    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->c:Ljava/lang/String;

    invoke-direct {p2, p1, p3, v0}, Lcom/mbridge/msdk/splash/c/d;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object p2, p0, Lcom/mbridge/msdk/splash/d/c;->i:Lcom/mbridge/msdk/splash/c/d;

    goto :goto_0

    .line 1424
    :cond_0
    new-instance p2, Lcom/mbridge/msdk/splash/c/d;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p3

    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p3

    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->d:Ljava/lang/String;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/d/c;->c:Ljava/lang/String;

    invoke-direct {p2, p3, v0, v1}, Lcom/mbridge/msdk/splash/c/d;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object p2, p0, Lcom/mbridge/msdk/splash/d/c;->i:Lcom/mbridge/msdk/splash/c/d;

    .line 1427
    :cond_1
    :goto_0
    iget-object p2, p0, Lcom/mbridge/msdk/splash/d/c;->n:Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    if-nez p2, :cond_3

    if-eqz p1, :cond_2

    .line 1430
    :try_start_0
    new-instance p2, Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    invoke-direct {p2, p1}, Lcom/mbridge/msdk/splash/view/MBSplashWebview;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/mbridge/msdk/splash/d/c;->n:Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    goto :goto_1

    .line 1436
    :cond_2
    new-instance p2, Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p3

    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p3

    invoke-direct {p2, p3}, Lcom/mbridge/msdk/splash/view/MBSplashWebview;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/mbridge/msdk/splash/d/c;->n:Lcom/mbridge/msdk/splash/view/MBSplashWebview;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 1441
    :catch_0
    :goto_1
    iget-object p2, p0, Lcom/mbridge/msdk/splash/d/c;->n:Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    if-eqz p2, :cond_3

    .line 1442
    new-instance p3, Lcom/mbridge/msdk/splash/view/a;

    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->c:Ljava/lang/String;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/d/c;->i:Lcom/mbridge/msdk/splash/c/d;

    invoke-virtual {v1}, Lcom/mbridge/msdk/splash/c/d;->a()Lcom/mbridge/msdk/splash/d/a;

    move-result-object v1

    invoke-direct {p3, v0, v1}, Lcom/mbridge/msdk/splash/view/a;-><init>(Ljava/lang/String;Lcom/mbridge/msdk/splash/d/a;)V

    invoke-virtual {p2, p3}, Lcom/mbridge/msdk/splash/view/MBSplashWebview;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 1445
    :cond_3
    iget-object p2, p0, Lcom/mbridge/msdk/splash/d/c;->m:Lcom/mbridge/msdk/splash/view/MBSplashView;

    if-nez p2, :cond_5

    if-eqz p1, :cond_4

    .line 1447
    new-instance p2, Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-direct {p2, p1}, Lcom/mbridge/msdk/splash/view/MBSplashView;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/mbridge/msdk/splash/d/c;->m:Lcom/mbridge/msdk/splash/view/MBSplashView;

    goto :goto_2

    .line 1449
    :cond_4
    new-instance p1, Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p2

    invoke-direct {p1, p2}, Lcom/mbridge/msdk/splash/view/MBSplashView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/mbridge/msdk/splash/d/c;->m:Lcom/mbridge/msdk/splash/view/MBSplashView;

    .line 1452
    :goto_2
    iget-object p1, p0, Lcom/mbridge/msdk/splash/d/c;->m:Lcom/mbridge/msdk/splash/view/MBSplashView;

    iget-object p2, p0, Lcom/mbridge/msdk/splash/d/c;->n:Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/splash/view/MBSplashView;->setSplashWebview(Lcom/mbridge/msdk/splash/view/MBSplashWebview;)V

    .line 1454
    :cond_5
    iget-object p1, p0, Lcom/mbridge/msdk/splash/d/c;->t:Lcom/mbridge/msdk/c/c;

    if-nez p1, :cond_6

    .line 1455
    new-instance p1, Lcom/mbridge/msdk/c/c;

    invoke-direct {p1}, Lcom/mbridge/msdk/c/c;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/splash/d/c;->t:Lcom/mbridge/msdk/c/c;

    .line 1457
    :cond_6
    iget-object p1, p0, Lcom/mbridge/msdk/splash/d/c;->t:Lcom/mbridge/msdk/c/c;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p2

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p3

    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object p3

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->l()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/splash/d/c;->c:Ljava/lang/String;

    invoke-virtual {p1, p2, p3, v0, v1}, Lcom/mbridge/msdk/c/c;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private a(Landroid/app/Activity;)Landroid/view/ViewGroup;
    .locals 3

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    .line 565
    invoke-virtual {p1}, Landroid/app/Activity;->isFinishing()Z

    move-result v1

    if-eqz v1, :cond_0

    move-object p1, v0

    :cond_0
    if-nez p1, :cond_1

    .line 569
    sget-object p1, Lcom/mbridge/msdk/splash/d/c;->b:Ljava/lang/String;

    const-string v1, "splash can\'t show because, activity is null or activity is finishing"

    invoke-static {p1, v1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    .line 574
    :cond_1
    :try_start_0
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object p1

    const v1, 0x1020002

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 v0, 0x0

    .line 576
    :try_start_1
    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move-object p1, v0

    goto :goto_1

    :catchall_0
    move-exception v0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 578
    :try_start_2
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_1

    :catchall_1
    move-exception p1

    move-object v2, v0

    move-object v0, p1

    move-object p1, v2

    .line 581
    :goto_0
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_1
    return-object p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/splash/d/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;IZ)V
    .locals 0

    .line 37
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/splash/d/c;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;IZ)V

    return-void
.end method

.method private a(Ljava/lang/String;I)V
    .locals 7

    .line 355
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->y:Ljava/lang/Object;

    monitor-enter v0

    .line 356
    :try_start_0
    iget-boolean v1, p0, Lcom/mbridge/msdk/splash/d/c;->r:Z

    const/4 v2, 0x1

    if-eqz v1, :cond_1

    .line 357
    iget-object p1, p0, Lcom/mbridge/msdk/splash/d/c;->j:Lcom/mbridge/msdk/splash/d/b;

    if-eqz p1, :cond_0

    .line 358
    iget-object p1, p0, Lcom/mbridge/msdk/splash/d/c;->j:Lcom/mbridge/msdk/splash/d/b;

    const-string v1, "current unit is loading"

    invoke-virtual {p1, v1, p2}, Lcom/mbridge/msdk/splash/d/b;->a(Ljava/lang/String;I)V

    .line 359
    iput-boolean v2, p0, Lcom/mbridge/msdk/splash/d/c;->r:Z

    .line 361
    :cond_0
    monitor-exit v0

    return-void

    .line 363
    :cond_1
    iput-boolean v2, p0, Lcom/mbridge/msdk/splash/d/c;->r:Z

    .line 364
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 371
    iget v0, p0, Lcom/mbridge/msdk/splash/d/c;->f:I

    const/4 v1, 0x2

    if-lt v0, v1, :cond_a

    const/16 v1, 0xa

    if-le v0, v1, :cond_2

    goto/16 :goto_1

    .line 378
    :cond_2
    iget v0, p0, Lcom/mbridge/msdk/splash/d/c;->w:I

    if-eqz v0, :cond_8

    iget v0, p0, Lcom/mbridge/msdk/splash/d/c;->x:I

    if-nez v0, :cond_3

    goto/16 :goto_0

    :cond_3
    const/4 v0, 0x0

    .line 387
    :try_start_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/mbjscommon/webEnvCheck/a;->a(Landroid/content/Context;)Z

    move-result v0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    if-nez v0, :cond_5

    .line 393
    iget-object p1, p0, Lcom/mbridge/msdk/splash/d/c;->j:Lcom/mbridge/msdk/splash/d/b;

    if-eqz p1, :cond_4

    const-string v0, "WebView is not available"

    .line 394
    invoke-virtual {p1, v0, p2}, Lcom/mbridge/msdk/splash/d/b;->a(Ljava/lang/String;I)V

    :cond_4
    return-void

    .line 399
    :cond_5
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->m:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->clearResState()V

    .line 400
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/splash/d/c;->c:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/c/b;->c(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->q:Lcom/mbridge/msdk/c/d;

    .line 402
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->h:Lcom/mbridge/msdk/splash/c/c;

    if-nez v0, :cond_6

    .line 403
    new-instance v0, Lcom/mbridge/msdk/splash/c/c;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/d/c;->d:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/splash/d/c;->c:Ljava/lang/String;

    iget-wide v3, p0, Lcom/mbridge/msdk/splash/d/c;->g:J

    const-wide/16 v5, 0x3e8

    mul-long/2addr v3, v5

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/mbridge/msdk/splash/c/c;-><init>(Ljava/lang/String;Ljava/lang/String;J)V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->h:Lcom/mbridge/msdk/splash/c/c;

    .line 405
    :cond_6
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->j:Lcom/mbridge/msdk/splash/d/b;

    if-eqz v0, :cond_7

    .line 406
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/splash/d/b;->a(Ljava/lang/String;)V

    .line 407
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->h:Lcom/mbridge/msdk/splash/c/c;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/d/c;->j:Lcom/mbridge/msdk/splash/d/b;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/splash/c/c;->a(Lcom/mbridge/msdk/splash/b/b;)V

    .line 409
    :cond_7
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->m:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->resetLoadState()V

    .line 410
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->h:Lcom/mbridge/msdk/splash/c/c;

    iget v1, p0, Lcom/mbridge/msdk/splash/d/c;->f:I

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/splash/c/c;->a(I)V

    .line 411
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->h:Lcom/mbridge/msdk/splash/c/c;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/d/c;->m:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/splash/c/c;->a(Lcom/mbridge/msdk/splash/view/MBSplashView;)V

    .line 412
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->h:Lcom/mbridge/msdk/splash/c/c;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/d/c;->q:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/splash/c/c;->a(Lcom/mbridge/msdk/c/d;)V

    .line 413
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->h:Lcom/mbridge/msdk/splash/c/c;

    iget v1, p0, Lcom/mbridge/msdk/splash/d/c;->w:I

    iget v2, p0, Lcom/mbridge/msdk/splash/d/c;->x:I

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/splash/c/c;->a(II)V

    .line 414
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->h:Lcom/mbridge/msdk/splash/c/c;

    iget-boolean v1, p0, Lcom/mbridge/msdk/splash/d/c;->u:Z

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/splash/c/c;->a(Z)V

    .line 415
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->h:Lcom/mbridge/msdk/splash/c/c;

    iget v1, p0, Lcom/mbridge/msdk/splash/d/c;->v:I

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/splash/c/c;->b(I)V

    .line 416
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->h:Lcom/mbridge/msdk/splash/c/c;

    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/splash/c/c;->a(Ljava/lang/String;I)V

    return-void

    .line 379
    :cond_8
    :goto_0
    iget-object p1, p0, Lcom/mbridge/msdk/splash/d/c;->j:Lcom/mbridge/msdk/splash/d/b;

    if-eqz p1, :cond_9

    const-string v0, "width or height is 0  or width or height is too small"

    .line 380
    invoke-virtual {p1, v0, p2}, Lcom/mbridge/msdk/splash/d/b;->a(Ljava/lang/String;I)V

    :cond_9
    return-void

    .line 372
    :cond_a
    :goto_1
    iget-object p1, p0, Lcom/mbridge/msdk/splash/d/c;->j:Lcom/mbridge/msdk/splash/d/b;

    if-eqz p1, :cond_b

    .line 373
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "countDownTime must in 2 - 10 ,but now is "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mbridge/msdk/splash/d/c;->f:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0, p2}, Lcom/mbridge/msdk/splash/d/b;->a(Ljava/lang/String;I)V

    :cond_b
    return-void

    :catchall_0
    move-exception p1

    .line 364
    :try_start_2
    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    throw p1
.end method

.method private b(II)V
    .locals 5

    .line 517
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->x(Landroid/content/Context;)I

    move-result v0

    .line 518
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->y(Landroid/content/Context;)I

    move-result v1

    .line 519
    iget v2, p0, Lcom/mbridge/msdk/splash/d/c;->v:I

    const/4 v3, 0x0

    const/4 v4, 0x1

    if-ne v2, v4, :cond_1

    mul-int/lit8 p1, p2, 0x4

    if-lt v1, p1, :cond_0

    sub-int/2addr v1, p2

    .line 521
    iput v1, p0, Lcom/mbridge/msdk/splash/d/c;->x:I

    .line 522
    iput v0, p0, Lcom/mbridge/msdk/splash/d/c;->w:I

    goto :goto_0

    .line 524
    :cond_0
    iput v3, p0, Lcom/mbridge/msdk/splash/d/c;->x:I

    iput v3, p0, Lcom/mbridge/msdk/splash/d/c;->w:I

    goto :goto_0

    :cond_1
    const/4 p2, 0x2

    if-ne v2, p2, :cond_3

    mul-int/lit8 p2, p1, 0x4

    if-lt v0, p2, :cond_2

    sub-int/2addr v0, p1

    .line 528
    iput v0, p0, Lcom/mbridge/msdk/splash/d/c;->w:I

    .line 529
    iput v1, p0, Lcom/mbridge/msdk/splash/d/c;->x:I

    goto :goto_0

    .line 531
    :cond_2
    iput v3, p0, Lcom/mbridge/msdk/splash/d/c;->x:I

    iput v3, p0, Lcom/mbridge/msdk/splash/d/c;->w:I

    :cond_3
    :goto_0
    return-void
.end method

.method private b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;IZ)V
    .locals 2

    .line 312
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->m:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-static {v0, p1}, Lcom/mbridge/msdk/splash/c/b;->a(Lcom/mbridge/msdk/splash/view/MBSplashView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v0

    if-nez v0, :cond_2

    if-lez p2, :cond_0

    .line 314
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->i:Lcom/mbridge/msdk/splash/c/d;

    iget-object v0, v0, Lcom/mbridge/msdk/splash/c/d;->a:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/splash/d/c$1;

    invoke-direct {v1, p0, p1, p2, p3}, Lcom/mbridge/msdk/splash/d/c$1;-><init>(Lcom/mbridge/msdk/splash/d/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;IZ)V

    const-wide/16 p1, 0x1

    invoke-virtual {v0, v1, p1, p2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_0

    .line 321
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/splash/d/c;->l:Lcom/mbridge/msdk/splash/d/d;

    if-eqz p1, :cond_1

    .line 322
    iget-object p2, p0, Lcom/mbridge/msdk/splash/d/c;->e:Lcom/mbridge/msdk/out/MBridgeIds;

    const-string p3, "campaignEx is not ready"

    invoke-virtual {p1, p2, p3}, Lcom/mbridge/msdk/splash/d/d;->a(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void

    :cond_2
    const/4 p2, 0x1

    .line 327
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/splash/d/c;->d(Z)V

    .line 328
    iget-object p2, p0, Lcom/mbridge/msdk/splash/d/c;->o:Landroid/view/ViewGroup;

    invoke-virtual {p2}, Landroid/view/ViewGroup;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p2

    const/4 p3, -0x1

    if-nez p2, :cond_3

    .line 330
    new-instance p2, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {p2, p3, p3}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    goto :goto_1

    .line 332
    :cond_3
    iput p3, p2, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 333
    iput p3, p2, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 335
    :goto_1
    iget-object p3, p0, Lcom/mbridge/msdk/splash/d/c;->o:Landroid/view/ViewGroup;

    invoke-virtual {p3, p2}, Landroid/view/ViewGroup;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 336
    iget-object p2, p0, Lcom/mbridge/msdk/splash/d/c;->o:Landroid/view/ViewGroup;

    invoke-virtual {p2}, Landroid/view/ViewGroup;->removeAllViews()V

    .line 337
    iget-object p2, p0, Lcom/mbridge/msdk/splash/d/c;->i:Lcom/mbridge/msdk/splash/c/d;

    iget p3, p0, Lcom/mbridge/msdk/splash/d/c;->f:I

    invoke-virtual {p2, p3}, Lcom/mbridge/msdk/splash/c/d;->a(I)V

    .line 338
    iget-object p2, p0, Lcom/mbridge/msdk/splash/d/c;->i:Lcom/mbridge/msdk/splash/c/d;

    iget-object p3, p0, Lcom/mbridge/msdk/splash/d/c;->s:Landroid/view/ViewGroup;

    invoke-virtual {p2, p3}, Lcom/mbridge/msdk/splash/c/d;->a(Landroid/view/ViewGroup;)V

    .line 339
    iget-object p2, p0, Lcom/mbridge/msdk/splash/d/c;->i:Lcom/mbridge/msdk/splash/c/d;

    iget-object p3, p0, Lcom/mbridge/msdk/splash/d/c;->l:Lcom/mbridge/msdk/splash/d/d;

    invoke-virtual {p2, p3}, Lcom/mbridge/msdk/splash/c/d;->a(Lcom/mbridge/msdk/splash/d/d;)V

    .line 340
    sget-object p2, Lcom/mbridge/msdk/splash/d/c;->b:Ljava/lang/String;

    const-string p3, "start show process"

    invoke-static {p2, p3}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 341
    iget-object p2, p0, Lcom/mbridge/msdk/splash/d/c;->o:Landroid/view/ViewGroup;

    if-eqz p2, :cond_4

    .line 342
    invoke-virtual {p2}, Landroid/view/ViewGroup;->removeAllViews()V

    .line 343
    iget-object p2, p0, Lcom/mbridge/msdk/splash/d/c;->m:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-static {p2}, Lcom/mbridge/msdk/foundation/tools/an;->a(Landroid/view/View;)V

    .line 344
    iget-object p2, p0, Lcom/mbridge/msdk/splash/d/c;->o:Landroid/view/ViewGroup;

    iget-object p3, p0, Lcom/mbridge/msdk/splash/d/c;->m:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-virtual {p2, p3}, Landroid/view/ViewGroup;->addView(Landroid/view/View;)V

    .line 346
    :cond_4
    iget-object p2, p0, Lcom/mbridge/msdk/splash/d/c;->i:Lcom/mbridge/msdk/splash/c/d;

    iget-boolean p3, p0, Lcom/mbridge/msdk/splash/d/c;->u:Z

    invoke-virtual {p2, p3}, Lcom/mbridge/msdk/splash/c/d;->a(Z)V

    .line 347
    iget-object p2, p0, Lcom/mbridge/msdk/splash/d/c;->i:Lcom/mbridge/msdk/splash/c/d;

    iget-object p3, p0, Lcom/mbridge/msdk/splash/d/c;->m:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-virtual {p2, p1, p3}, Lcom/mbridge/msdk/splash/c/d;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/splash/view/MBSplashView;)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/mbridge/msdk/out/ZoomOutTypeEnum;)Landroid/view/ViewGroup;
    .locals 4

    .line 487
    new-instance v0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$a;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/d/c;->d:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/splash/d/c;->c:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/mbridge/msdk/out/ZoomOutTypeEnum;->getIndex()I

    move-result p1

    iget-object v3, p0, Lcom/mbridge/msdk/splash/d/c;->C:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {v0, v1, v2, p1, v3}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$a;-><init>(Ljava/lang/String;Ljava/lang/String;ILcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 488
    new-instance p1, Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/splash/d/c;->l:Lcom/mbridge/msdk/splash/d/d;

    invoke-direct {p1, v1, v0, v2}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;-><init>(Landroid/content/Context;Lcom/mbridge/msdk/splash/view/MBSplashPopView$a;Lcom/mbridge/msdk/splash/d/d;)V

    iput-object p1, p0, Lcom/mbridge/msdk/splash/d/c;->D:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    return-object p1
.end method

.method public final a(I)V
    .locals 0

    .line 88
    iput p1, p0, Lcom/mbridge/msdk/splash/d/c;->v:I

    return-void
.end method

.method public final a(II)V
    .locals 0

    .line 193
    invoke-direct {p0, p2, p1}, Lcom/mbridge/msdk/splash/d/c;->b(II)V

    return-void
.end method

.method public final a(IIII)V
    .locals 1

    .line 588
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->m:Lcom/mbridge/msdk/splash/view/MBSplashView;

    if-eqz v0, :cond_0

    .line 589
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->m:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/mbridge/msdk/splash/view/MBSplashView;->setNotchPadding(IIII)V

    .line 591
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->n:Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    if-eqz v0, :cond_1

    const/16 v0, -0x3e7

    .line 592
    invoke-static {v0, p1, p2, p3, p4}, Lcom/mbridge/msdk/foundation/tools/m;->a(IIIII)Ljava/lang/String;

    move-result-object p1

    .line 593
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    iget-object p3, p0, Lcom/mbridge/msdk/splash/d/c;->n:Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    const-string p4, "oncutoutfetched"

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    const/4 v0, 0x0

    invoke-static {p1, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p3, p4, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 596
    sget-object p2, Lcom/mbridge/msdk/splash/d/c;->b:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final a(J)V
    .locals 0

    .line 100
    iput-wide p1, p0, Lcom/mbridge/msdk/splash/d/c;->g:J

    return-void
.end method

.method public final a(Landroid/view/View;Landroid/widget/RelativeLayout$LayoutParams;)V
    .locals 2

    .line 461
    iput-object p1, p0, Lcom/mbridge/msdk/splash/d/c;->p:Landroid/view/View;

    if-eqz p1, :cond_0

    .line 463
    iget v0, p2, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    iget v1, p2, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    invoke-direct {p0, v0, v1}, Lcom/mbridge/msdk/splash/d/c;->b(II)V

    .line 464
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->m:Lcom/mbridge/msdk/splash/view/MBSplashView;

    if-eqz v0, :cond_0

    .line 465
    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/splash/view/MBSplashView;->setIconVg(Landroid/view/View;Landroid/widget/RelativeLayout$LayoutParams;)V

    :cond_0
    return-void
.end method

.method public final a(Landroid/view/ViewGroup;)V
    .locals 0

    .line 76
    iput-object p1, p0, Lcom/mbridge/msdk/splash/d/c;->s:Landroid/view/ViewGroup;

    return-void
.end method

.method final a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;IZ)V
    .locals 7

    if-eqz p1, :cond_1

    if-eqz p3, :cond_1

    .line 283
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->q:Lcom/mbridge/msdk/c/d;

    if-nez v0, :cond_0

    .line 284
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/splash/d/c;->c:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/c/b;->c(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->q:Lcom/mbridge/msdk/c/d;

    .line 286
    :cond_0
    new-instance v0, Lcom/mbridge/msdk/splash/d/d;

    iget-object v3, p0, Lcom/mbridge/msdk/splash/d/c;->k:Lcom/mbridge/msdk/out/MBSplashShowListener;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/d/c;->q:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v1}, Lcom/mbridge/msdk/c/d;->e()D

    move-result-wide v4

    move-object v1, v0

    move-object v2, p0

    move-object v6, p1

    invoke-direct/range {v1 .. v6}, Lcom/mbridge/msdk/splash/d/d;-><init>(Lcom/mbridge/msdk/splash/d/c;Lcom/mbridge/msdk/out/MBSplashShowListener;DLcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->l:Lcom/mbridge/msdk/splash/d/d;

    .line 288
    :cond_1
    iput-object p1, p0, Lcom/mbridge/msdk/splash/d/c;->C:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 298
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->o:Landroid/view/ViewGroup;

    if-nez v0, :cond_3

    .line 299
    iget-object p1, p0, Lcom/mbridge/msdk/splash/d/c;->l:Lcom/mbridge/msdk/splash/d/d;

    if-eqz p1, :cond_2

    .line 300
    iget-object p2, p0, Lcom/mbridge/msdk/splash/d/c;->e:Lcom/mbridge/msdk/out/MBridgeIds;

    const-string p3, "container is null"

    invoke-virtual {p1, p2, p3}, Lcom/mbridge/msdk/splash/d/d;->a(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V

    :cond_2
    return-void

    .line 304
    :cond_3
    iget-object v1, p0, Lcom/mbridge/msdk/splash/d/c;->i:Lcom/mbridge/msdk/splash/c/d;

    if-nez v1, :cond_4

    .line 305
    new-instance v1, Lcom/mbridge/msdk/splash/c/d;

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/splash/d/c;->d:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/splash/d/c;->c:Ljava/lang/String;

    invoke-direct {v1, v0, v2, v3}, Lcom/mbridge/msdk/splash/c/d;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v1, p0, Lcom/mbridge/msdk/splash/d/c;->i:Lcom/mbridge/msdk/splash/c/d;

    .line 308
    :cond_4
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/splash/d/c;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;IZ)V

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/out/MBSplashLoadListener;)V
    .locals 2

    .line 112
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->j:Lcom/mbridge/msdk/splash/d/b;

    if-nez v0, :cond_0

    .line 113
    new-instance v0, Lcom/mbridge/msdk/splash/d/b;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/d/c;->e:Lcom/mbridge/msdk/out/MBridgeIds;

    invoke-direct {v0, p0, v1}, Lcom/mbridge/msdk/splash/d/b;-><init>(Lcom/mbridge/msdk/splash/d/c;Lcom/mbridge/msdk/out/MBridgeIds;)V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->j:Lcom/mbridge/msdk/splash/d/b;

    .line 115
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->j:Lcom/mbridge/msdk/splash/d/b;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/splash/d/b;->a(Lcom/mbridge/msdk/out/MBSplashLoadListener;)V

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/out/MBSplashShowListener;)V
    .locals 0

    .line 119
    iput-object p1, p0, Lcom/mbridge/msdk/splash/d/c;->k:Lcom/mbridge/msdk/out/MBSplashShowListener;

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 2

    .line 123
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    .line 124
    iget-object p1, p0, Lcom/mbridge/msdk/splash/d/c;->j:Lcom/mbridge/msdk/splash/d/b;

    if-eqz p1, :cond_1

    const-string v0, "token is null or empty"

    .line 125
    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/splash/d/b;->a(Ljava/lang/String;I)V

    goto :goto_0

    .line 2133
    :cond_0
    invoke-direct {p0, p1, v1}, Lcom/mbridge/msdk/splash/d/c;->a(Ljava/lang/String;I)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final a(Ljava/lang/String;Landroid/app/Activity;)V
    .locals 1

    .line 137
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/splash/d/c;->a(Landroid/app/Activity;)Landroid/view/ViewGroup;

    move-result-object p2

    if-nez p2, :cond_1

    .line 139
    iget-object p1, p0, Lcom/mbridge/msdk/splash/d/c;->j:Lcom/mbridge/msdk/splash/d/b;

    if-eqz p1, :cond_0

    const/4 p2, 0x1

    const-string v0, "activity is except,please check it"

    .line 140
    invoke-virtual {p1, v0, p2}, Lcom/mbridge/msdk/splash/d/b;->a(Ljava/lang/String;I)V

    :cond_0
    return-void

    .line 144
    :cond_1
    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/splash/d/c;->a(Ljava/lang/String;Landroid/view/ViewGroup;)V

    return-void
.end method

.method public final a(Ljava/lang/String;Landroid/view/ViewGroup;)V
    .locals 1

    .line 148
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 149
    iget-object p1, p0, Lcom/mbridge/msdk/splash/d/c;->j:Lcom/mbridge/msdk/splash/d/b;

    if-eqz p1, :cond_1

    const/4 p2, 0x1

    const-string v0, "token is null or empty"

    .line 150
    invoke-virtual {p1, v0, p2}, Lcom/mbridge/msdk/splash/d/b;->a(Ljava/lang/String;I)V

    goto :goto_0

    .line 153
    :cond_0
    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/splash/d/c;->b(Ljava/lang/String;Landroid/view/ViewGroup;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 84
    iput-boolean p1, p0, Lcom/mbridge/msdk/splash/d/c;->r:Z

    return-void
.end method

.method public final a()Z
    .locals 1

    .line 80
    iget-boolean v0, p0, Lcom/mbridge/msdk/splash/d/c;->r:Z

    return v0
.end method

.method public final b()J
    .locals 2

    .line 104
    iget-wide v0, p0, Lcom/mbridge/msdk/splash/d/c;->g:J

    return-wide v0
.end method

.method public final b(I)V
    .locals 0

    .line 185
    iput p1, p0, Lcom/mbridge/msdk/splash/d/c;->f:I

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x1

    .line 133
    invoke-direct {p0, p1, v0}, Lcom/mbridge/msdk/splash/d/c;->a(Ljava/lang/String;I)V

    return-void
.end method

.method public final b(Ljava/lang/String;Landroid/app/Activity;)V
    .locals 1

    .line 158
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/splash/d/c;->a(Landroid/app/Activity;)Landroid/view/ViewGroup;

    move-result-object p2

    if-nez p2, :cond_1

    .line 160
    iget-object p1, p0, Lcom/mbridge/msdk/splash/d/c;->j:Lcom/mbridge/msdk/splash/d/b;

    if-eqz p1, :cond_0

    const/4 p2, 0x1

    const-string v0, "activity is except,please check it"

    .line 161
    invoke-virtual {p1, v0, p2}, Lcom/mbridge/msdk/splash/d/b;->a(Ljava/lang/String;I)V

    :cond_0
    return-void

    .line 165
    :cond_1
    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/splash/d/c;->b(Ljava/lang/String;Landroid/view/ViewGroup;)V

    return-void
.end method

.method public final b(Ljava/lang/String;Landroid/view/ViewGroup;)V
    .locals 1

    .line 169
    iput-object p2, p0, Lcom/mbridge/msdk/splash/d/c;->o:Landroid/view/ViewGroup;

    .line 170
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->m:Lcom/mbridge/msdk/splash/view/MBSplashView;

    if-eqz v0, :cond_0

    .line 171
    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/splash/view/MBSplashView;->setDevContainer(Landroid/view/ViewGroup;)V

    :cond_0
    const/4 p2, 0x2

    .line 173
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/splash/d/c;->a(Ljava/lang/String;I)V

    return-void
.end method

.method public final b(Z)V
    .locals 0

    .line 181
    iput-boolean p1, p0, Lcom/mbridge/msdk/splash/d/c;->u:Z

    return-void
.end method

.method public final c(Ljava/lang/String;Landroid/app/Activity;)V
    .locals 1

    .line 210
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/splash/d/c;->a(Landroid/app/Activity;)Landroid/view/ViewGroup;

    move-result-object p2

    if-nez p2, :cond_1

    .line 212
    iget-object p1, p0, Lcom/mbridge/msdk/splash/d/c;->k:Lcom/mbridge/msdk/out/MBSplashShowListener;

    if-eqz p1, :cond_0

    .line 213
    iget-object p2, p0, Lcom/mbridge/msdk/splash/d/c;->e:Lcom/mbridge/msdk/out/MBridgeIds;

    const-string v0, "activity is except,please check it"

    invoke-interface {p1, p2, v0}, Lcom/mbridge/msdk/out/MBSplashShowListener;->onShowFailed(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V

    :cond_0
    return-void

    .line 217
    :cond_1
    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/splash/d/c;->c(Ljava/lang/String;Landroid/view/ViewGroup;)V

    return-void
.end method

.method public final c(Ljava/lang/String;Landroid/view/ViewGroup;)V
    .locals 1

    .line 221
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 222
    iget-object p1, p0, Lcom/mbridge/msdk/splash/d/c;->k:Lcom/mbridge/msdk/out/MBSplashShowListener;

    if-eqz p1, :cond_1

    .line 223
    iget-object p2, p0, Lcom/mbridge/msdk/splash/d/c;->e:Lcom/mbridge/msdk/out/MBridgeIds;

    const-string v0, "token is null or empty"

    invoke-interface {p1, p2, v0}, Lcom/mbridge/msdk/out/MBSplashShowListener;->onShowFailed(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V

    goto :goto_0

    .line 226
    :cond_0
    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/splash/d/c;->d(Ljava/lang/String;Landroid/view/ViewGroup;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final c(Z)V
    .locals 0

    .line 478
    iput-boolean p1, p0, Lcom/mbridge/msdk/splash/d/c;->B:Z

    return-void
.end method

.method public final c()Z
    .locals 1

    .line 108
    iget-boolean v0, p0, Lcom/mbridge/msdk/splash/d/c;->u:Z

    return v0
.end method

.method public final c(Ljava/lang/String;)Z
    .locals 8

    .line 177
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->m:Lcom/mbridge/msdk/splash/view/MBSplashView;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/d/c;->d:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/splash/d/c;->c:Ljava/lang/String;

    iget-boolean v4, p0, Lcom/mbridge/msdk/splash/d/c;->u:Z

    iget v5, p0, Lcom/mbridge/msdk/splash/d/c;->f:I

    const/4 v6, 0x0

    const/4 v7, 0x1

    move-object v3, p1

    invoke-static/range {v0 .. v7}, Lcom/mbridge/msdk/splash/c/b;->a(Lcom/mbridge/msdk/splash/view/MBSplashView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZIZZ)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method public final d()I
    .locals 1

    .line 189
    iget v0, p0, Lcom/mbridge/msdk/splash/d/c;->f:I

    return v0
.end method

.method public final d(Ljava/lang/String;Landroid/app/Activity;)V
    .locals 1

    .line 231
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/splash/d/c;->a(Landroid/app/Activity;)Landroid/view/ViewGroup;

    move-result-object p2

    if-nez p2, :cond_1

    .line 233
    iget-object p1, p0, Lcom/mbridge/msdk/splash/d/c;->k:Lcom/mbridge/msdk/out/MBSplashShowListener;

    if-eqz p1, :cond_0

    .line 234
    iget-object p2, p0, Lcom/mbridge/msdk/splash/d/c;->e:Lcom/mbridge/msdk/out/MBridgeIds;

    const-string v0, "activity is except,please check it"

    invoke-interface {p1, p2, v0}, Lcom/mbridge/msdk/out/MBSplashShowListener;->onShowFailed(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V

    :cond_0
    return-void

    .line 238
    :cond_1
    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/splash/d/c;->d(Ljava/lang/String;Landroid/view/ViewGroup;)V

    return-void
.end method

.method public final d(Ljava/lang/String;Landroid/view/ViewGroup;)V
    .locals 15

    move-object v6, p0

    move-object/from16 v0, p2

    .line 243
    iput-object v0, v6, Lcom/mbridge/msdk/splash/d/c;->o:Landroid/view/ViewGroup;

    .line 244
    iget-object v1, v6, Lcom/mbridge/msdk/splash/d/c;->m:Lcom/mbridge/msdk/splash/view/MBSplashView;

    if-eqz v1, :cond_0

    .line 245
    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->setDevContainer(Landroid/view/ViewGroup;)V

    .line 247
    :cond_0
    iget-object v7, v6, Lcom/mbridge/msdk/splash/d/c;->m:Lcom/mbridge/msdk/splash/view/MBSplashView;

    iget-object v8, v6, Lcom/mbridge/msdk/splash/d/c;->d:Ljava/lang/String;

    iget-object v9, v6, Lcom/mbridge/msdk/splash/d/c;->c:Ljava/lang/String;

    iget-boolean v11, v6, Lcom/mbridge/msdk/splash/d/c;->u:Z

    iget v12, v6, Lcom/mbridge/msdk/splash/d/c;->f:I

    const/4 v13, 0x1

    const/4 v14, 0x0

    move-object/from16 v10, p1

    invoke-static/range {v7 .. v14}, Lcom/mbridge/msdk/splash/c/b;->a(Lcom/mbridge/msdk/splash/view/MBSplashView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZIZZ)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v7

    if-eqz v7, :cond_8

    .line 250
    iget-object v0, v6, Lcom/mbridge/msdk/splash/d/c;->q:Lcom/mbridge/msdk/c/d;

    if-nez v0, :cond_1

    .line 251
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    iget-object v2, v6, Lcom/mbridge/msdk/splash/d/c;->c:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/c/b;->c(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v0

    iput-object v0, v6, Lcom/mbridge/msdk/splash/d/c;->q:Lcom/mbridge/msdk/c/d;

    .line 253
    :cond_1
    new-instance v8, Lcom/mbridge/msdk/splash/d/d;

    iget-object v2, v6, Lcom/mbridge/msdk/splash/d/c;->k:Lcom/mbridge/msdk/out/MBSplashShowListener;

    iget-object v0, v6, Lcom/mbridge/msdk/splash/d/c;->q:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/d;->e()D

    move-result-wide v3

    move-object v0, v8

    move-object v1, p0

    move-object v5, v7

    invoke-direct/range {v0 .. v5}, Lcom/mbridge/msdk/splash/d/d;-><init>(Lcom/mbridge/msdk/splash/d/c;Lcom/mbridge/msdk/out/MBSplashShowListener;DLcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    iput-object v8, v6, Lcom/mbridge/msdk/splash/d/c;->l:Lcom/mbridge/msdk/splash/d/d;

    .line 261
    sget-object v0, Lcom/mbridge/msdk/splash/d/c;->b:Ljava/lang/String;

    const-string v1, "show start"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 262
    iget v0, v6, Lcom/mbridge/msdk/splash/d/c;->w:I

    if-eqz v0, :cond_6

    iget v0, v6, Lcom/mbridge/msdk/splash/d/c;->x:I

    if-nez v0, :cond_2

    goto :goto_1

    .line 268
    :cond_2
    iget v0, v6, Lcom/mbridge/msdk/splash/d/c;->f:I

    const/4 v1, 0x2

    if-lt v0, v1, :cond_4

    const/16 v1, 0xa

    if-le v0, v1, :cond_3

    goto :goto_0

    .line 276
    :cond_3
    iget-object v0, v6, Lcom/mbridge/msdk/splash/d/c;->q:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/d;->o()I

    move-result v0

    const/4 v1, 0x0

    invoke-virtual {p0, v7, v0, v1}, Lcom/mbridge/msdk/splash/d/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;IZ)V

    return-void

    .line 269
    :cond_4
    :goto_0
    iget-object v0, v6, Lcom/mbridge/msdk/splash/d/c;->l:Lcom/mbridge/msdk/splash/d/d;

    if-eqz v0, :cond_5

    .line 270
    iget-object v1, v6, Lcom/mbridge/msdk/splash/d/c;->e:Lcom/mbridge/msdk/out/MBridgeIds;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "countDownTime must in 2 - 10 ,but now is "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, v6, Lcom/mbridge/msdk/splash/d/c;->f:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/splash/d/d;->a(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V

    :cond_5
    return-void

    .line 263
    :cond_6
    :goto_1
    iget-object v0, v6, Lcom/mbridge/msdk/splash/d/c;->l:Lcom/mbridge/msdk/splash/d/d;

    if-eqz v0, :cond_7

    .line 264
    iget-object v1, v6, Lcom/mbridge/msdk/splash/d/c;->e:Lcom/mbridge/msdk/out/MBridgeIds;

    const-string v2, "width or height is 0  or width or height is too small"

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/splash/d/d;->a(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V

    :cond_7
    return-void

    .line 255
    :cond_8
    iget-object v0, v6, Lcom/mbridge/msdk/splash/d/c;->k:Lcom/mbridge/msdk/out/MBSplashShowListener;

    if-eqz v0, :cond_9

    .line 256
    iget-object v1, v6, Lcom/mbridge/msdk/splash/d/c;->e:Lcom/mbridge/msdk/out/MBridgeIds;

    const-string v2, "campaignEx is vali"

    invoke-interface {v0, v1, v2}, Lcom/mbridge/msdk/out/MBSplashShowListener;->onShowFailed(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V

    :cond_9
    return-void
.end method

.method public final d(Z)V
    .locals 2

    .line 546
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->n:Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    if-eqz v0, :cond_0

    .line 547
    new-instance v1, Lcom/mbridge/msdk/splash/d/c$2;

    invoke-direct {v1, p0, p1}, Lcom/mbridge/msdk/splash/d/c$2;-><init>(Lcom/mbridge/msdk/splash/d/c;Z)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/splash/view/MBSplashWebview;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    .line 554
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->m:Lcom/mbridge/msdk/splash/view/MBSplashView;

    if-eqz v0, :cond_1

    .line 555
    new-instance v1, Lcom/mbridge/msdk/splash/d/c$3;

    invoke-direct {v1, p0, p1}, Lcom/mbridge/msdk/splash/d/c$3;-><init>(Lcom/mbridge/msdk/splash/d/c;Z)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/splash/view/MBSplashView;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    :cond_1
    return-void
.end method

.method public final e()Ljava/lang/String;
    .locals 1

    .line 197
    iget-boolean v0, p0, Lcom/mbridge/msdk/splash/d/c;->a:Z

    if-nez v0, :cond_0

    .line 198
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->h:Lcom/mbridge/msdk/splash/c/c;

    if-eqz v0, :cond_1

    .line 199
    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/c/c;->a()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 202
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->i:Lcom/mbridge/msdk/splash/c/d;

    if-eqz v0, :cond_1

    .line 203
    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/c/d;->b()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    const-string v0, ""

    return-object v0
.end method

.method public final f()V
    .locals 1

    const/4 v0, 0x1

    .line 497
    iput-boolean v0, p0, Lcom/mbridge/msdk/splash/d/c;->E:Z

    .line 498
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->D:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    if-eqz v0, :cond_0

    .line 499
    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->startCountDown()V

    :cond_0
    return-void
.end method

.method public final g()V
    .locals 4

    const/4 v0, 0x0

    .line 507
    iput-boolean v0, p0, Lcom/mbridge/msdk/splash/d/c;->E:Z

    .line 508
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->k:Lcom/mbridge/msdk/out/MBSplashShowListener;

    if-eqz v0, :cond_0

    .line 509
    new-instance v1, Lcom/mbridge/msdk/out/MBridgeIds;

    iget-object v2, p0, Lcom/mbridge/msdk/splash/d/c;->d:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/splash/d/c;->c:Ljava/lang/String;

    invoke-direct {v1, v2, v3}, Lcom/mbridge/msdk/out/MBridgeIds;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/out/MBSplashShowListener;->onZoomOutPlayFinish(Lcom/mbridge/msdk/out/MBridgeIds;)V

    .line 511
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->D:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    if-eqz v0, :cond_1

    .line 512
    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->release()V

    :cond_1
    return-void
.end method

.method public final h()V
    .locals 2

    .line 537
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->i:Lcom/mbridge/msdk/splash/c/d;

    if-eqz v0, :cond_0

    .line 538
    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/c/d;->d()V

    .line 540
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->D:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    if-eqz v0, :cond_1

    iget-boolean v1, p0, Lcom/mbridge/msdk/splash/d/c;->E:Z

    if-eqz v1, :cond_1

    .line 541
    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->reStartCountDown()V

    :cond_1
    return-void
.end method

.method public final i()V
    .locals 2

    .line 601
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->i:Lcom/mbridge/msdk/splash/c/d;

    if-eqz v0, :cond_0

    .line 602
    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/c/d;->e()V

    .line 604
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->D:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    if-eqz v0, :cond_1

    iget-boolean v1, p0, Lcom/mbridge/msdk/splash/d/c;->E:Z

    if-eqz v1, :cond_1

    .line 605
    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->pauseCountDown()V

    :cond_1
    return-void
.end method

.method public final j()V
    .locals 2

    const/4 v0, 0x0

    .line 610
    iput-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->C:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 611
    iget-object v1, p0, Lcom/mbridge/msdk/splash/d/c;->k:Lcom/mbridge/msdk/out/MBSplashShowListener;

    if-eqz v1, :cond_0

    .line 612
    iput-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->k:Lcom/mbridge/msdk/out/MBSplashShowListener;

    .line 614
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/splash/d/c;->j:Lcom/mbridge/msdk/splash/d/b;

    if-eqz v1, :cond_1

    .line 615
    iput-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->j:Lcom/mbridge/msdk/splash/d/b;

    .line 617
    :cond_1
    iget-object v1, p0, Lcom/mbridge/msdk/splash/d/c;->l:Lcom/mbridge/msdk/splash/d/d;

    if-eqz v1, :cond_2

    .line 618
    iput-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->l:Lcom/mbridge/msdk/splash/d/d;

    .line 620
    :cond_2
    iget-object v1, p0, Lcom/mbridge/msdk/splash/d/c;->h:Lcom/mbridge/msdk/splash/c/c;

    if-eqz v1, :cond_3

    .line 621
    invoke-virtual {v1}, Lcom/mbridge/msdk/splash/c/c;->b()V

    .line 623
    :cond_3
    iget-object v1, p0, Lcom/mbridge/msdk/splash/d/c;->i:Lcom/mbridge/msdk/splash/c/d;

    if-eqz v1, :cond_4

    .line 624
    invoke-virtual {v1}, Lcom/mbridge/msdk/splash/c/d;->c()V

    .line 626
    :cond_4
    iget-object v1, p0, Lcom/mbridge/msdk/splash/d/c;->A:Landroid/app/Activity;

    if-eqz v1, :cond_5

    .line 627
    iput-object v0, p0, Lcom/mbridge/msdk/splash/d/c;->A:Landroid/app/Activity;

    :cond_5
    return-void
.end method
