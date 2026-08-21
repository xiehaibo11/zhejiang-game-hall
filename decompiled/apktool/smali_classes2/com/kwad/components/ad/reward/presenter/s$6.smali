.class final Lcom/kwad/components/ad/reward/presenter/s$6;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/s;->ca()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic hd:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

.field final synthetic he:I

.field final synthetic hf:I

.field final synthetic tw:Lcom/kwad/components/ad/reward/presenter/s;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/s;Lcom/kwad/sdk/core/view/AdBaseFrameLayout;II)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/s$6;->tw:Lcom/kwad/components/ad/reward/presenter/s;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/presenter/s$6;->hd:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput p3, p0, Lcom/kwad/components/ad/reward/presenter/s$6;->he:I

    iput p4, p0, Lcom/kwad/components/ad/reward/presenter/s$6;->hf:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/s$6;->hd:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->getHeight()I

    move-result v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/s$6;->tw:Lcom/kwad/components/ad/reward/presenter/s;

    iget v2, p0, Lcom/kwad/components/ad/reward/presenter/s$6;->he:I

    int-to-float v2, v2

    iget v3, p0, Lcom/kwad/components/ad/reward/presenter/s$6;->hf:I

    sub-int/2addr v0, v3

    int-to-float v0, v0

    invoke-static {v1, v2, v0}, Lcom/kwad/components/ad/reward/presenter/s;->a(Lcom/kwad/components/ad/reward/presenter/s;FF)Landroid/animation/Animator;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/kwad/components/ad/reward/presenter/s;->a(Lcom/kwad/components/ad/reward/presenter/s;Landroid/animation/Animator;)Landroid/animation/Animator;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/s$6;->tw:Lcom/kwad/components/ad/reward/presenter/s;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/s;->e(Lcom/kwad/components/ad/reward/presenter/s;)Landroid/animation/Animator;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/s$6;->tw:Lcom/kwad/components/ad/reward/presenter/s;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/s;->e(Lcom/kwad/components/ad/reward/presenter/s;)Landroid/animation/Animator;

    move-result-object v0

    invoke-virtual {v0}, Landroid/animation/Animator;->start()V

    :cond_0
    return-void
.end method
