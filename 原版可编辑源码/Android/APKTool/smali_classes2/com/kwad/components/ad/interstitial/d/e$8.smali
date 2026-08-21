.class final Lcom/kwad/components/ad/interstitial/d/e$8;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/e;->a(Landroid/os/Message;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic kG:Lcom/kwad/components/ad/interstitial/d/e;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/e;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e$8;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e$8;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/e;->g(Lcom/kwad/components/ad/interstitial/d/e;)Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e$8;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/e;->k(Lcom/kwad/components/ad/interstitial/d/e;)Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    return-void
.end method
