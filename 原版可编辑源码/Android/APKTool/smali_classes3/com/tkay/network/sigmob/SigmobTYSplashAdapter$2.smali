.class final Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)V
    .locals 0

    .line 101
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    .line 104
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    new-instance v1, Lcom/sigmob/windad/Splash/WindSplashAdRequest;

    iget-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {v2}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Ljava/lang/String;

    move-result-object v2

    const-string v3, ""

    const/4 v4, 0x0

    invoke-direct {v1, v2, v3, v4}, Lcom/sigmob/windad/Splash/WindSplashAdRequest;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    invoke-static {v0, v1}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->a(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;Lcom/sigmob/windad/Splash/WindSplashAdRequest;)Lcom/sigmob/windad/Splash/WindSplashAdRequest;

    .line 105
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->d(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/sigmob/windad/Splash/WindSplashAdRequest;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {v1}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->c(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)I

    move-result v1

    div-int/lit16 v1, v1, 0x3e8

    invoke-virtual {v0, v1}, Lcom/sigmob/windad/Splash/WindSplashAdRequest;->setFetchDelay(I)V

    .line 106
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->d(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/sigmob/windad/Splash/WindSplashAdRequest;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/sigmob/windad/Splash/WindSplashAdRequest;->setDisableAutoHideAd(Z)V

    .line 109
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    new-instance v1, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;

    invoke-direct {v1, p0}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;-><init>(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;)V

    invoke-static {v0, v1}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->a(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;Lcom/sigmob/windad/Splash/WindSplashADListener;)Lcom/sigmob/windad/Splash/WindSplashADListener;

    .line 176
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    new-instance v1, Lcom/sigmob/windad/Splash/WindSplashAD;

    iget-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {v2}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->d(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/sigmob/windad/Splash/WindSplashAdRequest;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {v3}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->s(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/sigmob/windad/Splash/WindSplashADListener;

    move-result-object v3

    invoke-direct {v1, v2, v3}, Lcom/sigmob/windad/Splash/WindSplashAD;-><init>(Lcom/sigmob/windad/Splash/WindSplashAdRequest;Lcom/sigmob/windad/Splash/WindSplashADListener;)V

    invoke-static {v0, v1}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->a(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;Lcom/sigmob/windad/Splash/WindSplashAD;)Lcom/sigmob/windad/Splash/WindSplashAD;

    .line 178
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->g(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 179
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->h(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/sigmob/windad/Splash/WindSplashAD;

    move-result-object v0

    const-string v1, "USD"

    invoke-virtual {v0, v1}, Lcom/sigmob/windad/Splash/WindSplashAD;->setCurrency(Ljava/lang/String;)V

    .line 180
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->h(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/sigmob/windad/Splash/WindSplashAD;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/windad/Splash/WindSplashAD;->loadAd()Z

    return-void

    .line 184
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->t(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 185
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->h(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/sigmob/windad/Splash/WindSplashAD;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {v1}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->t(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/windad/Splash/WindSplashAD;->loadAd(Ljava/lang/String;)Z

    return-void

    .line 187
    :cond_1
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->h(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/sigmob/windad/Splash/WindSplashAD;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/windad/Splash/WindSplashAD;->loadAd()Z

    return-void
.end method
