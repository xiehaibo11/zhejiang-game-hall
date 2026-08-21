.class public abstract Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;
.super Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;


# instance fields
.field private mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;-><init>()V

    return-void
.end method


# virtual methods
.method protected attachBaseContext(Landroid/content/Context;)V
    .locals 1

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->getDelegate(Landroid/content/Context;)Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-static {p1}, Lcom/kwad/sdk/api/loader/Wrapper;->wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p1

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->attachBaseContext(Landroid/content/Context;)V

    iget-object p1, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {p1, p0}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->setProxyFragmentActivity(Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;)V

    iget-object p1, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {p1, p0}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->setActivity(Landroid/app/Activity;)V

    return-void
.end method

.method public createConfigurationContext(Landroid/content/res/Configuration;)Landroid/content/Context;
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->createConfigurationContext(Landroid/content/res/Configuration;)Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/api/loader/Wrapper;->wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p1

    return-object p1
.end method

.method protected abstract getDelegate(Landroid/content/Context;)Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;
.end method

.method public getIntent()Landroid/content/Intent;
    .locals 2

    invoke-static {}, Lcom/kwad/sdk/api/loader/Loader;->get()Lcom/kwad/sdk/api/loader/Loader;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/api/loader/Loader;->getExternalClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-super {p0}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->getIntent()Landroid/content/Intent;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/content/Intent;->setExtrasClassLoader(Ljava/lang/ClassLoader;)V

    return-object v1

    :cond_0
    invoke-super {p0}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    return-object v0
.end method

.method public getLayoutInflater()Landroid/view/LayoutInflater;
    .locals 1

    invoke-super {p0}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->getLayoutInflater()Landroid/view/LayoutInflater;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/api/loader/Wrapper;->wrapInflaterIfNeed(Landroid/view/LayoutInflater;)Landroid/view/LayoutInflater;

    move-result-object v0

    return-object v0
.end method

.method public getResources()Landroid/content/res/Resources;
    .locals 2

    invoke-super {p0}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-static {}, Lcom/kwad/sdk/api/loader/Loader;->get()Lcom/kwad/sdk/api/loader/Loader;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/sdk/api/loader/Loader;->getExternalResource()Landroid/content/res/Resources;

    move-result-object v1

    if-eqz v1, :cond_0

    return-object v1

    :cond_0
    return-object v0
.end method

.method protected onActivityResult(IILandroid/content/Intent;)V
    .locals 1

    invoke-super {p0, p1, p2, p3}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->onActivityResult(IILandroid/content/Intent;)V

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0, p1, p2, p3}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onActivityResult(IILandroid/content/Intent;)V

    return-void
.end method

.method protected onApplyThemeResource(Landroid/content/res/Resources$Theme;IZ)V
    .locals 1

    invoke-super {p0, p1, p2, p3}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->onApplyThemeResource(Landroid/content/res/Resources$Theme;IZ)V

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0, p1, p2, p3}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onApplyThemeResource(Landroid/content/res/Resources$Theme;IZ)V

    return-void
.end method

