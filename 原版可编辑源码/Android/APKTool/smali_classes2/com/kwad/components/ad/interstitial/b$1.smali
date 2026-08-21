.class final Lcom/kwad/components/ad/interstitial/b$1;
.super Lcom/kwad/components/ad/interstitial/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/b;->setAdInteractionListener(Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic ht:Lcom/kwad/components/ad/interstitial/b;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/b$1;->ht:Lcom/kwad/components/ad/interstitial/b;

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/c;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdShow()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/c;->onAdShow()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/b$1;->ht:Lcom/kwad/components/ad/interstitial/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/b;->a(Lcom/kwad/components/ad/interstitial/b;)Lcom/kwad/components/core/internal/api/c;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/b$1;->ht:Lcom/kwad/components/ad/interstitial/b;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/internal/api/c;->h(Lcom/kwad/components/core/internal/api/a;)V

    return-void
.end method

.method public final onPageDismiss()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/c;->onPageDismiss()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/b$1;->ht:Lcom/kwad/components/ad/interstitial/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/b;->a(Lcom/kwad/components/ad/interstitial/b;)Lcom/kwad/components/core/internal/api/c;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/b$1;->ht:Lcom/kwad/components/ad/interstitial/b;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/internal/api/c;->i(Lcom/kwad/components/core/internal/api/a;)V

    return-void
.end method
