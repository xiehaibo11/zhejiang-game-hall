.class Lcom/kwad/sdk/api/proxy/KSLifecycleObserve$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/app/Application$ActivityLifecycleCallbacks;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;->init(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve$1;->this$0:Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onActivityCreated(Landroid/app/Activity;Landroid/os/Bundle;)V
    .locals 2

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve$1;->this$0:Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;

    invoke-static {v0}, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;->access$000(Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;)Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/api/proxy/KSLifecycleListener;

    invoke-interface {v1, p1, p2}, Lcom/kwad/sdk/api/proxy/KSLifecycleListener;->onActivityCreated(Landroid/app/Activity;Landroid/os/Bundle;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public onActivityDestroyed(Landroid/app/Activity;)V
    .locals 2

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve$1;->this$0:Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;

    invoke-static {v0}, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;->access$000(Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;)Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/api/proxy/KSLifecycleListener;

    invoke-interface {v1, p1}, Lcom/kwad/sdk/api/proxy/KSLifecycleListener;->onActivityDestroyed(Landroid/app/Activity;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public onActivityPaused(Landroid/app/Activity;)V
    .locals 2

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve$1;->this$0:Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;

    invoke-static {v0}, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;->access$300(Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;)Ljava/lang/ref/WeakReference;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve$1;->this$0:Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;

    invoke-static {v0}, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;->access$300(Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;)Ljava/lang/ref/WeakReference;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve$1;->this$0:Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;

    invoke-static {v0}, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;->access$300(Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;)Ljava/lang/ref/WeakReference;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/Activity;

    invoke-virtual {v0, p1}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve$1;->this$0:Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;->access$302(Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;Ljava/lang/ref/WeakReference;)Ljava/lang/ref/WeakReference;

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve$1;->this$0:Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;

    invoke-static {v0}, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;->access$000(Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;)Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/api/proxy/KSLifecycleListener;

    invoke-interface {v1, p1}, Lcom/kwad/sdk/api/proxy/KSLifecycleListener;->onActivityPaused(Landroid/app/Activity;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_1
    return-void

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public onActivityResumed(Landroid/app/Activity;)V
    .locals 2

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve$1;->this$0:Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;

    new-instance v1, Ljava/lang/ref/WeakReference;

    invoke-direct {v1, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-static {v0, v1}, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;->access$302(Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;Ljava/lang/ref/WeakReference;)Ljava/lang/ref/WeakReference;

    iget-object v0, p0, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve$1;->this$0:Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;

    invoke-static {v0}, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;->access$000(Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;)Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/api/proxy/KSLifecycleListener;

    invoke-interface {v1, p1}, Lcom/kwad/sdk/api/proxy/KSLifecycleListener;->onActivityResumed(Landroid/app/Activity;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public onActivitySaveInstanceState(Landroid/app/Activity;Landroid/os/Bundle;)V
    .locals 0

    return-void
.end method

.method public onActivityStarted(Landroid/app/Activity;)V
    .locals 1

    :try_start_0
    iget-object p1, p0, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve$1;->this$0:Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;

    invoke-static {p1}, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;->access$108(Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;)I

    iget-object p1, p0, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve$1;->this$0:Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;

    invoke-static {p1}, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;->access$100(Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;)I

    move-result p1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    iget-object p1, p0, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve$1;->this$0:Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;

    invoke-static {p1}, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;->access$200(Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public onActivityStopped(Landroid/app/Activity;)V
    .locals 0

    :try_start_0
    iget-object p1, p0, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve$1;->this$0:Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;

    invoke-static {p1}, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;->access$110(Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;)I

    iget-object p1, p0, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve$1;->this$0:Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;

    invoke-static {p1}, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;->access$100(Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;)I

    move-result p1

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve$1;->this$0:Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;

    invoke-static {p1}, Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;->access$400(Lcom/kwad/sdk/api/proxy/KSLifecycleObserve;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method
