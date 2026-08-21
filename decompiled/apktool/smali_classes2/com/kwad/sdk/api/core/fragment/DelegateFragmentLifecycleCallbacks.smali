.class Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;
.super Landroid/support/v4/app/FragmentManager$FragmentLifecycleCallbacks;


# instance fields
.field private final mBase:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;

.field private final mFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;)V
    .locals 0

    invoke-direct {p0}, Landroid/support/v4/app/FragmentManager$FragmentLifecycleCallbacks;-><init>()V

    iput-object p2, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mBase:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;

    iput-object p1, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    return-void
.end method


# virtual methods
.method public onFragmentActivityCreated(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;Landroid/os/Bundle;)V
    .locals 1

    invoke-super {p0, p1, p2, p3}, Landroid/support/v4/app/FragmentManager$FragmentLifecycleCallbacks;->onFragmentActivityCreated(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;Landroid/os/Bundle;)V

    instance-of p1, p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    if-eqz p1, :cond_0

    check-cast p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    invoke-interface {p2}, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;->getBase()Lcom/kwad/sdk/api/core/fragment/KsFragment;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mBase:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    invoke-virtual {p2, v0, p1, p3}, Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;->onFragmentActivityCreated(Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;Lcom/kwad/sdk/api/core/fragment/KsFragment;Landroid/os/Bundle;)V

    :cond_0
    return-void
.end method

.method public onFragmentAttached(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;Landroid/content/Context;)V
    .locals 1

    invoke-super {p0, p1, p2, p3}, Landroid/support/v4/app/FragmentManager$FragmentLifecycleCallbacks;->onFragmentAttached(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;Landroid/content/Context;)V

    instance-of p1, p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    if-eqz p1, :cond_0

    check-cast p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    invoke-interface {p2}, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;->getBase()Lcom/kwad/sdk/api/core/fragment/KsFragment;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mBase:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    invoke-virtual {p2, v0, p1, p3}, Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;->onFragmentAttached(Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;Lcom/kwad/sdk/api/core/fragment/KsFragment;Landroid/content/Context;)V

    :cond_0
    return-void
.end method

.method public onFragmentCreated(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;Landroid/os/Bundle;)V
    .locals 1

    invoke-super {p0, p1, p2, p3}, Landroid/support/v4/app/FragmentManager$FragmentLifecycleCallbacks;->onFragmentCreated(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;Landroid/os/Bundle;)V

    instance-of p1, p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    if-eqz p1, :cond_0

    check-cast p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    invoke-interface {p2}, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;->getBase()Lcom/kwad/sdk/api/core/fragment/KsFragment;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mBase:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    invoke-virtual {p2, v0, p1, p3}, Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;->onFragmentCreated(Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;Lcom/kwad/sdk/api/core/fragment/KsFragment;Landroid/os/Bundle;)V

    :cond_0
    return-void
.end method

.method public onFragmentDestroyed(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;)V
    .locals 1

    invoke-super {p0, p1, p2}, Landroid/support/v4/app/FragmentManager$FragmentLifecycleCallbacks;->onFragmentDestroyed(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;)V

    instance-of p1, p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    if-eqz p1, :cond_0

    check-cast p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    invoke-interface {p2}, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;->getBase()Lcom/kwad/sdk/api/core/fragment/KsFragment;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mBase:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    invoke-virtual {p2, v0, p1}, Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;->onFragmentDestroyed(Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;Lcom/kwad/sdk/api/core/fragment/KsFragment;)V

    :cond_0
    return-void
.end method

.method public onFragmentDetached(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;)V
    .locals 1

    invoke-super {p0, p1, p2}, Landroid/support/v4/app/FragmentManager$FragmentLifecycleCallbacks;->onFragmentDetached(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;)V

    instance-of p1, p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    if-eqz p1, :cond_0

    check-cast p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    invoke-interface {p2}, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;->getBase()Lcom/kwad/sdk/api/core/fragment/KsFragment;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mBase:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    invoke-virtual {p2, v0, p1}, Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;->onFragmentDetached(Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;Lcom/kwad/sdk/api/core/fragment/KsFragment;)V

    :cond_0
    return-void
.end method

.method public onFragmentPaused(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;)V
    .locals 1

    invoke-super {p0, p1, p2}, Landroid/support/v4/app/FragmentManager$FragmentLifecycleCallbacks;->onFragmentPaused(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;)V

    instance-of p1, p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    if-eqz p1, :cond_0

    check-cast p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    invoke-interface {p2}, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;->getBase()Lcom/kwad/sdk/api/core/fragment/KsFragment;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mBase:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    invoke-virtual {p2, v0, p1}, Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;->onFragmentPaused(Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;Lcom/kwad/sdk/api/core/fragment/KsFragment;)V

    :cond_0
    return-void
.end method

.method public onFragmentPreAttached(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;Landroid/content/Context;)V
    .locals 1

    invoke-super {p0, p1, p2, p3}, Landroid/support/v4/app/FragmentManager$FragmentLifecycleCallbacks;->onFragmentPreAttached(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;Landroid/content/Context;)V

    instance-of p1, p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    if-eqz p1, :cond_0

    check-cast p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    invoke-interface {p2}, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;->getBase()Lcom/kwad/sdk/api/core/fragment/KsFragment;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mBase:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    invoke-virtual {p2, v0, p1, p3}, Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;->onFragmentPreAttached(Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;Lcom/kwad/sdk/api/core/fragment/KsFragment;Landroid/content/Context;)V

    :cond_0
    return-void
