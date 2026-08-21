.class public abstract Lcom/kwad/components/core/n/c;
.super Lcom/kwad/sdk/api/proxy/IActivityProxy;


# static fields
.field private static final FRAGMENTS_TAG:Ljava/lang/String; = "android:fragments"

.field public static final KEY_START_TIME:Ljava/lang/String; = "key_start_time"


# instance fields
.field private final mBackPressDelete:Lcom/kwad/sdk/l/a/a;

.field public mContext:Landroid/content/Context;

.field private mHasCallFinish:Z

.field private final mPageMonitor:Lcom/kwad/components/core/n/a/a;

.field public mRootView:Landroid/view/View;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/api/proxy/IActivityProxy;-><init>()V

    new-instance v0, Lcom/kwad/components/core/n/a/a;

    invoke-direct {v0}, Lcom/kwad/components/core/n/a/a;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/n/c;->mPageMonitor:Lcom/kwad/components/core/n/a/a;

    new-instance v0, Lcom/kwad/sdk/l/a/a;

    invoke-direct {v0}, Lcom/kwad/sdk/l/a/a;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/n/c;->mBackPressDelete:Lcom/kwad/sdk/l/a/a;

    return-void
.end method

.method private disableFragmentRestore(Landroid/os/Bundle;)V
    .locals 1

    if-eqz p1, :cond_0

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->getIsExternal()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "android:fragments"

    invoke-virtual {p1, v0}, Landroid/os/Bundle;->remove(Ljava/lang/String;)V

    :cond_0
    return-void
.end method


