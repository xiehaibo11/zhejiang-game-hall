.class final Lcom/kwad/components/ad/interstitial/d/a/b$5;
.super Lcom/kwad/components/core/webview/b/a/n;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/a/b;->ek()Lcom/kwad/components/core/webview/b/a/n;
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

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/a/b$5;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/a/n;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 2

    invoke-super {p0, p1, p2}, Lcom/kwad/components/core/webview/b/a/n;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V

    new-instance p1, Lcom/kwad/components/ad/interstitial/d/a/b$5$1;

    invoke-direct {p1, p0, p2}, Lcom/kwad/components/ad/interstitial/d/a/b$5$1;-><init>(Lcom/kwad/components/ad/interstitial/d/a/b$5;Lcom/kwad/sdk/core/webview/c/c;)V

    const-wide/16 v0, 0x0

    invoke-static {p1, v0, v1}, Lcom/kwad/sdk/utils/bj;->runOnUiThreadDelay(Ljava/lang/Runnable;J)V

    return-void
.end method
