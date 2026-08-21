.class final Lcom/kwad/components/ad/reward/m/i$2$1;
.super Landroid/animation/AnimatorListenerAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/m/i$2;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field private ze:I

.field final synthetic zf:Landroid/animation/Animator;

.field final synthetic zg:Lcom/kwad/components/ad/reward/m/i$2;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/m/i$2;Landroid/animation/Animator;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/i$2$1;->zg:Lcom/kwad/components/ad/reward/m/i$2;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/m/i$2$1;->zf:Landroid/animation/Animator;

    invoke-direct {p0}, Landroid/animation/AnimatorListenerAdapter;-><init>()V

    const/4 p1, 0x1

    iput p1, p0, Lcom/kwad/components/ad/reward/m/i$2$1;->ze:I

    return-void
.end method


# virtual methods
.method public final onAnimationEnd(Landroid/animation/Animator;)V
    .locals 1

    invoke-super {p0, p1}, Landroid/animation/AnimatorListenerAdapter;->onAnimationEnd(Landroid/animation/Animator;)V

    iget p1, p0, Lcom/kwad/components/ad/reward/m/i$2$1;->ze:I

    const/4 v0, 0x3

    if-lt p1, v0, :cond_0

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/i$2$1;->zf:Landroid/animation/Animator;

    invoke-virtual {p1}, Landroid/animation/Animator;->start()V

    iget p1, p0, Lcom/kwad/components/ad/reward/m/i$2$1;->ze:I

    add-int/lit8 p1, p1, 0x1

    iput p1, p0, Lcom/kwad/components/ad/reward/m/i$2$1;->ze:I

    return-void
.end method
