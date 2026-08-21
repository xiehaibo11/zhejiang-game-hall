.class final Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$2;
.super Landroid/animation/AnimatorListenerAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->aC()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$2;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-direct {p0}, Landroid/animation/AnimatorListenerAdapter;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationEnd(Landroid/animation/Animator;)V
    .locals 1

    invoke-super {p0, p1}, Landroid/animation/AnimatorListenerAdapter;->onAnimationEnd(Landroid/animation/Animator;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$2;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->h(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/sdk/core/webview/KsAdWebView;

    move-result-object p1

    const/4 v0, 0x4

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setVisibility(I)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$2;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->s(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$2;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->s(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/jshandler/am;->rC()V

    :cond_0
    return-void
.end method

.method public final onAnimationStart(Landroid/animation/Animator;)V
    .locals 0

    invoke-super {p0, p1}, Landroid/animation/AnimatorListenerAdapter;->onAnimationStart(Landroid/animation/Animator;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$2;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->s(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$2;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->s(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/jshandler/am;->rB()V

    :cond_0
    return-void
.end method
