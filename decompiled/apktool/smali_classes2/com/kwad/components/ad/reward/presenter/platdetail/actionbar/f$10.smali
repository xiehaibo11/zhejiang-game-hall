.class final Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$10;
.super Landroid/animation/AnimatorListenerAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->h(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic uN:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;

.field final synthetic vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$10;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$10;->uN:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;

    invoke-direct {p0}, Landroid/animation/AnimatorListenerAdapter;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationEnd(Landroid/animation/Animator;)V
    .locals 2

    invoke-super {p0, p1}, Landroid/animation/AnimatorListenerAdapter;->onAnimationEnd(Landroid/animation/Animator;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$10;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->s(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$10;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->s(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/jshandler/am;->rA()V

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$10;->uN:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;

    if-eqz p1, :cond_1

    sget-object v0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$ShowActionBarResult;->SHOW_H5_SUCCESS:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$ShowActionBarResult;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$10;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->h(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/sdk/core/webview/KsAdWebView;

    move-result-object v1

    invoke-interface {p1, v0, v1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;->a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$ShowActionBarResult;Landroid/view/View;)V

    :cond_1
    return-void
.end method

.method public final onAnimationStart(Landroid/animation/Animator;)V
    .locals 0

    invoke-super {p0, p1}, Landroid/animation/AnimatorListenerAdapter;->onAnimationStart(Landroid/animation/Animator;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$10;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->s(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$10;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->s(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/jshandler/am;->rz()V

    :cond_0
    return-void
.end method
