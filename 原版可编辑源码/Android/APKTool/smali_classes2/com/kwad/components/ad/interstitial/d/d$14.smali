.class final Lcom/kwad/components/ad/interstitial/d/d$14;
.super Lcom/kwad/components/core/webview/b/a/p;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/d;->dq()Lcom/kwad/components/core/webview/b/a/p;
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

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$14;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/a/p;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 2

    invoke-super {p0, p1, p2}, Lcom/kwad/components/core/webview/b/a/p;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$14;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/d;->h(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/core/video/videoview/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/sdk/core/video/videoview/a;->isIdle()Z

    move-result p1

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    new-instance p1, Lcom/kwad/components/core/webview/b/b/y;

    invoke-direct {p1}, Lcom/kwad/components/core/webview/b/b/y;-><init>()V

    iput-boolean v0, p1, Lcom/kwad/components/core/webview/b/b/y;->Xk:Z

    iput-boolean v0, p1, Lcom/kwad/components/core/webview/b/b/y;->Xg:Z

    iput v0, p1, Lcom/kwad/components/core/webview/b/b/y;->nM:I

    invoke-interface {p2, p1}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$14;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/d;->h(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/core/video/videoview/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/sdk/core/video/videoview/a;->isCompleted()Z

    move-result p1

    if-eqz p1, :cond_1

    new-instance p1, Lcom/kwad/components/core/webview/b/b/y;

    invoke-direct {p1}, Lcom/kwad/components/core/webview/b/b/y;-><init>()V

    iput-boolean v0, p1, Lcom/kwad/components/core/webview/b/b/y;->Xk:Z

    const/4 v0, 0x1

    iput-boolean v0, p1, Lcom/kwad/components/core/webview/b/b/y;->Xg:Z

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$14;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->p(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/core/webview/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/b;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->G(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    int-to-long v0, v0

    long-to-int v0, v0

    iput v0, p1, Lcom/kwad/components/core/webview/b/b/y;->nM:I

    invoke-interface {p2, p1}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    :cond_1
    return-void
.end method
