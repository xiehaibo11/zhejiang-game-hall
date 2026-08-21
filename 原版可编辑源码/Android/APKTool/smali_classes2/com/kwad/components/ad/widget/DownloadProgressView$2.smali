.class final Lcom/kwad/components/ad/widget/DownloadProgressView$2;
.super Lcom/kwad/sdk/core/download/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/widget/DownloadProgressView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Hu:Lcom/kwad/components/ad/widget/DownloadProgressView;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/widget/DownloadProgressView;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/widget/DownloadProgressView$2;->Hu:Lcom/kwad/components/ad/widget/DownloadProgressView;

    invoke-direct {p0}, Lcom/kwad/sdk/core/download/a/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDownloadFailed()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/widget/DownloadProgressView$2;->Hu:Lcom/kwad/components/ad/widget/DownloadProgressView;

    iget-object v0, v0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Hm:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/kwad/components/ad/widget/DownloadProgressView$2;->Hu:Lcom/kwad/components/ad/widget/DownloadProgressView;

    iget-object v1, v1, Lcom/kwad/components/ad/widget/DownloadProgressView;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/widget/DownloadProgressView$2;->Hu:Lcom/kwad/components/ad/widget/DownloadProgressView;

    iget-object v0, v0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Hm:Landroid/widget/TextView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/widget/DownloadProgressView$2;->Hu:Lcom/kwad/components/ad/widget/DownloadProgressView;

    iget-object v0, v0, Lcom/kwad/components/ad/widget/DownloadProgressView;->cX:Lcom/kwad/components/core/page/widget/TextProgressBar;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/page/widget/TextProgressBar;->setVisibility(I)V

    return-void
.end method

