.class final Lcom/kwad/components/ad/fullscreen/c/a$1;
.super Lcom/kwad/components/core/video/l;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/fullscreen/c/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic ge:Lcom/kwad/components/ad/fullscreen/c/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/fullscreen/c/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/a$1;->ge:Lcom/kwad/components/ad/fullscreen/c/a;

    invoke-direct {p0}, Lcom/kwad/components/core/video/l;-><init>()V

    return-void
.end method


# virtual methods
.method public final onMediaPlayCompleted()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/video/l;->onMediaPlayCompleted()V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a$1;->ge:Lcom/kwad/components/ad/fullscreen/c/a;

    invoke-static {v0}, Lcom/kwad/components/ad/fullscreen/c/a;->a(Lcom/kwad/components/ad/fullscreen/c/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j;->fR()V

    return-void
.end method
