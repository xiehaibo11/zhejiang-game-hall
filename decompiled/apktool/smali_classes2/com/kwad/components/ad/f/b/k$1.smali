.class final Lcom/kwad/components/ad/f/b/k$1;
.super Lcom/kwad/components/core/video/l;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/f/b/k;->ah()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic nv:Lcom/kwad/components/ad/f/b/k;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/f/b/k;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/b/k$1;->nv:Lcom/kwad/components/ad/f/b/k;

    invoke-direct {p0}, Lcom/kwad/components/core/video/l;-><init>()V

    return-void
.end method


# virtual methods
.method public final onMediaPlayCompleted()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/k$1;->nv:Lcom/kwad/components/ad/f/b/k;

    invoke-static {v0}, Lcom/kwad/components/ad/f/b/k;->a(Lcom/kwad/components/ad/f/b/k;)V

    return-void
.end method

.method public final onMediaPlayError(II)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/ad/f/b/k$1;->nv:Lcom/kwad/components/ad/f/b/k;

    invoke-static {p1}, Lcom/kwad/components/ad/f/b/k;->a(Lcom/kwad/components/ad/f/b/k;)V

    return-void
.end method

.method public final onMediaPlayProgress(JJ)V
    .locals 2

    const-wide/16 v0, 0x0

    cmp-long v0, p1, v0

    if-eqz v0, :cond_0

    const/high16 v0, 0x42c80000    # 100.0f

    long-to-float p3, p3

    mul-float/2addr p3, v0

    long-to-float p1, p1

    div-float/2addr p3, p1

    float-to-int p1, p3

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    iget-object p2, p0, Lcom/kwad/components/ad/f/b/k$1;->nv:Lcom/kwad/components/ad/f/b/k;

    invoke-static {p2, p1}, Lcom/kwad/components/ad/f/b/k;->a(Lcom/kwad/components/ad/f/b/k;I)V

    return-void
.end method
