.class final Lcom/tkay/network/toutiao/TTTYSplashAdapter$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/CSJSplashAd$SplashClickEyeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/toutiao/TTTYSplashAdapter;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)V
    .locals 0

    .line 251
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$3;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onSplashClickEyeClick()V
    .locals 1

    .line 261
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$3;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->e(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 262
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$3;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->f(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdClicked()V

    :cond_0
    return-void
.end method

.method public final onSplashClickEyeClose()V
    .locals 3

    .line 268
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$3;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    iget-boolean v0, v0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->e:Z

    if-eqz v0, :cond_0

    .line 269
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$3;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    iget-object v0, v0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->f:Lcom/tkay/network/toutiao/TTTYSplashEyeAd;

    if-eqz v0, :cond_0

    .line 270
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$3;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    iget-object v0, v0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->f:Lcom/tkay/network/toutiao/TTTYSplashEyeAd;

    invoke-virtual {v0}, Lcom/tkay/network/toutiao/TTTYSplashEyeAd;->getSplashEyeAdListener()Lcom/tkay/splashad/api/TYSplashEyeAdListener;

    move-result-object v0

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    const-string v2, ""

    .line 272
    invoke-interface {v0, v1, v2}, Lcom/tkay/splashad/api/TYSplashEyeAdListener;->onAdDismiss(ZLjava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onSplashClickEyeReadyToShow(Lcom/bykv/vk/openvk/CSJSplashAd;)V
    .locals 3

    .line 254
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$3;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    const/4 v0, 0x1

    iput-boolean v0, p1, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->e:Z

    .line 255
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$3;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    new-instance v0, Lcom/tkay/network/toutiao/TTTYSplashEyeAd;

    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$3;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    iget-object v2, v1, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->d:Lcom/bykv/vk/openvk/CSJSplashAd;

    invoke-direct {v0, v1, v2}, Lcom/tkay/network/toutiao/TTTYSplashEyeAd;-><init>(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/bykv/vk/openvk/CSJSplashAd;)V

    iput-object v0, p1, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->f:Lcom/tkay/network/toutiao/TTTYSplashEyeAd;

    .line 256
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$3;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    iget-object p1, p1, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->f:Lcom/tkay/network/toutiao/TTTYSplashEyeAd;

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$3;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    iget-object v0, v0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->g:Landroid/view/View;

    invoke-virtual {p1, v0}, Lcom/tkay/network/toutiao/TTTYSplashEyeAd;->setSplashView(Landroid/view/View;)V

    return-void
.end method
