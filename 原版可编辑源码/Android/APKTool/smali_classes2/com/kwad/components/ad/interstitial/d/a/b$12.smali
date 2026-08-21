.class final Lcom/kwad/components/ad/interstitial/d/a/b$12;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/g/a/a/b$b;


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

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/a/b$12;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final C(I)V
    .locals 2

    sget v0, Lcom/kwad/components/ad/g/a/a/b;->nC:I

    if-ne p1, v0, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/a/b$12;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/a/b;->o(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b$12;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->m(Lcom/kwad/components/ad/interstitial/d/a/b;)Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/a/b$12;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v1}, Lcom/kwad/components/ad/interstitial/d/a/b;->n(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v1

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p1, v0, v1}, Lcom/kwad/components/ad/interstitial/d/c;->b(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/a/b$12;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/a/b;->p(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v1, 0x1

    invoke-virtual {p1, v0, v1}, Lcom/kwad/components/ad/interstitial/d/a/b;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Z)V

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/a/b$12;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/a/b;->q(Lcom/kwad/components/ad/interstitial/d/a/b;)V

    return-void
.end method
