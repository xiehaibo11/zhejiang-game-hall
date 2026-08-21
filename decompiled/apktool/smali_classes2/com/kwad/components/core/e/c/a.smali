.class public final Lcom/kwad/components/core/e/c/a;
.super Lcom/kwad/sdk/widget/KSFrameLayout;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/e/c/a$a;
    }
.end annotation


# instance fields
.field private final Jp:Lcom/kwad/components/core/e/c/b;

.field private final Jq:Lcom/kwad/components/core/e/c/b$b;

.field private Jr:Lcom/kwad/components/core/e/c/d;

.field private Js:Lcom/kwad/components/core/e/c/a$a;

.field private final mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private final mContext:Landroid/content/Context;

.field private mPresenter:Lcom/kwad/sdk/mvp/Presenter;

.field private final mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/kwad/components/core/e/c/b;Lcom/kwad/components/core/e/c/b$b;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/widget/KSFrameLayout;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/kwad/components/core/e/c/a;->mContext:Landroid/content/Context;

    iput-object p2, p0, Lcom/kwad/components/core/e/c/a;->Jp:Lcom/kwad/components/core/e/c/b;

    iput-object p3, p0, Lcom/kwad/components/core/e/c/a;->Jq:Lcom/kwad/components/core/e/c/b$b;

    iget-object p2, p3, Lcom/kwad/components/core/e/c/b$b;->adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object p2, p0, Lcom/kwad/components/core/e/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    sget p2, Lcom/kwad/sdk/R$layout;->ksad_download_dialog_layout:I

    invoke-static {p1, p2, p0}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_root_container:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/e/c/a;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object p1, p0, Lcom/kwad/components/core/e/c/a;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    const-string p2, "rootView is null"

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/core/e/c/a;->a(Landroid/view/View;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/components/core/e/c/a;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    sget p2, Lcom/kwad/sdk/R$id;->ksad_download_tips_web_card_webView:I

    invoke-virtual {p1, p2}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/core/webview/KsAdWebView;

    const-string p2, "webView is null"

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/core/e/c/a;->a(Landroid/view/View;Ljava/lang/String;)V

    return-void
.end method

.method private a(Landroid/view/View;Ljava/lang/String;)V
    .locals 2

    if-eqz p1, :cond_0

    return-void

    :cond_0
    new-instance p1, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "inflateView fail "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "\n--viewCount:"

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/kwad/components/core/e/c/a;->getChildCount()I

    move-result p2

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "\n--context:"

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/kwad/components/core/e/c/a;->mContext:Landroid/content/Context;

    invoke-virtual {p2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "\n--LayoutInflater context: "

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/kwad/components/core/e/c/a;->mContext:Landroid/content/Context;

    invoke-static {p2}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p2

    invoke-virtual {p2}, Landroid/view/LayoutInflater;->getContext()Landroid/content/Context;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "\n--classloader:"

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {p1, p2}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method private static ad()Lcom/kwad/sdk/mvp/Presenter;
    .locals 2

    new-instance v0, Lcom/kwad/sdk/mvp/Presenter;

    invoke-direct {v0}, Lcom/kwad/sdk/mvp/Presenter;-><init>()V

    new-instance v1, Lcom/kwad/components/core/e/c/e;

    invoke-direct {v1}, Lcom/kwad/components/core/e/c/e;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    return-object v0
.end method

.method private mX()Lcom/kwad/components/core/e/c/d;
    .locals 3

    new-instance v0, Lcom/kwad/components/core/e/c/d;

    invoke-direct {v0}, Lcom/kwad/components/core/e/c/d;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/core/e/c/a;->Jp:Lcom/kwad/components/core/e/c/b;

    iput-object v1, v0, Lcom/kwad/components/core/e/c/d;->Jp:Lcom/kwad/components/core/e/c/b;

    iget-object v1, p0, Lcom/kwad/components/core/e/c/a;->Jq:Lcom/kwad/components/core/e/c/b$b;

    iput-object v1, v0, Lcom/kwad/components/core/e/c/d;->Jq:Lcom/kwad/components/core/e/c/b$b;

    iget-object v1, p0, Lcom/kwad/components/core/e/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v1, v0, Lcom/kwad/components/core/e/c/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/core/e/c/a;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object v1, v0, Lcom/kwad/components/core/e/c/d;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iget-object v1, p0, Lcom/kwad/components/core/e/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_0

    new-instance v1, Lcom/kwad/components/core/e/d/c;

    iget-object v2, p0, Lcom/kwad/components/core/e/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v1, v2}, Lcom/kwad/components/core/e/d/c;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iput-object v1, v0, Lcom/kwad/components/core/e/c/d;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    :cond_0
    return-object v0
.end method


# virtual methods
.method public final aa()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/sdk/widget/KSFrameLayout;->aa()V

    invoke-direct {p0}, Lcom/kwad/components/core/e/c/a;->mX()Lcom/kwad/components/core/e/c/d;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/e/c/a;->Jr:Lcom/kwad/components/core/e/c/d;

    invoke-static {}, Lcom/kwad/components/core/e/c/a;->ad()Lcom/kwad/sdk/mvp/Presenter;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/e/c/a;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    iget-object v1, p0, Lcom/kwad/components/core/e/c/a;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->F(Landroid/view/View;)V

    iget-object v0, p0, Lcom/kwad/components/core/e/c/a;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    iget-object v1, p0, Lcom/kwad/components/core/e/c/a;->Jr:Lcom/kwad/components/core/e/c/d;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->k(Ljava/lang/Object;)V

    return-void
.end method

.method public final ab()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/sdk/widget/KSFrameLayout;->ab()V

    iget-object v0, p0, Lcom/kwad/components/core/e/c/a;->Jr:Lcom/kwad/components/core/e/c/d;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/e/c/d;->release()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/e/c/a;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/sdk/mvp/Presenter;->destroy()V

    :cond_1
    return-void
.end method

.method protected final onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/sdk/widget/KSFrameLayout;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    iget-object p1, p0, Lcom/kwad/components/core/e/c/a;->Js:Lcom/kwad/components/core/e/c/a$a;

    if-eqz p1, :cond_0

    invoke-interface {p1}, Lcom/kwad/components/core/e/c/a$a;->mY()V

    :cond_0
    return-void
.end method

.method public final setChangeListener(Lcom/kwad/components/core/e/c/a$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/e/c/a;->Js:Lcom/kwad/components/core/e/c/a$a;

    return-void
.end method
