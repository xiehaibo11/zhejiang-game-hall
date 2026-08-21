.class final Lcom/mbridge/msdk/foundation/same/report/b$2;
.super Lcom/mbridge/msdk/foundation/same/report/d/b;
.source "MBBatchReportManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/foundation/same/report/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:J

.field final synthetic b:Ljava/util/ArrayList;

.field final synthetic c:Lcom/mbridge/msdk/foundation/same/report/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/foundation/same/report/b;JLjava/util/ArrayList;)V
    .locals 0

    .line 245
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/b$2;->c:Lcom/mbridge/msdk/foundation/same/report/b;

    iput-wide p2, p0, Lcom/mbridge/msdk/foundation/same/report/b$2;->a:J

    iput-object p4, p0, Lcom/mbridge/msdk/foundation/same/report/b$2;->b:Ljava/util/ArrayList;

    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/same/report/d/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailed(Ljava/lang/String;)V
    .locals 3

    .line 265
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->d()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u6279\u91cf\u4e0a\u62a5\u5931\u8d25\uff1a "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 266
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/b$2;->c:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/same/report/b;->d(Lcom/mbridge/msdk/foundation/same/report/b;)Ljava/util/Stack;

    move-result-object p1

    monitor-enter p1

    .line 267
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/b$2;->c:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->d(Lcom/mbridge/msdk/foundation/same/report/b;)Ljava/util/Stack;

    move-result-object v0

    iget-wide v1, p0, Lcom/mbridge/msdk/foundation/same/report/b$2;->a:J

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/Stack;->add(Ljava/lang/Object;)Z

    .line 270
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/b$2;->c:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->b(Lcom/mbridge/msdk/foundation/same/report/b;)Lcom/mbridge/msdk/foundation/db/BatchReportDao;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 271
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/b$2;->c:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->b(Lcom/mbridge/msdk/foundation/same/report/b;)Lcom/mbridge/msdk/foundation/db/BatchReportDao;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/same/report/b$2;->b:Ljava/util/ArrayList;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/db/BatchReportDao;->updateMessagesReportState(Ljava/util/ArrayList;)V

    .line 274
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/b$2;->c:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->d(Lcom/mbridge/msdk/foundation/same/report/b;)Ljava/util/Stack;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/Stack;->size()I

    move-result v0

    const/4 v1, 0x5

    if-lt v0, v1, :cond_2

    .line 275
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->d()Ljava/lang/String;

    move-result-object v0

    const-string v1, "\u6279\u91cf\u4e0a\u62a5\u5931\u8d25\uff0c\u4e0a\u62a5\u5931\u8d25\u7684\u6570\u636e\u8d85\u8fc7\u9608\u503c"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 279
    :try_start_1
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/b$2;->c:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->d(Lcom/mbridge/msdk/foundation/same/report/b;)Ljava/util/Stack;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/Stack;->pop()Ljava/lang/Object;

    .line 281
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/b$2;->c:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->d(Lcom/mbridge/msdk/foundation/same/report/b;)Ljava/util/Stack;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/Stack;->pop()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Long;

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    .line 282
    iget-object v2, p0, Lcom/mbridge/msdk/foundation/same/report/b$2;->c:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/same/report/b;->d(Lcom/mbridge/msdk/foundation/same/report/b;)Ljava/util/Stack;

    move-result-object v2

    invoke-virtual {v2}, Ljava/util/Stack;->clear()V

    .line 283
    iget-object v2, p0, Lcom/mbridge/msdk/foundation/same/report/b$2;->c:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/same/report/b;->b(Lcom/mbridge/msdk/foundation/same/report/b;)Lcom/mbridge/msdk/foundation/db/BatchReportDao;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 284
    iget-object v2, p0, Lcom/mbridge/msdk/foundation/same/report/b$2;->c:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/same/report/b;->b(Lcom/mbridge/msdk/foundation/same/report/b;)Lcom/mbridge/msdk/foundation/db/BatchReportDao;

    move-result-object v2

    invoke-virtual {v2, v0, v1}, Lcom/mbridge/msdk/foundation/db/BatchReportDao;->deleteBatchReportMessagesByTimestamp(J)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 289
    :cond_1
    :try_start_2
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/b$2;->c:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->d(Lcom/mbridge/msdk/foundation/same/report/b;)Ljava/util/Stack;

    move-result-object v0

    :goto_0
    invoke-virtual {v0}, Ljava/util/Stack;->clear()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_2

    :catchall_0
    move-exception v0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 287
    :try_start_3
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->d()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 289
    :try_start_4
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/b$2;->c:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->d(Lcom/mbridge/msdk/foundation/same/report/b;)Ljava/util/Stack;

    move-result-object v0

    goto :goto_0

    :goto_1
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/same/report/b$2;->c:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/same/report/b;->d(Lcom/mbridge/msdk/foundation/same/report/b;)Ljava/util/Stack;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/Stack;->clear()V

    .line 290
    throw v0

    .line 292
    :cond_2
    :goto_2
    monitor-exit p1

    return-void

    :catchall_1
    move-exception v0

    monitor-exit p1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    throw v0
.end method

.method public final onSuccess(Ljava/lang/String;)V
    .locals 2

    .line 250
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->d()Ljava/lang/String;

    move-result-object p1

    const-string v0, "\u6279\u91cf\u4e0a\u62a5\u6210\u529f"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 252
    :try_start_0
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/b$2;->c:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/same/report/b;->b(Lcom/mbridge/msdk/foundation/same/report/b;)Lcom/mbridge/msdk/foundation/db/BatchReportDao;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 253
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/b$2;->c:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/same/report/b;->b(Lcom/mbridge/msdk/foundation/same/report/b;)Lcom/mbridge/msdk/foundation/db/BatchReportDao;

    move-result-object p1

    iget-wide v0, p0, Lcom/mbridge/msdk/foundation/same/report/b$2;->a:J

    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/foundation/db/BatchReportDao;->deleteBatchReportMessagesByTimestamp(J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 256
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->d()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 258
    :cond_0
    :goto_0
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/b$2;->c:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/same/report/b;->d(Lcom/mbridge/msdk/foundation/same/report/b;)Ljava/util/Stack;

    move-result-object p1

    monitor-enter p1

    .line 259
    :try_start_1
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/b$2;->c:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->d(Lcom/mbridge/msdk/foundation/same/report/b;)Ljava/util/Stack;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/Stack;->clear()V

    .line 260
    monitor-exit p1

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v0
.end method
