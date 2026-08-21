.class final Lcom/kwad/components/ad/interstitial/f/e$1;
.super Lcom/kwad/components/core/webview/b/e/e;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/interstitial/f/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic lM:Lcom/kwad/components/ad/interstitial/f/e;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/f/e;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/f/e$1;->lM:Lcom/kwad/components/ad/interstitial/f/e;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/e/e;-><init>()V

    return-void
.end method


# virtual methods
.method public final q(Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/e$1;->lM:Lcom/kwad/components/ad/interstitial/f/e;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/f/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v1, "ksad-interstitial-card"

    invoke-static {v1, v0}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/e$1;->lM:Lcom/kwad/components/ad/interstitial/f/e;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/kwad/components/ad/interstitial/f/e;->a(Lcom/kwad/components/ad/interstitial/f/e;Z)Z

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/e$1;->lM:Lcom/kwad/components/ad/interstitial/f/e;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/f/e;->lH:Lcom/kwad/components/ad/interstitial/d/b;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/e$1;->lM:Lcom/kwad/components/ad/interstitial/f/e;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/f/e;->lH:Lcom/kwad/components/ad/interstitial/d/b;

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/d/b;->lI()V

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/e$1;->lM:Lcom/kwad/components/ad/interstitial/f/e;

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/f/e;->er()Lcom/kwad/components/ad/interstitial/d/b;

    move-result-object v0

    iput-object v0, p1, Lcom/kwad/components/ad/interstitial/f/e;->lH:Lcom/kwad/components/ad/interstitial/d/b;

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/e$1;->lM:Lcom/kwad/components/ad/interstitial/f/e;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/f/e;->lH:Lcom/kwad/components/ad/interstitial/d/b;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/e$1;->lM:Lcom/kwad/components/ad/interstitial/f/e;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/f/e;->lJ:Landroid/view/ViewGroup;

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/interstitial/d/b;->F(Landroid/view/View;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/e$1;->lM:Lcom/kwad/components/ad/interstitial/f/e;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/f/e;->lH:Lcom/kwad/components/ad/interstitial/d/b;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/e$1;->lM:Lcom/kwad/components/ad/interstitial/f/e;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/f/e;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/interstitial/d/b;->k(Ljava/lang/Object;)V

    :cond_1
    return-void
.end method
