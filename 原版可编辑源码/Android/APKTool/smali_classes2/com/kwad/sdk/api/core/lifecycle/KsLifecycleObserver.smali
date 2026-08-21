.class public Lcom/kwad/sdk/api/core/lifecycle/KsLifecycleObserver;
.super Ljava/lang/Object;


# instance fields
.field mBase:Landroid/arch/lifecycle/LifecycleObserver;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getBase()Landroid/arch/lifecycle/LifecycleObserver;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycleObserver;->mBase:Landroid/arch/lifecycle/LifecycleObserver;

    return-object v0
.end method

.method public setBase(Landroid/arch/lifecycle/LifecycleObserver;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycleObserver;->mBase:Landroid/arch/lifecycle/LifecycleObserver;

    return-void
.end method
