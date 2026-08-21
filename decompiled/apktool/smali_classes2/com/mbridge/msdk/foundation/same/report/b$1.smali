.class final Lcom/mbridge/msdk/foundation/same/report/b$1;
.super Landroid/os/Handler;
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
.field final synthetic a:Lcom/mbridge/msdk/foundation/same/report/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/foundation/same/report/b;Landroid/os/Looper;)V
    .locals 0

    .line 140
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/b$1;->a:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 5

    .line 143
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x2

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-eq v0, v2, :cond_3

    const-string v4, "last_report_time"

    if-eq v0, v1, :cond_1

    const/4 v1, 0x3

    if-eq v0, v1, :cond_0

    goto/16 :goto_2

    .line 171
    :cond_0
    invoke-virtual {p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object p1

    if-eqz p1, :cond_5

    const-string v0, "report_message"

    .line 173
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getParcelableArrayList(Ljava/lang/String;)Ljava/util/ArrayList;

    move-result-object v0

    .line 174
    invoke-virtual {p1, v4}, Landroid/os/Bundle;->getLong(Ljava/lang/String;)J

    move-result-wide v1

    .line 175
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/b$1;->a:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {p1, v0, v1, v2}, Lcom/mbridge/msdk/foundation/same/report/b;->b(Lcom/mbridge/msdk/foundation/same/report/b;Ljava/util/ArrayList;J)V

    goto/16 :goto_2

    .line 159
    :cond_1
    invoke-virtual {p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object p1

    .line 160
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/b$1;->a:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->a(Lcom/mbridge/msdk/foundation/same/report/b;)Landroid/os/Handler;

    move-result-object v0

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/b$1;->a:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->b(Lcom/mbridge/msdk/foundation/same/report/b;)Lcom/mbridge/msdk/foundation/db/BatchReportDao;

    move-result-object v0

    if-eqz v0, :cond_5

    if-eqz p1, :cond_5

    .line 161
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/b$1;->a:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->a(Lcom/mbridge/msdk/foundation/same/report/b;)Landroid/os/Handler;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/os/Handler;->removeMessages(I)V

    .line 162
    invoke-virtual {p1, v4}, Landroid/os/Bundle;->getLong(Ljava/lang/String;)J

    move-result-wide v0

    .line 163
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/b$1;->a:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/same/report/b;->b(Lcom/mbridge/msdk/foundation/same/report/b;)Lcom/mbridge/msdk/foundation/db/BatchReportDao;

    move-result-object p1

    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/foundation/db/BatchReportDao;->getBatchReportMessages(J)Ljava/util/ArrayList;

    move-result-object p1

    .line 164
    iget-object v2, p0, Lcom/mbridge/msdk/foundation/same/report/b$1;->a:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v2, p1, v0, v1}, Lcom/mbridge/msdk/foundation/same/report/b;->a(Lcom/mbridge/msdk/foundation/same/report/b;Ljava/util/ArrayList;J)V

    .line 165
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->d()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u961f\u5217\u4e0a\u62a5\u89e6\u53d1\u4e86\uff0c\u9700\u8981\u4e0a\u62a5\u7684\u6570\u636e\uff1a "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-nez p1, :cond_2

    goto :goto_0

    :cond_2
    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result v3

    :goto_0
    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 146
    :cond_3
    invoke-virtual {p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object p1

    .line 147
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/b$1;->a:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->a(Lcom/mbridge/msdk/foundation/same/report/b;)Landroid/os/Handler;

    move-result-object v0

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/b$1;->a:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->b(Lcom/mbridge/msdk/foundation/same/report/b;)Lcom/mbridge/msdk/foundation/db/BatchReportDao;

    move-result-object v0

    if-eqz v0, :cond_5

    if-eqz p1, :cond_5

    .line 148
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/b$1;->a:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/same/report/b;->a(Lcom/mbridge/msdk/foundation/same/report/b;)Landroid/os/Handler;

    move-result-object p1

    invoke-virtual {p1, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 149
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 150
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/b$1;->a:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/same/report/b;->b(Lcom/mbridge/msdk/foundation/same/report/b;)Lcom/mbridge/msdk/foundation/db/BatchReportDao;

    move-result-object p1

    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/foundation/db/BatchReportDao;->getBatchReportMessages(J)Ljava/util/ArrayList;

    move-result-object p1

    .line 151
    iget-object v2, p0, Lcom/mbridge/msdk/foundation/same/report/b$1;->a:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v2, p1, v0, v1}, Lcom/mbridge/msdk/foundation/same/report/b;->a(Lcom/mbridge/msdk/foundation/same/report/b;Ljava/util/ArrayList;J)V

    .line 152
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/b$1;->a:Lcom/mbridge/msdk/foundation/same/report/b;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->c(Lcom/mbridge/msdk/foundation/same/report/b;)Ljava/util/concurrent/atomic/AtomicInteger;

    move-result-object v0

    invoke-virtual {v0, v3}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    .line 153
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->d()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u8d85\u65f6\u4e0a\u62a5\u89e6\u53d1\u4e86\uff0c\u9700\u8981\u4e0a\u62a5\u7684\u6570\u636e\uff1a "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-nez p1, :cond_4

    goto :goto_1

    :cond_4
    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result v3

    :goto_1
    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    :goto_2
    return-void
.end method
