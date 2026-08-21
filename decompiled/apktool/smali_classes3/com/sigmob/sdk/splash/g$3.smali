.class Lcom/sigmob/sdk/splash/g$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/splash/g;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/splash/g;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/splash/g;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/splash/g$3;->a:Lcom/sigmob/sdk/splash/g;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g$3;->a:Lcom/sigmob/sdk/splash/g;

    invoke-static {v0}, Lcom/sigmob/sdk/splash/g;->k(Lcom/sigmob/sdk/splash/g;)Lcom/sigmob/windad/Splash/WindSplashADListener;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g$3;->a:Lcom/sigmob/sdk/splash/g;

    invoke-static {v0}, Lcom/sigmob/sdk/splash/g;->k(Lcom/sigmob/sdk/splash/g;)Lcom/sigmob/windad/Splash/WindSplashADListener;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/splash/g$3;->a:Lcom/sigmob/sdk/splash/g;

    invoke-static {v1}, Lcom/sigmob/sdk/splash/g;->j(Lcom/sigmob/sdk/splash/g;)Lcom/sigmob/sdk/base/models/LoadAdRequest;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getPlacementId()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/sigmob/windad/Splash/WindSplashADListener;->onSplashAdLoadSuccess(Ljava/lang/String;)V

    :cond_0
    return-void
.end method
