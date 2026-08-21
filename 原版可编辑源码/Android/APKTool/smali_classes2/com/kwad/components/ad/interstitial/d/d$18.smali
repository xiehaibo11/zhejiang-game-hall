.class final Lcom/kwad/components/ad/interstitial/d/d$18;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/ah$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/interstitial/d/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic kd:Lcom/kwad/components/ad/interstitial/d/d;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/d;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$18;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/jshandler/ah$a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$18;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->t(Lcom/kwad/components/ad/interstitial/d/d;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$18;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->q(Lcom/kwad/components/ad/interstitial/d/d;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$18;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    iget p1, p1, Lcom/kwad/components/core/webview/jshandler/ah$a;->status:I

    invoke-static {v0, p1}, Lcom/kwad/components/ad/interstitial/d/d;->a(Lcom/kwad/components/ad/interstitial/d/d;I)I

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$18;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/d;->u(Lcom/kwad/components/ad/interstitial/d/d;)I

    move-result p1

    const/4 v0, 0x1

    if-eq p1, v0, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$18;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    const-string v0, "3"

    invoke-static {p1, v0}, Lcom/kwad/components/ad/interstitial/d/d;->a(Lcom/kwad/components/ad/interstitial/d/d;Ljava/lang/String;)V

    return-void

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$18;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/d;->f(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/core/webview/KsAdWebView;

    move-result-object p1

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setVisibility(I)V

    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$18;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->i(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/o/a;->U(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$18;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/d;->s(Lcom/kwad/components/ad/interstitial/d/d;)Landroid/os/Handler;

    move-result-object p1

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$18;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/d;->v(Lcom/kwad/components/ad/interstitial/d/d;)Ljava/lang/Runnable;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/utils/bj;->b(Ljava/lang/Runnable;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$18;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/d;->w(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/g/a/a/b;

    move-result-object p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$18;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/d;->w(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/g/a/a/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/ad/g/a/a/b;->eX()V

    :cond_2
    :goto_0
    return-void
.end method
