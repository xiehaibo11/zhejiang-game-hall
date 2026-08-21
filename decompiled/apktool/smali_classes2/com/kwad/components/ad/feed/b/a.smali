.class public abstract Lcom/kwad/components/ad/feed/b/a;
.super Lcom/kwad/components/core/widget/b;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/components/core/widget/b<",
        "Lcom/kwad/sdk/core/response/model/AdTemplate;",
        ">;"
    }
.end annotation


# instance fields
.field private eg:Z

.field protected eh:J

.field protected ei:Lcom/kwad/sdk/core/imageloader/core/listener/SimpleImageLoadingListener;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/widget/b;-><init>(Landroid/content/Context;)V

    new-instance p1, Lcom/kwad/components/ad/feed/b/a$1;

    invoke-direct {p1, p0}, Lcom/kwad/components/ad/feed/b/a$1;-><init>(Lcom/kwad/components/ad/feed/b/a;)V

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/a;->ei:Lcom/kwad/sdk/core/imageloader/core/listener/SimpleImageLoadingListener;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/feed/b/a;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/feed/b/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/feed/b/a;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/feed/b/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method


# virtual methods
.method public final aY()V
    .locals 4

    iget-boolean v0, p0, Lcom/kwad/components/ad/feed/b/a;->eg:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/feed/b/a;->eg:Z

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/a;->getStayTime()J

    move-result-wide v2

    invoke-static {v1, v0, v2, v3}, Lcom/kwad/components/ad/feed/monitor/b;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;IJ)V

    return-void
.end method

.method protected final aZ()V
    .locals 2

    sget v0, Lcom/kwad/sdk/R$id;->ksad_compliance_view:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/widget/ComplianceTextView;

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aH(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/widget/ComplianceTextView;->setVisibility(I)V

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/widget/ComplianceTextView;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void

    :cond_0
    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/widget/ComplianceTextView;->setVisibility(I)V

    return-void
.end method
