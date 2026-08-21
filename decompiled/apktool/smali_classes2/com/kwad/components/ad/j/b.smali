.class public Lcom/kwad/components/ad/j/b;
.super Lcom/kwad/components/ad/j/a;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/components/ad/j/a<",
        "Lcom/kwad/components/core/video/k;",
        ">;"
    }
.end annotation


# instance fields
.field public GL:Lcom/kwad/components/core/video/b;

.field private GM:Z

.field private GN:Lcom/kwad/components/core/video/k;

.field protected mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/video/DetailVideoView;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/j/a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/kwad/components/ad/j/b;->GM:Z

    new-instance p1, Lcom/kwad/components/ad/j/b$1;

    invoke-direct {p1, p0}, Lcom/kwad/components/ad/j/b$1;-><init>(Lcom/kwad/components/ad/j/b;)V

    iput-object p1, p0, Lcom/kwad/components/ad/j/b;->GN:Lcom/kwad/components/core/video/k;

    iput-object p2, p0, Lcom/kwad/components/ad/j/b;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    new-instance p1, Lcom/kwad/components/core/video/b;

    iget-object p2, p0, Lcom/kwad/components/ad/j/b;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-direct {p1, p2}, Lcom/kwad/components/core/video/b;-><init>(Lcom/kwad/components/core/video/DetailVideoView;)V

    iput-object p1, p0, Lcom/kwad/components/ad/j/b;->GL:Lcom/kwad/components/core/video/b;

    invoke-direct {p0}, Lcom/kwad/components/ad/j/b;->lQ()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/j/b;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/j/b;->GM:Z

    return p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/j/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/j/b;->lS()V

    return-void
.end method

.method private lQ()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/j/b;->GL:Lcom/kwad/components/core/video/b;

    iget-object v1, p0, Lcom/kwad/components/ad/j/b;->GN:Lcom/kwad/components/core/video/k;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/video/b;->c(Lcom/kwad/components/core/video/k;)V

    return-void
.end method

.method private lR()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/j/b;->GL:Lcom/kwad/components/core/video/b;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/j/b;->GN:Lcom/kwad/components/core/video/k;

    if-eqz v1, :cond_0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/video/b;->d(Lcom/kwad/components/core/video/k;)V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/j/b;->GN:Lcom/kwad/components/core/video/k;

    :cond_0
    return-void
.end method

.method private lS()V
    .locals 3

    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/j/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/16 v2, 0x5210

    invoke-virtual {v0, v1, v2}, Lcom/kwad/components/core/o/a;->g(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/j/b;->GM:Z

    return-void
.end method


# virtual methods
.method public final synthetic a(Lcom/kwad/components/core/video/h;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/core/video/k;

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/j/b;->b(Lcom/kwad/components/core/video/k;)V

    return-void
.end method

.method public final a(Lcom/kwad/components/core/video/k;)V
    .locals 1

    if-eqz p1, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/j/b;->GL:Lcom/kwad/components/core/video/b;

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {v0, p1}, Lcom/kwad/components/core/video/b;->c(Lcom/kwad/components/core/video/k;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final synthetic b(Lcom/kwad/components/core/video/h;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/core/video/k;

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/j/b;->a(Lcom/kwad/components/core/video/k;)V

    return-void
.end method

.method public final b(Lcom/kwad/components/core/video/k;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/j/b;->GL:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/video/b;->d(Lcom/kwad/components/core/video/k;)V

    return-void
.end method

.method public getPlayDuration()J
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/j/b;->GL:Lcom/kwad/components/core/video/b;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->getPlayDuration()J

    move-result-wide v0

    return-wide v0

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public pause()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/j/b;->GL:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->pause()Z

    return-void
.end method

.method public release()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/j/a;->release()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/j/b;->GM:Z

    invoke-direct {p0}, Lcom/kwad/components/ad/j/b;->lR()V

    iget-object v0, p0, Lcom/kwad/components/ad/j/b;->GL:Lcom/kwad/components/core/video/b;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->clear()V

    iget-object v0, p0, Lcom/kwad/components/ad/j/b;->GL:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->release()V

    :cond_0
    return-void
.end method

.method public resume()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/j/b;->GL:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->resume()V

    return-void
.end method
