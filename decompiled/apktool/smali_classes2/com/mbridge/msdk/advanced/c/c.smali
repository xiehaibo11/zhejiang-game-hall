.class public final Lcom/mbridge/msdk/advanced/c/c;
.super Ljava/lang/Object;
.source "NativeAdvancedProvider.java"


# static fields
.field private static b:Ljava/lang/String; = "NativeAdvancedProvider"


# instance fields
.field private A:Z

.field private B:Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;

.field private C:Z

.field private D:Z

.field private E:Z

.field private F:Z

.field private G:Landroid/view/ViewTreeObserver$OnScrollChangedListener;

.field public a:Z

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Lcom/mbridge/msdk/out/MBridgeIds;

.field private f:Lcom/mbridge/msdk/advanced/b/a;

.field private g:Lcom/mbridge/msdk/advanced/b/b;

.field private h:Lcom/mbridge/msdk/advanced/c/b;

.field private i:Lcom/mbridge/msdk/out/NativeAdvancedAdListener;

.field private j:Lcom/mbridge/msdk/advanced/c/d;

.field private k:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

.field private l:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

.field private m:Lcom/mbridge/msdk/advanced/view/a;

.field private n:Lcom/mbridge/msdk/c/d;

.field private o:Z

.field private p:Lcom/mbridge/msdk/c/c;

.field private q:I

.field private r:Z

.field private s:I

.field private t:Z

.field private u:I

.field private v:Z

.field private w:I

.field private x:I

.field private y:Ljava/lang/Object;

