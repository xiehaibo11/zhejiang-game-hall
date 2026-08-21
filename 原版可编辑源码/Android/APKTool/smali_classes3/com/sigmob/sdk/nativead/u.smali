.class public Lcom/sigmob/sdk/nativead/u;
.super Lcom/sigmob/sdk/base/common/i;


# static fields
.field private static g:Lcom/sigmob/sdk/nativead/n;


# instance fields
.field public final f:J

.field private h:Lcom/sigmob/sdk/nativead/z;

.field private i:Lcom/sigmob/sdk/nativead/z;

.field private j:Landroid/widget/RelativeLayout;

.field private k:Landroid/widget/FrameLayout;

.field private l:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field private m:Lcom/sigmob/sdk/nativead/b;

.field private n:Lcom/sigmob/sdk/mraid/d;

.field private o:Landroid/view/View;

.field private p:Lcom/sigmob/windad/natives/WindNativeAdData;

.field private q:Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;

.field private r:Landroid/widget/ImageView;

.field private s:Lcom/sigmob/sdk/base/views/q;

.field private t:Z

.field private u:Z


# direct methods
.method public constructor <init>(Landroid/app/Activity;Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/os/Bundle;Landroid/os/Bundle;Ljava/lang/String;Lcom/sigmob/sdk/base/common/j;)V
    .locals 0

    invoke-direct {p0, p1, p5, p6}, Lcom/sigmob/sdk/base/common/i;-><init>(Landroid/app/Activity;Ljava/lang/String;Lcom/sigmob/sdk/base/common/j;)V

    const-wide/16 p4, 0x12c

    iput-wide p4, p0, Lcom/sigmob/sdk/nativead/u;->f:J

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/sigmob/sdk/nativead/u;->t:Z

    iput-object p2, p0, Lcom/sigmob/sdk/nativead/u;->l:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdConfig()Lcom/sigmob/sdk/base/common/h;

    move-result-object p1

    check-cast p1, Lcom/sigmob/sdk/nativead/b;

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/u;->m:Lcom/sigmob/sdk/nativead/b;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/u;->k()Landroid/app/Activity;

    move-result-object p2

    iget-object p4, p0, Lcom/sigmob/sdk/nativead/u;->l:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    const/4 p5, 0x0

    invoke-virtual {p1, p2, p4, p5}, Lcom/sigmob/sdk/nativead/b;->a(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/views/q$b;)V

    const-string p1, "attr"

    invoke-virtual {p3, p1}, Landroid/os/Bundle;->getParcelable(Ljava/lang/String;)Landroid/os/Parcelable;

    move-result-object p1

    check-cast p1, Lcom/sigmob/sdk/nativead/z;

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/u;->h:Lcom/sigmob/sdk/nativead/z;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/u;->h()Lcom/sigmob/sdk/base/common/j;

    move-result-object p1

    const/4 p2, 0x1

    invoke-interface {p1, p2}, Lcom/sigmob/sdk/base/common/j;->a(I)V

    invoke-static {}, Lcom/sigmob/sdk/base/d;->a()I

    move-result p1

    if-eqz p1, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/u;->k()Landroid/app/Activity;

    move-result-object p3

    invoke-virtual {p3}, Landroid/app/Activity;->getTheme()Landroid/content/res/Resources$Theme;

    move-result-object p3

    invoke-virtual {p3, p1, p2}, Landroid/content/res/Resources$Theme;->applyStyle(IZ)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/common/j;
    .locals 0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/u;->h()Lcom/sigmob/sdk/base/common/j;

    move-result-object p0

    return-object p0
.end method

.method static synthetic a(Lcom/sigmob/sdk/nativead/u;Lcom/sigmob/sdk/base/views/q;)Lcom/sigmob/sdk/base/views/q;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/u;->s:Lcom/sigmob/sdk/base/views/q;

    return-object p1
.end method

.method static synthetic a(Lcom/sigmob/sdk/nativead/u;Lcom/sigmob/sdk/nativead/z;)Lcom/sigmob/sdk/nativead/z;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/u;->i:Lcom/sigmob/sdk/nativead/z;

    return-object p1
.end method

