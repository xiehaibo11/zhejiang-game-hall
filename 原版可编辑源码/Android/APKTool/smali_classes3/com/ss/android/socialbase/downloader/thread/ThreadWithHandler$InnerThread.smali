.class Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler$InnerThread;
.super Landroid/os/HandlerThread;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "InnerThread"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler;Ljava/lang/String;)V
    .locals 0

    .line 49
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler$InnerThread;->this$0:Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler;

    .line 50
    invoke-direct {p0, p2}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method protected onLooperPrepared()V
    .locals 5

    .line 55
    invoke-super {p0}, Landroid/os/HandlerThread;->onLooperPrepared()V

    .line 56
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler$InnerThread;->getLooper()Landroid/os/Looper;

    move-result-object v0

    .line 57
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler$InnerThread;->this$0:Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler;

    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler;->access$000(Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler;)Ljava/lang/Object;

    move-result-object v1

    monitor-enter v1

    .line 58
    :try_start_0
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler$InnerThread;->this$0:Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler;

    new-instance v3, Landroid/os/Handler;

    invoke-direct {v3, v0}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    invoke-static {v2, v3}, Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler;->access$102(Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler;Landroid/os/Handler;)Landroid/os/Handler;

    .line 59
    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 60
    :cond_0
    :goto_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler$InnerThread;->this$0:Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler;

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler;->access$200(Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler;)Ljava/util/Queue;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Queue;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_1

    .line 61
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler$InnerThread;->this$0:Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler;

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler;->access$200(Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler;)Ljava/util/Queue;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Queue;->poll()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler$MessageEntity;

    if-eqz v0, :cond_0

    .line 63
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler$InnerThread;->this$0:Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler;

    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler;->access$100(Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler;)Landroid/os/Handler;

    move-result-object v1

    iget-object v2, v0, Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler$MessageEntity;->target:Ljava/lang/Runnable;

    iget-wide v3, v0, Lcom/ss/android/socialbase/downloader/thread/ThreadWithHandler$MessageEntity;->delayMillis:J

    invoke-virtual {v1, v2, v3, v4}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_0

    :cond_1
    return-void

    :catchall_0
    move-exception v0

    .line 59
    :try_start_1
    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v0
.end method
