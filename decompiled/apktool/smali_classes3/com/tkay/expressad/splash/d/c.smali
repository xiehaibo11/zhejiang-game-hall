.class public final Lcom/tkay/expressad/splash/d/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/a/g;


# static fields
.field private static b:Ljava/lang/String; = "SplashProvider"


# instance fields
.field private A:Landroid/content/Context;

.field private B:Z

.field private C:Lcom/tkay/expressad/foundation/d/c;

.field private D:Lcom/tkay/expressad/splash/view/TYSplashPopView;

.field private E:Z

.field private F:Z

.field public a:Z

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:I

.field private f:J

.field private g:I

.field private h:I

.field private i:Lcom/tkay/expressad/splash/c/c;

.field private j:Lcom/tkay/expressad/splash/c/d;

.field private k:Lcom/tkay/expressad/splash/d/b;

.field private l:Lcom/tkay/expressad/out/q;

.field private m:Lcom/tkay/expressad/splash/d/d;

.field private n:Lcom/tkay/expressad/splash/view/TYSplashView;

.field private o:Lcom/tkay/expressad/splash/view/TYSplashWebview;

.field private p:Landroid/view/ViewGroup;

.field private q:Landroid/view/View;

.field private r:Lcom/tkay/expressad/d/c;

.field private s:Z

.field private t:Landroid/view/ViewGroup;

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

.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 89
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x5

    .line 39
    iput v0, p0, Lcom/tkay/expressad/splash/d/c;->e:I

    const/4 v0, 0x1

    .line 58
    iput v0, p0, Lcom/tkay/expressad/splash/d/c;->v:I

    .line 59
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/k;->e(Landroid/content/Context;)I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/splash/d/c;->w:I

    .line 60
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/k;->f(Landroid/content/Context;)I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/splash/d/c;->x:I

    .line 61
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/splash/d/c;->y:Ljava/lang/Object;

    .line 62
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/splash/d/c;->z:Ljava/lang/Object;

    const/4 v0, 0x0

    .line 63
    iput-boolean v0, p0, Lcom/tkay/expressad/splash/d/c;->a:Z

    .line 69
    iput-boolean v0, p0, Lcom/tkay/expressad/splash/d/c;->E:Z

    .line 71
    iput-boolean v0, p0, Lcom/tkay/expressad/splash/d/c;->F:Z

    .line 90
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    iget v0, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    iput v0, p0, Lcom/tkay/expressad/splash/d/c;->w:I

    .line 91
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    iget v0, v0, Landroid/util/DisplayMetrics;->heightPixels:I

    iput v0, p0, Lcom/tkay/expressad/splash/d/c;->x:I

    .line 92
    iput-object p2, p0, Lcom/tkay/expressad/splash/d/c;->d:Ljava/lang/String;

    .line 93
    iput-object p3, p0, Lcom/tkay/expressad/splash/d/c;->c:Ljava/lang/String;

    .line 95
    iput-object p1, p0, Lcom/tkay/expressad/splash/d/c;->A:Landroid/content/Context;

    .line 1364
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->j:Lcom/tkay/expressad/splash/c/d;

    if-nez v0, :cond_1

    if-eqz p1, :cond_0

    .line 1366
    new-instance v0, Lcom/tkay/expressad/splash/c/d;

    invoke-direct {v0, p1, p2, p3}, Lcom/tkay/expressad/splash/c/d;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/d/c;->j:Lcom/tkay/expressad/splash/c/d;

    goto :goto_0

    .line 1368
    :cond_0
    new-instance p2, Lcom/tkay/expressad/splash/c/d;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p3

    invoke-virtual {p3}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p3

    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->d:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/expressad/splash/d/c;->c:Ljava/lang/String;

    invoke-direct {p2, p3, v0, v1}, Lcom/tkay/expressad/splash/c/d;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object p2, p0, Lcom/tkay/expressad/splash/d/c;->j:Lcom/tkay/expressad/splash/c/d;

    .line 1371
    :cond_1
    :goto_0
    iget-object p2, p0, Lcom/tkay/expressad/splash/d/c;->o:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    if-nez p2, :cond_3

    if-eqz p1, :cond_2

    .line 1374
    :try_start_0
    new-instance p2, Lcom/tkay/expressad/splash/view/TYSplashWebview;

    invoke-direct {p2, p1}, Lcom/tkay/expressad/splash/view/TYSplashWebview;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/tkay/expressad/splash/d/c;->o:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    goto :goto_1

    .line 1380
    :cond_2
    new-instance p2, Lcom/tkay/expressad/splash/view/TYSplashWebview;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p3

    invoke-virtual {p3}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p3

    invoke-direct {p2, p3}, Lcom/tkay/expressad/splash/view/TYSplashWebview;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/tkay/expressad/splash/d/c;->o:Lcom/tkay/expressad/splash/view/TYSplashWebview;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 1385
    :catch_0
    :goto_1
    iget-object p2, p0, Lcom/tkay/expressad/splash/d/c;->o:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    if-eqz p2, :cond_3

    .line 1386
    new-instance p3, Lcom/tkay/expressad/splash/view/b;

    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->c:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/expressad/splash/d/c;->j:Lcom/tkay/expressad/splash/c/d;

    invoke-virtual {v1}, Lcom/tkay/expressad/splash/c/d;->a()Lcom/tkay/expressad/splash/d/a;

    move-result-object v1

    invoke-direct {p3, v0, v1}, Lcom/tkay/expressad/splash/view/b;-><init>(Ljava/lang/String;Lcom/tkay/expressad/splash/d/a;)V

    invoke-virtual {p2, p3}, Lcom/tkay/expressad/splash/view/TYSplashWebview;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 1389
    :cond_3
    iget-object p2, p0, Lcom/tkay/expressad/splash/d/c;->n:Lcom/tkay/expressad/splash/view/TYSplashView;

    if-nez p2, :cond_5

    if-eqz p1, :cond_4

    .line 1391
    new-instance p2, Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-direct {p2, p1}, Lcom/tkay/expressad/splash/view/TYSplashView;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/tkay/expressad/splash/d/c;->n:Lcom/tkay/expressad/splash/view/TYSplashView;

    goto :goto_2

    .line 1393
    :cond_4
    new-instance p1, Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p2

    invoke-direct {p1, p2}, Lcom/tkay/expressad/splash/view/TYSplashView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/expressad/splash/d/c;->n:Lcom/tkay/expressad/splash/view/TYSplashView;

    .line 1396
    :goto_2
    iget-object p1, p0, Lcom/tkay/expressad/splash/d/c;->n:Lcom/tkay/expressad/splash/view/TYSplashView;

    iget-object p2, p0, Lcom/tkay/expressad/splash/d/c;->o:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/splash/view/TYSplashView;->setSplashWebview(Lcom/tkay/expressad/splash/view/TYSplashWebview;)V

    :cond_5
    return-void