.method private a(Landroid/content/Context;)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u;->r:Landroid/widget/ImageView;

    if-eqz v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Landroid/widget/ImageView;

    invoke-direct {v0, p1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/u;->r:Landroid/widget/ImageView;

    sget-object p1, Lcom/sigmob/sdk/base/views/o;->e:Lcom/sigmob/sdk/base/views/o;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/views/o;->a()Landroid/graphics/Bitmap;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/u;->r:Landroid/widget/ImageView;

    sget-object v0, Landroid/widget/ImageView$ScaleType;->CENTER_CROP:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/u;->r:Landroid/widget/ImageView;

    const/16 v0, 0x7f

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setImageAlpha(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/u;->r:Landroid/widget/ImageView;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setClickable(Z)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/u;->r:Landroid/widget/ImageView;

    new-instance v0, Lcom/sigmob/sdk/nativead/u$3;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/nativead/u$3;-><init>(Lcom/sigmob/sdk/nativead/u;)V

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    const/high16 p1, 0x41a00000    # 20.0f

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u;->b:Landroid/content/Context;

    invoke-static {p1, v0}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result p1

    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v0, p1, p1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v1, 0xa

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 v1, 0x9

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    div-int/lit8 p1, p1, 0x2

    const/4 v1, 0x0

    invoke-virtual {v0, p1, p1, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/u;->j:Landroid/widget/RelativeLayout;

    if-eqz p1, :cond_1

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/u;->r:Landroid/widget/ImageView;

    invoke-virtual {p1, v1, v0}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_1
    return-void
.end method

.method public static a(Lcom/sigmob/sdk/nativead/i;)V
    .locals 1

    instance-of v0, p0, Lcom/sigmob/sdk/nativead/n;

    if-eqz v0, :cond_0

    check-cast p0, Lcom/sigmob/sdk/nativead/n;

    sput-object p0, Lcom/sigmob/sdk/nativead/u;->g:Lcom/sigmob/sdk/nativead/n;

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/nativead/u;Ljava/lang/String;)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/u;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/nativead/u;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/nativead/u;->t:Z

    return p1
.end method

.method static synthetic b(Lcom/sigmob/sdk/nativead/u;)Landroid/widget/FrameLayout;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/nativead/u;->k:Landroid/widget/FrameLayout;

    return-object p0
.end method

.method static synthetic b(Lcom/sigmob/sdk/nativead/u;Ljava/lang/String;)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/u;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic c(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/nativead/z;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/nativead/u;->i:Lcom/sigmob/sdk/nativead/z;

    return-object p0
.end method

.method static synthetic c(Lcom/sigmob/sdk/nativead/u;Ljava/lang/String;)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/u;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic d(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/nativead/z;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/nativead/u;->h:Lcom/sigmob/sdk/nativead/z;

    return-object p0
.end method

.method static synthetic e(Lcom/sigmob/sdk/nativead/u;)Landroid/widget/RelativeLayout;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/nativead/u;->j:Landroid/widget/RelativeLayout;

    return-object p0
.end method

.method static synthetic f(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/common/j;
    .locals 0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/u;->h()Lcom/sigmob/sdk/base/common/j;

    move-result-object p0

    return-object p0
.end method

.method static synthetic g(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/views/q;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/nativead/u;->s:Lcom/sigmob/sdk/base/views/q;

    return-object p0
.end method

.method static synthetic h(Lcom/sigmob/sdk/nativead/u;)Landroid/app/Activity;
    .locals 0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/u;->k()Landroid/app/Activity;

    move-result-object p0

    return-object p0
.end method

.method static synthetic i(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/models/BaseAdUnit;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/nativead/u;->l:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    return-object p0
.end method

.method static synthetic j(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/nativead/b;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/nativead/u;->m:Lcom/sigmob/sdk/nativead/b;

    return-object p0
.end method

.method static synthetic k(Lcom/sigmob/sdk/nativead/u;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/nativead/u;->t:Z

    return p0
.end method

.method static synthetic l(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/common/j;
    .locals 0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/u;->h()Lcom/sigmob/sdk/base/common/j;

    move-result-object p0

    return-object p0
.end method

.method static synthetic m(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/mraid/d;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/nativead/u;->n:Lcom/sigmob/sdk/mraid/d;

    return-object p0
.end method

.method static synthetic m()Lcom/sigmob/sdk/nativead/n;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/nativead/u;->g:Lcom/sigmob/sdk/nativead/n;

    return-object v0
.end method

.method private n()I
    .locals 6

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/sdk/common/ClientMetadata;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    iget v1, v0, Landroid/util/DisplayMetrics;->heightPixels:I

    iget v2, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    invoke-static {v1, v2}, Ljava/lang/Math;->max(II)I

    move-result v1

    div-int/lit8 v1, v1, 0x2

    iget v2, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    iget v0, v0, Landroid/util/DisplayMetrics;->heightPixels:I

    invoke-static {v2, v0}, Ljava/lang/Math;->min(II)I

    move-result v0

    int-to-double v2, v0

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u;->l:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdPercent()D

    move-result-wide v4

    div-double/2addr v2, v4

    double-to-int v0, v2

    invoke-static {v0, v1}, Ljava/lang/Math;->min(II)I

    move-result v0

    return v0
.end method

.method static synthetic n(Lcom/sigmob/sdk/nativead/u;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/u;->o()V

    return-void
.end method

.method private o()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u;->r:Landroid/widget/ImageView;

    if-eqz v0, :cond_0

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method static synthetic o(Lcom/sigmob/sdk/nativead/u;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/u;->p()V

    return-void
.end method

.method static synthetic p(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/common/j;
    .locals 0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/u;->h()Lcom/sigmob/sdk/base/common/j;

    move-result-object p0

    return-object p0
.end method

.method private p()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u;->r:Landroid/widget/ImageView;

    if-nez v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/u;->k()Landroid/app/Activity;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/sigmob/sdk/nativead/u;->a(Landroid/content/Context;)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u;->r:Landroid/widget/ImageView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    return-void
.end method

.method private q()V
    .locals 7

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/nativead/u;->u:Z

    sget-object v0, Lcom/sigmob/sdk/nativead/u;->g:Lcom/sigmob/sdk/nativead/n;

    if-eqz v0, :cond_0

    new-instance v0, Lcom/sigmob/sdk/nativead/aa;

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/u;->k:Landroid/widget/FrameLayout;

    iget-object v3, p0, Lcom/sigmob/sdk/nativead/u;->i:Lcom/sigmob/sdk/nativead/z;

    iget-object v4, p0, Lcom/sigmob/sdk/nativead/u;->h:Lcom/sigmob/sdk/nativead/z;

    const-wide/16 v5, 0x12c

    move-object v1, v0

    invoke-direct/range {v1 .. v6}, Lcom/sigmob/sdk/nativead/aa;-><init>(Landroid/view/ViewGroup;Lcom/sigmob/sdk/nativead/z;Lcom/sigmob/sdk/nativead/z;J)V

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/aa;->a()V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u;->j:Landroid/widget/RelativeLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u;->k:Landroid/widget/FrameLayout;

    new-instance v1, Lcom/sigmob/sdk/nativead/u$8;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/nativead/u$8;-><init>(Lcom/sigmob/sdk/nativead/u;)V

    const-wide/16 v2, 0x12c

    invoke-virtual {v0, v1, v2, v3}, Landroid/widget/FrameLayout;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/u;->h()Lcom/sigmob/sdk/base/common/j;

    move-result-object v0

    invoke-interface {v0}, Lcom/sigmob/sdk/base/common/j;->a()V

    :goto_0
    return-void
.end method


# virtual methods
.method public a()Lcom/sigmob/sdk/base/common/ab;
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u;->l:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getSessionManager()Lcom/sigmob/sdk/base/common/ab;

    move-result-object v0

    if-nez v0, :cond_0

    new-instance v0, Lcom/sigmob/sdk/nativead/e;

    invoke-direct {v0}, Lcom/sigmob/sdk/nativead/e;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/u;->l:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-interface {v0, v1}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :cond_0
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

.method public b()V
    .locals 5

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/u;->j()Landroid/view/ViewGroup;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/ViewGroup;->removeAllViews()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/u;->h()Lcom/sigmob/sdk/base/common/j;

    move-result-object v0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/u;->j()Landroid/view/ViewGroup;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/sigmob/sdk/base/common/j;->onSetContentView(Landroid/view/View;)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u;->l:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v0

    const-string v1, "template"

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/ClickCommon;->click_scene:Ljava/lang/String;

    new-instance v0, Landroid/widget/RelativeLayout;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/u;->k()Landroid/app/Activity;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/u;->j:Landroid/widget/RelativeLayout;

    const/4 v1, -0x1

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setBackgroundColor(I)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/u;->l()Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/u;->o:Landroid/view/View;

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u;->n:Lcom/sigmob/sdk/mraid/d;

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/u;->k()Landroid/app/Activity;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/mraid/d;->a(Landroid/app/Activity;)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u;->j:Landroid/widget/RelativeLayout;

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/u;->o:Landroid/view/View;

    new-instance v3, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v3, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v2, v3}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    sget-object v2, Lcom/sigmob/sdk/nativead/u;->g:Lcom/sigmob/sdk/nativead/n;

    if-eqz v2, :cond_1

    invoke-virtual {v2}, Lcom/sigmob/sdk/nativead/n;->getNativeAdUnit()Lcom/sigmob/windad/natives/WindNativeAdData;

    move-result-object v2

    iput-object v2, p0, Lcom/sigmob/sdk/nativead/u;->p:Lcom/sigmob/windad/natives/WindNativeAdData;

    if-eqz v2, :cond_1

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/u;->n()I

    move-result v2

    const/4 v3, 0x0

    invoke-virtual {v0, v3, v2, v3, v3}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    :cond_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/u;->j()Landroid/view/ViewGroup;

    move-result-object v2

    iget-object v3, p0, Lcom/sigmob/sdk/nativead/u;->j:Landroid/widget/RelativeLayout;

    invoke-virtual {v2, v3, v0}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    sget-object v0, Lcom/sigmob/sdk/nativead/u;->g:Lcom/sigmob/sdk/nativead/n;

    if-eqz v0, :cond_2

    new-instance v0, Landroid/widget/FrameLayout;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/u;->k()Landroid/app/Activity;

    move-result-object v2

    invoke-direct {v0, v2}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/u;->k:Landroid/widget/FrameLayout;

    sget-object v0, Lcom/sigmob/sdk/nativead/u;->g:Lcom/sigmob/sdk/nativead/n;

    new-instance v2, Lcom/sigmob/sdk/nativead/u$1;

    invoke-direct {v2, p0}, Lcom/sigmob/sdk/nativead/u$1;-><init>(Lcom/sigmob/sdk/nativead/u;)V

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/nativead/n;->setBackClickListener(Landroid/view/View$OnClickListener;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/u;->j()Landroid/view/ViewGroup;

    move-result-object v0

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/u;->k:Landroid/widget/FrameLayout;

    new-instance v3, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/u;->n()I

    move-result v4

    invoke-direct {v3, v1, v4}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v2, v3}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    sget-object v0, Lcom/sigmob/sdk/nativead/u;->g:Lcom/sigmob/sdk/nativead/n;

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/n;->getSigVideoAdController()Lcom/sigmob/sdk/nativead/p;

    move-result-object v0

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/p;->c()V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u;->k:Landroid/widget/FrameLayout;

    invoke-virtual {v0}, Landroid/widget/FrameLayout;->getViewTreeObserver()Landroid/view/ViewTreeObserver;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/nativead/u$2;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/nativead/u$2;-><init>(Lcom/sigmob/sdk/nativead/u;)V

    invoke-virtual {v0, v1}, Landroid/view/ViewTreeObserver;->addOnPreDrawListener(Landroid/view/ViewTreeObserver$OnPreDrawListener;)V

    :cond_2
    const/16 v0, 0x64

    const-string v1, "com.sigmob.action.native.temple.show"

    invoke-virtual {p0, v1, v0}, Lcom/sigmob/sdk/nativead/u;->a(Ljava/lang/String;I)V

    return-void
.end method

.method public c()V
    .locals 2

    sget-object v0, Lcom/sigmob/sdk/nativead/u;->g:Lcom/sigmob/sdk/nativead/n;

    if-eqz v0, :cond_0

    iget-boolean v1, p0, Lcom/sigmob/sdk/nativead/u;->u:Z

    if-nez v1, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/n;->getSigVideoAdController()Lcom/sigmob/sdk/nativead/p;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/p;->a()V

    :cond_0
    return-void
.end method

.method public d()V
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/nativead/u;->g:Lcom/sigmob/sdk/nativead/n;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/n;->getSigVideoAdController()Lcom/sigmob/sdk/nativead/p;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/p;->c()V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u;->n:Lcom/sigmob/sdk/mraid/d;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/d;->c()V

    :cond_1
    return-void
.end method

.method public e()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u;->q:Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {v0, v0}, Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;->b(Landroid/content/BroadcastReceiver;)V

    iput-object v1, p0, Lcom/sigmob/sdk/nativead/u;->q:Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u;->n:Lcom/sigmob/sdk/mraid/d;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/d;->l()V

    iput-object v1, p0, Lcom/sigmob/sdk/nativead/u;->n:Lcom/sigmob/sdk/mraid/d;

    :cond_1
    sget-object v0, Lcom/sigmob/sdk/nativead/u;->g:Lcom/sigmob/sdk/nativead/n;

    if-eqz v0, :cond_2

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/nativead/n;->setBackClickListener(Landroid/view/View$OnClickListener;)V

    sput-object v1, Lcom/sigmob/sdk/nativead/u;->g:Lcom/sigmob/sdk/nativead/n;

    :cond_2
    const-string v0, "com.sigmob.action.native.temple.dismiss"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/nativead/u;->a(Ljava/lang/String;)V

    invoke-super {p0}, Lcom/sigmob/sdk/base/common/i;->e()V

    return-void
.end method

.method public f()V
    .locals 0

    return-void
.end method

.method public g()Z
    .locals 2

    sget-object v0, Lcom/sigmob/sdk/nativead/u;->g:Lcom/sigmob/sdk/nativead/n;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/n;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    return v1

    :cond_0
    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/u;->q()V

    return v1
.end method

.method public l()Landroid/view/View;
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u;->n:Lcom/sigmob/sdk/mraid/d;

    if-nez v0, :cond_0

    new-instance v0, Lcom/sigmob/sdk/mraid/d;

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/u;->b:Landroid/content/Context;

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/u;->l:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    sget-object v3, Lcom/sigmob/sdk/base/models/PlacementType;->INTERSTITIAL:Lcom/sigmob/sdk/base/models/PlacementType;

    invoke-direct {v0, v1, v2, v3}, Lcom/sigmob/sdk/mraid/d;-><init>(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/models/PlacementType;)V

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/u;->n:Lcom/sigmob/sdk/mraid/d;

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u;->n:Lcom/sigmob/sdk/mraid/d;

    new-instance v1, Lcom/sigmob/sdk/nativead/u$4;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/nativead/u$4;-><init>(Lcom/sigmob/sdk/nativead/u;)V

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid/d;->a(Lcom/sigmob/sdk/mraid/d$a;)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u;->l:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getHtmlUrl()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u;->n:Lcom/sigmob/sdk/mraid/d;

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/u;->l:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getHtmlUrl()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/sigmob/sdk/nativead/u$5;

    invoke-direct {v2, p0}, Lcom/sigmob/sdk/nativead/u$5;-><init>(Lcom/sigmob/sdk/nativead/u;)V

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/mraid/d;->b(Ljava/lang/String;Lcom/sigmob/sdk/mraid/d$b;)V

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u;->l:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getHtmlData()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u;->n:Lcom/sigmob/sdk/mraid/d;

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/u;->l:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getHtmlData()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/sigmob/sdk/nativead/u$6;

    invoke-direct {v2, p0}, Lcom/sigmob/sdk/nativead/u$6;-><init>(Lcom/sigmob/sdk/nativead/u;)V

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/mraid/d;->a(Ljava/lang/String;Lcom/sigmob/sdk/mraid/d$b;)V

    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u;->n:Lcom/sigmob/sdk/mraid/d;

    new-instance v1, Lcom/sigmob/sdk/nativead/u$7;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/nativead/u$7;-><init>(Lcom/sigmob/sdk/nativead/u;)V

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid/d;->a(Lcom/sigmob/sdk/mraid/d$e;)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u;->n:Lcom/sigmob/sdk/mraid/d;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/d;->p()Landroid/widget/FrameLayout;

    move-result-object v0

    return-object v0
.end method
