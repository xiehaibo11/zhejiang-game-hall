.class final Lcom/kwad/components/ad/interstitial/d/e$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/interstitial/d/c$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/interstitial/d/e;
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

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e$1;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final ck()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e$1;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/e;->a(Lcom/kwad/components/ad/interstitial/d/e;)Lcom/kwad/sdk/widget/KSFrameLayout;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/widget/KSFrameLayout;->removeAllViews()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e$1;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/e;->b(Lcom/kwad/components/ad/interstitial/d/e;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e$1;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/e;->a(Lcom/kwad/components/ad/interstitial/d/e;)Lcom/kwad/sdk/widget/KSFrameLayout;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/KSFrameLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e$1;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/e;->d(Lcom/kwad/components/ad/interstitial/d/e;)Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/e$1;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {v1}, Lcom/kwad/components/ad/interstitial/d/e;->c(Lcom/kwad/components/ad/interstitial/d/e;)Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout$a;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout;->b(Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout$a;)V

    return-void
.end method
