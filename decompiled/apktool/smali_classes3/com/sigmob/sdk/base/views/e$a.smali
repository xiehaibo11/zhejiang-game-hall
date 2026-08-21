.class Lcom/sigmob/sdk/base/views/e$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/views/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/views/e;


# direct methods
.method public constructor <init>(Lcom/sigmob/sdk/base/views/e;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/e$a;->a:Lcom/sigmob/sdk/base/views/e;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getApKDownloadProcess()I
    .locals 7
    .annotation runtime Landroid/webkit/JavascriptInterface;
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/e$a;->a:Lcom/sigmob/sdk/base/views/e;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/e;->a()V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/e$a;->a:Lcom/sigmob/sdk/base/views/e;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/e;->getContext()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/e$a;->a:Lcom/sigmob/sdk/base/views/e;

    invoke-static {v0}, Lcom/sigmob/sdk/base/views/e;->b(Lcom/sigmob/sdk/base/views/e;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/e$a;->a:Lcom/sigmob/sdk/base/views/e;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/e;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/e$a;->a:Lcom/sigmob/sdk/base/views/e;

    invoke-static {v1}, Lcom/sigmob/sdk/base/views/e;->b(Lcom/sigmob/sdk/base/views/e;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getDownloadId()Ljava/lang/Long;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/sigmob/sdk/base/common/n;->a(Landroid/content/Context;Ljava/lang/Long;)[J

    move-result-object v0

    const/4 v1, 0x2

    aget-wide v2, v0, v1

    long-to-int v2, v2

    const/4 v3, 0x0

    const/4 v4, 0x1

    if-eq v2, v4, :cond_2

    if-eq v2, v1, :cond_1

    const/16 v0, 0x8

    if-eq v2, v0, :cond_0

    goto :goto_0

    :cond_0
    const/16 v0, 0x64

    return v0

    :cond_1
    aget-wide v1, v0, v3

    aget-wide v3, v0, v4

    const-wide/16 v5, 0x64

    mul-long/2addr v1, v5

    div-long/2addr v1, v3

    long-to-int v0, v1

    return v0

    :cond_2
    return v3

    :cond_3
    :goto_0
    const/4 v0, -0x1

    return v0
.end method
