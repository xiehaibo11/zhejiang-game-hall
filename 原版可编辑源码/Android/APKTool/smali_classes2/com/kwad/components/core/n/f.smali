.class public abstract Lcom/kwad/components/core/n/f;
.super Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;


# instance fields
.field private final mBackPressDelete:Lcom/kwad/sdk/l/a/a;

.field public mContext:Landroid/content/Context;

.field private final mPageMonitor:Lcom/kwad/components/core/n/a/a;

.field public mRootView:Landroid/view/View;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;-><init>()V

    new-instance v0, Lcom/kwad/components/core/n/a/a;

    invoke-direct {v0}, Lcom/kwad/components/core/n/a/a;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/n/f;->mPageMonitor:Lcom/kwad/components/core/n/a/a;

    new-instance v0, Lcom/kwad/sdk/l/a/a;

    invoke-direct {v0}, Lcom/kwad/sdk/l/a/a;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/n/f;->mBackPressDelete:Lcom/kwad/sdk/l/a/a;

    return-void
.end method


# virtual methods
.method public addBackPressable(Lcom/kwad/sdk/l/a/b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/n/f;->mBackPressDelete:Lcom/kwad/sdk/l/a/a;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/l/a/a;->addBackPressable(Lcom/kwad/sdk/l/a/b;)V

    return-void
.end method

.method public addBackPressable(Lcom/kwad/sdk/l/a/b;I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/n/f;->mBackPressDelete:Lcom/kwad/sdk/l/a/a;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/sdk/l/a/a;->addBackPressable(Lcom/kwad/sdk/l/a/b;I)V

    return-void
.end method

.method public findViewById(I)Landroid/view/View;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Landroid/view/View;",
            ">(I)TT;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/components/core/n/f;->mRootView:Landroid/view/View;

    invoke-virtual {v0, p1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    invoke-super {p0, p1}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->findViewById(I)Landroid/view/View;

    move-result-object p1

    return-object p1
.end method

.method public getIntent()Landroid/content/Intent;
    .locals 1

    invoke-super {p0}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->getIntent()Landroid/content/Intent;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/core/t/j;->c(Landroid/content/Intent;)V

    return-object v0
.end method

.method protected abstract getPageName()Ljava/lang/String;
.end method

.method public onBackPressed()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/n/f;->mBackPressDelete:Lcom/kwad/sdk/l/a/a;

    invoke-virtual {v0}, Lcom/kwad/sdk/l/a/a;->bP()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-super {p0}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onBackPressed()V

    :cond_0
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 3

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->hasInitFinish()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/core/n/f;->finish()V

    return-void

    :cond_0
    invoke-super {p0, p1}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onCreate(Landroid/os/Bundle;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/n/f;->getActivity()Landroid/app/Activity;

    move-result-object p1

    sget v0, Lcom/kwad/sdk/R$style;->Theme_AppCompat_Light_NoActionBar:I

    invoke-virtual {p1, v0}, Landroid/app/Activity;->setTheme(I)V

    invoke-virtual {p0}, Lcom/kwad/components/core/n/f;->getActivity()Landroid/app/Activity;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/m/l;->wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/core/n/f;->mContext:Landroid/content/Context;

    invoke-virtual {p0}, Lcom/kwad/components/core/n/f;->getIntent()Landroid/content/Intent;

    move-result-object p1

    const-wide/16 v0, 0x0

    if-eqz p1, :cond_1

    const-string v2, "key_start_time"

    invoke-virtual {p1, v2, v0, v1}, Landroid/content/Intent;->getLongExtra(Ljava/lang/String;J)J

    move-result-wide v0

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/core/n/f;->mPageMonitor:Lcom/kwad/components/core/n/a/a;

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Lcom/kwad/components/core/n/a/a;->at(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/components/core/n/f;->mPageMonitor:Lcom/kwad/components/core/n/a/a;

    invoke-virtual {p1, v0, v1}, Lcom/kwad/components/core/n/a/a;->y(J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->getIsExternal()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-static {p1}, Lcom/kwad/components/core/d/a;->b(Ljava/lang/Throwable;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/n/f;->finish()V

    return-void

    :cond_2
    throw p1
.end method

.method public onDestroy()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onDestroy()V

    invoke-virtual {p0}, Lcom/kwad/components/core/n/f;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/components/core/n/f;->getWindow()Landroid/view/Window;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/components/core/t/f;->destroyActivity(Landroid/content/Context;Landroid/view/Window;)V

    return-void
.end method

.method public onResume()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onResume()V

    iget-object v0, p0, Lcom/kwad/components/core/n/f;->mPageMonitor:Lcom/kwad/components/core/n/a/a;

    invoke-virtual {p0}, Lcom/kwad/components/core/n/f;->getActivity()Landroid/app/Activity;

    invoke-virtual {v0}, Lcom/kwad/components/core/n/a/a;->pz()V

    return-void
.end method

.method public removeBackPressable(Lcom/kwad/sdk/l/a/b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/n/f;->mBackPressDelete:Lcom/kwad/sdk/l/a/a;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/l/a/a;->removeBackPressable(Lcom/kwad/sdk/l/a/b;)V

    return-void
.end method

.method public setContentView(I)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/n/f;->mContext:Landroid/content/Context;

    const/4 v1, 0x0

    invoke-static {v0, p1, v1}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/core/n/f;->mRootView:Landroid/view/View;

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->setContentView(Landroid/view/View;)V

    return-void
.end method