.field private z:Lorg/json/JSONObject;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Landroid/app/Activity;)V
    .locals 3

    .line 113
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, -0x1

    .line 56
    iput v0, p0, Lcom/mbridge/msdk/advanced/c/c;->q:I

    const/4 v1, 0x0

    .line 57
    iput-boolean v1, p0, Lcom/mbridge/msdk/advanced/c/c;->r:Z

    .line 58
    iput v1, p0, Lcom/mbridge/msdk/advanced/c/c;->s:I

    .line 59
    iput-boolean v1, p0, Lcom/mbridge/msdk/advanced/c/c;->t:Z

    .line 60
    iput v1, p0, Lcom/mbridge/msdk/advanced/c/c;->u:I

    .line 61
    iput-boolean v1, p0, Lcom/mbridge/msdk/advanced/c/c;->v:Z

    .line 62
    iput v1, p0, Lcom/mbridge/msdk/advanced/c/c;->w:I

    .line 63
    iput v1, p0, Lcom/mbridge/msdk/advanced/c/c;->x:I

    .line 64
    new-instance v2, Ljava/lang/Object;

    invoke-direct {v2}, Ljava/lang/Object;-><init>()V

    iput-object v2, p0, Lcom/mbridge/msdk/advanced/c/c;->y:Ljava/lang/Object;

    .line 66
    iput-boolean v1, p0, Lcom/mbridge/msdk/advanced/c/c;->A:Z

    const/4 v2, 0x1

    .line 75
    iput-boolean v2, p0, Lcom/mbridge/msdk/advanced/c/c;->F:Z

    .line 76
    iput-boolean v1, p0, Lcom/mbridge/msdk/advanced/c/c;->a:Z

    .line 78
    new-instance v1, Lcom/mbridge/msdk/advanced/c/c$1;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/advanced/c/c$1;-><init>(Lcom/mbridge/msdk/advanced/c/c;)V

    iput-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->G:Landroid/view/ViewTreeObserver$OnScrollChangedListener;

    .line 114
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->d:Ljava/lang/String;

    .line 115
    iput-object p2, p0, Lcom/mbridge/msdk/advanced/c/c;->c:Ljava/lang/String;

    .line 116
    new-instance v1, Lcom/mbridge/msdk/out/MBridgeIds;

    invoke-direct {v1, p1, p2}, Lcom/mbridge/msdk/out/MBridgeIds;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    iput-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->e:Lcom/mbridge/msdk/out/MBridgeIds;

    .line 1386
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->g:Lcom/mbridge/msdk/advanced/b/b;

    if-nez p1, :cond_0

    .line 1387
    new-instance p1, Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p2

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->d:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/c/c;->c:Ljava/lang/String;

    invoke-direct {p1, p2, v1, v2}, Lcom/mbridge/msdk/advanced/b/b;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->g:Lcom/mbridge/msdk/advanced/b/b;

    .line 1388
    invoke-virtual {p1, p0}, Lcom/mbridge/msdk/advanced/b/b;->a(Lcom/mbridge/msdk/advanced/c/c;)V

    .line 1390
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->l:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    if-nez p1, :cond_2

    .line 1392
    :try_start_0
    new-instance p1, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p2

    invoke-direct {p1, p2}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->l:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 1396
    :catch_0
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->m:Lcom/mbridge/msdk/advanced/view/a;

    if-nez p1, :cond_1

    .line 1398
    :try_start_1
    new-instance p1, Lcom/mbridge/msdk/advanced/view/a;

    iget-object p2, p0, Lcom/mbridge/msdk/advanced/c/c;->c:Ljava/lang/String;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->g:Lcom/mbridge/msdk/advanced/b/b;

    invoke-virtual {v1}, Lcom/mbridge/msdk/advanced/b/b;->b()Lcom/mbridge/msdk/advanced/c/a;

    move-result-object v1

    invoke-direct {p1, p2, v1, p0}, Lcom/mbridge/msdk/advanced/view/a;-><init>(Ljava/lang/String;Lcom/mbridge/msdk/advanced/c/a;Lcom/mbridge/msdk/advanced/c/c;)V

    iput-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->m:Lcom/mbridge/msdk/advanced/view/a;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 1403
    :catch_1
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->l:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    if-eqz p1, :cond_2

    iget-object p2, p0, Lcom/mbridge/msdk/advanced/c/c;->m:Lcom/mbridge/msdk/advanced/view/a;

    if-eqz p2, :cond_2

    .line 1404
    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 1407
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->k:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    if-nez p1, :cond_4

    .line 1408
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    if-eqz p3, :cond_3

    goto :goto_0

    :cond_3
    move-object p3, p1

    .line 1412
    :goto_0
    new-instance p1, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    invoke-direct {p1, p3}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->k:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    .line 1413
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/c/c;->l:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->setAdvancedNativeWebview(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;)V

    .line 1414
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->l:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    if-eqz p1, :cond_4

    invoke-virtual {p1}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-nez p1, :cond_4

    .line 1415
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->k:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    iget-object p2, p0, Lcom/mbridge/msdk/advanced/c/c;->l:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    new-instance p3, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {p3, v0, v0}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p1, p2, p3}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 1418
    :cond_4
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->B:Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;

    if-nez p1, :cond_7

    .line 1419
    new-instance p1, Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p2

    invoke-direct {p1, p2}, Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->B:Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;

    .line 1421
    iget p1, p0, Lcom/mbridge/msdk/advanced/c/c;->w:I

    if-eqz p1, :cond_6

    iget p1, p0, Lcom/mbridge/msdk/advanced/c/c;->x:I

    if-nez p1, :cond_5

    goto :goto_1

    .line 1424
    :cond_5
    new-instance p1, Landroid/view/ViewGroup$LayoutParams;

    iget p2, p0, Lcom/mbridge/msdk/advanced/c/c;->w:I

    iget p3, p0, Lcom/mbridge/msdk/advanced/c/c;->x:I

    invoke-direct {p1, p2, p3}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    goto :goto_2

    .line 1422
    :cond_6
    :goto_1
    new-instance p1, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {p1, v0, v0}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 1426
    :goto_2
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/c/c;->B:Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1427
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->B:Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;

    invoke-virtual {p1, p0}, Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;->setProvider(Lcom/mbridge/msdk/advanced/c/c;)V

    .line 1428
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->B:Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;

    iget-object p2, p0, Lcom/mbridge/msdk/advanced/c/c;->k:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;->addView(Landroid/view/View;)V

    .line 1429
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->B:Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;

    invoke-virtual {p1}, Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;->getViewTreeObserver()Landroid/view/ViewTreeObserver;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/advanced/c/c;->G:Landroid/view/ViewTreeObserver$OnScrollChangedListener;

    invoke-virtual {p1, p2}, Landroid/view/ViewTreeObserver;->addOnScrollChangedListener(Landroid/view/ViewTreeObserver$OnScrollChangedListener;)V

    .line 1432
    :cond_7
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->p:Lcom/mbridge/msdk/c/c;

    if-nez p1, :cond_8

    .line 1433
    new-instance p1, Lcom/mbridge/msdk/c/c;

    invoke-direct {p1}, Lcom/mbridge/msdk/c/c;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->p:Lcom/mbridge/msdk/c/c;

    .line 1435
    :cond_8
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->p:Lcom/mbridge/msdk/c/c;

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

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->c:Ljava/lang/String;

    invoke-virtual {p1, p2, p3, v0, v1}, Lcom/mbridge/msdk/c/c;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 3

    .line 301
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->k:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->d:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/c/c;->c:Ljava/lang/String;

    invoke-static {v0, p1, v1, v2}, Lcom/mbridge/msdk/advanced/b/c;->a(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 305
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->g:Lcom/mbridge/msdk/advanced/b/b;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->j:Lcom/mbridge/msdk/advanced/c/d;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/b/b;->a(Lcom/mbridge/msdk/advanced/c/d;)V

    .line 306
    sget-object v0, Lcom/mbridge/msdk/advanced/c/c;->b:Ljava/lang/String;

    const-string v1, "start show process"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 308
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->g:Lcom/mbridge/msdk/advanced/b/b;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->k:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    const/4 v2, 0x1

    invoke-virtual {v0, p1, v1, v2}, Lcom/mbridge/msdk/advanced/b/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;Z)V

    return-void
