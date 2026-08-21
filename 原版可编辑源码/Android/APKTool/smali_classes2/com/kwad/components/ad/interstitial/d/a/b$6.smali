.class final Lcom/kwad/components/ad/interstitial/d/a/b$6;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/z$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/a/b;->dp()Lcom/kwad/components/core/webview/jshandler/z;
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

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/a/b$6;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/jshandler/z$a;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b$6;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->M(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hG:Lcom/kwad/components/ad/interstitial/d;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b$6;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->U(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->jo:Lcom/kwad/sdk/widget/KSFrameLayout;

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/a/b$6$1;

    invoke-direct {v1, p0, p1}, Lcom/kwad/components/ad/interstitial/d/a/b$6$1;-><init>(Lcom/kwad/components/ad/interstitial/d/a/b$6;Lcom/kwad/components/core/webview/jshandler/z$a;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/KSFrameLayout;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method
