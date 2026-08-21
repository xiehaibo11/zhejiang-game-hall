.class final Lcom/kwad/components/ad/feed/e$2$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/feed/e$2;->a(Lcom/kwad/components/core/response/model/AdResultData;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic bW:Ljava/util/List;

.field final synthetic dX:Lcom/kwad/components/ad/feed/e$2;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/feed/e$2;Ljava/util/List;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/feed/e$2$2;->dX:Lcom/kwad/components/ad/feed/e$2;

    iput-object p2, p0, Lcom/kwad/components/ad/feed/e$2$2;->bW:Ljava/util/List;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 13

    iget-object v0, p0, Lcom/kwad/components/ad/feed/e$2$2;->bW:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, 0x1

    new-array v9, v1, [I

    const/4 v1, 0x0

    aput v1, v9, v1

    iget-object v1, p0, Lcom/kwad/components/ad/feed/e$2$2;->bW:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v10

    :goto_0
    invoke-interface {v10}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v10}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    move-object v4, v1

    check-cast v4, Lcom/kwad/sdk/api/KsFeedAd;

    move-object v11, v4

    check-cast v11, Lcom/kwad/components/ad/feed/c;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "ksFeedAd "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "KsAdFeedLoadManager"

    invoke-static {v2, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v5

    new-instance v12, Lcom/kwad/components/ad/feed/e$2$2$1;

    move-object v1, v12

    move-object v2, p0

    move-object v3, v11

    move-object v7, v9

    move v8, v0

    invoke-direct/range {v1 .. v8}, Lcom/kwad/components/ad/feed/e$2$2$1;-><init>(Lcom/kwad/components/ad/feed/e$2$2;Lcom/kwad/components/ad/feed/c;Lcom/kwad/sdk/api/KsFeedAd;J[II)V

    invoke-virtual {v11, v12}, Lcom/kwad/components/ad/feed/c;->a(Lcom/kwad/components/ad/feed/c$a;)V

    goto :goto_0

    :cond_0
    return-void
.end method
