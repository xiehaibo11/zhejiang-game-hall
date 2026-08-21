.class final Lcom/kwad/components/ad/interstitial/d/i$6;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/page/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/interstitial/d/i;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic kY:Lcom/kwad/components/ad/interstitial/d/i;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/i;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/i$6;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final dE()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/i$6;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/i;->a(Lcom/kwad/components/ad/interstitial/d/i;)Lcom/kwad/sdk/widget/KSFrameLayout;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/i$6;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/i;->mContext:Landroid/content/Context;

    invoke-static {v1}, Lcom/kwad/sdk/d/a/a;->aG(Landroid/content/Context;)I

    move-result v1

    int-to-float v1, v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/KSFrameLayout;->setTranslationY(F)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/i$6;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/i;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/d/c;->cS()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/i$6;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/i;->d(Lcom/kwad/components/ad/interstitial/d/i;)Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/i$6;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-static {v1}, Lcom/kwad/components/ad/interstitial/d/i;->c(Lcom/kwad/components/ad/interstitial/d/i;)Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout$a;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->b(Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout$a;)V

    return-void
.end method

.method public final dF()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/i$6;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/i;->a(Lcom/kwad/components/ad/interstitial/d/i;)Lcom/kwad/sdk/widget/KSFrameLayout;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/i$6;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/i;->mContext:Landroid/content/Context;

    invoke-static {v1}, Lcom/kwad/sdk/d/a/a;->aG(Landroid/content/Context;)I

    move-result v1

    int-to-float v1, v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/KSFrameLayout;->setTranslationY(F)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/i$6;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/i;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/d/c;->cS()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/i$6;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/i;->d(Lcom/kwad/components/ad/interstitial/d/i;)Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/i$6;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-static {v1}, Lcom/kwad/components/ad/interstitial/d/i;->c(Lcom/kwad/components/ad/interstitial/d/i;)Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout$a;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->b(Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout$a;)V

    return-void
.end method
