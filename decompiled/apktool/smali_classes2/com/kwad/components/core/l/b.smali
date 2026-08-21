.class public abstract Lcom/kwad/components/core/l/b;
.super Lcom/kwad/components/core/n/c;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Lcom/kwad/components/core/l/a;",
        ">",
        "Lcom/kwad/components/core/n/c;"
    }
.end annotation


# instance fields
.field public mCallerContext:Lcom/kwad/components/core/l/a;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "TT;"
        }
    .end annotation
.end field

.field protected mPresenter:Lcom/kwad/sdk/mvp/Presenter;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/n/c;-><init>()V

    return-void
.end method

.method private notifyOnCreate()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/l/b;->mCallerContext:Lcom/kwad/components/core/l/a;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, v0, Lcom/kwad/components/core/l/a;->Lg:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/core/l/a/a;

    invoke-interface {v1}, Lcom/kwad/components/core/l/a/a;->ge()V

    goto :goto_0

    :cond_1
    return-void
.end method

.method private notifyOnDestroy()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/l/b;->mCallerContext:Lcom/kwad/components/core/l/a;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, v0, Lcom/kwad/components/core/l/a;->Lg:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/core/l/a/a;

    invoke-interface {v1}, Lcom/kwad/components/core/l/a/a;->gf()V

    goto :goto_0

    :cond_1
    return-void
.end method

.method private notifyOnPause()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/l/b;->mCallerContext:Lcom/kwad/components/core/l/a;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, v0, Lcom/kwad/components/core/l/a;->Lg:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/core/l/a/a;

    invoke-interface {v1, p0}, Lcom/kwad/components/core/l/a/a;->d(Lcom/kwad/components/core/n/c;)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method private notifyOnResume()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/l/b;->mCallerContext:Lcom/kwad/components/core/l/a;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, v0, Lcom/kwad/components/core/l/a;->Lg:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/core/l/a/a;

    invoke-interface {v1, p0}, Lcom/kwad/components/core/l/a/a;->c(Lcom/kwad/components/core/n/c;)V

    goto :goto_0

    :cond_1
    return-void
.end method


# virtual methods
.method public initMVP()V
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/core/l/b;->onCreateCallerContext()Lcom/kwad/components/core/l/a;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/l/b;->mCallerContext:Lcom/kwad/components/core/l/a;

    iget-object v0, p0, Lcom/kwad/components/core/l/b;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    if-nez v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/core/l/b;->onCreatePresenter()Lcom/kwad/sdk/mvp/Presenter;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/l/b;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    iget-object v1, p0, Lcom/kwad/components/core/l/b;->mRootView:Landroid/view/View;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->F(Landroid/view/View;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/l/b;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    iget-object v1, p0, Lcom/kwad/components/core/l/b;->mCallerContext:Lcom/kwad/components/core/l/a;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->k(Ljava/lang/Object;)V

    return-void
.end method

.method public onActivityCreate()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/core/n/c;->onActivityCreate()V

    invoke-virtual {p0}, Lcom/kwad/components/core/l/b;->initMVP()V

    invoke-direct {p0}, Lcom/kwad/components/core/l/b;->notifyOnCreate()V

    return-void
.end method

.method protected abstract onCreateCallerContext()Lcom/kwad/components/core/l/a;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TT;"
        }
    .end annotation
.end method

.method protected abstract onCreatePresenter()Lcom/kwad/sdk/mvp/Presenter;
.end method

.method public onDestroy()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/n/c;->onDestroy()V

    invoke-direct {p0}, Lcom/kwad/components/core/l/b;->notifyOnDestroy()V

    iget-object v0, p0, Lcom/kwad/components/core/l/b;->mCallerContext:Lcom/kwad/components/core/l/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/l/a;->release()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/l/b;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/sdk/mvp/Presenter;->destroy()V

    :cond_1
    return-void
.end method

.method public onPause()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/core/n/c;->onPause()V

    invoke-direct {p0}, Lcom/kwad/components/core/l/b;->notifyOnPause()V

    return-void
.end method

.method public onResume()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/core/n/c;->onResume()V

    invoke-direct {p0}, Lcom/kwad/components/core/l/b;->notifyOnResume()V

    return-void
.end method
