.class final Lcom/kwad/components/ad/splashscreen/b$4;
.super Lcom/kwad/components/core/p/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/b;->a(Lcom/kwad/components/core/p/a/b;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic BL:J

.field final synthetic dU:Lcom/kwad/sdk/internal/api/SceneImpl;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/internal/api/SceneImpl;J)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/b$4;->dU:Lcom/kwad/sdk/internal/api/SceneImpl;

    iput-wide p2, p0, Lcom/kwad/components/ad/splashscreen/b$4;->BL:J

    invoke-direct {p0}, Lcom/kwad/components/core/p/c;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/response/model/AdResultData;)V
    .locals 5

    invoke-virtual {p1}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    invoke-static {}, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->kB()Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1}, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->b(Lcom/kwad/components/core/response/model/AdResultData;Z)I

    move-result v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "loadSplashScreenCache onSuccess:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " saved "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "KsAdSplashScreenLoadManager"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/components/ad/splashscreen/monitor/a;->kN()Lcom/kwad/components/ad/splashscreen/monitor/a;

    invoke-virtual {p1}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object v0

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    iget-wide v3, p0, Lcom/kwad/components/ad/splashscreen/b$4;->BL:J

    sub-long/2addr v1, v3

    iget-object v3, p0, Lcom/kwad/components/ad/splashscreen/b$4;->dU:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-virtual {v3}, Lcom/kwad/sdk/internal/api/SceneImpl;->getPosId()J

    move-result-wide v3

    invoke-static {v0, v1, v2, v3, v4}, Lcom/kwad/components/ad/splashscreen/monitor/a;->a(Ljava/util/List;JJ)V

    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object v0

    invoke-virtual {p1}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/o/a;->aB(I)V

    :cond_0
    return-void
.end method

.method public final onError(ILjava/lang/String;)V
    .locals 3

    invoke-static {}, Lcom/kwad/components/ad/splashscreen/monitor/a;->kN()Lcom/kwad/components/ad/splashscreen/monitor/a;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/b$4;->dU:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-virtual {v0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getPosId()J

    move-result-wide v0

    invoke-static {p1, p2, v0, v1}, Lcom/kwad/components/ad/splashscreen/monitor/a;->b(ILjava/lang/String;J)V

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "loadSplashScreenCache onError:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const/4 v2, 0x0

    aput-object p1, v1, v2

    const/4 p1, 0x1

    aput-object p2, v1, p1

    const-string p1, "code:%s__msg:%s"

    invoke-static {p1, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "KsAdSplashScreenLoadManager"

    invoke-static {p2, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
