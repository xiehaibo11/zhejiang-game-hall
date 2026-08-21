.class public Lcom/kwad/sdk/core/imageloader/ImageLoaderPerfUtil;
.super Ljava/lang/Object;


# static fields
.field private static final TAG:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-class v0, Lcom/kwad/sdk/core/imageloader/ImageLoaderPerfUtil;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/core/imageloader/ImageLoaderPerfUtil;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/imageloader/ImageLoaderPerfUtil;->TAG:Ljava/lang/String;

    return-object v0
.end method

.method public static getInfo()Lcom/kwad/sdk/core/imageloader/ImageLoaderInfo;
    .locals 3

    new-instance v0, Lcom/kwad/sdk/core/imageloader/ImageLoaderInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/imageloader/ImageLoaderInfo;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/utils/y;->IG()I

    move-result v1

    iput v1, v0, Lcom/kwad/sdk/core/imageloader/ImageLoaderInfo;->totalCount:I

    invoke-static {}, Lcom/kwad/sdk/utils/y;->IH()I

    move-result v1

    iput v1, v0, Lcom/kwad/sdk/core/imageloader/ImageLoaderInfo;->successCount:I

    invoke-static {}, Lcom/kwad/sdk/utils/y;->II()I

    move-result v1

    iput v1, v0, Lcom/kwad/sdk/core/imageloader/ImageLoaderInfo;->failedCount:I

    invoke-static {}, Lcom/kwad/sdk/utils/y;->IF()D

    move-result-wide v1

    iput-wide v1, v0, Lcom/kwad/sdk/core/imageloader/ImageLoaderInfo;->duration:D

    return-object v0
.end method

.method public static report()V
    .locals 1

    new-instance v0, Lcom/kwad/sdk/core/imageloader/ImageLoaderPerfUtil$1;

    invoke-direct {v0}, Lcom/kwad/sdk/core/imageloader/ImageLoaderPerfUtil$1;-><init>()V

    invoke-static {v0}, Lcom/kwad/sdk/utils/g;->execute(Ljava/lang/Runnable;)V

    return-void
.end method
