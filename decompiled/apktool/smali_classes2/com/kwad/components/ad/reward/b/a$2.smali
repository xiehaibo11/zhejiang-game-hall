.class final Lcom/kwad/components/ad/reward/b/a$2;
.super Landroid/animation/AnimatorListenerAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/b/a;->gR()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic ra:Lcom/kwad/components/ad/reward/b/a;

.field final synthetic re:Landroid/animation/Animator;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/b/a;Landroid/animation/Animator;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/b/a$2;->ra:Lcom/kwad/components/ad/reward/b/a;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/b/a$2;->re:Landroid/animation/Animator;

    invoke-direct {p0}, Landroid/animation/AnimatorListenerAdapter;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationEnd(Landroid/animation/Animator;)V
    .locals 0

    invoke-super {p0, p1}, Landroid/animation/AnimatorListenerAdapter;->onAnimationEnd(Landroid/animation/Animator;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/b/a$2;->re:Landroid/animation/Animator;

    invoke-virtual {p1, p0}, Landroid/animation/Animator;->removeListener(Landroid/animation/Animator$AnimatorListener;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/b/a$2;->ra:Lcom/kwad/components/ad/reward/b/a;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/b/a;->d(Lcom/kwad/components/ad/reward/b/a;)Lcom/kwad/components/ad/reward/b/a$b;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/b/a$2;->ra:Lcom/kwad/components/ad/reward/b/a;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/b/a;->d(Lcom/kwad/components/ad/reward/b/a;)Lcom/kwad/components/ad/reward/b/a$b;

    move-result-object p1

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/b/a$b;->gV()V

    :cond_0
    return-void
.end method
