.class final Lcom/kwad/components/core/widget/FeedVideoView$1;
.super Lcom/kwad/sdk/core/download/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/widget/FeedVideoView;->getAppDownloadListener()Lcom/kwad/sdk/api/KsAppDownloadListener;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic YM:Lcom/kwad/components/core/widget/FeedVideoView;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/widget/FeedVideoView;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/widget/FeedVideoView$1;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-direct {p0}, Lcom/kwad/sdk/core/download/a/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDownloadFailed()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$1;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/FeedVideoView;->a(Lcom/kwad/components/core/widget/FeedVideoView;)Landroid/widget/TextView;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/widget/FeedVideoView$1;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    iget-object v1, v1, Lcom/kwad/components/core/widget/FeedVideoView;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method public final onDownloadFinished()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$1;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    iget-object v0, v0, Lcom/kwad/components/core/widget/FeedVideoView;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aM(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/widget/FeedVideoView$1;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v1}, Lcom/kwad/components/core/widget/FeedVideoView;->a(Lcom/kwad/components/core/widget/FeedVideoView;)Landroid/widget/TextView;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method public final onIdle()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$1;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/FeedVideoView;->a(Lcom/kwad/components/core/widget/FeedVideoView;)Landroid/widget/TextView;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/widget/FeedVideoView$1;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    iget-object v1, v1, Lcom/kwad/components/core/widget/FeedVideoView;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method public final onInstalled()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$1;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/FeedVideoView;->a(Lcom/kwad/components/core/widget/FeedVideoView;)Landroid/widget/TextView;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/widget/FeedVideoView$1;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    iget-object v1, v1, Lcom/kwad/components/core/widget/FeedVideoView;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->U(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method public final onPaused(I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$1;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/FeedVideoView;->a(Lcom/kwad/components/core/widget/FeedVideoView;)Landroid/widget/TextView;

    move-result-object v0

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->cw(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method public final onProgressUpdate(I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$1;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/FeedVideoView;->a(Lcom/kwad/components/core/widget/FeedVideoView;)Landroid/widget/TextView;

    move-result-object v0

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->cv(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method
