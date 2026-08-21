.class final Lcom/kwad/components/ad/interstitial/d/a/b$5$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/a/b$5;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic lx:Lcom/kwad/sdk/core/webview/c/c;

.field final synthetic ly:Lcom/kwad/components/ad/interstitial/d/a/b$5;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/a/b$5;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/a/b$5$1;->ly:Lcom/kwad/components/ad/interstitial/d/a/b$5;

    iput-object p2, p0, Lcom/kwad/components/ad/interstitial/d/a/b$5$1;->lx:Lcom/kwad/sdk/core/webview/c/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    new-instance v0, Lcom/kwad/components/core/webview/b/b/d;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/b/d;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/a/b$5$1;->ly:Lcom/kwad/components/ad/interstitial/d/a/b$5;

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/a/b$5;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v1}, Lcom/kwad/components/ad/interstitial/d/a/b;->J(Lcom/kwad/components/ad/interstitial/d/a/b;)Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/ag;->isWifiConnected(Landroid/content/Context;)Z

    move-result v1

    if-nez v1, :cond_1

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/a/b$5$1;->ly:Lcom/kwad/components/ad/interstitial/d/a/b$5;

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/a/b$5;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v1}, Lcom/kwad/components/ad/interstitial/d/a/b;->K(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v1

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/c;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    invoke-interface {v1}, Lcom/kwad/sdk/api/KsAdVideoPlayConfig;->isDataFlowAutoStart()Z

    move-result v1

    if-nez v1, :cond_1

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/a/b$5$1;->ly:Lcom/kwad/components/ad/interstitial/d/a/b$5;

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/a/b$5;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v1}, Lcom/kwad/components/ad/interstitial/d/a/b;->L(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v1

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/components/ad/interstitial/d/a/b;->k(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v1, 0x1

    :goto_1
    iput-boolean v1, v0, Lcom/kwad/components/core/webview/b/b/d;->WT:Z

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/a/b$5$1;->lx:Lcom/kwad/sdk/core/webview/c/c;

    invoke-interface {v1, v0}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    return-void
.end method
