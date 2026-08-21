.class final Lcom/tkay/splashad/a/c$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/b/k;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/splashad/a/c;->a(Landroid/app/Activity;Landroid/view/ViewGroup;Lcom/tkay/splashad/a/f;ZLcom/tkay/core/api/BaseAd;Lcom/tkay/core/common/f/d;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:[Z

.field final synthetic b:Lcom/tkay/splashad/a/f;

.field final synthetic c:Lcom/tkay/splashad/a/c;


# direct methods
.method constructor <init>(Lcom/tkay/splashad/a/c;[ZLcom/tkay/splashad/a/f;)V
    .locals 0

    .line 338
    iput-object p1, p0, Lcom/tkay/splashad/a/c$2;->c:Lcom/tkay/splashad/a/c;

    iput-object p2, p0, Lcom/tkay/splashad/a/c$2;->a:[Z

    iput-object p3, p0, Lcom/tkay/splashad/a/c$2;->b:Lcom/tkay/splashad/a/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClicked(Landroid/view/View;)V
    .locals 0

    .line 350
    iget-object p1, p0, Lcom/tkay/splashad/a/c$2;->b:Lcom/tkay/splashad/a/f;

    invoke-virtual {p1}, Lcom/tkay/splashad/a/f;->onSplashAdClicked()V

    return-void
.end method

.method public final onAdDislikeButtonClick()V
    .locals 0

    return-void
.end method

.method public final onAdImpressed()V
    .locals 3

    .line 341
    iget-object v0, p0, Lcom/tkay/splashad/a/c$2;->a:[Z

    const/4 v1, 0x0

    aget-boolean v2, v0, v1

    if-eqz v2, :cond_0

    return-void

    :cond_0
    const/4 v2, 0x1

    .line 344
    aput-boolean v2, v0, v1

    .line 345
    iget-object v0, p0, Lcom/tkay/splashad/a/c$2;->b:Lcom/tkay/splashad/a/f;

    invoke-virtual {v0}, Lcom/tkay/splashad/a/f;->onSplashAdShow()V

    return-void
.end method

.method public final onAdVideoEnd()V
    .locals 0

    return-void
.end method

.method public final onAdVideoProgress(I)V
    .locals 0

    return-void
.end method

.method public final onAdVideoStart()V
    .locals 0

    return-void
.end method

.method public final onDeeplinkCallback(Z)V
    .locals 1

    .line 375
    iget-object v0, p0, Lcom/tkay/splashad/a/c$2;->b:Lcom/tkay/splashad/a/f;

    invoke-virtual {v0, p1}, Lcom/tkay/splashad/a/f;->onDeeplinkCallback(Z)V

    return-void
.end method

.method public final onDownloadConfirmCallback(Landroid/content/Context;Landroid/view/View;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
    .locals 0

    .line 380
    iget-object p2, p0, Lcom/tkay/splashad/a/c$2;->b:Lcom/tkay/splashad/a/f;

    invoke-virtual {p2, p1, p3}, Lcom/tkay/splashad/a/f;->onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V

    return-void
.end method
