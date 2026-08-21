.class final Lcom/kwad/components/core/page/splitLandingPage/a$5;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/page/splitLandingPage/a;->initView()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Or:Lcom/kwad/components/core/page/splitLandingPage/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/page/splitLandingPage/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/splitLandingPage/a$5;->Or:Lcom/kwad/components/core/page/splitLandingPage/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final d(F)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/page/splitLandingPage/a$5;->Or:Lcom/kwad/components/core/page/splitLandingPage/a;

    invoke-static {v0}, Lcom/kwad/components/core/page/splitLandingPage/a;->e(Lcom/kwad/components/core/page/splitLandingPage/a;)Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/page/splitLandingPage/a$5;->Or:Lcom/kwad/components/core/page/splitLandingPage/a;

    invoke-static {v1}, Lcom/kwad/components/core/page/splitLandingPage/a;->e(Lcom/kwad/components/core/page/splitLandingPage/a;)Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->getTranslationY()F

    move-result v1

    sub-float/2addr v1, p1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->setTranslationY(F)V

    return-void
.end method

.method public final pq()Z
    .locals 7

    iget-object v0, p0, Lcom/kwad/components/core/page/splitLandingPage/a$5;->Or:Lcom/kwad/components/core/page/splitLandingPage/a;

    invoke-static {v0}, Lcom/kwad/components/core/page/splitLandingPage/a;->f(Lcom/kwad/components/core/page/splitLandingPage/a;)Lcom/kwad/components/core/page/splitLandingPage/view/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/page/splitLandingPage/view/a;->pr()Z

    move-result v0

    const/4 v1, 0x2

    const/4 v2, 0x0

    if-nez v0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->yY()I

    move-result v0

    if-ne v0, v1, :cond_0

    return v2

    :cond_0
    new-instance v0, Landroid/animation/AnimatorSet;

    invoke-direct {v0}, Landroid/animation/AnimatorSet;-><init>()V

    iget-object v3, p0, Lcom/kwad/components/core/page/splitLandingPage/a$5;->Or:Lcom/kwad/components/core/page/splitLandingPage/a;

    invoke-static {v3}, Lcom/kwad/components/core/page/splitLandingPage/a;->e(Lcom/kwad/components/core/page/splitLandingPage/a;)Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;

    move-result-object v3

    const/4 v4, 0x0

    iget-object v5, p0, Lcom/kwad/components/core/page/splitLandingPage/a$5;->Or:Lcom/kwad/components/core/page/splitLandingPage/a;

    invoke-static {v5}, Lcom/kwad/components/core/page/splitLandingPage/a;->e(Lcom/kwad/components/core/page/splitLandingPage/a;)Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;

    move-result-object v5

    invoke-virtual {v5}, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->getTranslationY()F

    move-result v5

    const/4 v6, 0x0

    invoke-static {v3, v4, v5, v6}, Lcom/kwad/components/core/t/m;->a(Landroid/view/View;Landroid/view/animation/Interpolator;FF)Landroid/animation/Animator;

    move-result-object v3

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->yY()I

    move-result v4

    const/4 v5, 0x1

    if-ne v4, v1, :cond_2

    iget-object v4, p0, Lcom/kwad/components/core/page/splitLandingPage/a$5;->Or:Lcom/kwad/components/core/page/splitLandingPage/a;

    invoke-static {v4}, Lcom/kwad/components/core/page/splitLandingPage/a;->c(Lcom/kwad/components/core/page/splitLandingPage/a;)Lcom/kwad/components/core/widget/FeedVideoView;

    move-result-object v4

    invoke-virtual {v4}, Lcom/kwad/components/core/widget/FeedVideoView;->isComplete()Z

    move-result v4

    if-nez v4, :cond_1

    iget-object v4, p0, Lcom/kwad/components/core/page/splitLandingPage/a$5;->Or:Lcom/kwad/components/core/page/splitLandingPage/a;

    invoke-static {v4}, Lcom/kwad/components/core/page/splitLandingPage/a;->f(Lcom/kwad/components/core/page/splitLandingPage/a;)Lcom/kwad/components/core/page/splitLandingPage/view/a;

    move-result-object v4

    invoke-virtual {v4, v5}, Lcom/kwad/components/core/page/splitLandingPage/view/a;->aC(Z)Landroid/animation/Animator;

    move-result-object v4

    new-array v1, v1, [Landroid/animation/Animator;

    aput-object v3, v1, v2

    aput-object v4, v1, v5

    invoke-virtual {v0, v1}, Landroid/animation/AnimatorSet;->playSequentially([Landroid/animation/Animator;)V

    goto :goto_0

    :cond_1
    new-array v1, v5, [Landroid/animation/Animator;

    aput-object v3, v1, v2

    invoke-virtual {v0, v1}, Landroid/animation/AnimatorSet;->playTogether([Landroid/animation/Animator;)V

    goto :goto_0

    :cond_2
    invoke-static {}, Lcom/kwad/sdk/core/config/d;->yY()I

    move-result v1

    if-ne v1, v5, :cond_3

    new-array v1, v5, [Landroid/animation/Animator;

    aput-object v3, v1, v2

    invoke-virtual {v0, v1}, Landroid/animation/AnimatorSet;->playTogether([Landroid/animation/Animator;)V

    :cond_3
    :goto_0
    new-instance v1, Lcom/kwad/components/core/page/splitLandingPage/a$5$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/page/splitLandingPage/a$5$1;-><init>(Lcom/kwad/components/core/page/splitLandingPage/a$5;)V

    invoke-virtual {v0, v1}, Landroid/animation/AnimatorSet;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    invoke-virtual {v0}, Landroid/animation/AnimatorSet;->start()V

    return v5
.end method
