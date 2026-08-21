.class final Lcom/kwad/components/ad/f/b/a$1;
.super Lcom/kwad/components/core/video/l;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/f/b/a;->ah()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic nc:Lcom/kwad/components/ad/f/b/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/f/b/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/b/a$1;->nc:Lcom/kwad/components/ad/f/b/a;

    invoke-direct {p0}, Lcom/kwad/components/core/video/l;-><init>()V

    return-void
.end method


# virtual methods
.method public final onMediaPlayStart()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/video/l;->onMediaPlayStart()V

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/a$1;->nc:Lcom/kwad/components/ad/f/b/a;

    invoke-static {v0}, Lcom/kwad/components/ad/f/b/a;->a(Lcom/kwad/components/ad/f/b/a;)V

    return-void
.end method

.method public final onMediaPlaying()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/video/l;->onMediaPlaying()V

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/a$1;->nc:Lcom/kwad/components/ad/f/b/a;

    invoke-static {v0}, Lcom/kwad/components/ad/f/b/a;->a(Lcom/kwad/components/ad/f/b/a;)V

    return-void
.end method
