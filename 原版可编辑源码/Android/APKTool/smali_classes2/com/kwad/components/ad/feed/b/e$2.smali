.class final Lcom/kwad/components/ad/feed/b/e$2;
.super Landroid/animation/AnimatorListenerAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/feed/b/e;->b(Landroid/view/View;I)Landroid/animation/Animator;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic eX:Landroid/view/View;

.field final synthetic fe:Lcom/kwad/components/ad/feed/b/e;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/feed/b/e;Landroid/view/View;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/e$2;->fe:Lcom/kwad/components/ad/feed/b/e;

    iput-object p2, p0, Lcom/kwad/components/ad/feed/b/e$2;->eX:Landroid/view/View;

    invoke-direct {p0}, Landroid/animation/AnimatorListenerAdapter;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationStart(Landroid/animation/Animator;)V
    .locals 2

    invoke-super {p0, p1}, Landroid/animation/AnimatorListenerAdapter;->onAnimationStart(Landroid/animation/Animator;)V

    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/e$2;->eX:Landroid/view/View;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/view/View;->setVisibility(I)V

    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/e$2;->eX:Landroid/view/View;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Landroid/view/View;->setClickable(Z)V

    new-instance p1, Lcom/kwad/sdk/widget/f;

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/e$2;->eX:Landroid/view/View;

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/e$2;->fe:Lcom/kwad/components/ad/feed/b/e;

    invoke-static {v1}, Lcom/kwad/components/ad/feed/b/e;->c(Lcom/kwad/components/ad/feed/b/e;)Lcom/kwad/sdk/widget/c;

    move-result-object v1

    invoke-direct {p1, v0, v1}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    return-void
.end method
