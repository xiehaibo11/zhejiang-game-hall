.class public final Lcom/kwad/components/ad/reward/presenter/c;
.super Lcom/kwad/components/ad/reward/presenter/a;


# instance fields
.field private bZ:Lcom/kwad/components/core/widget/ComplianceTextView;

.field private gt:Lcom/kwad/components/core/webview/b/e/e;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/c$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/c$1;-><init>(Lcom/kwad/components/ad/reward/presenter/c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c;->gt:Lcom/kwad/components/core/webview/b/e/e;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/c;)Lcom/kwad/components/core/widget/ComplianceTextView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/c;->bZ:Lcom/kwad/components/core/widget/ComplianceTextView;

    return-object p0
.end method

.method private hA()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->pj:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    return v0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->c(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    return v0
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/c;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->a(Lcom/kwad/components/core/webview/b/e/e;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/c;->hA()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c;->bZ:Lcom/kwad/components/core/widget/ComplianceTextView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/widget/ComplianceTextView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c;->bZ:Lcom/kwad/components/core/widget/ComplianceTextView;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/widget/ComplianceTextView;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    :cond_0
    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_compliance_view:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/widget/ComplianceTextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c;->bZ:Lcom/kwad/components/core/widget/ComplianceTextView;

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/c;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->b(Lcom/kwad/components/core/webview/b/e/e;)V

    return-void
.end method
