.class final Lcom/kwad/components/ad/reward/l/c$2;
.super Lcom/kwad/components/core/video/l;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/l/c;->jN()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic yh:Lcom/kwad/components/ad/reward/l/c;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/l/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/l/c$2;->yh:Lcom/kwad/components/ad/reward/l/c;

    invoke-direct {p0}, Lcom/kwad/components/core/video/l;-><init>()V

    return-void
.end method


# virtual methods
.method public final onMediaPlayError(II)V
    .locals 2

    invoke-super {p0, p1, p2}, Lcom/kwad/components/core/video/l;->onMediaPlayError(II)V

    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/l/c$2;->yh:Lcom/kwad/components/ad/reward/l/c;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/l/c;->d(Lcom/kwad/components/ad/reward/l/c;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    invoke-virtual {v0, v1, p1, p2}, Lcom/kwad/components/core/o/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;II)V

    return-void
.end method
