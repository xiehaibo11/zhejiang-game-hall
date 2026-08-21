.class Lcom/sigmob/sdk/mraid2/b$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/mraid2/b;->i()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/mraid2/b;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid2/b;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/b$2;->a:Lcom/sigmob/sdk/mraid2/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    :try_start_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b$2;->a:Lcom/sigmob/sdk/mraid2/b;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid2/b;->a(Z)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b$2;->a:Lcom/sigmob/sdk/mraid2/b;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid2/b;->d()V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b$2;->a:Lcom/sigmob/sdk/mraid2/b;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/b$2;->a:Lcom/sigmob/sdk/mraid2/b;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/b;->a(Lcom/sigmob/sdk/mraid2/b;)Lcom/sigmob/sdk/mraid2/e;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/mraid2/e;->getAdSize()Lcom/sigmob/sdk/base/common/e;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid2/b;->a(Lcom/sigmob/sdk/base/common/e;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b$2;->a:Lcom/sigmob/sdk/mraid2/b;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid2/b;->e()V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b$2;->a:Lcom/sigmob/sdk/mraid2/b;

    const/16 v1, 0x64

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid2/b;->a(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b$2;->a:Lcom/sigmob/sdk/mraid2/b;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/b$2;->a:Lcom/sigmob/sdk/mraid2/b;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/b;->b(Lcom/sigmob/sdk/mraid2/b;)Ljava/util/List;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/sigmob/sdk/mraid2/b;->a(Lcom/sigmob/sdk/mraid2/b;Ljava/util/List;)Lcom/sigmob/sdk/base/models/rtb/BidResponse;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/b$2;->a:Lcom/sigmob/sdk/mraid2/b;

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/mraid2/b;->a(Lcom/sigmob/sdk/base/models/rtb/BidResponse;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    const-string v1, "handleMraidLoad"

    invoke-static {v1, v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method
