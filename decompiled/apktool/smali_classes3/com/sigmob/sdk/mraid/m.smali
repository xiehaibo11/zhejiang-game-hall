.class public Lcom/sigmob/sdk/mraid/m;
.super Lcom/sigmob/sdk/videoAd/c;

# interfaces
.implements Lcom/sigmob/sdk/base/common/x;


# instance fields
.field protected f:Lcom/sigmob/sdk/base/common/r;

.field private g:I

.field private h:Lcom/sigmob/sdk/videoAd/a;

.field private i:I

.field private j:Z

.field private k:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field private l:Lcom/sigmob/sdk/mraid/d;

.field private m:Lcom/sigmob/sdk/mraid/q;

.field private n:Lcom/sigmob/sdk/base/views/x;

.field private o:I

.field private p:Z

.field private q:Z

.field private r:Lcom/sigmob/sdk/base/views/q;

.field private s:Z


# direct methods
.method public constructor <init>(Landroid/app/Activity;Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/os/Bundle;Landroid/os/Bundle;Ljava/lang/String;Lcom/sigmob/sdk/base/common/j;)V
    .locals 1

    invoke-direct {p0, p1, p5, p6}, Lcom/sigmob/sdk/videoAd/c;-><init>(Landroid/app/Activity;Ljava/lang/String;Lcom/sigmob/sdk/base/common/j;)V

    const/4 p4, 0x0

    iput-boolean p4, p0, Lcom/sigmob/sdk/mraid/m;->q:Z

    iput-boolean p4, p0, Lcom/sigmob/sdk/mraid/m;->s:Z

    iput-object p2, p0, Lcom/sigmob/sdk/mraid/m;->k:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdConfig()Lcom/sigmob/sdk/base/common/h;

    move-result-object p2

    check-cast p2, Lcom/sigmob/sdk/videoAd/a;

    iput-object p2, p0, Lcom/sigmob/sdk/mraid/m;->h:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/m;->k()Landroid/app/Activity;

    move-result-object p5

    iget-object p6, p0, Lcom/sigmob/sdk/mraid/m;->k:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    const/4 v0, 0x0

    invoke-virtual {p2, p5, p6, v0}, Lcom/sigmob/sdk/videoAd/a;->a(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/views/q$b;)V

    iget-object p2, p0, Lcom/sigmob/sdk/mraid/m;->h:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {p2, p0}, Lcom/sigmob/sdk/videoAd/a;->a(Lcom/sigmob/sdk/base/common/x;)V

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object p2

    invoke-virtual {p2}, Lcom/czhj/sdk/common/ClientMetadata;->getInsetBottom()I

    move-result p2

    iput p2, p0, Lcom/sigmob/sdk/mraid/m;->i:I

    iget-object p2, p0, Lcom/sigmob/sdk/mraid/m;->k:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object p2

    iget-object p2, p2, Lcom/sigmob/sdk/base/models/rtb/Ad;->display_orientation:Ljava/lang/Integer;

    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result p2

    const/4 p5, 0x1

    if-eq p2, p5, :cond_1

    const/4 p6, 0x2

    if-eq p2, p6, :cond_0

    const/4 p2, 0x3

    const-string p6, "REQUESTED_ORIENTATION"

    invoke-virtual {p3, p6, p2}, Landroid/os/Bundle;->getInt(Ljava/lang/String;I)I

    move-result p2

    goto :goto_0

    :cond_0
    const/4 p2, 0x6

    goto :goto_0

    :cond_1
    const/4 p2, 0x7

    :goto_0
    iput p2, p0, Lcom/sigmob/sdk/mraid/m;->g:I

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/m;->h()Lcom/sigmob/sdk/base/common/j;

    move-result-object p2

    iget p6, p0, Lcom/sigmob/sdk/mraid/m;->g:I

    invoke-interface {p2, p6}, Lcom/sigmob/sdk/base/common/j;->a(I)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/m;->k()Landroid/app/Activity;

    move-result-object p2

    invoke-virtual {p2, p5}, Landroid/app/Activity;->requestWindowFeature(I)Z

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/m;->k()Landroid/app/Activity;

    move-result-object p2

    invoke-virtual {p2}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p2

    const p5, 0x1000400

    invoke-virtual {p2, p5}, Landroid/view/Window;->addFlags(I)V

    iget p2, p0, Lcom/sigmob/sdk/mraid/m;->g:I

    invoke-virtual {p0, p1, p2, p3}, Lcom/sigmob/sdk/mraid/m;->b(Landroid/content/Context;ILandroid/os/Bundle;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/m;->j()Landroid/view/ViewGroup;

    move-result-object p1

    invoke-virtual {p1, p4}, Landroid/view/ViewGroup;->setBackgroundColor(I)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid/m;I)I
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/mraid/m;->o:I

    return p1
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/base/models/BaseAdUnit;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid/m;->k:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    return-object p0
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid/m;Lcom/sigmob/sdk/base/views/q;)Lcom/sigmob/sdk/base/views/q;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/m;->r:Lcom/sigmob/sdk/base/views/q;

    return-object p1
