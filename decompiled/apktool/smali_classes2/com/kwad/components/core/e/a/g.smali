.class public final Lcom/kwad/components/core/e/a/g;
.super Lcom/kwad/sdk/widget/KSFrameLayout;


# instance fields
.field private final IU:Lcom/kwad/components/core/e/a/d;

.field private Jd:Lcom/kwad/components/core/e/a/a;

.field private final Jf:Lcom/kwad/components/core/e/a/d;

.field private final bG:Lcom/kwad/components/core/widget/a/b;

.field private final mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mPresenter:Lcom/kwad/sdk/mvp/Presenter;

.field private oh:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/e/a/d;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/widget/KSFrameLayout;-><init>(Landroid/content/Context;)V

    new-instance p1, Lcom/kwad/components/core/e/a/g$1;

    invoke-direct {p1, p0}, Lcom/kwad/components/core/e/a/g$1;-><init>(Lcom/kwad/components/core/e/a/g;)V

    iput-object p1, p0, Lcom/kwad/components/core/e/a/g;->Jf:Lcom/kwad/components/core/e/a/d;

    iput-object p2, p0, Lcom/kwad/components/core/e/a/g;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object p3, p0, Lcom/kwad/components/core/e/a/g;->IU:Lcom/kwad/components/core/e/a/d;

    new-instance p1, Lcom/kwad/components/core/widget/a/b;

    const/16 p2, 0x46

    invoke-direct {p1, p0, p2}, Lcom/kwad/components/core/widget/a/b;-><init>(Landroid/view/View;I)V

    iput-object p1, p0, Lcom/kwad/components/core/e/a/g;->bG:Lcom/kwad/components/core/widget/a/b;

    invoke-direct {p0}, Lcom/kwad/components/core/e/a/g;->initMVP()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/e/a/g;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/e/a/g;->en()V

    return-void
.end method

.method private en()V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/e/a/g;->oh:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/core/e/a/g;->oh:Z

    iget-object v0, p0, Lcom/kwad/components/core/e/a/g;->IU:Lcom/kwad/components/core/e/a/d;

    invoke-interface {v0}, Lcom/kwad/components/core/e/a/d;->mM()V

    return-void
.end method

.method private initMVP()V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/components/core/e/a/g;->mT()Lcom/kwad/components/core/e/a/a;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/e/a/g;->Jd:Lcom/kwad/components/core/e/a/a;

    invoke-static {}, Lcom/kwad/components/core/e/a/g;->onCreatePresenter()Lcom/kwad/sdk/mvp/Presenter;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/e/a/g;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/mvp/Presenter;->F(Landroid/view/View;)V

    iget-object v0, p0, Lcom/kwad/components/core/e/a/g;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    iget-object v1, p0, Lcom/kwad/components/core/e/a/g;->Jd:Lcom/kwad/components/core/e/a/a;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->k(Ljava/lang/Object;)V

    return-void
.end method

.method private mT()Lcom/kwad/components/core/e/a/a;
    .locals 2

    new-instance v0, Lcom/kwad/components/core/e/a/a;

    invoke-direct {v0}, Lcom/kwad/components/core/e/a/a;-><init>()V

    iput-object p0, v0, Lcom/kwad/components/core/e/a/a;->IS:Lcom/kwad/components/core/e/a/g;

    iget-object v1, p0, Lcom/kwad/components/core/e/a/g;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v1, v0, Lcom/kwad/components/core/e/a/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/core/e/a/g;->bG:Lcom/kwad/components/core/widget/a/b;

    iput-object v1, v0, Lcom/kwad/components/core/e/a/a;->IT:Lcom/kwad/components/core/widget/a/b;

    iget-object v1, p0, Lcom/kwad/components/core/e/a/g;->Jf:Lcom/kwad/components/core/e/a/d;

    iput-object v1, v0, Lcom/kwad/components/core/e/a/a;->IU:Lcom/kwad/components/core/e/a/d;

    return-object v0
.end method

.method private static onCreatePresenter()Lcom/kwad/sdk/mvp/Presenter;
    .locals 2

    new-instance v0, Lcom/kwad/sdk/mvp/Presenter;

    invoke-direct {v0}, Lcom/kwad/sdk/mvp/Presenter;-><init>()V

    new-instance v1, Lcom/kwad/components/core/e/a/f;

    invoke-direct {v1}, Lcom/kwad/components/core/e/a/f;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    return-object v0
.end method


# virtual methods
.method public final aa()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/sdk/widget/KSFrameLayout;->aa()V

    const-string v0, "InstalledActivateView"

    const-string v1, "onViewAttached"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/e/a/g;->bG:Lcom/kwad/components/core/widget/a/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/widget/a/b;->sy()V

    return-void
.end method

.method public final ab()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/sdk/widget/KSFrameLayout;->ab()V

    const-string v0, "InstalledActivateView"

    const-string v1, "onViewDetached"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/e/a/g;->bG:Lcom/kwad/components/core/widget/a/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/widget/a/b;->release()V

    iget-object v0, p0, Lcom/kwad/components/core/e/a/g;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    invoke-virtual {v0}, Lcom/kwad/sdk/mvp/Presenter;->destroy()V

    iget-object v0, p0, Lcom/kwad/components/core/e/a/g;->Jd:Lcom/kwad/components/core/e/a/a;

    invoke-virtual {v0}, Lcom/kwad/components/core/e/a/a;->release()V

    invoke-direct {p0}, Lcom/kwad/components/core/e/a/g;->en()V

    return-void
.end method
