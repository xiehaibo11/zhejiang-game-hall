.class final Lcom/mbridge/msdk/foundation/same/report/b$3;
.super Ljava/lang/Object;
.source "MBBatchReportManager.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/foundation/same/report/b;->a(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/mbridge/msdk/foundation/same/report/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/foundation/same/report/b;Ljava/lang/String;)V
    .locals 0

    .line 340
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/b$3;->b:Lcom/mbridge/msdk/foundation/same/report/b;

    iput-object p2, p0, Lcom/mbridge/msdk/foundation/same/report/b$3;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    .line 342
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/b$3;->b:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->b(Lcom/mbridge/msdk/foundation/same/report/b;)Lcom/mbridge/msdk/foundation/db/BatchReportDao;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/b$3;->b:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->e(Lcom/mbridge/msdk/foundation/same/report/b;)Z

    move-result v0

    if-nez v0, :cond_0

    goto/16 :goto_0

    .line 346
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->d()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u63a5\u6536\u5230\u4e0a\u62a5\u6570\u636e\uff1a "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/foundation/same/report/b$3;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 347
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/b$3;->b:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->b(Lcom/mbridge/msdk/foundation/same/report/b;)Lcom/mbridge/msdk/foundation/db/BatchReportDao;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/same/report/b$3;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/db/BatchReportDao;->addReportMessage(Ljava/lang/String;)V

    .line 349
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/b$3;->b:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->a(Lcom/mbridge/msdk/foundation/same/report/b;)Landroid/os/Handler;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/b$3;->b:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->f(Lcom/mbridge/msdk/foundation/same/report/b;)J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-lez v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/b$3;->b:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->a(Lcom/mbridge/msdk/foundation/same/report/b;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/os/Handler;->hasMessages(I)Z

    move-result v0

    if-nez v0, :cond_1

    .line 350
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 351
    iput v1, v0, Landroid/os/Message;->what:I

    .line 352
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/same/report/b$3;->b:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/same/report/b;->a(Lcom/mbridge/msdk/foundation/same/report/b;)Landroid/os/Handler;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/foundation/same/report/b$3;->b:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/same/report/b;->f(Lcom/mbridge/msdk/foundation/same/report/b;)J

    move-result-wide v2

    invoke-virtual {v1, v0, v2, v3}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    .line 355
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/b$3;->b:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->c(Lcom/mbridge/msdk/foundation/same/report/b;)Ljava/util/concurrent/atomic/AtomicInteger;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->incrementAndGet()I

    move-result v0

    .line 357
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/same/report/b$3;->b:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/same/report/b;->g(Lcom/mbridge/msdk/foundation/same/report/b;)I

    move-result v1

    if-lt v0, v1, :cond_2

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/b$3;->b:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->a(Lcom/mbridge/msdk/foundation/same/report/b;)Landroid/os/Handler;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 359
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 360
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 361
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    const-string v4, "last_report_time"

    invoke-virtual {v1, v4, v2, v3}, Landroid/os/Bundle;->putLong(Ljava/lang/String;J)V

    .line 362
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    const/4 v1, 0x2

    .line 363
    iput v1, v0, Landroid/os/Message;->what:I

    .line 364
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/same/report/b$3;->b:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/same/report/b;->a(Lcom/mbridge/msdk/foundation/same/report/b;)Landroid/os/Handler;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 365
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/b$3;->b:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->c(Lcom/mbridge/msdk/foundation/same/report/b;)Ljava/util/concurrent/atomic/AtomicInteger;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    :cond_2
    :goto_0
    return-void
.end method
