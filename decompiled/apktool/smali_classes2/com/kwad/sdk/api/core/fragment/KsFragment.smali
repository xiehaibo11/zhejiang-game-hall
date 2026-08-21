.class public Lcom/kwad/sdk/api/core/fragment/KsFragment;
.super Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;

# interfaces
.implements Lcom/kwad/sdk/api/core/fragment/IFragment;
.implements Lcom/kwad/sdk/api/core/fragment/IFragmentLifecycle;


# annotations
.annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
.end annotation


# static fields
.field private static final sClassMap:Landroid/support/v4/util/SimpleArrayMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/support/v4/util/SimpleArrayMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Class<",
            "*>;>;"
        }
    .end annotation
.end field


# instance fields
.field private mBase:Landroid/support/v4/app/Fragment;

.field private mChildFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

.field private mFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

.field private mLifeCycle:Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Landroid/support/v4/util/SimpleArrayMap;

    invoke-direct {v0}, Landroid/support/v4/util/SimpleArrayMap;-><init>()V

    sput-object v0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->sClassMap:Landroid/support/v4/util/SimpleArrayMap;

    return-void
.end method

.method public constructor <init>()V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    invoke-direct {p0}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;-><init>()V

    new-instance v0, Lcom/kwad/sdk/api/core/fragment/ResFragment;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/api/core/fragment/ResFragment;-><init>(Lcom/kwad/sdk/api/core/fragment/KsFragment;)V

    iput-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    return-void
.end method