.method public final onDownloadFinished()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/widget/DownloadProgressView$2;->Hu:Lcom/kwad/components/ad/widget/DownloadProgressView;

    iget-object v0, v0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Hm:Landroid/widget/TextView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/widget/DownloadProgressView$2;->Hu:Lcom/kwad/components/ad/widget/DownloadProgressView;

    iget-object v0, v0, Lcom/kwad/components/ad/widget/DownloadProgressView;->cX:Lcom/kwad/components/core/page/widget/TextProgressBar;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/page/widget/TextProgressBar;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/widget/DownloadProgressView$2;->Hu:Lcom/kwad/components/ad/widget/DownloadProgressView;

    iget-object v0, v0, Lcom/kwad/components/ad/widget/DownloadProgressView;->cX:Lcom/kwad/components/core/page/widget/TextProgressBar;

    iget-object v1, p0, Lcom/kwad/components/ad/widget/DownloadProgressView$2;->Hu:Lcom/kwad/components/ad/widget/DownloadProgressView;

    iget-object v1, v1, Lcom/kwad/components/ad/widget/DownloadProgressView;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aM(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/widget/DownloadProgressView$2;->Hu:Lcom/kwad/components/ad/widget/DownloadProgressView;

    iget-object v2, v2, Lcom/kwad/components/ad/widget/DownloadProgressView;->cX:Lcom/kwad/components/core/page/widget/TextProgressBar;

    invoke-virtual {v2}, Lcom/kwad/components/core/page/widget/TextProgressBar;->getMax()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lcom/kwad/components/core/page/widget/TextProgressBar;->e(Ljava/lang/String;I)V

    return-void
.end method

.method public final onIdle()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/widget/DownloadProgressView$2;->Hu:Lcom/kwad/components/ad/widget/DownloadProgressView;

    iget-object v0, v0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Hm:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/kwad/components/ad/widget/DownloadProgressView$2;->Hu:Lcom/kwad/components/ad/widget/DownloadProgressView;

    iget-object v1, v1, Lcom/kwad/components/ad/widget/DownloadProgressView;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method public final onInstalled()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/widget/DownloadProgressView$2;->Hu:Lcom/kwad/components/ad/widget/DownloadProgressView;

    iget-object v0, v0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Hm:Landroid/widget/TextView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/widget/DownloadProgressView$2;->Hu:Lcom/kwad/components/ad/widget/DownloadProgressView;

    iget-object v0, v0, Lcom/kwad/components/ad/widget/DownloadProgressView;->cX:Lcom/kwad/components/core/page/widget/TextProgressBar;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/page/widget/TextProgressBar;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/widget/DownloadProgressView$2;->Hu:Lcom/kwad/components/ad/widget/DownloadProgressView;

    iget-object v0, v0, Lcom/kwad/components/ad/widget/DownloadProgressView;->cX:Lcom/kwad/components/core/page/widget/TextProgressBar;

    iget-object v1, p0, Lcom/kwad/components/ad/widget/DownloadProgressView$2;->Hu:Lcom/kwad/components/ad/widget/DownloadProgressView;

    iget-object v1, v1, Lcom/kwad/components/ad/widget/DownloadProgressView;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->U(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/widget/DownloadProgressView$2;->Hu:Lcom/kwad/components/ad/widget/DownloadProgressView;

    iget-object v2, v2, Lcom/kwad/components/ad/widget/DownloadProgressView;->cX:Lcom/kwad/components/core/page/widget/TextProgressBar;

    invoke-virtual {v2}, Lcom/kwad/components/core/page/widget/TextProgressBar;->getMax()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lcom/kwad/components/core/page/widget/TextProgressBar;->e(Ljava/lang/String;I)V

    return-void
.end method

.method public final onPaused(I)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/widget/DownloadProgressView$2;->Hu:Lcom/kwad/components/ad/widget/DownloadProgressView;

    iget-object v0, v0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Hm:Landroid/widget/TextView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/widget/DownloadProgressView$2;->Hu:Lcom/kwad/components/ad/widget/DownloadProgressView;

    iget-object v0, v0, Lcom/kwad/components/ad/widget/DownloadProgressView;->cX:Lcom/kwad/components/core/page/widget/TextProgressBar;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/page/widget/TextProgressBar;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/widget/DownloadProgressView$2;->Hu:Lcom/kwad/components/ad/widget/DownloadProgressView;

    iget-object v0, v0, Lcom/kwad/components/ad/widget/DownloadProgressView;->cX:Lcom/kwad/components/core/page/widget/TextProgressBar;

    invoke-static {}, Lcom/kwad/sdk/core/response/b/a;->Cz()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Lcom/kwad/components/core/page/widget/TextProgressBar;->e(Ljava/lang/String;I)V

    return-void
.end method

.method public final onProgressUpdate(I)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/widget/DownloadProgressView$2;->Hu:Lcom/kwad/components/ad/widget/DownloadProgressView;

    iget-object v0, v0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Hm:Landroid/widget/TextView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/widget/DownloadProgressView$2;->Hu:Lcom/kwad/components/ad/widget/DownloadProgressView;

    iget-object v0, v0, Lcom/kwad/components/ad/widget/DownloadProgressView;->cX:Lcom/kwad/components/core/page/widget/TextProgressBar;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/page/widget/TextProgressBar;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/widget/DownloadProgressView$2;->Hu:Lcom/kwad/components/ad/widget/DownloadProgressView;

    iget-object v0, v0, Lcom/kwad/components/ad/widget/DownloadProgressView;->cX:Lcom/kwad/components/core/page/widget/TextProgressBar;

    iget-object v1, p0, Lcom/kwad/components/ad/widget/DownloadProgressView$2;->Hu:Lcom/kwad/components/ad/widget/DownloadProgressView;

    invoke-static {v1}, Lcom/kwad/components/ad/widget/DownloadProgressView;->a(Lcom/kwad/components/ad/widget/DownloadProgressView;)Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/kwad/sdk/core/response/b/a;->l(ILjava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Lcom/kwad/components/core/page/widget/TextProgressBar;->e(Ljava/lang/String;I)V

    return-void
.end method
