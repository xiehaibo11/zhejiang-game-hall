.class final Lcom/mbridge/msdk/click/c$1;
.super Landroid/os/Handler;
.source "CommonClickUtil.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/click/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>(Landroid/os/Looper;)V
    .locals 0

    .line 122
    invoke-direct {p0, p1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 8

    .line 125
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 127
    :try_start_0
    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v1, 0x3e8

    if-eq v0, v1, :cond_0

    goto :goto_1

    .line 129
    :cond_0
    iget v3, p1, Landroid/os/Message;->arg1:I

    .line 130
    iget v4, p1, Landroid/os/Message;->arg2:I

    .line 131
    invoke-virtual {p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v0, ""

    if-eqz p1, :cond_1

    :try_start_1
    const-string v0, "rid"

    .line 136
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "rid_n"

    .line 137
    invoke-virtual {p1, v1}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "cid"

    .line 138
    invoke-virtual {p1, v2}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    move-object v7, p1

    move-object v5, v0

    move-object v6, v1

    goto :goto_0

    :cond_1
    move-object v5, v0

    move-object v6, v5

    move-object v7, v6

    .line 140
    :goto_0
    new-instance v2, Lcom/mbridge/msdk/foundation/same/report/d;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    invoke-direct {v2, p1}, Lcom/mbridge/msdk/foundation/same/report/d;-><init>(Landroid/content/Context;)V

    invoke-virtual/range {v2 .. v7}, Lcom/mbridge/msdk/foundation/same/report/d;->a(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 144
    sget-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v0, :cond_2

    .line 145
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_2
    :goto_1
    return-void
.end method
