.class Lcom/sigmob/sdk/base/j$1$6;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/j$1;->onVideoAdPlayError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/windad/WindAdError;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/sigmob/sdk/base/j$1;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/j$1;Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/j$1$6;->c:Lcom/sigmob/sdk/base/j$1;

    iput-object p2, p0, Lcom/sigmob/sdk/base/j$1$6;->a:Lcom/sigmob/windad/WindAdError;

    iput-object p3, p0, Lcom/sigmob/sdk/base/j$1$6;->b:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$1$6;->c:Lcom/sigmob/sdk/base/j$1;

    iget-object v0, v0, Lcom/sigmob/sdk/base/j$1;->a:Lcom/sigmob/sdk/rewardVideoAd/g;

    if-eqz v0, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onVideoAdPlayError "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/j$1$6;->a:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {v1}, Lcom/sigmob/windad/WindAdError;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/j$1$6;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$1$6;->c:Lcom/sigmob/sdk/base/j$1;

    iget-object v0, v0, Lcom/sigmob/sdk/base/j$1;->a:Lcom/sigmob/sdk/rewardVideoAd/g;

    iget-object v1, p0, Lcom/sigmob/sdk/base/j$1$6;->a:Lcom/sigmob/windad/WindAdError;

    iget-object v2, p0, Lcom/sigmob/sdk/base/j$1$6;->b:Ljava/lang/String;

    invoke-interface {v0, v1, v2}, Lcom/sigmob/sdk/rewardVideoAd/g;->onVideoAdPlayError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
