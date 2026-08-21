.class final Lcom/kwad/components/ad/reward/m/g$1;
.super Landroid/animation/AnimatorListenerAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/m/g;->a(Lcom/kwad/components/ad/reward/m/g$a;J)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic yL:Lcom/kwad/components/ad/reward/m/g$a;

.field final synthetic yM:Lcom/kwad/components/ad/reward/m/g;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/m/g;Lcom/kwad/components/ad/reward/m/g$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/g$1;->yM:Lcom/kwad/components/ad/reward/m/g;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/m/g$1;->yL:Lcom/kwad/components/ad/reward/m/g$a;

    invoke-direct {p0}, Landroid/animation/AnimatorListenerAdapter;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationCancel(Landroid/animation/Animator;)V
    .locals 0

    invoke-super {p0, p1}, Landroid/animation/AnimatorListenerAdapter;->onAnimationCancel(Landroid/animation/Animator;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/g$1;->yL:Lcom/kwad/components/ad/reward/m/g$a;

    if-eqz p1, :cond_0

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/m/g$a;->hD()V

    :cond_0
    return-void
.end method

.method public final onAnimationEnd(Landroid/animation/Animator;)V
    .locals 0

    invoke-super {p0, p1}, Landroid/animation/AnimatorListenerAdapter;->onAnimationEnd(Landroid/animation/Animator;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/g$1;->yL:Lcom/kwad/components/ad/reward/m/g$a;

    if-eqz p1, :cond_0

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/m/g$a;->hD()V

    :cond_0
    return-void
.end method
