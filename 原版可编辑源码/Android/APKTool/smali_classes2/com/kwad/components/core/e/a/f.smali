.class public final Lcom/kwad/components/core/e/a/f;
.super Lcom/kwad/sdk/mvp/Presenter;

# interfaces
.implements Lcom/kwad/components/core/webview/b/i;
.implements Lcom/kwad/sdk/core/h/c;


# instance fields
.field private IT:Lcom/kwad/components/core/widget/a/b;

.field private Jd:Lcom/kwad/components/core/e/a/a;

.field private cG:Lcom/kwad/components/core/webview/jshandler/am;

.field private lp:Lcom/kwad/components/core/webview/b/h;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/mvp/Presenter;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/e/a/f;)Lcom/kwad/components/core/e/a/a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/e/a/f;->Jd:Lcom/kwad/components/core/e/a/a;

    return-object p0
.end method

.method private ak(Z)V
    .locals 0

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/core/e/a/f;->Jd:Lcom/kwad/components/core/e/a/a;

    invoke-virtual {p1}, Lcom/kwad/components/core/e/a/a;->mK()V

    :cond_0
    new-instance p1, Lcom/kwad/components/core/e/a/f$2;

    invoke-direct {p1, p0}, Lcom/kwad/components/core/e/a/f$2;-><init>(Lcom/kwad/components/core/e/a/f;)V

    invoke-static {p1}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/b/a/o;)V
    .locals 0

    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/b/a/p;)V
    .locals 0

    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/b/b/t;)V
    .locals 0

    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/jshandler/am;)V
    .locals 1

    iput-object p1, p0, Lcom/kwad/components/core/e/a/f;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    iget-object v0, p0, Lcom/kwad/components/core/e/a/f;->Jd:Lcom/kwad/components/core/e/a/a;

    iput-object p1, v0, Lcom/kwad/components/core/e/a/a;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    return-void
.end method

.method public final a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V
    .locals 0

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/webview/d/b/a;)V
    .locals 1

    const-string p1, "InstalledActivatePresenter"

    const-string v0, "onAdClicked"

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/e/a/f;->ak(Z)V

    return-void
.end method

.method public final aK()V
    .locals 2

    const-string v0, "InstalledActivatePresenter"

    const-string v1, "onPageVisible"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/e/a/f;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rD()V

    :cond_0
    return-void
.end method

.method public final aL()V
    .locals 2

    const-string v0, "InstalledActivatePresenter"

    const-string v1, "onPageInvisible"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/e/a/f;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rE()V

    :cond_0
    return-void
.end method

.method public final ah()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/sdk/mvp/Presenter;->ah()V

    invoke-virtual {p0}, Lcom/kwad/components/core/e/a/f;->Gk()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/e/a/a;

    iput-object v0, p0, Lcom/kwad/components/core/e/a/f;->Jd:Lcom/kwad/components/core/e/a/a;

    iget-object v0, v0, Lcom/kwad/components/core/e/a/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v0, p0, Lcom/kwad/components/core/e/a/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, p0, Lcom/kwad/components/core/e/a/f;->Jd:Lcom/kwad/components/core/e/a/a;

    iget-object v0, v0, Lcom/kwad/components/core/e/a/a;->IT:Lcom/kwad/components/core/widget/a/b;

    iput-object v0, p0, Lcom/kwad/components/core/e/a/f;->IT:Lcom/kwad/components/core/widget/a/b;

    new-instance v0, Lcom/kwad/components/core/e/a/f$1;

    invoke-virtual {p0}, Lcom/kwad/components/core/e/a/f;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/kwad/components/core/e/a/f$1;-><init>(Lcom/kwad/components/core/e/a/f;Landroid/content/Context;)V

    iput-object v0, p0, Lcom/kwad/components/core/e/a/f;->lp:Lcom/kwad/components/core/webview/b/h;

    iget-object v1, p0, Lcom/kwad/components/core/e/a/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v2, 0x0

    invoke-virtual {v0, v2, v1, p0}, Lcom/kwad/components/core/webview/b/h;->a(Landroid/app/Activity;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/webview/b/i;)V

    iget-object v0, p0, Lcom/kwad/components/core/e/a/f;->IT:Lcom/kwad/components/core/widget/a/b;

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/widget/a/b;->a(Lcom/kwad/sdk/core/h/c;)V

    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/b/b/m;)V
    .locals 0

    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/jshandler/t$a;)V
    .locals 4

    invoke-virtual {p0}, Lcom/kwad/components/core/e/a/f;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/d/a/a;->aH(Landroid/content/Context;)F

    move-result v0

    invoke-virtual {p0}, Lcom/kwad/components/core/e/a/f;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/d/a/a;->getScreenHeight(Landroid/content/Context;)I

    move-result v1

    int-to-float v1, v1

    invoke-virtual {p0}, Lcom/kwad/components/core/e/a/f;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/d/a/a;->getScreenWidth(Landroid/content/Context;)I

    move-result v2

    int-to-float v2, v2

    div-float/2addr v2, v0

    const/high16 v3, 0x3f000000    # 0.5f

    add-float/2addr v2, v3

    float-to-int v2, v2

    iput v2, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->width:I

    div-float/2addr v1, v0

    add-float/2addr v1, v3

    float-to-int v0, v1

    iput v0, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->height:I

    return-void
.end method

.method public final b(Lcom/kwad/sdk/commercial/model/WebCloseStatus;)V
    .locals 0

    const/4 p1, 0x0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/e/a/f;->ak(Z)V

    return-void
.end method

.method public final cc()V
    .locals 2

    const-string v0, "InstalledActivatePresenter"

    const-string v1, "onTkLoadFailed"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x1

    invoke-direct {p0, v0}, Lcom/kwad/components/core/e/a/f;->ak(Z)V

    return-void
.end method

.method public final eh()V
    .locals 2

    const-string v0, "InstalledActivatePresenter"

    const-string v1, "onTkLoadSuccess"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/e/a/f;->Jd:Lcom/kwad/components/core/e/a/a;

    invoke-virtual {v0}, Lcom/kwad/components/core/e/a/a;->bt()V

    return-void
.end method

.method public final em()V
    .locals 0

    return-void
.end method

.method public final getTKContainer()Landroid/widget/FrameLayout;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/e/a/f;->Jd:Lcom/kwad/components/core/e/a/a;

    iget-object v0, v0, Lcom/kwad/components/core/e/a/a;->IS:Lcom/kwad/components/core/e/a/g;

    return-object v0
.end method

.method public final getTkTemplateId()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/e/a/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v1, "ksad-installed-activate-card"

    invoke-static {v1, v0}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getTouchCoordsView()Lcom/kwad/sdk/widget/e;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/e/a/f;->Jd:Lcom/kwad/components/core/e/a/a;

    iget-object v0, v0, Lcom/kwad/components/core/e/a/a;->IS:Lcom/kwad/components/core/e/a/g;

    return-object v0
.end method

.method public final onUnbind()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/sdk/mvp/Presenter;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/core/e/a/f;->lp:Lcom/kwad/components/core/webview/b/h;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/b/h;->jv()V

    iget-object v0, p0, Lcom/kwad/components/core/e/a/f;->IT:Lcom/kwad/components/core/widget/a/b;

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/widget/a/b;->b(Lcom/kwad/sdk/core/h/c;)V

    return-void
.end method
