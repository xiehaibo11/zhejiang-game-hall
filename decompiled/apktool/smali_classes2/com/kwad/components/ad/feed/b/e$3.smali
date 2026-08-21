.class final Lcom/kwad/components/ad/feed/b/e$3;
.super Landroid/animation/AnimatorListenerAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/feed/b/e;->f(Landroid/view/View;)Landroid/animation/Animator;
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

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/e$3;->fe:Lcom/kwad/components/ad/feed/b/e;

    iput-object p2, p0, Lcom/kwad/components/ad/feed/b/e$3;->eX:Landroid/view/View;

    invoke-direct {p0}, Landroid/animation/AnimatorListenerAdapter;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationEnd(Landroid/animation/Animator;)V
    .locals 1

    invoke-super {p0, p1}, Landroid/animation/AnimatorListenerAdapter;->onAnimationEnd(Landroid/animation/Animator;)V

    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/e$3;->eX:Landroid/view/View;

    const/16 v0, 0x8

    invoke-virtual {p1, v0}, Landroid/view/View;->setVisibility(I)V

    return-void
.end method
