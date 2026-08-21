.class Lcom/sigmob/sdk/base/common/ag$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/ah$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/common/ag;->b(Landroid/content/Context;Ljava/lang/String;)Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/common/af;

.field final synthetic b:Landroid/content/Context;

.field final synthetic c:Lcom/sigmob/sdk/base/common/ag;

.field final synthetic d:Ljava/lang/String;

.field final synthetic e:Landroid/net/Uri;

.field final synthetic f:Lcom/sigmob/sdk/base/common/ag;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/common/ag;Lcom/sigmob/sdk/base/common/af;Landroid/content/Context;Lcom/sigmob/sdk/base/common/ag;Ljava/lang/String;Landroid/net/Uri;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/ag$3;->f:Lcom/sigmob/sdk/base/common/ag;

    iput-object p2, p0, Lcom/sigmob/sdk/base/common/ag$3;->a:Lcom/sigmob/sdk/base/common/af;

    iput-object p3, p0, Lcom/sigmob/sdk/base/common/ag$3;->b:Landroid/content/Context;

    iput-object p4, p0, Lcom/sigmob/sdk/base/common/ag$3;->c:Lcom/sigmob/sdk/base/common/ag;

    iput-object p5, p0, Lcom/sigmob/sdk/base/common/ag$3;->d:Ljava/lang/String;

    iput-object p6, p0, Lcom/sigmob/sdk/base/common/ag$3;->e:Landroid/net/Uri;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/String;)V
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/ag$3;->a:Lcom/sigmob/sdk/base/common/af;

    invoke-virtual {p1}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v1

    const-string v2, "http"

    invoke-virtual {v1, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_0

    sget-object v0, Lcom/sigmob/sdk/base/common/af;->c:Lcom/sigmob/sdk/base/common/af;

    :cond_0
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    :try_start_0
    iget-object v1, p0, Lcom/sigmob/sdk/base/common/ag$3;->b:Landroid/content/Context;

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/ag$3;->c:Lcom/sigmob/sdk/base/common/ag;

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/ag$3;->f:Lcom/sigmob/sdk/base/common/ag;

    invoke-static {v3}, Lcom/sigmob/sdk/base/common/ag;->a(Lcom/sigmob/sdk/base/common/ag;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v3

    invoke-virtual {v0, v1, p1, v2, v3}, Lcom/sigmob/sdk/base/common/af;->a(Landroid/content/Context;Landroid/net/Uri;Lcom/sigmob/sdk/base/common/ag;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    invoke-static {}, Lcom/sigmob/windad/WindAds;->sharedAds()Lcom/sigmob/windad/WindAds;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAds;->getHandler()Landroid/os/Handler;

    move-result-object p1

    new-instance v1, Lcom/sigmob/sdk/base/common/ag$3$1;

    invoke-direct {v1, p0, v0}, Lcom/sigmob/sdk/base/common/ag$3$1;-><init>(Lcom/sigmob/sdk/base/common/ag$3;Lcom/sigmob/sdk/base/common/af;)V

    invoke-virtual {p1, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    invoke-static {}, Lcom/sigmob/windad/WindAds;->sharedAds()Lcom/sigmob/windad/WindAds;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAds;->getHandler()Landroid/os/Handler;

    move-result-object p1

    new-instance v1, Lcom/sigmob/sdk/base/common/ag$3$2;

    invoke-direct {v1, p0, v0}, Lcom/sigmob/sdk/base/common/ag$3$2;-><init>(Lcom/sigmob/sdk/base/common/ag$3;Lcom/sigmob/sdk/base/common/af;)V

    invoke-virtual {p1, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 3

    :try_start_0
    iget-object p1, p0, Lcom/sigmob/sdk/base/common/ag$3;->a:Lcom/sigmob/sdk/base/common/af;

    iget-object p2, p0, Lcom/sigmob/sdk/base/common/ag$3;->b:Landroid/content/Context;

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/ag$3;->e:Landroid/net/Uri;

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/ag$3;->c:Lcom/sigmob/sdk/base/common/ag;

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/ag$3;->f:Lcom/sigmob/sdk/base/common/ag;

    invoke-static {v2}, Lcom/sigmob/sdk/base/common/ag;->a(Lcom/sigmob/sdk/base/common/ag;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v2

    invoke-virtual {p1, p2, v0, v1, v2}, Lcom/sigmob/sdk/base/common/af;->a(Landroid/content/Context;Landroid/net/Uri;Lcom/sigmob/sdk/base/common/ag;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    invoke-static {}, Lcom/sigmob/windad/WindAds;->sharedAds()Lcom/sigmob/windad/WindAds;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAds;->getHandler()Landroid/os/Handler;

    move-result-object p1

    new-instance p2, Lcom/sigmob/sdk/base/common/ag$3$3;

    invoke-direct {p2, p0}, Lcom/sigmob/sdk/base/common/ag$3$3;-><init>(Lcom/sigmob/sdk/base/common/ag$3;)V

    invoke-virtual {p1, p2}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    invoke-static {}, Lcom/sigmob/windad/WindAds;->sharedAds()Lcom/sigmob/windad/WindAds;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAds;->getHandler()Landroid/os/Handler;

    move-result-object p1

    new-instance p2, Lcom/sigmob/sdk/base/common/ag$3$4;

    invoke-direct {p2, p0}, Lcom/sigmob/sdk/base/common/ag$3$4;-><init>(Lcom/sigmob/sdk/base/common/ag$3;)V

    invoke-virtual {p1, p2}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method
