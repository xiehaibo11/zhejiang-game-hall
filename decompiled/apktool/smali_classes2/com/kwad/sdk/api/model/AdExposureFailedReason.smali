.class public Lcom/kwad/sdk/api/model/AdExposureFailedReason;
.super Ljava/lang/Object;


# instance fields
.field public adnName:Ljava/lang/String;

.field public adnType:I

.field public winEcpm:I


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public setAdnName(Ljava/lang/String;)Lcom/kwad/sdk/api/model/AdExposureFailedReason;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/api/model/AdExposureFailedReason;->adnName:Ljava/lang/String;

    return-object p0
.end method

.method public setAdnType(I)Lcom/kwad/sdk/api/model/AdExposureFailedReason;
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/api/model/AdExposureFailedReason;->adnType:I

    return-object p0
.end method

.method public setWinEcpm(I)Lcom/kwad/sdk/api/model/AdExposureFailedReason;
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/api/model/AdExposureFailedReason;->winEcpm:I

    return-object p0
.end method
