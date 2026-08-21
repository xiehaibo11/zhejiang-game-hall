.class public Lcom/tkay/expressad/advanced/d/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/a/g;


# static fields
.field public static final a:I = 0x1

.field public static final b:I = 0x2

.field public static final c:I = 0x3

.field private static g:Ljava/lang/String; = "NativeAdvancedProvider"


# instance fields
.field private A:I

.field private B:Ljava/lang/Object;

.field private C:Lorg/json/JSONObject;

.field private D:Z

.field private E:Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

.field private F:Z

.field private G:Z

.field private H:Z

.field private I:Z

.field private J:Landroid/view/ViewTreeObserver$OnScrollChangedListener;

.field public d:Z

.field e:Z

.field f:Lcom/tkay/expressad/foundation/d/d;

.field private h:Ljava/lang/String;

.field private i:Ljava/lang/String;

.field private j:Lcom/tkay/expressad/advanced/c/a;

.field private k:Lcom/tkay/expressad/advanced/c/b;

.field private l:Lcom/tkay/expressad/advanced/d/b;

.field private m:Lcom/tkay/expressad/out/i;

.field private n:Lcom/tkay/expressad/advanced/d/d;

.field private o:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

.field private p:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

.field private q:Lcom/tkay/expressad/advanced/view/a;

.field private r:Lcom/tkay/expressad/d/c;

.field private s:Z

.field private t:I

.field private u:Z

.field private v:I

.field private w:Z

.field private x:I

.field private y:Z

