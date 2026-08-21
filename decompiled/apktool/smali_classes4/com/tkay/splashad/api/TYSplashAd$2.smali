.class Lcom/tkay/splashad/api/TYSplashAd$2;
.super Lcom/tkay/splashad/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/splashad/api/TYSplashAd;->show(Landroid/app/Activity;Landroid/view/ViewGroup;Lcom/tkay/splashad/api/TYSplashSkipInfo;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/tkay/splashad/api/TYSplashAd;


# direct methods
.method constructor <init>(Lcom/tkay/splashad/api/TYSplashAd;)V
    .locals 0

    .line 314
    iput-object p1, p0, Lcom/tkay/splashad/api/TYSplashAd$2;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    invoke-direct {p0}, Lcom/tkay/splashad/a/a;-><init>()V

    return-void
.end method


# virtual methods
.method public onAdClick(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 357
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/splashad/api/TYSplashAd$2$4;

    invoke-direct {v1, p0, p1}, Lcom/tkay/splashad/api/TYSplashAd$2$4;-><init>(Lcom/tkay/splashad/api/TYSplashAd$2;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onAdDismiss(Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/splashad/api/TYSplashAdExtraInfo;)V
    .locals 2

    .line 369
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/splashad/api/TYSplashAd$2$5;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/splashad/api/TYSplashAd$2$5;-><init>(Lcom/tkay/splashad/api/TYSplashAd$2;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/splashad/api/TYSplashAdExtraInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onAdShow(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 341
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/splashad/api/TYSplashAd$2$3;

    invoke-direct {v1, p0, p1}, Lcom/tkay/splashad/api/TYSplashAd$2$3;-><init>(Lcom/tkay/splashad/api/TYSplashAd$2;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    .line 350
    iget-object p1, p0, Lcom/tkay/splashad/api/TYSplashAd$2;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object p1, p1, Lcom/tkay/splashad/api/TYSplashAd;->mAdLoadManager:Lcom/tkay/splashad/a/c;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/tkay/splashad/a/c;->a(Lcom/tkay/core/api/TYAdStatusInfo;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 351
    iget-object p1, p0, Lcom/tkay/splashad/api/TYSplashAd$2;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    const/4 v0, 0x6

    invoke-static {p1, v0}, Lcom/tkay/splashad/api/TYSplashAd;->access$000(Lcom/tkay/splashad/api/TYSplashAd;I)V

    :cond_0
    return-void
.end method

.method public onDeeplinkCallback(Lcom/tkay/core/api/TYAdInfo;Z)V
    .locals 2

    .line 317
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/splashad/api/TYSplashAd$2$1;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/splashad/api/TYSplashAd$2$1;-><init>(Lcom/tkay/splashad/api/TYSplashAd$2;Lcom/tkay/core/api/TYAdInfo;Z)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
    .locals 2

    .line 329
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/splashad/api/TYSplashAd$2$2;

    invoke-direct {v1, p0, p1, p2, p3}, Lcom/tkay/splashad/api/TYSplashAd$2$2;-><init>(Lcom/tkay/splashad/api/TYSplashAd$2;Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method
