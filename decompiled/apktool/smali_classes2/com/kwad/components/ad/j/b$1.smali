.class final Lcom/kwad/components/ad/j/b$1;
.super Lcom/kwad/components/core/video/l;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/j/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic GO:Lcom/kwad/components/ad/j/b;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/j/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/j/b$1;->GO:Lcom/kwad/components/ad/j/b;

    invoke-direct {p0}, Lcom/kwad/components/core/video/l;-><init>()V

    return-void
.end method


# virtual methods
.method public final onMediaPlayCompleted()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/j/b$1;->GO:Lcom/kwad/components/ad/j/b;

    iget-object v0, v0, Lcom/kwad/components/ad/j/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-wide/16 v1, -0x1

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/core/response/model/AdTemplate;->setmCurPlayTime(J)V

    return-void
.end method

.method public final onMediaPlayError(II)V
    .locals 0

    invoke-super {p0, p1, p2}, Lcom/kwad/components/core/video/l;->onMediaPlayError(II)V

    iget-object p1, p0, Lcom/kwad/components/ad/j/b$1;->GO:Lcom/kwad/components/ad/j/b;

    invoke-static {p1}, Lcom/kwad/components/ad/j/b;->a(Lcom/kwad/components/ad/j/b;)Z

    move-result p1

    if-eqz p1, :cond_1

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zS()Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/j/b$1;->GO:Lcom/kwad/components/ad/j/b;

    invoke-static {p1}, Lcom/kwad/components/ad/j/b;->b(Lcom/kwad/components/ad/j/b;)V

    :cond_0
    return-void

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/ad/j/b$1;->GO:Lcom/kwad/components/ad/j/b;

    invoke-static {p1}, Lcom/kwad/components/ad/j/b;->b(Lcom/kwad/components/ad/j/b;)V

    return-void
.end method

.method public final onMediaPlayProgress(JJ)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/ad/j/b$1;->GO:Lcom/kwad/components/ad/j/b;

    iget-object p1, p1, Lcom/kwad/components/ad/j/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p1, p3, p4}, Lcom/kwad/sdk/core/response/model/AdTemplate;->setmCurPlayTime(J)V

    return-void
.end method
