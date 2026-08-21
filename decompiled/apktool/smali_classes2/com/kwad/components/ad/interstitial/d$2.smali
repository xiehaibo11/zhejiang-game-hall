.class final Lcom/kwad/components/ad/interstitial/d$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/h/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d;->cj()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic hB:Lcom/kwad/components/ad/interstitial/d;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d$2;->hB:Lcom/kwad/components/ad/interstitial/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final aK()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d$2;->hB:Lcom/kwad/components/ad/interstitial/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/d;->getTimerHelper()Lcom/kwad/sdk/utils/bi;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/utils/bi;->Kb()V

    return-void
.end method

.method public final aL()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d$2;->hB:Lcom/kwad/components/ad/interstitial/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/d;->getTimerHelper()Lcom/kwad/sdk/utils/bi;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/utils/bi;->Kc()V

    return-void
.end method
