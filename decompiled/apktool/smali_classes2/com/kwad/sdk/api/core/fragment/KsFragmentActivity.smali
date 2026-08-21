.class public Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;
.super Landroid/support/v4/app/FragmentActivity;


# annotations
.annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
.end annotation


# instance fields
.field private mFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Landroid/support/v4/app/FragmentActivity;-><init>()V

    return-void
.end method


# virtual methods
.method public final getSupportFragmentManager()Landroid/support/v4/app/FragmentManager;
    .locals 1

    invoke-super {p0}, Landroid/support/v4/app/FragmentActivity;->getSupportFragmentManager()Landroid/support/v4/app/FragmentManager;

    move-result-object v0

    return-object v0
.end method

.method public final getSupportFragmentManager2()Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->mFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    invoke-super {p0}, Landroid/support/v4/app/FragmentActivity;->getSupportFragmentManager()Landroid/support/v4/app/FragmentManager;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;-><init>(Landroid/support/v4/app/FragmentManager;)V

    iput-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->mFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->mFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    return-object v0
.end method

.method public final onAttachFragment(Landroid/support/v4/app/Fragment;)V
    .locals 1

    invoke-super {p0, p1}, Landroid/support/v4/app/FragmentActivity;->onAttachFragment(Landroid/support/v4/app/Fragment;)V

    instance-of v0, p1, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    if-eqz v0, :cond_0

    check-cast p1, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    invoke-interface {p1}, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;->getBase()Lcom/kwad/sdk/api/core/fragment/KsFragment;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->onAttachFragment(Lcom/kwad/sdk/api/core/fragment/KsFragment;)V

    :cond_0
    return-void
.end method

.method public onAttachFragment(Lcom/kwad/sdk/api/core/fragment/KsFragment;)V
    .locals 0
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    return-void
.end method

.method protected onDestroy()V
    .locals 0

    invoke-super {p0}, Landroid/support/v4/app/FragmentActivity;->onDestroy()V

    invoke-static {p0}, Lcom/kwad/sdk/api/core/ComponentDestroyer;->destroyActivity(Landroid/app/Activity;)V

    return-void
.end method

.method public final startActivityFromFragment(Landroid/support/v4/app/Fragment;Landroid/content/Intent;I)V
    .locals 0

    invoke-super {p0, p1, p2, p3}, Landroid/support/v4/app/FragmentActivity;->startActivityFromFragment(Landroid/support/v4/app/Fragment;Landroid/content/Intent;I)V

    return-void
.end method

.method public final startActivityFromFragment(Landroid/support/v4/app/Fragment;Landroid/content/Intent;ILandroid/os/Bundle;)V
    .locals 0

    invoke-super {p0, p1, p2, p3, p4}, Landroid/support/v4/app/FragmentActivity;->startActivityFromFragment(Landroid/support/v4/app/Fragment;Landroid/content/Intent;ILandroid/os/Bundle;)V

    return-void
.end method

.method public supportFinishAfterTransition()V
    .locals 0

    invoke-super {p0}, Landroid/support/v4/app/FragmentActivity;->supportFinishAfterTransition()V

    return-void
.end method
