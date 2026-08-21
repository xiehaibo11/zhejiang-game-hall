.class final Lcom/kwad/components/ad/reward/presenter/platdetail/b$4;
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

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b$4;->uo:Lcom/kwad/components/ad/reward/presenter/platdetail/b;

    invoke-direct {p0}, Landroid/animation/AnimatorListenerAdapter;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationEnd(Landroid/animation/Animator;)V
    .locals 1

    invoke-super {p0, p1}, Landroid/animation/AnimatorListenerAdapter;->onAnimationEnd(Landroid/animation/Animator;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b$4;->uo:Lcom/kwad/components/ad/reward/presenter/platdetail/b;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->g(Lcom/kwad/components/ad/reward/presenter/platdetail/b;)Landroid/animation/Animator;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->b(Lcom/kwad/components/ad/reward/presenter/platdetail/b;Landroid/animation/Animator;)V

    return-void
.end method
