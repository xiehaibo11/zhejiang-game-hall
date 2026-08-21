.class public Lcom/sigmob/sdk/nativead/n;
.super Lcom/sigmob/sdk/nativead/o;

# interfaces
.implements Lcom/sigmob/sdk/nativead/h;
.implements Lcom/sigmob/sdk/videoplayer/c;


# static fields
.field public static e:Ljava/util/LinkedList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/LinkedList<",
            "Landroid/view/ViewGroup;",
            ">;"
        }
    .end annotation
.end field

.field public static f:J


# instance fields
.field private h:Lcom/sigmob/sdk/videoplayer/g;

.field private i:Lcom/sigmob/sdk/nativead/k;

.field private j:Lcom/sigmob/sdk/nativead/p;

.field private k:Landroid/graphics/Bitmap;

.field private l:Landroid/graphics/Bitmap;

.field private m:Landroid/view/ViewGroup;

.field private n:J


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Ljava/util/LinkedList;

    invoke-direct {v0}, Ljava/util/LinkedList;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/nativead/n;->e:Ljava/util/LinkedList;

    const-wide/16 v0, 0x0

    sput-wide v0, Lcom/sigmob/sdk/nativead/n;->f:J

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/nativead/o;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/n;->k:Landroid/graphics/Bitmap;

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/n;->l:Landroid/graphics/Bitmap;

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/n;->m:Landroid/view/ViewGroup;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/sigmob/sdk/videoplayer/g;->setVideoAdViewListener(Lcom/sigmob/sdk/videoplayer/c;)V

    new-instance p1, Landroid/widget/RelativeLayout;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-direct {p1, v0}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/n;->m:Landroid/view/ViewGroup;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/sigmob/sdk/videoplayer/g;->setVideoAdStatusListener(Lcom/sigmob/sdk/nativead/h;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/sigmob/sdk/base/blurkit/a;->a(Landroid/content/Context;)V

    return-void
.end method

.method private a(Landroid/app/Activity;)V
    .locals 2

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x15

    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object p1

    if-lt v0, v1, :cond_0

    const/16 v0, 0x1706

    goto :goto_0

    :cond_0
    const/4 v0, 0x4

    :goto_0
    invoke-virtual {p1, v0}, Landroid/view/View;->setSystemUiVisibility(I)V

    return-void
.end method

.method private a(Landroid/view/ViewGroup;)V
    .locals 4

    const/4 v0, 0x0

    const/4 v1, 0x0

    :goto_0
    invoke-virtual {p1}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v2

    if-ge v1, v2, :cond_1

    invoke-virtual {p1, v1}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v2

    instance-of v3, v2, Lcom/sigmob/sdk/nativead/j;

    if-eqz v3, :cond_0

    check-cast v2, Lcom/sigmob/sdk/nativead/j;

    move-object v0, v2

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    if-eqz v0, :cond_2

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ViewUtil;->removeFromParent(Landroid/view/View;)V

    :cond_2
    return-void
.end method

.method private b(Landroid/app/Activity;)V
    .locals 7

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x41200000    # 10.0f

    invoke-static {v1, v0}, Lcom/czhj/sdk/common/utils/Dips;->asIntPixels(FLandroid/content/Context;)I

    move-result v0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x41700000    # 15.0f

    invoke-static {v3, v2}, Lcom/czhj/sdk/common/utils/Dips;->asIntPixels(FLandroid/content/Context;)I

    move-result v2

    invoke-static {p1}, Lcom/sigmob/sdk/videoplayer/d;->a(Landroid/app/Activity;)I

    move-result v3

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v4

    invoke-virtual {v4}, Lcom/sigmob/sdk/videoplayer/g;->getVideoHeight()I

    move-result v4

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v5

    invoke-virtual {v5}, Lcom/sigmob/sdk/videoplayer/g;->getVideoWidth()I

    move-result v5

    const/4 v6, 0x0

    if-ge v4, v5, :cond_0

    invoke-virtual {p1, v6}, Landroid/app/Activity;->setRequestedOrientation(I)V

    add-int/2addr v0, v3

    goto :goto_0

    :cond_0
    add-int/2addr v2, v3

    :goto_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoplayer/g;->getBottomLayoutView()Landroid/view/View;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p1

    check-cast p1, Landroid/widget/RelativeLayout$LayoutParams;

    if-eqz p1, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/czhj/sdk/common/utils/Dips;->asIntPixels(FLandroid/content/Context;)I

    move-result v3

    invoke-virtual {p1, v3, v6, v0, v2}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v2

    invoke-virtual {v2}, Lcom/sigmob/sdk/videoplayer/g;->getBottomLayoutView()Landroid/view/View;

    move-result-object v2

    invoke-virtual {v2, p1}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoplayer/g;->getTopLayoutView()Landroid/view/View;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p1

    check-cast p1, Landroid/widget/RelativeLayout$LayoutParams;

    if-eqz p1, :cond_2

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/czhj/sdk/common/utils/Dips;->asIntPixels(FLandroid/content/Context;)I

    move-result v1

    const/high16 v2, 0x420c0000    # 35.0f

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/czhj/sdk/common/utils/Dips;->asIntPixels(FLandroid/content/Context;)I

    move-result v2

    invoke-virtual {p1, v1, v2, v0, v6}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/g;->getTopLayoutView()Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_2
    return-void
.end method

.method private k()V
    .locals 7

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/g;->getBottomLayoutView()Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/high16 v1, 0x41700000    # 15.0f

    const/high16 v2, 0x41200000    # 10.0f

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/czhj/sdk/common/utils/Dips;->asIntPixels(FLandroid/content/Context;)I

    move-result v3

    const/4 v4, 0x0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v4, v5}, Lcom/czhj/sdk/common/utils/Dips;->asIntPixels(FLandroid/content/Context;)I

    move-result v4

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v2, v5}, Lcom/czhj/sdk/common/utils/Dips;->asIntPixels(FLandroid/content/Context;)I

    move-result v5

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v1, v6}, Lcom/czhj/sdk/common/utils/Dips;->asIntPixels(FLandroid/content/Context;)I

    move-result v6

    invoke-virtual {v0, v3, v4, v5, v6}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v3

    invoke-virtual {v3}, Lcom/sigmob/sdk/videoplayer/g;->getBottomLayoutView()Landroid/view/View;

    move-result-object v3

    invoke-virtual {v3, v0}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/g;->getTopLayoutView()Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/RelativeLayout$LayoutParams;

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/czhj/sdk/common/utils/Dips;->asIntPixels(FLandroid/content/Context;)I

    move-result v3

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v1, v4}, Lcom/czhj/sdk/common/utils/Dips;->asIntPixels(FLandroid/content/Context;)I

    move-result v1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v2, v4}, Lcom/czhj/sdk/common/utils/Dips;->asIntPixels(FLandroid/content/Context;)I

    move-result v2

    const/4 v4, 0x0

    invoke-virtual {v0, v3, v1, v2, v4}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/videoplayer/g;->getTopLayoutView()Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_1
    return-void
