.class final Lcom/kwad/components/ad/reward/b/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/b/a;->a(Lcom/kwad/components/ad/reward/m/r;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic qY:Lcom/kwad/components/ad/reward/m/r;

.field final synthetic qZ:J

.field final synthetic ra:Lcom/kwad/components/ad/reward/b/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/b/a;Lcom/kwad/components/ad/reward/m/r;J)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/b/a$1;->ra:Lcom/kwad/components/ad/reward/b/a;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/b/a$1;->qY:Lcom/kwad/components/ad/reward/m/r;

    iput-wide p3, p0, Lcom/kwad/components/ad/reward/b/a$1;->qZ:J

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/b/a$1;->ra:Lcom/kwad/components/ad/reward/b/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/b/a;->a(Lcom/kwad/components/ad/reward/b/a;)Landroid/view/View;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/components/ad/reward/b/a;->a(Lcom/kwad/components/ad/reward/b/a;Landroid/view/View;)Landroid/animation/Animator;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/reward/b/a$1$1;

    invoke-direct {v1, p0, v0}, Lcom/kwad/components/ad/reward/b/a$1$1;-><init>(Lcom/kwad/components/ad/reward/b/a$1;Landroid/animation/Animator;)V

    invoke-virtual {v0, v1}, Landroid/animation/Animator;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    invoke-virtual {v0}, Landroid/animation/Animator;->start()V

    return-void
.end method
