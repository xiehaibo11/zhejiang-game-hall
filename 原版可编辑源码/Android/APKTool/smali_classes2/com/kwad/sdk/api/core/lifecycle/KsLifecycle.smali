.class public Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;,
        Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeEvent;
    }
.end annotation


# instance fields
.field private mBase:Landroid/arch/lifecycle/Lifecycle;


# direct methods
.method public constructor <init>(Landroid/arch/lifecycle/Lifecycle;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle;->mBase:Landroid/arch/lifecycle/Lifecycle;

    return-void
.end method


# virtual methods
.method public addObserver(Lcom/kwad/sdk/api/core/lifecycle/KsLifecycleObserver;)V
    .locals 1

    instance-of v0, p1, Lcom/kwad/sdk/api/core/lifecycle/KsGenericLifecycleObserver;

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$1;

    invoke-direct {v0, p0, p1}, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$1;-><init>(Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle;Lcom/kwad/sdk/api/core/lifecycle/KsLifecycleObserver;)V

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycleObserver;->setBase(Landroid/arch/lifecycle/LifecycleObserver;)V

    iget-object p1, p0, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle;->mBase:Landroid/arch/lifecycle/Lifecycle;

    invoke-virtual {p1, v0}, Landroid/arch/lifecycle/Lifecycle;->addObserver(Landroid/arch/lifecycle/LifecycleObserver;)V

    :cond_0
    return-void
.end method

.method public getCurrentState()Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle;->mBase:Landroid/arch/lifecycle/Lifecycle;

    invoke-virtual {v0}, Landroid/arch/lifecycle/Lifecycle;->getCurrentState()Landroid/arch/lifecycle/Lifecycle$State;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;->createFrom(Landroid/arch/lifecycle/Lifecycle$State;)Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle$KsLifeState;

    move-result-object v0

    return-object v0
.end method

.method public removeObserver(Lcom/kwad/sdk/api/core/lifecycle/KsLifecycleObserver;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle;->mBase:Landroid/arch/lifecycle/Lifecycle;

    invoke-virtual {p1}, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycleObserver;->getBase()Landroid/arch/lifecycle/LifecycleObserver;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/arch/lifecycle/Lifecycle;->removeObserver(Landroid/arch/lifecycle/LifecycleObserver;)V

    return-void
.end method
