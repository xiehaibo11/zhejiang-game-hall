.class final Lcom/kwad/components/ad/reward/presenter/k$1;
.super Lcom/kwad/components/core/video/l;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/presenter/k;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic sq:Lcom/kwad/components/ad/reward/presenter/k;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/k;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/k$1;->sq:Lcom/kwad/components/ad/reward/presenter/k;

    invoke-direct {p0}, Lcom/kwad/components/core/video/l;-><init>()V

    return-void
.end method


# virtual methods
.method public final onMediaPlayProgress(JJ)V
    .locals 0

    invoke-super {p0, p1, p2, p3, p4}, Lcom/kwad/components/core/video/l;->onMediaPlayProgress(JJ)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/k$1;->sq:Lcom/kwad/components/ad/reward/presenter/k;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/k;->a(Lcom/kwad/components/ad/reward/presenter/k;)V

    return-void
.end method
