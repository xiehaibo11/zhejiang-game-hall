.class Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/thread/DownloadWatchDog$IWatcher;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;

.field private watchTimes:I


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;)V
    .locals 0

    .line 1448
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher$1;->this$0:Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onScheduleWatch()J
    .locals 12

    .line 1453
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher$1;->this$0:Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;->access$000(Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;)Z

    move-result v0

    const-wide/16 v1, -0x1

    if-nez v0, :cond_5

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher$1;->this$0:Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;->access$100(Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_1

    .line 1456
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher$1;->this$0:Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;

    monitor-enter v0

    .line 1457
    :try_start_0
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher$1;->this$0:Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;

    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;->access$200(Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;)Lcom/ss/android/socialbase/downloader/model/HttpResponse;

    move-result-object v3

    if-nez v3, :cond_4

    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher$1;->this$0:Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;

    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;->access$300(Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;)Lcom/ss/android/socialbase/downloader/model/HttpResponse;

    move-result-object v3

    if-eqz v3, :cond_1

    goto :goto_0

    .line 1461
    :cond_1
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher$1;->this$0:Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;

    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;->access$400(Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;)J

    move-result-wide v10

    const-wide/16 v3, 0x0

    cmp-long v3, v10, v3

    if-gtz v3, :cond_2

    .line 1463
    monitor-exit v0

    return-wide v1

    .line 1465
    :cond_2
    iget v1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher$1;->watchTimes:I

    add-int/lit8 v1, v1, 0x1

    iput v1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher$1;->watchTimes:I

    .line 1468
    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher$1;->this$0:Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;

    const/4 v5, 0x0

    .line 1469
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    move-wide v8, v10

    .line 1468
    invoke-static/range {v4 .. v9}, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;->access$500(Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;ZJJ)Lcom/ss/android/socialbase/downloader/segment/SegmentReader;

    move-result-object v1

    if-eqz v1, :cond_3

    const-string v2, "SegmentDispatcher"

    const-string v3, "connectWatcher: switchUrl and reconnect"

    .line 1472
    invoke-static {v2, v3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1473
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher$1;->this$0:Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;

    invoke-static {v2, v1}, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;->access$600(Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;Lcom/ss/android/socialbase/downloader/segment/SegmentReader;)Z

    .line 1477
    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->reconnect()V

    .line 1480
    iget v1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher$1;->watchTimes:I

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher$1;->this$0:Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;->access$700(Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;)Ljava/util/List;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    div-int/2addr v1, v2

    add-int/lit8 v1, v1, 0x1

    int-to-long v1, v1

    mul-long/2addr v1, v10

    monitor-exit v0

    return-wide v1

    .line 1483
    :cond_3
    monitor-exit v0

    return-wide v10

    .line 1459
    :cond_4
    :goto_0
    monitor-exit v0

    return-wide v1

    :catchall_0
    move-exception v1

    .line 1484
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    :cond_5
    :goto_1
    return-wide v1
.end method