.end method

.method private a(ILandroid/widget/RelativeLayout$LayoutParams;)V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m;->b:Landroid/content/Context;

    const/high16 v1, 0x41200000    # 10.0f

    invoke-static {v1, v0}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v0

    const/4 v1, 0x1

    const/16 v2, 0xa

    if-eq p1, v1, :cond_1

    const/4 v1, 0x2

    if-eq p1, v1, :cond_1

    const/4 v1, 0x3

    if-eq p1, v1, :cond_0

    const/4 v1, 0x4

    if-eq p1, v1, :cond_0

    goto :goto_1

    :cond_0
    invoke-virtual {p2, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 p1, 0xb

    goto :goto_0

    :cond_1
    invoke-virtual {p2, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 p1, 0x9

    :goto_0
    invoke-virtual {p2, p1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    mul-int/lit8 p1, v0, 0x2

    invoke-virtual {p2, v0, p1, v0, v0}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    :goto_1
    return-void
.end method

.method private a(Landroid/content/Context;I)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m;->n:Lcom/sigmob/sdk/base/views/x;

    if-eqz v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Lcom/sigmob/sdk/base/views/x;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/m;->h:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {v1}, Lcom/sigmob/sdk/videoAd/a;->n()I

    move-result v1

    invoke-direct {v0, p1, v1}, Lcom/sigmob/sdk/base/views/x;-><init>(Landroid/content/Context;I)V

    iput-object v0, p0, Lcom/sigmob/sdk/mraid/m;->n:Lcom/sigmob/sdk/base/views/x;

    invoke-virtual {v0, p2}, Lcom/sigmob/sdk/base/views/x;->setVisibility(I)V

    new-instance p2, Landroid/widget/RelativeLayout$LayoutParams;

    const/high16 v0, 0x41f00000    # 30.0f

    invoke-static {v0, p1}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v1

    invoke-static {v0, p1}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result p1

    invoke-direct {p2, v1, p1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m;->h:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoAd/a;->n()I

    move-result p1

    invoke-direct {p0, p1, p2}, Lcom/sigmob/sdk/mraid/m;->a(ILandroid/widget/RelativeLayout$LayoutParams;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/m;->j()Landroid/view/ViewGroup;

    move-result-object p1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m;->n:Lcom/sigmob/sdk/base/views/x;

    invoke-virtual {p1, v0, p2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    new-instance p1, Lcom/sigmob/sdk/mraid/m$7;

    invoke-direct {p1, p0}, Lcom/sigmob/sdk/mraid/m$7;-><init>(Lcom/sigmob/sdk/mraid/m;)V

    iget-object p2, p0, Lcom/sigmob/sdk/mraid/m;->n:Lcom/sigmob/sdk/base/views/x;

    invoke-virtual {p2, p1}, Lcom/sigmob/sdk/base/views/x;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m;->n:Lcom/sigmob/sdk/base/views/x;

    iget-object p2, p0, Lcom/sigmob/sdk/mraid/m;->k:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/base/views/x;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m;->h:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoAd/a;->h()Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_1

    iget-object p2, p0, Lcom/sigmob/sdk/mraid/m;->n:Lcom/sigmob/sdk/base/views/x;

    invoke-virtual {p2, p1}, Lcom/sigmob/sdk/base/views/x;->a(Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid/m;Ljava/lang/String;)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/m;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid/m;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/mraid/m;->j:Z

    return p1
.end method

.method static synthetic b(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/mraid/d;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid/m;->l:Lcom/sigmob/sdk/mraid/d;

    return-object p0
.end method

.method static synthetic b(Lcom/sigmob/sdk/mraid/m;Ljava/lang/String;)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/m;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic b(Lcom/sigmob/sdk/mraid/m;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/mraid/m;->p:Z

    return p1
.end method

.method static synthetic c(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/videoAd/a;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid/m;->h:Lcom/sigmob/sdk/videoAd/a;

    return-object p0
.end method

.method static synthetic c(Lcom/sigmob/sdk/mraid/m;Ljava/lang/String;)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/m;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic c(Lcom/sigmob/sdk/mraid/m;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/mraid/m;->q:Z

    return p1
.end method

.method static synthetic d(Lcom/sigmob/sdk/mraid/m;Ljava/lang/String;)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/m;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic d(Lcom/sigmob/sdk/mraid/m;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/mraid/m;->j:Z

    return p0
.end method

.method static synthetic d(Lcom/sigmob/sdk/mraid/m;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/mraid/m;->s:Z

    return p1
.end method

.method static synthetic e(Lcom/sigmob/sdk/mraid/m;)I
    .locals 0

    iget p0, p0, Lcom/sigmob/sdk/mraid/m;->o:I

    return p0
.end method

.method static synthetic e(Lcom/sigmob/sdk/mraid/m;Ljava/lang/String;)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/m;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic f(Lcom/sigmob/sdk/mraid/m;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid/m;->a:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic f(Lcom/sigmob/sdk/mraid/m;Ljava/lang/String;)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/m;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic g(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/base/common/j;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid/m;->d:Lcom/sigmob/sdk/base/common/j;

    return-object p0
.end method

.method static synthetic g(Lcom/sigmob/sdk/mraid/m;Ljava/lang/String;)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/m;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic h(Lcom/sigmob/sdk/mraid/m;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid/m;->a:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic h(Lcom/sigmob/sdk/mraid/m;Ljava/lang/String;)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/m;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic i(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/base/common/j;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid/m;->d:Lcom/sigmob/sdk/base/common/j;

    return-object p0
.end method

.method static synthetic i(Lcom/sigmob/sdk/mraid/m;Ljava/lang/String;)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/m;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic j(Lcom/sigmob/sdk/mraid/m;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/mraid/m;->p:Z

    return p0
.end method

.method static synthetic k(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/base/common/j;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid/m;->d:Lcom/sigmob/sdk/base/common/j;

    return-object p0
.end method

.method static synthetic l(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/base/views/q;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid/m;->r:Lcom/sigmob/sdk/base/views/q;

    return-object p0
.end method

.method private l()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m;->n:Lcom/sigmob/sdk/base/views/x;

    if-eqz v0, :cond_0

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/x;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method static synthetic m(Lcom/sigmob/sdk/mraid/m;)Landroid/app/Activity;
    .locals 0

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/m;->k()Landroid/app/Activity;

    move-result-object p0

    return-object p0
.end method

.method private m()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m;->n:Lcom/sigmob/sdk/base/views/x;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m;->b:Landroid/content/Context;

    invoke-direct {p0, v0, v1}, Lcom/sigmob/sdk/mraid/m;->a(Landroid/content/Context;I)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m;->n:Lcom/sigmob/sdk/base/views/x;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/x;->setVisibility(I)V

    return-void
.end method

.method static synthetic n(Lcom/sigmob/sdk/mraid/m;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/mraid/m;->s:Z

    return p0
.end method

.method static synthetic o(Lcom/sigmob/sdk/mraid/m;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/mraid/m;->l()V

    return-void
.end method

.method static synthetic p(Lcom/sigmob/sdk/mraid/m;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/mraid/m;->m()V

    return-void
.end method

.method static synthetic q(Lcom/sigmob/sdk/mraid/m;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/m;->i()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic r(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/base/common/j;
    .locals 0

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/m;->h()Lcom/sigmob/sdk/base/common/j;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public a()Landroid/view/View;
    .locals 5

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m;->a:Ljava/lang/String;

    if-eqz v0, :cond_0

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/s;->a(Ljava/lang/String;)Lcom/sigmob/sdk/mraid/s$a;

    move-result-object v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/s$a;->d()Lcom/sigmob/sdk/mraid/d;

    move-result-object v1

    if-eqz v1, :cond_1

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/s$a;->d()Lcom/sigmob/sdk/mraid/d;

    move-result-object v1

    goto :goto_1

    :cond_1
    new-instance v1, Lcom/sigmob/sdk/mraid/d;

    iget-object v2, p0, Lcom/sigmob/sdk/mraid/m;->b:Landroid/content/Context;

    iget-object v3, p0, Lcom/sigmob/sdk/mraid/m;->k:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    sget-object v4, Lcom/sigmob/sdk/base/models/PlacementType;->INTERSTITIAL:Lcom/sigmob/sdk/base/models/PlacementType;

    invoke-direct {v1, v2, v3, v4}, Lcom/sigmob/sdk/mraid/d;-><init>(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/models/PlacementType;)V

    :goto_1
    iput-object v1, p0, Lcom/sigmob/sdk/mraid/m;->l:Lcom/sigmob/sdk/mraid/d;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/m;->l:Lcom/sigmob/sdk/mraid/d;

    iget-object v2, p0, Lcom/sigmob/sdk/mraid/m;->e:Lcom/sigmob/sdk/base/common/e;

    invoke-virtual {v1, v2}, Lcom/sigmob/sdk/mraid/d;->a(Lcom/sigmob/sdk/base/common/e;)V

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/m;->l:Lcom/sigmob/sdk/mraid/d;

    new-instance v2, Lcom/sigmob/sdk/mraid/m$2;

    invoke-direct {v2, p0}, Lcom/sigmob/sdk/mraid/m$2;-><init>(Lcom/sigmob/sdk/mraid/m;)V

    invoke-virtual {v1, v2}, Lcom/sigmob/sdk/mraid/d;->a(Lcom/sigmob/sdk/mraid/d$f;)V

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/m;->l:Lcom/sigmob/sdk/mraid/d;

    new-instance v2, Lcom/sigmob/sdk/mraid/m$3;

    invoke-direct {v2, p0}, Lcom/sigmob/sdk/mraid/m$3;-><init>(Lcom/sigmob/sdk/mraid/m;)V

    invoke-virtual {v1, v2}, Lcom/sigmob/sdk/mraid/d;->a(Lcom/sigmob/sdk/mraid/d$a;)V

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/m;->l:Lcom/sigmob/sdk/mraid/d;

    new-instance v2, Lcom/sigmob/sdk/mraid/m$4;

    invoke-direct {v2, p0}, Lcom/sigmob/sdk/mraid/m$4;-><init>(Lcom/sigmob/sdk/mraid/m;)V

    invoke-virtual {v1, v2}, Lcom/sigmob/sdk/mraid/d;->a(Lcom/sigmob/sdk/mraid/d$e;)V

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/s$a;->c()Lcom/sigmob/sdk/base/common/r;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/mraid/m;->f:Lcom/sigmob/sdk/base/common/r;

    goto :goto_2

    :cond_2
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m;->k:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getHtmlData()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m;->l:Lcom/sigmob/sdk/mraid/d;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/m;->k:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getHtmlData()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/sigmob/sdk/mraid/m$5;

    invoke-direct {v2, p0}, Lcom/sigmob/sdk/mraid/m$5;-><init>(Lcom/sigmob/sdk/mraid/m;)V

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/mraid/d;->a(Ljava/lang/String;Lcom/sigmob/sdk/mraid/d$b;)V

    goto :goto_2

    :cond_3
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m;->k:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getHtmlUrl()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m;->l:Lcom/sigmob/sdk/mraid/d;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/m;->k:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getHtmlUrl()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/sigmob/sdk/mraid/m$6;

    invoke-direct {v2, p0}, Lcom/sigmob/sdk/mraid/m$6;-><init>(Lcom/sigmob/sdk/mraid/m;)V

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/mraid/d;->b(Ljava/lang/String;Lcom/sigmob/sdk/mraid/d$b;)V

    :cond_4
    :goto_2
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m;->l:Lcom/sigmob/sdk/mraid/d;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/d;->p()Landroid/widget/FrameLayout;

    move-result-object v0

    return-object v0
.end method

.method public a(Landroid/content/res/Configuration;)V
    .locals 0

    return-void
.end method

.method public a(Landroid/os/Bundle;)V
    .locals 0

    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/common/a;)V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m;->l:Lcom/sigmob/sdk/mraid/d;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/d;->e()Ljava/lang/Integer;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/m;->l:Lcom/sigmob/sdk/mraid/d;

    new-instance v2, Lcom/sigmob/sdk/mraid/m$1;

    invoke-direct {v2, p0, p1, v0}, Lcom/sigmob/sdk/mraid/m$1;-><init>(Lcom/sigmob/sdk/mraid/m;Lcom/sigmob/sdk/base/common/a;Ljava/lang/Integer;)V

    invoke-virtual {v1, v2}, Lcom/sigmob/sdk/mraid/d;->a(Landroid/webkit/ValueCallback;)V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/mraid/q;)V
    .locals 1

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/m;->m:Lcom/sigmob/sdk/mraid/q;

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m;->l:Lcom/sigmob/sdk/mraid/d;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/mraid/d;->a(Lcom/sigmob/sdk/mraid/q;)V

    :cond_0
    return-void
.end method

.method public a(ZLcom/sigmob/sdk/base/a;)V
    .locals 8

    const-string v0, "com.sigmob.action.interstitial.click"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid/m;->a(Ljava/lang/String;)V

    if-eqz p1, :cond_2

    sget-object p1, Lcom/sigmob/sdk/mraid/m$8;->a:[I

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/a;->ordinal()I

    move-result p2

    aget p1, p1, p2

    const/4 p2, 0x1

    if-eq p1, p2, :cond_1

    const/4 p2, 0x2

    if-eq p1, p2, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m;->k:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/base/a;->b:Lcom/sigmob/sdk/base/a;

    iget-object v2, p0, Lcom/sigmob/sdk/mraid/m;->k:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/ClickCommon;->isDeeplink:Ljava/lang/String;

    iget-object v4, p1, Lcom/sigmob/sdk/base/models/ClickCommon;->clickUrl:Ljava/lang/String;

    iget-object v5, p1, Lcom/sigmob/sdk/base/models/ClickCommon;->clickCoordinate:Ljava/lang/String;

    iget p1, p0, Lcom/sigmob/sdk/mraid/m;->o:I

    int-to-long v6, p1

    const-string v1, "click"

    invoke-static/range {v0 .. v7}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V

    sget-object p1, Lcom/sigmob/sdk/base/common/a;->c:Lcom/sigmob/sdk/base/common/a;

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m;->k:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/base/a;->c:Lcom/sigmob/sdk/base/a;

    iget-object v2, p0, Lcom/sigmob/sdk/mraid/m;->k:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/ClickCommon;->isDeeplink:Ljava/lang/String;

    iget-object v4, p1, Lcom/sigmob/sdk/base/models/ClickCommon;->clickUrl:Ljava/lang/String;

    iget-object v5, p1, Lcom/sigmob/sdk/base/models/ClickCommon;->clickCoordinate:Ljava/lang/String;

    iget p1, p0, Lcom/sigmob/sdk/mraid/m;->o:I

    int-to-long v6, p1

    const-string v1, "click"

    invoke-static/range {v0 .. v7}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V

    sget-object p1, Lcom/sigmob/sdk/base/common/a;->v:Lcom/sigmob/sdk/base/common/a;

    goto :goto_0

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m;->k:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/base/a;->a:Lcom/sigmob/sdk/base/a;

    iget-object v2, p0, Lcom/sigmob/sdk/mraid/m;->k:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/ClickCommon;->isDeeplink:Ljava/lang/String;

    iget-object v4, p1, Lcom/sigmob/sdk/base/models/ClickCommon;->clickUrl:Ljava/lang/String;

    iget-object v5, p1, Lcom/sigmob/sdk/base/models/ClickCommon;->clickCoordinate:Ljava/lang/String;

    iget p1, p0, Lcom/sigmob/sdk/mraid/m;->o:I

    int-to-long v6, p1

    const-string v1, "click"

    invoke-static/range {v0 .. v7}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V

    sget-object p1, Lcom/sigmob/sdk/base/common/a;->u:Lcom/sigmob/sdk/base/common/a;

    :goto_0
    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/m;->a(Lcom/sigmob/sdk/base/common/a;)V

    :cond_2
    return-void
.end method

.method public b()V
    .locals 4

    invoke-super {p0}, Lcom/sigmob/sdk/videoAd/c;->b()V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m;->f:Lcom/sigmob/sdk/base/common/r;

    if-eqz v0, :cond_0

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->h:Lcom/sigmob/sdk/base/common/a;

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/base/common/r;->a(Lcom/sigmob/sdk/base/common/a;I)V

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/m;->a()Landroid/view/View;

    move-result-object v0

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/m;->j()Landroid/view/ViewGroup;

    move-result-object v1

    new-instance v2, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v3, -0x1

    invoke-direct {v2, v3, v3}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v1, v0, v2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m;->l:Lcom/sigmob/sdk/mraid/d;

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/m;->k()Landroid/app/Activity;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid/d;->a(Landroid/app/Activity;)V

    :cond_1
    const-string v0, "com.sigmob.action.interstitial.vopen"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid/m;->a(Ljava/lang/String;)V

    return-void
.end method

.method public c()V
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/mraid/m;->q:Z

    if-eqz v0, :cond_0

    const-string v0, "com.sigmob.action.interstitial.dismiss"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid/m;->a(Ljava/lang/String;)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m;->l:Lcom/sigmob/sdk/mraid/d;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/d;->b()V

    return-void
.end method

.method public d()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m;->l:Lcom/sigmob/sdk/mraid/d;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/d;->c()V

    return-void
.end method

.method public e()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m;->f:Lcom/sigmob/sdk/base/common/r;

    if-eqz v0, :cond_0

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->x:Lcom/sigmob/sdk/base/common/a;

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/base/common/r;->a(Lcom/sigmob/sdk/base/common/a;I)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m;->f:Lcom/sigmob/sdk/base/common/r;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/common/r;->a()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/mraid/m;->f:Lcom/sigmob/sdk/base/common/r;

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m;->l:Lcom/sigmob/sdk/mraid/d;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/d;->l()V

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m;->h:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/a;->k()V

    iget-boolean v0, p0, Lcom/sigmob/sdk/mraid/m;->q:Z

    if-nez v0, :cond_2

    const-string v0, "com.sigmob.action.interstitial.dismiss"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid/m;->a(Ljava/lang/String;)V

    :cond_2
    invoke-super {p0}, Lcom/sigmob/sdk/videoAd/c;->e()V

    return-void
.end method

.method public f()V
    .locals 0

    return-void
.end method

.method public g()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method
