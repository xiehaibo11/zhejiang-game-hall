.class public Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;
.super Ljava/lang/Object;


# annotations
.annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
.end annotation


# instance fields
.field private final mBase:Landroid/support/v4/app/FragmentTransaction;


# direct methods
.method public constructor <init>(Landroid/support/v4/app/FragmentTransaction;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    return-void
.end method


# virtual methods
.method public add(ILcom/kwad/sdk/api/core/fragment/KsFragment;)Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {p2}, Lcom/kwad/sdk/api/core/fragment/KsFragment;->getBase()Landroid/support/v4/app/Fragment;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Landroid/support/v4/app/FragmentTransaction;->add(ILandroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;

    return-object p0
.end method

.method public add(ILcom/kwad/sdk/api/core/fragment/KsFragment;Ljava/lang/String;)Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {p2}, Lcom/kwad/sdk/api/core/fragment/KsFragment;->getBase()Landroid/support/v4/app/Fragment;

    move-result-object p2

    invoke-virtual {v0, p1, p2, p3}, Landroid/support/v4/app/FragmentTransaction;->add(ILandroid/support/v4/app/Fragment;Ljava/lang/String;)Landroid/support/v4/app/FragmentTransaction;

    return-object p0
.end method

.method public add(Lcom/kwad/sdk/api/core/fragment/KsFragment;Ljava/lang/String;)Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {p1}, Lcom/kwad/sdk/api/core/fragment/KsFragment;->getBase()Landroid/support/v4/app/Fragment;

    move-result-object p1

    invoke-virtual {v0, p1, p2}, Landroid/support/v4/app/FragmentTransaction;->add(Landroid/support/v4/app/Fragment;Ljava/lang/String;)Landroid/support/v4/app/FragmentTransaction;

    return-object p0
.end method

.method public addSharedElement(Landroid/view/View;Ljava/lang/String;)Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {v0, p1, p2}, Landroid/support/v4/app/FragmentTransaction;->addSharedElement(Landroid/view/View;Ljava/lang/String;)Landroid/support/v4/app/FragmentTransaction;

    return-object p0
.end method

.method public addToBackStack(Ljava/lang/String;)Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/FragmentTransaction;->addToBackStack(Ljava/lang/String;)Landroid/support/v4/app/FragmentTransaction;

    return-object p0
.end method

.method public attach(Lcom/kwad/sdk/api/core/fragment/KsFragment;)Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {p1}, Lcom/kwad/sdk/api/core/fragment/KsFragment;->getBase()Landroid/support/v4/app/Fragment;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/support/v4/app/FragmentTransaction;->attach(Landroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;

    return-object p0
.end method

.method public commit()I
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {v0}, Landroid/support/v4/app/FragmentTransaction;->commit()I

    move-result v0

    return v0
.end method

.method public commitAllowingStateLoss()I
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {v0}, Landroid/support/v4/app/FragmentTransaction;->commitAllowingStateLoss()I

    move-result v0

    return v0
.end method

.method public commitNow()V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {v0}, Landroid/support/v4/app/FragmentTransaction;->commitNow()V

    return-void
.end method

.method public commitNowAllowingStateLoss()V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {v0}, Landroid/support/v4/app/FragmentTransaction;->commitNowAllowingStateLoss()V

    return-void
.end method

.method public detach(Lcom/kwad/sdk/api/core/fragment/KsFragment;)Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {p1}, Lcom/kwad/sdk/api/core/fragment/KsFragment;->getBase()Landroid/support/v4/app/Fragment;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/support/v4/app/FragmentTransaction;->detach(Landroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;

    return-object p0
.end method

.method public disallowAddToBackStack()Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {v0}, Landroid/support/v4/app/FragmentTransaction;->disallowAddToBackStack()Landroid/support/v4/app/FragmentTransaction;

    return-object p0
.end method

.method getBase()Landroid/support/v4/app/FragmentTransaction;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    return-object v0
.end method

.method public hide(Lcom/kwad/sdk/api/core/fragment/KsFragment;)Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {p1}, Lcom/kwad/sdk/api/core/fragment/KsFragment;->getBase()Landroid/support/v4/app/Fragment;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/support/v4/app/FragmentTransaction;->hide(Landroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;

    return-object p0
.end method

.method public isAddToBackStackAllowed()Z
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {v0}, Landroid/support/v4/app/FragmentTransaction;->isAddToBackStackAllowed()Z

    move-result v0

    return v0
.end method

.method public isEmpty()Z
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {v0}, Landroid/support/v4/app/FragmentTransaction;->isEmpty()Z

    move-result v0

    return v0
.end method

.method public remove(Lcom/kwad/sdk/api/core/fragment/KsFragment;)Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {p1}, Lcom/kwad/sdk/api/core/fragment/KsFragment;->getBase()Landroid/support/v4/app/Fragment;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/support/v4/app/FragmentTransaction;->remove(Landroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;

    return-object p0
.end method

.method public replace(ILcom/kwad/sdk/api/core/fragment/KsFragment;)Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {p2}, Lcom/kwad/sdk/api/core/fragment/KsFragment;->getBase()Landroid/support/v4/app/Fragment;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Landroid/support/v4/app/FragmentTransaction;->replace(ILandroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;

    return-object p0
.end method

.method public replace(ILcom/kwad/sdk/api/core/fragment/KsFragment;Ljava/lang/String;)Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {p2}, Lcom/kwad/sdk/api/core/fragment/KsFragment;->getBase()Landroid/support/v4/app/Fragment;

    move-result-object p2

    invoke-virtual {v0, p1, p2, p3}, Landroid/support/v4/app/FragmentTransaction;->replace(ILandroid/support/v4/app/Fragment;Ljava/lang/String;)Landroid/support/v4/app/FragmentTransaction;

    return-object p0
.end method

.method public runOnCommit(Ljava/lang/Runnable;)Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/FragmentTransaction;->runOnCommit(Ljava/lang/Runnable;)Landroid/support/v4/app/FragmentTransaction;

    return-object p0
.end method

.method public setAllowOptimization(Z)Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/FragmentTransaction;->setAllowOptimization(Z)Landroid/support/v4/app/FragmentTransaction;

    return-object p0
.end method

.method public setBreadCrumbShortTitle(I)Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/FragmentTransaction;->setBreadCrumbShortTitle(I)Landroid/support/v4/app/FragmentTransaction;

    return-object p0
.end method

.method public setBreadCrumbShortTitle(Ljava/lang/CharSequence;)Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/FragmentTransaction;->setBreadCrumbShortTitle(Ljava/lang/CharSequence;)Landroid/support/v4/app/FragmentTransaction;

    return-object p0
.end method

.method public setBreadCrumbTitle(I)Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/FragmentTransaction;->setBreadCrumbTitle(I)Landroid/support/v4/app/FragmentTransaction;

    return-object p0
.end method

.method public setBreadCrumbTitle(Ljava/lang/CharSequence;)Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/FragmentTransaction;->setBreadCrumbTitle(Ljava/lang/CharSequence;)Landroid/support/v4/app/FragmentTransaction;

    return-object p0
.end method

.method public setCustomAnimations(II)Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {v0, p1, p2}, Landroid/support/v4/app/FragmentTransaction;->setCustomAnimations(II)Landroid/support/v4/app/FragmentTransaction;

    return-object p0
.end method

.method public setCustomAnimations(IIII)Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {v0, p1, p2, p3, p4}, Landroid/support/v4/app/FragmentTransaction;->setCustomAnimations(IIII)Landroid/support/v4/app/FragmentTransaction;

    return-object p0
.end method

.method public setPrimaryNavigationFragment(Lcom/kwad/sdk/api/core/fragment/KsFragment;)Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {p1}, Lcom/kwad/sdk/api/core/fragment/KsFragment;->getBase()Landroid/support/v4/app/Fragment;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/support/v4/app/FragmentTransaction;->setPrimaryNavigationFragment(Landroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;

    return-object p0
.end method

.method public setReorderingAllowed(Z)Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/FragmentTransaction;->setReorderingAllowed(Z)Landroid/support/v4/app/FragmentTransaction;

    return-object p0
.end method

.method public setTransition(I)Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/FragmentTransaction;->setTransition(I)Landroid/support/v4/app/FragmentTransaction;

    return-object p0
.end method

.method public setTransitionStyle(I)Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/FragmentTransaction;->setTransitionStyle(I)Landroid/support/v4/app/FragmentTransaction;

    return-object p0
.end method

.method public show(Lcom/kwad/sdk/api/core/fragment/KsFragment;)Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->mBase:Landroid/support/v4/app/FragmentTransaction;

    invoke-virtual {p1}, Lcom/kwad/sdk/api/core/fragment/KsFragment;->getBase()Landroid/support/v4/app/Fragment;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/support/v4/app/FragmentTransaction;->show(Landroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;

    return-object p0
.end method