.end method

.method private a(Ljava/lang/String;I)V
    .locals 5

    const/4 v0, 0x1

    .line 324
    iput-boolean v0, p0, Lcom/mbridge/msdk/advanced/c/c;->F:Z

    .line 325
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->y:Ljava/lang/Object;

    monitor-enter v1

    .line 326
    :try_start_0
    iget-boolean v2, p0, Lcom/mbridge/msdk/advanced/c/c;->o:Z

    if-eqz v2, :cond_1

    .line 327
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->h:Lcom/mbridge/msdk/advanced/c/b;

    if-eqz p1, :cond_0

    .line 328
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->h:Lcom/mbridge/msdk/advanced/c/b;

    const-string v2, "current unit is loading"

    invoke-virtual {p1, v2, p2}, Lcom/mbridge/msdk/advanced/c/b;->a(Ljava/lang/String;I)V

    .line 329
    iput-boolean v0, p0, Lcom/mbridge/msdk/advanced/c/c;->o:Z

    .line 331
    :cond_0
    monitor-exit v1

    return-void

    .line 333
    :cond_1
    iput-boolean v0, p0, Lcom/mbridge/msdk/advanced/c/c;->o:Z

    .line 334
    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 336
    iget v0, p0, Lcom/mbridge/msdk/advanced/c/c;->w:I

    if-eqz v0, :cond_a

    iget v0, p0, Lcom/mbridge/msdk/advanced/c/c;->x:I

    if-nez v0, :cond_2

    goto/16 :goto_0

    .line 343
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->k:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    if-nez v0, :cond_4

    .line 344
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->h:Lcom/mbridge/msdk/advanced/c/b;

    if-eqz p1, :cond_3

    const-string v0, "view is not ready"

    .line 345
    invoke-virtual {p1, v0, p2}, Lcom/mbridge/msdk/advanced/c/b;->a(Ljava/lang/String;I)V

    :cond_3
    return-void

    :cond_4
    const/4 v0, 0x0

    .line 352
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
    if-nez v0, :cond_6

    .line 358
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->h:Lcom/mbridge/msdk/advanced/c/b;

    if-eqz p1, :cond_5

    const-string v0, "WebView is not available"

    .line 359
    invoke-virtual {p1, v0, p2}, Lcom/mbridge/msdk/advanced/c/b;->a(Ljava/lang/String;I)V

    :cond_5
    return-void

    .line 364
    :cond_6
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->k:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->clearResStateAndRemoveClose()V

    .line 365
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/c/c;->c:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/c/b;->f(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->n:Lcom/mbridge/msdk/c/d;

    if-nez v0, :cond_7

    .line 367
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->c:Ljava/lang/String;

    invoke-static {v0}, Lcom/mbridge/msdk/c/d;->c(Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->n:Lcom/mbridge/msdk/c/d;

    .line 370
    :cond_7
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->f:Lcom/mbridge/msdk/advanced/b/a;

    if-nez v0, :cond_8

    .line 371
    new-instance v0, Lcom/mbridge/msdk/advanced/b/a;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->d:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/c/c;->c:Ljava/lang/String;

    const-wide/16 v3, 0x0

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/mbridge/msdk/advanced/b/a;-><init>(Ljava/lang/String;Ljava/lang/String;J)V

    iput-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->f:Lcom/mbridge/msdk/advanced/b/a;

    .line 373
    :cond_8
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->h:Lcom/mbridge/msdk/advanced/c/b;

    if-eqz v0, :cond_9

    .line 374
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/advanced/c/b;->a(Ljava/lang/String;)V

    .line 375
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->f:Lcom/mbridge/msdk/advanced/b/a;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->h:Lcom/mbridge/msdk/advanced/c/b;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/advanced/a/a;)V

    .line 377
    :cond_9
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->k:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->resetLoadState()V

    .line 378
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->f:Lcom/mbridge/msdk/advanced/b/a;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->k:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;)V

    .line 379
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->f:Lcom/mbridge/msdk/advanced/b/a;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->n:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/c/d;)V

    .line 380
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->f:Lcom/mbridge/msdk/advanced/b/a;

    iget v1, p0, Lcom/mbridge/msdk/advanced/c/c;->w:I

    iget v2, p0, Lcom/mbridge/msdk/advanced/c/c;->x:I

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/advanced/b/a;->a(II)V

    .line 381
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->f:Lcom/mbridge/msdk/advanced/b/a;

    iget v1, p0, Lcom/mbridge/msdk/advanced/c/c;->q:I

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/b/a;->a(I)V

    .line 382
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->f:Lcom/mbridge/msdk/advanced/b/a;

    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/advanced/b/a;->a(Ljava/lang/String;I)V

    return-void

    .line 337
    :cond_a
    :goto_0
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->h:Lcom/mbridge/msdk/advanced/c/b;

    if-eqz p1, :cond_b

    const-string v0, "width or height is 0  or width or height is too small"

    .line 338
    invoke-virtual {p1, v0, p2}, Lcom/mbridge/msdk/advanced/c/b;->a(Ljava/lang/String;I)V

    :cond_b
    return-void

    :catchall_0
    move-exception p1

    .line 334
    :try_start_2
    monitor-exit v1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    throw p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/advanced/c/c;)Z
    .locals 0

    .line 34
    iget-boolean p0, p0, Lcom/mbridge/msdk/advanced/c/c;->F:Z

    return p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/advanced/c/c;Z)Z
    .locals 0

    .line 34
    iput-boolean p1, p0, Lcom/mbridge/msdk/advanced/c/c;->F:Z

    return p1