.method protected constructor <init>(Landroid/support/v4/app/Fragment;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    return-void
.end method

.method public static instantiate(Landroid/content/Context;Ljava/lang/String;Landroid/os/Bundle;)Lcom/kwad/sdk/api/core/fragment/KsFragment;
    .locals 2

    :try_start_0
    sget-object v0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->sClassMap:Landroid/support/v4/util/SimpleArrayMap;

    invoke-virtual {v0, p1}, Landroid/support/v4/util/SimpleArrayMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Class;

    if-nez v0, :cond_0

    invoke-virtual {p0}, Landroid/content/Context;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object p0

    invoke-virtual {p0, p1}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    sget-object p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->sClassMap:Landroid/support/v4/util/SimpleArrayMap;

    invoke-virtual {p0, p1, v0}, Landroid/support/v4/util/SimpleArrayMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    const/4 p0, 0x0

    new-array v1, p0, [Ljava/lang/Class;

    invoke-virtual {v0, v1}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v0

    new-array p0, p0, [Ljava/lang/Object;

    invoke-virtual {v0, p0}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;

    if-eqz p2, :cond_1

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    invoke-virtual {p2, v0}, Landroid/os/Bundle;->setClassLoader(Ljava/lang/ClassLoader;)V

    invoke-virtual {p0, p2}, Lcom/kwad/sdk/api/core/fragment/KsFragment;->setArguments(Landroid/os/Bundle;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    return-object p0

    :catch_0
    move-exception p0

    new-instance p2, Landroid/support/v4/app/Fragment$InstantiationException;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Unable to instantiate fragment "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ": make sure class name exists, is public, and has an empty constructor that is public"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p2, p1, p0}, Landroid/support/v4/app/Fragment$InstantiationException;-><init>(Ljava/lang/String;Ljava/lang/Exception;)V

    throw p2
.end method

.method private isAllFragmentIsHidden(Landroid/support/v4/app/Fragment;)Z
    .locals 1

    invoke-virtual {p1}, Landroid/support/v4/app/Fragment;->getParentFragment()Landroid/support/v4/app/Fragment;

    move-result-object v0

    invoke-virtual {p1}, Landroid/support/v4/app/Fragment;->isHidden()Z

    move-result p1

    if-nez v0, :cond_0

    return p1

    :cond_0
    if-nez p1, :cond_2

    invoke-direct {p0, v0}, Lcom/kwad/sdk/api/core/fragment/KsFragment;->isAllFragmentIsHidden(Landroid/support/v4/app/Fragment;)Z

    move-result p1

    if-eqz p1, :cond_1

    goto :goto_0

    :cond_1
    const/4 p1, 0x0

    return p1

    :cond_2
    :goto_0
    const/4 p1, 0x1

    return p1
.end method

.method private isKsAdParentFragment()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->getParentFragment()Landroid/support/v4/app/Fragment;

    move-result-object v0

    if-eqz v0, :cond_0

    instance-of v0, v0, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method


# virtual methods
.method public final dump(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0, p1, p2, p3, p4}, Landroid/support/v4/app/Fragment;->dump(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V

    return-void
.end method

.method public final getActivity()Landroid/app/Activity;
    .locals 3
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    instance-of v1, v0, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    if-eqz v1, :cond_0

    check-cast v0, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    invoke-interface {v0}, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;->getActivity2()Landroid/app/Activity;

    move-result-object v0

    return-object v0

    :cond_0
    new-instance v0, Ljava/lang/RuntimeException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v2, " must be DelegateFragment or DelegateDialogFragment"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public final getAllowEnterTransitionOverlap()Z
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->getAllowEnterTransitionOverlap()Z

    move-result v0

    return v0
.end method

.method public final getAllowReturnTransitionOverlap()Z
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->getAllowReturnTransitionOverlap()Z

    move-result v0

    return v0
.end method

.method public final getArguments()Landroid/os/Bundle;
    .locals 2
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->getArguments()Landroid/os/Bundle;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/api/loader/Loader;->get()Lcom/kwad/sdk/api/loader/Loader;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/sdk/api/loader/Loader;->getRealClassLoader()Ljava/lang/ClassLoader;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/os/Bundle;->setClassLoader(Ljava/lang/ClassLoader;)V

    :cond_0
    return-object v0
.end method

.method public final getBase()Landroid/support/v4/app/Fragment;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    return-object v0
.end method

.method public getChildFragmentManager()Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;
    .locals 2
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mChildFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    iget-object v1, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v1}, Landroid/support/v4/app/Fragment;->getChildFragmentManager()Landroid/support/v4/app/FragmentManager;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;-><init>(Landroid/support/v4/app/FragmentManager;)V

    iput-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mChildFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mChildFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    return-object v0
.end method

.method public final getContext()Landroid/content/Context;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->getContext()Landroid/content/Context;

    move-result-object v0

    return-object v0
.end method

.method public getEnterTransition()Ljava/lang/Object;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->getEnterTransition()Ljava/lang/Object;

    move-result-object v0

    return-object v0
.end method

.method public final getExitTransition()Ljava/lang/Object;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->getExitTransition()Ljava/lang/Object;

    move-result-object v0

    return-object v0
.end method

.method public getFragmentManager()Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;
    .locals 2
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    iget-object v1, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v1}, Landroid/support/v4/app/Fragment;->getFragmentManager()Landroid/support/v4/app/FragmentManager;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;-><init>(Landroid/support/v4/app/FragmentManager;)V

    iput-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mFragmentManager:Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    return-object v0
.end method

.method public final getHost()Ljava/lang/Object;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->getHost()Ljava/lang/Object;

    move-result-object v0

    return-object v0
.end method

.method public final getId()I
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->getId()I

    move-result v0

    return v0
.end method

.method public final getLayoutInflater(Landroid/os/Bundle;)Landroid/view/LayoutInflater;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/Fragment;->getLayoutInflater(Landroid/os/Bundle;)Landroid/view/LayoutInflater;

    move-result-object p1

    return-object p1
.end method

.method public getLifecycle()Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle;
    .locals 2
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mLifeCycle:Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle;

    iget-object v1, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v1}, Landroid/support/v4/app/Fragment;->getLifecycle()Landroid/arch/lifecycle/Lifecycle;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle;-><init>(Landroid/arch/lifecycle/Lifecycle;)V

    iput-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mLifeCycle:Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle;

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mLifeCycle:Lcom/kwad/sdk/api/core/lifecycle/KsLifecycle;

    return-object v0
.end method

.method public final getParentFragment()Lcom/kwad/sdk/api/core/fragment/KsFragment;
    .locals 3
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->getParentFragment()Landroid/support/v4/app/Fragment;

    move-result-object v0

    instance-of v1, v0, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    if-eqz v1, :cond_0

    check-cast v0, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;

    invoke-interface {v0}, Lcom/kwad/sdk/api/core/fragment/IDelegateFragment;->getBase()Lcom/kwad/sdk/api/core/fragment/KsFragment;

    move-result-object v0

    return-object v0

    :cond_0
    if-nez v0, :cond_1

    const/4 v0, 0x0

    return-object v0

    :cond_1
    new-instance v1, Ljava/lang/RuntimeException;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v0, " is not a DelegateFragment or DelegateDialogFragment"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v1, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v1
.end method

.method public final getReenterTransition()Ljava/lang/Object;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->getReenterTransition()Ljava/lang/Object;

    move-result-object v0

    return-object v0
.end method

.method public final getResources()Landroid/content/res/Resources;
    .locals 2
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    sget-object v0, Lcom/kwad/sdk/api/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    return-object v0

    :cond_0
    new-instance v0, Ljava/lang/RuntimeException;

    const-string v1, "please use getContext().getResources()"

    invoke-direct {v0, v1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public final getRetainInstance()Z
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->getRetainInstance()Z

    move-result v0

    return v0
.end method

.method public final getReturnTransition()Ljava/lang/Object;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->getReturnTransition()Ljava/lang/Object;

    move-result-object v0

    return-object v0
.end method

.method public final getSharedElementEnterTransition()Ljava/lang/Object;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->getSharedElementEnterTransition()Ljava/lang/Object;

    move-result-object v0

    return-object v0
.end method

.method public final getSharedElementReturnTransition()Ljava/lang/Object;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->getSharedElementReturnTransition()Ljava/lang/Object;

    move-result-object v0

    return-object v0
.end method

.method public final getString(I)Ljava/lang/String;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    invoke-virtual {p0}, Lcom/kwad/sdk/api/core/fragment/KsFragment;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public final varargs getString(I[Ljava/lang/Object;)Ljava/lang/String;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    invoke-virtual {p0}, Lcom/kwad/sdk/api/core/fragment/KsFragment;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Landroid/content/res/Resources;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public final getTag()Ljava/lang/String;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->getTag()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getTargetRequestCode()I
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->getTargetRequestCode()I

    move-result v0

    return v0
.end method

.method public final getText(I)Ljava/lang/CharSequence;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    invoke-virtual {p0}, Lcom/kwad/sdk/api/core/fragment/KsFragment;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/content/res/Resources;->getText(I)Ljava/lang/CharSequence;

    move-result-object p1

    return-object p1
.end method

.method public final getUserVisibleHint()Z
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->getUserVisibleHint()Z

    move-result v0

    return v0
.end method

.method public final getView()Landroid/view/View;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->getView()Landroid/view/View;

    move-result-object v0

    return-object v0
.end method

.method public final hasOptionsMenu()Z
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->hasOptionsMenu()Z

    move-result v0

    return v0
.end method

.method public final isAdded()Z
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->isAdded()Z

    move-result v0

    return v0
.end method

.method public isAllFragmentIsHidden()Z
    .locals 4

    invoke-direct {p0}, Lcom/kwad/sdk/api/core/fragment/KsFragment;->isKsAdParentFragment()Z

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz v0, :cond_3

    invoke-virtual {p0}, Lcom/kwad/sdk/api/core/fragment/KsFragment;->getParentFragment()Lcom/kwad/sdk/api/core/fragment/KsFragment;

    move-result-object v0

    if-nez v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/sdk/api/core/fragment/KsFragment;->isHidden()Z

    move-result v0

    return v0

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/api/core/fragment/KsFragment;->isHidden()Z

    move-result v3

    if-nez v3, :cond_2

    invoke-virtual {v0}, Lcom/kwad/sdk/api/core/fragment/KsFragment;->isAllFragmentIsHidden()Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    return v1

    :cond_2
    :goto_0
    return v2

    :cond_3
    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->getParentFragment()Landroid/support/v4/app/Fragment;

    move-result-object v3

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->isHidden()Z

    move-result v0

    if-nez v3, :cond_4

    return v0

    :cond_4
    if-nez v0, :cond_6

    invoke-direct {p0, v3}, Lcom/kwad/sdk/api/core/fragment/KsFragment;->isAllFragmentIsHidden(Landroid/support/v4/app/Fragment;)Z

    move-result v0

    if-eqz v0, :cond_5

    goto :goto_1

    :cond_5
    return v1

    :cond_6
    :goto_1
    return v2
.end method

.method public final isDetached()Z
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->isDetached()Z

    move-result v0

    return v0
.end method

.method public final isHidden()Z
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->isHidden()Z

    move-result v0

    return v0
.end method

.method public final isInLayout()Z
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->isInLayout()Z

    move-result v0

    return v0
.end method

.method public final isMenuVisible()Z
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->isMenuVisible()Z

    move-result v0

    return v0
.end method

.method public final isRemoving()Z
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->isRemoving()Z

    move-result v0

    return v0
.end method

.method public final isResumed()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->isResumed()Z

    move-result v0

    return v0
.end method

.method public final isStateSaved()Z
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->isStateSaved()Z

    move-result v0

    return v0
.end method

.method public final isVisible()Z
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->isVisible()Z

    move-result v0

    return v0
.end method

.method public bridge synthetic onActivityCreated(Landroid/os/Bundle;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onActivityCreated(Landroid/os/Bundle;)V

    return-void
.end method

.method public bridge synthetic onActivityResult(IILandroid/content/Intent;)V
    .locals 0

    invoke-super {p0, p1, p2, p3}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onActivityResult(IILandroid/content/Intent;)V

    return-void
.end method

.method public bridge synthetic onAttach(Landroid/app/Activity;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onAttach(Landroid/app/Activity;)V

    return-void
.end method

.method public bridge synthetic onAttach(Landroid/content/Context;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onAttach(Landroid/content/Context;)V

    return-void
.end method

.method public bridge synthetic onAttachFragment(Lcom/kwad/sdk/api/core/fragment/KsFragment;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onAttachFragment(Lcom/kwad/sdk/api/core/fragment/KsFragment;)V

    return-void
.end method

.method public bridge synthetic onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    return-void
.end method

.method public bridge synthetic onContextItemSelected(Landroid/view/MenuItem;)Z
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onContextItemSelected(Landroid/view/MenuItem;)Z

    move-result p1

    return p1
.end method

.method public bridge synthetic onCreate(Landroid/os/Bundle;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onCreate(Landroid/os/Bundle;)V

    return-void
.end method

.method public bridge synthetic onCreateAnimation(IZI)Landroid/view/animation/Animation;
    .locals 0

    invoke-super {p0, p1, p2, p3}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onCreateAnimation(IZI)Landroid/view/animation/Animation;

    move-result-object p1

    return-object p1
.end method

.method public bridge synthetic onCreateAnimator(IZI)Landroid/animation/Animator;
    .locals 0

    invoke-super {p0, p1, p2, p3}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onCreateAnimator(IZI)Landroid/animation/Animator;

    move-result-object p1

    return-object p1
.end method

.method public bridge synthetic onCreateContextMenu(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V
    .locals 0

    invoke-super {p0, p1, p2, p3}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onCreateContextMenu(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V

    return-void
.end method

.method public bridge synthetic onCreateOptionsMenu(Landroid/view/Menu;Landroid/view/MenuInflater;)V
    .locals 0

    invoke-super {p0, p1, p2}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onCreateOptionsMenu(Landroid/view/Menu;Landroid/view/MenuInflater;)V

    return-void
.end method

.method public bridge synthetic onCreateView(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;
    .locals 0

    invoke-super {p0, p1, p2, p3}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onCreateView(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;

    move-result-object p1

    return-object p1
.end method

.method public bridge synthetic onDestroy()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onDestroy()V

    return-void
.end method

.method public bridge synthetic onDestroyOptionsMenu()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onDestroyOptionsMenu()V

    return-void
.end method

.method public bridge synthetic onDestroyView()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onDestroyView()V

    return-void
.end method

.method public bridge synthetic onDetach()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onDetach()V

    return-void
.end method

.method public onGetLayoutInflater(Landroid/os/Bundle;)Landroid/view/LayoutInflater;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/Fragment;->onGetLayoutInflater(Landroid/os/Bundle;)Landroid/view/LayoutInflater;

    move-result-object p1

    return-object p1
.end method

.method public bridge synthetic onHiddenChanged(Z)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onHiddenChanged(Z)V

    return-void
.end method

.method public bridge synthetic onInflate(Landroid/app/Activity;Landroid/util/AttributeSet;Landroid/os/Bundle;)V
    .locals 0

    invoke-super {p0, p1, p2, p3}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onInflate(Landroid/app/Activity;Landroid/util/AttributeSet;Landroid/os/Bundle;)V

    return-void
.end method

.method public bridge synthetic onInflate(Landroid/content/Context;Landroid/util/AttributeSet;Landroid/os/Bundle;)V
    .locals 0

    invoke-super {p0, p1, p2, p3}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onInflate(Landroid/content/Context;Landroid/util/AttributeSet;Landroid/os/Bundle;)V

    return-void
.end method

.method public bridge synthetic onLowMemory()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onLowMemory()V

    return-void
.end method

.method public bridge synthetic onMultiWindowModeChanged(Z)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onMultiWindowModeChanged(Z)V

    return-void
.end method

.method public bridge synthetic onOptionsItemSelected(Landroid/view/MenuItem;)Z
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onOptionsItemSelected(Landroid/view/MenuItem;)Z

    move-result p1

    return p1
.end method

.method public bridge synthetic onOptionsMenuClosed(Landroid/view/Menu;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onOptionsMenuClosed(Landroid/view/Menu;)V

    return-void
.end method

.method public bridge synthetic onPause()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onPause()V

    return-void
.end method

.method public bridge synthetic onPictureInPictureModeChanged(Z)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onPictureInPictureModeChanged(Z)V

    return-void
.end method

.method public bridge synthetic onPrepareOptionsMenu(Landroid/view/Menu;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onPrepareOptionsMenu(Landroid/view/Menu;)V

    return-void
.end method

.method public bridge synthetic onRequestPermissionsResult(I[Ljava/lang/String;[I)V
    .locals 0

    invoke-super {p0, p1, p2, p3}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onRequestPermissionsResult(I[Ljava/lang/String;[I)V

    return-void
.end method

.method public bridge synthetic onResume()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onResume()V

    return-void
.end method

.method public bridge synthetic onSaveInstanceState(Landroid/os/Bundle;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onSaveInstanceState(Landroid/os/Bundle;)V

    return-void
.end method

.method public bridge synthetic onStart()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onStart()V

    return-void
.end method

.method public bridge synthetic onStop()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onStop()V

    return-void
.end method

.method public bridge synthetic onViewCreated(Landroid/view/View;Landroid/os/Bundle;)V
    .locals 0

    invoke-super {p0, p1, p2}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onViewCreated(Landroid/view/View;Landroid/os/Bundle;)V

    return-void
.end method

.method public bridge synthetic onViewStateRestored(Landroid/os/Bundle;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/core/fragment/AbstractIFragmentLifecycle;->onViewStateRestored(Landroid/os/Bundle;)V

    return-void
.end method

.method public final postponeEnterTransition()V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->postponeEnterTransition()V

    return-void
.end method

.method public final registerForContextMenu(Landroid/view/View;)V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/Fragment;->registerForContextMenu(Landroid/view/View;)V

    return-void
.end method

.method public final requestPermissions([Ljava/lang/String;I)V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0, p1, p2}, Landroid/support/v4/app/Fragment;->requestPermissions([Ljava/lang/String;I)V

    return-void
.end method

.method public final setAllowEnterTransitionOverlap(Z)V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/Fragment;->setAllowEnterTransitionOverlap(Z)V

    return-void
.end method

.method public final setAllowReturnTransitionOverlap(Z)V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/Fragment;->setAllowReturnTransitionOverlap(Z)V

    return-void
.end method

.method public final setArguments(Landroid/os/Bundle;)V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/Fragment;->setArguments(Landroid/os/Bundle;)V

    return-void
.end method

.method protected setBase(Landroid/support/v4/app/Fragment;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    return-void
.end method

.method public final setEnterTransition(Ljava/lang/Object;)V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/Fragment;->setEnterTransition(Ljava/lang/Object;)V

    return-void
.end method

.method public final setExitTransition(Ljava/lang/Object;)V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/Fragment;->setExitTransition(Ljava/lang/Object;)V

    return-void
.end method

.method public final setHasOptionsMenu(Z)V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/Fragment;->setHasOptionsMenu(Z)V

    return-void
.end method

.method public setInitialSavedState(Lcom/kwad/sdk/api/core/fragment/KsSavedState;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {p1}, Lcom/kwad/sdk/api/core/fragment/KsSavedState;->getBase()Landroid/support/v4/app/Fragment$SavedState;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/support/v4/app/Fragment;->setInitialSavedState(Landroid/support/v4/app/Fragment$SavedState;)V

    return-void
.end method

.method public final setMenuVisibility(Z)V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/Fragment;->setMenuVisibility(Z)V

    return-void
.end method

.method public final setReenterTransition(Ljava/lang/Object;)V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/Fragment;->setReenterTransition(Ljava/lang/Object;)V

    return-void
.end method

.method public final setRetainInstance(Z)V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/Fragment;->setRetainInstance(Z)V

    return-void
.end method

.method public final setReturnTransition(Ljava/lang/Object;)V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/Fragment;->setReturnTransition(Ljava/lang/Object;)V

    return-void
.end method

.method public final setSharedElementEnterTransition(Ljava/lang/Object;)V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/Fragment;->setSharedElementEnterTransition(Ljava/lang/Object;)V

    return-void
.end method

.method public final setSharedElementReturnTransition(Ljava/lang/Object;)V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/Fragment;->setSharedElementReturnTransition(Ljava/lang/Object;)V

    return-void
.end method

.method public setUserVisibleHint(Z)V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/Fragment;->setUserVisibleHint(Z)V

    return-void
.end method

.method public final shouldShowRequestPermissionRationale(Ljava/lang/String;)Z
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/Fragment;->shouldShowRequestPermissionRationale(Ljava/lang/String;)Z

    move-result p1

    return p1
.end method

.method public final startActivity(Landroid/content/Intent;)V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/Fragment;->startActivity(Landroid/content/Intent;)V

    return-void
.end method

.method public final startActivity(Landroid/content/Intent;Landroid/os/Bundle;)V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0, p1, p2}, Landroid/support/v4/app/Fragment;->startActivity(Landroid/content/Intent;Landroid/os/Bundle;)V

    return-void
.end method

.method public final startActivityForResult(Landroid/content/Intent;I)V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0, p1, p2}, Landroid/support/v4/app/Fragment;->startActivityForResult(Landroid/content/Intent;I)V

    return-void
.end method

.method public final startActivityForResult(Landroid/content/Intent;ILandroid/os/Bundle;)V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0, p1, p2, p3}, Landroid/support/v4/app/Fragment;->startActivityForResult(Landroid/content/Intent;ILandroid/os/Bundle;)V

    return-void
.end method

.method public final startIntentSenderForResult(Landroid/content/IntentSender;ILandroid/content/Intent;IIILandroid/os/Bundle;)V
    .locals 8
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    move-object v1, p1

    move v2, p2

    move-object v3, p3

    move v4, p4

    move v5, p5

    move v6, p6

    move-object v7, p7

    invoke-virtual/range {v0 .. v7}, Landroid/support/v4/app/Fragment;->startIntentSenderForResult(Landroid/content/IntentSender;ILandroid/content/Intent;IIILandroid/os/Bundle;)V

    return-void
.end method

.method public final startPostponedEnterTransition()V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0}, Landroid/support/v4/app/Fragment;->startPostponedEnterTransition()V

    return-void
.end method

.method public final unregisterForContextMenu(Landroid/view/View;)V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsFragment;->mBase:Landroid/support/v4/app/Fragment;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/Fragment;->unregisterForContextMenu(Landroid/view/View;)V

    return-void
.end method
