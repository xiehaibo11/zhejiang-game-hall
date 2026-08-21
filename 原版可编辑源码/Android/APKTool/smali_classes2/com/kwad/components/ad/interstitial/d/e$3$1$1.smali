.class final Lcom/kwad/components/ad/interstitial/d/e$3$1$1;
.super Landroid/animation/AnimatorListenerAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/e$3$1;->onAnimationEnd(Landroid/animation/Animator;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic kI:Lcom/kwad/components/ad/interstitial/d/e$3$1;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/e$3$1;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e$3$1$1;->kI:Lcom/kwad/components/ad/interstitial/d/e$3$1;

    invoke-direct {p0}, Landroid/animation/AnimatorListenerAdapter;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationCancel(Landroid/animation/Animator;)V
    .locals 1

    invoke-super {p0, p1}, Landroid/animation/AnimatorListenerAdapter;->onAnimationCancel(Landroid/animation/Animator;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e$3$1$1;->kI:Lcom/kwad/components/ad/interstitial/d/e$3$1;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/e$3$1;->kH:Lcom/kwad/components/ad/interstitial/d/e$3;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/e$3;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/e;->a(Lcom/kwad/components/ad/interstitial/d/e;)Lcom/kwad/sdk/widget/KSFrameLayout;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e$3$1$1;->kI:Lcom/kwad/components/ad/interstitial/d/e$3$1;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/e$3$1;->kH:Lcom/kwad/components/ad/interstitial/d/e$3;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/e$3;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/e;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/d/a/a;->getScreenWidth(Landroid/content/Context;)I

    move-result v0

    int-to-float v0, v0

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/widget/KSFrameLayout;->setTranslationX(F)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e$3$1$1;->kI:Lcom/kwad/components/ad/interstitial/d/e$3$1;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/e$3$1;->kH:Lcom/kwad/components/ad/interstitial/d/e$3;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/e$3;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/e;->g(Lcom/kwad/components/ad/interstitial/d/e;)Landroid/view/View;

    move-result-object p1

    const/high16 v0, 0x3f800000    # 1.0f

    invoke-virtual {p1, v0}, Landroid/view/View;->setAlpha(F)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e$3$1$1;->kI:Lcom/kwad/components/ad/interstitial/d/e$3$1;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/e$3$1;->kH:Lcom/kwad/components/ad/interstitial/d/e$3;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/e$3;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/e;->h(Lcom/kwad/components/ad/interstitial/d/e;)Landroid/view/View;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/view/View;->setAlpha(F)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e$3$1$1;->kI:Lcom/kwad/components/ad/interstitial/d/e$3$1;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/e$3$1;->kH:Lcom/kwad/components/ad/interstitial/d/e$3;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/e$3;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/e;->i(Lcom/kwad/components/ad/interstitial/d/e;)Landroid/view/View;

    move-result-object p1

    const/16 v0, 0x8

    invoke-virtual {p1, v0}, Landroid/view/View;->setVisibility(I)V

    return-void
.end method

.method public final onAnimationStart(Landroid/animation/Animator;)V
    .locals 0

    invoke-super {p0, p1}, Landroid/animation/AnimatorListenerAdapter;->onAnimationStart(Landroid/animation/Animator;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e$3$1$1;->kI:Lcom/kwad/components/ad/interstitial/d/e$3$1;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/e$3$1;->kH:Lcom/kwad/components/ad/interstitial/d/e$3;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/e$3;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/e;->j(Lcom/kwad/components/ad/interstitial/d/e;)V

    return-void
.end method
