.class final Lcom/kwad/components/ad/f/b/f$2;
.super Lcom/kwad/sdk/core/download/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/f/b/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic nl:Lcom/kwad/components/ad/f/b/f;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/f/b/f;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/b/f$2;->nl:Lcom/kwad/components/ad/f/b/f;

    invoke-direct {p0}, Lcom/kwad/sdk/core/download/a/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDownloadFailed()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/f$2;->nl:Lcom/kwad/components/ad/f/b/f;

    invoke-static {v0}, Lcom/kwad/components/ad/f/b/f;->c(Lcom/kwad/components/ad/f/b/f;)Landroid/widget/TextView;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/f$2;->nl:Lcom/kwad/components/ad/f/b/f;

    invoke-static {v1}, Lcom/kwad/components/ad/f/b/f;->b(Lcom/kwad/components/ad/f/b/f;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method public final onDownloadFinished()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/f$2;->nl:Lcom/kwad/components/ad/f/b/f;

    invoke-static {v0}, Lcom/kwad/components/ad/f/b/f;->d(Lcom/kwad/components/ad/f/b/f;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aM(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/f$2;->nl:Lcom/kwad/components/ad/f/b/f;

    invoke-static {v1}, Lcom/kwad/components/ad/f/b/f;->c(Lcom/kwad/components/ad/f/b/f;)Landroid/widget/TextView;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method public final onIdle()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/f$2;->nl:Lcom/kwad/components/ad/f/b/f;

    invoke-static {v0}, Lcom/kwad/components/ad/f/b/f;->c(Lcom/kwad/components/ad/f/b/f;)Landroid/widget/TextView;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/f$2;->nl:Lcom/kwad/components/ad/f/b/f;

    invoke-static {v1}, Lcom/kwad/components/ad/f/b/f;->b(Lcom/kwad/components/ad/f/b/f;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method public final onInstalled()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/f$2;->nl:Lcom/kwad/components/ad/f/b/f;

    invoke-static {v0}, Lcom/kwad/components/ad/f/b/f;->c(Lcom/kwad/components/ad/f/b/f;)Landroid/widget/TextView;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/f$2;->nl:Lcom/kwad/components/ad/f/b/f;

    invoke-static {v1}, Lcom/kwad/components/ad/f/b/f;->b(Lcom/kwad/components/ad/f/b/f;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->U(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method public final onProgressUpdate(I)V
    .locals 0

    return-void
.end method
