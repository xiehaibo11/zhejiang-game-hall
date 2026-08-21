.class final Lcom/kwad/components/ad/reward/presenter/h/a$3;
.super Lcom/kwad/components/core/video/l;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/presenter/h/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic xq:Lcom/kwad/components/ad/reward/presenter/h/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/h/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/h/a$3;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-direct {p0}, Lcom/kwad/components/core/video/l;-><init>()V

    return-void
.end method


# virtual methods
.method public final onMediaPlayProgress(JJ)V
    .locals 4

    invoke-super {p0, p1, p2, p3, p4}, Lcom/kwad/components/core/video/l;->onMediaPlayProgress(JJ)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a$3;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/h/a;->c(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {p1, p2, v0}, Lcom/kwad/components/ad/reward/j;->a(JLcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide p1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a$3;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/h/a;->c(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aE(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    int-to-long v0, v0

    const-wide/16 v2, 0x3e8

    mul-long/2addr v0, v2

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/h/a$3;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-static {v2}, Lcom/kwad/components/ad/reward/presenter/h/a;->e(Lcom/kwad/components/ad/reward/presenter/h/a;)J

    move-result-wide v2

    cmp-long v2, p3, v2

    if-lez v2, :cond_3

    sub-long/2addr p1, p3

    cmp-long p1, p1, v0

    if-lez p1, :cond_3

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/h/a$3;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/h/a;->f(Lcom/kwad/components/ad/reward/presenter/h/a;)Z

    move-result p1

    if-eqz p1, :cond_0

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/h/a$3;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/h/a;->c(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->aF(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result p1

    const/4 p2, 0x1

    if-ne p1, p2, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/h/a$3;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/h/a;->c(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->aq(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p1

    iget-object p3, p0, Lcom/kwad/components/ad/reward/presenter/h/a$3;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-static {p3}, Lcom/kwad/components/ad/reward/presenter/h/a;->g(Lcom/kwad/components/ad/reward/presenter/h/a;)Landroid/content/Context;

    move-result-object p3

    invoke-static {p3, p1}, Lcom/kwad/sdk/utils/ak;->ak(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_2

    return-void

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/h/a$3;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/h/a;->h(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object p1

    iget-boolean p1, p1, Lcom/kwad/components/ad/reward/j;->fz:Z

    if-eqz p1, :cond_2

    return-void

    :cond_2
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/h/a$3;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-static {p1, p2}, Lcom/kwad/components/ad/reward/presenter/h/a;->b(Lcom/kwad/components/ad/reward/presenter/h/a;Z)Z

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/h/a$3;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/h/a;->k(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/components/ad/reward/j/a/d;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/ad/reward/presenter/h/a$3;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-static {p2}, Lcom/kwad/components/ad/reward/presenter/h/a;->i(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object p2

    invoke-virtual {p2}, Lcom/kwad/components/ad/reward/j;->getActivity()Landroid/app/Activity;

    move-result-object p2

    iget-object p3, p0, Lcom/kwad/components/ad/reward/presenter/h/a$3;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-static {p3}, Lcom/kwad/components/ad/reward/presenter/h/a;->j(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object p3

    iget-object p3, p3, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object p4, p0, Lcom/kwad/components/ad/reward/presenter/h/a$3;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-virtual {p1, p2, p3, p4}, Lcom/kwad/components/ad/reward/j/a/d;->a(Landroid/app/Activity;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/webview/b/i;)V

    :cond_3
    return-void
.end method