.end method

.method private a(Lcom/tkay/expressad/out/t;)Landroid/view/ViewGroup;
    .locals 4

    .line 432
    new-instance v0, Lcom/tkay/expressad/splash/view/TYSplashPopView$a;

    iget-object v1, p0, Lcom/tkay/expressad/splash/d/c;->d:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/splash/d/c;->c:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/tkay/expressad/out/t;->a()I

    move-result p1

    iget-object v3, p0, Lcom/tkay/expressad/splash/d/c;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-direct {v0, v1, v2, p1, v3}, Lcom/tkay/expressad/splash/view/TYSplashPopView$a;-><init>(Ljava/lang/String;Ljava/lang/String;ILcom/tkay/expressad/foundation/d/c;)V

    .line 433
    new-instance p1, Lcom/tkay/expressad/splash/view/TYSplashPopView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/splash/d/c;->m:Lcom/tkay/expressad/splash/d/d;

    invoke-direct {p1, v1, v0, v2}, Lcom/tkay/expressad/splash/view/TYSplashPopView;-><init>(Landroid/content/Context;Lcom/tkay/expressad/splash/view/TYSplashPopView$a;Lcom/tkay/expressad/splash/d/d;)V

    iput-object p1, p0, Lcom/tkay/expressad/splash/d/c;->D:Lcom/tkay/expressad/splash/view/TYSplashPopView;

    return-object p1
.end method

.method private a(II)V
    .locals 5

    .line 462
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/k;->e(Landroid/content/Context;)I

    move-result v0

    .line 463
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/k;->f(Landroid/content/Context;)I

    move-result v1

    .line 464
    iget v2, p0, Lcom/tkay/expressad/splash/d/c;->v:I

    const/4 v3, 0x0

    const/4 v4, 0x1

    if-ne v2, v4, :cond_1

    mul-int/lit8 p1, p2, 0x4

    if-lt v1, p1, :cond_0

    sub-int/2addr v1, p2

    .line 466
    iput v1, p0, Lcom/tkay/expressad/splash/d/c;->x:I

    .line 467
    iput v0, p0, Lcom/tkay/expressad/splash/d/c;->w:I

    return-void

    .line 469
    :cond_0
    iput v3, p0, Lcom/tkay/expressad/splash/d/c;->x:I

    iput v3, p0, Lcom/tkay/expressad/splash/d/c;->w:I

    return-void

    :cond_1
    const/4 p2, 0x2

    if-ne v2, p2, :cond_3

    mul-int/lit8 p2, p1, 0x4

    if-lt v0, p2, :cond_2

    sub-int/2addr v0, p1

    .line 473
    iput v0, p0, Lcom/tkay/expressad/splash/d/c;->w:I

    .line 474
    iput v1, p0, Lcom/tkay/expressad/splash/d/c;->x:I

    return-void

    .line 476
    :cond_2
    iput v3, p0, Lcom/tkay/expressad/splash/d/c;->x:I

    iput v3, p0, Lcom/tkay/expressad/splash/d/c;->w:I

    :cond_3
    return-void
