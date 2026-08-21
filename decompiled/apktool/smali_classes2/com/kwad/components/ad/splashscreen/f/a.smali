.class public abstract Lcom/kwad/components/ad/splashscreen/f/a;
.super Lcom/kwad/sdk/core/download/a/a;


# instance fields
.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mContext:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/download/a/a;-><init>()V

    iput-object p2, p0, Lcom/kwad/components/ad/splashscreen/f/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p2

    iput-object p2, p0, Lcom/kwad/components/ad/splashscreen/f/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/f/a;->mContext:Landroid/content/Context;

    return-void
.end method

.method private ab(I)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/f/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->dd(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/f/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/f/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0, v1, p1}, Lcom/kwad/components/ad/splashscreen/d;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/response/model/AdInfo;I)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/f/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->dj(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/f/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0, p1}, Lcom/kwad/components/ad/splashscreen/d;->c(Lcom/kwad/sdk/core/response/model/AdInfo;I)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/f/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0, p1}, Lcom/kwad/components/ad/splashscreen/d;->a(Lcom/kwad/sdk/core/response/model/AdInfo;I)Ljava/lang/String;

    move-result-object p1

    :goto_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/splashscreen/f/a;->aa(Ljava/lang/String;)V

    :cond_2
    return-void
.end method


# virtual methods
.method protected abstract aa(Ljava/lang/String;)V
.end method

.method public onDownloadFailed()V
    .locals 1

    const/4 v0, 0x7

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/splashscreen/f/a;->ab(I)V

    return-void
.end method

.method public onDownloadFinished()V
    .locals 1

    const/16 v0, 0x8

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/splashscreen/f/a;->ab(I)V

    return-void
.end method

.method public onIdle()V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/splashscreen/f/a;->ab(I)V

    return-void
.end method

.method public onInstalled()V
    .locals 1

    const/16 v0, 0xc

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/splashscreen/f/a;->ab(I)V

    return-void
.end method

.method public final onPaused(I)V
    .locals 0

    const/4 p1, 0x4

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/splashscreen/f/a;->ab(I)V

    return-void
.end method

.method public onProgressUpdate(I)V
    .locals 0

    const/4 p1, 0x2

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/splashscreen/f/a;->ab(I)V

    return-void
.end method

.method public final setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/f/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-void
.end method
