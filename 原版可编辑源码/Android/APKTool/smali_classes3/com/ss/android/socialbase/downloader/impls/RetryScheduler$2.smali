.class Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->doScheduleAllTaskRetry(IZ)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;

.field final synthetic val$force:Z

.field final synthetic val$level:I


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;IZ)V
    .locals 0

    .line 318
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$2;->this$0:Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;

    iput p2, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$2;->val$level:I

    iput-boolean p3, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$2;->val$force:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 14

    .line 322
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$2;->this$0:Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->access$600(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;)I

    move-result v0

    if-gtz v0, :cond_0

    return-void

    .line 326
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$2;->this$0:Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->access$700(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;)I

    move-result v0

    if-nez v0, :cond_1

    return-void

    :cond_1
    const-string v1, "RetryScheduler"

    .line 330
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "doScheduleAllTaskRetry: mWaitingRetryTasksCount = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$2;->this$0:Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;

    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->access$600(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;)I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 331
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    .line 332
    new-instance v9, Ljava/util/ArrayList;

    invoke-direct {v9}, Ljava/util/ArrayList;-><init>()V

    .line 333
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$2;->this$0:Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;

    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->access$800(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;)Landroid/util/SparseArray;

    move-result-object v10

    monitor-enter v10
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v11, 0x0

    move v12, v11

    .line 334
    :goto_0
    :try_start_1
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$2;->this$0:Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;

    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->access$800(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;)Landroid/util/SparseArray;

    move-result-object v1

    invoke-virtual {v1}, Landroid/util/SparseArray;->size()I

    move-result v1

    if-ge v12, v1, :cond_4

    .line 335
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$2;->this$0:Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;

    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->access$800(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;)Landroid/util/SparseArray;

    move-result-object v1

    invoke-virtual {v1, v12}, Landroid/util/SparseArray;->valueAt(I)Ljava/lang/Object;

    move-result-object v1

    move-object v13, v1

    check-cast v13, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;

    if-eqz v13, :cond_3

    .line 336
    iget v4, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$2;->val$level:I

    iget-boolean v6, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$2;->val$force:Z

    move-object v1, v13

    move-wide v2, v7

    move v5, v0

    invoke-virtual/range {v1 .. v6}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->canRetry(JIIZ)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 338
    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$2;->val$force:Z

    if-eqz v1, :cond_2

    .line 339
    invoke-virtual {v13}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->resetRetryInterval()V

    .line 341
    :cond_2
    invoke-interface {v9, v13}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_3
    add-int/lit8 v12, v12, 0x1

    goto :goto_0

    .line 344
    :cond_4
    monitor-exit v10
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 347
    :try_start_2
    invoke-interface {v9}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_5

    .line 348
    invoke-interface {v9}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_5

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;

    .line 349
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$2;->this$0:Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;

    iget v2, v2, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->id:I

    invoke-static {v3, v2, v0, v11}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->access$900(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;IIZ)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_1

    :catchall_0
    move-exception v0

    .line 344
    :try_start_3
    monitor-exit v10
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    :try_start_4
    throw v0
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0

    :catch_0
    :cond_5
    return-void
.end method
