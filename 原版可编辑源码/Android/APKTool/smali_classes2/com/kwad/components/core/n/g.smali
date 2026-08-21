.class public abstract Lcom/kwad/components/core/n/g;
.super Landroid/app/DialogFragment;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Landroid/app/DialogFragment;-><init>()V

    return-void
.end method

.method private a(Landroid/app/FragmentTransaction;Ljava/lang/String;)I
    .locals 2

    :try_start_0
    const-string v0, "mDismissed"

    sget-object v1, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-static {p0, v0, v1}, Lcom/kwad/sdk/utils/s;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V

    const-string v0, "mShownByMe"

    sget-object v1, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-static {p0, v0, v1}, Lcom/kwad/sdk/utils/s;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V

    const-string v0, "mViewDestroyed"

    sget-object v1, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-static {p0, v0, v1}, Lcom/kwad/sdk/utils/s;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :goto_0
    invoke-virtual {p1, p0, p2}, Landroid/app/FragmentTransaction;->add(Landroid/app/Fragment;Ljava/lang/String;)Landroid/app/FragmentTransaction;

    move-result-object p1

    invoke-virtual {p1}, Landroid/app/FragmentTransaction;->commitAllowingStateLoss()I

    move-result p1

    return p1
.end method


# virtual methods
.method protected abstract a(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;)Landroid/view/View;
.end method

.method public dismiss()V
    .locals 1

    :try_start_0
    invoke-virtual {p0}, Lcom/kwad/components/core/n/g;->getActivity()Landroid/app/Activity;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/core/n/g;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Activity;->isFinishing()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-super {p0}, Landroid/app/DialogFragment;->dismissAllowingStateLoss()V

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/components/core/n/g;->getActivity()Landroid/app/Activity;

    move-result-object v0

    if-nez v0, :cond_1

    invoke-super {p0}, Landroid/app/DialogFragment;->dismissAllowingStateLoss()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    return-void

    :catch_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method public getContext()Landroid/content/Context;
    .locals 1

    invoke-super {p0}, Landroid/app/DialogFragment;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/m/l;->wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object v0

    return-object v0
.end method

.method public final isShowing()Z
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/components/core/n/g;->getDialog()Landroid/app/Dialog;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/app/Dialog;->isShowing()Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public onAttach(Landroid/content/Context;)V
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/m/l;->wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p1

    invoke-super {p0, p1}, Landroid/app/DialogFragment;->onAttach(Landroid/content/Context;)V

    return-void
.end method

.method public final onCreateView(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;
    .locals 1

    invoke-virtual {p1}, Landroid/view/LayoutInflater;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/m/l;->wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/m/l;->dy(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    invoke-virtual {p0}, Lcom/kwad/components/core/n/g;->getDialog()Landroid/app/Dialog;

    move-result-object p3

    const/4 v0, 0x1

    invoke-virtual {p3, v0}, Landroid/app/Dialog;->requestWindowFeature(I)Z

    invoke-virtual {p0, p1, p2}, Lcom/kwad/components/core/n/g;->a(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p1

    return-object p1
.end method

.method public onGetLayoutInflater(Landroid/os/Bundle;)Landroid/view/LayoutInflater;
    .locals 0

    invoke-super {p0, p1}, Landroid/app/DialogFragment;->onGetLayoutInflater(Landroid/os/Bundle;)Landroid/view/LayoutInflater;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/LayoutInflater;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/m/l;->wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/m/l;->dy(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    return-object p1
.end method

.method public show(Landroid/app/FragmentTransaction;Ljava/lang/String;)I
    .locals 0

    :try_start_0
    invoke-super {p0, p1, p2}, Landroid/app/DialogFragment;->show(Landroid/app/FragmentTransaction;Ljava/lang/String;)I

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p1

    :catchall_0
    invoke-direct {p0, p1, p2}, Lcom/kwad/components/core/n/g;->a(Landroid/app/FragmentTransaction;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public show(Landroid/app/FragmentManager;Ljava/lang/String;)V
    .locals 3

    :try_start_0
    invoke-super {p0, p1, p2}, Landroid/app/DialogFragment;->show(Landroid/app/FragmentManager;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    :try_start_1
    const-string v0, "showAllowingStateLoss"

    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p1, v1, v2

    const/4 v2, 0x1

    aput-object p2, v1, v2

    invoke-static {p0, v0, v1}, Lcom/kwad/sdk/utils/s;->f(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return-void

    :catchall_1
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    invoke-virtual {p1}, Landroid/app/FragmentManager;->beginTransaction()Landroid/app/FragmentTransaction;

    move-result-object p1

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/core/n/g;->a(Landroid/app/FragmentTransaction;Ljava/lang/String;)I

    return-void
.end method
