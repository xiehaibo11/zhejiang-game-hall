.class public final Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;
.super Lcom/kwad/components/ad/reward/presenter/a;


# instance fields
.field private gt:Lcom/kwad/components/core/webview/b/e/e;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mContext:Landroid/content/Context;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c$1;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;->gt:Lcom/kwad/components/core/webview/b/e/e;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;-><init>()V

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/b;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/b;-><init>()V

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/g;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/presenter/f/g;-><init>()V

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method private io()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->d(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->a(Lcom/kwad/components/core/webview/b/e/e;)V

    :cond_0
    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mContext:Landroid/content/Context;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;->mContext:Landroid/content/Context;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;->io()V

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->b(Lcom/kwad/components/core/webview/b/e/e;)V

    return-void
.end method
