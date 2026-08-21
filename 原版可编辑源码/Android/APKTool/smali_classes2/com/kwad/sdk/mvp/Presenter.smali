.class public Lcom/kwad/sdk/mvp/Presenter;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/mvp/Presenter$PresenterState;
    }
.end annotation


# instance fields
.field private final aDf:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/mvp/Presenter;",
            ">;"
        }
    .end annotation
.end field

.field private aDg:Ljava/lang/Object;

.field private aDh:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

.field private mRootView:Landroid/view/View;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/mvp/Presenter;->aDf:Ljava/util/List;

    sget-object v0, Lcom/kwad/sdk/mvp/Presenter$PresenterState;->INIT:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    iput-object v0, p0, Lcom/kwad/sdk/mvp/Presenter;->aDh:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    return-void
.end method

.method private Gi()Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/mvp/Presenter;->aDh:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    invoke-virtual {v0}, Lcom/kwad/sdk/mvp/Presenter$PresenterState;->index()I

    move-result v0

    sget-object v1, Lcom/kwad/sdk/mvp/Presenter$PresenterState;->CREATE:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    invoke-virtual {v1}, Lcom/kwad/sdk/mvp/Presenter$PresenterState;->index()I

    move-result v1

    if-lt v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private b(Lcom/kwad/sdk/mvp/Presenter;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/mvp/Presenter;->aDh:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    invoke-virtual {v0}, Lcom/kwad/sdk/mvp/Presenter$PresenterState;->index()I

    move-result v0

    sget-object v1, Lcom/kwad/sdk/mvp/Presenter$PresenterState;->UNBIND:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    invoke-virtual {v1}, Lcom/kwad/sdk/mvp/Presenter$PresenterState;->index()I

    move-result v1

    if-ge v0, v1, :cond_2

    iget-object v0, p1, Lcom/kwad/sdk/mvp/Presenter;->aDh:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    invoke-virtual {v0}, Lcom/kwad/sdk/mvp/Presenter$PresenterState;->index()I

    move-result v0

    sget-object v1, Lcom/kwad/sdk/mvp/Presenter$PresenterState;->UNBIND:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    invoke-virtual {v1}, Lcom/kwad/sdk/mvp/Presenter$PresenterState;->index()I

    move-result v1

    if-lt v0, v1, :cond_0

    goto :goto_0

    :cond_0
    invoke-direct {p0}, Lcom/kwad/sdk/mvp/Presenter;->Gi()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-direct {p1}, Lcom/kwad/sdk/mvp/Presenter;->Gi()Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/mvp/Presenter;->mRootView:Landroid/view/View;

    if-eqz v0, :cond_1

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/mvp/Presenter;->F(Landroid/view/View;)V

    :cond_1
    invoke-direct {p0}, Lcom/kwad/sdk/mvp/Presenter;->isBound()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-direct {p1}, Lcom/kwad/sdk/mvp/Presenter;->Gi()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-direct {p1}, Lcom/kwad/sdk/mvp/Presenter;->isBound()Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/mvp/Presenter;->aDg:Ljava/lang/Object;

    if-eqz v0, :cond_2

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/mvp/Presenter;->k(Ljava/lang/Object;)V

    :cond_2
    :goto_0
    return-void
.end method

.method static synthetic c(Lcom/kwad/sdk/mvp/Presenter;)Ljava/util/List;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/mvp/Presenter;->aDf:Ljava/util/List;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/sdk/mvp/Presenter;)Landroid/view/View;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/mvp/Presenter;->mRootView:Landroid/view/View;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/sdk/mvp/Presenter;)Ljava/lang/Object;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/mvp/Presenter;->aDg:Ljava/lang/Object;

    return-object p0
.end method

.method private isBound()Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/mvp/Presenter;->aDh:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    sget-object v1, Lcom/kwad/sdk/mvp/Presenter$PresenterState;->BIND:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method


# virtual methods
.method public final F(Landroid/view/View;)V
    .locals 1

    sget-object v0, Lcom/kwad/sdk/mvp/Presenter$PresenterState;->CREATE:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    iput-object v0, p0, Lcom/kwad/sdk/mvp/Presenter;->aDh:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    iput-object p1, p0, Lcom/kwad/sdk/mvp/Presenter;->mRootView:Landroid/view/View;

    invoke-virtual {p0}, Lcom/kwad/sdk/mvp/Presenter;->onCreate()V

    iget-object p1, p0, Lcom/kwad/sdk/mvp/Presenter;->aDh:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    invoke-virtual {p1, p0}, Lcom/kwad/sdk/mvp/Presenter$PresenterState;->performCallState(Lcom/kwad/sdk/mvp/Presenter;)V

    return-void
.end method

.method public final Gj()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/mvp/Presenter;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/mvp/Presenter;->aDf:Ljava/util/List;

    return-object v0
.end method

.method public final Gk()Ljava/lang/Object;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/mvp/Presenter;->aDg:Ljava/lang/Object;

    return-object v0
