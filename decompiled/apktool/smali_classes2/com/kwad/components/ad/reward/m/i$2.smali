.class final Lcom/kwad/components/ad/reward/m/i$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/m/i;->a(Lcom/kwad/components/ad/reward/m/r;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic zd:Lcom/kwad/components/ad/reward/m/i;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/m/i;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/i$2;->zd:Lcom/kwad/components/ad/reward/m/i;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i$2;->zd:Lcom/kwad/components/ad/reward/m/i;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/m/i;->b(Lcom/kwad/components/ad/reward/m/i;)Lcom/kwad/components/core/widget/KsStyledTextButton;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i$2;->zd:Lcom/kwad/components/ad/reward/m/i;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/m/i;->b(Lcom/kwad/components/ad/reward/m/i;)Lcom/kwad/components/core/widget/KsStyledTextButton;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/widget/KsStyledTextButton;->getWidth()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i$2;->zd:Lcom/kwad/components/ad/reward/m/i;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/m/i;->b(Lcom/kwad/components/ad/reward/m/i;)Lcom/kwad/components/core/widget/KsStyledTextButton;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/widget/KsStyledTextButton;->getWidth()I

    move-result v0

    int-to-float v0, v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/i$2;->zd:Lcom/kwad/components/ad/reward/m/i;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/m/i;->d(Lcom/kwad/components/ad/reward/m/i;)Landroid/widget/ImageView;

    move-result-object v2

    invoke-static {v1, v2, v0}, Lcom/kwad/components/ad/reward/m/i;->a(Lcom/kwad/components/ad/reward/m/i;Landroid/view/View;F)Landroid/animation/Animator;

    move-result-object v0

    if-eqz v0, :cond_1

    new-instance v1, Lcom/kwad/components/ad/reward/m/i$2$1;

    invoke-direct {v1, p0, v0}, Lcom/kwad/components/ad/reward/m/i$2$1;-><init>(Lcom/kwad/components/ad/reward/m/i$2;Landroid/animation/Animator;)V

    invoke-virtual {v0, v1}, Landroid/animation/Animator;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    invoke-virtual {v0}, Landroid/animation/Animator;->start()V

    :cond_1
    :goto_0
    return-void
.end method