.end method

.method private a(J)V
    .locals 0

    .line 100
    iput-wide p1, p0, Lcom/tkay/expressad/splash/d/c;->f:J

    return-void
.end method

.method private a(Landroid/content/Context;)V
    .locals 4

    .line 364
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->j:Lcom/tkay/expressad/splash/c/d;

    if-nez v0, :cond_1

    if-eqz p1, :cond_0

    .line 366
    new-instance v0, Lcom/tkay/expressad/splash/c/d;

    iget-object v1, p0, Lcom/tkay/expressad/splash/d/c;->d:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/splash/d/c;->c:Ljava/lang/String;

    invoke-direct {v0, p1, v1, v2}, Lcom/tkay/expressad/splash/c/d;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/d/c;->j:Lcom/tkay/expressad/splash/c/d;

    goto :goto_0

    .line 368
    :cond_0
    new-instance v0, Lcom/tkay/expressad/splash/c/d;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/splash/d/c;->d:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/splash/d/c;->c:Ljava/lang/String;

    invoke-direct {v0, v1, v2, v3}, Lcom/tkay/expressad/splash/c/d;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/d/c;->j:Lcom/tkay/expressad/splash/c/d;

    .line 371
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->o:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    if-nez v0, :cond_3

    if-eqz p1, :cond_2

    .line 374
    :try_start_0
    new-instance v0, Lcom/tkay/expressad/splash/view/TYSplashWebview;

    invoke-direct {v0, p1}, Lcom/tkay/expressad/splash/view/TYSplashWebview;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/d/c;->o:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    goto :goto_1

    .line 380
    :cond_2
    new-instance v0, Lcom/tkay/expressad/splash/view/TYSplashWebview;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/expressad/splash/view/TYSplashWebview;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/d/c;->o:Lcom/tkay/expressad/splash/view/TYSplashWebview;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 385
    :catch_0
    :goto_1
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->o:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    if-eqz v0, :cond_3

    .line 386
    new-instance v1, Lcom/tkay/expressad/splash/view/b;

    iget-object v2, p0, Lcom/tkay/expressad/splash/d/c;->c:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/splash/d/c;->j:Lcom/tkay/expressad/splash/c/d;

    invoke-virtual {v3}, Lcom/tkay/expressad/splash/c/d;->a()Lcom/tkay/expressad/splash/d/a;

    move-result-object v3

    invoke-direct {v1, v2, v3}, Lcom/tkay/expressad/splash/view/b;-><init>(Ljava/lang/String;Lcom/tkay/expressad/splash/d/a;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/TYSplashWebview;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 389
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->n:Lcom/tkay/expressad/splash/view/TYSplashView;

    if-nez v0, :cond_5

    if-eqz p1, :cond_4

    .line 391
    new-instance v0, Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-direct {v0, p1}, Lcom/tkay/expressad/splash/view/TYSplashView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/d/c;->n:Lcom/tkay/expressad/splash/view/TYSplashView;

    goto :goto_2

    .line 393
    :cond_4
    new-instance p1, Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-direct {p1, v0}, Lcom/tkay/expressad/splash/view/TYSplashView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/expressad/splash/d/c;->n:Lcom/tkay/expressad/splash/view/TYSplashView;

    .line 396
    :goto_2
    iget-object p1, p0, Lcom/tkay/expressad/splash/d/c;->n:Lcom/tkay/expressad/splash/view/TYSplashView;

    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->o:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->setSplashWebview(Lcom/tkay/expressad/splash/view/TYSplashWebview;)V

    :cond_5
    return-void
.end method

.method private a(Landroid/view/View;Landroid/widget/RelativeLayout$LayoutParams;)V
    .locals 2

    .line 406
    iput-object p1, p0, Lcom/tkay/expressad/splash/d/c;->q:Landroid/view/View;

    if-eqz p1, :cond_0

    .line 408
    iget v0, p2, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    iget v1, p2, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    invoke-direct {p0, v0, v1}, Lcom/tkay/expressad/splash/d/c;->a(II)V

    .line 409
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->n:Lcom/tkay/expressad/splash/view/TYSplashView;

    if-eqz v0, :cond_0

    .line 410
    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/splash/view/TYSplashView;->setIconVg(Landroid/view/View;Landroid/widget/RelativeLayout$LayoutParams;)V

    :cond_0
    return-void
.end method

.method private a(Lcom/tkay/expressad/foundation/d/c;IZ)V
    .locals 2

    .line 279
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->n:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-static {v0, p1}, Lcom/tkay/expressad/splash/c/b;->a(Lcom/tkay/expressad/splash/view/TYSplashView;Lcom/tkay/expressad/foundation/d/c;)Z

    move-result v0

    if-nez v0, :cond_2

    if-lez p2, :cond_0

    .line 281
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->j:Lcom/tkay/expressad/splash/c/d;

    iget-object v0, v0, Lcom/tkay/expressad/splash/c/d;->a:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/splash/d/c$1;

    invoke-direct {v1, p0, p1, p2, p3}, Lcom/tkay/expressad/splash/d/c$1;-><init>(Lcom/tkay/expressad/splash/d/c;Lcom/tkay/expressad/foundation/d/c;IZ)V

    const-wide/16 p1, 0x1

    invoke-virtual {v0, v1, p1, p2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void

    .line 288
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/splash/d/c;->m:Lcom/tkay/expressad/splash/d/d;

    if-eqz p1, :cond_1

    const-string p2, "campaignEx is not ready"

    .line 289
    invoke-virtual {p1, p2}, Lcom/tkay/expressad/splash/d/d;->a(Ljava/lang/String;)V

    :cond_1
    return-void

    .line 294
    :cond_2
    invoke-direct {p0}, Lcom/tkay/expressad/splash/d/c;->l()V

    .line 300
    iget-object p2, p0, Lcom/tkay/expressad/splash/d/c;->j:Lcom/tkay/expressad/splash/c/d;

    iget p3, p0, Lcom/tkay/expressad/splash/d/c;->e:I

    invoke-virtual {p2, p3}, Lcom/tkay/expressad/splash/c/d;->a(I)V

    .line 301
    iget-object p2, p0, Lcom/tkay/expressad/splash/d/c;->j:Lcom/tkay/expressad/splash/c/d;

    iget-object p3, p0, Lcom/tkay/expressad/splash/d/c;->t:Landroid/view/ViewGroup;

    invoke-virtual {p2, p3}, Lcom/tkay/expressad/splash/c/d;->a(Landroid/view/ViewGroup;)V

    .line 302
    iget-object p2, p0, Lcom/tkay/expressad/splash/d/c;->j:Lcom/tkay/expressad/splash/c/d;

    iget-object p3, p0, Lcom/tkay/expressad/splash/d/c;->m:Lcom/tkay/expressad/splash/d/d;

    invoke-virtual {p2, p3}, Lcom/tkay/expressad/splash/c/d;->a(Lcom/tkay/expressad/splash/d/d;)V

    .line 304
    iget-object p2, p0, Lcom/tkay/expressad/splash/d/c;->p:Landroid/view/ViewGroup;

    if-eqz p2, :cond_3

    .line 305
    invoke-virtual {p2}, Landroid/view/ViewGroup;->removeAllViews()V

    .line 306
    iget-object p2, p0, Lcom/tkay/expressad/splash/d/c;->n:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-static {p2}, Lcom/tkay/core/common/l/u;->a(Landroid/view/View;)V

    .line 307
    iget-object p2, p0, Lcom/tkay/expressad/splash/d/c;->p:Landroid/view/ViewGroup;

    iget-object p3, p0, Lcom/tkay/expressad/splash/d/c;->n:Lcom/tkay/expressad/splash/view/TYSplashView;

    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p2, p3, v0}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 309
    :cond_3
    iget-object p2, p0, Lcom/tkay/expressad/splash/d/c;->j:Lcom/tkay/expressad/splash/c/d;

    iget-boolean p3, p0, Lcom/tkay/expressad/splash/d/c;->u:Z

    invoke-virtual {p2, p3}, Lcom/tkay/expressad/splash/c/d;->a(Z)V

    .line 310
    iget-object p2, p0, Lcom/tkay/expressad/splash/d/c;->j:Lcom/tkay/expressad/splash/c/d;

    iget-object p3, p0, Lcom/tkay/expressad/splash/d/c;->n:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {p2, p1, p3}, Lcom/tkay/expressad/splash/c/d;->a(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/splash/view/TYSplashView;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/splash/d/c;Lcom/tkay/expressad/foundation/d/c;IZ)V
    .locals 0

    .line 33
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/expressad/splash/d/c;->a(Lcom/tkay/expressad/foundation/d/c;IZ)V

    return-void
.end method

.method private a(Ljava/lang/String;Landroid/view/ViewGroup;)V
    .locals 0

    .line 194
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 195
    iget-object p1, p0, Lcom/tkay/expressad/splash/d/c;->l:Lcom/tkay/expressad/out/q;

    if-eqz p1, :cond_1

    const-string p2, "token is null or empty"

    .line 196
    invoke-interface {p1, p2}, Lcom/tkay/expressad/out/q;->a(Ljava/lang/String;)V

    return-void

    .line 199
    :cond_0
    invoke-virtual {p0, p2}, Lcom/tkay/expressad/splash/d/c;->a(Landroid/view/ViewGroup;)V

    :cond_1
    return-void
.end method

.method private b(I)V
    .locals 0

    .line 86
    iput p1, p0, Lcom/tkay/expressad/splash/d/c;->v:I

    return-void
.end method

.method private b(Landroid/view/ViewGroup;)V
    .locals 0

    .line 74
    iput-object p1, p0, Lcom/tkay/expressad/splash/d/c;->t:Landroid/view/ViewGroup;

    return-void
.end method

.method private c(Z)V
    .locals 0

    .line 423
    iput-boolean p1, p0, Lcom/tkay/expressad/splash/d/c;->B:Z

    return-void
.end method

.method private h()Ljava/lang/String;
    .locals 1

    .line 181
    iget-boolean v0, p0, Lcom/tkay/expressad/splash/d/c;->a:Z

    if-nez v0, :cond_0

    .line 182
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->i:Lcom/tkay/expressad/splash/c/c;

    if-eqz v0, :cond_1

    .line 183
    invoke-virtual {v0}, Lcom/tkay/expressad/splash/c/c;->a()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 186
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->j:Lcom/tkay/expressad/splash/c/d;

    if-eqz v0, :cond_1

    .line 187
    invoke-virtual {v0}, Lcom/tkay/expressad/splash/c/d;->b()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    const-string v0, ""

    return-object v0
.end method

.method private i()V
    .locals 1

    const/4 v0, 0x1

    .line 442
    iput-boolean v0, p0, Lcom/tkay/expressad/splash/d/c;->E:Z

    .line 443
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->D:Lcom/tkay/expressad/splash/view/TYSplashPopView;

    if-eqz v0, :cond_0

    .line 444
    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->startCountDown()V

    :cond_0
    return-void
.end method

.method private j()V
    .locals 1

    const/4 v0, 0x0

    .line 452
    iput-boolean v0, p0, Lcom/tkay/expressad/splash/d/c;->E:Z

    .line 456
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->D:Lcom/tkay/expressad/splash/view/TYSplashPopView;

    if-eqz v0, :cond_0

    .line 457
    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->release()V

    :cond_0
    return-void
.end method

.method private k()V
    .locals 2

    .line 482
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->j:Lcom/tkay/expressad/splash/c/d;

    if-eqz v0, :cond_0

    .line 483
    invoke-virtual {v0}, Lcom/tkay/expressad/splash/c/d;->d()V

    .line 485
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->D:Lcom/tkay/expressad/splash/view/TYSplashPopView;

    if-eqz v0, :cond_1

    iget-boolean v1, p0, Lcom/tkay/expressad/splash/d/c;->E:Z

    if-eqz v1, :cond_1

    .line 486
    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->reStartCountDown()V

    :cond_1
    return-void
.end method

.method private l()V
    .locals 2

    .line 491
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->o:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    if-eqz v0, :cond_0

    .line 492
    new-instance v1, Lcom/tkay/expressad/splash/d/c$2;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/splash/d/c$2;-><init>(Lcom/tkay/expressad/splash/d/c;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/TYSplashWebview;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    .line 499
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->n:Lcom/tkay/expressad/splash/view/TYSplashView;

    if-eqz v0, :cond_1

    .line 500
    new-instance v1, Lcom/tkay/expressad/splash/d/c$3;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/splash/d/c$3;-><init>(Lcom/tkay/expressad/splash/d/c;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/TYSplashView;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    :cond_1
    return-void
.end method

.method private m()V
    .locals 2

    .line 510
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->j:Lcom/tkay/expressad/splash/c/d;

    if-eqz v0, :cond_0

    .line 511
    invoke-virtual {v0}, Lcom/tkay/expressad/splash/c/d;->e()V

    .line 513
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->D:Lcom/tkay/expressad/splash/view/TYSplashPopView;

    if-eqz v0, :cond_1

    iget-boolean v1, p0, Lcom/tkay/expressad/splash/d/c;->E:Z

    if-eqz v1, :cond_1

    .line 514
    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->pauseCountDown()V

    :cond_1
    return-void
.end method


# virtual methods
.method public final a(I)V
    .locals 0

    .line 169
    iput p1, p0, Lcom/tkay/expressad/splash/d/c;->e:I

    return-void
.end method

.method public final a(Landroid/view/ViewGroup;)V
    .locals 7

    .line 205
    iput-object p1, p0, Lcom/tkay/expressad/splash/d/c;->p:Landroid/view/ViewGroup;

    .line 206
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->n:Lcom/tkay/expressad/splash/view/TYSplashView;

    if-eqz v0, :cond_0

    .line 207
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/splash/view/TYSplashView;->setDevContainer(Landroid/view/ViewGroup;)V

    .line 211
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/splash/d/c;->i:Lcom/tkay/expressad/splash/c/c;

    if-eqz p1, :cond_1

    invoke-virtual {p1}, Lcom/tkay/expressad/splash/c/c;->c()Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    goto :goto_0

    :cond_1
    const/4 p1, 0x0

    :goto_0
    if-eqz p1, :cond_5

    .line 214
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->r:Lcom/tkay/expressad/d/c;

    if-nez v0, :cond_2

    .line 215
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/d/c;->c:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/tkay/expressad/d/b;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/splash/d/c;->r:Lcom/tkay/expressad/d/c;

    .line 217
    :cond_2
    new-instance v6, Lcom/tkay/expressad/splash/d/d;

    iget-object v2, p0, Lcom/tkay/expressad/splash/d/c;->l:Lcom/tkay/expressad/out/q;

    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->r:Lcom/tkay/expressad/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->a()D

    move-result-wide v3

    move-object v0, v6

    move-object v1, p0

    move-object v5, p1

    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/splash/d/d;-><init>(Lcom/tkay/expressad/splash/d/c;Lcom/tkay/expressad/out/q;DLcom/tkay/expressad/foundation/d/c;)V

    iput-object v6, p0, Lcom/tkay/expressad/splash/d/c;->m:Lcom/tkay/expressad/splash/d/d;

    .line 232
    iget v0, p0, Lcom/tkay/expressad/splash/d/c;->e:I

    const/4 v1, 0x2

    if-lt v0, v1, :cond_3

    const/16 v1, 0xa

    if-le v0, v1, :cond_4

    :cond_3
    const/4 v0, 0x5

    .line 237
    iput v0, p0, Lcom/tkay/expressad/splash/d/c;->e:I

    :cond_4
    const/4 v0, 0x0

    .line 241
    invoke-virtual {p0, p1, v0}, Lcom/tkay/expressad/splash/d/c;->a(Lcom/tkay/expressad/foundation/d/c;Z)V

    return-void

    .line 219
    :cond_5
    iget-object p1, p0, Lcom/tkay/expressad/splash/d/c;->l:Lcom/tkay/expressad/out/q;

    if-eqz p1, :cond_6

    const-string v0, "campaignEx is vali"

    .line 220
    invoke-interface {p1, v0}, Lcom/tkay/expressad/out/q;->a(Ljava/lang/String;)V

    :cond_6
    return-void
.end method

.method final a(Lcom/tkay/expressad/foundation/d/c;Z)V
    .locals 7

    if-eqz p1, :cond_1

    if-eqz p2, :cond_1

    .line 248
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->r:Lcom/tkay/expressad/d/c;

    if-nez v0, :cond_0

    .line 249
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/d/c;->c:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/tkay/expressad/d/b;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/splash/d/c;->r:Lcom/tkay/expressad/d/c;

    .line 251
    :cond_0
    new-instance v0, Lcom/tkay/expressad/splash/d/d;

    iget-object v3, p0, Lcom/tkay/expressad/splash/d/c;->l:Lcom/tkay/expressad/out/q;

    iget-object v1, p0, Lcom/tkay/expressad/splash/d/c;->r:Lcom/tkay/expressad/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/d/c;->a()D

    move-result-wide v4

    move-object v1, v0

    move-object v2, p0

    move-object v6, p1

    invoke-direct/range {v1 .. v6}, Lcom/tkay/expressad/splash/d/d;-><init>(Lcom/tkay/expressad/splash/d/c;Lcom/tkay/expressad/out/q;DLcom/tkay/expressad/foundation/d/c;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/d/c;->m:Lcom/tkay/expressad/splash/d/d;

    .line 253
    :cond_1
    iput-object p1, p0, Lcom/tkay/expressad/splash/d/c;->C:Lcom/tkay/expressad/foundation/d/c;

    .line 263
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->p:Landroid/view/ViewGroup;

    if-nez v0, :cond_3

    .line 264
    iget-object p1, p0, Lcom/tkay/expressad/splash/d/c;->m:Lcom/tkay/expressad/splash/d/d;

    if-eqz p1, :cond_2

    const-string p2, "container is null"

    .line 265
    invoke-virtual {p1, p2}, Lcom/tkay/expressad/splash/d/d;->a(Ljava/lang/String;)V

    :cond_2
    return-void

    .line 269
    :cond_3
    iget-object v1, p0, Lcom/tkay/expressad/splash/d/c;->j:Lcom/tkay/expressad/splash/c/d;

    if-nez v1, :cond_4

    .line 270
    new-instance v1, Lcom/tkay/expressad/splash/c/d;

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v2, p0, Lcom/tkay/expressad/splash/d/c;->d:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/splash/d/c;->c:Ljava/lang/String;

    invoke-direct {v1, v0, v2, v3}, Lcom/tkay/expressad/splash/c/d;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v1, p0, Lcom/tkay/expressad/splash/d/c;->j:Lcom/tkay/expressad/splash/c/d;

    :cond_4
    const/4 v0, 0x0

    .line 273
    invoke-direct {p0, p1, v0, p2}, Lcom/tkay/expressad/splash/d/c;->a(Lcom/tkay/expressad/foundation/d/c;IZ)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/d;)V
    .locals 7

    .line 317
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->y:Ljava/lang/Object;

    monitor-enter v0

    .line 318
    :try_start_0
    iget-boolean v1, p0, Lcom/tkay/expressad/splash/d/c;->s:Z

    const/4 v2, 0x1

    if-eqz v1, :cond_1

    .line 319
    iget-object p1, p0, Lcom/tkay/expressad/splash/d/c;->k:Lcom/tkay/expressad/splash/d/b;

    if-eqz p1, :cond_0

    .line 320
    iget-object p1, p0, Lcom/tkay/expressad/splash/d/c;->k:Lcom/tkay/expressad/splash/d/b;

    const-string v1, "current unit is loading"

    invoke-virtual {p1, v1}, Lcom/tkay/expressad/splash/d/b;->a(Ljava/lang/String;)V

    .line 321
    iput-boolean v2, p0, Lcom/tkay/expressad/splash/d/c;->s:Z

    .line 323
    :cond_0
    monitor-exit v0

    return-void

    .line 325
    :cond_1
    iput-boolean v2, p0, Lcom/tkay/expressad/splash/d/c;->s:Z

    .line 326
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 342
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->n:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->clearResState()V

    .line 2270
    new-instance v0, Lcom/tkay/expressad/d/c;

    invoke-direct {v0}, Lcom/tkay/expressad/d/c;-><init>()V

    .line 343
    iput-object v0, p0, Lcom/tkay/expressad/splash/d/c;->r:Lcom/tkay/expressad/d/c;

    .line 345
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->i:Lcom/tkay/expressad/splash/c/c;

    if-nez v0, :cond_2

    .line 346
    new-instance v0, Lcom/tkay/expressad/splash/c/c;

    iget-object v1, p0, Lcom/tkay/expressad/splash/d/c;->d:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/splash/d/c;->c:Ljava/lang/String;

    iget-wide v3, p0, Lcom/tkay/expressad/splash/d/c;->f:J

    const-wide/16 v5, 0x3e8

    mul-long/2addr v3, v5

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/tkay/expressad/splash/c/c;-><init>(Ljava/lang/String;Ljava/lang/String;J)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/d/c;->i:Lcom/tkay/expressad/splash/c/c;

    .line 348
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->k:Lcom/tkay/expressad/splash/d/b;

    if-eqz v0, :cond_3

    const-string v1, ""

    .line 349
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/d/b;->b(Ljava/lang/String;)V

    .line 350
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->i:Lcom/tkay/expressad/splash/c/c;

    iget-object v1, p0, Lcom/tkay/expressad/splash/d/c;->k:Lcom/tkay/expressad/splash/d/b;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/c/c;->a(Lcom/tkay/expressad/splash/b/c;)V

    .line 352
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->n:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->resetLoadState()V

    .line 353
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->i:Lcom/tkay/expressad/splash/c/c;

    iget v1, p0, Lcom/tkay/expressad/splash/d/c;->e:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/c/c;->b(I)V

    .line 354
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->i:Lcom/tkay/expressad/splash/c/c;

    iget-object v1, p0, Lcom/tkay/expressad/splash/d/c;->n:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/c/c;->a(Lcom/tkay/expressad/splash/view/TYSplashView;)V

    .line 355
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->i:Lcom/tkay/expressad/splash/c/c;

    iget-object v1, p0, Lcom/tkay/expressad/splash/d/c;->r:Lcom/tkay/expressad/d/c;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/c/c;->a(Lcom/tkay/expressad/d/c;)V

    .line 356
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->i:Lcom/tkay/expressad/splash/c/c;

    iget v1, p0, Lcom/tkay/expressad/splash/d/c;->w:I

    iget v2, p0, Lcom/tkay/expressad/splash/d/c;->x:I

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/splash/c/c;->a(II)V

    .line 357
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->i:Lcom/tkay/expressad/splash/c/c;

    iget-boolean v1, p0, Lcom/tkay/expressad/splash/d/c;->u:Z

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/c/c;->b(Z)V

    .line 358
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->i:Lcom/tkay/expressad/splash/c/c;

    iget-boolean v1, p0, Lcom/tkay/expressad/splash/d/c;->F:Z

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/c/c;->a(Z)V

    .line 359
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->i:Lcom/tkay/expressad/splash/c/c;

    iget v1, p0, Lcom/tkay/expressad/splash/d/c;->v:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/c/c;->a(I)V

    .line 360
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->i:Lcom/tkay/expressad/splash/c/c;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/splash/c/c;->a(Lcom/tkay/expressad/foundation/d/d;)V

    return-void

    :catchall_0
    move-exception p1

    .line 326
    monitor-exit v0

    throw p1
.end method

.method public final a(Lcom/tkay/expressad/out/p;)V
    .locals 1

    .line 117
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->k:Lcom/tkay/expressad/splash/d/b;

    if-nez v0, :cond_0

    .line 118
    new-instance v0, Lcom/tkay/expressad/splash/d/b;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/splash/d/b;-><init>(Lcom/tkay/expressad/splash/d/c;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/d/c;->k:Lcom/tkay/expressad/splash/d/b;

    .line 120
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->k:Lcom/tkay/expressad/splash/d/b;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/splash/d/b;->a(Lcom/tkay/expressad/out/p;)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/out/q;)V
    .locals 0

    .line 124
    iput-object p1, p0, Lcom/tkay/expressad/splash/d/c;->l:Lcom/tkay/expressad/out/q;

    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 112
    iput-boolean p1, p0, Lcom/tkay/expressad/splash/d/c;->F:Z

    return-void
.end method

.method public final a()Z
    .locals 1

    .line 78
    iget-boolean v0, p0, Lcom/tkay/expressad/splash/d/c;->s:Z

    return v0
.end method

.method public final b()V
    .locals 1

    const/4 v0, 0x0

    .line 82
    iput-boolean v0, p0, Lcom/tkay/expressad/splash/d/c;->s:Z

    return-void
.end method

.method public final b(Z)V
    .locals 0

    .line 165
    iput-boolean p1, p0, Lcom/tkay/expressad/splash/d/c;->u:Z

    return-void
.end method

.method public final c()J
    .locals 2

    .line 104
    iget-wide v0, p0, Lcom/tkay/expressad/splash/d/c;->f:J

    return-wide v0
.end method

.method public final d()Z
    .locals 1

    .line 108
    iget-boolean v0, p0, Lcom/tkay/expressad/splash/d/c;->u:Z

    return v0
.end method

.method public final e()I
    .locals 1

    .line 173
    iget v0, p0, Lcom/tkay/expressad/splash/d/c;->e:I

    return v0
.end method

.method public final f()V
    .locals 1

    const/16 v0, 0x64

    .line 177
    invoke-direct {p0, v0, v0}, Lcom/tkay/expressad/splash/d/c;->a(II)V

    return-void
.end method

.method public final g()V
    .locals 2

    const/4 v0, 0x0

    .line 519
    iput-object v0, p0, Lcom/tkay/expressad/splash/d/c;->C:Lcom/tkay/expressad/foundation/d/c;

    .line 520
    iget-object v1, p0, Lcom/tkay/expressad/splash/d/c;->l:Lcom/tkay/expressad/out/q;

    if-eqz v1, :cond_0

    .line 521
    iput-object v0, p0, Lcom/tkay/expressad/splash/d/c;->l:Lcom/tkay/expressad/out/q;

    .line 523
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/splash/d/c;->k:Lcom/tkay/expressad/splash/d/b;

    if-eqz v1, :cond_1

    .line 524
    iput-object v0, p0, Lcom/tkay/expressad/splash/d/c;->k:Lcom/tkay/expressad/splash/d/b;

    .line 526
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/splash/d/c;->m:Lcom/tkay/expressad/splash/d/d;

    if-eqz v1, :cond_2

    .line 527
    iput-object v0, p0, Lcom/tkay/expressad/splash/d/c;->m:Lcom/tkay/expressad/splash/d/d;

    .line 529
    :cond_2
    iget-object v1, p0, Lcom/tkay/expressad/splash/d/c;->i:Lcom/tkay/expressad/splash/c/c;

    if-eqz v1, :cond_3

    .line 530
    invoke-virtual {v1}, Lcom/tkay/expressad/splash/c/c;->b()V

    .line 532
    :cond_3
    iget-object v1, p0, Lcom/tkay/expressad/splash/d/c;->j:Lcom/tkay/expressad/splash/c/d;

    if-eqz v1, :cond_4

    .line 533
    invoke-virtual {v1}, Lcom/tkay/expressad/splash/c/d;->c()V

    .line 535
    :cond_4
    iget-object v1, p0, Lcom/tkay/expressad/splash/d/c;->A:Landroid/content/Context;

    if-eqz v1, :cond_5

    .line 536
    iput-object v0, p0, Lcom/tkay/expressad/splash/d/c;->A:Landroid/content/Context;

    :cond_5
    return-void
.end method

.method public final isReady()Z
    .locals 2

    .line 542
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->i:Lcom/tkay/expressad/splash/c/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/c/c;->c()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/splash/d/c;->n:Lcom/tkay/expressad/splash/view/TYSplashView;

    iget-object v1, p0, Lcom/tkay/expressad/splash/d/c;->i:Lcom/tkay/expressad/splash/c/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/splash/c/c;->c()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/tkay/expressad/splash/c/b;->a(Lcom/tkay/expressad/splash/view/TYSplashView;Lcom/tkay/expressad/foundation/d/c;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method