.field private z:I


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;)V
    .locals 3

    .line 114
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, -0x1

    .line 57
    iput v0, p0, Lcom/tkay/expressad/advanced/d/c;->t:I

    const/4 v1, 0x0

    .line 58
    iput-boolean v1, p0, Lcom/tkay/expressad/advanced/d/c;->u:Z

    .line 59
    iput v1, p0, Lcom/tkay/expressad/advanced/d/c;->v:I

    .line 60
    iput-boolean v1, p0, Lcom/tkay/expressad/advanced/d/c;->w:Z

    .line 61
    iput v1, p0, Lcom/tkay/expressad/advanced/d/c;->x:I

    .line 62
    iput-boolean v1, p0, Lcom/tkay/expressad/advanced/d/c;->y:Z

    .line 63
    iput v1, p0, Lcom/tkay/expressad/advanced/d/c;->z:I

    .line 64
    iput v1, p0, Lcom/tkay/expressad/advanced/d/c;->A:I

    .line 65
    new-instance v2, Ljava/lang/Object;

    invoke-direct {v2}, Ljava/lang/Object;-><init>()V

    iput-object v2, p0, Lcom/tkay/expressad/advanced/d/c;->B:Ljava/lang/Object;

    .line 67
    iput-boolean v1, p0, Lcom/tkay/expressad/advanced/d/c;->D:Z

    const/4 v2, 0x1

    .line 76
    iput-boolean v2, p0, Lcom/tkay/expressad/advanced/d/c;->I:Z

    .line 77
    iput-boolean v1, p0, Lcom/tkay/expressad/advanced/d/c;->d:Z

    .line 79
    new-instance v1, Lcom/tkay/expressad/advanced/d/c$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/advanced/d/c$1;-><init>(Lcom/tkay/expressad/advanced/d/c;)V

    iput-object v1, p0, Lcom/tkay/expressad/advanced/d/c;->J:Landroid/view/ViewTreeObserver$OnScrollChangedListener;

    .line 115
    iput-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->i:Ljava/lang/String;

    .line 116
    iput-object p2, p0, Lcom/tkay/expressad/advanced/d/c;->h:Ljava/lang/String;

    .line 1417
    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->k:Lcom/tkay/expressad/advanced/c/b;

    if-nez p1, :cond_0

    .line 1418
    new-instance p1, Lcom/tkay/expressad/advanced/c/b;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p2

    iget-object v1, p0, Lcom/tkay/expressad/advanced/d/c;->i:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/advanced/d/c;->h:Ljava/lang/String;

    invoke-direct {p1, p2, v1, v2}, Lcom/tkay/expressad/advanced/c/b;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->k:Lcom/tkay/expressad/advanced/c/b;

    .line 1419
    invoke-virtual {p1, p0}, Lcom/tkay/expressad/advanced/c/b;->a(Lcom/tkay/expressad/advanced/d/c;)V

    .line 1421
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->p:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    if-nez p1, :cond_2

    .line 1423
    :try_start_0
    new-instance p1, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p2

    invoke-direct {p1, p2}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->p:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1429
    :catchall_0
    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->q:Lcom/tkay/expressad/advanced/view/a;

    if-nez p1, :cond_1

    .line 1431
    :try_start_1
    new-instance p1, Lcom/tkay/expressad/advanced/view/a;

    iget-object p2, p0, Lcom/tkay/expressad/advanced/d/c;->h:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/expressad/advanced/d/c;->k:Lcom/tkay/expressad/advanced/c/b;

    invoke-virtual {v1}, Lcom/tkay/expressad/advanced/c/b;->b()Lcom/tkay/expressad/advanced/d/a;

    move-result-object v1

    invoke-direct {p1, p2, v1, p0}, Lcom/tkay/expressad/advanced/view/a;-><init>(Ljava/lang/String;Lcom/tkay/expressad/advanced/d/a;Lcom/tkay/expressad/advanced/d/c;)V

    iput-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->q:Lcom/tkay/expressad/advanced/view/a;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 1438
    :catchall_1
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->p:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    if-eqz p1, :cond_2

    iget-object p2, p0, Lcom/tkay/expressad/advanced/d/c;->q:Lcom/tkay/expressad/advanced/view/a;

    if-eqz p2, :cond_2

    .line 1439
    invoke-virtual {p1, p2}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 1442
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->o:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    if-nez p1, :cond_3

    .line 1447
    new-instance p1, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    invoke-direct {p1, p3}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->o:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    .line 1448
    iget-object p2, p0, Lcom/tkay/expressad/advanced/d/c;->p:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setAdvancedNativeWebview(Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;)V

    .line 1449
    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->p:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    if-eqz p1, :cond_3

    invoke-virtual {p1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-nez p1, :cond_3

    .line 1450
    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->o:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    iget-object p2, p0, Lcom/tkay/expressad/advanced/d/c;->p:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    new-instance p3, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {p3, v0, v0}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p1, p2, p3}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 1453
    :cond_3
    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->E:Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    if-nez p1, :cond_6

    .line 1454
    new-instance p1, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p2

    invoke-direct {p1, p2}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->E:Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    .line 1456
    iget p1, p0, Lcom/tkay/expressad/advanced/d/c;->z:I

    if-eqz p1, :cond_5

    iget p1, p0, Lcom/tkay/expressad/advanced/d/c;->A:I

    if-nez p1, :cond_4

    goto :goto_0

    .line 1459
    :cond_4
    new-instance p1, Landroid/view/ViewGroup$LayoutParams;

    iget p2, p0, Lcom/tkay/expressad/advanced/d/c;->z:I

    iget p3, p0, Lcom/tkay/expressad/advanced/d/c;->A:I

    invoke-direct {p1, p2, p3}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    goto :goto_1

    .line 1457
    :cond_5
    :goto_0
    new-instance p1, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {p1, v0, v0}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 1461
    :goto_1
    iget-object p2, p0, Lcom/tkay/expressad/advanced/d/c;->E:Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1462
    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->E:Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    invoke-virtual {p1, p0}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->setProvider(Lcom/tkay/expressad/advanced/d/c;)V

    .line 1463
    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->E:Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    iget-object p2, p0, Lcom/tkay/expressad/advanced/d/c;->o:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->addView(Landroid/view/View;)V

    .line 1464
    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->E:Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    invoke-virtual {p1}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->getViewTreeObserver()Landroid/view/ViewTreeObserver;

    move-result-object p1

    iget-object p2, p0, Lcom/tkay/expressad/advanced/d/c;->J:Landroid/view/ViewTreeObserver$OnScrollChangedListener;

    invoke-virtual {p1, p2}, Landroid/view/ViewTreeObserver;->addOnScrollChangedListener(Landroid/view/ViewTreeObserver$OnScrollChangedListener;)V

    :cond_6
    return-void
.end method

