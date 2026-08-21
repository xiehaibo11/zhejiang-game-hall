.class final Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp$1;
.super Lcom/kwad/sdk/core/download/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;->getAppDownloadListener()Lcom/kwad/sdk/api/KsAppDownloadListener;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic dl:Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp$1;->dl:Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;

    invoke-direct {p0}, Lcom/kwad/sdk/core/download/a/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDownloadFailed()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp$1;->dl:Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;

    invoke-static {v0}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;->b(Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;)Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp$1;->dl:Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;

    invoke-static {v1}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;->a(Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp$1;->dl:Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;

    invoke-static {v2}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;->b(Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;)Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;->getMax()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;->e(Ljava/lang/String;I)V

    return-void
.end method

.method public final onDownloadFinished()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp$1;->dl:Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;

    invoke-static {v0}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;->b(Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;)Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp$1;->dl:Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;

    invoke-static {v1}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;->c(Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aM(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp$1;->dl:Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;

    invoke-static {v2}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;->b(Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;)Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;->getMax()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;->e(Ljava/lang/String;I)V

    return-void
.end method

.method public final onIdle()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp$1;->dl:Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;

    invoke-static {v0}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;->b(Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;)Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp$1;->dl:Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;

    invoke-static {v1}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;->a(Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp$1;->dl:Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;

    invoke-static {v2}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;->b(Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;)Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;->getMax()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;->e(Ljava/lang/String;I)V

    return-void
.end method

.method public final onInstalled()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp$1;->dl:Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;

    invoke-static {v0}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;->b(Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;)Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp$1;->dl:Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;

    invoke-static {v1}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;->a(Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->U(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp$1;->dl:Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;

    invoke-static {v2}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;->b(Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;)Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;->getMax()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;->e(Ljava/lang/String;I)V

    return-void
.end method

.method public final onPaused(I)V
    .locals 2

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/download/a/a;->onPaused(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp$1;->dl:Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;

    invoke-static {v0}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;->b(Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;)Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

    move-result-object v0

    invoke-static {}, Lcom/kwad/sdk/core/response/b/a;->Cz()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;->e(Ljava/lang/String;I)V

    return-void
.end method

.method public final onProgressUpdate(I)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp$1;->dl:Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;

    invoke-static {v0}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;->b(Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;)Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "%"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;->e(Ljava/lang/String;I)V

    return-void
.end method
