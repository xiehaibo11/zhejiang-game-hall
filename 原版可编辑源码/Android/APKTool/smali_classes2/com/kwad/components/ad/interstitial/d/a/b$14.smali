.class final Lcom/kwad/components/ad/interstitial/d/a/b$14;
.super Lcom/kwad/components/core/webview/b/a/q;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/a/b;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V
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

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/a/b$14;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/a/q;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 0

    invoke-super {p0, p1, p2}, Lcom/kwad/components/core/webview/b/a/q;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/a/b$14;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/a/b;->s(Lcom/kwad/components/ad/interstitial/d/a/b;)Landroid/content/Context;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/d/a/b$14;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {p2}, Lcom/kwad/components/ad/interstitial/d/a/b;->t(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object p2

    iget-object p2, p2, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1, p2}, Lcom/kwad/components/core/t/h;->f(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void
.end method
