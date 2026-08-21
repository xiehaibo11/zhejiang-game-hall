.class public final Lcom/kwad/components/ad/splashscreen/c/j;
.super Lcom/kwad/components/ad/splashscreen/c/e;


# instance fields
.field private Da:Lcom/kwad/components/core/offline/api/b/b;

.field private Db:J

.field private volatile Dc:Z

.field private final Dd:Ljava/lang/Runnable;

.field private De:Lcom/kwad/components/core/offline/api/b/a;

.field private gt:Lcom/kwad/components/core/webview/b/e/e;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/e;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/c/j;->Dc:Z

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/j$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/c/j$1;-><init>(Lcom/kwad/components/ad/splashscreen/c/j;)V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/j;->gt:Lcom/kwad/components/core/webview/b/e/e;

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/j$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/c/j$2;-><init>(Lcom/kwad/components/ad/splashscreen/c/j;)V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/j;->Dd:Ljava/lang/Runnable;

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/j$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/c/j$3;-><init>(Lcom/kwad/components/ad/splashscreen/c/j;)V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/j;->De:Lcom/kwad/components/core/offline/api/b/a;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/c/j;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/j;->lj()V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/splashscreen/c/j;)Ljava/lang/Runnable;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/j;->Dd:Ljava/lang/Runnable;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/splashscreen/c/j;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/splashscreen/c/j;->Dc:Z

    return p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/splashscreen/c/j;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/j;->li()V

    return-void
.end method

.method static synthetic e(Lcom/kwad/components/ad/splashscreen/c/j;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/c/j;->Db:J

    return-wide v0
.end method

.method private lh()V
    .locals 2

    const-class v0, Lcom/kwad/components/core/offline/api/b/b;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/offline/api/b/b;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/j;->Da:Lcom/kwad/components/core/offline/api/b/b;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/j;->De:Lcom/kwad/components/core/offline/api/b/a;

    invoke-interface {v0, v1}, Lcom/kwad/components/core/offline/api/b/b;->a(Lcom/kwad/components/core/offline/api/b/a;)V

    :cond_0
    return-void
.end method

.method private li()V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/c/j;->Dc:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/c/j;->Dc:Z

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/j;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->cN(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_1

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/j$4;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/c/j$4;-><init>(Lcom/kwad/components/ad/splashscreen/c/j;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->postOnUiThread(Ljava/lang/Runnable;)V

    :cond_1
    return-void
.end method

.method private lj()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/j;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->dk(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/j;->CM:Lcom/kwad/components/ad/splashscreen/h;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/kwad/components/ad/splashscreen/h;->Ci:Z

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/j$5;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/c/j$5;-><init>(Lcom/kwad/components/ad/splashscreen/c/j;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->postOnUiThread(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/j;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->cN(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/j;->Dd:Ljava/lang/Runnable;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/j;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/b;->cT(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v1

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/utils/bj;->runOnUiThreadDelay(Ljava/lang/Runnable;J)V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/j;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->a(Lcom/kwad/components/core/webview/b/e/e;)V

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/j;->lh()V

    return-void
.end method

.method public final onCreate()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->onCreate()V

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/splashscreen/c/j;->Db:J

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/j;->Da:Lcom/kwad/components/core/offline/api/b/b;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/j;->De:Lcom/kwad/components/core/offline/api/b/a;

    invoke-interface {v0, v1}, Lcom/kwad/components/core/offline/api/b/b;->b(Lcom/kwad/components/core/offline/api/b/a;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/j;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->cN(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/j;->Dd:Ljava/lang/Runnable;

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->b(Ljava/lang/Runnable;)V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/j;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->b(Lcom/kwad/components/core/webview/b/e/e;)V

    :cond_1
    return-void
.end method
