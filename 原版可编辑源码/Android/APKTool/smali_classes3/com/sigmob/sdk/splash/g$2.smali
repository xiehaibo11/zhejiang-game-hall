.class Lcom/sigmob/sdk/splash/g$2;
.super Landroid/os/Handler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/splash/g;->a(Ljava/lang/String;ILjava/lang/String;IZ)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/splash/g;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/splash/g;Landroid/os/Looper;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/splash/g$2;->a:Lcom/sigmob/sdk/splash/g;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 5

    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    iget p1, p1, Landroid/os/Message;->what:I

    const v0, 0x20001

    if-eq p1, v0, :cond_0

    goto :goto_0

    :cond_0
    sget-object p1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_SPLASH_TIMEOUT:Lcom/sigmob/windad/WindAdError;

    const/4 v0, 0x0

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v1

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->getMessage()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/sigmob/sdk/splash/g$2;->a:Lcom/sigmob/sdk/splash/g;

    invoke-static {v3}, Lcom/sigmob/sdk/splash/g;->j(Lcom/sigmob/sdk/splash/g;)Lcom/sigmob/sdk/base/models/LoadAdRequest;

    move-result-object v3

    const-string v4, "request"

    invoke-static {v4, v0, v1, v2, v3}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g$2;->a:Lcom/sigmob/sdk/splash/g;

    const/4 v1, 0x1

    invoke-static {v0, p1, v1}, Lcom/sigmob/sdk/splash/g;->a(Lcom/sigmob/sdk/splash/g;Lcom/sigmob/windad/WindAdError;Z)V

    :goto_0
    return-void
.end method
