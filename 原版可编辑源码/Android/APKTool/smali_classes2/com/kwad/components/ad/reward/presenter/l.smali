.class public final Lcom/kwad/components/ad/reward/presenter/l;
.super Lcom/kwad/components/ad/reward/presenter/a;


# instance fields
.field private gz:J

.field private mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

.field private final mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

.field private sr:Lcom/kwad/components/core/video/l;

.field private ss:Lcom/kwad/components/core/video/l;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/l$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/l$1;-><init>(Lcom/kwad/components/ad/reward/presenter/l;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/l;->ss:Lcom/kwad/components/core/video/l;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/l$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/l$2;-><init>(Lcom/kwad/components/ad/reward/presenter/l;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/l;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/l;J)J
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/reward/presenter/l;->gz:J

    return-wide p1
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/l;)Lcom/kwad/components/ad/reward/e/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/l;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/l;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/l;->gz:J

    return-wide v0
.end method


# virtual methods
.method public final ah()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/l;->qx:Lcom/kwad/components/ad/reward/j;

    const-wide/16 v1, 0x0

    iput-wide v1, v0, Lcom/kwad/components/ad/reward/j;->pF:J

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/l;->qx:Lcom/kwad/components/ad/reward/j;

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/kwad/components/ad/reward/j;->pG:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/l;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/l;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/l;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->jR()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/l;->ss:Lcom/kwad/components/core/video/l;

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/l;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    :goto_0
    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/l;->sr:Lcom/kwad/components/core/video/l;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/l;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/l;->sr:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->a(Lcom/kwad/components/core/video/l;)V

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/l;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/l;->sr:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->b(Lcom/kwad/components/core/video/l;)V

    return-void
.end method
