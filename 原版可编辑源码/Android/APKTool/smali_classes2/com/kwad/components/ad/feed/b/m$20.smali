.class final Lcom/kwad/components/ad/feed/b/m$20;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/widget/b$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/feed/b/m;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic fI:Lcom/kwad/components/ad/feed/b/m;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/feed/b/m;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/m$20;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClicked()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$20;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->e(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/components/core/widget/b$a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$20;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->f(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/components/core/widget/b$a;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/components/core/widget/b$a;->onAdClicked()V

    :cond_0
    return-void
.end method

.method public final onAdShow()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$20;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->g(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/components/core/widget/b$a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$20;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->h(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/components/core/widget/b$a;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/components/core/widget/b$a;->onAdShow()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$20;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->i(Lcom/kwad/components/ad/feed/b/m;)Z

    move-result v0

    if-eqz v0, :cond_2

    new-instance v0, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/j;-><init>()V

    new-instance v1, Lcom/kwad/sdk/core/report/z$a;

    invoke-direct {v1}, Lcom/kwad/sdk/core/report/z$a;-><init>()V

    iget-object v2, p0, Lcom/kwad/components/ad/feed/b/m$20;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v2}, Lcom/kwad/components/ad/feed/b/m;->j(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v2

    iget v2, v2, Lcom/kwad/sdk/core/response/model/AdTemplate;->type:I

    invoke-static {v2}, Lcom/kwad/components/model/FeedType;->fromInt(I)Lcom/kwad/components/model/FeedType;

    move-result-object v2

    sget-object v3, Lcom/kwad/components/model/FeedType;->FEED_TYPE_TEXT_NEW:Lcom/kwad/components/model/FeedType;

    if-ne v2, v3, :cond_1

    sget-object v2, Lcom/kwad/components/model/FeedType;->FEED_TYPE_TEXT_BELOW:Lcom/kwad/components/model/FeedType;

    :cond_1
    invoke-virtual {v2}, Lcom/kwad/components/model/FeedType;->getType()I

    move-result v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/kwad/sdk/core/report/z$a;->templateId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->a(Lcom/kwad/sdk/core/report/z$a;)Lcom/kwad/sdk/core/report/j;

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/m$20;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v1}, Lcom/kwad/components/ad/feed/b/m;->k(Lcom/kwad/components/ad/feed/b/m;)D

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v1

    double-to-int v1, v1

    iget-object v2, p0, Lcom/kwad/components/ad/feed/b/m$20;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v2}, Lcom/kwad/components/ad/feed/b/m;->l(Lcom/kwad/components/ad/feed/b/m;)I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/core/report/j;->t(II)Lcom/kwad/sdk/core/report/j;

    invoke-static {}, Lcom/kwad/components/core/t/b;->qj()Lcom/kwad/components/core/t/b;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/feed/b/m$20;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v2}, Lcom/kwad/components/ad/feed/b/m;->m(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v2

    const/4 v3, 0x0

    invoke-virtual {v1, v2, v3, v0}, Lcom/kwad/components/core/t/b;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;Lcom/kwad/sdk/core/report/j;)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$20;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->n(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/kwad/components/ad/feed/monitor/b;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    :cond_2
    return-void
.end method

.method public final onDislikeClicked()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$20;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->o(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/components/core/widget/b$a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$20;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->p(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/components/core/widget/b$a;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/components/core/widget/b$a;->onDislikeClicked()V

    :cond_0
    return-void
.end method

.method public final onDownloadTipsDialogDismiss()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$20;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->s(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/components/core/widget/b$a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$20;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->t(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/components/core/widget/b$a;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/components/core/widget/b$a;->onDownloadTipsDialogDismiss()V

    :cond_0
    return-void
.end method

.method public final onDownloadTipsDialogShow()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$20;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->q(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/components/core/widget/b$a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$20;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->r(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/components/core/widget/b$a;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/components/core/widget/b$a;->onDownloadTipsDialogShow()V

    :cond_0
    return-void
.end method
