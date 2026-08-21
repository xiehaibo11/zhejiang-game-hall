.class final Lcom/kwad/components/ad/feed/e$2$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/feed/c$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/feed/e$2$2;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic dY:Lcom/kwad/components/ad/feed/c;

.field final synthetic dZ:Lcom/kwad/sdk/api/KsFeedAd;

.field final synthetic ea:J

.field final synthetic eb:[I

.field final synthetic ec:I

.field final synthetic ed:Lcom/kwad/components/ad/feed/e$2$2;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/feed/e$2$2;Lcom/kwad/components/ad/feed/c;Lcom/kwad/sdk/api/KsFeedAd;J[II)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/feed/e$2$2$1;->ed:Lcom/kwad/components/ad/feed/e$2$2;

    iput-object p2, p0, Lcom/kwad/components/ad/feed/e$2$2$1;->dY:Lcom/kwad/components/ad/feed/c;

    iput-object p3, p0, Lcom/kwad/components/ad/feed/e$2$2$1;->dZ:Lcom/kwad/sdk/api/KsFeedAd;

    iput-wide p4, p0, Lcom/kwad/components/ad/feed/e$2$2$1;->ea:J

    iput-object p6, p0, Lcom/kwad/components/ad/feed/e$2$2$1;->eb:[I

    iput p7, p0, Lcom/kwad/components/ad/feed/e$2$2$1;->ec:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final c(ILjava/lang/String;)V
    .locals 5

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "ksFeedAd onLoadFinished"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/components/ad/feed/e$2$2$1;->dY:Lcom/kwad/components/ad/feed/c;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "KsAdFeedLoadManager"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/e$2$2$1;->dZ:Lcom/kwad/sdk/api/KsFeedAd;

    check-cast v0, Lcom/kwad/components/ad/feed/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/feed/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    iget-wide v3, p0, Lcom/kwad/components/ad/feed/e$2$2$1;->ea:J

    sub-long/2addr v1, v3

    invoke-static {v0, p1, v1, v2, p2}, Lcom/kwad/components/ad/feed/monitor/b;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;IJLjava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/components/ad/feed/e$2$2$1;->eb:[I

    const/4 p2, 0x0

    aget v0, p1, p2

    add-int/lit8 v0, v0, 0x1

    aput v0, p1, p2

    iget p1, p0, Lcom/kwad/components/ad/feed/e$2$2$1;->ec:I

    if-ne v0, p1, :cond_0

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iget-object p2, p0, Lcom/kwad/components/ad/feed/e$2$2$1;->ed:Lcom/kwad/components/ad/feed/e$2$2;

    iget-object p2, p2, Lcom/kwad/components/ad/feed/e$2$2;->dX:Lcom/kwad/components/ad/feed/e$2;

    iget-wide v2, p2, Lcom/kwad/components/ad/feed/e$2;->dW:J

    sub-long/2addr v0, v2

    invoke-static {p1, v0, v1}, Lcom/kwad/components/ad/feed/monitor/b;->a(IJ)V

    invoke-static {}, Lcom/kwad/components/ad/KsAdLoadManager;->M()Lcom/kwad/components/ad/KsAdLoadManager;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/ad/feed/e$2$2$1;->ed:Lcom/kwad/components/ad/feed/e$2$2;

    iget-object p2, p2, Lcom/kwad/components/ad/feed/e$2$2;->bW:Ljava/util/List;

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/KsAdLoadManager;->b(Ljava/util/List;)V

    iget-object p1, p0, Lcom/kwad/components/ad/feed/e$2$2$1;->ed:Lcom/kwad/components/ad/feed/e$2$2;

    iget-object p1, p1, Lcom/kwad/components/ad/feed/e$2$2;->dX:Lcom/kwad/components/ad/feed/e$2;

    iget-object p1, p1, Lcom/kwad/components/ad/feed/e$2;->dT:Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;

    iget-object p2, p0, Lcom/kwad/components/ad/feed/e$2$2$1;->ed:Lcom/kwad/components/ad/feed/e$2$2;

    iget-object p2, p2, Lcom/kwad/components/ad/feed/e$2$2;->bW:Ljava/util/List;

    invoke-interface {p1, p2}, Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;->onFeedAdLoad(Ljava/util/List;)V

    :cond_0
    return-void
.end method
