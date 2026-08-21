.class final Lcom/kwad/components/ad/feed/b/m$5$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/e/d/a$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/feed/b/m$5;->b(D)Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic fK:D

.field final synthetic fL:Lcom/kwad/components/ad/feed/b/m$5;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/feed/b/m$5;D)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/m$5$1;->fL:Lcom/kwad/components/ad/feed/b/m$5;

    iput-wide p2, p0, Lcom/kwad/components/ad/feed/b/m$5$1;->fK:D

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClicked()V
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "convertEnable End"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/m$5$1;->fL:Lcom/kwad/components/ad/feed/b/m$5;

    iget-object v1, v1, Lcom/kwad/components/ad/feed/b/m$5;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v1}, Lcom/kwad/components/ad/feed/b/m;->P(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cq(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "FeedWebView"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v0, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/j;-><init>()V

    iget-wide v1, p0, Lcom/kwad/components/ad/feed/b/m$5$1;->fK:D

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/core/report/j;->i(D)Lcom/kwad/sdk/core/report/j;

    const/16 v1, 0x9d

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->cg(I)Lcom/kwad/sdk/core/report/j;

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/m$5$1;->fL:Lcom/kwad/components/ad/feed/b/m$5;

    iget-object v1, v1, Lcom/kwad/components/ad/feed/b/m$5;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v1, v0}, Lcom/kwad/components/ad/feed/b/m;->a(Lcom/kwad/components/ad/feed/b/m;Lcom/kwad/sdk/core/report/j;)V

    return-void
.end method
