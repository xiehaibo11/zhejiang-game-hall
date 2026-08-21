.class Lcom/sigmob/sdk/nativead/t$1;
.super Landroid/os/Handler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/nativead/t;-><init>(Lcom/sigmob/windad/natives/WindNativeAdRequest;Lcom/sigmob/sdk/nativead/v;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/nativead/t;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/nativead/t;Landroid/os/Looper;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/t$1;->a:Lcom/sigmob/sdk/nativead/t;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 3

    iget p1, p1, Landroid/os/Message;->what:I

    const/16 v0, 0x5001

    if-eq p1, v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/t$1;->a:Lcom/sigmob/sdk/nativead/t;

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/t;->a(Lcom/sigmob/sdk/nativead/t;)Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/t$1;->a:Lcom/sigmob/sdk/nativead/t;

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/t;->b(Lcom/sigmob/sdk/nativead/t;)Landroid/os/Handler;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeMessages(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/t$1;->a:Lcom/sigmob/sdk/nativead/t;

    const/4 v0, 0x0

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_AD_TIME_OUT:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {v1}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v1

    sget-object v2, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_AD_TIME_OUT:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {v2}, Lcom/sigmob/windad/WindAdError;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {p1, v0, v1, v2}, Lcom/sigmob/sdk/nativead/t;->a(Lcom/sigmob/sdk/nativead/t;Ljava/util/List;ILjava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method
