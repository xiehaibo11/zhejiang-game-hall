.class final Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$1;
.super Lcom/kwad/sdk/core/download/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->initView()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic MG:Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;

.field final synthetic se:Lcom/kwad/sdk/core/response/model/AdInfo;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;Lcom/kwad/sdk/core/response/model/AdInfo;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$1;->MG:Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;

    iput-object p2, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$1;->se:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-direct {p0}, Lcom/kwad/sdk/core/download/a/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDownloadFailed()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$1;->MG:Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->access$000(Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;)Lcom/kwad/sdk/widget/DownloadProgressBar;

    move-result-object v0

    const/high16 v1, 0x42c80000    # 100.0f

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/DownloadProgressBar;->setProgress(F)V

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$1;->MG:Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->access$000(Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;)Lcom/kwad/sdk/widget/DownloadProgressBar;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$1;->se:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/DownloadProgressBar;->setText(Ljava/lang/String;)V

    return-void
.end method

.method public final onDownloadFinished()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$1;->MG:Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->access$000(Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;)Lcom/kwad/sdk/widget/DownloadProgressBar;

    move-result-object v0

    const/high16 v1, 0x42c80000    # 100.0f

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/DownloadProgressBar;->setProgress(F)V

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$1;->MG:Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->access$000(Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;)Lcom/kwad/sdk/widget/DownloadProgressBar;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$1;->MG:Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;

    invoke-static {v1}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->access$100(Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aM(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/DownloadProgressBar;->setText(Ljava/lang/String;)V

    return-void
.end method

.method public final onIdle()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$1;->MG:Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->access$000(Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;)Lcom/kwad/sdk/widget/DownloadProgressBar;

    move-result-object v0

    const/high16 v1, 0x42c80000    # 100.0f

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/DownloadProgressBar;->setProgress(F)V

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$1;->MG:Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->access$000(Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;)Lcom/kwad/sdk/widget/DownloadProgressBar;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$1;->se:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/DownloadProgressBar;->setText(Ljava/lang/String;)V

    return-void
.end method

.method public final onInstalled()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$1;->MG:Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->access$000(Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;)Lcom/kwad/sdk/widget/DownloadProgressBar;

    move-result-object v0

    const/high16 v1, 0x42c80000    # 100.0f

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/DownloadProgressBar;->setProgress(F)V

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$1;->MG:Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->access$000(Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;)Lcom/kwad/sdk/widget/DownloadProgressBar;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$1;->se:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->U(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/DownloadProgressBar;->setText(Ljava/lang/String;)V

    return-void
.end method

.method public final onPaused(I)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$1;->MG:Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->access$000(Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;)Lcom/kwad/sdk/widget/DownloadProgressBar;

    move-result-object v0

    int-to-float v1, p1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/DownloadProgressBar;->setProgress(F)V

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$1;->MG:Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->access$000(Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;)Lcom/kwad/sdk/widget/DownloadProgressBar;

    move-result-object v0

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->cw(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/widget/DownloadProgressBar;->setText(Ljava/lang/String;)V

    return-void
.end method

.method public final onProgressUpdate(I)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$1;->MG:Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->access$000(Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;)Lcom/kwad/sdk/widget/DownloadProgressBar;

    move-result-object v0

    int-to-float v1, p1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/DownloadProgressBar;->setProgress(F)V

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$1;->MG:Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->access$000(Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;)Lcom/kwad/sdk/widget/DownloadProgressBar;

    move-result-object v0

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->cv(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/widget/DownloadProgressBar;->setText(Ljava/lang/String;)V

    return-void
.end method
