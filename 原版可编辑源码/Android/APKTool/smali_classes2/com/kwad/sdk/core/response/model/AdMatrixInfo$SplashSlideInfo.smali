.class public Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashSlideInfo;
.super Lcom/kwad/sdk/core/response/a/a;

# interfaces
.implements Ljava/io/Serializable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/response/model/AdMatrixInfo;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "SplashSlideInfo"
.end annotation


# static fields
.field private static final serialVersionUID:J = -0x501a24ace7380f39L


# instance fields
.field public convertDistance:I

.field public downloadTexts:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$DownloadTexts;

.field public style:I

.field public subtitle:Ljava/lang/String;

.field public title:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$DownloadTexts;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$DownloadTexts;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashSlideInfo;->downloadTexts:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$DownloadTexts;

    return-void
.end method
