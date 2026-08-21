.class public abstract Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;
.super Lcom/tkay/core/api/TYBaseAdAdapter;


# instance fields
.field protected mFetchAdTimeout:I

.field protected mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

.field mTYSplashSkipInfo:Lcom/tkay/splashad/api/TYSplashSkipInfo;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 19
    invoke-direct {p0}, Lcom/tkay/core/api/TYBaseAdAdapter;-><init>()V

    const/16 v0, 0x2710

    .line 21
    iput v0, p0, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->mFetchAdTimeout:I

    return-void
.end method


# virtual methods
.method public final cleanImpressionListener()V
    .locals 0

    return-void
.end method

.method public getSplashEyeAd()Lcom/tkay/splashad/api/ITYSplashEyeAd;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public final getSplashSkipInfo()Lcom/tkay/splashad/api/TYSplashSkipInfo;
    .locals 1

    .line 48
    iget-object v0, p0, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->mTYSplashSkipInfo:Lcom/tkay/splashad/api/TYSplashSkipInfo;

    return-object v0
.end method

.method public final internalShow(Landroid/app/Activity;Landroid/view/ViewGroup;Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;)V
    .locals 0

    .line 25
    iput-object p3, p0, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    .line 26
    invoke-virtual {p0, p1, p2}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->show(Landroid/app/Activity;Landroid/view/ViewGroup;)V

    return-void
.end method

.method public final isCustomSkipView()Z
    .locals 1

    .line 56
    iget-object v0, p0, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->mTYSplashSkipInfo:Lcom/tkay/splashad/api/TYSplashSkipInfo;

    if-eqz v0, :cond_0

    .line 57
    invoke-virtual {v0}, Lcom/tkay/splashad/api/TYSplashSkipInfo;->canUseCustomSkipView()Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public isSupportCustomSkipView()Z
    .locals 1

    .line 52
    invoke-virtual {p0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->getMixedFormatAdType()I

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final setFetchAdTimeout(I)V
    .locals 0

    .line 30
    iput p1, p0, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->mFetchAdTimeout:I

    return-void
.end method

.method public final setSplashSkipInfo(Lcom/tkay/splashad/api/TYSplashSkipInfo;)V
    .locals 0

    .line 44
    iput-object p1, p0, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->mTYSplashSkipInfo:Lcom/tkay/splashad/api/TYSplashSkipInfo;

    return-void
.end method

.method public abstract show(Landroid/app/Activity;Landroid/view/ViewGroup;)V
.end method

.method public startSplashCustomSkipViewClickEye()V
    .locals 0

    return-void
.end method
