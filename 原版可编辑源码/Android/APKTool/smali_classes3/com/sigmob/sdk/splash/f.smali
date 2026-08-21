.class Lcom/sigmob/sdk/splash/f;
.super Lcom/sigmob/sdk/base/common/v;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/splash/f$a;
    }
.end annotation


# instance fields
.field d:Lcom/sigmob/sdk/splash/c;

.field private e:Lcom/sigmob/sdk/splash/SplashAdBroadcastReceiver;


# direct methods
.method protected constructor <init>(Lcom/sigmob/sdk/base/common/m$b;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/common/v;-><init>(Lcom/sigmob/sdk/base/common/m$b;)V

    return-void
.end method

.method public static c(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCrid()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_1

    iget-object p0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_url:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_0

    iget-object p0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_src:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x1

    return p0

    :cond_1
    :goto_0
    const/4 p0, 0x0

    return p0
.end method


# virtual methods
.method protected a(Lcom/sigmob/sdk/base/common/m$b;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/splash/f;->b:Lcom/sigmob/sdk/base/common/m$b;

    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/os/Bundle;)V
    .locals 1

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/splash/f;->c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    :cond_0
    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdConfig()Lcom/sigmob/sdk/base/common/h;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/splash/c;

    iput-object v0, p0, Lcom/sigmob/sdk/splash/f;->d:Lcom/sigmob/sdk/splash/c;

    invoke-super {p0, p1, p2}, Lcom/sigmob/sdk/base/common/v;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/os/Bundle;)V

    iget-object p1, p0, Lcom/sigmob/sdk/splash/f;->b:Lcom/sigmob/sdk/base/common/m$b;

    instance-of p1, p1, Lcom/sigmob/sdk/splash/f$a;

    if-eqz p1, :cond_1

    new-instance p1, Lcom/sigmob/sdk/splash/SplashAdBroadcastReceiver;

    iget-object p2, p0, Lcom/sigmob/sdk/splash/f;->b:Lcom/sigmob/sdk/base/common/m$b;

    check-cast p2, Lcom/sigmob/sdk/splash/f$a;

    iget-object v0, p0, Lcom/sigmob/sdk/splash/f;->a:Ljava/lang/String;

    invoke-direct {p1, p2, v0}, Lcom/sigmob/sdk/splash/SplashAdBroadcastReceiver;-><init>(Lcom/sigmob/sdk/splash/f$a;Ljava/lang/String;)V

    iput-object p1, p0, Lcom/sigmob/sdk/splash/f;->e:Lcom/sigmob/sdk/splash/SplashAdBroadcastReceiver;

    invoke-virtual {p1, p1}, Lcom/sigmob/sdk/splash/SplashAdBroadcastReceiver;->a(Landroid/content/BroadcastReceiver;)V

    :cond_1
    return-void
.end method

.method public a(Ljava/util/Map;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ")V"
        }
    .end annotation

    invoke-super {p0, p1, p2}, Lcom/sigmob/sdk/base/common/v;->a(Ljava/util/Map;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    return-void
.end method

.method protected a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z
    .locals 0

    invoke-static {p1}, Lcom/sigmob/sdk/splash/f;->c(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z

    move-result p1

    return p1
.end method

.method public b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/sigmob/sdk/base/common/v;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    iget-object p1, p0, Lcom/sigmob/sdk/splash/f;->e:Lcom/sigmob/sdk/splash/SplashAdBroadcastReceiver;

    if-eqz p1, :cond_0

    invoke-virtual {p1, p1}, Lcom/sigmob/sdk/splash/SplashAdBroadcastReceiver;->b(Landroid/content/BroadcastReceiver;)V

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/sigmob/sdk/splash/f;->e:Lcom/sigmob/sdk/splash/SplashAdBroadcastReceiver;

    :cond_0
    return-void
.end method
