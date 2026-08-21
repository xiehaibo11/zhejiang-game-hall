.class final Lcom/kwad/components/ad/splashscreen/c/m$5;
.super Landroid/animation/AnimatorListenerAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/c/m;->a(D)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Ds:Lcom/kwad/components/ad/splashscreen/c/m;

.field final synthetic fK:D


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/m;D)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/m$5;->Ds:Lcom/kwad/components/ad/splashscreen/c/m;

    iput-wide p2, p0, Lcom/kwad/components/ad/splashscreen/c/m$5;->fK:D

    invoke-direct {p0}, Landroid/animation/AnimatorListenerAdapter;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationEnd(Landroid/animation/Animator;)V
    .locals 6

    invoke-super {p0, p1}, Landroid/animation/AnimatorListenerAdapter;->onAnimationEnd(Landroid/animation/Animator;)V

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/m$5;->Ds:Lcom/kwad/components/ad/splashscreen/c/m;

    iget-object p1, p1, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/m$5;->Ds:Lcom/kwad/components/ad/splashscreen/c/m;

    iget-object v0, p1, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    const/4 v1, 0x1

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/m$5;->Ds:Lcom/kwad/components/ad/splashscreen/c/m;

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/c/m;->e(Lcom/kwad/components/ad/splashscreen/c/m;)Landroid/content/Context;

    move-result-object v2

    const/16 v3, 0x9d

    const/4 v4, 0x2

    new-instance v5, Lcom/kwad/components/ad/splashscreen/c/m$5$1;

    invoke-direct {v5, p0}, Lcom/kwad/components/ad/splashscreen/c/m$5$1;-><init>(Lcom/kwad/components/ad/splashscreen/c/m$5;)V

    invoke-virtual/range {v0 .. v5}, Lcom/kwad/components/ad/splashscreen/h;->a(ILandroid/content/Context;IILcom/kwad/components/ad/splashscreen/h$a;)V

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/m$5;->Ds:Lcom/kwad/components/ad/splashscreen/c/m;

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/c/m;->b(Lcom/kwad/components/ad/splashscreen/c/m;)Lcom/kwad/components/ad/splashscreen/widget/KsShakeView;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/ad/splashscreen/widget/KsShakeView;->lH()V

    new-instance p1, Lcom/kwad/components/ad/splashscreen/c/m$5$2;

    invoke-direct {p1, p0}, Lcom/kwad/components/ad/splashscreen/c/m$5$2;-><init>(Lcom/kwad/components/ad/splashscreen/c/m$5;)V

    const/4 v0, 0x0

    const-wide/16 v1, 0x1f4

    invoke-static {p1, v0, v1, v2}, Lcom/kwad/sdk/utils/bj;->a(Ljava/lang/Runnable;Ljava/lang/Object;J)V

    return-void
.end method
