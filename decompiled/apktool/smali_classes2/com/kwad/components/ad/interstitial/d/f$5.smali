.class final Lcom/kwad/components/ad/interstitial/d/f$5;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/video/a$c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/f;->dG()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic kM:Lcom/kwad/components/ad/interstitial/d/f;

.field final synthetic kN:I

.field final synthetic kO:Lcom/kwad/components/ad/interstitial/f/f;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/f;ILcom/kwad/components/ad/interstitial/f/f;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/f$5;->kM:Lcom/kwad/components/ad/interstitial/d/f;

    iput p2, p0, Lcom/kwad/components/ad/interstitial/d/f$5;->kN:I

    iput-object p3, p0, Lcom/kwad/components/ad/interstitial/d/f$5;->kO:Lcom/kwad/components/ad/interstitial/f/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final bj()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f$5;->kO:Lcom/kwad/components/ad/interstitial/f/f;

    const/4 v1, 0x0

    invoke-virtual {v0, v1, v1}, Lcom/kwad/components/ad/interstitial/f/f;->b(ZZ)V

    return-void
.end method

.method public final bk()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f$5;->kM:Lcom/kwad/components/ad/interstitial/d/f;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/f;->c(Lcom/kwad/components/ad/interstitial/d/f;)Lcom/kwad/sdk/core/video/videoview/a;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/video/videoview/a;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f$5;->kM:Lcom/kwad/components/ad/interstitial/d/f;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/f;->b(Lcom/kwad/components/ad/interstitial/d/f;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f$5;->kM:Lcom/kwad/components/ad/interstitial/d/f;

    invoke-static {v1}, Lcom/kwad/components/ad/interstitial/d/f;->f(Lcom/kwad/components/ad/interstitial/d/f;)Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/d/c;->M(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f$5;->kO:Lcom/kwad/components/ad/interstitial/f/f;

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/f/f;->ey()V

    :cond_0
    return-void
.end method

.method public final d(J)V
    .locals 3

    iget v0, p0, Lcom/kwad/components/ad/interstitial/d/f$5;->kN:I

    const-wide/16 v1, 0x3e8

    div-long/2addr p1, v1

    long-to-int p1, p1

    sub-int/2addr v0, p1

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/f$5;->kO:Lcom/kwad/components/ad/interstitial/f/f;

    if-ltz v0, :cond_0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/interstitial/f/f;->y(Ljava/lang/String;)V

    return-void

    :cond_0
    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/f/f;->ew()V

    return-void
.end method

.method public final onVideoPlayStart()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f$5;->kO:Lcom/kwad/components/ad/interstitial/f/f;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/f/f;->t(Z)V

    return-void
.end method
