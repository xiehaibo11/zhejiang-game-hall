.class abstract Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;
.super Landroid/support/v4/app/DialogFragment;

# interfaces
.implements Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;


# instance fields
.field private mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/api/core/fragment/KsDialogFragment;)V
    .locals 0

    invoke-direct {p0}, Landroid/support/v4/app/DialogFragment;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    return-void
.end method


# virtual methods
.method public getActivity2()Landroid/app/Activity;
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v0

    return-object v0
.end method

.method public getBase()Lcom/kwad/sdk/api/core/fragment/KsFragment;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    check-cast v0, Lcom/kwad/sdk/api/core/fragment/KsFragment;

    return-object v0
.end method

.method public onActivityCreated(Landroid/os/Bundle;)V
    .locals 1

    invoke-super {p0, p1}, Landroid/support/v4/app/DialogFragment;->onActivityCreated(Landroid/os/Bundle;)V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onActivityCreated(Landroid/os/Bundle;)V

    return-void
.end method

.method public onActivityResult(IILandroid/content/Intent;)V
    .locals 1

    invoke-super {p0, p1, p2, p3}, Landroid/support/v4/app/DialogFragment;->onActivityResult(IILandroid/content/Intent;)V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0, p1, p2, p3}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onActivityResult(IILandroid/content/Intent;)V

    return-void
.end method

.method public onAttach(Landroid/app/Activity;)V
    .locals 1

    invoke-super {p0, p1}, Landroid/support/v4/app/DialogFragment;->onAttach(Landroid/app/Activity;)V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onAttach(Landroid/app/Activity;)V

    return-void
.end method

.method public onAttach(Landroid/content/Context;)V
    .locals 1

    invoke-super {p0, p1}, Landroid/support/v4/app/DialogFragment;->onAttach(Landroid/content/Context;)V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onAttach(Landroid/content/Context;)V

    return-void
.end method

.method public onAttachFragment(Landroid/support/v4/app/Fragment;)V
    .locals 2

    instance-of v0, p1, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    check-cast p1, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    invoke-interface {p1}, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;->getBase()Lcom/kwad/sdk/api/core/fragment/KsFragment;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onAttachFragment(Lcom/kwad/sdk/api/core/fragment/KsFragment;)V

    return-void

    :cond_0
    if-nez p1, :cond_1

    iget-object p1, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    const/4 v0, 0x0

    invoke-interface {p1, v0}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onAttachFragment(Lcom/kwad/sdk/api/core/fragment/KsFragment;)V

    return-void

    :cond_1
    new-instance v0, Ljava/lang/RuntimeException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, " is not a DelegateFragment or DelegateDialogFragment"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public onCancel(Landroid/content/DialogInterface;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onCancel(Landroid/content/DialogInterface;)V

    return-void
.end method

.method public onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 1

    invoke-super {p0, p1}, Landroid/support/v4/app/DialogFragment;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    return-void
.end method

.method public onContextItemSelected(Landroid/view/MenuItem;)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onContextItemSelected(Landroid/view/MenuItem;)Z

    move-result p1

    return p1
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 1

    invoke-super {p0, p1}, Landroid/support/v4/app/DialogFragment;->onCreate(Landroid/os/Bundle;)V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onCreate(Landroid/os/Bundle;)V

    return-void
.end method

.method public onCreateAnimation(IZI)Landroid/view/animation/Animation;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0, p1, p2, p3}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onCreateAnimation(IZI)Landroid/view/animation/Animation;

    move-result-object p1

    return-object p1
.end method

.method public onCreateAnimator(IZI)Landroid/animation/Animator;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0, p1, p2, p3}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onCreateAnimator(IZI)Landroid/animation/Animator;

    move-result-object p1

    return-object p1
.end method