.method private a(Landroid/content/Context;)V
    .locals 4

    .line 417
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->k:Lcom/tkay/expressad/advanced/c/b;

    if-nez v0, :cond_0

    .line 418
    new-instance v0, Lcom/tkay/expressad/advanced/c/b;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/advanced/d/c;->i:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/advanced/d/c;->h:Ljava/lang/String;

    invoke-direct {v0, v1, v2, v3}, Lcom/tkay/expressad/advanced/c/b;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->k:Lcom/tkay/expressad/advanced/c/b;

    .line 419
    invoke-virtual {v0, p0}, Lcom/tkay/expressad/advanced/c/b;->a(Lcom/tkay/expressad/advanced/d/c;)V

    .line 421
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->p:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    if-nez v0, :cond_2

    .line 423
    :try_start_0
    new-instance v0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->p:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 429
    :catchall_0
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->q:Lcom/tkay/expressad/advanced/view/a;

    if-nez v0, :cond_1

    .line 431
    :try_start_1
    new-instance v0, Lcom/tkay/expressad/advanced/view/a;

    iget-object v1, p0, Lcom/tkay/expressad/advanced/d/c;->h:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/advanced/d/c;->k:Lcom/tkay/expressad/advanced/c/b;

    invoke-virtual {v2}, Lcom/tkay/expressad/advanced/c/b;->b()Lcom/tkay/expressad/advanced/d/a;

    move-result-object v2

    invoke-direct {v0, v1, v2, p0}, Lcom/tkay/expressad/advanced/view/a;-><init>(Ljava/lang/String;Lcom/tkay/expressad/advanced/d/a;Lcom/tkay/expressad/advanced/d/c;)V

    iput-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->q:Lcom/tkay/expressad/advanced/view/a;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 438
    :catchall_1
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->p:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    if-eqz v0, :cond_2

    iget-object v1, p0, Lcom/tkay/expressad/advanced/d/c;->q:Lcom/tkay/expressad/advanced/view/a;

    if-eqz v1, :cond_2

    .line 439
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 442
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->o:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    const/4 v1, -0x1

    if-nez v0, :cond_3

    .line 447
    new-instance v0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    invoke-direct {v0, p1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->o:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    .line 448
    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->p:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setAdvancedNativeWebview(Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;)V

    .line 449
    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->p:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    if-eqz p1, :cond_3

    invoke-virtual {p1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-nez p1, :cond_3

    .line 450
    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->o:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->p:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    new-instance v2, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v2, v1, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p1, v0, v2}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 453
    :cond_3
    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->E:Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    if-nez p1, :cond_6

    .line 454
    new-instance p1, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-direct {p1, v0}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->E:Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    .line 456
    iget p1, p0, Lcom/tkay/expressad/advanced/d/c;->z:I

    if-eqz p1, :cond_5

    iget p1, p0, Lcom/tkay/expressad/advanced/d/c;->A:I

    if-nez p1, :cond_4

    goto :goto_0

    .line 459
    :cond_4
    new-instance p1, Landroid/view/ViewGroup$LayoutParams;

    iget v0, p0, Lcom/tkay/expressad/advanced/d/c;->z:I

    iget v1, p0, Lcom/tkay/expressad/advanced/d/c;->A:I

    invoke-direct {p1, v0, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    goto :goto_1

    .line 457
    :cond_5
    :goto_0
    new-instance p1, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {p1, v1, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 461
    :goto_1
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->E:Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 462
    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->E:Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    invoke-virtual {p1, p0}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->setProvider(Lcom/tkay/expressad/advanced/d/c;)V

    .line 463
    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->E:Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->o:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->addView(Landroid/view/View;)V

    .line 464
    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->E:Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    invoke-virtual {p1}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->getViewTreeObserver()Landroid/view/ViewTreeObserver;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->J:Landroid/view/ViewTreeObserver$OnScrollChangedListener;

    invoke-virtual {p1, v0}, Landroid/view/ViewTreeObserver;->addOnScrollChangedListener(Landroid/view/ViewTreeObserver$OnScrollChangedListener;)V

    :cond_6
    return-void
.end method

.method private a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 3

    .line 325
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->k:Lcom/tkay/expressad/advanced/c/b;

    iget-object v1, p0, Lcom/tkay/expressad/advanced/d/c;->n:Lcom/tkay/expressad/advanced/d/d;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/c/b;->a(Lcom/tkay/expressad/advanced/d/d;)V

    .line 328
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->k:Lcom/tkay/expressad/advanced/c/b;

    iget-object v1, p0, Lcom/tkay/expressad/advanced/d/c;->o:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    const/4 v2, 0x1

    invoke-virtual {v0, p1, v1, v2}, Lcom/tkay/expressad/advanced/c/b;->a(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;Z)V

    return-void
.end method

.method private a(Lorg/json/JSONObject;)V
    .locals 1

    const/4 v0, 0x1

    .line 124
    iput-boolean v0, p0, Lcom/tkay/expressad/advanced/d/c;->D:Z

    .line 125
    invoke-direct {p0, p1}, Lcom/tkay/expressad/advanced/d/c;->b(Lorg/json/JSONObject;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/advanced/d/c;)Z
    .locals 0

    .line 35
    iget-boolean p0, p0, Lcom/tkay/expressad/advanced/d/c;->I:Z

    return p0
.end method

.method static synthetic a(Lcom/tkay/expressad/advanced/d/c;Z)Z
    .locals 0

    .line 35
    iput-boolean p1, p0, Lcom/tkay/expressad/advanced/d/c;->I:Z

    return p1
.end method

.method static synthetic b(Lcom/tkay/expressad/advanced/d/c;)Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/expressad/advanced/d/c;->E:Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    return-object p0
.end method

.method private b(II)V
    .locals 1

    if-lez p1, :cond_0

    if-lez p2, :cond_0

    .line 484
    iput p1, p0, Lcom/tkay/expressad/advanced/d/c;->A:I

    .line 485
    iput p2, p0, Lcom/tkay/expressad/advanced/d/c;->z:I

    .line 486
    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v0, p2, p1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 487
    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->E:Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    return-void
.end method

.method private b(Lorg/json/JSONObject;)V
    .locals 3

    .line 129
    iget-boolean v0, p0, Lcom/tkay/expressad/advanced/d/c;->D:Z

    if-eqz v0, :cond_0

    .line 130
    iput-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->C:Lorg/json/JSONObject;

    .line 131
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->p:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->isDestroyed()Z

    move-result v0

    if-nez v0, :cond_0

    .line 132
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->p:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    const-string v1, "setStyleList"

    const-string v2, ""

    invoke-static {v0, v1, v2, p1}, Lcom/tkay/expressad/advanced/js/NativeAdvancedJsUtils;->sendThirdToH5(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method static synthetic c(Lcom/tkay/expressad/advanced/d/c;)V
    .locals 0

    .line 35
    invoke-direct {p0}, Lcom/tkay/expressad/advanced/d/c;->j()V

    return-void
.end method

.method static synthetic f()Ljava/lang/String;
    .locals 1

    .line 35
    sget-object v0, Lcom/tkay/expressad/advanced/d/c;->g:Ljava/lang/String;

    return-object v0
.end method

.method private f(I)V
    .locals 3

    .line 138
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->p:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->isDestroyed()Z

    move-result v0

    if-nez v0, :cond_1

    .line 140
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->p:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    if-eqz v0, :cond_0

    .line 141
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "netstat"

    .line 142
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 143
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->p:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    const-string v1, "onNetstatChanged"

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v2, 0x2

    invoke-static {v0, v2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 146
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :cond_1
    return-void
.end method

.method private g()V
    .locals 10

    const/4 v0, 0x1

    new-array v1, v0, [Lcom/tkay/expressad/foundation/d/c;

    .line 245
    iget-object v2, p0, Lcom/tkay/expressad/advanced/d/c;->j:Lcom/tkay/expressad/advanced/c/a;

    const/4 v3, 0x0

    if-eqz v2, :cond_0

    .line 246
    invoke-virtual {v2}, Lcom/tkay/expressad/advanced/c/a;->c()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v2

    aput-object v2, v1, v3

    .line 249
    :cond_0
    aget-object v2, v1, v3

    if-eqz v2, :cond_3

    .line 250
    iget-object v2, p0, Lcom/tkay/expressad/advanced/d/c;->r:Lcom/tkay/expressad/d/c;

    if-nez v2, :cond_1

    .line 251
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v2

    iget-object v4, p0, Lcom/tkay/expressad/advanced/d/c;->h:Ljava/lang/String;

    invoke-static {v2, v4}, Lcom/tkay/expressad/d/b;->b(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/expressad/advanced/d/c;->r:Lcom/tkay/expressad/d/c;

    .line 253
    :cond_1
    new-instance v2, Lcom/tkay/expressad/advanced/d/d;

    iget-object v6, p0, Lcom/tkay/expressad/advanced/d/c;->m:Lcom/tkay/expressad/out/i;

    iget-object v4, p0, Lcom/tkay/expressad/advanced/d/c;->r:Lcom/tkay/expressad/d/c;

    invoke-virtual {v4}, Lcom/tkay/expressad/d/c;->a()D

    move-result-wide v7

    aget-object v9, v1, v3

    move-object v4, v2

    move-object v5, p0

    invoke-direct/range {v4 .. v9}, Lcom/tkay/expressad/advanced/d/d;-><init>(Lcom/tkay/expressad/advanced/d/c;Lcom/tkay/expressad/out/i;DLcom/tkay/expressad/foundation/d/c;)V

    iput-object v2, p0, Lcom/tkay/expressad/advanced/d/c;->n:Lcom/tkay/expressad/advanced/d/d;

    .line 261
    iget-boolean v2, p0, Lcom/tkay/expressad/advanced/d/c;->e:Z

    if-eqz v2, :cond_2

    return-void

    .line 265
    :cond_2
    iput-boolean v0, p0, Lcom/tkay/expressad/advanced/d/c;->e:Z

    .line 267
    iget-object v4, p0, Lcom/tkay/expressad/advanced/d/c;->o:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    aget-object v5, v1, v3

    iget-object v6, p0, Lcom/tkay/expressad/advanced/d/c;->i:Ljava/lang/String;

    iget-object v7, p0, Lcom/tkay/expressad/advanced/d/c;->h:Ljava/lang/String;

    iget v8, p0, Lcom/tkay/expressad/advanced/d/c;->t:I

    new-instance v9, Lcom/tkay/expressad/advanced/d/c$2;

    invoke-direct {v9, p0, v1}, Lcom/tkay/expressad/advanced/d/c$2;-><init>(Lcom/tkay/expressad/advanced/d/c;[Lcom/tkay/expressad/foundation/d/c;)V

    invoke-static/range {v4 .. v9}, Lcom/tkay/expressad/advanced/c/c;->a(Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;ILcom/tkay/expressad/advanced/c/c$a;)Z

    :cond_3
    return-void
.end method

.method private g(I)V
    .locals 3

    .line 195
    iget-boolean v0, p0, Lcom/tkay/expressad/advanced/d/c;->u:Z

    if-eqz v0, :cond_1

    .line 196
    iput p1, p0, Lcom/tkay/expressad/advanced/d/c;->t:I

    .line 197
    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->p:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    if-eqz p1, :cond_1

    invoke-virtual {p1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->isDestroyed()Z

    move-result p1

    if-nez p1, :cond_1

    .line 198
    iget p1, p0, Lcom/tkay/expressad/advanced/d/c;->t:I

    const/4 v0, 0x0

    const-string v1, ""

    const/4 v2, 0x1

    if-ne p1, v2, :cond_0

    .line 199
    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->k:Lcom/tkay/expressad/advanced/c/b;

    invoke-virtual {p1, v2}, Lcom/tkay/expressad/advanced/c/b;->a(Z)V

    .line 200
    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->p:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    const-string v2, "showCloseButton"

    invoke-static {p1, v2, v1, v0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedJsUtils;->sendThirdToH5(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V

    return-void

    :cond_0
    if-nez p1, :cond_1

    .line 202
    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->k:Lcom/tkay/expressad/advanced/c/b;

    const/4 v2, 0x0

    invoke-virtual {p1, v2}, Lcom/tkay/expressad/advanced/c/b;->a(Z)V

    .line 203
    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->p:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    const-string v2, "hideCloseButton"

    invoke-static {p1, v2, v1, v0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedJsUtils;->sendThirdToH5(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V

    :cond_1
    return-void
.end method

.method private h()Ljava/lang/String;
    .locals 1

    .line 308
    iget-boolean v0, p0, Lcom/tkay/expressad/advanced/d/c;->d:Z

    if-eqz v0, :cond_0

    .line 309
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->k:Lcom/tkay/expressad/advanced/c/b;

    if-eqz v0, :cond_1

    .line 310
    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/c/b;->a()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 313
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->j:Lcom/tkay/expressad/advanced/c/a;

    if-eqz v0, :cond_1

    .line 314
    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/c/a;->a()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    const-string v0, ""

    return-object v0
.end method

.method private h(I)V
    .locals 3

    .line 215
    iget-boolean v0, p0, Lcom/tkay/expressad/advanced/d/c;->w:Z

    if-eqz v0, :cond_0

    .line 216
    iput p1, p0, Lcom/tkay/expressad/advanced/d/c;->v:I

    .line 217
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->p:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->isDestroyed()Z

    move-result v0

    if-nez v0, :cond_0

    .line 218
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->p:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const-string v1, "setVolume"

    const-string v2, "mute"

    invoke-static {v0, v1, v2, p1}, Lcom/tkay/expressad/advanced/js/NativeAdvancedJsUtils;->sendThirdToH5(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method private i()V
    .locals 1

    .line 332
    iget v0, p0, Lcom/tkay/expressad/advanced/d/c;->t:I

    invoke-direct {p0, v0}, Lcom/tkay/expressad/advanced/d/c;->g(I)V

    .line 333
    iget v0, p0, Lcom/tkay/expressad/advanced/d/c;->v:I

    invoke-direct {p0, v0}, Lcom/tkay/expressad/advanced/d/c;->h(I)V

    .line 334
    iget v0, p0, Lcom/tkay/expressad/advanced/d/c;->x:I

    invoke-direct {p0, v0}, Lcom/tkay/expressad/advanced/d/c;->i(I)V

    .line 335
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->C:Lorg/json/JSONObject;

    invoke-direct {p0, v0}, Lcom/tkay/expressad/advanced/d/c;->b(Lorg/json/JSONObject;)V

    .line 336
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    invoke-static {}, Lcom/tkay/expressad/foundation/h/k;->a()I

    move-result v0

    invoke-direct {p0, v0}, Lcom/tkay/expressad/advanced/d/c;->f(I)V

    return-void
.end method

.method private i(I)V
    .locals 3

    .line 229
    iget-boolean v0, p0, Lcom/tkay/expressad/advanced/d/c;->y:Z

    if-eqz v0, :cond_0

    .line 230
    iput p1, p0, Lcom/tkay/expressad/advanced/d/c;->x:I

    .line 231
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->p:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->isDestroyed()Z

    move-result v0

    if-nez v0, :cond_0

    .line 232
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->p:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const-string v1, "setVideoPlayMode"

    const-string v2, "autoPlay"

    invoke-static {v0, v1, v2, p1}, Lcom/tkay/expressad/advanced/js/NativeAdvancedJsUtils;->sendThirdToH5(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method private j()V
    .locals 2

    .line 532
    iget-boolean v0, p0, Lcom/tkay/expressad/advanced/d/c;->F:Z

    if-eqz v0, :cond_3

    iget-boolean v0, p0, Lcom/tkay/expressad/advanced/d/c;->G:Z

    if-eqz v0, :cond_3

    iget-boolean v0, p0, Lcom/tkay/expressad/advanced/d/c;->H:Z

    if-nez v0, :cond_0

    goto :goto_0

    .line 535
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->o:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->getAdvancedNativeWebview()Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/y;->a(Landroid/view/View;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->E:Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->getAlpha()F

    move-result v0

    const/high16 v1, 0x3f000000    # 0.5f

    cmpg-float v0, v0, v1

    if-ltz v0, :cond_3

    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->E:Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    .line 538
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->k:Lcom/tkay/expressad/advanced/c/b;

    if-eqz v0, :cond_2

    .line 539
    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/c/b;->d()V

    .line 541
    :cond_2
    invoke-direct {p0}, Lcom/tkay/expressad/advanced/d/c;->g()V

    :cond_3
    :goto_0
    return-void
.end method

.method private k()V
    .locals 1

    .line 545
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->k:Lcom/tkay/expressad/advanced/c/b;

    if-eqz v0, :cond_0

    .line 546
    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/c/b;->e()V

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 475
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->j:Lcom/tkay/expressad/advanced/c/a;

    if-eqz v0, :cond_0

    .line 476
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/advanced/c/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_0
    const-string p1, ""

    return-object p1
.end method

.method public final a(I)V
    .locals 1

    const/4 v0, 0x1

    .line 186
    iput-boolean v0, p0, Lcom/tkay/expressad/advanced/d/c;->u:Z

    .line 187
    invoke-direct {p0, p1}, Lcom/tkay/expressad/advanced/d/c;->g(I)V

    return-void
.end method

.method public final a(II)V
    .locals 1

    if-lez p1, :cond_0

    if-lez p2, :cond_0

    .line 1484
    iput p1, p0, Lcom/tkay/expressad/advanced/d/c;->A:I

    .line 1485
    iput p2, p0, Lcom/tkay/expressad/advanced/d/c;->z:I

    .line 1486
    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v0, p2, p1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 1487
    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->E:Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    return-void
.end method

.method final a(Lcom/tkay/expressad/foundation/d/c;Z)V
    .locals 6

    .line 2332
    iget v0, p0, Lcom/tkay/expressad/advanced/d/c;->t:I

    invoke-direct {p0, v0}, Lcom/tkay/expressad/advanced/d/c;->g(I)V

    .line 2333
    iget v0, p0, Lcom/tkay/expressad/advanced/d/c;->v:I

    invoke-direct {p0, v0}, Lcom/tkay/expressad/advanced/d/c;->h(I)V

    .line 2334
    iget v0, p0, Lcom/tkay/expressad/advanced/d/c;->x:I

    invoke-direct {p0, v0}, Lcom/tkay/expressad/advanced/d/c;->i(I)V

    .line 2335
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->C:Lorg/json/JSONObject;

    invoke-direct {p0, v0}, Lcom/tkay/expressad/advanced/d/c;->b(Lorg/json/JSONObject;)V

    .line 2336
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    invoke-static {}, Lcom/tkay/expressad/foundation/h/k;->a()I

    move-result v0

    invoke-direct {p0, v0}, Lcom/tkay/expressad/advanced/d/c;->f(I)V

    .line 285
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->E:Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    if-eqz v0, :cond_4

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    if-eqz p1, :cond_2

    if-eqz p2, :cond_2

    .line 290
    iget-object p2, p0, Lcom/tkay/expressad/advanced/d/c;->r:Lcom/tkay/expressad/d/c;

    if-nez p2, :cond_1

    .line 291
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object p2

    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->h:Ljava/lang/String;

    invoke-static {p2, v0}, Lcom/tkay/expressad/d/b;->b(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object p2

    iput-object p2, p0, Lcom/tkay/expressad/advanced/d/c;->r:Lcom/tkay/expressad/d/c;

    .line 293
    :cond_1
    new-instance p2, Lcom/tkay/expressad/advanced/d/d;

    iget-object v2, p0, Lcom/tkay/expressad/advanced/d/c;->m:Lcom/tkay/expressad/out/i;

    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->r:Lcom/tkay/expressad/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->a()D

    move-result-wide v3

    move-object v0, p2

    move-object v1, p0

    move-object v5, p1

    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/advanced/d/d;-><init>(Lcom/tkay/expressad/advanced/d/c;Lcom/tkay/expressad/out/i;DLcom/tkay/expressad/foundation/d/c;)V

    iput-object p2, p0, Lcom/tkay/expressad/advanced/d/c;->n:Lcom/tkay/expressad/advanced/d/d;

    .line 297
    :cond_2
    iget-object p2, p0, Lcom/tkay/expressad/advanced/d/c;->k:Lcom/tkay/expressad/advanced/c/b;

    if-nez p2, :cond_3

    .line 298
    new-instance p2, Lcom/tkay/expressad/advanced/c/b;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/advanced/d/c;->i:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/advanced/d/c;->h:Ljava/lang/String;

    invoke-direct {p2, v0, v1, v2}, Lcom/tkay/expressad/advanced/c/b;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object p2, p0, Lcom/tkay/expressad/advanced/d/c;->k:Lcom/tkay/expressad/advanced/c/b;

    .line 299
    invoke-virtual {p2, p0}, Lcom/tkay/expressad/advanced/c/b;->a(Lcom/tkay/expressad/advanced/d/c;)V

    .line 3325
    :cond_3
    iget-object p2, p0, Lcom/tkay/expressad/advanced/d/c;->k:Lcom/tkay/expressad/advanced/c/b;

    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->n:Lcom/tkay/expressad/advanced/d/d;

    invoke-virtual {p2, v0}, Lcom/tkay/expressad/advanced/c/b;->a(Lcom/tkay/expressad/advanced/d/d;)V

    .line 3328
    iget-object p2, p0, Lcom/tkay/expressad/advanced/d/c;->k:Lcom/tkay/expressad/advanced/c/b;

    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->o:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    const/4 v1, 0x1

    invoke-virtual {p2, p1, v0, v1}, Lcom/tkay/expressad/advanced/c/b;->a(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;Z)V

    :cond_4
    :goto_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/d;)V
    .locals 3

    .line 364
    iput-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->f:Lcom/tkay/expressad/foundation/d/d;

    const/4 v0, 0x1

    .line 365
    iput-boolean v0, p0, Lcom/tkay/expressad/advanced/d/c;->I:Z

    .line 366
    iput-boolean v0, p0, Lcom/tkay/expressad/advanced/d/c;->s:Z

    .line 392
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->o:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->clearResStateAndRemoveClose()V

    .line 393
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/advanced/d/c;->h:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/tkay/expressad/d/b;->d(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->r:Lcom/tkay/expressad/d/c;

    if-nez v0, :cond_0

    .line 395
    invoke-static {}, Lcom/tkay/expressad/d/c;->y()Lcom/tkay/expressad/d/c;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->r:Lcom/tkay/expressad/d/c;

    .line 398
    :cond_0
    new-instance v0, Lcom/tkay/expressad/advanced/d/b;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/advanced/d/b;-><init>(Lcom/tkay/expressad/advanced/d/c;)V

    iput-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->l:Lcom/tkay/expressad/advanced/d/b;

    .line 399
    iget-object v1, p0, Lcom/tkay/expressad/advanced/d/c;->m:Lcom/tkay/expressad/out/i;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/d/b;->a(Lcom/tkay/expressad/out/i;)V

    .line 401
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->j:Lcom/tkay/expressad/advanced/c/a;

    if-nez v0, :cond_1

    .line 402
    new-instance v0, Lcom/tkay/expressad/advanced/c/a;

    iget-object v1, p0, Lcom/tkay/expressad/advanced/d/c;->i:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/advanced/d/c;->h:Ljava/lang/String;

    invoke-direct {v0, v1, v2}, Lcom/tkay/expressad/advanced/c/a;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->j:Lcom/tkay/expressad/advanced/c/a;

    .line 404
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->l:Lcom/tkay/expressad/advanced/d/b;

    if-eqz v0, :cond_2

    .line 405
    iget-object v1, p0, Lcom/tkay/expressad/advanced/d/c;->j:Lcom/tkay/expressad/advanced/c/a;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/advanced/b/a;)V

    .line 407
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->o:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->resetLoadState()V

    .line 408
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->j:Lcom/tkay/expressad/advanced/c/a;

    iget-object v1, p0, Lcom/tkay/expressad/advanced/d/c;->o:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;)V

    .line 409
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->j:Lcom/tkay/expressad/advanced/c/a;

    iget-object v1, p0, Lcom/tkay/expressad/advanced/d/c;->r:Lcom/tkay/expressad/d/c;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/d/c;)V

    .line 410
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->j:Lcom/tkay/expressad/advanced/c/a;

    iget v1, p0, Lcom/tkay/expressad/advanced/d/c;->z:I

    iget v2, p0, Lcom/tkay/expressad/advanced/d/c;->A:I

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/advanced/c/a;->a(II)V

    .line 411
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->j:Lcom/tkay/expressad/advanced/c/a;

    iget v1, p0, Lcom/tkay/expressad/advanced/d/c;->t:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/c/a;->a(I)V

    .line 413
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->j:Lcom/tkay/expressad/advanced/c/a;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/foundation/d/d;)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/out/i;)V
    .locals 0

    .line 156
    iput-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->m:Lcom/tkay/expressad/out/i;

    return-void
.end method

.method public final a()Z
    .locals 1

    .line 102
    iget-boolean v0, p0, Lcom/tkay/expressad/advanced/d/c;->s:Z

    return v0
.end method

.method public final b()V
    .locals 1

    const/4 v0, 0x0

    .line 106
    iput-boolean v0, p0, Lcom/tkay/expressad/advanced/d/c;->s:Z

    return-void
.end method

.method public final b(I)V
    .locals 1

    const/4 v0, 0x1

    .line 210
    iput-boolean v0, p0, Lcom/tkay/expressad/advanced/d/c;->w:Z

    .line 211
    invoke-direct {p0, p1}, Lcom/tkay/expressad/advanced/d/c;->h(I)V

    return-void
.end method

.method public final c()Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;
    .locals 1

    .line 111
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->E:Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    return-object v0
.end method

.method public final c(I)V
    .locals 1

    const/4 v0, 0x1

    .line 224
    iput-boolean v0, p0, Lcom/tkay/expressad/advanced/d/c;->y:Z

    .line 225
    invoke-direct {p0, p1}, Lcom/tkay/expressad/advanced/d/c;->i(I)V

    return-void
.end method

.method public final d()I
    .locals 1

    .line 152
    iget v0, p0, Lcom/tkay/expressad/advanced/d/c;->t:I

    return v0
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

    .line 500
    :cond_0
    iput-boolean v0, p0, Lcom/tkay/expressad/advanced/d/c;->H:Z

    goto :goto_0

    .line 497
    :cond_1
    iput-boolean v0, p0, Lcom/tkay/expressad/advanced/d/c;->G:Z

    goto :goto_0

    .line 494
    :cond_2
    iput-boolean v0, p0, Lcom/tkay/expressad/advanced/d/c;->F:Z

    .line 506
    :goto_0
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/expressad/advanced/d/c;->j()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public final e()V
    .locals 3

    .line 551
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->m:Lcom/tkay/expressad/out/i;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 552
    iput-object v1, p0, Lcom/tkay/expressad/advanced/d/c;->m:Lcom/tkay/expressad/out/i;

    .line 554
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->l:Lcom/tkay/expressad/advanced/d/b;

    if-eqz v0, :cond_1

    .line 555
    iput-object v1, p0, Lcom/tkay/expressad/advanced/d/c;->l:Lcom/tkay/expressad/advanced/d/b;

    .line 557
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->n:Lcom/tkay/expressad/advanced/d/d;

    if-eqz v0, :cond_2

    .line 558
    iput-object v1, p0, Lcom/tkay/expressad/advanced/d/c;->n:Lcom/tkay/expressad/advanced/d/d;

    .line 560
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->j:Lcom/tkay/expressad/advanced/c/a;

    if-eqz v0, :cond_3

    .line 561
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;)V

    .line 562
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->j:Lcom/tkay/expressad/advanced/c/a;

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/c/a;->b()V

    .line 564
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->k:Lcom/tkay/expressad/advanced/c/b;

    if-eqz v0, :cond_4

    .line 565
    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/c/b;->c()V

    .line 568
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->o:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    if-eqz v0, :cond_5

    .line 569
    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->destroy()V

    .line 572
    :cond_5
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->f:Lcom/tkay/expressad/foundation/d/d;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/d;->f()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/advanced/a/c;->c(Ljava/lang/String;)V

    .line 574
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->q:Lcom/tkay/expressad/advanced/view/a;

    if-eqz v0, :cond_6

    .line 575
    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/a;->a()V

    .line 577
    :cond_6
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->E:Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    if-eqz v0, :cond_7

    .line 578
    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->getViewTreeObserver()Landroid/view/ViewTreeObserver;

    move-result-object v0

    iget-object v2, p0, Lcom/tkay/expressad/advanced/d/c;->J:Landroid/view/ViewTreeObserver$OnScrollChangedListener;

    invoke-virtual {v0, v2}, Landroid/view/ViewTreeObserver;->removeOnScrollChangedListener(Landroid/view/ViewTreeObserver$OnScrollChangedListener;)V

    .line 579
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c;->E:Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->removeAllViews()V

    .line 580
    iput-object v1, p0, Lcom/tkay/expressad/advanced/d/c;->E:Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

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

    .line 523
    :cond_0
    iput-boolean v1, p0, Lcom/tkay/expressad/advanced/d/c;->H:Z

    goto :goto_0

    .line 520
    :cond_1
    iput-boolean v1, p0, Lcom/tkay/expressad/advanced/d/c;->G:Z

    goto :goto_0

    .line 517
    :cond_2
    iput-boolean v1, p0, Lcom/tkay/expressad/advanced/d/c;->F:Z

    .line 3545
    :goto_0
    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/c;->k:Lcom/tkay/expressad/advanced/c/b;

    if-eqz p1, :cond_3

    .line 3546
    invoke-virtual {p1}, Lcom/tkay/expressad/advanced/c/b;->e()V

    :cond_3
    return-void
.end method

.method public isReady()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method
