.class final Lcom/kwad/components/ad/interstitial/d/f$6;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/interstitial/d/c$c;


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

.field final synthetic kO:Lcom/kwad/components/ad/interstitial/f/f;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/f;Lcom/kwad/components/ad/interstitial/f/f;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/f$6;->kM:Lcom/kwad/components/ad/interstitial/d/f;

    iput-object p2, p0, Lcom/kwad/components/ad/interstitial/d/f$6;->kO:Lcom/kwad/components/ad/interstitial/f/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final da()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f$6;->kO:Lcom/kwad/components/ad/interstitial/f/f;

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/f/f;->ez()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f$6;->kM:Lcom/kwad/components/ad/interstitial/d/f;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/f;->c(Lcom/kwad/components/ad/interstitial/d/f;)Lcom/kwad/sdk/core/video/videoview/a;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/video/videoview/a;->setVisibility(I)V

    return-void
.end method
