.class Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/thread/WeakDownloadHandler$IHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;)V
    .locals 0

    .line 50
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache$1;->this$0:Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMsg(Landroid/os/Message;)V
    .locals 1

    .line 53
    iget p1, p1, Landroid/os/Message;->what:I

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 54
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getCPUThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object p1

    .line 55
    new-instance v0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache$1$1;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache$1$1;-><init>(Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache$1;)V

    invoke-interface {p1, v0}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method
