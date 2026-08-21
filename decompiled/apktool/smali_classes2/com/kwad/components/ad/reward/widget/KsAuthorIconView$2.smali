.class final Lcom/kwad/components/ad/reward/widget/KsAuthorIconView$2;
.super Landroid/animation/AnimatorListenerAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/widget/KsAuthorIconView;->a(Landroid/os/Message;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic AT:Landroid/animation/Animator;

.field final synthetic AU:Landroid/animation/Animator;

.field final synthetic AV:Landroid/animation/Animator;

.field final synthetic AW:Landroid/animation/Animator;

.field final synthetic AX:Lcom/kwad/components/ad/reward/widget/KsAuthorIconView;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/widget/KsAuthorIconView;Landroid/animation/Animator;Landroid/animation/Animator;Landroid/animation/Animator;Landroid/animation/Animator;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/widget/KsAuthorIconView$2;->AX:Lcom/kwad/components/ad/reward/widget/KsAuthorIconView;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/widget/KsAuthorIconView$2;->AT:Landroid/animation/Animator;

    iput-object p3, p0, Lcom/kwad/components/ad/reward/widget/KsAuthorIconView$2;->AU:Landroid/animation/Animator;

    iput-object p4, p0, Lcom/kwad/components/ad/reward/widget/KsAuthorIconView$2;->AV:Landroid/animation/Animator;

    iput-object p5, p0, Lcom/kwad/components/ad/reward/widget/KsAuthorIconView$2;->AW:Landroid/animation/Animator;

    invoke-direct {p0}, Landroid/animation/AnimatorListenerAdapter;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationEnd(Landroid/animation/Animator;)V
    .locals 0

    invoke-super {p0, p1}, Landroid/animation/AnimatorListenerAdapter;->onAnimationEnd(Landroid/animation/Animator;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/widget/KsAuthorIconView$2;->AT:Landroid/animation/Animator;

    invoke-virtual {p1}, Landroid/animation/Animator;->start()V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/widget/KsAuthorIconView$2;->AU:Landroid/animation/Animator;

    invoke-virtual {p1}, Landroid/animation/Animator;->start()V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/widget/KsAuthorIconView$2;->AV:Landroid/animation/Animator;

    invoke-virtual {p1}, Landroid/animation/Animator;->start()V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/widget/KsAuthorIconView$2;->AW:Landroid/animation/Animator;

    invoke-virtual {p1}, Landroid/animation/Animator;->start()V

    return-void
.end method
