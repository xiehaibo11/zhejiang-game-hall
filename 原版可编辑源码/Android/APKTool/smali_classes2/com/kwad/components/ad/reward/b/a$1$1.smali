.class final Lcom/kwad/components/ad/reward/b/a$1$1;
.super Landroid/animation/AnimatorListenerAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/b/a$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic rb:Landroid/animation/Animator;

.field final synthetic rc:Lcom/kwad/components/ad/reward/b/a$1;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/b/a$1;Landroid/animation/Animator;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/b/a$1$1;->rc:Lcom/kwad/components/ad/reward/b/a$1;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/b/a$1$1;->rb:Landroid/animation/Animator;

    invoke-direct {p0}, Landroid/animation/AnimatorListenerAdapter;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationEnd(Landroid/animation/Animator;)V
    .locals 4

    invoke-super {p0, p1}, Landroid/animation/AnimatorListenerAdapter;->onAnimationEnd(Landroid/animation/Animator;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/b/a$1$1;->rb:Landroid/animation/Animator;

    invoke-virtual {p1, p0}, Landroid/animation/Animator;->removeListener(Landroid/animation/Animator$AnimatorListener;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/b/a$1$1;->rc:Lcom/kwad/components/ad/reward/b/a$1;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/b/a$1;->qY:Lcom/kwad/components/ad/reward/m/r;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/m/r;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    const/4 v0, 0x0

    const/16 v1, 0xa9

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/core/report/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;ILorg/json/JSONObject;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/b/a$1$1;->rc:Lcom/kwad/components/ad/reward/b/a$1;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/b/a$1;->ra:Lcom/kwad/components/ad/reward/b/a;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/b/a$1$1;->rc:Lcom/kwad/components/ad/reward/b/a$1;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/b/a$1;->ra:Lcom/kwad/components/ad/reward/b/a;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/b/a;->b(Lcom/kwad/components/ad/reward/b/a;)Landroid/widget/ImageView;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/b/a$1$1;->rc:Lcom/kwad/components/ad/reward/b/a$1;

    iget-wide v2, v2, Lcom/kwad/components/ad/reward/b/a$1;->qZ:J

    invoke-static {p1, v1, v2, v3}, Lcom/kwad/components/ad/reward/b/a;->a(Lcom/kwad/components/ad/reward/b/a;Landroid/widget/ImageView;J)Landroid/animation/Animator;

    move-result-object p1

    invoke-virtual {p1}, Landroid/animation/Animator;->start()V

    new-instance p1, Lcom/kwad/components/ad/reward/b/a$1$1$1;

    invoke-direct {p1, p0}, Lcom/kwad/components/ad/reward/b/a$1$1$1;-><init>(Lcom/kwad/components/ad/reward/b/a$1$1;)V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/b/a$1$1;->rc:Lcom/kwad/components/ad/reward/b/a$1;

    iget-wide v1, v1, Lcom/kwad/components/ad/reward/b/a$1;->qZ:J

    invoke-static {p1, v0, v1, v2}, Lcom/kwad/sdk/utils/bj;->a(Ljava/lang/Runnable;Ljava/lang/Object;J)V

    return-void
.end method
