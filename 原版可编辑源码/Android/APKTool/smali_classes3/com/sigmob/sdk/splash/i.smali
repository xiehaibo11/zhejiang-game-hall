.class public final Lcom/sigmob/sdk/splash/i;
.super Landroid/widget/RelativeLayout;


# static fields
.field private static a:F = 25.0f

.field private static b:F = 13.0f


# instance fields
.field private c:Lcom/sigmob/sdk/splash/d;

.field private d:Landroid/content/Context;

.field private e:Landroid/widget/RelativeLayout;

.field private f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field private g:Lcom/sigmob/sdk/splash/c;

.field private h:Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;

.field private i:Ljava/lang/String;

.field private j:Z

.field private k:Landroid/widget/TextView;

.field private l:Ljava/lang/String;

.field private m:Landroid/widget/RelativeLayout;

.field private n:Landroid/widget/RelativeLayout;

.field private o:Landroid/view/View$OnTouchListener;

.field private p:F

.field private q:Lcom/sigmob/sdk/base/views/v;

.field private r:Z

.field private s:Landroid/hardware/SensorManager;

.field private t:Z

.field private u:Landroid/hardware/SensorEventListener;

.field private v:Z


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    const/high16 v0, 0x3f800000    # 1.0f

    iput v0, p0, Lcom/sigmob/sdk/splash/i;->p:F

    new-instance v0, Lcom/sigmob/sdk/splash/i$1;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/splash/i$1;-><init>(Lcom/sigmob/sdk/splash/i;)V

    iput-object v0, p0, Lcom/sigmob/sdk/splash/i;->u:Landroid/hardware/SensorEventListener;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/splash/i;->d:Landroid/content/Context;

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/splash/i;)Lcom/sigmob/sdk/base/views/v;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/splash/i;->q:Lcom/sigmob/sdk/base/views/v;

    return-object p0
.end method

