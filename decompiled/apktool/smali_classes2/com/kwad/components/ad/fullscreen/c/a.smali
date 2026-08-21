.class public final Lcom/kwad/components/ad/fullscreen/c/a;
.super Lcom/kwad/components/ad/reward/presenter/a;


# instance fields
.field private final gd:Lcom/kwad/components/ad/reward/e/k;

.field private mVideoPlayStateListener:Lcom/kwad/components/core/video/l;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/fullscreen/c/a$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/fullscreen/c/a$1;-><init>(Lcom/kwad/components/ad/fullscreen/c/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    new-instance v0, Lcom/kwad/components/ad/fullscreen/c/a$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/fullscreen/c/a$2;-><init>(Lcom/kwad/components/ad/fullscreen/c/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a;->gd:Lcom/kwad/components/ad/reward/e/k;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/fullscreen/c/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/fullscreen/c/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/fullscreen/c/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/a;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->a(Lcom/kwad/components/core/video/l;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/d;->fw()Lcom/kwad/components/ad/reward/d;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/a;->gd:Lcom/kwad/components/ad/reward/e/k;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/d;->a(Lcom/kwad/components/ad/reward/e/k;)V

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/a;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->b(Lcom/kwad/components/core/video/l;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/d;->fw()Lcom/kwad/components/ad/reward/d;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/a;->gd:Lcom/kwad/components/ad/reward/e/k;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/d;->b(Lcom/kwad/components/ad/reward/e/k;)V

    return-void
.end method
