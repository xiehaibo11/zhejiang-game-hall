.class final Lcom/kwad/components/ad/interstitial/d/a/b$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/av$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/a/b;->do()Lcom/kwad/components/core/webview/jshandler/av;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic lv:Lcom/kwad/components/ad/interstitial/d/a/b;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/a/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/a/b$4;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final dw()Z
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b$4;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->G(Lcom/kwad/components/ad/interstitial/d/a/b;)Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/a/b$4;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v1}, Lcom/kwad/components/ad/interstitial/d/a/b;->H(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v1

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0, v1}, Lcom/kwad/components/core/page/a;->launch(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b$4;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->I(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    const/4 v1, 0x1

    const/4 v2, -0x1

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v2, v3}, Lcom/kwad/components/ad/interstitial/d/c;->a(ZILcom/kwad/sdk/core/video/videoview/a;)V

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/a/b$4$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/a/b$4$1;-><init>(Lcom/kwad/components/ad/interstitial/d/a/b$4;)V

    const-wide/16 v1, 0x0

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/utils/bj;->runOnUiThreadDelay(Ljava/lang/Runnable;J)V

    const/4 v0, 0x0

    return v0
.end method