# virtual methods
.method public addBackPressable(Lcom/kwad/sdk/l/a/b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/n/c;->mBackPressDelete:Lcom/kwad/sdk/l/a/a;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/l/a/a;->addBackPressable(Lcom/kwad/sdk/l/a/b;)V

    return-void
.end method

.method public addBackPressable(Lcom/kwad/sdk/l/a/b;I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/n/c;->mBackPressDelete:Lcom/kwad/sdk/l/a/a;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/sdk/l/a/a;->addBackPressable(Lcom/kwad/sdk/l/a/b;I)V

    return-void
.end method

.method protected checkIntentData(Landroid/content/Intent;)Z
    .locals 0

    const/4 p1, 0x1

    return p1
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

    iget-object v0, p0, Lcom/kwad/components/core/n/c;->mRootView:Landroid/view/View;

    invoke-virtual {v0, p1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    invoke-super {p0, p1}, Lcom/kwad/sdk/api/proxy/IActivityProxy;->findViewById(I)Landroid/view/View;

    move-result-object p1

    return-object p1
.end method

.method public finish()V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/n/c;->mHasCallFinish:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/core/n/c;->mHasCallFinish:Z

    invoke-super {p0}, Lcom/kwad/sdk/api/proxy/IActivityProxy;->finish()V

    return-void
.end method

.method public getIntent()Landroid/content/Intent;
    .locals 1

    invoke-super {p0}, Lcom/kwad/sdk/api/proxy/IActivityProxy;->getIntent()Landroid/content/Intent;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/core/t/j;->c(Landroid/content/Intent;)V

    return-object v0
.end method

.method protected abstract getLayoutId()I
.end method

.method protected abstract getPageName()Ljava/lang/String;
.end method

.method protected abstract initData()V
.end method

.method protected abstract initView()V
.end method

.method protected needAdaptionScreen()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method protected onActivityCreate()V
    .locals 0

    return-void
.end method

.method public onBackPressed()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/n/c;->mBackPressDelete:Lcom/kwad/sdk/l/a/a;

    invoke-virtual {v0}, Lcom/kwad/sdk/l/a/a;->bP()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-super {p0}, Lcom/kwad/sdk/api/proxy/IActivityProxy;->onBackPressed()V

    :cond_0
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 4

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->hasInitFinish()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/core/n/c;->finish()V

    return-void

    :cond_0
    invoke-super {p0, p1}, Lcom/kwad/sdk/api/proxy/IActivityProxy;->onCreate(Landroid/os/Bundle;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/n/c;->getActivity()Landroid/app/Activity;

    move-result-object v0

    const v1, 0x103000e

    invoke-virtual {v0, v1}, Landroid/app/Activity;->setTheme(I)V

    invoke-virtual {p0}, Lcom/kwad/components/core/n/c;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/m/l;->wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/n/c;->mContext:Landroid/content/Context;

    invoke-virtual {p0}, Lcom/kwad/components/core/n/c;->getIntent()Landroid/content/Intent;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/n/c;->checkIntentData(Landroid/content/Intent;)Z

    move-result v1

    if-nez v1, :cond_1

    invoke-virtual {p0}, Lcom/kwad/components/core/n/c;->finish()V

    return-void

    :cond_1
    invoke-virtual {p0}, Lcom/kwad/components/core/n/c;->getWindow()Landroid/view/Window;

    move-result-object v1

    const/high16 v2, 0x1000000

    invoke-virtual {v1, v2, v2}, Landroid/view/Window;->setFlags(II)V

    const-wide/16 v1, 0x0

    if-eqz v0, :cond_2

    const-string v3, "key_start_time"

    invoke-virtual {v0, v3, v1, v2}, Landroid/content/Intent;->getLongExtra(Ljava/lang/String;J)J

    move-result-wide v1

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/core/n/c;->mPageMonitor:Lcom/kwad/components/core/n/a/a;

    invoke-virtual {p0}, Lcom/kwad/components/core/n/c;->getPageName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Lcom/kwad/components/core/n/a/a;->at(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/n/c;->mPageMonitor:Lcom/kwad/components/core/n/a/a;

    invoke-virtual {v0, v1, v2}, Lcom/kwad/components/core/n/a/a;->y(J)V

    invoke-virtual {p0}, Lcom/kwad/components/core/n/c;->getLayoutId()I

    move-result v0

    if-eqz v0, :cond_3

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/n/c;->setContentView(I)V

    :cond_3
    invoke-virtual {p0}, Lcom/kwad/components/core/n/c;->initData()V

    invoke-virtual {p0}, Lcom/kwad/components/core/n/c;->initView()V

    invoke-static {}, Lcom/kwad/components/core/n/h;->py()Lcom/kwad/components/core/n/h;

    move-result-object v0

    invoke-virtual {v0, p0, p1}, Lcom/kwad/components/core/n/h;->a(Lcom/kwad/components/core/n/c;Landroid/os/Bundle;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/n/c;->onActivityCreate()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->getIsExternal()Z

    move-result v0

    if-eqz v0, :cond_4

    invoke-static {p1}, Lcom/kwad/components/core/d/a;->b(Ljava/lang/Throwable;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/n/c;->finish()V

    return-void

    :cond_4
    throw p1
.end method

.method public onDestroy()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/sdk/api/proxy/IActivityProxy;->onDestroy()V

    invoke-static {}, Lcom/kwad/components/core/n/h;->py()Lcom/kwad/components/core/n/h;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/n/h;->g(Lcom/kwad/components/core/n/c;)V

    return-void
.end method

.method public onPause()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/sdk/api/proxy/IActivityProxy;->onPause()V

    invoke-static {}, Lcom/kwad/components/core/n/h;->py()Lcom/kwad/components/core/n/h;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/n/h;->f(Lcom/kwad/components/core/n/c;)V

    return-void
.end method

.method public onPreCreate(Landroid/os/Bundle;)V
    .locals 3

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/proxy/IActivityProxy;->onPreCreate(Landroid/os/Bundle;)V

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->getIsExternal()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/core/n/c;->needAdaptionScreen()Z

    move-result v0

    if-eqz v0, :cond_0

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1b

    if-gt v0, v1, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/core/n/c;->getActivity()Landroid/app/Activity;

    move-result-object v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    invoke-static {v0, v2, v1, v2}, Lcom/kwad/components/core/t/d;->a(Landroid/app/Activity;IZZ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/components/core/d/a;->b(Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    invoke-direct {p0, p1}, Lcom/kwad/components/core/n/c;->disableFragmentRestore(Landroid/os/Bundle;)V

    return-void
.end method

.method public onResume()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/sdk/api/proxy/IActivityProxy;->onResume()V

    iget-object v0, p0, Lcom/kwad/components/core/n/c;->mPageMonitor:Lcom/kwad/components/core/n/a/a;

    invoke-virtual {p0}, Lcom/kwad/components/core/n/c;->getActivity()Landroid/app/Activity;

    invoke-virtual {v0}, Lcom/kwad/components/core/n/a/a;->pz()V

    invoke-static {}, Lcom/kwad/components/core/n/h;->py()Lcom/kwad/components/core/n/h;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/n/h;->e(Lcom/kwad/components/core/n/c;)V

    return-void
.end method

.method public onSaveInstanceState(Landroid/os/Bundle;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/proxy/IActivityProxy;->onSaveInstanceState(Landroid/os/Bundle;)V

    invoke-direct {p0, p1}, Lcom/kwad/components/core/n/c;->disableFragmentRestore(Landroid/os/Bundle;)V

    return-void
.end method

.method public removeBackPressable(Lcom/kwad/sdk/l/a/b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/n/c;->mBackPressDelete:Lcom/kwad/sdk/l/a/a;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/l/a/a;->removeBackPressable(Lcom/kwad/sdk/l/a/b;)V

    return-void
.end method

.method public setContentView(I)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/n/c;->mContext:Landroid/content/Context;

    const/4 v1, 0x0

    invoke-static {v0, p1, v1}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/core/n/c;->mRootView:Landroid/view/View;

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/proxy/IActivityProxy;->setContentView(Landroid/view/View;)V

    return-void
.end method