.method public onCreateContextMenu(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V
    .locals 1

    invoke-super {p0, p1, p2, p3}, Landroid/support/v4/app/DialogFragment;->onCreateContextMenu(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0, p1, p2, p3}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onCreateContextMenu(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V

    return-void
.end method

.method public onCreateDialog(Landroid/os/Bundle;)Landroid/app/Dialog;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onCreateDialog(Landroid/os/Bundle;)Landroid/app/Dialog;

    move-result-object p1

    return-object p1
.end method

.method public onCreateOptionsMenu(Landroid/view/Menu;Landroid/view/MenuInflater;)V
    .locals 1

    invoke-super {p0, p1, p2}, Landroid/support/v4/app/DialogFragment;->onCreateOptionsMenu(Landroid/view/Menu;Landroid/view/MenuInflater;)V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0, p1, p2}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onCreateOptionsMenu(Landroid/view/Menu;Landroid/view/MenuInflater;)V

    return-void
.end method

.method public onCreateView(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0, p1, p2, p3}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onCreateView(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;

    move-result-object p1

    return-object p1
.end method

.method public onDestroy()V
    .locals 1

    invoke-super {p0}, Landroid/support/v4/app/DialogFragment;->onDestroy()V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onDestroy()V

    return-void
.end method

.method public onDestroyOptionsMenu()V
    .locals 1

    invoke-super {p0}, Landroid/support/v4/app/DialogFragment;->onDestroyOptionsMenu()V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onDestroyOptionsMenu()V

    return-void
.end method

.method public onDestroyView()V
    .locals 1

    invoke-super {p0}, Landroid/support/v4/app/DialogFragment;->onDestroyView()V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onDestroyView()V

    return-void
.end method

.method public onDetach()V
    .locals 1

    invoke-super {p0}, Landroid/support/v4/app/DialogFragment;->onDetach()V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onDetach()V

    return-void
.end method

.method public onDismiss(Landroid/content/DialogInterface;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onDismiss(Landroid/content/DialogInterface;)V

    return-void
.end method

.method public onGetLayoutInflater(Landroid/os/Bundle;)Landroid/view/LayoutInflater;
    .locals 0

    invoke-super {p0, p1}, Landroid/support/v4/app/DialogFragment;->onGetLayoutInflater(Landroid/os/Bundle;)Landroid/view/LayoutInflater;

    move-result-object p1

    return-object p1
.end method

.method public onHiddenChanged(Z)V
    .locals 1

    invoke-super {p0, p1}, Landroid/support/v4/app/DialogFragment;->onHiddenChanged(Z)V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onHiddenChanged(Z)V

    return-void
.end method

.method public onInflate(Landroid/app/Activity;Landroid/util/AttributeSet;Landroid/os/Bundle;)V
    .locals 1

    invoke-super {p0, p1, p2, p3}, Landroid/support/v4/app/DialogFragment;->onInflate(Landroid/app/Activity;Landroid/util/AttributeSet;Landroid/os/Bundle;)V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0, p1, p2, p3}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onInflate(Landroid/app/Activity;Landroid/util/AttributeSet;Landroid/os/Bundle;)V

    return-void
.end method

.method public onInflate(Landroid/content/Context;Landroid/util/AttributeSet;Landroid/os/Bundle;)V
    .locals 1

    invoke-super {p0, p1, p2, p3}, Landroid/support/v4/app/DialogFragment;->onInflate(Landroid/content/Context;Landroid/util/AttributeSet;Landroid/os/Bundle;)V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0, p1, p2, p3}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onInflate(Landroid/content/Context;Landroid/util/AttributeSet;Landroid/os/Bundle;)V

    return-void
.end method

.method public onLowMemory()V
    .locals 1

    invoke-super {p0}, Landroid/support/v4/app/DialogFragment;->onLowMemory()V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onLowMemory()V

    return-void
.end method

.method public onMultiWindowModeChanged(Z)V
    .locals 1

    invoke-super {p0, p1}, Landroid/support/v4/app/DialogFragment;->onMultiWindowModeChanged(Z)V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onMultiWindowModeChanged(Z)V

    return-void
.end method

.method public onOptionsItemSelected(Landroid/view/MenuItem;)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onOptionsItemSelected(Landroid/view/MenuItem;)Z

    move-result p1

    return p1
.end method

.method public onOptionsMenuClosed(Landroid/view/Menu;)V
    .locals 1

    invoke-super {p0, p1}, Landroid/support/v4/app/DialogFragment;->onOptionsMenuClosed(Landroid/view/Menu;)V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onOptionsMenuClosed(Landroid/view/Menu;)V

    return-void
.end method

.method public onPause()V
    .locals 1

    invoke-super {p0}, Landroid/support/v4/app/DialogFragment;->onPause()V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onPause()V

    return-void
.end method

.method public onPictureInPictureModeChanged(Z)V
    .locals 1

    invoke-super {p0, p1}, Landroid/support/v4/app/DialogFragment;->onPictureInPictureModeChanged(Z)V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onPictureInPictureModeChanged(Z)V

    return-void
.end method

.method public onPrepareOptionsMenu(Landroid/view/Menu;)V
    .locals 1

    invoke-super {p0, p1}, Landroid/support/v4/app/DialogFragment;->onPrepareOptionsMenu(Landroid/view/Menu;)V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onPrepareOptionsMenu(Landroid/view/Menu;)V

    return-void
.end method

.method public onRequestPermissionsResult(I[Ljava/lang/String;[I)V
    .locals 1

    invoke-super {p0, p1, p2, p3}, Landroid/support/v4/app/DialogFragment;->onRequestPermissionsResult(I[Ljava/lang/String;[I)V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0, p1, p2, p3}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onRequestPermissionsResult(I[Ljava/lang/String;[I)V

    return-void
.end method

.method public onResume()V
    .locals 1

    invoke-super {p0}, Landroid/support/v4/app/DialogFragment;->onResume()V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onResume()V

    return-void
.end method

.method public onSaveInstanceState(Landroid/os/Bundle;)V
    .locals 1

    invoke-super {p0, p1}, Landroid/support/v4/app/DialogFragment;->onSaveInstanceState(Landroid/os/Bundle;)V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onSaveInstanceState(Landroid/os/Bundle;)V

    return-void
.end method

.method public onStart()V
    .locals 1

    invoke-super {p0}, Landroid/support/v4/app/DialogFragment;->onStart()V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onStart()V

    return-void
.end method

.method public onStop()V
    .locals 1

    invoke-super {p0}, Landroid/support/v4/app/DialogFragment;->onStop()V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onStop()V

    return-void
.end method

.method public onViewCreated(Landroid/view/View;Landroid/os/Bundle;)V
    .locals 1

    invoke-super {p0, p1, p2}, Landroid/support/v4/app/DialogFragment;->onViewCreated(Landroid/view/View;Landroid/os/Bundle;)V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0, p1, p2}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onViewCreated(Landroid/view/View;Landroid/os/Bundle;)V

    return-void
.end method

.method public onViewStateRestored(Landroid/os/Bundle;)V
    .locals 1

    invoke-super {p0, p1}, Landroid/support/v4/app/DialogFragment;->onViewStateRestored(Landroid/os/Bundle;)V

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;->onViewStateRestored(Landroid/os/Bundle;)V

    return-void
.end method

.method setBase(Lcom/kwad/sdk/api/core/fragment/KsDialogFragment;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/api/core/fragment/DelegateDialogFragment;->mBase:Lcom/kwad/sdk/api/core/fragment/IDialogFragmentLifecycle;

    return-void
.end method

.method superOnCancel(Landroid/content/DialogInterface;)V
    .locals 0

    invoke-super {p0, p1}, Landroid/support/v4/app/DialogFragment;->onCancel(Landroid/content/DialogInterface;)V

    return-void
.end method

.method superOnCreateDialog(Landroid/os/Bundle;)Landroid/app/Dialog;
    .locals 0

    invoke-super {p0, p1}, Landroid/support/v4/app/DialogFragment;->onCreateDialog(Landroid/os/Bundle;)Landroid/app/Dialog;

    move-result-object p1

    return-object p1
.end method

.method superOnDismiss(Landroid/content/DialogInterface;)V
    .locals 0

    invoke-super {p0, p1}, Landroid/support/v4/app/DialogFragment;->onDismiss(Landroid/content/DialogInterface;)V

    return-void
.end method