.method private a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;)V
    .locals 5

    const-string v0, "handleUrlAction: "

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    new-instance v0, Lcom/sigmob/sdk/base/common/ag$a;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/common/ag$a;-><init>()V

    sget-object v1, Lcom/sigmob/sdk/base/common/af;->a:Lcom/sigmob/sdk/base/common/af;

    const/4 v2, 0x5

    new-array v2, v2, [Lcom/sigmob/sdk/base/common/af;

    sget-object v3, Lcom/sigmob/sdk/base/common/af;->e:Lcom/sigmob/sdk/base/common/af;

    const/4 v4, 0x0

    aput-object v3, v2, v4

    sget-object v3, Lcom/sigmob/sdk/base/common/af;->d:Lcom/sigmob/sdk/base/common/af;

    const/4 v4, 0x1

    aput-object v3, v2, v4

    sget-object v3, Lcom/sigmob/sdk/base/common/af;->f:Lcom/sigmob/sdk/base/common/af;

    const/4 v4, 0x2

    aput-object v3, v2, v4

    sget-object v3, Lcom/sigmob/sdk/base/common/af;->c:Lcom/sigmob/sdk/base/common/af;

    const/4 v4, 0x3

    aput-object v3, v2, v4

    sget-object v3, Lcom/sigmob/sdk/base/common/af;->b:Lcom/sigmob/sdk/base/common/af;

    const/4 v4, 0x4

    aput-object v3, v2, v4

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/base/common/ag$a;->a(Lcom/sigmob/sdk/base/common/af;[Lcom/sigmob/sdk/base/common/af;)Lcom/sigmob/sdk/base/common/ag$a;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/splash/i$5;

    invoke-direct {v1, p0, p1, p2}, Lcom/sigmob/sdk/splash/i$5;-><init>(Lcom/sigmob/sdk/splash/i;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/common/ag$a;->a(Lcom/sigmob/sdk/base/common/ag$b;)Lcom/sigmob/sdk/base/common/ag$a;

    move-result-object p2

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->isSkipSigmobBrowser()Z

    move-result v0

    invoke-virtual {p2, v0}, Lcom/sigmob/sdk/base/common/ag$a;->a(Z)Lcom/sigmob/sdk/base/common/ag$a;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/sigmob/sdk/base/common/ag$a;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Lcom/sigmob/sdk/base/common/ag$a;

    move-result-object p2

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object p1

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/Ad;->forbiden_parse_landingpage:Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    invoke-virtual {p2, p1}, Lcom/sigmob/sdk/base/common/ag$a;->b(Z)Lcom/sigmob/sdk/base/common/ag$a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/common/ag$a;->a()Lcom/sigmob/sdk/base/common/ag;

    move-result-object p1

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object p2

    const/4 v0, 0x0

    invoke-virtual {p1, p2, v0}, Lcom/sigmob/sdk/base/common/ag;->a(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/splash/i;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/splash/i;->a(Ljava/lang/String;)V

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 1

    const-string v0, "handleClick: "

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/splash/i;->r:Z

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-direct {p0, v0, p1}, Lcom/sigmob/sdk/splash/i;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/splash/i;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/splash/i;->t:Z

    return p1
.end method

.method private b(Landroid/content/Context;)V
    .locals 6

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-static {p1, v0}, Lcom/sigmob/sdk/splash/d;->a(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;)Lcom/sigmob/sdk/splash/d;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/splash/i;->c:Lcom/sigmob/sdk/splash/d;

    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    iget-object v2, p0, Lcom/sigmob/sdk/splash/i;->c:Lcom/sigmob/sdk/splash/d;

    invoke-virtual {p0, v2, v0}, Lcom/sigmob/sdk/splash/i;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    new-instance v0, Landroid/widget/RelativeLayout;

    invoke-direct {v0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/splash/i;->n:Landroid/widget/RelativeLayout;

    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    sget v1, Lcom/sigmob/sdk/splash/i;->a:F

    iget-object v2, p0, Lcom/sigmob/sdk/splash/i;->d:Landroid/content/Context;

    invoke-static {v1, v2}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v1

    int-to-double v2, v1

    const-wide/high16 v4, 0x4004000000000000L    # 2.5

    mul-double/2addr v2, v4

    double-to-int v2, v2

    invoke-virtual {v0, v1, v2, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    iget-object v1, p0, Lcom/sigmob/sdk/splash/i;->n:Landroid/widget/RelativeLayout;

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout;->setClickable(Z)V

    iget-object v1, p0, Lcom/sigmob/sdk/splash/i;->n:Landroid/widget/RelativeLayout;

    invoke-virtual {p0, v1, v0}, Lcom/sigmob/sdk/splash/i;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    new-instance v0, Landroid/widget/RelativeLayout;

    invoke-direct {v0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/splash/i;->e:Landroid/widget/RelativeLayout;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->generateViewId()I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setId(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i;->e:Landroid/widget/RelativeLayout;

    new-instance v1, Lcom/sigmob/sdk/splash/i$3;

    invoke-direct {v1, p0, p1}, Lcom/sigmob/sdk/splash/i$3;-><init>(Lcom/sigmob/sdk/splash/i;Landroid/content/Context;)V

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    new-instance p1, Lcom/sigmob/sdk/splash/i$4;

    invoke-direct {p1, p0}, Lcom/sigmob/sdk/splash/i$4;-><init>(Lcom/sigmob/sdk/splash/i;)V

    iput-object p1, p0, Lcom/sigmob/sdk/splash/i;->o:Landroid/view/View$OnTouchListener;

    iget-object p1, p0, Lcom/sigmob/sdk/splash/i;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->enable_full_click()Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/splash/i;->n:Landroid/widget/RelativeLayout;

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i;->o:Landroid/view/View$OnTouchListener;

    invoke-virtual {p1, v0}, Landroid/widget/RelativeLayout;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/sigmob/sdk/splash/i;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/splash/i;->r:Z

    return p0
.end method

.method private c(Landroid/content/Context;)Landroid/view/View;
    .locals 3

    new-instance v0, Landroid/widget/TextView;

    invoke-direct {v0, p1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->generateViewId()I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setId(I)V

    invoke-static {}, Lcom/sigmob/sdk/base/d;->g()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const/4 v1, 0x1

    const/high16 v2, 0x41200000    # 10.0f

    invoke-virtual {v0, v1, v2}, Landroid/widget/TextView;->setTextSize(IF)V

    const-string v1, "#dadada"

    invoke-static {v1}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setTextColor(I)V

    const/16 v1, 0x11

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setGravity(I)V

    const/high16 v1, 0x40a00000    # 5.0f

    invoke-static {v1, p1}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result p1

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1, p1, v1}, Landroid/widget/TextView;->setPadding(IIII)V

    const-string p1, "#B3505050"

    invoke-static {p1}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result p1

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setBackgroundColor(I)V

    return-object v0
.end method

.method static synthetic c(Lcom/sigmob/sdk/splash/i;)Lcom/sigmob/sdk/base/models/BaseAdUnit;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/splash/i;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    return-object p0
.end method

.method private d(Landroid/content/Context;)V
    .locals 5

    new-instance v0, Landroid/widget/RelativeLayout;

    invoke-direct {v0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/high16 v2, 0x41700000    # 15.0f

    invoke-static {v2, p1}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v2

    const/4 v3, -0x2

    invoke-direct {v1, v3, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    iget-object v2, p0, Lcom/sigmob/sdk/splash/i;->m:Landroid/widget/RelativeLayout;

    const/4 v3, 0x0

    if-eqz v2, :cond_0

    const/4 v2, 0x4

    iget-object v4, p0, Lcom/sigmob/sdk/splash/i;->e:Landroid/widget/RelativeLayout;

    invoke-virtual {v4}, Landroid/widget/RelativeLayout;->getId()I

    move-result v4

    invoke-virtual {v1, v2, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    const/16 v2, 0x9

    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    sget v2, Lcom/sigmob/sdk/splash/i;->a:F

    iget v4, p0, Lcom/sigmob/sdk/splash/i;->p:F

    mul-float/2addr v2, v4

    invoke-static {v2, p1}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v2

    div-int/lit8 v2, v2, 0x2

    invoke-virtual {v1, v2, v3, v3, v3}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    goto :goto_0

    :cond_0
    const/16 v2, 0xc

    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 v2, 0xb

    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    iget-boolean v2, p0, Lcom/sigmob/sdk/splash/i;->j:Z

    if-nez v2, :cond_1

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v2

    invoke-virtual {v2}, Lcom/czhj/sdk/common/ClientMetadata;->getInsetBottom()I

    move-result v2

    invoke-virtual {v1, v3, v3, v3, v2}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    :cond_1
    :goto_0
    invoke-direct {p0, p1}, Lcom/sigmob/sdk/splash/i;->c(Landroid/content/Context;)Landroid/view/View;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    invoke-virtual {p0, v0, v1}, Lcom/sigmob/sdk/splash/i;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method static synthetic d(Lcom/sigmob/sdk/splash/i;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/splash/i;->v:Z

    return p0
.end method

.method static synthetic e(Lcom/sigmob/sdk/splash/i;)Landroid/content/Context;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/splash/i;->d:Landroid/content/Context;

    return-object p0
.end method

.method private e(Landroid/content/Context;)V
    .locals 7

    iget v0, p0, Lcom/sigmob/sdk/splash/i;->p:F

    const/high16 v1, 0x41f00000    # 30.0f

    mul-float/2addr v0, v1

    invoke-static {v0, p1}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v0

    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v2, -0x2

    invoke-direct {v1, v2, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v3, 0xb

    invoke-virtual {v1, v3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 v3, 0xa

    invoke-virtual {v1, v3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    div-int/lit8 v0, v0, 0x2

    const-string v3, "#B3505050"

    invoke-static {v3}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v3

    const/4 v4, 0x0

    invoke-virtual {v1, v4, v0, v0, v4}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    new-instance v5, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v5}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    invoke-virtual {v5, v3}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    int-to-float v3, v0

    invoke-virtual {v5, v3}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v6, 0x10

    if-lt v3, v6, :cond_0

    iget-object v3, p0, Lcom/sigmob/sdk/splash/i;->e:Landroid/widget/RelativeLayout;

    invoke-virtual {v3, v5}, Landroid/widget/RelativeLayout;->setBackground(Landroid/graphics/drawable/Drawable;)V

    goto :goto_0

    :cond_0
    iget-object v3, p0, Lcom/sigmob/sdk/splash/i;->e:Landroid/widget/RelativeLayout;

    invoke-virtual {v3, v5}, Landroid/widget/RelativeLayout;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    :goto_0
    iget-object v3, p0, Lcom/sigmob/sdk/splash/i;->e:Landroid/widget/RelativeLayout;

    invoke-virtual {v3, v0, v4, v0, v4}, Landroid/widget/RelativeLayout;->setPadding(IIII)V

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i;->e:Landroid/widget/RelativeLayout;

    invoke-virtual {p0, v0, v1}, Lcom/sigmob/sdk/splash/i;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    new-instance v0, Landroid/widget/TextView;

    invoke-direct {v0, p1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/splash/i;->k:Landroid/widget/TextView;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->generateViewId()I

    move-result p1

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setId(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/splash/i;->k:Landroid/widget/TextView;

    const/4 v0, 0x1

    sget v1, Lcom/sigmob/sdk/splash/i;->b:F

    float-to-int v1, v1

    int-to-float v1, v1

    invoke-virtual {p1, v0, v1}, Landroid/widget/TextView;->setTextSize(IF)V

    iget-object p1, p0, Lcom/sigmob/sdk/splash/i;->k:Landroid/widget/TextView;

    const-string v0, "#dadada"

    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setTextColor(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/splash/i;->k:Landroid/widget/TextView;

    const/16 v0, 0x11

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setGravity(I)V

    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v0, -0x1

    invoke-direct {p1, v2, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v0, 0xf

    invoke-virtual {p1, v0}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i;->e:Landroid/widget/RelativeLayout;

    iget-object v1, p0, Lcom/sigmob/sdk/splash/i;->k:Landroid/widget/TextView;

    invoke-virtual {v0, v1, p1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method static synthetic f(Lcom/sigmob/sdk/splash/i;)Lcom/sigmob/sdk/splash/c;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/splash/i;->g:Lcom/sigmob/sdk/splash/c;

    return-object p0
.end method

.method private f(Landroid/content/Context;)V
    .locals 4

    new-instance v0, Lcom/sigmob/sdk/base/views/v;

    invoke-direct {v0, p1}, Lcom/sigmob/sdk/base/views/v;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/splash/i;->q:Lcom/sigmob/sdk/base/views/v;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/v;->a(I)V

    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v2, -0x2

    invoke-direct {v0, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/splash/i;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x42200000    # 40.0f

    invoke-static {v3, v2}, Lcom/czhj/sdk/common/utils/Dips;->asIntPixels(FLandroid/content/Context;)I

    move-result v2

    const/4 v3, 0x0

    invoke-virtual {v0, v3, v3, v3, v2}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    const/16 v2, 0xc

    invoke-virtual {v0, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 v2, 0xe

    invoke-virtual {v0, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    iget-object v2, p0, Lcom/sigmob/sdk/splash/i;->q:Lcom/sigmob/sdk/base/views/v;

    invoke-virtual {p0, v2, v0}, Lcom/sigmob/sdk/splash/i;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    const-string v0, "sensor"

    invoke-virtual {p1, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/hardware/SensorManager;

    iput-object p1, p0, Lcom/sigmob/sdk/splash/i;->s:Landroid/hardware/SensorManager;

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i;->u:Landroid/hardware/SensorEventListener;

    invoke-virtual {p1, v1}, Landroid/hardware/SensorManager;->getDefaultSensor(I)Landroid/hardware/Sensor;

    move-result-object v1

    const/4 v2, 0x3

    invoke-virtual {p1, v0, v1, v2}, Landroid/hardware/SensorManager;->registerListener(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;I)Z

    :cond_0
    return-void
.end method

.method private g(Landroid/content/Context;)Landroid/view/View;
    .locals 3

    new-instance v0, Landroid/widget/ImageView;

    invoke-direct {v0, p1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    invoke-static {p1}, Landroid/graphics/Color;->alpha(I)I

    move-result p1

    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setBackgroundColor(I)V

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->generateViewId()I

    move-result p1

    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setId(I)V

    sget-object p1, Landroid/widget/ImageView$ScaleType;->FIT_XY:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    invoke-static {}, Lcom/czhj/sdk/common/network/Networking;->getImageLoader()Lcom/czhj/volley/toolbox/ImageLoader;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/splash/i;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_source_logo()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/sigmob/sdk/splash/i$6;

    invoke-direct {v2, p0, v0}, Lcom/sigmob/sdk/splash/i$6;-><init>(Lcom/sigmob/sdk/splash/i;Landroid/widget/ImageView;)V

    invoke-virtual {p1, v1, v2}, Lcom/czhj/volley/toolbox/ImageLoader;->get(Ljava/lang/String;Lcom/czhj/volley/toolbox/ImageLoader$ImageListener;)Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/splash/i;->h:Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;

    :cond_0
    return-object v0
.end method

.method private h(Landroid/content/Context;)V
    .locals 5

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_source_logo()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Landroid/widget/RelativeLayout;

    invoke-direct {v0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/splash/i;->g(Landroid/content/Context;)Landroid/view/View;

    move-result-object v1

    new-instance v2, Landroid/widget/RelativeLayout$LayoutParams;

    const/high16 v3, 0x41500000    # 13.0f

    invoke-static {v3, p1}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v4

    invoke-static {v3, p1}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result p1

    invoke-direct {v2, v4, p1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    iget-boolean p1, p0, Lcom/sigmob/sdk/splash/i;->j:Z

    if-nez p1, :cond_1

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object p1

    invoke-virtual {p1}, Lcom/czhj/sdk/common/ClientMetadata;->getInsetBottom()I

    move-result p1

    const/4 v3, 0x0

    invoke-virtual {v2, v3, v3, v3, p1}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    :cond_1
    const/16 p1, 0xc

    invoke-virtual {v2, p1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 p1, 0xb

    invoke-virtual {v2, p1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v3, -0x1

    invoke-direct {p1, v3, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v1, p1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    iget-object p1, p0, Lcom/sigmob/sdk/splash/i;->m:Landroid/widget/RelativeLayout;

    if-eqz p1, :cond_2

    const/4 v1, 0x2

    invoke-virtual {p1}, Landroid/widget/RelativeLayout;->getId()I

    move-result p1

    invoke-virtual {v2, v1, p1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    :cond_2
    invoke-virtual {p0, v0, v2}, Lcom/sigmob/sdk/splash/i;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method private i(Landroid/content/Context;)V
    .locals 4

    new-instance v0, Lcom/sigmob/sdk/base/views/b;

    invoke-virtual {p0}, Lcom/sigmob/sdk/splash/i;->getContext()Landroid/content/Context;

    move-result-object v1

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/sigmob/sdk/base/views/b;-><init>(Landroid/content/Context;I)V

    iget-object v1, p0, Lcom/sigmob/sdk/splash/i;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_source_logo()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/b;->a(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/splash/i;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getInvisibleAdLabel()Z

    move-result v1

    if-nez v1, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/base/d;->g()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/b;->b(Ljava/lang/String;)V

    :cond_0
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v3, -0x2

    invoke-direct {v1, v3, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/high16 v3, 0x40a00000    # 5.0f

    invoke-static {v3, p1}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result p1

    const/16 v3, 0xc

    invoke-virtual {v1, v3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 v3, 0x9

    invoke-virtual {v1, v3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    invoke-virtual {v1, p1, v2, v2, p1}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    invoke-virtual {p0, v0, v1}, Lcom/sigmob/sdk/splash/i;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method


# virtual methods
.method protected a()V
    .locals 2

    const/16 v0, 0x8

    invoke-super {p0, v0}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    iget-object v1, p0, Lcom/sigmob/sdk/splash/i;->c:Lcom/sigmob/sdk/splash/d;

    if-eqz v1, :cond_0

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/splash/d;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method public a(Landroid/content/Context;)V
    .locals 8

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    const/4 v1, 0x1

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->template_type:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v2, 0x5

    if-eq v0, v2, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getInteractionType()I

    move-result v0

    if-ne v0, v1, :cond_0

    const-string v0, "\u70b9\u51fb\u67e5\u770b\u8be6\u60c5"

    goto :goto_0

    :cond_0
    const-string v0, "\u70b9\u51fb\u8df3\u8f6c\u7b2c\u4e09\u65b9\u5e94\u7528"

    goto :goto_0

    :cond_1
    const-string v0, ""

    :goto_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_2

    return-void

    :cond_2
    const/high16 v2, 0x428c0000    # 70.0f

    invoke-static {v2, p1}, Lcom/czhj/sdk/common/utils/Dips;->asIntPixels(FLandroid/content/Context;)I

    move-result v2

    new-instance v3, Landroid/widget/RelativeLayout;

    invoke-direct {v3, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    iput-object v3, p0, Lcom/sigmob/sdk/splash/i;->m:Landroid/widget/RelativeLayout;

    iget-object v4, p0, Lcom/sigmob/sdk/splash/i;->o:Landroid/view/View$OnTouchListener;

    invoke-virtual {v3, v4}, Landroid/widget/RelativeLayout;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    iget-object v3, p0, Lcom/sigmob/sdk/splash/i;->m:Landroid/widget/RelativeLayout;

    invoke-virtual {v3, v1}, Landroid/widget/RelativeLayout;->setClickable(Z)V

    iget-object v3, p0, Lcom/sigmob/sdk/splash/i;->m:Landroid/widget/RelativeLayout;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->generateViewId()I

    move-result v4

    invoke-virtual {v3, v4}, Landroid/widget/RelativeLayout;->setId(I)V

    iget-object v3, p0, Lcom/sigmob/sdk/splash/i;->m:Landroid/widget/RelativeLayout;

    div-int/lit8 v4, v2, 0x2

    const/4 v5, 0x0

    invoke-virtual {v3, v4, v5, v4, v5}, Landroid/widget/RelativeLayout;->setPadding(IIII)V

    iget-object v3, p0, Lcom/sigmob/sdk/splash/i;->m:Landroid/widget/RelativeLayout;

    const/16 v6, 0x10

    invoke-virtual {v3, v6}, Landroid/widget/RelativeLayout;->setGravity(I)V

    new-instance v3, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v3}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    const/high16 v7, -0x1000000

    invoke-virtual {v3, v7}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    const/16 v7, 0x66

    invoke-virtual {v3, v7}, Landroid/graphics/drawable/GradientDrawable;->setAlpha(I)V

    int-to-float v4, v4

    invoke-virtual {v3, v4}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    sget v4, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v4, v6, :cond_3

    iget-object v4, p0, Lcom/sigmob/sdk/splash/i;->m:Landroid/widget/RelativeLayout;

    invoke-virtual {v4, v3}, Landroid/widget/RelativeLayout;->setBackground(Landroid/graphics/drawable/Drawable;)V

    goto :goto_1

    :cond_3
    iget-object v4, p0, Lcom/sigmob/sdk/splash/i;->m:Landroid/widget/RelativeLayout;

    invoke-virtual {v4, v3}, Landroid/widget/RelativeLayout;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    :goto_1
    new-instance v3, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v4, -0x1

    invoke-direct {v3, v4, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v6, 0xc

    invoke-virtual {v3, v6}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 v6, 0xe

    invoke-virtual {v3, v6}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    mul-int/lit8 v7, v2, 0x2

    div-int/lit8 v7, v7, 0x7

    invoke-virtual {v3, v7, v5, v7, v2}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    iget-object v7, p0, Lcom/sigmob/sdk/splash/i;->m:Landroid/widget/RelativeLayout;

    invoke-virtual {p0, v7, v3}, Lcom/sigmob/sdk/splash/i;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    new-instance v3, Landroid/widget/TextView;

    invoke-direct {v3, p1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->generateViewId()I

    move-result v7

    invoke-virtual {v3, v7}, Landroid/widget/TextView;->setId(I)V

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setTextColor(I)V

    invoke-virtual {v3}, Landroid/widget/TextView;->setSingleLine()V

    const/16 v4, 0x11

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setGravity(I)V

    invoke-virtual {v3, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const/high16 v0, 0x41a00000    # 20.0f

    invoke-virtual {v3, v1, v0}, Landroid/widget/TextView;->setTextSize(IF)V

    invoke-virtual {v3}, Landroid/widget/TextView;->getPaint()Landroid/text/TextPaint;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/text/TextPaint;->setFakeBoldText(Z)V

    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v4, -0x2

    invoke-direct {v0, v4, v4}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v4, 0xd

    invoke-virtual {v0, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    iget-object v4, p0, Lcom/sigmob/sdk/splash/i;->m:Landroid/widget/RelativeLayout;

    invoke-virtual {v4, v3, v0}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    new-instance v0, Landroid/widget/ImageView;

    invoke-direct {v0, p1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    sget-object p1, Landroid/widget/ImageView$ScaleType;->CENTER:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    sget-object p1, Lcom/sigmob/sdk/base/views/o;->i:Lcom/sigmob/sdk/base/views/o;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/views/o;->a()Landroid/graphics/Bitmap;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    div-int/lit8 v4, v2, 0x7

    mul-int/lit8 v2, v2, 0x3

    div-int/2addr v2, v6

    invoke-direct {p1, v4, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v3}, Landroid/widget/TextView;->getId()I

    move-result v2

    invoke-virtual {p1, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    const/16 v1, 0xf

    invoke-virtual {p1, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    invoke-virtual {p1, v4, v5, v5, v5}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    iget-object v1, p0, Lcom/sigmob/sdk/splash/i;->m:Landroid/widget/RelativeLayout;

    invoke-virtual {v1, v0, p1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method a(Z)V
    .locals 3

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/splash/i;->d:Landroid/content/Context;

    iget-object v1, p0, Lcom/sigmob/sdk/splash/i;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v1

    const-string v2, "com.sigmob.action.interstitial.dismiss"

    invoke-static {p1, v1, v2}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/splash/i;->e:Landroid/widget/RelativeLayout;

    invoke-virtual {p1, v0}, Landroid/widget/RelativeLayout;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    iget-object p1, p0, Lcom/sigmob/sdk/splash/i;->g:Lcom/sigmob/sdk/splash/c;

    invoke-virtual {p1}, Lcom/sigmob/sdk/splash/c;->k()V

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/splash/i;->s:Landroid/hardware/SensorManager;

    if-eqz p1, :cond_1

    iget-object v1, p0, Lcom/sigmob/sdk/splash/i;->u:Landroid/hardware/SensorEventListener;

    invoke-virtual {p1, v1}, Landroid/hardware/SensorManager;->unregisterListener(Landroid/hardware/SensorEventListener;)V

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/splash/i;->c:Lcom/sigmob/sdk/splash/d;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/splash/d;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    iget-object p1, p0, Lcom/sigmob/sdk/splash/i;->h:Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;

    if-eqz p1, :cond_2

    invoke-virtual {p1}, Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;->cancelRequest()V

    iput-object v0, p0, Lcom/sigmob/sdk/splash/i;->h:Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;

    :cond_2
    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z
    .locals 1

    :try_start_0
    iput-object p1, p0, Lcom/sigmob/sdk/splash/i;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdConfig()Lcom/sigmob/sdk/base/common/h;

    move-result-object p1

    check-cast p1, Lcom/sigmob/sdk/splash/c;

    iput-object p1, p0, Lcom/sigmob/sdk/splash/i;->g:Lcom/sigmob/sdk/splash/c;

    iget-object p1, p0, Lcom/sigmob/sdk/splash/i;->d:Landroid/content/Context;

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/splash/i;->b(Landroid/content/Context;)V

    iget-object p1, p0, Lcom/sigmob/sdk/splash/i;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->isUse_floating_btn()Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/splash/i;->d:Landroid/content/Context;

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/splash/i;->a(Landroid/content/Context;)V

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/splash/i;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object p1

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->template_type:Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    const/4 v0, 0x2

    if-eq p1, v0, :cond_3

    const/4 v0, 0x3

    if-eq p1, v0, :cond_3

    const/4 v0, 0x4

    if-eq p1, v0, :cond_2

    const/4 v0, 0x5

    if-eq p1, v0, :cond_1

    iget-object p1, p0, Lcom/sigmob/sdk/splash/i;->d:Landroid/content/Context;

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/splash/i;->h(Landroid/content/Context;)V

    goto :goto_0

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/splash/i;->d:Landroid/content/Context;

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/splash/i;->i(Landroid/content/Context;)V

    iget-object p1, p0, Lcom/sigmob/sdk/splash/i;->d:Landroid/content/Context;

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/splash/i;->f(Landroid/content/Context;)V

    goto :goto_0

    :cond_2
    iget-object p1, p0, Lcom/sigmob/sdk/splash/i;->d:Landroid/content/Context;

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/splash/i;->i(Landroid/content/Context;)V

    goto :goto_0

    :cond_3
    iget-object p1, p0, Lcom/sigmob/sdk/splash/i;->d:Landroid/content/Context;

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/splash/i;->d(Landroid/content/Context;)V

    :goto_0
    iget-object p1, p0, Lcom/sigmob/sdk/splash/i;->d:Landroid/content/Context;

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/splash/i;->e(Landroid/content/Context;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 p1, 0x1

    return p1

    :catchall_0
    move-exception p1

    const-string v0, "setupAd error"

    invoke-static {v0, p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    const/4 p1, 0x0

    return p1
.end method

.method protected b()V
    .locals 1

    const/4 v0, 0x4

    invoke-super {p0, v0}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    return-void
.end method

.method public c()Z
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i;->c:Lcom/sigmob/sdk/splash/d;

    iget-object v1, p0, Lcom/sigmob/sdk/splash/i;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/splash/d;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z

    move-result v0

    return v0
.end method

.method public d()V
    .locals 4

    :try_start_0
    iget-boolean v0, p0, Lcom/sigmob/sdk/splash/i;->r:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/splash/i;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v0

    instance-of v1, v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v1, :cond_1

    check-cast v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v1, "_AUTOCLICK_"

    iget-object v2, p0, Lcom/sigmob/sdk/splash/i;->g:Lcom/sigmob/sdk/splash/c;

    invoke-virtual {v2}, Lcom/sigmob/sdk/splash/c;->n()I

    move-result v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "splash click macro set "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_1
    :goto_0
    const/4 v0, 0x4

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, v0, v1

    const/4 v2, 0x1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v0, v2

    const/4 v2, 0x2

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v0, v2

    const/4 v2, 0x3

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    aput-object v1, v0, v2

    const-string v1, "%d,%d,%d,%d"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/sigmob/sdk/splash/i;->a(Ljava/lang/String;)V

    return-void
.end method

.method public e()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i;->c:Lcom/sigmob/sdk/splash/d;

    invoke-virtual {v0}, Lcom/sigmob/sdk/splash/d;->b()V

    return-void
.end method

.method public f()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i;->c:Lcom/sigmob/sdk/splash/d;

    invoke-virtual {v0}, Lcom/sigmob/sdk/splash/d;->c()V

    return-void
.end method

.method public getDuration()I
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i;->c:Lcom/sigmob/sdk/splash/d;

    invoke-virtual {v0}, Lcom/sigmob/sdk/splash/d;->getDuration()I

    move-result v0

    return v0
.end method

.method protected onAttachedToWindow()V
    .locals 4

    invoke-super {p0}, Landroid/widget/RelativeLayout;->onAttachedToWindow()V

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i;->g:Lcom/sigmob/sdk/splash/c;

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/ViewUtil;->getActivityFromViewTop(Landroid/view/View;)Landroid/app/Activity;

    move-result-object v1

    iget-object v2, p0, Lcom/sigmob/sdk/splash/i;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    new-instance v3, Lcom/sigmob/sdk/splash/i$2;

    invoke-direct {v3, p0}, Lcom/sigmob/sdk/splash/i$2;-><init>(Lcom/sigmob/sdk/splash/i;)V

    invoke-virtual {v0, v1, v2, v3}, Lcom/sigmob/sdk/splash/c;->a(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/views/q$b;)V

    return-void
.end method

.method public setDuration(I)V
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    if-lez p1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/splash/i;->k:Landroid/widget/TextView;

    if-eqz v1, :cond_2

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "duration "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/splash/i;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v1

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->template_type:Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    const/4 v2, 0x2

    const/4 v3, 0x0

    if-eq v1, v2, :cond_1

    const/4 v2, 0x3

    if-eq v1, v2, :cond_1

    const/4 v2, 0x4

    if-eq v1, v2, :cond_1

    const/4 v2, 0x5

    if-eq v1, v2, :cond_1

    iget-object v1, p0, Lcom/sigmob/sdk/splash/i;->k:Landroid/widget/TextView;

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v0, v3

    invoke-static {v0}, Lcom/sigmob/sdk/base/d;->c([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/splash/i;->k:Landroid/widget/TextView;

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v0, v3

    invoke-static {v0}, Lcom/sigmob/sdk/base/d;->a([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    :goto_0
    invoke-virtual {v1, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_1

    :cond_2
    iput-boolean v0, p0, Lcom/sigmob/sdk/splash/i;->v:Z

    iget-boolean p1, p0, Lcom/sigmob/sdk/splash/i;->t:Z

    if-nez p1, :cond_3

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/splash/i;->a(Z)V

    :cond_3
    :goto_1
    return-void
.end method

.method public setOnTouchListener(Landroid/view/View$OnTouchListener;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i;->c:Lcom/sigmob/sdk/splash/d;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/splash/d;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    :cond_0
    return-void
.end method

.method public setShowAppLogo(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/splash/i;->j:Z

    return-void
.end method

.method public setVisibility(I)V
    .locals 4

    if-nez p1, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i;->e:Landroid/widget/RelativeLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i;->c:Lcom/sigmob/sdk/splash/d;

    invoke-virtual {v0}, Lcom/sigmob/sdk/splash/d;->a()V

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i;->g:Lcom/sigmob/sdk/splash/c;

    iget-object v2, p0, Lcom/sigmob/sdk/splash/i;->d:Landroid/content/Context;

    iget-object v3, p0, Lcom/sigmob/sdk/splash/i;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0, v2, v1, v3}, Lcom/sigmob/sdk/splash/c;->a(Landroid/content/Context;ILcom/sigmob/sdk/base/models/BaseAdUnit;)V

    invoke-super {p0, p1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    goto :goto_0

    :cond_0
    :try_start_0
    const-string p1, "splashAdBlock"

    sget-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SPLASH_ADBLOCK:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v0

    invoke-static {}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->getLineInfo()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/sigmob/sdk/splash/i;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-static {p1, v0, v1, v2}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "debug "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->getLineInfo()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-void
.end method
