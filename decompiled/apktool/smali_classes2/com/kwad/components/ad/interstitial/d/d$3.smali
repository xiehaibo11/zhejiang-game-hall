.class final Lcom/kwad/components/ad/interstitial/d/d$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/g/a/a/b$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/d;->dh()Lcom/kwad/components/ad/g/a/a/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic kd:Lcom/kwad/components/ad/interstitial/d/d;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/d;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$3;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final C(I)V
    .locals 3

    sget v0, Lcom/kwad/components/ad/g/a/a/b;->nC:I

    if-ne p1, v0, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$3;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/d;->d(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$3;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->k(Lcom/kwad/components/ad/interstitial/d/d;)Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d$3;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v1}, Lcom/kwad/components/ad/interstitial/d/d;->i(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    invoke-virtual {p1, v0, v1}, Lcom/kwad/components/ad/interstitial/d/c;->b(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$3;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/d;->d(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object p1

    const/4 v0, 0x1

    const/4 v1, -0x1

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/d/d$3;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v2}, Lcom/kwad/components/ad/interstitial/d/d;->d(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v2

    iget-object v2, v2, Lcom/kwad/components/ad/interstitial/d/c;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-virtual {p1, v0, v1, v2}, Lcom/kwad/components/ad/interstitial/d/c;->a(ZILcom/kwad/sdk/core/video/videoview/a;)V

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$3;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/d;->l(Lcom/kwad/components/ad/interstitial/d/d;)V

    return-void
.end method
