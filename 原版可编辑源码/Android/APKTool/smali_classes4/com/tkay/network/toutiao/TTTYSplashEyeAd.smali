.class public Lcom/tkay/network/toutiao/TTTYSplashEyeAd;
.super Lcom/tkay/splashad/unitgroup/api/CustomSplashEyeAd;


# instance fields
.field a:Lcom/bykv/vk/openvk/CSJSplashAd;


# direct methods
.method public constructor <init>(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/bykv/vk/openvk/CSJSplashAd;)V
    .locals 0

    .line 22
    invoke-direct {p0, p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEyeAd;-><init>(Lcom/tkay/core/api/TYBaseAdAdapter;)V

    .line 23
    iput-object p2, p0, Lcom/tkay/network/toutiao/TTTYSplashEyeAd;->a:Lcom/bykv/vk/openvk/CSJSplashAd;

    return-void
.end method

.method private static a(Landroid/content/Context;F)I
    .locals 0

    .line 62
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p0

    iget p0, p0, Landroid/util/DisplayMetrics;->density:F

    mul-float/2addr p1, p0

    const/high16 p0, 0x3f000000    # 0.5f

    add-float/2addr p1, p0

    float-to-int p0, p1

    return p0
.end method


# virtual methods
.method public customResourceDestory()V
    .locals 1

    const/4 v0, 0x0

    .line 75
    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashEyeAd;->a:Lcom/bykv/vk/openvk/CSJSplashAd;

    return-void
.end method

.method public getSuggestedSize(Landroid/content/Context;)[I
    .locals 4

    .line 47
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashEyeAd;->a:Lcom/bykv/vk/openvk/CSJSplashAd;

    if-eqz v0, :cond_0

    if-eqz p1, :cond_0

    .line 48
    invoke-interface {v0}, Lcom/bykv/vk/openvk/CSJSplashAd;->getSplashClickEyeSizeToDp()[I

    move-result-object v0

    if-eqz v0, :cond_0

    .line 50
    array-length v1, v0

    const/4 v2, 0x2

    if-lt v1, v2, :cond_0

    new-array v1, v2, [I

    const/4 v2, 0x0

    .line 52
    aget v3, v0, v2

    int-to-float v3, v3

    invoke-static {p1, v3}, Lcom/tkay/network/toutiao/TTTYSplashEyeAd;->a(Landroid/content/Context;F)I

    move-result v3

    aput v3, v1, v2

    const/4 v2, 0x1

    .line 53
    aget v0, v0, v2

    int-to-float v0, v0

    invoke-static {p1, v0}, Lcom/tkay/network/toutiao/TTTYSplashEyeAd;->a(Landroid/content/Context;F)I

    move-result p1

    aput p1, v1, v2

    return-object v1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public onFinished()V
    .locals 2

    .line 68
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashEyeAd;->a:Lcom/bykv/vk/openvk/CSJSplashAd;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashEyeAd;->mEyeAdContainer:Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    .line 69
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashEyeAd;->a:Lcom/bykv/vk/openvk/CSJSplashAd;

    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYSplashEyeAd;->mEyeAdContainer:Landroid/view/ViewGroup;

    invoke-interface {v0, v1}, Lcom/bykv/vk/openvk/CSJSplashAd;->showSplashClickEyeView(Landroid/view/ViewGroup;)V

    :cond_0
    return-void
.end method

.method public show(Landroid/content/Context;Landroid/graphics/Rect;)V
    .locals 1

    .line 30
    :try_start_0
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashEyeAd;->mEyeAdContainer:Landroid/view/ViewGroup;

    if-nez p1, :cond_1

    .line 31
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashEyeAd;->mTYSplashEyeAdListener:Lcom/tkay/splashad/api/TYSplashEyeAdListener;

    if-eqz p1, :cond_0

    .line 32
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashEyeAd;->mTYSplashEyeAdListener:Lcom/tkay/splashad/api/TYSplashEyeAdListener;

    const/4 p2, 0x0

    const-string v0, "mEyeAdContainer = null"

    invoke-interface {p1, p2, v0}, Lcom/tkay/splashad/api/TYSplashEyeAdListener;->onAdDismiss(ZLjava/lang/String;)V

    :cond_0
    return-void

    .line 37
    :cond_1
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashEyeAd;->mTYSplashEyeAdListener:Lcom/tkay/splashad/api/TYSplashEyeAdListener;

    if-eqz p1, :cond_2

    .line 38
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashEyeAd;->mTYSplashEyeAdListener:Lcom/tkay/splashad/api/TYSplashEyeAdListener;

    iget-object p2, p0, Lcom/tkay/network/toutiao/TTTYSplashEyeAd;->mSplashView:Landroid/view/View;

    invoke-interface {p1, p2}, Lcom/tkay/splashad/api/TYSplashEyeAdListener;->onAnimationStart(Landroid/view/View;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_2
    return-void

    :catchall_0
    move-exception p1

    .line 41
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method
