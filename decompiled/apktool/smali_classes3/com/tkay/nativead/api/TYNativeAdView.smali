.class public Lcom/tkay/nativead/api/TYNativeAdView;
.super Landroid/widget/FrameLayout;


# static fields
.field private static final TAG:Ljava/lang/String;


# instance fields
.field mAdView:Landroid/view/View;

.field mImpressionEventListener:Lcom/tkay/nativead/api/NativeAd$ImpressionEventListener;

.field mIsInWindow:Z

.field mNativeAd:Lcom/tkay/nativead/api/NativeAd;

.field mNativeAdId:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 21
    const-class v0, Lcom/tkay/nativead/api/TYNativeAdView;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/nativead/api/TYNativeAdView;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 28
    invoke-direct {p0, p1}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 32
    invoke-direct {p0, p1, p2}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 36
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method private callbackImpression()V
    .locals 1

    .line 106
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNativeAdView;->mImpressionEventListener:Lcom/tkay/nativead/api/NativeAd$ImpressionEventListener;

    if-eqz v0, :cond_0

    .line 107
    invoke-interface {v0}, Lcom/tkay/nativead/api/NativeAd$ImpressionEventListener;->onImpression()V

    :cond_0
    return-void
.end method


# virtual methods
.method public declared-synchronized attachNativeAd(Lcom/tkay/nativead/api/NativeAd;)V
    .locals 0

    monitor-enter p0

    .line 58
    :try_start_0
    iput-object p1, p0, Lcom/tkay/nativead/api/TYNativeAdView;->mNativeAd:Lcom/tkay/nativead/api/NativeAd;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 59
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method declared-synchronized clear()V
    .locals 1

    monitor-enter p0

    .line 62
    :try_start_0
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNativeAdView;->mNativeAd:Lcom/tkay/nativead/api/NativeAd;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-eqz v0, :cond_0

    .line 64
    :try_start_1
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNativeAdView;->mNativeAd:Lcom/tkay/nativead/api/NativeAd;

    invoke-virtual {v0, p0}, Lcom/tkay/nativead/api/NativeAd;->clear(Lcom/tkay/nativead/api/TYNativeAdView;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    const/4 v0, 0x0

    .line 70
    :try_start_2
    iput-object v0, p0, Lcom/tkay/nativead/api/TYNativeAdView;->mNativeAd:Lcom/tkay/nativead/api/NativeAd;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 72
    :cond_0
    monitor-exit p0

    return-void

    :catchall_1
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public clearImpressionListener(I)V
    .locals 1

    .line 76
    iget v0, p0, Lcom/tkay/nativead/api/TYNativeAdView;->mNativeAdId:I

    if-ne v0, p1, :cond_0

    const/4 p1, 0x0

    .line 77
    iput-object p1, p0, Lcom/tkay/nativead/api/TYNativeAdView;->mImpressionEventListener:Lcom/tkay/nativead/api/NativeAd$ImpressionEventListener;

    :cond_0
    return-void
.end method

.method public destory()V
    .locals 1

    const/4 v0, 0x0

    .line 116
    iput-object v0, p0, Lcom/tkay/nativead/api/TYNativeAdView;->mImpressionEventListener:Lcom/tkay/nativead/api/NativeAd$ImpressionEventListener;

    return-void
.end method

.method protected isAttachInWindow()Z
    .locals 1

    .line 112
    iget-boolean v0, p0, Lcom/tkay/nativead/api/TYNativeAdView;->mIsInWindow:Z

    return v0
.end method

.method protected onAttachedToWindow()V
    .locals 1

    .line 92
    invoke-super {p0}, Landroid/widget/FrameLayout;->onAttachedToWindow()V

    const/4 v0, 0x1

    .line 93
    iput-boolean v0, p0, Lcom/tkay/nativead/api/TYNativeAdView;->mIsInWindow:Z

    .line 94
    invoke-virtual {p0}, Lcom/tkay/nativead/api/TYNativeAdView;->getVisibility()I

    move-result v0

    if-nez v0, :cond_0

    .line 95
    invoke-direct {p0}, Lcom/tkay/nativead/api/TYNativeAdView;->callbackImpression()V

    :cond_0
    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 1

    .line 101
    invoke-super {p0}, Landroid/widget/FrameLayout;->onDetachedFromWindow()V

    const/4 v0, 0x0

    .line 102
    iput-boolean v0, p0, Lcom/tkay/nativead/api/TYNativeAdView;->mIsInWindow:Z

    return-void
.end method

.method protected onVisibilityChanged(Landroid/view/View;I)V
    .locals 0

    .line 84
    invoke-super {p0, p1, p2}, Landroid/widget/FrameLayout;->onVisibilityChanged(Landroid/view/View;I)V

    if-nez p2, :cond_0

    .line 85
    invoke-virtual {p0}, Lcom/tkay/nativead/api/TYNativeAdView;->getVisibility()I

    move-result p1

    if-nez p1, :cond_0

    .line 86
    invoke-direct {p0}, Lcom/tkay/nativead/api/TYNativeAdView;->callbackImpression()V

    :cond_0
    return-void
.end method

.method protected renderView(ILandroid/view/View;Lcom/tkay/nativead/api/NativeAd$ImpressionEventListener;)V
    .locals 1

    .line 43
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNativeAdView;->mAdView:Landroid/view/View;

    if-eqz v0, :cond_0

    .line 44
    invoke-virtual {p0, v0}, Lcom/tkay/nativead/api/TYNativeAdView;->removeView(Landroid/view/View;)V

    .line 47
    :cond_0
    iput-object p2, p0, Lcom/tkay/nativead/api/TYNativeAdView;->mAdView:Landroid/view/View;

    .line 48
    iput p1, p0, Lcom/tkay/nativead/api/TYNativeAdView;->mNativeAdId:I

    .line 49
    iput-object p3, p0, Lcom/tkay/nativead/api/TYNativeAdView;->mImpressionEventListener:Lcom/tkay/nativead/api/NativeAd$ImpressionEventListener;

    .line 51
    invoke-virtual {p0, p2}, Lcom/tkay/nativead/api/TYNativeAdView;->addView(Landroid/view/View;)V

    .line 52
    iget-boolean p1, p0, Lcom/tkay/nativead/api/TYNativeAdView;->mIsInWindow:Z

    if-eqz p1, :cond_1

    invoke-virtual {p0}, Lcom/tkay/nativead/api/TYNativeAdView;->getVisibility()I

    move-result p1

    if-nez p1, :cond_1

    .line 53
    invoke-direct {p0}, Lcom/tkay/nativead/api/TYNativeAdView;->callbackImpression()V

    :cond_1
    return-void
.end method
