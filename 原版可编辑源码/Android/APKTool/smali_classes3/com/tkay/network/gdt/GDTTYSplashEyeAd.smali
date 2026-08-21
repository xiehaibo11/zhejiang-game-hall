.class public Lcom/tkay/network/gdt/GDTTYSplashEyeAd;
.super Lcom/tkay/splashad/unitgroup/api/CustomSplashEyeAd;


# instance fields
.field a:Lcom/qq/e/ads/splash/SplashAD;


# direct methods
.method public constructor <init>(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/qq/e/ads/splash/SplashAD;)V
    .locals 0

    .line 22
    invoke-direct {p0, p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEyeAd;-><init>(Lcom/tkay/core/api/TYBaseAdAdapter;)V

    .line 23
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYSplashEyeAd;->mAtBaseAdAdapter:Lcom/tkay/core/api/TYBaseAdAdapter;

    .line 24
    iput-object p2, p0, Lcom/tkay/network/gdt/GDTTYSplashEyeAd;->a:Lcom/qq/e/ads/splash/SplashAD;

    return-void
.end method


# virtual methods
.method public customResourceDestory()V
    .locals 1

    const/4 v0, 0x0

    .line 53
    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashEyeAd;->a:Lcom/qq/e/ads/splash/SplashAD;

    return-void
.end method

.method public getSuggestedSize(Landroid/content/Context;)[I
    .locals 0

    const/4 p1, 0x0

    return-object p1
.end method

.method public onFinished()V
    .locals 1

    .line 46
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashEyeAd;->a:Lcom/qq/e/ads/splash/SplashAD;

    if-eqz v0, :cond_0

    .line 47
    invoke-virtual {v0}, Lcom/qq/e/ads/splash/SplashAD;->zoomOutAnimationFinish()V

    :cond_0
    return-void
.end method

.method public show(Landroid/content/Context;Landroid/graphics/Rect;)V
    .locals 0

    .line 31
    :try_start_0
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYSplashEyeAd;->mTYSplashEyeAdListener:Lcom/tkay/splashad/api/TYSplashEyeAdListener;

    if-eqz p1, :cond_0

    .line 32
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYSplashEyeAd;->mTYSplashEyeAdListener:Lcom/tkay/splashad/api/TYSplashEyeAdListener;

    iget-object p2, p0, Lcom/tkay/network/gdt/GDTTYSplashEyeAd;->mSplashView:Landroid/view/View;

    invoke-interface {p1, p2}, Lcom/tkay/splashad/api/TYSplashEyeAdListener;->onAnimationStart(Landroid/view/View;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 35
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method
