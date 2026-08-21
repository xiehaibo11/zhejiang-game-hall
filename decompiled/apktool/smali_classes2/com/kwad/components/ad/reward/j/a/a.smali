.class public final Lcom/kwad/components/ad/reward/j/a/a;
.super Lcom/kwad/components/core/webview/b/c/b;


# instance fields
.field private xG:Lcom/kwad/components/ad/reward/j;


# direct methods
.method public constructor <init>(Lcom/kwad/components/ad/reward/j;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/c/b;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/ad/reward/j/a/a;->xG:Lcom/kwad/components/ad/reward/j;

    return-void
.end method


# virtual methods
.method public final b(Lcom/kwad/components/ad/reward/c/b;)V
    .locals 2

    invoke-static {}, Lcom/kwad/components/ad/reward/c/a;->gW()Lcom/kwad/components/ad/reward/c/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/j/a/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1, p1}, Lcom/kwad/components/ad/reward/c/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/ad/reward/c/b;)V

    return-void
.end method

.method public final jo()Lcom/kwad/components/ad/reward/j;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j/a/a;->xG:Lcom/kwad/components/ad/reward/j;

    return-object v0
.end method

.method public final release()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/webview/b/c/b;->release()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/j/a/a;->xG:Lcom/kwad/components/ad/reward/j;

    return-void
.end method
