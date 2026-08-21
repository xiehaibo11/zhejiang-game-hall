.class final Lcom/kwad/sdk/core/imageloader/ImageLoaderPerfUtil$1;
.super Lcom/kwad/sdk/utils/aw;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/imageloader/ImageLoaderPerfUtil;->report()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/utils/aw;-><init>()V

    return-void
.end method


# virtual methods
.method public final doTask()V
    .locals 4

    invoke-static {}, Lcom/kwad/sdk/core/imageloader/ImageLoaderPerfUtil;->getInfo()Lcom/kwad/sdk/core/imageloader/ImageLoaderInfo;

    move-result-object v0

    iget v1, v0, Lcom/kwad/sdk/core/imageloader/ImageLoaderInfo;->totalCount:I

    if-nez v1, :cond_0

    invoke-static {}, Lcom/kwad/sdk/core/imageloader/ImageLoaderPerfUtil;->access$000()Ljava/lang/String;

    move-result-object v0

    const-string v1, "info.totalCount == 0"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/core/imageloader/ImageLoaderPerfUtil;->access$000()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "ImageLoaderInfo:"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/kwad/sdk/core/imageloader/ImageLoaderInfo;->toJson()Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/kwad/sdk/core/imageloader/ImageLoaderInfo;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->y(Lorg/json/JSONObject;)V

    return-void
.end method