.method public onAttachFragment(Lcom/kwad/sdk/api/core/fragment/KsFragment;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->onAttachFragment(Lcom/kwad/sdk/api/core/fragment/KsFragment;)V

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onAttachFragment(Lcom/kwad/sdk/api/core/fragment/KsFragment;)V

    return-void
.end method

.method public onBackPressed()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onBackPressed()V

    return-void
.end method

.method protected onChildTitleChanged(Landroid/app/Activity;Ljava/lang/CharSequence;)V
    .locals 1

    invoke-super {p0, p1, p2}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->onChildTitleChanged(Landroid/app/Activity;Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onChildTitleChanged(Landroid/app/Activity;Ljava/lang/CharSequence;)V

    return-void
.end method

.method public onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onPreCreate(Landroid/os/Bundle;)V

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->onCreate(Landroid/os/Bundle;)V

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onCreate(Landroid/os/Bundle;)V

    return-void
.end method

.method public onDestroy()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onPreDestroy()V

    invoke-super {p0}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->onDestroy()V

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onDestroy()V

    invoke-static {p0}, Lcom/kwad/sdk/api/loader/Wrapper;->onDestroy(Landroid/content/Context;)V

    return-void
.end method

.method public onKeyDown(ILandroid/view/KeyEvent;)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onKeyDown(ILandroid/view/KeyEvent;)Z

    move-result p1

    return p1
.end method

.method public onKeyLongPress(ILandroid/view/KeyEvent;)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onKeyLongPress(ILandroid/view/KeyEvent;)Z

    move-result p1

    return p1
.end method

.method public onKeyUp(ILandroid/view/KeyEvent;)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onKeyUp(ILandroid/view/KeyEvent;)Z

    move-result p1

    return p1
.end method

.method protected onNewIntent(Landroid/content/Intent;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->onNewIntent(Landroid/content/Intent;)V

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onNewIntent(Landroid/content/Intent;)V

    return-void
.end method

.method protected onPause()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onPrePause()V

    invoke-super {p0}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->onPause()V

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onPause()V

    return-void
.end method

.method protected onPostCreate(Landroid/os/Bundle;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->onPostCreate(Landroid/os/Bundle;)V

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onPostCreate(Landroid/os/Bundle;)V

    return-void
.end method

.method protected onPostResume()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->onPostResume()V

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onPostResume()V

    return-void
.end method

.method protected onRestart()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->onRestart()V

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onRestart()V

    return-void
.end method

.method protected onRestoreInstanceState(Landroid/os/Bundle;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->onRestoreInstanceState(Landroid/os/Bundle;)V

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onRestoreInstanceState(Landroid/os/Bundle;)V

    return-void
.end method

.method protected onResume()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onPreResume()V

    invoke-super {p0}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->onResume()V

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onResume()V

    return-void
.end method

.method protected onSaveInstanceState(Landroid/os/Bundle;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onPreSaveInstanceState(Landroid/os/Bundle;)V

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->onSaveInstanceState(Landroid/os/Bundle;)V

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onSaveInstanceState(Landroid/os/Bundle;)V

    return-void
.end method

.method protected onStart()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onPreStart()V

    invoke-super {p0}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->onStart()V

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onStart()V

    return-void
.end method

.method protected onStop()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onPreStop()V

    invoke-super {p0}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->onStop()V

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onStop()V

    return-void
.end method

.method protected onTitleChanged(Ljava/lang/CharSequence;I)V
    .locals 1

    invoke-super {p0, p1, p2}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->onTitleChanged(Ljava/lang/CharSequence;I)V

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onTitleChanged(Ljava/lang/CharSequence;I)V

    return-void
.end method

.method protected onUserLeaveHint()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->onUserLeaveHint()V

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/BaseProxyFragmentActivity;->mDelegate:Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;

    invoke-virtual {v0}, Lcom/kwad/sdk/api/proxy/IFragmentActivityProxy;->onUserLeaveHint()V

    return-void
.end method

.method public startActivity(Landroid/content/Intent;)V
    .locals 3

    if-eqz p1, :cond_0

    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v0

    const-string v2, "key_start_time"

    invoke-virtual {p1, v2, v0, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;J)Landroid/content/Intent;

    :cond_0
    invoke-super {p0, p1}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->startActivity(Landroid/content/Intent;)V

    return-void
.end method

.method public superOnBackPressed()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->onBackPressed()V

    return-void
.end method

.method public superOnKeyDown(ILandroid/view/KeyEvent;)Z
    .locals 0

    invoke-super {p0, p1, p2}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->onKeyDown(ILandroid/view/KeyEvent;)Z

    move-result p1

    return p1
.end method

.method public superOnKeyLongPress(ILandroid/view/KeyEvent;)Z
    .locals 0

    invoke-super {p0, p1, p2}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->onKeyLongPress(ILandroid/view/KeyEvent;)Z

    move-result p1

    return p1
.end method

.method public superOnKeyUp(ILandroid/view/KeyEvent;)Z
    .locals 0

    invoke-super {p0, p1, p2}, Lcom/kwad/sdk/api/core/fragment/KsFragmentActivity;->onKeyUp(ILandroid/view/KeyEvent;)Z

    move-result p1

    return p1
.end method
