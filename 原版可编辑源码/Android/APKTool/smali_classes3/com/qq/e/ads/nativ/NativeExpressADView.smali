.class public abstract Lcom/qq/e/ads/nativ/NativeExpressADView;
.super Landroid/widget/FrameLayout;
.source ""

# interfaces
.implements Lcom/qq/e/comm/compliance/DownloadConfirmListener;
.implements Lcom/qq/e/comm/pi/LADI;
.implements Lcom/qq/e/comm/pi/NFBI;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qq/e/ads/nativ/NativeExpressADView$ViewBindStatusListener;
    }
.end annotation


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    return-void
.end method


# virtual methods
.method public abstract destroy()V
.end method

.method public abstract getBoundData()Lcom/qq/e/comm/pi/AdData;
.end method

.method public abstract negativeFeedback()V
.end method

.method public abstract preloadVideo()V
.end method

.method public abstract render()V
.end method

.method public abstract setAdSize(Lcom/qq/e/ads/nativ/ADSize;)V
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end method

.method public abstract setMediaListener(Lcom/qq/e/ads/nativ/NativeExpressMediaListener;)V
.end method

.method public abstract setViewBindStatusListener(Lcom/qq/e/ads/nativ/NativeExpressADView$ViewBindStatusListener;)V
.end method
