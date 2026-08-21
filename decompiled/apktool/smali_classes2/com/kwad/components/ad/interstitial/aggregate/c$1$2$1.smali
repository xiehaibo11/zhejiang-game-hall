.class final Lcom/kwad/components/ad/interstitial/aggregate/c$1$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/aggregate/c$1$2;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic bW:Ljava/util/List;

.field final synthetic if:Lcom/kwad/components/ad/interstitial/aggregate/c$1$2;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/aggregate/c$1$2;Ljava/util/List;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/c$1$2$1;->if:Lcom/kwad/components/ad/interstitial/aggregate/c$1$2;

    iput-object p2, p0, Lcom/kwad/components/ad/interstitial/aggregate/c$1$2$1;->bW:Ljava/util/List;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/c$1$2$1;->if:Lcom/kwad/components/ad/interstitial/aggregate/c$1$2;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/aggregate/c$1$2;->ic:Lcom/kwad/components/ad/interstitial/aggregate/c$1;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/aggregate/c$1;->ia:Lcom/kwad/components/ad/interstitial/aggregate/c$b;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/aggregate/c$1$2$1;->bW:Ljava/util/List;

    invoke-interface {v0, v1}, Lcom/kwad/components/ad/interstitial/aggregate/c$b;->onInterstitialAdLoad(Ljava/util/List;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/c$1$2$1;->if:Lcom/kwad/components/ad/interstitial/aggregate/c$1$2;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/aggregate/c$1$2;->ic:Lcom/kwad/components/ad/interstitial/aggregate/c$1;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/aggregate/c$1;->ib:Lcom/kwad/components/ad/interstitial/aggregate/c;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/aggregate/c$1$2$1;->if:Lcom/kwad/components/ad/interstitial/aggregate/c$1$2;

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/aggregate/c$1$2;->ie:Lcom/kwad/components/core/response/model/AdResultData;

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/aggregate/c$1$2$1;->if:Lcom/kwad/components/ad/interstitial/aggregate/c$1$2;

    iget-object v2, v2, Lcom/kwad/components/ad/interstitial/aggregate/c$1$2;->ic:Lcom/kwad/components/ad/interstitial/aggregate/c$1;

    iget-wide v2, v2, Lcom/kwad/components/ad/interstitial/aggregate/c$1;->hD:J

    invoke-static {v0, v1, v2, v3}, Lcom/kwad/components/ad/interstitial/aggregate/c;->a(Lcom/kwad/components/ad/interstitial/aggregate/c;Lcom/kwad/components/core/response/model/AdResultData;J)V

    return-void
.end method
