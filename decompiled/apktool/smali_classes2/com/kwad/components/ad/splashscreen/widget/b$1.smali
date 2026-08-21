.class final Lcom/kwad/components/ad/splashscreen/widget/b$1;
.super Landroid/animation/AnimatorListenerAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/widget/b;->le()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Fl:Lcom/kwad/components/ad/splashscreen/widget/b;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/widget/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/widget/b$1;->Fl:Lcom/kwad/components/ad/splashscreen/widget/b;

    invoke-direct {p0}, Landroid/animation/AnimatorListenerAdapter;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationCancel(Landroid/animation/Animator;)V
    .locals 0

    invoke-super {p0, p1}, Landroid/animation/AnimatorListenerAdapter;->onAnimationCancel(Landroid/animation/Animator;)V

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/widget/b$1;->Fl:Lcom/kwad/components/ad/splashscreen/widget/b;

    invoke-virtual {p1}, Lcom/kwad/components/ad/splashscreen/widget/b;->lF()V

    return-void
.end method

.method public final onAnimationEnd(Landroid/animation/Animator;)V
    .locals 3

    invoke-super {p0, p1}, Landroid/animation/AnimatorListenerAdapter;->onAnimationEnd(Landroid/animation/Animator;)V

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/widget/b$1;->Fl:Lcom/kwad/components/ad/splashscreen/widget/b;

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/widget/b;->a(Lcom/kwad/components/ad/splashscreen/widget/b;)Z

    move-result p1

    if-eqz p1, :cond_0

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/widget/b$1;->Fl:Lcom/kwad/components/ad/splashscreen/widget/b;

    invoke-virtual {p1}, Lcom/kwad/components/ad/splashscreen/widget/b;->getInteractionView()Landroid/view/View;

    move-result-object p1

    new-instance v0, Lcom/kwad/components/ad/splashscreen/widget/b$1$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/widget/b$1$1;-><init>(Lcom/kwad/components/ad/splashscreen/widget/b$1;)V

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/widget/b$1;->Fl:Lcom/kwad/components/ad/splashscreen/widget/b;

    invoke-virtual {v1}, Lcom/kwad/components/ad/splashscreen/widget/b;->getAnimationDelayTime()I

    move-result v1

    int-to-long v1, v1

    invoke-virtual {p1, v0, v1, v2}, Landroid/view/View;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method
