.class public abstract Lcom/tkay/splashad/a/a;
.super Ljava/lang/Object;


# instance fields
.field mHasDismiss:Z


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public abstract onAdClick(Lcom/tkay/core/api/TYAdInfo;)V
.end method

.method public abstract onAdDismiss(Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/splashad/api/TYSplashAdExtraInfo;)V
.end method

.method public abstract onAdShow(Lcom/tkay/core/api/TYAdInfo;)V
.end method

.method public onCallbackAdDismiss(Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/splashad/api/TYSplashAdExtraInfo;)V
    .locals 1

    .line 21
    iget-boolean v0, p0, Lcom/tkay/splashad/a/a;->mHasDismiss:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    .line 22
    iput-boolean v0, p0, Lcom/tkay/splashad/a/a;->mHasDismiss:Z

    .line 24
    invoke-virtual {p0, p1, p2}, Lcom/tkay/splashad/a/a;->onAdDismiss(Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/splashad/api/TYSplashAdExtraInfo;)V

    :cond_0
    return-void
.end method

.method public abstract onDeeplinkCallback(Lcom/tkay/core/api/TYAdInfo;Z)V
.end method

.method public abstract onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
.end method