.end method

.method public final a(Lcom/kwad/sdk/mvp/Presenter;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/mvp/Presenter;->aDf:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    invoke-direct {p0}, Lcom/kwad/sdk/mvp/Presenter;->Gi()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-direct {p1}, Lcom/kwad/sdk/mvp/Presenter;->Gi()Z

    move-result p1

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/kwad/sdk/mvp/Presenter;->mRootView:Landroid/view/View;

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/mvp/Presenter;->F(Landroid/view/View;)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/kwad/sdk/mvp/Presenter;Z)V
    .locals 0

    iget-object p2, p0, Lcom/kwad/sdk/mvp/Presenter;->aDf:Ljava/util/List;

    invoke-interface {p2, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :try_start_0
    invoke-direct {p0, p1}, Lcom/kwad/sdk/mvp/Presenter;->b(Lcom/kwad/sdk/mvp/Presenter;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/service/c;->gatherException(Ljava/lang/Throwable;)V

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    return-void
.end method

.method protected ah()V
    .locals 0

    return-void
.end method

.method public final destroy()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/mvp/Presenter;->aDh:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    sget-object v1, Lcom/kwad/sdk/mvp/Presenter$PresenterState;->BIND:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    if-ne v0, v1, :cond_0

    invoke-virtual {p0}, Lcom/kwad/sdk/mvp/Presenter;->lI()V

    :cond_0
    sget-object v0, Lcom/kwad/sdk/mvp/Presenter$PresenterState;->DESTROY:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    iput-object v0, p0, Lcom/kwad/sdk/mvp/Presenter;->aDh:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    invoke-virtual {p0}, Lcom/kwad/sdk/mvp/Presenter;->onDestroy()V

    iget-object v0, p0, Lcom/kwad/sdk/mvp/Presenter;->aDh:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/mvp/Presenter$PresenterState;->performCallState(Lcom/kwad/sdk/mvp/Presenter;)V

    return-void
.end method

.method public final findViewById(I)Landroid/view/View;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Landroid/view/View;",
            ">(I)TT;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/mvp/Presenter;->mRootView:Landroid/view/View;

    invoke-virtual {v0, p1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    return-object p1
.end method

.method public final getActivity()Landroid/app/Activity;
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/sdk/mvp/Presenter;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/m/l;->dr(Landroid/content/Context;)Landroid/app/Activity;

    move-result-object v0

    return-object v0
.end method

.method public final getContext()Landroid/content/Context;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/mvp/Presenter;->mRootView:Landroid/view/View;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    :cond_0
    invoke-virtual {v0}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object v0

    return-object v0
.end method

.method public final getRootView()Landroid/view/View;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/mvp/Presenter;->mRootView:Landroid/view/View;

    return-object v0
.end method

.method public final k(Ljava/lang/Object;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/mvp/Presenter;->aDh:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    sget-object v1, Lcom/kwad/sdk/mvp/Presenter$PresenterState;->INIT:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    if-eq v0, v1, :cond_0

    sget-object v0, Lcom/kwad/sdk/mvp/Presenter$PresenterState;->DESTROY:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/mvp/Presenter;->aDh:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    sget-object v1, Lcom/kwad/sdk/mvp/Presenter$PresenterState;->BIND:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    if-ne v0, v1, :cond_1

    invoke-virtual {p0}, Lcom/kwad/sdk/mvp/Presenter;->lI()V

    :cond_1
    sget-object v0, Lcom/kwad/sdk/mvp/Presenter$PresenterState;->BIND:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    iput-object v0, p0, Lcom/kwad/sdk/mvp/Presenter;->aDh:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    iput-object p1, p0, Lcom/kwad/sdk/mvp/Presenter;->aDg:Ljava/lang/Object;

    invoke-virtual {p0}, Lcom/kwad/sdk/mvp/Presenter;->ah()V

    iget-object p1, p0, Lcom/kwad/sdk/mvp/Presenter;->aDh:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    invoke-virtual {p1, p0}, Lcom/kwad/sdk/mvp/Presenter$PresenterState;->performCallState(Lcom/kwad/sdk/mvp/Presenter;)V

    return-void
.end method

.method public final lI()V
    .locals 1

    sget-object v0, Lcom/kwad/sdk/mvp/Presenter$PresenterState;->UNBIND:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    iput-object v0, p0, Lcom/kwad/sdk/mvp/Presenter;->aDh:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    invoke-virtual {p0}, Lcom/kwad/sdk/mvp/Presenter;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/sdk/mvp/Presenter;->aDh:Lcom/kwad/sdk/mvp/Presenter$PresenterState;

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/mvp/Presenter$PresenterState;->performCallState(Lcom/kwad/sdk/mvp/Presenter;)V

    return-void
.end method

.method protected onCreate()V
    .locals 0

    return-void
.end method

.method protected onDestroy()V
    .locals 0

    return-void
.end method

.method protected onUnbind()V
    .locals 0

    return-void
.end method
