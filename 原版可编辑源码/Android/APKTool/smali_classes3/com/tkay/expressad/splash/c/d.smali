.class public final Lcom/tkay/expressad/splash/c/d;
.super Ljava/lang/Object;


# instance fields
.field public a:Landroid/os/Handler;

.field b:Landroid/graphics/Rect;

.field private c:Ljava/lang/String;

.field private d:Lcom/tkay/expressad/foundation/d/c;

.field private e:Lcom/tkay/expressad/splash/view/TYSplashView;

.field private f:Lcom/tkay/expressad/splash/d/d;

.field private g:Lcom/tkay/expressad/a/a;

.field private h:Z

.field private i:Landroid/widget/TextView;

.field private j:Landroid/view/View;

.field private k:Ljava/lang/String;

.field private l:Ljava/lang/String;

.field private m:I

.field private n:Ljava/lang/String;

.field private o:Ljava/lang/String;

.field private p:Ljava/lang/String;

.field private q:Ljava/lang/String;

.field private r:Z

.field private s:Z

.field private t:Z

.field private u:Landroid/content/Context;

.field private v:Landroid/view/View$OnClickListener;

.field private w:Lcom/tkay/core/common/l/a/f$b;

.field private x:Lcom/tkay/expressad/splash/d/a;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 7

    .line 94
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "SplashShowManager"

    .line 54
    iput-object v0, p0, Lcom/tkay/expressad/splash/c/d;->c:Ljava/lang/String;

    const/4 v0, 0x5

    .line 69
    iput v0, p0, Lcom/tkay/expressad/splash/c/d;->m:I

    const-string v0, ""

    .line 74
    iput-object v0, p0, Lcom/tkay/expressad/splash/c/d;->n:Ljava/lang/String;

    .line 75
    iput-object v0, p0, Lcom/tkay/expressad/splash/c/d;->o:Ljava/lang/String;

    .line 76
    iput-object v0, p0, Lcom/tkay/expressad/splash/c/d;->p:Ljava/lang/String;

    .line 77
    iput-object v0, p0, Lcom/tkay/expressad/splash/c/d;->q:Ljava/lang/String;

    const/4 v0, 0x0

    .line 80
    iput-boolean v0, p0, Lcom/tkay/expressad/splash/c/d;->t:Z

    .line 82
    new-instance v1, Lcom/tkay/expressad/splash/c/d$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/splash/c/d$1;-><init>(Lcom/tkay/expressad/splash/c/d;)V

    iput-object v1, p0, Lcom/tkay/expressad/splash/c/d;->v:Landroid/view/View$OnClickListener;

    .line 92
    new-instance v1, Lcom/tkay/core/common/l/a/f$b;

    invoke-direct {v1}, Lcom/tkay/core/common/l/a/f$b;-><init>()V

    iput-object v1, p0, Lcom/tkay/expressad/splash/c/d;->w:Lcom/tkay/core/common/l/a/f$b;

    .line 153
    new-instance v1, Lcom/tkay/expressad/splash/c/d$2;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v2

    invoke-direct {v1, p0, v2}, Lcom/tkay/expressad/splash/c/d$2;-><init>(Lcom/tkay/expressad/splash/c/d;Landroid/os/Looper;)V

    iput-object v1, p0, Lcom/tkay/expressad/splash/c/d;->a:Landroid/os/Handler;

    .line 202
    new-instance v1, Lcom/tkay/expressad/splash/c/d$3;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/splash/c/d$3;-><init>(Lcom/tkay/expressad/splash/c/d;)V

    iput-object v1, p0, Lcom/tkay/expressad/splash/c/d;->x:Lcom/tkay/expressad/splash/d/a;

    .line 380
    new-instance v1, Landroid/graphics/Rect;

    invoke-direct {v1}, Landroid/graphics/Rect;-><init>()V

    iput-object v1, p0, Lcom/tkay/expressad/splash/c/d;->b:Landroid/graphics/Rect;

    .line 95
    iput-object p3, p0, Lcom/tkay/expressad/splash/c/d;->k:Ljava/lang/String;

    .line 96
    iput-object p2, p0, Lcom/tkay/expressad/splash/c/d;->l:Ljava/lang/String;

    .line 98
    iput-object p1, p0, Lcom/tkay/expressad/splash/c/d;->u:Landroid/content/Context;

    .line 100
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p2

    const-string p3, "tkay_splash_count_time_can_skip"

    const-string v1, "string"

    invoke-static {p2, p3, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p2

    .line 101
    iget-object v2, p0, Lcom/tkay/expressad/splash/c/d;->u:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_splash_count_time_can_skip_not"

    invoke-static {v2, v3, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    .line 102
    iget-object v4, p0, Lcom/tkay/expressad/splash/c/d;->u:Landroid/content/Context;

    invoke-virtual {v4}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v4

    const-string v5, "tkay_splash_count_time_can_skip_s"

    invoke-static {v4, v5, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    .line 104
    iget-object v6, p0, Lcom/tkay/expressad/splash/c/d;->u:Landroid/content/Context;

    invoke-virtual {v6}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v6

    invoke-virtual {v6, p2}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/tkay/expressad/splash/c/d;->o:Ljava/lang/String;

    .line 105
    iget-object p2, p0, Lcom/tkay/expressad/splash/c/d;->u:Landroid/content/Context;

    invoke-virtual {p2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p2

    invoke-virtual {p2, v2}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/tkay/expressad/splash/c/d;->q:Ljava/lang/String;

    .line 106
    iget-object p2, p0, Lcom/tkay/expressad/splash/c/d;->u:Landroid/content/Context;

    invoke-virtual {p2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p2

    invoke-virtual {p2, v4}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/tkay/expressad/splash/c/d;->p:Ljava/lang/String;

    .line 108
    iget-object p2, p0, Lcom/tkay/expressad/splash/c/d;->i:Landroid/widget/TextView;

    if-nez p2, :cond_1

    .line 109
    new-instance p2, Landroid/widget/TextView;

    invoke-direct {p2, p1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/tkay/expressad/splash/c/d;->i:Landroid/widget/TextView;

    const/4 v2, 0x1

    .line 110
    invoke-virtual {p2, v2}, Landroid/widget/TextView;->setGravity(I)V

    .line 111
    iget-object p2, p0, Lcom/tkay/expressad/splash/c/d;->i:Landroid/widget/TextView;

    invoke-virtual {p2, v0}, Landroid/widget/TextView;->setTextIsSelectable(Z)V

    .line 112
    iget-object p2, p0, Lcom/tkay/expressad/splash/c/d;->i:Landroid/widget/TextView;

    const/high16 v0, 0x40a00000    # 5.0f

    invoke-static {p1, v0}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-static {p1, v0}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v4

    invoke-static {p1, v0}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v6

    invoke-static {p1, v0}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v0

    invoke-virtual {p2, v2, v4, v6, v0}, Landroid/widget/TextView;->setPadding(IIII)V

    .line 113
    iget-object p2, p0, Lcom/tkay/expressad/splash/c/d;->i:Landroid/widget/TextView;

    invoke-virtual {p2}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p2

    check-cast p2, Landroid/widget/RelativeLayout$LayoutParams;

    if-nez p2, :cond_0

    .line 115
    new-instance p2, Landroid/widget/RelativeLayout$LayoutParams;

    const/high16 v0, 0x42c80000    # 100.0f

    invoke-static {p1, v0}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v0

    const/high16 v2, 0x42480000    # 50.0f

    invoke-static {p1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result p1

    invoke-direct {p2, v0, p1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 117
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d;->i:Landroid/widget/TextView;

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1123
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 1125
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object p2

    .line 1126
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0, p3, v1, p2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result p3

    .line 1127
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0, v3, v1, p2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 1128
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    invoke-virtual {v2, v5, v1, p2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    .line 1129
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    invoke-virtual {v2, p3}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p3

    iput-object p3, p0, Lcom/tkay/expressad/splash/c/d;->o:Ljava/lang/String;

    .line 1130
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p3

    invoke-virtual {p3, v0}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p3

    iput-object p3, p0, Lcom/tkay/expressad/splash/c/d;->q:Ljava/lang/String;

    iput-object p3, p0, Lcom/tkay/expressad/splash/c/d;->n:Ljava/lang/String;

    .line 1131
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p3

    invoke-virtual {p3, v1}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p3

    iput-object p3, p0, Lcom/tkay/expressad/splash/c/d;->p:Ljava/lang/String;

    .line 1132
    iget-object p3, p0, Lcom/tkay/expressad/splash/c/d;->i:Landroid/widget/TextView;

    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v1

    const-string v2, "tkay_splash_close_bg"

    const-string v3, "drawable"

    invoke-virtual {v0, v2, v3, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p3, v0}, Landroid/widget/TextView;->setBackgroundResource(I)V

    .line 1133
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p3

    const-string v0, "tkay_splash_count_time_skip_text_color"

    const-string v1, "color"

    invoke-virtual {p3, v0, v1, p2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result p2

    .line 1134
    iget-object p3, p0, Lcom/tkay/expressad/splash/c/d;->i:Landroid/widget/TextView;

    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/content/res/Resources;->getColor(I)I

    move-result p1

    invoke-virtual {p3, p1}, Landroid/widget/TextView;->setTextColor(I)V

    :cond_1
    return-void
.end method

.method private static a(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V
    .locals 3

    if-eqz p0, :cond_0

    .line 735
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->e()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 736
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 737
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const/4 v2, 0x1

    .line 738
    invoke-static {p1, p0, p2, v1, v2}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 743
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/splash/c/d;I)V
    .locals 1

    .line 2664
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->e:Lcom/tkay/expressad/splash/view/TYSplashView;

    if-eqz v0, :cond_0

    .line 2665
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/splash/view/TYSplashView;->updateCountdown(I)V

    .line 2666
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->e:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashJSBridgeImpl()Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 2667
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->e:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashJSBridgeImpl()Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->updateCountDown(I)V

    :cond_0
    if-gez p1, :cond_1

    .line 2671
    iput p1, p0, Lcom/tkay/expressad/splash/c/d;->m:I

    return-void

    .line 2678
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d;->j:Landroid/view/View;

    if-nez p1, :cond_2

    .line 2679
    invoke-direct {p0}, Lcom/tkay/expressad/splash/c/d;->i()V

    :cond_2
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/splash/c/d;Ljava/lang/String;)V
    .locals 1

    .line 3564
    iget-object p0, p0, Lcom/tkay/expressad/splash/c/d;->f:Lcom/tkay/expressad/splash/d/d;

    if-eqz p0, :cond_0

    .line 3565
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "web show failed:"

    invoke-virtual {v0, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/splash/d/d;->a(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 2

    .line 564
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->f:Lcom/tkay/expressad/splash/d/d;

    if-eqz v0, :cond_0

    .line 565
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    const-string v1, "web show failed:"

    invoke-virtual {v1, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/splash/d/d;->a(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method private a(Landroid/view/View;)Z
    .locals 5

    const/4 v0, 0x0

    if-eqz p1, :cond_3

    .line 383
    invoke-virtual {p1}, Landroid/view/View;->getVisibility()I

    move-result v1

    if-nez v1, :cond_3

    invoke-virtual {p1}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    if-eqz v1, :cond_3

    invoke-virtual {p1}, Landroid/view/View;->getWindowVisibility()I

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    .line 388
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->b:Landroid/graphics/Rect;

    invoke-virtual {p1, v1}, Landroid/view/View;->getGlobalVisibleRect(Landroid/graphics/Rect;)Z

    move-result p1

    if-nez p1, :cond_1

    return v0

    .line 394
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d;->b:Landroid/graphics/Rect;

    invoke-virtual {p1}, Landroid/graphics/Rect;->height()I

    move-result p1

    int-to-long v1, p1

    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d;->b:Landroid/graphics/Rect;

    invoke-virtual {p1}, Landroid/graphics/Rect;->width()I

    move-result p1

    int-to-long v3, p1

    mul-long/2addr v1, v3

    const-wide/16 v3, 0x0

    cmp-long p1, v1, v3

    if-gtz p1, :cond_2

    return v0

    :cond_2
    const/4 p1, 0x1

    return p1

    :cond_3
    :goto_0
    return v0
.end method

.method static synthetic a(Lcom/tkay/expressad/splash/c/d;)Z
    .locals 0

    .line 53
    iget-boolean p0, p0, Lcom/tkay/expressad/splash/c/d;->h:Z

    return p0
.end method

.method static synthetic a(Lcom/tkay/expressad/splash/c/d;Landroid/view/View;)Z
    .locals 3

    const/4 v0, 0x0

    if-eqz p1, :cond_3

    .line 4383
    invoke-virtual {p1}, Landroid/view/View;->getVisibility()I

    move-result v1

    if-nez v1, :cond_3

    invoke-virtual {p1}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    if-eqz v1, :cond_3

    invoke-virtual {p1}, Landroid/view/View;->getWindowVisibility()I

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    .line 4388
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->b:Landroid/graphics/Rect;

    invoke-virtual {p1, v1}, Landroid/view/View;->getGlobalVisibleRect(Landroid/graphics/Rect;)Z

    move-result p1

    if-nez p1, :cond_1

    return v0

    .line 4394
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d;->b:Landroid/graphics/Rect;

    invoke-virtual {p1}, Landroid/graphics/Rect;->height()I

    move-result p1

    int-to-long v1, p1

    iget-object p0, p0, Lcom/tkay/expressad/splash/c/d;->b:Landroid/graphics/Rect;

    invoke-virtual {p0}, Landroid/graphics/Rect;->width()I

    move-result p0

    int-to-long p0, p0

    mul-long/2addr v1, p0

    const-wide/16 p0, 0x0

    cmp-long p0, v1, p0

    if-gtz p0, :cond_2

    return v0

    :cond_2
    const/4 p0, 0x1

    return p0

    :cond_3
    :goto_0
    return v0
.end method

.method static synthetic b(Lcom/tkay/expressad/splash/c/d;I)I
    .locals 0

    .line 53
    iput p1, p0, Lcom/tkay/expressad/splash/c/d;->m:I

    return p1
.end method

.method private b(I)V
    .locals 1

    .line 664
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->e:Lcom/tkay/expressad/splash/view/TYSplashView;

    if-eqz v0, :cond_0

    .line 665
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/splash/view/TYSplashView;->updateCountdown(I)V

    .line 666
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->e:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashJSBridgeImpl()Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 667
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->e:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashJSBridgeImpl()Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->updateCountDown(I)V

    :cond_0
    if-gez p1, :cond_1

    .line 671
    iput p1, p0, Lcom/tkay/expressad/splash/c/d;->m:I

    return-void

    .line 678
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d;->j:Landroid/view/View;

    if-nez p1, :cond_2

    .line 679
    invoke-direct {p0}, Lcom/tkay/expressad/splash/c/d;->i()V

    :cond_2
    return-void
.end method

.method private b(Landroid/view/View;)V
    .locals 1

    if-eqz p1, :cond_0

    .line 695
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->v:Landroid/view/View$OnClickListener;

    invoke-virtual {p1, v0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_0
    return-void
.end method

.method private b(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 3

    .line 539
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->s()Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_0

    .line 541
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iget-object v2, p0, Lcom/tkay/expressad/splash/c/d;->k:Ljava/lang/String;

    invoke-static {p1, v0, v2}, Lcom/tkay/expressad/splash/c/d;->c(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V

    .line 542
    invoke-virtual {p1, v1}, Lcom/tkay/expressad/foundation/d/c;->c(Z)V

    .line 543
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->k:Ljava/lang/String;

    const-string v2, "splash"

    invoke-static {v0, p1, v2}, Lcom/tkay/expressad/foundation/g/a/f;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    if-eqz v1, :cond_1

    .line 550
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->k:Ljava/lang/String;

    invoke-static {p1, v0, v1}, Lcom/tkay/expressad/splash/c/d;->b(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V

    .line 551
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->k:Ljava/lang/String;

    invoke-static {p1, v0, v1}, Lcom/tkay/expressad/splash/c/d;->a(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method private static b(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V
    .locals 8

    if-eqz p0, :cond_0

    .line 749
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->ai()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 750
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->ai()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    const/4 v6, 0x1

    sget v7, Lcom/tkay/expressad/a/a/a;->j:I

    move-object v1, p1

    move-object v2, p0

    move-object v3, p2

    invoke-static/range {v1 .. v7}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;ZZI)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 753
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/splash/c/d;)V
    .locals 2

    const/4 v0, 0x1

    .line 1705
    :try_start_0
    iput-boolean v0, p0, Lcom/tkay/expressad/splash/c/d;->t:Z

    .line 1706
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->f:Lcom/tkay/expressad/splash/d/d;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 1707
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->f:Lcom/tkay/expressad/splash/d/d;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/d/d;->b()V

    .line 1708
    iput-object v1, p0, Lcom/tkay/expressad/splash/c/d;->f:Lcom/tkay/expressad/splash/d/d;

    :cond_0
    const/4 v0, 0x0

    .line 1711
    iput-boolean v0, p0, Lcom/tkay/expressad/splash/c/d;->s:Z

    .line 1718
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->e:Lcom/tkay/expressad/splash/view/TYSplashView;

    if-eqz v0, :cond_1

    .line 1719
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->e:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashWebview()Lcom/tkay/expressad/splash/view/TYSplashWebview;

    .line 1724
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->a:Landroid/os/Handler;

    if-eqz v0, :cond_2

    .line 1725
    iget-object p0, p0, Lcom/tkay/expressad/splash/c/d;->a:Landroid/os/Handler;

    invoke-virtual {p0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_2
    return-void
.end method

.method private c(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 2

    .line 556
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->k:Ljava/lang/String;

    invoke-static {p1, v0, v1}, Lcom/tkay/expressad/splash/c/d;->b(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V

    .line 557
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->k:Ljava/lang/String;

    invoke-static {p1, v0, v1}, Lcom/tkay/expressad/splash/c/d;->c(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V

    .line 558
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->k:Ljava/lang/String;

    invoke-static {p1, v0, v1}, Lcom/tkay/expressad/splash/c/d;->a(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V

    const/4 v0, 0x1

    .line 559
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/d/c;->c(Z)V

    .line 560
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->k:Ljava/lang/String;

    const-string v1, "splash"

    invoke-static {v0, p1, v1}, Lcom/tkay/expressad/foundation/g/a/f;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V

    return-void
.end method

.method private static c(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V
    .locals 8

    .line 758
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/b/b;->b(Landroid/content/Context;)V

    .line 759
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->ag()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 780
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->ag()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    const/4 v6, 0x1

    sget v7, Lcom/tkay/expressad/a/a/a;->i:I

    move-object v1, p1

    move-object v2, p0

    move-object v3, p2

    invoke-static/range {v1 .. v7}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;ZZI)V

    .line 782
    :cond_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/n;->o()[Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 785
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/n;->o()[Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {p1, p0, p2, v0, v1}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;[Ljava/lang/String;Z)V

    :cond_1
    return-void
.end method

.method static synthetic c(Lcom/tkay/expressad/splash/c/d;)Z
    .locals 0

    .line 53
    iget-boolean p0, p0, Lcom/tkay/expressad/splash/c/d;->t:Z

    return p0
.end method

.method static synthetic d(Lcom/tkay/expressad/splash/c/d;)Lcom/tkay/expressad/splash/view/TYSplashView;
    .locals 0

    .line 53
    iget-object p0, p0, Lcom/tkay/expressad/splash/c/d;->e:Lcom/tkay/expressad/splash/view/TYSplashView;

    return-object p0
.end method

.method private d(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 1

    .line 645
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->f:Lcom/tkay/expressad/splash/d/d;

    if-eqz v0, :cond_0

    .line 646
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/splash/d/d;->a(Lcom/tkay/expressad/foundation/d/c;)V

    :cond_0
    return-void
.end method

.method static synthetic e(Lcom/tkay/expressad/splash/c/d;)Lcom/tkay/core/common/l/a/f$b;
    .locals 0

    .line 53
    iget-object p0, p0, Lcom/tkay/expressad/splash/c/d;->w:Lcom/tkay/core/common/l/a/f$b;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/expressad/splash/c/d;)I
    .locals 0

    .line 53
    iget p0, p0, Lcom/tkay/expressad/splash/c/d;->m:I

    return p0
.end method

.method private f()V
    .locals 7

    .line 123
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 125
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v1

    .line 126
    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const-string v3, "string"

    const-string v4, "tkay_splash_count_time_can_skip"

    invoke-virtual {v2, v4, v3, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    .line 127
    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    const-string v5, "tkay_splash_count_time_can_skip_not"

    invoke-virtual {v4, v5, v3, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    .line 128
    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v5

    const-string v6, "tkay_splash_count_time_can_skip_s"

    invoke-virtual {v5, v6, v3, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    .line 129
    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v5

    invoke-virtual {v5, v2}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/expressad/splash/c/d;->o:Ljava/lang/String;

    .line 130
    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    invoke-virtual {v2, v4}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/expressad/splash/c/d;->q:Ljava/lang/String;

    iput-object v2, p0, Lcom/tkay/expressad/splash/c/d;->n:Ljava/lang/String;

    .line 131
    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    invoke-virtual {v2, v3}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/expressad/splash/c/d;->p:Ljava/lang/String;

    .line 132
    iget-object v2, p0, Lcom/tkay/expressad/splash/c/d;->i:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v4

    const-string v5, "tkay_splash_close_bg"

    const-string v6, "drawable"

    invoke-virtual {v3, v5, v6, v4}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setBackgroundResource(I)V

    .line 133
    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const-string v3, "tkay_splash_count_time_skip_text_color"

    const-string v4, "color"

    invoke-virtual {v2, v3, v4, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    .line 134
    iget-object v2, p0, Lcom/tkay/expressad/splash/c/d;->i:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getColor(I)I

    move-result v0

    invoke-virtual {v2, v0}, Landroid/widget/TextView;->setTextColor(I)V

    :cond_0
    return-void
.end method

.method static synthetic g(Lcom/tkay/expressad/splash/c/d;)I
    .locals 2

    .line 53
    iget v0, p0, Lcom/tkay/expressad/splash/c/d;->m:I

    add-int/lit8 v1, v0, -0x1

    iput v1, p0, Lcom/tkay/expressad/splash/c/d;->m:I

    return v0
.end method

.method private declared-synchronized g()V
    .locals 4

    monitor-enter p0

    .line 411
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->d:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_7

    iget-boolean v0, p0, Lcom/tkay/expressad/splash/c/d;->s:Z

    if-eqz v0, :cond_0

    goto/16 :goto_1

    :cond_0
    const/4 v0, 0x1

    .line 415
    iput-boolean v0, p0, Lcom/tkay/expressad/splash/c/d;->s:Z

    .line 417
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->f:Lcom/tkay/expressad/splash/d/d;

    if-eqz v1, :cond_2

    .line 418
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->e:Lcom/tkay/expressad/splash/view/TYSplashView;

    if-eqz v1, :cond_2

    .line 419
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->u:Landroid/content/Context;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->u:Landroid/content/Context;

    instance-of v1, v1, Landroid/app/Activity;

    if-eqz v1, :cond_1

    .line 420
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->u:Landroid/content/Context;

    check-cast v1, Landroid/app/Activity;

    invoke-virtual {v1}, Landroid/app/Activity;->isFinishing()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 421
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->f:Lcom/tkay/expressad/splash/d/d;

    const-string v1, "Activity is finishing"

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/d/d;->a(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 422
    monitor-exit p0

    return-void

    .line 427
    :cond_1
    :try_start_1
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->f:Lcom/tkay/expressad/splash/d/d;

    invoke-virtual {v1}, Lcom/tkay/expressad/splash/d/d;->a()V

    .line 434
    :cond_2
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->d:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->V()Z

    move-result v1

    if-nez v1, :cond_6

    .line 435
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->e:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v1}, Lcom/tkay/expressad/splash/view/TYSplashView;->isDynamicView()Z

    move-result v1

    if-nez v1, :cond_5

    .line 436
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->d:Lcom/tkay/expressad/foundation/d/c;

    const/4 v2, 0x0

    .line 1539
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->s()Z

    move-result v3

    if-nez v3, :cond_3

    .line 1541
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/splash/c/d;->k:Ljava/lang/String;

    invoke-static {v1, v2, v3}, Lcom/tkay/expressad/splash/c/d;->c(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V

    .line 1542
    invoke-virtual {v1, v0}, Lcom/tkay/expressad/foundation/d/c;->c(Z)V

    .line 1543
    iget-object v2, p0, Lcom/tkay/expressad/splash/c/d;->k:Ljava/lang/String;

    const-string v3, "splash"

    invoke-static {v2, v1, v3}, Lcom/tkay/expressad/foundation/g/a/f;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V

    goto :goto_0

    :cond_3
    move v0, v2

    :goto_0
    if-eqz v0, :cond_4

    .line 1550
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iget-object v2, p0, Lcom/tkay/expressad/splash/c/d;->k:Ljava/lang/String;

    invoke-static {v1, v0, v2}, Lcom/tkay/expressad/splash/c/d;->b(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V

    .line 1551
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iget-object v2, p0, Lcom/tkay/expressad/splash/c/d;->k:Ljava/lang/String;

    invoke-static {v1, v0, v2}, Lcom/tkay/expressad/splash/c/d;->a(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 436
    :cond_4
    monitor-exit p0

    return-void

    .line 438
    :cond_5
    :try_start_2
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->d:Lcom/tkay/expressad/foundation/d/c;

    .line 1556
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/splash/c/d;->k:Ljava/lang/String;

    invoke-static {v1, v2, v3}, Lcom/tkay/expressad/splash/c/d;->b(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V

    .line 1557
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/splash/c/d;->k:Ljava/lang/String;

    invoke-static {v1, v2, v3}, Lcom/tkay/expressad/splash/c/d;->c(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V

    .line 1558
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/splash/c/d;->k:Ljava/lang/String;

    invoke-static {v1, v2, v3}, Lcom/tkay/expressad/splash/c/d;->a(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V

    .line 1559
    invoke-virtual {v1, v0}, Lcom/tkay/expressad/foundation/d/c;->c(Z)V

    .line 1560
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->k:Ljava/lang/String;

    const-string v2, "splash"

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/foundation/g/a/f;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 443
    :cond_6
    monitor-exit p0

    return-void

    .line 412
    :cond_7
    :goto_1
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method static synthetic h(Lcom/tkay/expressad/splash/c/d;)Lcom/tkay/expressad/foundation/d/c;
    .locals 0

    .line 53
    iget-object p0, p0, Lcom/tkay/expressad/splash/c/d;->d:Lcom/tkay/expressad/foundation/d/c;

    return-object p0
.end method

.method private h()V
    .locals 4

    .line 446
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/f/b;->b()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 450
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->e:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->isDynamicView()Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    .line 454
    :cond_1
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->k:Ljava/lang/String;

    new-instance v2, Lcom/tkay/expressad/splash/c/d$6;

    invoke-direct {v2, p0}, Lcom/tkay/expressad/splash/c/d$6;-><init>(Lcom/tkay/expressad/splash/c/d;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/f/a;)V

    .line 509
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->k:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/f/b;->b(Ljava/lang/String;)Lcom/tkay/expressad/widget/FeedBackButton;

    move-result-object v0

    if-eqz v0, :cond_4

    const/4 v1, 0x0

    .line 514
    :try_start_0
    invoke-virtual {v0}, Lcom/tkay/expressad/widget/FeedBackButton;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v2

    check-cast v2, Landroid/widget/RelativeLayout$LayoutParams;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v1, v2

    goto :goto_0

    :catch_0
    move-exception v2

    .line 516
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    if-nez v1, :cond_2

    .line 519
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    sget v2, Lcom/tkay/expressad/foundation/f/b;->a:I

    sget v3, Lcom/tkay/expressad/foundation/f/b;->b:I

    invoke-direct {v1, v2, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 521
    :cond_2
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x41200000    # 10.0f

    invoke-static {v2, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 522
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 523
    invoke-virtual {v0}, Lcom/tkay/expressad/widget/FeedBackButton;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    check-cast v2, Landroid/view/ViewGroup;

    if-eqz v2, :cond_3

    .line 525
    invoke-virtual {v2, v0}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 527
    :cond_3
    iget-object v2, p0, Lcom/tkay/expressad/splash/c/d;->e:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v2, v0, v1}, Lcom/tkay/expressad/splash/view/TYSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 529
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->d:Lcom/tkay/expressad/foundation/d/c;

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->k:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 530
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->k:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/splash/c/d;->d:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V

    return-void
.end method

.method static synthetic i(Lcom/tkay/expressad/splash/c/d;)Ljava/lang/String;
    .locals 0

    .line 53
    iget-object p0, p0, Lcom/tkay/expressad/splash/c/d;->c:Ljava/lang/String;

    return-object p0
.end method

.method private i()V
    .locals 2

    .line 685
    iget-boolean v0, p0, Lcom/tkay/expressad/splash/c/d;->h:Z

    if-eqz v0, :cond_0

    .line 686
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->o:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/tkay/expressad/splash/c/d;->m:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->p:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 688
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p0, Lcom/tkay/expressad/splash/c/d;->m:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->q:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 690
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->i:Landroid/widget/TextView;

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method static synthetic j(Lcom/tkay/expressad/splash/c/d;)Lcom/tkay/expressad/splash/d/d;
    .locals 0

    .line 53
    iget-object p0, p0, Lcom/tkay/expressad/splash/c/d;->f:Lcom/tkay/expressad/splash/d/d;

    return-object p0
.end method

.method private j()V
    .locals 2

    const/4 v0, 0x1

    .line 705
    :try_start_0
    iput-boolean v0, p0, Lcom/tkay/expressad/splash/c/d;->t:Z

    .line 706
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->f:Lcom/tkay/expressad/splash/d/d;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 707
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->f:Lcom/tkay/expressad/splash/d/d;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/d/d;->b()V

    .line 708
    iput-object v1, p0, Lcom/tkay/expressad/splash/c/d;->f:Lcom/tkay/expressad/splash/d/d;

    :cond_0
    const/4 v0, 0x0

    .line 711
    iput-boolean v0, p0, Lcom/tkay/expressad/splash/c/d;->s:Z

    .line 718
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->e:Lcom/tkay/expressad/splash/view/TYSplashView;

    if-eqz v0, :cond_1

    .line 719
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->e:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashWebview()Lcom/tkay/expressad/splash/view/TYSplashWebview;

    .line 724
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->a:Landroid/os/Handler;

    if-eqz v0, :cond_2

    .line 725
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->a:Landroid/os/Handler;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_2
    return-void
.end method

.method private k()V
    .locals 4

    const/4 v0, 0x0

    .line 840
    iput-boolean v0, p0, Lcom/tkay/expressad/splash/c/d;->r:Z

    .line 841
    iget v0, p0, Lcom/tkay/expressad/splash/c/d;->m:I

    if-lez v0, :cond_0

    .line 842
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->a:Landroid/os/Handler;

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    .line 843
    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 844
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->a:Landroid/os/Handler;

    const-wide/16 v2, 0x3e8

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    .line 848
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->e:Lcom/tkay/expressad/splash/view/TYSplashView;

    if-eqz v0, :cond_1

    .line 849
    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashWebview()Lcom/tkay/expressad/splash/view/TYSplashWebview;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 850
    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->isDestroyed()Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "onInstallAlertHide"

    const-string v2, ""

    .line 851
    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/splash/js/SplashJsUtils;->sendEventToH5(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method static synthetic k(Lcom/tkay/expressad/splash/c/d;)V
    .locals 0

    .line 53
    invoke-direct {p0}, Lcom/tkay/expressad/splash/c/d;->g()V

    return-void
.end method

.method private l()V
    .locals 3

    const/4 v0, 0x1

    .line 857
    iput-boolean v0, p0, Lcom/tkay/expressad/splash/c/d;->r:Z

    .line 858
    iget v1, p0, Lcom/tkay/expressad/splash/c/d;->m:I

    if-lez v1, :cond_0

    .line 859
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->a:Landroid/os/Handler;

    if-eqz v1, :cond_0

    .line 860
    invoke-virtual {v1, v0}, Landroid/os/Handler;->removeMessages(I)V

    .line 863
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->e:Lcom/tkay/expressad/splash/view/TYSplashView;

    if-eqz v0, :cond_1

    .line 864
    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashWebview()Lcom/tkay/expressad/splash/view/TYSplashWebview;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 865
    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->isDestroyed()Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "onInstallAlertShow"

    const-string v2, ""

    .line 866
    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/splash/js/SplashJsUtils;->sendEventToH5(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method


# virtual methods
.method public final a()Lcom/tkay/expressad/splash/d/a;
    .locals 1

    .line 290
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->x:Lcom/tkay/expressad/splash/d/a;

    return-object v0
.end method

.method public final a(I)V
    .locals 0

    .line 143
    iput p1, p0, Lcom/tkay/expressad/splash/c/d;->m:I

    return-void
.end method

.method public final a(Landroid/view/ViewGroup;)V
    .locals 1

    if-eqz p1, :cond_0

    .line 148
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->v:Landroid/view/View$OnClickListener;

    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 150
    :cond_0
    iput-object p1, p0, Lcom/tkay/expressad/splash/c/d;->j:Landroid/view/View;

    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 1

    if-eqz p1, :cond_0

    .line 580
    :try_start_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aA()Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 629
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 1645
    :cond_0
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->f:Lcom/tkay/expressad/splash/d/d;

    if-eqz v0, :cond_1

    .line 1646
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/splash/d/d;->a(Lcom/tkay/expressad/foundation/d/c;)V

    :cond_1
    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/splash/view/TYSplashView;)V
    .locals 4

    .line 294
    iget-boolean v0, p0, Lcom/tkay/expressad/splash/c/d;->h:Z

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/c/d;->a(Z)V

    .line 295
    iput-object p1, p0, Lcom/tkay/expressad/splash/c/d;->d:Lcom/tkay/expressad/foundation/d/c;

    .line 296
    iput-object p2, p0, Lcom/tkay/expressad/splash/c/d;->e:Lcom/tkay/expressad/splash/view/TYSplashView;

    .line 297
    invoke-virtual {p2}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashJSBridgeImpl()Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    move-result-object v0

    if-nez v0, :cond_0

    .line 299
    new-instance v0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    invoke-virtual {p2}, Lcom/tkay/expressad/splash/view/TYSplashView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/splash/c/d;->l:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/splash/c/d;->k:Ljava/lang/String;

    invoke-direct {v0, v1, v2, v3}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    .line 300
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 301
    invoke-interface {v1, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 302
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->setCampaignList(Ljava/util/List;)V

    .line 304
    :cond_0
    iget v1, p0, Lcom/tkay/expressad/splash/c/d;->m:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->setCountdownS(I)V

    .line 305
    iget-boolean v1, p0, Lcom/tkay/expressad/splash/c/d;->h:Z

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->setAllowSkip(I)V

    .line 306
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->x:Lcom/tkay/expressad/splash/d/a;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->setSplashBridgeListener(Lcom/tkay/expressad/splash/d/a;)V

    .line 307
    invoke-virtual {p2, v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->setSplashJSBridgeImpl(Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;)V

    .line 308
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->s()Z

    move-result p1

    .line 309
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->j:Landroid/view/View;

    const/16 v1, 0x8

    if-nez v0, :cond_2

    if-eqz p1, :cond_1

    .line 311
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d;->i:Landroid/widget/TextView;

    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 313
    :cond_1
    invoke-direct {p0}, Lcom/tkay/expressad/splash/c/d;->i()V

    .line 314
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d;->i:Landroid/widget/TextView;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/splash/c/d;->b(Landroid/view/View;)V

    .line 315
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d;->i:Landroid/widget/TextView;

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/splash/view/TYSplashView;->setCloseView(Landroid/view/View;)V

    goto :goto_0

    :cond_2
    if-eqz p1, :cond_3

    .line 319
    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    .line 321
    :cond_3
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d;->j:Landroid/view/View;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/splash/c/d;->b(Landroid/view/View;)V

    .line 322
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d;->j:Landroid/view/View;

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/splash/view/TYSplashView;->setCloseView(Landroid/view/View;)V

    .line 324
    :goto_0
    invoke-virtual {p2}, Lcom/tkay/expressad/splash/view/TYSplashView;->show()V

    .line 325
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d;->d:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_4

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ay()Z

    move-result p1

    if-eqz p1, :cond_4

    if-eqz p2, :cond_4

    .line 326
    invoke-virtual {p2}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashWebview()Lcom/tkay/expressad/splash/view/TYSplashWebview;

    .line 342
    :cond_4
    new-instance p1, Lcom/tkay/expressad/splash/c/d$4;

    invoke-direct {p1, p0}, Lcom/tkay/expressad/splash/c/d$4;-><init>(Lcom/tkay/expressad/splash/c/d;)V

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/splash/view/TYSplashView;->addOnAttachStateChangeListener(Landroid/view/View$OnAttachStateChangeListener;)V

    .line 361
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    new-instance p2, Lcom/tkay/expressad/splash/c/d$5;

    invoke-direct {p2, p0}, Lcom/tkay/expressad/splash/c/d$5;-><init>(Lcom/tkay/expressad/splash/c/d;)V

    const-wide/16 v0, 0x1e

    invoke-virtual {p1, p2, v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    .line 373
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d;->d:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/expressad/splash/c/b;->a(Ljava/lang/String;)V

    .line 374
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d;->a:Landroid/os/Handler;

    const/4 p2, 0x1

    invoke-virtual {p1, p2}, Landroid/os/Handler;->removeMessages(I)V

    .line 375
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d;->a:Landroid/os/Handler;

    const-wide/16 v0, 0x3e8

    invoke-virtual {p1, p2, v0, v1}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    .line 376
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d;->a:Landroid/os/Handler;

    const/4 p2, 0x2

    invoke-virtual {p1, p2, v0, v1}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    .line 1446
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/f/b;->b()Z

    move-result p1

    if-eqz p1, :cond_8

    .line 1450
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d;->e:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {p1}, Lcom/tkay/expressad/splash/view/TYSplashView;->isDynamicView()Z

    move-result p1

    if-nez p1, :cond_8

    .line 1454
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object p1

    iget-object p2, p0, Lcom/tkay/expressad/splash/c/d;->k:Ljava/lang/String;

    new-instance v0, Lcom/tkay/expressad/splash/c/d$6;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/splash/c/d$6;-><init>(Lcom/tkay/expressad/splash/c/d;)V

    invoke-virtual {p1, p2, v0}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/f/a;)V

    .line 1509
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object p1

    iget-object p2, p0, Lcom/tkay/expressad/splash/c/d;->k:Ljava/lang/String;

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/foundation/f/b;->b(Ljava/lang/String;)Lcom/tkay/expressad/widget/FeedBackButton;

    move-result-object p1

    if-eqz p1, :cond_7

    const/4 p2, 0x0

    .line 1514
    :try_start_0
    invoke-virtual {p1}, Lcom/tkay/expressad/widget/FeedBackButton;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/RelativeLayout$LayoutParams;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object p2, v0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 1516
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    if-nez p2, :cond_5

    .line 1519
    new-instance p2, Landroid/widget/RelativeLayout$LayoutParams;

    sget v0, Lcom/tkay/expressad/foundation/f/b;->a:I

    sget v1, Lcom/tkay/expressad/foundation/f/b;->b:I

    invoke-direct {p2, v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 1521
    :cond_5
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x41200000    # 10.0f

    invoke-static {v0, v1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v0

    iput v0, p2, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 1522
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, v1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v0

    iput v0, p2, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 1523
    invoke-virtual {p1}, Lcom/tkay/expressad/widget/FeedBackButton;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    if-eqz v0, :cond_6

    .line 1525
    invoke-virtual {v0, p1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 1527
    :cond_6
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->e:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/splash/view/TYSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 1529
    :cond_7
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d;->d:Lcom/tkay/expressad/foundation/d/c;

    iget-object p2, p0, Lcom/tkay/expressad/splash/c/d;->k:Ljava/lang/String;

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 1530
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object p1

    iget-object p2, p0, Lcom/tkay/expressad/splash/c/d;->k:Ljava/lang/String;

    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->d:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1, p2, v0}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V

    :cond_8
    return-void
.end method

.method public final a(Lcom/tkay/expressad/splash/d/d;)V
    .locals 0

    .line 139
    iput-object p1, p0, Lcom/tkay/expressad/splash/c/d;->f:Lcom/tkay/expressad/splash/d/d;

    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 570
    iput-boolean p1, p0, Lcom/tkay/expressad/splash/c/d;->h:Z

    if-eqz p1, :cond_0

    .line 572
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d;->o:Ljava/lang/String;

    iput-object p1, p0, Lcom/tkay/expressad/splash/c/d;->n:Ljava/lang/String;

    return-void

    .line 574
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d;->q:Ljava/lang/String;

    iput-object p1, p0, Lcom/tkay/expressad/splash/c/d;->n:Ljava/lang/String;

    return-void
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 404
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->d:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 405
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->d:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final c()V
    .locals 2

    .line 790
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->f:Lcom/tkay/expressad/splash/d/d;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 791
    iput-object v1, p0, Lcom/tkay/expressad/splash/c/d;->f:Lcom/tkay/expressad/splash/d/d;

    .line 793
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->x:Lcom/tkay/expressad/splash/d/a;

    if-eqz v0, :cond_1

    .line 794
    iput-object v1, p0, Lcom/tkay/expressad/splash/c/d;->x:Lcom/tkay/expressad/splash/d/a;

    .line 796
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->v:Landroid/view/View$OnClickListener;

    if-eqz v0, :cond_2

    .line 797
    iput-object v1, p0, Lcom/tkay/expressad/splash/c/d;->v:Landroid/view/View$OnClickListener;

    .line 799
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->e:Lcom/tkay/expressad/splash/view/TYSplashView;

    if-eqz v0, :cond_3

    .line 800
    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->destroy()V

    .line 802
    :cond_3
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d;->k:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/f/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method public final d()V
    .locals 4

    .line 806
    iget-boolean v0, p0, Lcom/tkay/expressad/splash/c/d;->r:Z

    if-nez v0, :cond_1

    sget-boolean v0, Lcom/tkay/expressad/foundation/f/b;->c:Z

    if-nez v0, :cond_1

    .line 807
    iget v0, p0, Lcom/tkay/expressad/splash/c/d;->m:I

    if-lez v0, :cond_0

    .line 808
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->a:Landroid/os/Handler;

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    .line 809
    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 810
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->a:Landroid/os/Handler;

    const-wide/16 v2, 0x3e8

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    .line 814
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->e:Lcom/tkay/expressad/splash/view/TYSplashView;

    if-eqz v0, :cond_1

    .line 815
    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->onResume()V

    .line 816
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->e:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashWebview()Lcom/tkay/expressad/splash/view/TYSplashWebview;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 817
    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->isDestroyed()Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "onSystemResume"

    const-string v2, ""

    .line 818
    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/splash/js/SplashJsUtils;->sendEventToH5(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final e()V
    .locals 3

    .line 825
    iget v0, p0, Lcom/tkay/expressad/splash/c/d;->m:I

    if-lez v0, :cond_0

    .line 826
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->a:Landroid/os/Handler;

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    .line 827
    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 830
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->e:Lcom/tkay/expressad/splash/view/TYSplashView;

    if-eqz v0, :cond_1

    .line 831
    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->onPause()V

    .line 832
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d;->e:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashWebview()Lcom/tkay/expressad/splash/view/TYSplashWebview;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 833
    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->isDestroyed()Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "onSystemPause"

    const-string v2, ""

    .line 834
    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/splash/js/SplashJsUtils;->sendEventToH5(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method
