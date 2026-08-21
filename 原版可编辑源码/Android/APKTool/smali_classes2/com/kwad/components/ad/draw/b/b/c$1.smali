.class final Lcom/kwad/components/ad/draw/b/b/c$1;
.super Lcom/kwad/components/core/video/l;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/draw/b/b/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic cN:Lcom/kwad/components/ad/draw/b/b/c;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/draw/b/b/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/draw/b/b/c$1;->cN:Lcom/kwad/components/ad/draw/b/b/c;

    invoke-direct {p0}, Lcom/kwad/components/core/video/l;-><init>()V

    return-void
.end method


# virtual methods
.method public final onMediaPlayCompleted()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/video/l;->onMediaPlayCompleted()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c$1;->cN:Lcom/kwad/components/ad/draw/b/b/c;

    invoke-static {v0}, Lcom/kwad/components/ad/draw/b/b/c;->a(Lcom/kwad/components/ad/draw/b/b/c;)V

    return-void
.end method
