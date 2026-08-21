.class public final Lcom/kwad/components/ad/draw/b/a;
.super Lcom/kwad/components/ad/draw/a/a;


# instance fields
.field private bZ:Lcom/kwad/components/core/widget/ComplianceTextView;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/a/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/draw/a/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/a;->bZ:Lcom/kwad/components/core/widget/ComplianceTextView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/widget/ComplianceTextView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/a;->bZ:Lcom/kwad/components/core/widget/ComplianceTextView;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/a;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v1, v1, Lcom/kwad/components/ad/draw/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/widget/ComplianceTextView;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/draw/a/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_compliance_view:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/draw/b/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/widget/ComplianceTextView;

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/a;->bZ:Lcom/kwad/components/core/widget/ComplianceTextView;

    return-void
.end method
