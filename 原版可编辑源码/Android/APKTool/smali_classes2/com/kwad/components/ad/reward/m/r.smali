.class public final Lcom/kwad/components/ad/reward/m/r;
.super Ljava/lang/Object;


# instance fields
.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;


# direct methods
.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static C(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/ad/reward/m/r;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/m/r;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/m/r;-><init>()V

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/m/r;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-object v0
.end method

.method public static a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/e/d/c;)Lcom/kwad/components/ad/reward/m/r;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/m/r;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/m/r;-><init>()V

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/m/r;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-direct {v0, p1}, Lcom/kwad/components/ad/reward/m/r;->setApkDownloadHelper(Lcom/kwad/components/core/e/d/c;)V

    return-object v0
.end method

.method private setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/r;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-void
.end method

.method private setApkDownloadHelper(Lcom/kwad/components/core/e/d/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/r;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    return-void
.end method


# virtual methods
.method public final getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/r;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object v0
.end method

.method public final hi()Lcom/kwad/components/core/e/d/c;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/r;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    return-object v0
.end method
