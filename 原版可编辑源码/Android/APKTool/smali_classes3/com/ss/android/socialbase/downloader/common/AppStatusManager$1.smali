.class Lcom/ss/android/socialbase/downloader/common/AppStatusManager$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/app/Application$ActivityLifecycleCallbacks;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/downloader/common/AppStatusManager;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/common/AppStatusManager;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/common/AppStatusManager;)V
    .locals 0

    .line 168
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager$1;->this$0:Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onActivityCreated(Landroid/app/Activity;Landroid/os/Bundle;)V
    .locals 0

    return-void
.end method

.method public onActivityDestroyed(Landroid/app/Activity;)V
    .locals 0

    return-void
.end method

.method public onActivityPaused(Landroid/app/Activity;)V
    .locals 2

    .line 200
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager$1;->this$0:Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->access$402(Lcom/ss/android/socialbase/downloader/common/AppStatusManager;Z)Z

    .line 201
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager$1;->this$0:Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->access$300(Lcom/ss/android/socialbase/downloader/common/AppStatusManager;)I

    move-result v0

    if-nez v0, :cond_0

    if-eqz p1, :cond_0

    .line 202
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager$1;->this$0:Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    invoke-virtual {p1}, Ljava/lang/Object;->hashCode()I

    move-result p1

    invoke-static {v0, p1}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->access$302(Lcom/ss/android/socialbase/downloader/common/AppStatusManager;I)I

    :cond_0
    return-void
.end method

.method public onActivityResumed(Landroid/app/Activity;)V
    .locals 3

    .line 189
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager$1;->this$0:Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->access$300(Lcom/ss/android/socialbase/downloader/common/AppStatusManager;)I

    move-result v0

    .line 190
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager$1;->this$0:Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    const/4 v2, 0x0

    invoke-static {v1, v2}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->access$402(Lcom/ss/android/socialbase/downloader/common/AppStatusManager;Z)Z

    .line 191
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager$1;->this$0:Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Ljava/lang/Object;->hashCode()I

    move-result p1

    goto :goto_0

    :cond_0
    move p1, v0

    :goto_0
    invoke-static {v1, p1}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->access$302(Lcom/ss/android/socialbase/downloader/common/AppStatusManager;I)I

    if-nez v0, :cond_1

    .line 193
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager$1;->this$0:Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->access$500(Lcom/ss/android/socialbase/downloader/common/AppStatusManager;)V

    :cond_1
    return-void
.end method

.method public onActivitySaveInstanceState(Landroid/app/Activity;Landroid/os/Bundle;)V
    .locals 0

    return-void
.end method

.method public onActivityStarted(Landroid/app/Activity;)V
    .locals 2

    .line 177
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager$1;->this$0:Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    new-instance v1, Ljava/lang/ref/WeakReference;

    invoke-direct {v1, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->access$202(Lcom/ss/android/socialbase/downloader/common/AppStatusManager;Ljava/lang/ref/WeakReference;)Ljava/lang/ref/WeakReference;

    .line 178
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager$1;->this$0:Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->access$300(Lcom/ss/android/socialbase/downloader/common/AppStatusManager;)I

    move-result v0

    .line 179
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager$1;->this$0:Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Ljava/lang/Object;->hashCode()I

    move-result p1

    goto :goto_0

    :cond_0
    move p1, v0

    :goto_0
    invoke-static {v1, p1}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->access$302(Lcom/ss/android/socialbase/downloader/common/AppStatusManager;I)I

    .line 180
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager$1;->this$0:Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    const/4 v1, 0x0

    invoke-static {p1, v1}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->access$402(Lcom/ss/android/socialbase/downloader/common/AppStatusManager;Z)Z

    if-nez v0, :cond_1

    .line 182
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager$1;->this$0:Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->access$500(Lcom/ss/android/socialbase/downloader/common/AppStatusManager;)V

    :cond_1
    return-void
.end method

.method public onActivityStopped(Landroid/app/Activity;)V
    .locals 2

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    .line 210
    invoke-virtual {p1}, Ljava/lang/Object;->hashCode()I

    move-result p1

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager$1;->this$0:Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->access$300(Lcom/ss/android/socialbase/downloader/common/AppStatusManager;)I

    move-result v1

    if-ne p1, v1, :cond_0

    .line 211
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager$1;->this$0:Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    invoke-static {p1, v0}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->access$302(Lcom/ss/android/socialbase/downloader/common/AppStatusManager;I)I

    .line 212
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager$1;->this$0:Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->access$600(Lcom/ss/android/socialbase/downloader/common/AppStatusManager;)V

    .line 214
    :cond_0
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager$1;->this$0:Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    invoke-static {p1, v0}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->access$402(Lcom/ss/android/socialbase/downloader/common/AppStatusManager;Z)Z

    return-void
.end method
