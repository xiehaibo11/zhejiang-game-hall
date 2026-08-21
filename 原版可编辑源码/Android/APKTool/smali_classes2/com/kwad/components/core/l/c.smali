.class public abstract Lcom/kwad/components/core/l/c;
.super Lcom/kwad/sdk/widget/KSFrameLayout;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Lcom/kwad/sdk/mvp/a;",
        ">",
        "Lcom/kwad/sdk/widget/KSFrameLayout;"
    }
.end annotation


# instance fields
.field public Li:Lcom/kwad/sdk/mvp/a;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "TT;"
        }
    .end annotation
.end field

.field protected lJ:Landroid/view/ViewGroup;

.field protected mPresenter:Lcom/kwad/sdk/mvp/Presenter;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/core/l/c;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 p2, 0x0

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, v0}, Lcom/kwad/components/core/l/c;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    const/4 p3, 0x0

    invoke-direct {p0, p1, p2, p3}, Lcom/kwad/sdk/widget/KSFrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    invoke-virtual {p0}, Lcom/kwad/components/core/l/c;->kt()Z

    move-result p1

    if-nez p1, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/core/l/c;->od()V

    :cond_0
    return-void
.end method

.method private initMVP()V
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/core/l/c;->kw()Lcom/kwad/sdk/mvp/a;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/l/c;->Li:Lcom/kwad/sdk/mvp/a;

    iget-object v0, p0, Lcom/kwad/components/core/l/c;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    if-nez v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/core/l/c;->onCreatePresenter()Lcom/kwad/sdk/mvp/Presenter;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/l/c;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    iget-object v1, p0, Lcom/kwad/components/core/l/c;->lJ:Landroid/view/ViewGroup;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->F(Landroid/view/View;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/l/c;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    iget-object v1, p0, Lcom/kwad/components/core/l/c;->Li:Lcom/kwad/sdk/mvp/a;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->k(Ljava/lang/Object;)V

    return-void
.end method


# virtual methods
.method public aa()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/sdk/widget/KSFrameLayout;->aa()V

    invoke-direct {p0}, Lcom/kwad/components/core/l/c;->initMVP()V

    return-void
.end method

.method public ab()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/sdk/widget/KSFrameLayout;->ab()V

    iget-object v0, p0, Lcom/kwad/components/core/l/c;->Li:Lcom/kwad/sdk/mvp/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/sdk/mvp/a;->release()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/l/c;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/sdk/mvp/Presenter;->destroy()V

    :cond_1
    return-void
.end method

.method protected abstract getLayoutId()I
.end method

.method protected abstract initData()V
.end method

.method protected kt()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method protected abstract kv()V
.end method

.method protected abstract kw()Lcom/kwad/sdk/mvp/a;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TT;"
        }
    .end annotation
.end method

.method protected final od()V
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/core/l/c;->initData()V

    invoke-virtual {p0}, Lcom/kwad/components/core/l/c;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/components/core/l/c;->getLayoutId()I

    move-result v1

    invoke-static {v0, v1, p0}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/core/l/c;->lJ:Landroid/view/ViewGroup;

    invoke-virtual {p0}, Lcom/kwad/components/core/l/c;->kv()V

    return-void
.end method

.method public abstract onCreatePresenter()Lcom/kwad/sdk/mvp/Presenter;
.end method