.end method

.method public onFragmentPreCreated(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;Landroid/os/Bundle;)V
    .locals 1

    invoke-super {p0, p1, p2, p3}, Landroid/support/v4/app/FragmentManager$FragmentLifecycleCallbacks;->onFragmentPreCreated(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;Landroid/os/Bundle;)V

    instance-of p1, p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    if-eqz p1, :cond_0

    check-cast p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    invoke-interface {p2}, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;->getBase()Lcom/kwad/sdk/api/core/fragment/KsFragment;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mBase:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    invoke-virtual {p2, v0, p1, p3}, Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;->onFragmentPreCreated(Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;Lcom/kwad/sdk/api/core/fragment/KsFragment;Landroid/os/Bundle;)V

    :cond_0
    return-void
.end method

.method public onFragmentResumed(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;)V
    .locals 1

    invoke-super {p0, p1, p2}, Landroid/support/v4/app/FragmentManager$FragmentLifecycleCallbacks;->onFragmentResumed(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;)V

    instance-of p1, p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    if-eqz p1, :cond_0

    check-cast p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    invoke-interface {p2}, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;->getBase()Lcom/kwad/sdk/api/core/fragment/KsFragment;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mBase:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    invoke-virtual {p2, v0, p1}, Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;->onFragmentResumed(Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;Lcom/kwad/sdk/api/core/fragment/KsFragment;)V

    :cond_0
    return-void
.end method

.method public onFragmentSaveInstanceState(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;Landroid/os/Bundle;)V
    .locals 1

    invoke-super {p0, p1, p2, p3}, Landroid/support/v4/app/FragmentManager$FragmentLifecycleCallbacks;->onFragmentSaveInstanceState(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;Landroid/os/Bundle;)V

    instance-of p1, p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    if-eqz p1, :cond_0

    check-cast p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    invoke-interface {p2}, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;->getBase()Lcom/kwad/sdk/api/core/fragment/KsFragment;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mBase:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    invoke-virtual {p2, v0, p1, p3}, Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;->onFragmentSaveInstanceState(Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;Lcom/kwad/sdk/api/core/fragment/KsFragment;Landroid/os/Bundle;)V

    :cond_0
    return-void
.end method

.method public onFragmentStarted(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;)V
    .locals 1

    invoke-super {p0, p1, p2}, Landroid/support/v4/app/FragmentManager$FragmentLifecycleCallbacks;->onFragmentStarted(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;)V

    instance-of p1, p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    if-eqz p1, :cond_0

    check-cast p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    invoke-interface {p2}, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;->getBase()Lcom/kwad/sdk/api/core/fragment/KsFragment;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mBase:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    invoke-virtual {p2, v0, p1}, Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;->onFragmentStarted(Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;Lcom/kwad/sdk/api/core/fragment/KsFragment;)V

    :cond_0
    return-void
.end method

.method public onFragmentStopped(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;)V
    .locals 1

    invoke-super {p0, p1, p2}, Landroid/support/v4/app/FragmentManager$FragmentLifecycleCallbacks;->onFragmentStopped(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;)V

    instance-of p1, p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    if-eqz p1, :cond_0

    check-cast p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    invoke-interface {p2}, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;->getBase()Lcom/kwad/sdk/api/core/fragment/KsFragment;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mBase:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    invoke-virtual {p2, v0, p1}, Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;->onFragmentStopped(Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;Lcom/kwad/sdk/api/core/fragment/KsFragment;)V

    :cond_0
    return-void
.end method

.method public onFragmentViewCreated(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;Landroid/view/View;Landroid/os/Bundle;)V
    .locals 1

    invoke-super {p0, p1, p2, p3, p4}, Landroid/support/v4/app/FragmentManager$FragmentLifecycleCallbacks;->onFragmentViewCreated(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;Landroid/view/View;Landroid/os/Bundle;)V

    instance-of p1, p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    if-eqz p1, :cond_0

    check-cast p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    invoke-interface {p2}, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;->getBase()Lcom/kwad/sdk/api/core/fragment/KsFragment;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mBase:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    invoke-virtual {p2, v0, p1, p3, p4}, Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;->onFragmentViewCreated(Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;Lcom/kwad/sdk/api/core/fragment/KsFragment;Landroid/view/View;Landroid/os/Bundle;)V

    :cond_0
    return-void
.end method

.method public onFragmentViewDestroyed(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;)V
    .locals 1

    invoke-super {p0, p1, p2}, Landroid/support/v4/app/FragmentManager$FragmentLifecycleCallbacks;->onFragmentViewDestroyed(Landroid/support/v4/app/FragmentManager;Landroid/support/v4/app/Fragment;)V

    instance-of p1, p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    if-eqz p1, :cond_0

    check-cast p2, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    invoke-interface {p2}, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;->getBase()Lcom/kwad/sdk/api/core/fragment/KsFragment;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mBase:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateFragmentLifecycleCallbacks;->mFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    invoke-virtual {p2, v0, p1}, Lcom/kwad/sdk/api/core/fragment/KsFragmentManager$FragmentLifecycleCallbacks;->onFragmentViewDestroyed(Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;Lcom/kwad/sdk/api/core/fragment/KsFragment;)V

    :cond_0
    return-void
.end method
