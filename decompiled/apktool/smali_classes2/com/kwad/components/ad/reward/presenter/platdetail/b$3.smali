.class final Lcom/kwad/components/ad/reward/presenter/platdetail/b$3;
.super Landroid/animation/AnimatorListenerAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ia()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic uo:Lcom/kwad/components/ad/reward/presenter/platdetail/b;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/platdetail/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b$3;->uo:Lcom/kwad/components/ad/reward/presenter/platdetail/b;

    invoke-direct {p0}, Landroid/animation/AnimatorListenerAdapter;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationEnd(Landroid/animation/Animator;)V
    .locals 1

    invoke-super {p0, p1}, Landroid/animation/AnimatorListenerAdapter;->onAnimationEnd(Landroid/animation/Animator;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b$3;->uo:Lcom/kwad/components/ad/reward/presenter/platdetail/b;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->g(Lcom/kwad/components/ad/reward/presenter/platdetail/b;)Landroid/animation/Animator;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->b(Lcom/kwad/components/ad/reward/presenter/platdetail/b;Landroid/animation/Animator;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b$3;->uo:Lcom/kwad/components/ad/reward/presenter/platdetail/b;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->h(Lcom/kwad/components/ad/reward/presenter/platdetail/b;)Landroid/view/View;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->a(Lcom/kwad/components/ad/reward/presenter/platdetail/b;Landroid/view/View;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b$3;->uo:Lcom/kwad/components/ad/reward/presenter/platdetail/b;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->i(Lcom/kwad/components/ad/reward/presenter/platdetail/b;)Landroid/view/View;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->a(Lcom/kwad/components/ad/reward/presenter/platdetail/b;Landroid/view/View;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b$3;->uo:Lcom/kwad/components/ad/reward/presenter/platdetail/b;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->c(Lcom/kwad/components/ad/reward/presenter/platdetail/b;Landroid/view/View;)Landroid/view/View;

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b$3;->uo:Lcom/kwad/components/ad/reward/presenter/platdetail/b;

    invoke-static {p1, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->d(Lcom/kwad/components/ad/reward/presenter/platdetail/b;Landroid/view/View;)Landroid/view/View;

    return-void
.end method

.method public final onAnimationStart(Landroid/animation/Animator;)V
    .locals 1

    invoke-super {p0, p1}, Landroid/animation/AnimatorListenerAdapter;->onAnimationStart(Landroid/animation/Animator;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b$3;->uo:Lcom/kwad/components/ad/reward/presenter/platdetail/b;

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->b(Lcom/kwad/components/ad/reward/presenter/platdetail/b;Z)Z

    return-void
.end method
