.class public Lcom/kwad/sdk/core/response/model/AdMatrixInfo$PreLandingPageTKInfo;
.super Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/response/model/AdMatrixInfo;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "PreLandingPageTKInfo"
.end annotation


# static fields
.field private static final serialVersionUID:J = -0x5bbe7e979252d379L


# instance fields
.field public preLandingPageShowType:I


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;-><init>()V

    const/4 v0, 0x1

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$PreLandingPageTKInfo;->preLandingPageShowType:I

    return-void
.end method


# virtual methods
.method public isPlayEndShow()Z
    .locals 3

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$PreLandingPageTKInfo;->preLandingPageShowType:I

    const/4 v1, 0x1

    const/4 v2, 0x2

    if-eq v0, v2, :cond_1

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    return v1
.end method

.method public isSkipShow()Z
    .locals 3

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$PreLandingPageTKInfo;->preLandingPageShowType:I

    const/4 v1, 0x1

    const/4 v2, 0x3

    if-eq v0, v2, :cond_1

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    return v1
.end method