.end method

.method static synthetic b(Lcom/mbridge/msdk/advanced/c/c;)Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/mbridge/msdk/advanced/c/c;->B:Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;

    return-object p0
.end method

.method private b(Lorg/json/JSONObject;)V
    .locals 3

    .line 126
    iget-boolean v0, p0, Lcom/mbridge/msdk/advanced/c/c;->A:Z

    if-eqz v0, :cond_0

    .line 127
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->z:Lorg/json/JSONObject;

    .line 128
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->l:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->isDestoryed()Z

    move-result v0

    if-nez v0, :cond_0

    .line 129
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->l:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    const-string v1, "setStyleList"

    const-string v2, ""

    invoke-static {v0, v1, v2, p1}, Lcom/mbridge/msdk/advanced/js/b;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method static synthetic c(Lcom/mbridge/msdk/advanced/c/c;)V
    .locals 0

    .line 34
    invoke-direct {p0}, Lcom/mbridge/msdk/advanced/c/c;->h()V

    return-void
.end method

.method private f()V
    .locals 13

    .line 235
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->k:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->d:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/c/c;->c:Ljava/lang/String;

    iget v4, p0, Lcom/mbridge/msdk/advanced/c/c;->q:I

    const-string v3, ""

    const/4 v5, 0x1

    const/4 v6, 0x1

    invoke-static/range {v0 .. v6}, Lcom/mbridge/msdk/advanced/b/c;->a(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IZZ)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 239
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->n:Lcom/mbridge/msdk/c/d;

    if-nez v1, :cond_0

    .line 240
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v1

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/advanced/c/c;->c:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/c/b;->d(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v1

    iput-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->n:Lcom/mbridge/msdk/c/d;

    .line 242
    :cond_0
    new-instance v1, Lcom/mbridge/msdk/advanced/c/d;

    iget-object v9, p0, Lcom/mbridge/msdk/advanced/c/c;->i:Lcom/mbridge/msdk/out/NativeAdvancedAdListener;

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/c/c;->n:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v2}, Lcom/mbridge/msdk/c/d;->e()D

    move-result-wide v10

    move-object v7, v1

    move-object v8, p0

    move-object v12, v0

    invoke-direct/range {v7 .. v12}, Lcom/mbridge/msdk/advanced/c/d;-><init>(Lcom/mbridge/msdk/advanced/c/c;Lcom/mbridge/msdk/out/NativeAdvancedAdListener;DLcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    iput-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->j:Lcom/mbridge/msdk/advanced/c/d;

    .line 251
    sget-object v1, Lcom/mbridge/msdk/advanced/c/c;->b:Ljava/lang/String;

    const-string v2, "show start"

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 252
    iget v1, p0, Lcom/mbridge/msdk/advanced/c/c;->w:I

    if-eqz v1, :cond_2

    iget v1, p0, Lcom/mbridge/msdk/advanced/c/c;->x:I

    if-nez v1, :cond_1

    goto :goto_0

    :cond_1
    const/4 v1, 0x0

    .line 260
    invoke-virtual {p0, v0, v1}, Lcom/mbridge/msdk/advanced/c/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Z)V

    return-void

    .line 253
    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->j:Lcom/mbridge/msdk/advanced/c/d;

    if-eqz v0, :cond_3

    .line 254
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->e:Lcom/mbridge/msdk/out/MBridgeIds;

    const-string v2, "width or height is 0  or width or height is too small"

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/advanced/c/d;->a(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V

    :cond_3
    return-void
.end method

.method private f(I)V
    .locals 4

    .line 135
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->l:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->isDestoryed()Z

    move-result v0

    if-nez v0, :cond_0

    .line 137
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->l:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    if-eqz v0, :cond_0

    .line 138
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "netstat"

    .line 139
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 140
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p1

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->l:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    const-string v2, "onNetstatChanged"

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v3, 0x2

    invoke-static {v0, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v1, v2, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 143
    sget-object v0, Lcom/mbridge/msdk/advanced/c/c;->b:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method private g()V
    .locals 1

    .line 312
    iget v0, p0, Lcom/mbridge/msdk/advanced/c/c;->q:I

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/advanced/c/c;->g(I)V

    .line 313
    iget v0, p0, Lcom/mbridge/msdk/advanced/c/c;->s:I

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/advanced/c/c;->h(I)V

    .line 314
    iget v0, p0, Lcom/mbridge/msdk/advanced/c/c;->u:I

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/advanced/c/c;->i(I)V

    .line 315
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->z:Lorg/json/JSONObject;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/advanced/c/c;->b(Lorg/json/JSONObject;)V

    .line 316
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v0

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/advanced/c/c;->f(I)V

    return-void
.end method

.method private g(I)V
    .locals 3

    .line 188
    iget-boolean v0, p0, Lcom/mbridge/msdk/advanced/c/c;->r:Z

    if-eqz v0, :cond_1

    .line 189
    iput p1, p0, Lcom/mbridge/msdk/advanced/c/c;->q:I

    .line 190
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->l:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    if-eqz p1, :cond_1

    invoke-virtual {p1}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->isDestoryed()Z

    move-result p1

    if-nez p1, :cond_1

    .line 191
    iget p1, p0, Lcom/mbridge/msdk/advanced/c/c;->q:I

    const/4 v0, 0x0

    const-string v1, ""

    const/4 v2, 0x1

    if-ne p1, v2, :cond_0

    .line 192
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->g:Lcom/mbridge/msdk/advanced/b/b;

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/advanced/b/b;->a(Z)V

    .line 193
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->l:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    const-string v2, "showCloseButton"

    invoke-static {p1, v2, v1, v0}, Lcom/mbridge/msdk/advanced/js/b;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V

    goto :goto_0

    :cond_0
    if-nez p1, :cond_1

    .line 195
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->g:Lcom/mbridge/msdk/advanced/b/b;

    const/4 v2, 0x0

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/advanced/b/b;->a(Z)V

    .line 196
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->l:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    const-string v2, "hideCloseButton"

    invoke-static {p1, v2, v1, v0}, Lcom/mbridge/msdk/advanced/js/b;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V

    :cond_1
    :goto_0
    return-void
.end method

.method private h()V
    .locals 2

    .line 497
    iget-boolean v0, p0, Lcom/mbridge/msdk/advanced/c/c;->C:Z

    if-eqz v0, :cond_3

    iget-boolean v0, p0, Lcom/mbridge/msdk/advanced/c/c;->D:Z

    if-eqz v0, :cond_3

    iget-boolean v0, p0, Lcom/mbridge/msdk/advanced/c/c;->E:Z

    if-nez v0, :cond_0

    goto :goto_0

    .line 500
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->k:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->getAdvancedNativeWebview()Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/am;->a(Landroid/view/View;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->B:Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;

    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;->getAlpha()F

    move-result v0

    const/high16 v1, 0x3f000000    # 0.5f

    cmpg-float v0, v0, v1

    if-ltz v0, :cond_3

    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->B:Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;

    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    .line 503
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->g:Lcom/mbridge/msdk/advanced/b/b;

    if-eqz v0, :cond_2

    .line 504
    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/b/b;->d()V

    .line 506
    :cond_2
    invoke-direct {p0}, Lcom/mbridge/msdk/advanced/c/c;->f()V

    :cond_3
    :goto_0
    return-void
.end method

.method private h(I)V
    .locals 3

    .line 208
    iget-boolean v0, p0, Lcom/mbridge/msdk/advanced/c/c;->t:Z

    if-eqz v0, :cond_0

    .line 209
    iput p1, p0, Lcom/mbridge/msdk/advanced/c/c;->s:I

    .line 210
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->l:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->isDestoryed()Z

    move-result v0

    if-nez v0, :cond_0

    .line 211
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->l:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const-string v1, "setVolume"

    const-string v2, "mute"

    invoke-static {v0, v1, v2, p1}, Lcom/mbridge/msdk/advanced/js/b;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method private i(I)V
    .locals 3

    .line 221
    iget-boolean v0, p0, Lcom/mbridge/msdk/advanced/c/c;->v:Z

    if-eqz v0, :cond_0

    .line 222
    iput p1, p0, Lcom/mbridge/msdk/advanced/c/c;->u:I

    .line 223
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->l:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->isDestoryed()Z

    move-result v0

    if-nez v0, :cond_0

    .line 224
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->l:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const-string v1, "setVideoPlayMode"

    const-string v2, "autoPlay"

    invoke-static {v0, v1, v2, p1}, Lcom/mbridge/msdk/advanced/js/b;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(I)V
    .locals 1

    const/4 v0, 0x1

    .line 179
    iput-boolean v0, p0, Lcom/mbridge/msdk/advanced/c/c;->r:Z

    .line 180
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/advanced/c/c;->g(I)V

    return-void
.end method

.method public final a(II)V
    .locals 1

    if-lez p1, :cond_0

    if-lez p2, :cond_0

    .line 1451
    iput p1, p0, Lcom/mbridge/msdk/advanced/c/c;->x:I

    .line 1452
    iput p2, p0, Lcom/mbridge/msdk/advanced/c/c;->w:I

    .line 1453
    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v0, p2, p1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 1454
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->B:Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    return-void
.end method

.method final a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Z)V
    .locals 6

    .line 264
    invoke-direct {p0}, Lcom/mbridge/msdk/advanced/c/c;->g()V

    .line 265
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->B:Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;

    if-eqz v0, :cond_4

    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    if-eqz p1, :cond_2

    if-eqz p2, :cond_2

    .line 270
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/c/c;->n:Lcom/mbridge/msdk/c/d;

    if-nez p2, :cond_1

    .line 271
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object p2

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->c:Ljava/lang/String;

    invoke-virtual {p2, v0, v1}, Lcom/mbridge/msdk/c/b;->d(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object p2

    iput-object p2, p0, Lcom/mbridge/msdk/advanced/c/c;->n:Lcom/mbridge/msdk/c/d;

    .line 273
    :cond_1
    new-instance p2, Lcom/mbridge/msdk/advanced/c/d;

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/c/c;->i:Lcom/mbridge/msdk/out/NativeAdvancedAdListener;

    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->n:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/d;->e()D

    move-result-wide v3

    move-object v0, p2

    move-object v1, p0

    move-object v5, p1

    invoke-direct/range {v0 .. v5}, Lcom/mbridge/msdk/advanced/c/d;-><init>(Lcom/mbridge/msdk/advanced/c/c;Lcom/mbridge/msdk/out/NativeAdvancedAdListener;DLcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    iput-object p2, p0, Lcom/mbridge/msdk/advanced/c/c;->j:Lcom/mbridge/msdk/advanced/c/d;

    .line 277
    :cond_2
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/c/c;->g:Lcom/mbridge/msdk/advanced/b/b;

    if-nez p2, :cond_3

    .line 278
    new-instance p2, Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->d:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/c/c;->c:Ljava/lang/String;

    invoke-direct {p2, v0, v1, v2}, Lcom/mbridge/msdk/advanced/b/b;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object p2, p0, Lcom/mbridge/msdk/advanced/c/c;->g:Lcom/mbridge/msdk/advanced/b/b;

    .line 279
    invoke-virtual {p2, p0}, Lcom/mbridge/msdk/advanced/b/b;->a(Lcom/mbridge/msdk/advanced/c/c;)V

    .line 283
    :cond_3
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/advanced/c/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    :cond_4
    :goto_0
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/out/NativeAdvancedAdListener;)V
    .locals 0

    .line 153
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->i:Lcom/mbridge/msdk/out/NativeAdvancedAdListener;

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 2

    .line 157
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 158
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->i:Lcom/mbridge/msdk/out/NativeAdvancedAdListener;

    if-eqz p1, :cond_1

    .line 159
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->e:Lcom/mbridge/msdk/out/MBridgeIds;

    const-string v1, "bid  token is null or empty"

    invoke-interface {p1, v0, v1}, Lcom/mbridge/msdk/out/NativeAdvancedAdListener;->onLoadFailed(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V

    goto :goto_0

    .line 162
    :cond_0
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/advanced/c/c;->b(Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final a(Lorg/json/JSONObject;)V
    .locals 1

    const/4 v0, 0x1

    .line 121
    iput-boolean v0, p0, Lcom/mbridge/msdk/advanced/c/c;->A:Z

    .line 122
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/advanced/c/c;->b(Lorg/json/JSONObject;)V

    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 105
    iput-boolean p1, p0, Lcom/mbridge/msdk/advanced/c/c;->o:Z

    return-void
.end method

.method public final a()Z
    .locals 1

    .line 101
    iget-boolean v0, p0, Lcom/mbridge/msdk/advanced/c/c;->o:Z

    return v0
.end method

.method public final b()Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;
    .locals 1

    .line 110
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->B:Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;

    return-object v0
.end method

.method public final b(I)V
    .locals 1

    const/4 v0, 0x1

    .line 203
    iput-boolean v0, p0, Lcom/mbridge/msdk/advanced/c/c;->t:Z

    .line 204
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/advanced/c/c;->h(I)V

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 2

    .line 167
    new-instance v0, Lcom/mbridge/msdk/advanced/c/b;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->e:Lcom/mbridge/msdk/out/MBridgeIds;

    invoke-direct {v0, p0, v1}, Lcom/mbridge/msdk/advanced/c/b;-><init>(Lcom/mbridge/msdk/advanced/c/c;Lcom/mbridge/msdk/out/MBridgeIds;)V

    iput-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->h:Lcom/mbridge/msdk/advanced/c/b;

    .line 168
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->i:Lcom/mbridge/msdk/out/NativeAdvancedAdListener;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/c/b;->a(Lcom/mbridge/msdk/out/NativeAdvancedAdListener;)V

    .line 169
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->h:Lcom/mbridge/msdk/advanced/c/b;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/advanced/c/b;->a(Ljava/lang/String;)V

    const/4 v0, 0x2

    .line 170
    invoke-direct {p0, p1, v0}, Lcom/mbridge/msdk/advanced/c/c;->a(Ljava/lang/String;I)V

    return-void
.end method

.method public final c()I
    .locals 1

    .line 149
    iget v0, p0, Lcom/mbridge/msdk/advanced/c/c;->q:I

    return v0
.end method

.method public final c(I)V
    .locals 1

    const/4 v0, 0x1

    .line 217
    iput-boolean v0, p0, Lcom/mbridge/msdk/advanced/c/c;->v:Z

    .line 218
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/advanced/c/c;->i(I)V

    return-void
.end method

.method public final c(Ljava/lang/String;)Z
    .locals 8

    .line 175
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->B:Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->k:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/c/c;->d:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/advanced/c/c;->c:Ljava/lang/String;

    iget v5, p0, Lcom/mbridge/msdk/advanced/c/c;->q:I

    const/4 v6, 0x0

    const/4 v7, 0x1

    move-object v4, p1

    invoke-static/range {v1 .. v7}, Lcom/mbridge/msdk/advanced/b/c;->a(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IZZ)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method public final d()Ljava/lang/String;
    .locals 1

    .line 288
    iget-boolean v0, p0, Lcom/mbridge/msdk/advanced/c/c;->a:Z

    if-eqz v0, :cond_0

    .line 289
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->g:Lcom/mbridge/msdk/advanced/b/b;

    if-eqz v0, :cond_1

    .line 290
    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/b/b;->a()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 293
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->f:Lcom/mbridge/msdk/advanced/b/a;

    if-eqz v0, :cond_1

    .line 294
    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/b/a;->a()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    const-string v0, ""

    return-object v0
.end method

.method public final d(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 442
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->f:Lcom/mbridge/msdk/advanced/b/a;

    if-eqz v0, :cond_0

    .line 443
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/advanced/b/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_0
    const-string p1, ""

    return-object p1
.end method

.method public final d(I)V
    .locals 2

    const/4 v0, 0x1

    if-eq p1, v0, :cond_2

    const/4 v1, 0x2

    if-eq p1, v1, :cond_1

    const/4 v1, 0x3

    if-eq p1, v1, :cond_0

    goto :goto_0

    .line 467
    :cond_0
    iput-boolean v0, p0, Lcom/mbridge/msdk/advanced/c/c;->E:Z

    goto :goto_0

    .line 464
    :cond_1
    iput-boolean v0, p0, Lcom/mbridge/msdk/advanced/c/c;->D:Z

    goto :goto_0

    .line 461
    :cond_2
    iput-boolean v0, p0, Lcom/mbridge/msdk/advanced/c/c;->C:Z

    .line 473
    :goto_0
    :try_start_0
    invoke-direct {p0}, Lcom/mbridge/msdk/advanced/c/c;->h()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public final e()V
    .locals 3

    .line 516
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->i:Lcom/mbridge/msdk/out/NativeAdvancedAdListener;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 517
    iput-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->i:Lcom/mbridge/msdk/out/NativeAdvancedAdListener;

    .line 519
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->h:Lcom/mbridge/msdk/advanced/c/b;

    if-eqz v0, :cond_1

    .line 520
    iput-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->h:Lcom/mbridge/msdk/advanced/c/b;

    .line 522
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->j:Lcom/mbridge/msdk/advanced/c/d;

    if-eqz v0, :cond_2

    .line 523
    iput-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->j:Lcom/mbridge/msdk/advanced/c/d;

    .line 525
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->f:Lcom/mbridge/msdk/advanced/b/a;

    if-eqz v0, :cond_3

    .line 526
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;)V

    .line 527
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->f:Lcom/mbridge/msdk/advanced/b/a;

    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/b/a;->b()V

    .line 529
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->g:Lcom/mbridge/msdk/advanced/b/b;

    if-eqz v0, :cond_4

    .line 530
    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/b/b;->c()V

    .line 533
    :cond_4
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->k:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    if-eqz v0, :cond_5

    .line 534
    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->destroy()V

    .line 536
    :cond_5
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/c/c;->d:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/c/c;->c:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/c/c;->d()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/common/b;->b(Ljava/lang/String;)V

    .line 537
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->m:Lcom/mbridge/msdk/advanced/view/a;

    if-eqz v0, :cond_6

    .line 538
    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/view/a;->a()V

    .line 540
    :cond_6
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->B:Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;

    if-eqz v0, :cond_7

    .line 541
    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;->getViewTreeObserver()Landroid/view/ViewTreeObserver;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/c/c;->G:Landroid/view/ViewTreeObserver$OnScrollChangedListener;

    invoke-virtual {v0, v2}, Landroid/view/ViewTreeObserver;->removeOnScrollChangedListener(Landroid/view/ViewTreeObserver$OnScrollChangedListener;)V

    .line 542
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c;->B:Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;

    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;->removeAllViews()V

    .line 543
    iput-object v1, p0, Lcom/mbridge/msdk/advanced/c/c;->B:Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;

    :cond_7
    return-void
.end method

.method public final e(I)V
    .locals 2

    const/4 v0, 0x1

    const/4 v1, 0x0

    if-eq p1, v0, :cond_2

    const/4 v0, 0x2

    if-eq p1, v0, :cond_1

    const/4 v0, 0x3

    if-eq p1, v0, :cond_0

    goto :goto_0

    .line 488
    :cond_0
    iput-boolean v1, p0, Lcom/mbridge/msdk/advanced/c/c;->E:Z

    goto :goto_0

    .line 485
    :cond_1
    iput-boolean v1, p0, Lcom/mbridge/msdk/advanced/c/c;->D:Z

    goto :goto_0

    .line 482
    :cond_2
    iput-boolean v1, p0, Lcom/mbridge/msdk/advanced/c/c;->C:Z

    .line 1510
    :goto_0
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/c/c;->g:Lcom/mbridge/msdk/advanced/b/b;

    if-eqz p1, :cond_3

    .line 1511
    invoke-virtual {p1}, Lcom/mbridge/msdk/advanced/b/b;->e()V

    :cond_3
    return-void
.end method
