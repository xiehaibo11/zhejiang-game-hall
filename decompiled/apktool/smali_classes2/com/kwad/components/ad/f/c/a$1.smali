.class final Lcom/kwad/components/ad/f/c/a$1;
.super Lcom/kwad/components/core/video/l;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/f/c/a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/widget/a/b;Lcom/kwad/components/core/video/DetailVideoView;Lcom/kwad/sdk/api/KsAdVideoPlayConfig;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic es:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field final synthetic nz:Lcom/kwad/components/ad/f/c/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/f/c/a;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/c/a$1;->nz:Lcom/kwad/components/ad/f/c/a;

    iput-object p2, p0, Lcom/kwad/components/ad/f/c/a$1;->es:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {p0}, Lcom/kwad/components/core/video/l;-><init>()V

    return-void
.end method


# virtual methods
.method public final onMediaPlayError(II)V
    .locals 2

    invoke-super {p0, p1, p2}, Lcom/kwad/components/core/video/l;->onMediaPlayError(II)V

    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/c/a$1;->es:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1, p1, p2}, Lcom/kwad/components/core/o/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;II)V

    return-void
.end method