.end method

.method private l()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/n;->i:Lcom/sigmob/sdk/nativead/k;

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/g;->getAppContainer()Landroid/view/ViewGroup;

    move-result-object v0

    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v2, -0x1

    invoke-direct {v1, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0xd

    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/n;->i:Lcom/sigmob/sdk/nativead/k;

    invoke-virtual {v0, v2, v1}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    return-void
.end method

.method private m()V
    .locals 4

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/g;->getTextureBitmap()Landroid/graphics/Bitmap;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/base/blurkit/a;->a()Lcom/sigmob/sdk/base/blurkit/a;

    move-result-object v1

    const/16 v2, 0x19

    invoke-virtual {v1, v0, v2}, Lcom/sigmob/sdk/base/blurkit/a;->a(Landroid/graphics/Bitmap;I)Landroid/graphics/Bitmap;

    move-result-object v1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v2

    invoke-virtual {v2}, Lcom/sigmob/sdk/videoplayer/g;->getBlurImageView()Landroid/widget/ImageView;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v2

    invoke-virtual {v2}, Lcom/sigmob/sdk/videoplayer/g;->getAppContainer()Landroid/view/ViewGroup;

    move-result-object v2

    const/4 v3, 0x0

    invoke-virtual {v2, v3}, Landroid/view/ViewGroup;->setVisibility(I)V

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/n;->k:Landroid/graphics/Bitmap;

    iput-object v1, p0, Lcom/sigmob/sdk/nativead/n;->l:Landroid/graphics/Bitmap;

    :cond_0
    return-void
.end method

.method private n()V
    .locals 4

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getAppInfoView()Lcom/sigmob/sdk/nativead/j;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ViewUtil;->removeFromParent(Landroid/view/View;)V

    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v2, -0x1

    const/4 v3, -0x2

    invoke-direct {v1, v2, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/high16 v2, 0x40a00000    # 5.0f

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/czhj/sdk/common/utils/Dips;->asIntPixels(FLandroid/content/Context;)I

    move-result v2

    const/4 v3, 0x0

    invoke-virtual {v1, v3, v3, v3, v2}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    const/16 v2, 0xc

    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    invoke-virtual {p0, v0, v1}, Lcom/sigmob/sdk/nativead/n;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    return-void
.end method


# virtual methods
.method public a(I)I
    .locals 5

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/g;->getVideoWidth()I

    move-result v0

    if-nez v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getAdUnit()Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdPercent()D

    move-result-wide v0

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/g;->getVideoWidth()I

    move-result v0

    int-to-float v0, v0

    const/high16 v1, 0x3f800000    # 1.0f

    mul-float/2addr v0, v1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/videoplayer/g;->getVideoHeight()I

    move-result v1

    int-to-float v1, v1

    div-float/2addr v0, v1

    float-to-double v0, v0

    :goto_0
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v2

    invoke-virtual {v2}, Lcom/czhj/sdk/common/ClientMetadata;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v2

    iget v2, v2, Landroid/util/DisplayMetrics;->heightPixels:I

    div-int/lit8 v2, v2, 0x2

    int-to-double v3, p1

    div-double/2addr v3, v0

    double-to-int p1, v3

    if-le p1, v2, :cond_1

    return v2

    :cond_1
    return p1
.end method

.method public a()V
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getSigAdVideoStatusListener()Lcom/sigmob/sdk/nativead/h;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getSigAdVideoStatusListener()Lcom/sigmob/sdk/nativead/h;

    move-result-object v0

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/h;->a()V

    :cond_0
    return-void
.end method

.method public a(JJ)V
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getSigAdVideoStatusListener()Lcom/sigmob/sdk/nativead/h;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getSigAdVideoStatusListener()Lcom/sigmob/sdk/nativead/h;

    move-result-object v0

    invoke-interface {v0, p1, p2, p3, p4}, Lcom/sigmob/sdk/nativead/h;->a(JJ)V

    :cond_0
    const-wide/16 v0, 0x0

    cmp-long p1, p1, v0

    if-lez p1, :cond_1

    iput-wide p3, p0, Lcom/sigmob/sdk/nativead/n;->n:J

    :cond_1
    return-void
.end method

.method public a(Lcom/sigmob/sdk/nativead/x;)V
    .locals 3

    invoke-super {p0, p1}, Lcom/sigmob/sdk/nativead/o;->a(Lcom/sigmob/sdk/nativead/x;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getAdUnit()Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    if-eqz p1, :cond_2

    invoke-direct {p0, p0}, Lcom/sigmob/sdk/nativead/n;->a(Landroid/view/ViewGroup;)V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoProxyFile()Ljava/io/File;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v1

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/videoplayer/g;->setUp(Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getProxyVideoUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoplayer/g;->setUp(Ljava/lang/String;)V

    :goto_0
    sget-object v0, Lcom/sigmob/sdk/nativead/f;->a:Lcom/sigmob/sdk/nativead/f;

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/nativead/n;->setUIStyle(Lcom/sigmob/sdk/nativead/f;)V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoThumbUrl()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoplayer/g;->b(Z)V

    goto :goto_1

    :cond_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ImageManager;->with(Landroid/content/Context;)Lcom/czhj/sdk/common/utils/ImageManager;

    move-result-object v0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoThumbUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/utils/ImageManager;->load(Ljava/lang/String;)Lcom/czhj/sdk/common/utils/ImageManager$RequestCreatorRunnable;

    move-result-object v0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/videoplayer/g;->getThumbView()Landroid/widget/ImageView;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/utils/ImageManager$RequestCreatorRunnable;->into(Landroid/widget/ImageView;)V

    :goto_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getAppView()Lcom/sigmob/sdk/nativead/k;

    move-result-object v0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getIconUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getTitle()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCTAText()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v1, v2, p1}, Lcom/sigmob/sdk/nativead/k;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getAdConfig()Lcom/sigmob/sdk/nativead/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/b;->n()Z

    move-result v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/videoplayer/g;->setSoundChange(Z)V

    :cond_2
    return-void
.end method

.method public a(Landroid/view/MotionEvent;)Z
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/n;->i:Lcom/sigmob/sdk/nativead/k;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/k;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/n;->i:Lcom/sigmob/sdk/nativead/k;

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/k;->getVisibility()I

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/n;->i:Lcom/sigmob/sdk/nativead/k;

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/k;->getCtaView()Landroid/view/View;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/czhj/sdk/common/utils/ViewUtil;->isPointInView(Landroid/view/View;Landroid/view/MotionEvent;)Z

    move-result p1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public b()Z
    .locals 2

    sget-object v0, Lcom/sigmob/sdk/nativead/n;->e:Ljava/util/LinkedList;

    invoke-virtual {v0}, Ljava/util/LinkedList;->size()I

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/g;->u()V

    return v1

    :cond_0
    sget-object v0, Lcom/sigmob/sdk/nativead/n;->e:Ljava/util/LinkedList;

    invoke-virtual {v0}, Ljava/util/LinkedList;->size()I

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    iget v0, v0, Lcom/sigmob/sdk/videoplayer/g;->x:I

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/g;->m()V

    return v1

    :cond_1
    const/4 v0, 0x0

    return v0
.end method

.method public c()V
    .locals 2

    invoke-super {p0}, Lcom/sigmob/sdk/nativead/o;->c()V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/n;->k:Landroid/graphics/Bitmap;

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ImageUtils;->recycleBitmap(Landroid/graphics/Bitmap;)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/n;->l:Landroid/graphics/Bitmap;

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ImageUtils;->recycleBitmap(Landroid/graphics/Bitmap;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getSigVideoAdController()Lcom/sigmob/sdk/nativead/p;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/p;->i()V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/n;->h:Lcom/sigmob/sdk/videoplayer/g;

    if-eqz v0, :cond_1

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoplayer/g;->setVideoAdViewListener(Lcom/sigmob/sdk/videoplayer/c;)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/n;->h:Lcom/sigmob/sdk/videoplayer/g;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoplayer/g;->setVideoAdStatusListener(Lcom/sigmob/sdk/nativead/h;)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/n;->h:Lcom/sigmob/sdk/videoplayer/g;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoplayer/g;->setBackClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/n;->h:Lcom/sigmob/sdk/videoplayer/g;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/g;->a()V

    iput-object v1, p0, Lcom/sigmob/sdk/nativead/n;->h:Lcom/sigmob/sdk/videoplayer/g;

    :cond_1
    return-void
.end method

.method public d()V
    .locals 1

    invoke-super {p0}, Lcom/sigmob/sdk/nativead/o;->d()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/g;->E()V

    :cond_0
    return-void
.end method

.method public e()V
    .locals 1

    invoke-super {p0}, Lcom/sigmob/sdk/nativead/o;->e()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/g;->C()V

    :cond_0
    return-void
.end method

.method public f()V
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/n;->m:Landroid/view/ViewGroup;

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/n;->m:Landroid/view/ViewGroup;

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    :cond_0
    sget-object v0, Lcom/sigmob/sdk/nativead/n;->e:Ljava/util/LinkedList;

    invoke-virtual {v0}, Ljava/util/LinkedList;->getLast()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/sigmob/sdk/videoplayer/d;->b(Landroid/content/Context;)Landroid/app/Activity;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/view/View;->setSystemUiVisibility(I)V

    :cond_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/videoplayer/g;->getVideoHeight()I

    move-result v1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v2

    invoke-virtual {v2}, Lcom/sigmob/sdk/videoplayer/g;->getVideoWidth()I

    move-result v2

    if-ge v1, v2, :cond_2

    if-eqz v0, :cond_2

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/app/Activity;->setRequestedOrientation(I)V

    :cond_2
    sget-object v0, Lcom/sigmob/sdk/nativead/n;->e:Ljava/util/LinkedList;

    invoke-virtual {v0}, Ljava/util/LinkedList;->getLast()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    invoke-virtual {v0}, Landroid/view/ViewGroup;->removeAllViews()V

    sget-object v0, Lcom/sigmob/sdk/nativead/n;->e:Ljava/util/LinkedList;

    invoke-virtual {v0}, Ljava/util/LinkedList;->getLast()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/n;->m:Landroid/view/ViewGroup;

    new-instance v2, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v3, -0x1

    invoke-direct {v2, v3, v3}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v1, v2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    sget-object v0, Lcom/sigmob/sdk/nativead/n;->e:Ljava/util/LinkedList;

    invoke-virtual {v0}, Ljava/util/LinkedList;->pop()Ljava/lang/Object;

    return-void
.end method

.method public g()V
    .locals 5

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/n;->m:Landroid/view/ViewGroup;

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/n;->m:Landroid/view/ViewGroup;

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    sget-object v1, Lcom/sigmob/sdk/nativead/n;->e:Ljava/util/LinkedList;

    invoke-virtual {v1, v0}, Ljava/util/LinkedList;->add(Ljava/lang/Object;)Z

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/sigmob/sdk/videoplayer/d;->b(Landroid/content/Context;)Landroid/app/Activity;

    move-result-object v0

    if-eqz v0, :cond_0

    const v1, 0x1020002

    invoke-virtual {v0, v1}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/view/ViewGroup;

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/n;->m:Landroid/view/ViewGroup;

    new-instance v3, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v4, -0x1

    invoke-direct {v3, v4, v4}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v1, v2, v3}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/videoplayer/g;->getVideoHeight()I

    move-result v1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v2

    invoke-virtual {v2}, Lcom/sigmob/sdk/videoplayer/g;->getVideoWidth()I

    move-result v2

    if-ge v1, v2, :cond_0

    const/4 v1, 0x6

    invoke-virtual {v0, v1}, Landroid/app/Activity;->setRequestedOrientation(I)V

    :cond_0
    return-void
.end method

.method public getAppView()Lcom/sigmob/sdk/nativead/k;
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/n;->i:Lcom/sigmob/sdk/nativead/k;

    if-nez v0, :cond_0

    new-instance v0, Lcom/sigmob/sdk/nativead/k;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/sigmob/sdk/nativead/k;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/n;->i:Lcom/sigmob/sdk/nativead/k;

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/n;->i:Lcom/sigmob/sdk/nativead/k;

    return-object v0
.end method

.method public getSigAdVideoStatusListener()Lcom/sigmob/sdk/nativead/h;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/n;->j:Lcom/sigmob/sdk/nativead/p;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/p;->g()Lcom/sigmob/sdk/nativead/h;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getSigVideoAdController()Lcom/sigmob/sdk/nativead/p;
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/n;->j:Lcom/sigmob/sdk/nativead/p;

    if-nez v0, :cond_0

    new-instance v0, Lcom/sigmob/sdk/nativead/q;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/sigmob/sdk/nativead/q;-><init>(Lcom/sigmob/sdk/videoplayer/g;)V

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/n;->j:Lcom/sigmob/sdk/nativead/p;

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/n;->j:Lcom/sigmob/sdk/nativead/p;

    return-object v0
.end method

.method public getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/n;->h:Lcom/sigmob/sdk/videoplayer/g;

    if-nez v0, :cond_0

    new-instance v0, Lcom/sigmob/sdk/videoplayer/g;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/sigmob/sdk/videoplayer/g;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/n;->h:Lcom/sigmob/sdk/videoplayer/g;

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/n;->h:Lcom/sigmob/sdk/videoplayer/g;

    return-object v0
.end method

.method public getVideoContainer()Landroid/view/ViewGroup;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/n;->m:Landroid/view/ViewGroup;

    return-object v0
.end method

.method public getVideoDuration()D
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/g;->getDuration()J

    move-result-wide v0

    long-to-float v0, v0

    const/high16 v1, 0x447a0000    # 1000.0f

    div-float/2addr v0, v1

    float-to-double v0, v0

    return-wide v0

    :cond_0
    invoke-super {p0}, Lcom/sigmob/sdk/nativead/o;->getVideoDuration()D

    move-result-wide v0

    return-wide v0
.end method

.method public getVideoProgress()D
    .locals 3

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/g;->getCurrentPositionWhenPlaying()J

    move-result-wide v0

    long-to-float v0, v0

    const/high16 v1, 0x3f800000    # 1.0f

    mul-float/2addr v0, v1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/videoplayer/g;->getDuration()J

    move-result-wide v1

    long-to-float v1, v1

    div-float/2addr v0, v1

    const/high16 v1, 0x42c80000    # 100.0f

    div-float/2addr v0, v1

    float-to-double v0, v0

    return-wide v0

    :cond_0
    invoke-super {p0}, Lcom/sigmob/sdk/nativead/o;->getVideoProgress()D

    move-result-wide v0

    return-wide v0
.end method

.method public getVideoSurferViewHeight()I
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/g;->getVideoSurferViewHeight()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public h()V
    .locals 4

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sget-wide v2, Lcom/sigmob/sdk/nativead/n;->f:J

    sub-long/2addr v0, v2

    const-wide/16 v2, 0x7d0

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    iget v0, v0, Lcom/sigmob/sdk/videoplayer/g;->w:I

    const/4 v1, 0x4

    if-ne v0, v1, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    iget v0, v0, Lcom/sigmob/sdk/videoplayer/g;->x:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sput-wide v0, Lcom/sigmob/sdk/nativead/n;->f:J

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->b()Z

    :cond_0
    return-void
.end method

.method public i()V
    .locals 0

    invoke-super {p0}, Lcom/sigmob/sdk/nativead/o;->i()V

    return-void
.end method

.method public j()V
    .locals 1

    invoke-super {p0}, Lcom/sigmob/sdk/nativead/o;->j()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/g;->D()V

    :cond_0
    return-void
.end method

.method public onVideoCompleted()V
    .locals 3

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getSigAdVideoStatusListener()Lcom/sigmob/sdk/nativead/h;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getSigAdVideoStatusListener()Lcom/sigmob/sdk/nativead/h;

    move-result-object v0

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/h;->onVideoCompleted()V

    :cond_0
    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/n;->m()V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/n;->d:Lcom/sigmob/sdk/nativead/f;

    sget-object v1, Lcom/sigmob/sdk/nativead/f;->a:Lcom/sigmob/sdk/nativead/f;

    if-ne v0, v1, :cond_2

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getAppView()Lcom/sigmob/sdk/nativead/k;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/k;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_1

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/n;->l()V

    :cond_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getAppView()Lcom/sigmob/sdk/nativead/k;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/nativead/k;->setVisibility(I)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/videoplayer/f;->b:Lcom/sigmob/sdk/videoplayer/f;

    const/4 v2, 0x1

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/f;Z)V

    goto :goto_0

    :cond_2
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/n;->d:Lcom/sigmob/sdk/nativead/f;

    sget-object v1, Lcom/sigmob/sdk/nativead/f;->b:Lcom/sigmob/sdk/nativead/f;

    if-ne v0, v1, :cond_3

    sget-object v0, Lcom/sigmob/sdk/nativead/f;->c:Lcom/sigmob/sdk/nativead/f;

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/nativead/n;->setUIStyle(Lcom/sigmob/sdk/nativead/f;)V

    :cond_3
    :goto_0
    return-void
.end method

.method public onVideoError(Lcom/sigmob/windad/WindAdError;)V
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getSigAdVideoStatusListener()Lcom/sigmob/sdk/nativead/h;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getSigAdVideoStatusListener()Lcom/sigmob/sdk/nativead/h;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/sigmob/sdk/nativead/h;->onVideoError(Lcom/sigmob/windad/WindAdError;)V

    :cond_0
    return-void
.end method

.method public onVideoLoad()V
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getSigAdVideoStatusListener()Lcom/sigmob/sdk/nativead/h;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getSigAdVideoStatusListener()Lcom/sigmob/sdk/nativead/h;

    move-result-object v0

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/h;->onVideoLoad()V

    :cond_0
    return-void
.end method

.method public onVideoPause()V
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getSigAdVideoStatusListener()Lcom/sigmob/sdk/nativead/h;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getSigAdVideoStatusListener()Lcom/sigmob/sdk/nativead/h;

    move-result-object v0

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/h;->onVideoPause()V

    :cond_0
    return-void
.end method

.method public onVideoResume()V
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getSigAdVideoStatusListener()Lcom/sigmob/sdk/nativead/h;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getSigAdVideoStatusListener()Lcom/sigmob/sdk/nativead/h;

    move-result-object v0

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/h;->onVideoResume()V

    :cond_0
    return-void
.end method

.method public onVideoStart()V
    .locals 3

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getAdUnit()Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/n;->i:Lcom/sigmob/sdk/nativead/k;

    if-eqz v0, :cond_1

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ViewUtil;->removeFromParent(Landroid/view/View;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/g;->getAppContainer()Landroid/view/ViewGroup;

    move-result-object v0

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/n;->k:Landroid/graphics/Bitmap;

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ImageUtils;->recycleBitmap(Landroid/graphics/Bitmap;)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/n;->l:Landroid/graphics/Bitmap;

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ImageUtils;->recycleBitmap(Landroid/graphics/Bitmap;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getAdUnit()Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/videoplayer/g;->getVideoWidth()I

    move-result v1

    int-to-float v1, v1

    const/high16 v2, 0x3f800000    # 1.0f

    mul-float/2addr v1, v2

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v2

    invoke-virtual {v2}, Lcom/sigmob/sdk/videoplayer/g;->getVideoHeight()I

    move-result v2

    int-to-float v2, v2

    div-float/2addr v1, v2

    float-to-double v1, v1

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->updateRealAdPercent(D)V

    :cond_2
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/n;->d:Lcom/sigmob/sdk/nativead/f;

    sget-object v1, Lcom/sigmob/sdk/nativead/f;->c:Lcom/sigmob/sdk/nativead/f;

    if-ne v0, v1, :cond_3

    sget-object v0, Lcom/sigmob/sdk/nativead/f;->b:Lcom/sigmob/sdk/nativead/f;

    goto :goto_0

    :cond_3
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/n;->d:Lcom/sigmob/sdk/nativead/f;

    :goto_0
    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/nativead/n;->setUIStyle(Lcom/sigmob/sdk/nativead/f;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getSigAdVideoStatusListener()Lcom/sigmob/sdk/nativead/h;

    move-result-object v0

    if-eqz v0, :cond_4

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getSigAdVideoStatusListener()Lcom/sigmob/sdk/nativead/h;

    move-result-object v0

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/h;->onVideoStart()V

    :cond_4
    return-void
.end method

.method public setBackClickListener(Landroid/view/View$OnClickListener;)V
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/videoplayer/g;->setBackClickListener(Landroid/view/View$OnClickListener;)V

    :cond_0
    return-void
.end method

.method public setUIStyle(Lcom/sigmob/sdk/nativead/f;)V
    .locals 5

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getAdUnit()Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-super {p0, p1}, Lcom/sigmob/sdk/nativead/o;->setUIStyle(Lcom/sigmob/sdk/nativead/f;)V

    sget-object v0, Lcom/sigmob/sdk/nativead/n$1;->a:[I

    invoke-virtual {p1}, Lcom/sigmob/sdk/nativead/f;->ordinal()I

    move-result p1

    aget p1, v0, p1

    const/4 v0, -0x1

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eq p1, v1, :cond_8

    const/4 v3, 0x2

    const/4 v4, 0x4

    if-eq p1, v3, :cond_3

    const/4 v0, 0x3

    if-eq p1, v0, :cond_1

    goto/16 :goto_4

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/n;->i:Lcom/sigmob/sdk/nativead/k;

    invoke-virtual {p1}, Lcom/sigmob/sdk/nativead/k;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/n;->i:Lcom/sigmob/sdk/nativead/k;

    invoke-virtual {p1, v4}, Lcom/sigmob/sdk/nativead/k;->setVisibility(I)V

    :cond_2
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/videoplayer/f;->a:Lcom/sigmob/sdk/videoplayer/f;

    invoke-virtual {p1, v0, v2}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/f;Z)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/videoplayer/f;->c:Lcom/sigmob/sdk/videoplayer/f;

    invoke-virtual {p1, v0, v2}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/f;Z)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/videoplayer/f;->d:Lcom/sigmob/sdk/videoplayer/f;

    invoke-virtual {p1, v0, v2}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/f;Z)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/videoplayer/f;->b:Lcom/sigmob/sdk/videoplayer/f;

    invoke-virtual {p1, v0, v2}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/f;Z)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/videoplayer/f;->e:Lcom/sigmob/sdk/videoplayer/f;

    invoke-virtual {p1, v0, v1}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/f;Z)V

    :goto_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/videoplayer/f;->f:Lcom/sigmob/sdk/videoplayer/f;

    invoke-virtual {p1, v0, v1}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/f;Z)V

    goto/16 :goto_4

    :cond_3
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/n;->i:Lcom/sigmob/sdk/nativead/k;

    invoke-virtual {p1}, Lcom/sigmob/sdk/nativead/k;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/n;->i:Lcom/sigmob/sdk/nativead/k;

    invoke-virtual {p1, v4}, Lcom/sigmob/sdk/nativead/k;->setVisibility(I)V

    :cond_4
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/n;->m:Landroid/view/ViewGroup;

    invoke-virtual {p1}, Landroid/view/ViewGroup;->getChildCount()I

    move-result p1

    if-lez p1, :cond_5

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/n;->m:Landroid/view/ViewGroup;

    invoke-virtual {p1}, Landroid/view/ViewGroup;->removeAllViews()V

    :cond_5
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/n;->removeView(Landroid/view/View;)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/n;->m:Landroid/view/ViewGroup;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object v3

    new-instance v4, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v4, v0, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p1, v3, v4}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getAdConfig()Lcom/sigmob/sdk/nativead/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/b;->o()Z

    move-result v0

    if-nez v0, :cond_7

    invoke-static {}, Lcom/sigmob/sdk/b;->c()Z

    move-result v0

    if-eqz v0, :cond_6

    goto :goto_1

    :cond_6
    move v0, v2

    goto :goto_2

    :cond_7
    :goto_1
    move v0, v1

    :goto_2
    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/videoplayer/g;->setSoundChange(Z)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/videoplayer/f;->a:Lcom/sigmob/sdk/videoplayer/f;

    invoke-virtual {p1, v0, v2}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/f;Z)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/videoplayer/f;->c:Lcom/sigmob/sdk/videoplayer/f;

    invoke-virtual {p1, v0, v1}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/f;Z)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/videoplayer/f;->d:Lcom/sigmob/sdk/videoplayer/f;

    invoke-virtual {p1, v0, v1}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/f;Z)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/videoplayer/f;->e:Lcom/sigmob/sdk/videoplayer/f;

    invoke-virtual {p1, v0, v2}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/f;Z)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/videoplayer/f;->b:Lcom/sigmob/sdk/videoplayer/f;

    invoke-virtual {p1, v0, v2}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/f;Z)V

    goto/16 :goto_0

    :cond_8
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/n;->m:Landroid/view/ViewGroup;

    invoke-virtual {p1}, Landroid/view/ViewGroup;->removeAllViews()V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/n;->m:Landroid/view/ViewGroup;

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/ViewUtil;->removeFromParent(Landroid/view/View;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/ViewUtil;->removeFromParent(Landroid/view/View;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    new-instance v3, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v3, v0, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p0, p1, v3}, Lcom/sigmob/sdk/nativead/n;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    iget p1, p1, Lcom/sigmob/sdk/videoplayer/g;->w:I

    if-nez p1, :cond_9

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/videoplayer/f;->a:Lcom/sigmob/sdk/videoplayer/f;

    invoke-virtual {p1, v0, v1}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/f;Z)V

    goto :goto_3

    :cond_9
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/videoplayer/f;->a:Lcom/sigmob/sdk/videoplayer/f;

    invoke-virtual {p1, v0, v2}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/f;Z)V

    :goto_3
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/videoplayer/f;->c:Lcom/sigmob/sdk/videoplayer/f;

    invoke-virtual {p1, v0, v2}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/f;Z)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/videoplayer/f;->d:Lcom/sigmob/sdk/videoplayer/f;

    invoke-virtual {p1, v0, v2}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/f;Z)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/videoplayer/f;->e:Lcom/sigmob/sdk/videoplayer/f;

    invoke-virtual {p1, v0, v2}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/f;Z)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/videoplayer/f;->b:Lcom/sigmob/sdk/videoplayer/f;

    invoke-virtual {p1, v0, v2}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/f;Z)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/videoplayer/f;->f:Lcom/sigmob/sdk/videoplayer/f;

    invoke-virtual {p1, v0, v2}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/f;Z)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getAdConfig()Lcom/sigmob/sdk/nativead/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/b;->n()Z

    move-result v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/videoplayer/g;->setSoundChange(Z)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/n;->i:Lcom/sigmob/sdk/nativead/k;

    if-eqz p1, :cond_c

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    iget p1, p1, Lcom/sigmob/sdk/videoplayer/g;->w:I

    const/4 v0, 0x6

    if-eq p1, v0, :cond_a

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    iget p1, p1, Lcom/sigmob/sdk/videoplayer/g;->w:I

    const/4 v0, 0x7

    if-ne p1, v0, :cond_c

    :cond_a
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/n;->i:Lcom/sigmob/sdk/nativead/k;

    invoke-virtual {p1}, Lcom/sigmob/sdk/nativead/k;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-nez p1, :cond_b

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/n;->l()V

    :cond_b
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/n;->i:Lcom/sigmob/sdk/nativead/k;

    invoke-virtual {p1, v2}, Lcom/sigmob/sdk/nativead/k;->setVisibility(I)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/n;->getVideoAdView()Lcom/sigmob/sdk/videoplayer/g;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/videoplayer/f;->b:Lcom/sigmob/sdk/videoplayer/f;

    invoke-virtual {p1, v0, v1}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/f;Z)V

    :cond_c
    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/n;->n()V

    :goto_4
    return-void
.end method
