.class public abstract Lcom/kwad/components/ad/splashscreen/c/i;
.super Lcom/kwad/components/ad/splashscreen/c/e;


# static fields
.field private static jM:J = 0x190L


# instance fields
.field private CY:Lcom/kwad/components/ad/splashscreen/f/a;

.field private dP:Landroid/os/Vibrator;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/e;-><init>()V

    return-void
.end method

.method private lf()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/i;->CM:Lcom/kwad/components/ad/splashscreen/h;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/i;->CY:Lcom/kwad/components/ad/splashscreen/f/a;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/i$1;

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/i;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/i;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v2, v2, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0, p0, v1, v2}, Lcom/kwad/components/ad/splashscreen/c/i$1;-><init>(Lcom/kwad/components/ad/splashscreen/c/i;Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/i;->CY:Lcom/kwad/components/ad/splashscreen/f/a;

    goto :goto_0

    :cond_0
    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/i;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/f/a;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    :goto_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/i;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-eqz v0, :cond_1

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/i;->CY:Lcom/kwad/components/ad/splashscreen/f/a;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/c;->b(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    :cond_1
    return-void
.end method


# virtual methods
.method protected abstract Z(Ljava/lang/String;)V
.end method

.method public ah()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/i;->CM:Lcom/kwad/components/ad/splashscreen/h;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/i;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/i;->lc()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/i;->la()V

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/i;->lf()V

    :cond_1
    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/i;->lb()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/i;->ld()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/i;->le()V

    return-void
.end method

.method protected abstract initView()V
.end method

.method protected abstract la()V
.end method

.method protected abstract lb()V
.end method

.method protected abstract lc()V
.end method

.method protected abstract ld()V
.end method

.method protected abstract le()V
.end method

.method protected final lg()V
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/i;->getContext()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    const-string v1, "vibrator"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/Vibrator;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/i;->dP:Landroid/os/Vibrator;

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/i;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/i;->dP:Landroid/os/Vibrator;

    invoke-static {v0, v1}, Lcom/kwad/sdk/utils/bj;->a(Landroid/content/Context;Landroid/os/Vibrator;)V

    return-void
.end method

.method public final onCreate()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->onCreate()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/i;->initView()V

    return-void
.end method

.method public onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->onUnbind()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/i;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/i;->dP:Landroid/os/Vibrator;

    invoke-static {v0, v1}, Lcom/kwad/sdk/utils/bj;->b(Landroid/content/Context;Landroid/os/Vibrator;)V

    return-void
.end method
